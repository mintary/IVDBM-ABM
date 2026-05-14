/*
* File: Collagen.h
*
* File Contents: Contains declarations for Collagen (ECM manager) class
*
* Author: Meghana Munipalle
* 
*/

#ifndef COLLAGEN_H
#define	COLLAGEN_H

class ECM;

class Collagen : public ECM {
public:
	/*
	 * Description:	Default Collagen manager constructor.
	 *
	 * Return: void
	 *
	 * Parameters: void
	 */
	Collagen();

	/*
	 * Description:	Collagen manager constructor. Initializes Collagen class members.
	 *
	 * Return: void
	 *
	 * Parameters: x      -- Position of Collagen manager in x dimension
	 *             y      -- Position of Collagen manager in y dimension
	 *             z      -- Position of Collagen manager in z dimension
	 *             index  -- Patch row major index of Collagen manager in world
	 */
	Collagen(int x, int y, int z, int index);

	/*
	 * Description:	Collagen destructor.
	 *
	 * Return: void
	 *
	 * Parameters: void
	 */
	~Collagen();

	/*************************************************************************
	 * NON-CONSTANT VARIABLES                                                *
	 *************************************************************************/
	int ocollagen[2], ncollagen[2], fcollagen[2]; // The number of original collagen (tropocollagen monomer), new collagen(collagen) and fragmented collagen at the beginning and end of each tick
	int requestfcollagen[27];   // Keeps track of all neighbors' requests for fragmented collagen.

	bool fcollDangerSignal[2];    // Whether or not there is a fragmented collagen signalling danger at the beginning and end of each tick 

	/*************************************************************************
	 * STATIC VARIABLES                                                      *
	 *************************************************************************/
	static int maxcollagen;    // The maximum amount of collagen (of all types) allowed
};



