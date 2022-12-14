/*
	HardWar-Hack-Internal
	Hangar.cpp
	11-1-2022
*/

#include "Hangar.h"
#include "Offsets.h"

Hangar::Hangar()
{
	pHangarAddress = 0;
	m_cTerminalName = "NULL";
	m_cDisplayName = "NULL";
	m_iClearanceLvl = 0;
	m_iCashHeld = 0;
	m_pdwEnemyList = 0;
	m_pdwOwner = 0;
	m_pdwBay0 = 0;
	m_pdwBay1 = 0;
	m_pdwBay2 = 0;
	m_pdwBay3 = 0;
	m_pdwBay4 = 0;
	m_pdwBay5 = 0;
}

Hangar::Hangar(DWORD hangarAddress)
{
	pHangarAddress = (DWORD)(hangarAddress);
	m_cTerminalName = "NULL";
	m_cDisplayName = "NULL";
	m_iClearanceLvl = 0;
	m_iCashHeld = 0;
	m_pdwEnemyList = 0;
	m_pdwOwner = 0;
	m_pdwBay0 = 0;
	m_pdwBay1 = 0;
	m_pdwBay2 = 0;
	m_pdwBay3 = 0;
	m_pdwBay4 = 0;
	m_pdwBay5 = 0;
}

Hangar::Hangar(DWORD modBase, DWORD offset)
{
	pHangarAddress = *(DWORD*)(modBase + offset);
	m_cTerminalName = "NULL";
	m_cDisplayName = "NULL";
	m_iClearanceLvl = 0;
	m_iCashHeld = 0;
	m_pdwEnemyList = 0;
	m_pdwOwner = 0;
	m_pdwBay0 = 0;
	m_pdwBay1 = 0;
	m_pdwBay2 = 0;
	m_pdwBay3 = 0;
	m_pdwBay4 = 0;
	m_pdwBay5 = 0;
}

DWORD Hangar::GetEnemyList()
{
	m_pdwEnemyList = (DWORD*)(pHangarAddress + offsets::enemyList);
	return *m_pdwEnemyList;
}

DWORD Hangar::GetBay0()
{
	m_pdwBay0 = (DWORD*)(pHangarAddress + offsets::hangarBay0);
	return *m_pdwBay0;
}

DWORD Hangar::GetBay1()
{
	m_pdwBay1 = (DWORD*)(pHangarAddress + offsets::hangarBay1);
	return *m_pdwBay1;
}

DWORD Hangar::GetBay2()
{
	m_pdwBay2 = (DWORD*)(pHangarAddress + offsets::hangarBay2);
	return *m_pdwBay2;
}

DWORD Hangar::GetBay3()
{
	m_pdwBay3 = (DWORD*)(pHangarAddress + offsets::hangarBay3);
	return *m_pdwBay3;
}

DWORD Hangar::GetBay4()
{
	m_pdwBay4 = (DWORD*)(pHangarAddress + offsets::hangarBay4);
	return *m_pdwBay4;
}

DWORD Hangar::GetBay5()
{
	m_pdwBay5 = (DWORD*)(pHangarAddress + offsets::hangarBay5);
	return *m_pdwBay5;
}

DWORD Hangar::GetHangarEntity()
{
	return pHangarAddress;
}

int Hangar::GetCashHeld()
{
	m_iCashHeld = (int*)(pHangarAddress + offsets::hangarCash);
	return *m_iCashHeld;
}

char* Hangar::GetHangarName()
{
	m_cDisplayName = (char*)(pHangarAddress + offsets::hangarName);
	return m_cDisplayName;
}

void Hangar::SetHangarAddress(DWORD hangarAddress)
{
	pHangarAddress = (DWORD)(hangarAddress);
}