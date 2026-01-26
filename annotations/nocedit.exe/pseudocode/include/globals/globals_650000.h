#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/watcom.h"
#include "types/classes/CCameraView_vtable.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CCodec_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"
#include "types/classes/CFileManager_vtable.h"
#include "types/classes/CHero_vtable.h"
#include "types/classes/CParticle_vtable.h"
#include "types/classes/CStrList_vtable.h"
#include "types/classes/CWeapon_vtable.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x650000
// =============================================================================

// CCameraView_vtable
extern CCameraView_vtable g_CCameraViewVTable;
extern CCameraView_vtable g_CDemonCameraVTable;
extern CCameraView_vtable g_CDemonLightVTable;

// CCharacter_vtable
extern CCharacter_vtable DAT_00659E20;
extern CCharacter_vtable DAT_0065A160;
extern CCharacter_vtable DAT_0065A6B0;
extern CCharacter_vtable DAT_0065A870;
extern CCharacter_vtable DAT_0065AB50;
extern CCharacter_vtable DAT_0065AD10;
extern CCharacter_vtable DAT_0065B060;
extern CCharacter_vtable DAT_0065B510;
extern CCharacter_vtable DAT_0065B6D0;
extern CCharacter_vtable DAT_0065B930;
extern CCharacter_vtable DAT_0065BE40;
extern CCharacter_vtable DAT_0065C1A0;
extern CCharacter_vtable DAT_0065CB30;
extern CCharacter_vtable DAT_0065CE80;
extern CCharacter_vtable DAT_0065D1B0;
extern CCharacter_vtable DAT_0065D8C0;
extern CCharacter_vtable DAT_0065E8F0;
extern CCharacter_vtable DAT_0065EB30;
extern CCharacter_vtable DAT_0065EE30;
extern CCharacter_vtable DAT_0065F4E0;
extern CCharacter_vtable DAT_0065F7C0;
extern CCharacter_vtable DAT_0065FA60;
extern CCharacter_vtable DAT_0065FC20;
extern CCharacter_vtable DAT_0065FDD0;
extern CCharacter_vtable DAT_0065FF80;

// CCodec_vtable
extern CCodec_vtable g_CCodecVTable;
extern CCodec_vtable g_CLZWCompressVTable;
extern CCodec_vtable g_CLZWDecompressVTable;

