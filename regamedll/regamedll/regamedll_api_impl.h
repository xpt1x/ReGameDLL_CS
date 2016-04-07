/*
*
*    This program is free software; you can redistribute it and/or modify it
*    under the terms of the GNU General Public License as published by the
*    Free Software Foundation; either version 2 of the License, or (at
*    your option) any later version.
*
*    This program is distributed in the hope that it will be useful, but
*    WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*    General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program; if not, write to the Free Software Foundation,
*    Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*    In addition, as a special exception, the author gives permission to
*    link the code of this program with the Half-Life Game Engine ("HL
*    Engine") and Modified Game Libraries ("MODs") developed by Valve,
*    L.L.C ("Valve").  You must obey the GNU General Public License in all
*    respects for all of the code used other than the HL Engine and MODs
*    from Valve.  If you modify this file, you may extend this exception
*    to your version of the file, but you are not obligated to do so.  If
*    you do not wish to do so, delete this exception statement from your
*    version.
*
*/
#pragma once

#include "archtypes.h"
#include "regamedll_api.h"
#include "regamedll_interfaces_impl.h"

// CBasePlayer::Spawn hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_Spawn;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_Spawn;

// CBasePlayer::Precache hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_Precache;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_Precache;

// CBasePlayer::ObjectCaps hook
typedef IHookChainClassImpl<int, CBasePlayer> CRegameHook_CBasePlayer_ObjectCaps;
typedef IHookChainRegistryClassImpl<int, CBasePlayer> CReGameHookRegistry_CBasePlayer_ObjectCaps;

// CBasePlayer::Classify hook
typedef IHookChainClassImpl<int, CBasePlayer> CRegameHook_CBasePlayer_Classify;
typedef IHookChainRegistryClassImpl<int, CBasePlayer> CReGameHookRegistry_CBasePlayer_Classify;

// CBasePlayer::TraceAttack hook
typedef IVoidHookChainClassImpl<CBasePlayer, entvars_t *, float, Vector &, TraceResult *, int> CRegameHook_CBasePlayer_TraceAttack;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, entvars_t *, float, Vector &, TraceResult *, int> CReGameHookRegistry_CBasePlayer_TraceAttack;

// CBasePlayer::TakeDamage hook
typedef IHookChainClassImpl<int, CBasePlayer, entvars_t *, entvars_t *, float, int> CRegameHook_CBasePlayer_TakeDamage;
typedef IHookChainRegistryClassImpl<int, CBasePlayer, entvars_t *, entvars_t *, float, int> CReGameHookRegistry_CBasePlayer_TakeDamage;

// CBasePlayer::TakeHealth hook
typedef IHookChainClassImpl<int, CBasePlayer, float, int> CRegameHook_CBasePlayer_TakeHealth;
typedef IHookChainRegistryClassImpl<int, CBasePlayer, float, int> CReGameHookRegistry_CBasePlayer_TakeHealth;

// CBasePlayer::Killed hook
typedef IVoidHookChainClassImpl<CBasePlayer, entvars_t *, int> CRegameHook_CBasePlayer_Killed;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, entvars_t *, int> CReGameHookRegistry_CBasePlayer_Killed;

// CBasePlayer::AddPoints hook
typedef IVoidHookChainClassImpl<CBasePlayer, int, BOOL> CRegameHook_CBasePlayer_AddPoints;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, int, BOOL> CReGameHookRegistry_CBasePlayer_AddPoints;

// CBasePlayer::AddPointsToTeam hook
typedef IVoidHookChainClassImpl<CBasePlayer, int, BOOL> CRegameHook_CBasePlayer_AddPointsToTeam;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, int, BOOL> CReGameHookRegistry_CBasePlayer_AddPointsToTeam;

// CBasePlayer::AddPlayerItem hook
typedef IHookChainClassImpl<BOOL, CBasePlayer, CBasePlayerItem *> CRegameHook_CBasePlayer_AddPlayerItem;
typedef IHookChainRegistryClassImpl<BOOL, CBasePlayer, CBasePlayerItem *> CReGameHookRegistry_CBasePlayer_AddPlayerItem;

