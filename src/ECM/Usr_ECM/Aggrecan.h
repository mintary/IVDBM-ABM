/*
* File: Aggrecan.h
*
* File Contents: Contains declarations for Aggrecan (ECM manager) class
*
* Author: Meghana Munipalle
*
*/

#ifndef AGGRECAN_H
#define	AGGRECAN_H

class ECM;

class Aggrecan : public ECM {
public:
	/*
	 * Description:	Default Aggrecan manager constructor.
	 *
	 * Return: void
	 *
	 * Parameters: void
	 */
	Aggrecan();

	/*
	 * Description:	Aggrecan manager constructor. Initializes Aggrecan class members.
	 *
	 * Return: void
	 *
	 * Parameters: x      -- Position of Aggrecan manager in x dimension
	 *             y      -- Position of Aggrecan manager in y dimension
	 *             z      -- Position of Aggrecan manager in z dimension
	 *             index  -- Patch row major index of Aggrecan manager in world
	 */
	Aggrecan(int x, int y, int z, int index);

	/*
	 * Description:	Aggrecan destructor.
	 *
	 * Return: void
	 *
	 * Parameters: void
	 */
	~Aggrecan();

	/*************************************************************************
	 * NON-CONSTANT VARIABLES                                                *
	 *************************************************************************/
	int oaggrecan[2], naggrecan[2], faggrecan[2];    // The number of original aggrecan (monomer), new aggrecan and fragmented aggrecan at the beginning and end of each tick
	int requestfaggrecan[27];    // Keeps track of all neighbors' requests for fragmented aggrecan.

	bool faggDangerSignal[2];    // Whether or not there is a fragmented aggrecan signalling danger at the beginning and end of each tick

	/*************************************************************************
	 * STATIC VARIABLES                                                      *
	 *************************************************************************/
	static int maxaggrecan;     // The maximum amount of aggrecan (of all types) allowed
};