// CDemonActor_vtable
extern CDemonActor_vtable g_CDemonActorVTable;
extern CDemonActor_vtable g_CAmmoVTable;
extern CDemonActor_vtable g_CAmmoBoxVTable;
extern CDemonActor_vtable g_CAnvilVTable;
extern CDemonActor_vtable g_CArmourVTable;
extern CDemonActor_vtable g_CBackgroundActorVTable;
extern CDemonActor_vtable g_CBaronVTable;
extern CDemonActor_vtable g_CBaronWeaponVTable;
extern CDemonActor_vtable g_CBarrierVTable;
extern CDemonActor_vtable g_CBatVTable;
extern CDemonActor_vtable g_CBatCreatureVTable;
extern CDemonActor_vtable g_CBatmanVTable;
extern CDemonActor_vtable g_CBatteryVTable;
extern CDemonActor_vtable g_CBeastVTable;
extern CDemonActor_vtable g_CBiggsVTable;
extern CDemonActor_vtable g_CBodyPartVTable;
extern CDemonActor_vtable g_CBoneGuyVTable;
extern CDemonActor_vtable g_CBoxActorVTable;
extern CDemonActor_vtable g_CLightActorVTable;
extern CDemonActor_vtable g_CBrideVTable;
extern CDemonActor_vtable g_CBugsVTable;
extern CDemonActor_vtable g_CCharacterVTable;
extern CDemonActor_vtable g_CColonelVTable;
extern CDemonActor_vtable g_CConveyorVTable;
extern CDemonActor_vtable g_CZombieCowVTable;
extern CDemonActor_vtable g_CCrateVTable;
extern CDemonActor_vtable g_CCrossbowVTable;
extern CDemonActor_vtable g_CCurtainVTable;
extern CDemonActor_vtable g_CActorDestinationVTable;
extern CDemonActor_vtable g_CZombieDogVTable;
extern CDemonActor_vtable g_CDraculaBrideVTable;
extern CDemonActor_vtable g_CDripVTable;
extern CDemonActor_vtable g_CDroneVTable;
extern CDemonActor_vtable g_CDynamiteVTable;
extern CDemonActor_vtable g_CElephantGunVTable;
extern CDemonActor_vtable g_CEmitterVTable;
extern CDemonActor_vtable g_CEnemyVTable;
extern CDemonActor_vtable g_CFilmReelVTable;
extern CDemonActor_vtable g_CFilmProjectorVTable;
extern CDemonActor_vtable g_CFlameVTable;
extern CDemonActor_vtable g_CFlameCanVTable;
extern CDemonActor_vtable g_CFlameThrowerVTable;
extern CDemonActor_vtable g_CFlashlightVTable;
extern CDemonActor_vtable g_CFliesVTable;
extern CDemonActor_vtable g_CFrankenstienMachineVTable;
extern CDemonActor_vtable g_CGabriellaVTable;
extern CDemonActor_vtable g_CGargoyleVTable;
extern CDemonActor_vtable g_CGasMaskVTable;
extern CDemonActor_vtable g_CGhoulVTable;
extern CDemonActor_vtable g_CGlassVTable;
extern CDemonActor_vtable g_CGraveVTable;
extern CDemonActor_vtable g_CGunVTable;
extern CDemonActor_vtable g_CHaystackVTable;
extern CDemonActor_vtable g_CHealthItemVTable;
extern CDemonActor_vtable g_CHeroVTable;
extern CDemonActor_vtable g_CHeroPlaceholderVTable;
extern CDemonActor_vtable g_CHiramVTable;
extern CDemonActor_vtable g_CHostageVTable;
extern CDemonActor_vtable g_CHotDemonVTable;
extern CDemonActor_vtable g_CHighPriestOfGardathVTable;

// CEnemy_vtable
extern CEnemy_vtable DAT_00659E88;
extern CEnemy_vtable DAT_0065A718;
extern CEnemy_vtable DAT_0065A8D8;
extern CEnemy_vtable DAT_0065ABB8;
extern CEnemy_vtable DAT_0065AD78;
extern CEnemy_vtable DAT_0065B0C8;
extern CEnemy_vtable DAT_0065B578;
extern CEnemy_vtable DAT_0065B738;
extern CEnemy_vtable DAT_0065C208;
extern CEnemy_vtable DAT_0065CB98;
extern CEnemy_vtable DAT_0065CEE8;
extern CEnemy_vtable DAT_0065D218;
extern CEnemy_vtable DAT_0065D928;
extern CEnemy_vtable DAT_0065EB98;
extern CEnemy_vtable DAT_0065EE98;
extern CEnemy_vtable DAT_0065FE38;

// CFileManager_vtable
extern CFileManager_vtable g_CFileManagerVTable;

// CHero_vtable
extern CHero_vtable DAT_0065A1C8;
extern CHero_vtable DAT_0065BEA8;
extern CHero_vtable DAT_0065E958;
extern CHero_vtable DAT_0065F548;
extern CHero_vtable DAT_0065F828;

// CParticle_vtable
extern CParticle_vtable g_CRainDropVTable;
extern CParticle_vtable g_CPopcornVTable;
extern CParticle_vtable g_CShellVTable;
extern CParticle_vtable g_CGlassParticleVTable;
extern CParticle_vtable g_CRockVTable;
extern CParticle_vtable g_CFireballVTable;
extern CParticle_vtable g_CSparkVTable;

// CStrList_vtable
extern CStrList_vtable g_CStrListVTable;
extern CStrList_vtable g_CPickListVTable;

// CWeapon_vtable
extern CWeapon_vtable DAT_0065A2D0;
extern CWeapon_vtable DAT_0065C480;
extern CWeapon_vtable DAT_0065D400;
extern CWeapon_vtable DAT_0065D620;
extern CWeapon_vtable DAT_0065E370;
extern CWeapon_vtable DAT_0065E4C0;
extern CWeapon_vtable DAT_0065F390;