// CBasePlayer::RemovePlayerItem hook
typedef IHookChainClassImpl<BOOL, CBasePlayer, CBasePlayerItem *> CRegameHook_CBasePlayer_RemovePlayerItem;
typedef IHookChainRegistryClassImpl<BOOL, CBasePlayer, CBasePlayerItem *> CReGameHookRegistry_CBasePlayer_RemovePlayerItem;

// CBasePlayer::GiveAmmo hook
typedef IHookChainClassImpl<int, CBasePlayer, int , char *, int> CRegameHook_CBasePlayer_GiveAmmo;
typedef IHookChainRegistryClassImpl<int, CBasePlayer, int , char *, int> CReGameHookRegistry_CBasePlayer_GiveAmmo;

// CBasePlayer::ResetMaxSpeed hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_ResetMaxSpeed;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_ResetMaxSpeed;

// CBasePlayer::Jump hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_Jump;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_Jump;

// CBasePlayer::Duck hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_Duck;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_Duck;

// CBasePlayer::PreThink hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_PreThink;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_PreThink;

// CBasePlayer::PostThink hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_PostThink;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_PostThink;

// CBasePlayer::UpdateClientData hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_UpdateClientData;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_UpdateClientData;

// CBasePlayer::ImpulseCommands hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_ImpulseCommands;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_ImpulseCommands;

// CBasePlayer::RoundRespawn hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_RoundRespawn;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_RoundRespawn;

// CBasePlayer::Blind hook
typedef IVoidHookChainClassImpl<CBasePlayer, float, float, float, int> CRegameHook_CBasePlayer_Blind;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, float, float, float, int> CReGameHookRegistry_CBasePlayer_Blind;


// CBasePlayer::Observer_IsValidTarget hook
typedef IHookChainClassImpl<CBaseEntity *, CBasePlayer, int, bool> CReGameHook_CBasePlayer_Observer_IsValidTarget;
typedef IHookChainRegistryClassImpl<CBaseEntity *, CBasePlayer, int, bool> CReGameHookRegistry_CBasePlayer_Observer_IsValidTarget;

// CBasePlayer::SetAnimation hook
typedef IVoidHookChainClassImpl<CBasePlayer, PLAYER_ANIM> CRegameHook_CBasePlayer_SetAnimation;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, PLAYER_ANIM> CReGameHookRegistry_CBasePlayer_SetAnimation;

// CBasePlayer::GiveDefaultItems hook
typedef IVoidHookChainClassImpl<CBasePlayer> CRegameHook_CBasePlayer_GiveDefaultItems;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer> CReGameHookRegistry_CBasePlayer_GiveDefaultItems;

// CBasePlayer::GiveNamedItem hook
typedef IVoidHookChainClassImpl<CBasePlayer, const char *> CRegameHook_CBasePlayer_GiveNamedItem;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, const char *> CReGameHookRegistry_CBasePlayer_GiveNamedItem;

// CBasePlayer::AddAccount hook
typedef IVoidHookChainClassImpl<CBasePlayer, int, bool> CRegameHook_CBasePlayer_AddAccount;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, int, bool> CReGameHookRegistry_CBasePlayer_AddAccount;

// CBasePlayer::AddAccount hook
typedef IVoidHookChainClassImpl<CBasePlayer, bool> CRegameHook_CBasePlayer_GiveShield;
typedef IVoidHookChainRegistryClassImpl<CBasePlayer, bool> CReGameHookRegistry_CBasePlayer_GiveShield;




// GetForceCamera hook
typedef IHookChainImpl<int, class CBasePlayer *> CReGameHook_GetForceCamera;
typedef IHookChainRegistryImpl<int, class CBasePlayer *> CReGameHookRegistry_GetForceCamera;

// PlayerBlind hook
typedef IVoidHookChainImpl<CBasePlayer *, entvars_t *, entvars_t *, float, float, int, Vector &> CReGameHook_PlayerBlind;
typedef IVoidHookChainRegistryImpl<CBasePlayer *, entvars_t *, entvars_t *, float, float, int, Vector &> CReGameHookRegistry_PlayerBlind;

// RadiusFlash_TraceLine hook
typedef IVoidHookChainImpl<CBasePlayer *, entvars_t *, entvars_t *, Vector &, Vector &, TraceResult *> CReGameHook_RadiusFlash_TraceLine;
typedef IVoidHookChainRegistryImpl<CBasePlayer *, entvars_t *, entvars_t *, Vector &, Vector &, TraceResult *> CReGameHookRegistry_RadiusFlash_TraceLine;

class CReGameHookchains: public IReGameHookchains {
public:
	// CBasePlayer virtual
	CReGameHookRegistry_CBasePlayer_Spawn m_CBasePlayer_Spawn;
	CReGameHookRegistry_CBasePlayer_Precache m_CBasePlayer_Precache;
	CReGameHookRegistry_CBasePlayer_ObjectCaps m_CBasePlayer_ObjectCaps;
	CReGameHookRegistry_CBasePlayer_Classify m_CBasePlayer_Classify;
	CReGameHookRegistry_CBasePlayer_TraceAttack m_CBasePlayer_TraceAttack;
	CReGameHookRegistry_CBasePlayer_TakeDamage m_CBasePlayer_TakeDamage;
	CReGameHookRegistry_CBasePlayer_TakeHealth m_CBasePlayer_TakeHealth;
	CReGameHookRegistry_CBasePlayer_Killed m_CBasePlayer_Killed;
	CReGameHookRegistry_CBasePlayer_AddPoints m_CBasePlayer_AddPoints;
	CReGameHookRegistry_CBasePlayer_AddPointsToTeam m_CBasePlayer_AddPointsToTeam;
	CReGameHookRegistry_CBasePlayer_AddPlayerItem m_CBasePlayer_AddPlayerItem;
	CReGameHookRegistry_CBasePlayer_RemovePlayerItem m_CBasePlayer_RemovePlayerItem;
	CReGameHookRegistry_CBasePlayer_GiveAmmo m_CBasePlayer_GiveAmmo;
	CReGameHookRegistry_CBasePlayer_ResetMaxSpeed m_CBasePlayer_ResetMaxSpeed;
	CReGameHookRegistry_CBasePlayer_Jump m_CBasePlayer_Jump;
	CReGameHookRegistry_CBasePlayer_Duck m_CBasePlayer_Duck;
	CReGameHookRegistry_CBasePlayer_PreThink m_CBasePlayer_PreThink;
	CReGameHookRegistry_CBasePlayer_PostThink m_CBasePlayer_PostThink;
	CReGameHookRegistry_CBasePlayer_UpdateClientData m_CBasePlayer_UpdateClientData;
	CReGameHookRegistry_CBasePlayer_ImpulseCommands m_CBasePlayer_ImpulseCommands;
	CReGameHookRegistry_CBasePlayer_RoundRespawn m_CBasePlayer_RoundRespawn;
	CReGameHookRegistry_CBasePlayer_Blind m_CBasePlayer_Blind;

	CReGameHookRegistry_CBasePlayer_Observer_IsValidTarget m_CBasePlayer_Observer_IsValidTarget;
	CReGameHookRegistry_CBasePlayer_SetAnimation m_CBasePlayer_SetAnimation;
	CReGameHookRegistry_CBasePlayer_GiveDefaultItems m_CBasePlayer_GiveDefaultItems;
	CReGameHookRegistry_CBasePlayer_GiveNamedItem m_CBasePlayer_GiveNamedItem;
	CReGameHookRegistry_CBasePlayer_AddAccount m_CBasePlayer_AddAccount;
	CReGameHookRegistry_CBasePlayer_GiveShield m_CBasePlayer_GiveShield;