// WatcomDestructorCall
extern WatcomDestructorCall WatcomDestructorCall_0065b180;
extern WatcomDestructorCall WatcomDestructorCall_0065bb30;
extern WatcomDestructorCall g_CConsoleDestructorCall;
extern WatcomDestructorCall WatcomDestructorCall_0065c630;
extern WatcomDestructorCall WatcomDestructorCall_0065c830;
extern WatcomDestructorCall WatcomDestructorCall_0065c83c;
extern WatcomDestructorCall WatcomDestructorCall_0065c848;
extern WatcomDestructorCall WatcomDestructorCall_0065c854;
extern WatcomDestructorCall WatcomDestructorCall_0065c960;
extern WatcomDestructorCall WatcomDestructorCall_0065cd40;
extern WatcomDestructorCall WatcomDestructorCall_0065d440;
extern WatcomDestructorCall WatcomDestructorCall_0065dc30;
extern WatcomDestructorCall WatcomDestructorCall_0065dc3c;
extern WatcomDestructorCall WatcomDestructorCall_0065dc48;
extern WatcomDestructorCall WatcomDestructorCall_0065dc54;
extern WatcomDestructorCall WatcomDestructorCall_0065dc60;
extern WatcomDestructorCall WatcomDestructorCall_0065dc6c;
extern WatcomDestructorCall WatcomDestructorCall_0065dc78;
extern WatcomDestructorCall WatcomDestructorCall_0065dc84;
extern WatcomDestructorCall WatcomDestructorCall_0065dc90;
extern WatcomDestructorCall WatcomDestructorCall_0065dc9c;
extern WatcomDestructorCall WatcomDestructorCall_0065e990;
extern WatcomDestructorCall WatcomDestructorCall_0065e99c;
extern WatcomDestructorCall WatcomDestructorCall_0065e9a8;
extern WatcomDestructorCall WatcomDestructorCall_0065f000;
extern WatcomDestructorCall WatcomDestructorCall_0065f00c;
extern WatcomDestructorCall WatcomDestructorCall_0065f018;
extern WatcomDestructorCall WatcomDestructorCall_0065f230;