	CReGameHookRegistry_GetForceCamera m_GetForceCamera;
	CReGameHookRegistry_PlayerBlind m_PlayerBlind;
	CReGameHookRegistry_RadiusFlash_TraceLine m_RadiusFlash_TraceLine;

public:
	virtual IReGameHookRegistry_CBasePlayer_Spawn* CBasePlayer_Spawn();
	virtual IReGameHookRegistry_CBasePlayer_Precache* CBasePlayer_Precache();
	virtual IReGameHookRegistry_CBasePlayer_ObjectCaps* CBasePlayer_ObjectCaps();
	virtual IReGameHookRegistry_CBasePlayer_Classify* CBasePlayer_Classify();
	virtual IReGameHookRegistry_CBasePlayer_TraceAttack* CBasePlayer_TraceAttack();
	virtual IReGameHookRegistry_CBasePlayer_TakeDamage* CBasePlayer_TakeDamage();
	virtual IReGameHookRegistry_CBasePlayer_TakeHealth* CBasePlayer_TakeHealth();
	virtual IReGameHookRegistry_CBasePlayer_Killed* CBasePlayer_Killed();
	virtual IReGameHookRegistry_CBasePlayer_AddPoints* CBasePlayer_AddPoints();
	virtual IReGameHookRegistry_CBasePlayer_AddPointsToTeam* CBasePlayer_AddPointsToTeam();
	virtual IReGameHookRegistry_CBasePlayer_AddPlayerItem* CBasePlayer_AddPlayerItem();
	virtual IReGameHookRegistry_CBasePlayer_RemovePlayerItem* CBasePlayer_RemovePlayerItem();
	virtual IReGameHookRegistry_CBasePlayer_GiveAmmo* CBasePlayer_GiveAmmo();
	virtual IReGameHookRegistry_CBasePlayer_ResetMaxSpeed* CBasePlayer_ResetMaxSpeed();
	virtual IReGameHookRegistry_CBasePlayer_Jump* CBasePlayer_Jump();
	virtual IReGameHookRegistry_CBasePlayer_Duck* CBasePlayer_Duck();
	virtual IReGameHookRegistry_CBasePlayer_PreThink* CBasePlayer_PreThink();
	virtual IReGameHookRegistry_CBasePlayer_PostThink* CBasePlayer_PostThink();
	virtual IReGameHookRegistry_CBasePlayer_UpdateClientData* CBasePlayer_UpdateClientData();
	virtual IReGameHookRegistry_CBasePlayer_ImpulseCommands* CBasePlayer_ImpulseCommands();
	virtual IReGameHookRegistry_CBasePlayer_RoundRespawn* CBasePlayer_RoundRespawn();
	virtual IReGameHookRegistry_CBasePlayer_Blind* CBasePlayer_Blind();

	virtual IReGameHookRegistry_CBasePlayer_Observer_IsValidTarget* CBasePlayer_Observer_IsValidTarget();
	virtual IReGameHookRegistry_CBasePlayer_SetAnimation* CBasePlayer_SetAnimation();
	virtual IReGameHookRegistry_CBasePlayer_GiveDefaultItems* CBasePlayer_GiveDefaultItems();
	virtual IReGameHookRegistry_CBasePlayer_GiveNamedItem* CBasePlayer_GiveNamedItem();
	virtual IReGameHookRegistry_CBasePlayer_AddAccount* CBasePlayer_AddAccount();
	virtual IReGameHookRegistry_CBasePlayer_GiveShield* CBasePlayer_GiveShield();




	virtual IReGameHookRegistry_GetForceCamera* GetForceCamera();
	virtual IReGameHookRegistry_PlayerBlind* PlayerBlind();
	virtual IReGameHookRegistry_RadiusFlash_TraceLine* RadiusFlash_TraceLine();

};

extern CReGameHookchains g_ReGameHookchains;
extern CReGameData g_ReGameData;
extern ReGameFuncs_t g_ReGameApiFuncs;

class CReGameApi: public IReGameApi {
public:
	virtual int GetMajorVersion();
	virtual int GetMinorVersion();

	virtual const ReGameFuncs_t *GetFuncs();
	virtual IReGameHookchains *GetHookchains();
	virtual IReGameData* GetGameData();
};

extern void Regamedll_CopyString_api(char *dest, const char *source);