// WatcomTypeInfo
extern WatcomTypeInfo g_CVectorTypeInfo;
extern WatcomTypeInfo g_CDemonActorTypeInfo;
extern WatcomTypeInfo g_CBoundingBox3DTypeInfo;
extern WatcomTypeInfo g_SDamageInfoTypeInfo;
extern WatcomTypeInfo g_CSlewTypeInfo;
extern WatcomTypeInfo g_CPickListTypeInfo;
extern WatcomTypeInfo g_CAmmoTypeInfo;
extern WatcomTypeInfo g_CAmmoBoxTypeInfo;
extern WatcomTypeInfo g_CAnvilTypeInfo;
extern WatcomTypeInfo g_CArmourTypeInfo;
extern WatcomTypeInfo g_CEnemyTypeInfo;
extern WatcomTypeInfo g_CFlameTypeInfo;
extern WatcomTypeInfo g_SFireTypeInfo;
extern WatcomTypeInfo g_CBackgroundActorTypeInfo;
extern WatcomTypeInfo g_CBaronWeaponTypeInfo;
extern WatcomTypeInfo g_CBaronTypeInfo;
extern WatcomTypeInfo g_CBarrierTypeInfo;
extern WatcomTypeInfo g_CBatTypeInfo;
extern WatcomTypeInfo g_CBatCreatureTypeInfo;
extern WatcomTypeInfo g_CBatmanTypeInfo;
extern WatcomTypeInfo g_CBatteryTypeInfo;
extern WatcomTypeInfo g_CBeastTypeInfo;
extern WatcomTypeInfo g_CBiggsTypeInfo;
extern WatcomTypeInfo g_SBodyPartModelTypeInfo;
extern WatcomTypeInfo g_SBodyPartFireTypeInfo;
extern WatcomTypeInfo g_CBodyPartTypeInfo;
extern WatcomTypeInfo g_CDeformableModelInstanceTypeInfo;
extern WatcomTypeInfo g_SBoneGuyBoxTypeInfo;
extern WatcomTypeInfo g_CBoneGuyTypeInfo;
extern WatcomTypeInfo g_SScrapeTypeInfo;
extern WatcomTypeInfo g_CDemonFilterTypeInfo;
extern WatcomTypeInfo g_CLightActorTypeInfo;
extern WatcomTypeInfo g_CBoxActorTypeInfo;
extern WatcomTypeInfo g_CBrideTypeInfo;
extern WatcomTypeInfo g_SBugTypeInfo;
extern WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo;
extern WatcomTypeInfo g_CBugsTypeInfo;
extern WatcomTypeInfo g_CCameraViewTypeInfo;
extern WatcomTypeInfo g_SPoseTypeInfo;
extern WatcomTypeInfo g_CCharacterTypeInfo;
extern WatcomTypeInfo g_SChainVertexTypeInfo;
extern WatcomTypeInfo g_CChainTypeInfo;
extern WatcomTypeInfo g_SClothVertexTypeInfo;
extern WatcomTypeInfo g_SClothBoneTypeInfo;
extern WatcomTypeInfo g_CCodecTypeInfo;
extern WatcomTypeInfo g_OStrStreamTypeInfo;
extern WatcomTypeInfo g_IStrStreamTypeInfo;
extern WatcomTypeInfo g_IFStreamTypeInfo;
extern WatcomTypeInfo g_OFStreamTypeInfo;
extern WatcomTypeInfo g_CLZWDecompressTypeInfo;
extern WatcomTypeInfo g_CLZWCompressTypeInfo;
extern WatcomTypeInfo g_CColonelTypeInfo;
extern WatcomTypeInfo g_CConsoleTypeInfo;
extern WatcomTypeInfo g_CConveyorTypeInfo;
extern WatcomTypeInfo g_CPlatformTypeInfo;
extern WatcomTypeInfo g_CZombieCowTypeInfo;
extern WatcomTypeInfo g_CCrateTypeInfo;
extern WatcomTypeInfo g_CCrossbowTypeInfo;
extern WatcomTypeInfo g_SCollisionInfoTypeInfo;
extern WatcomTypeInfo g_SCurtainVertexTypeInfo;
extern WatcomTypeInfo g_CCurtainTypeInfo;
extern WatcomTypeInfo g_CDemonCamera;
extern WatcomTypeInfo g_CActorDestination;
extern WatcomTypeInfo g_CFilterCacheTypeInfo;
extern WatcomTypeInfo g_CFilterFXTypeInfo;
extern WatcomTypeInfo g_CDemonLight;
extern WatcomTypeInfo g_CDemonTriangleTypeInfo;
extern WatcomTypeInfo g_CKeyFramedModelTypeInfo;
extern WatcomTypeInfo g_CCourseTypeInfo;
extern WatcomTypeInfo g_RA4HQPointTypeInfo;
extern WatcomTypeInfo g_CZombieDogTypeInfo;
extern WatcomTypeInfo g_CDoorTypeInfo;
extern WatcomTypeInfo g_CFileFinderTypeInfo;
extern WatcomTypeInfo g_SFreakyTypeInfo;
extern WatcomTypeInfo g_CDraculaBrideTypeInfo;
extern WatcomTypeInfo g_CDripTypeInfo;
extern WatcomTypeInfo g_CDroneTypeInfo;
extern WatcomTypeInfo g_CDemonCubeTypeInfo;
extern WatcomTypeInfo g_STriangleRefTypeInfo;
extern WatcomTypeInfo g_CDynamiteTypeInfo;
extern WatcomTypeInfo g_CEditorToolsTypeInfo;
extern WatcomTypeInfo g_CEdButtonTypeInfo;
extern WatcomTypeInfo g_CStrListTypeInfo;
extern WatcomTypeInfo g_CElephantGunTypeInfo;
extern WatcomTypeInfo g_SLaserInfoTypeInfo;
extern WatcomTypeInfo g_CEmitterTypeInfo;
extern WatcomTypeInfo g_CCheckOutListTypeInfo;
extern WatcomTypeInfo g_CPodFileTypeInfo;
extern WatcomTypeInfo g_CFilmReelTypeInfo;
extern WatcomTypeInfo g_CFilmProjectorTypeInfo;
extern WatcomTypeInfo g_CSmokeParticleTypeInfo;
extern WatcomTypeInfo g_CBulletHoleTypeInfo;
extern WatcomTypeInfo g_CStakeTypeInfo;
extern WatcomTypeInfo g_CSparkTypeInfo;
extern WatcomTypeInfo g_CMuzzleFlashTypeInfo;
extern WatcomTypeInfo g_CGlassParticleTypeInfo;
extern WatcomTypeInfo g_CBulletTrailTypeInfo;
extern WatcomTypeInfo g_CFireballTypeInfo;
extern WatcomTypeInfo g_CRockTypeInfo;
extern WatcomTypeInfo g_CLaserBeamTypeInfo;
extern WatcomTypeInfo g_CExplosionTypeInfo;
extern WatcomTypeInfo g_CTossTypeInfo;
extern WatcomTypeInfo g_CCraterTypeInfo;
extern WatcomTypeInfo g_CGunFlameTypeInfo;
extern WatcomTypeInfo g_CLightningBoltTypeInfo;
extern WatcomTypeInfo g_CTrailTypeInfo;
extern WatcomTypeInfo g_CShellTypeInfo;
extern WatcomTypeInfo g_CPopcornTypeInfo;
extern WatcomTypeInfo g_CRainDropTypeInfo;
extern WatcomTypeInfo g_CFlameCanTypeInfo;
extern WatcomTypeInfo g_CFlameThrowerTypeInfo;
extern WatcomTypeInfo g_CFlashlightTypeInfo;
extern WatcomTypeInfo g_SFlyTypeInfo;
extern WatcomTypeInfo g_CFliesTypeInfo;
extern WatcomTypeInfo g_CFrankenstienMachineTypeInfo;
extern WatcomTypeInfo g_CGabriellaTypeInfo;
extern WatcomTypeInfo g_CGameTypeInfo;
extern WatcomTypeInfo g_CAlphaBitmapTypeInfo;
extern WatcomTypeInfo g_CGargoyleTypeInfo;
extern WatcomTypeInfo g_CGasMaskTypeInfo;
extern WatcomTypeInfo g_CGhoulTypeInfo;
extern WatcomTypeInfo g_CGlassTypeInfo;
extern WatcomTypeInfo g_CGoreTypeInfo;
extern WatcomTypeInfo g_CBloodParticleTypeInfo;
extern WatcomTypeInfo g_CBloodSplatTypeInfo;
extern WatcomTypeInfo g_CBloodPoolTypeInfo;
extern WatcomTypeInfo g_CFootstepTypeInfo;
extern WatcomTypeInfo g_CGraveTypeInfo;
extern WatcomTypeInfo g_CGroundTypeInfo;
extern WatcomTypeInfo g_CGunTypeInfo;
extern WatcomTypeInfo g_CHaystackTypeInfo;
extern WatcomTypeInfo g_CHealthItemTypeInfo;
extern WatcomTypeInfo g_CHeroPlaceholderTypeInfo;
extern WatcomTypeInfo g_CHiramTypeInfo;
extern WatcomTypeInfo g_CNPCTypeInfo;
extern WatcomTypeInfo g_CHostageTypeInfo;
extern WatcomTypeInfo g_CHotDemonTypeInfo;
extern WatcomTypeInfo g_CHighPriestOfGardathTypeInfo;

// char
extern char g_SpaceCharacter;
extern char g_ColonChar;
extern char g_AsteriskChar;

// int
extern int g_CramInvalidMarker;

// undefined1
extern undefined1 DAT_006597a1;
extern undefined1 DAT_006597a2;
extern undefined1 DAT_006597a3;
extern undefined1 DAT_006597a5;
extern undefined1 DAT_006597a6;
extern undefined1 DAT_006597a7;

