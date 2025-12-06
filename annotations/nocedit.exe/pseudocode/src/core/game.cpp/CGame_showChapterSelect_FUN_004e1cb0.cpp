// Name: core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
// Address: 004e1cb0
// Address Range: [[004e1cb0, 004e2881]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame * this_ptr, int unknown)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e1e53) */
/* WARNING: Removing unreachable block (ram,0x004e1e60) */
/* WARNING: Removing unreachable block (ram,0x004e1e6d) */
/* WARNING: Removing unreachable block (ram,0x004e1e7a) */

void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame *this_ptr,int unknown)

{
  char cVar1;
  FILE *pFVar2;
  CStrList_vtable *pCVar3;
  char **ppcVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int in_stack_0000000c;
  int in_stack_00000018;
  CBitFont *in_stack_00000020;
  CGame *in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  CBitFont *in_stack_00000050;
  int in_stack_00000074;
  int in_stack_0000007c;
  CEventList *chapter_name;
  CStrList_vtable *pCVar10;
  CStrList_vtable *in_stack_fffff978;
  CStrList_vtable *in_stack_fffff980;
  CStrList_vtable *in_stack_fffff984;
  CStrList_vtable *in_stack_fffff988;
  CStrList_vtable *in_stack_fffff98c;
  char **in_stack_fffff990;
  char *in_stack_fffff9a8;
  CStrList_vtable *in_stack_fffff9ac;
  CStrList_vtable *in_stack_fffff9b4;
  char *in_stack_fffff9b8;
  CStrList_vtable *in_stack_fffff9bc;
  CStrList_vtable *in_stack_fffff9c0;
  CStrList_vtable *in_stack_fffff9c4;
  char **in_stack_fffff9c8;
  CStrList_vtable *in_stack_fffff9cc;
  CStrList_vtable *in_stack_fffff9d0;
  CStrList_swap *in_stack_fffff9d4;
  byte auStack_334 [8];
  byte auStack_32c [8];
  CIniFile CStack_324;
  char acStack_124 [4];
  char acStack_120 [20];
  char acStack_10c [244];
  char *local_18;
  CBitFont *local_14;
  
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50(&g_PodDir,"enemy.pod","rb");
  if (pFVar2 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xecf);
  }
  *(uint *)(in_stack_0000000c + 0x24c) = 0;
  *(uint *)(in_stack_0000000c + 0x254) = 0;
  *(uint *)(in_stack_0000000c + 0x248) = 0;
  *(uint *)(in_stack_0000000c + 0x250) = 0;
  *(uint *)(in_stack_0000000c + 0x234) = 0;
  local_14 = g_EditorFont;
  g_EditorFont = g_ThemeFont;
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pod.ini",(char *)0x0,"rt","..\\core\\game.cpp",0xeea);
  if (pFVar2 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xeec);
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)auStack_334,"system\\nocturne.ini",0x62ccd7);
  local_18 = (char *)0x0;
  local_14 = (CBitFont *)0x0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)(auStack_334 + 4),"Act1Code",(int *)&local_18);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)auStack_32c,"Act2Code",(int *)&stack0xfffffff0);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)(auStack_32c + 4),"Act3Code",(int *)&stack0xfffffff8);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&CStack_324,"Act4Code",(int *)&stack0x00000000);
  local_18 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Dark Reign of the Vampire King'")
  ;
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Tomb of the Underground God'");
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Windy City Massacre'");
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'The House on the Edge of Hell'");
  iVar5 = -1;
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Epilogue'");
  iVar8 = -1;
  if (in_stack_00000018 != 1 && pFVar2 == (FILE *)0x0) {
LAB_004e1ef8:
    do {
      if (-1 < iVar8) goto code_r0x004e1f00;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff94c);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 1 - 'Dark Reign of the Vampire King'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff954,pcVar9);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 2 - 'Tomb of the Underground God'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff95c,pcVar9);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 3 - 'Windy City Massacre'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff964,pcVar9);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 4 - 'The House on the Edge of Hell'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff96c,pcVar9);
      if (in_stack_00000044 != 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Volume 5 - 'Epilogue'");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff974,pcVar9);
      }
      if (in_stack_00000050 == (CBitFont *)0x0) {
        iVar7 = 0;
        iVar5 = 0;
        if (0 < (int)in_stack_fffff978) {
          do {
            pFVar2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar5),
                                "rt");
            if (pFVar2 == (FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff974,iVar7,false);
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xf29);
            }
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x34;
          } while (iVar7 < (int)in_stack_fffff978);
        }
      }
      pCVar10 = (CStrList_vtable *)0x0;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Choose a story to play")
      ;
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff97c,pcVar9,(int)pCVar10,(int)in_stack_fffff978);
      if (iVar5 < 0) {
        g_EditorFont = in_stack_00000050;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff980,0,(uint)in_stack_fffff980,(uint)in_stack_fffff984,
                   (uint)in_stack_fffff988,(uint)in_stack_fffff98c,(uint)in_stack_fffff990);
        return;
      }
      if ((iVar5 == 0) && (in_stack_00000040 == 0x331)) {
        in_stack_00000074 = 1;
      }
      if ((iVar5 == 1) && (in_stack_00000044 == 0x3cc)) {
        in_stack_00000074 = 1;
      }
      if ((iVar5 == 2) && (in_stack_00000048 == 0x3ac)) {
        in_stack_00000074 = 1;
      }
      if ((iVar5 == 3) && (in_stack_0000004c == 0xd6)) {
        in_stack_00000074 = 1;
LAB_004e2250:
        in_stack_fffff978 = (CStrList_vtable *)0x4e2258;
        shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffff980);
        if (iVar5 == 0) {
          iVar8 = 0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Your New Partner'");
          in_stack_fffff980 = (CStrList_vtable *)&stack0xfffff988;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff988,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Sentinels'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e2299;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'Werewolf Forest'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e22b4;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Castle Gaustadt'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Chapter 5 - 'Dungeon'");
          ppcVar4 = (char **)0x0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          while ((int)ppcVar4 < (int)in_stack_fffff9a8) {
            pCVar10 = (CStrList_vtable *)
                      engine_dosio_c_getFile_FUN_00481a50
                                ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                 "rt");
            if (pCVar10 == (CStrList_vtable *)0x0) {
              in_stack_fffff9a8 = (char *)ppcVar4;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9a8,(int)ppcVar4,false);
              ppcVar4 = (char **)((int)ppcVar4 + 1);
              iVar8 = iVar8 + 4;
              in_stack_fffff9ac = pCVar10;
            }
            else {
              in_stack_fffff9ac = (CStrList_vtable *)0xec1;
              in_stack_fffff9a8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)pCVar10,"..\\core\\game.cpp",0xec1);
              ppcVar4 = (char **)((int)ppcVar4 + 1);
              iVar8 = iVar8 + 4;
            }
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Dark Reign of the Vampire King'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)in_stack_fffff9ac);
        }
        if (iVar5 == 1) {
          pCVar10 = (CStrList_vtable *)0x4e23da;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Train to Redeye'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff978,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Zombie Town'");
          in_stack_fffff978 = (CStrList_vtable *)&stack0xfffff980;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff980,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'Underground Mine'");
          in_stack_fffff980 = (CStrList_vtable *)&stack0xfffff988;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff988,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Hidden Entrance'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e2439;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 5 - 'Temple of the God'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e2454;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Chapter 6 - 'Epilogue'")
          ;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          if (in_stack_0000007c == 0) {
            pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Chapter X - 'Failure'");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          }
          iVar7 = 0x34;
          for (iVar8 = 0; iVar8 < (int)pCVar10; iVar8 = iVar8 + 1) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar7),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9ac,iVar8,false);
              pCVar10 = pCVar3;
            }
            else {
              pCVar10 = (CStrList_vtable *)0xec1;
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar7 = iVar7 + 4;
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Tomb of the Underground God'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)pCVar10);
        }
        if (iVar5 == 2) {
          pCVar10 = (CStrList_vtable *)0x4e251a;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff958,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Chicago River'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff960,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'The Vendome'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff968,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Night on the Town'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff970,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 5 - 'Water Works'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff978,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 6 - 'Windy City'");
          in_stack_fffff978 = (CStrList_vtable *)&stack0xfffff980;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff980,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 7 - 'Crescent Theater'");
          in_stack_fffff980 = (CStrList_vtable *)&stack0xfffff988;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff988,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 8 - 'Rooftop to Rooftop'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e25e5;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          iVar8 = 0x68;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 9 - 'Warehouse of Hell'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e2603;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 10 - 'Mobster Factory'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 11 - 'Not You Again'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          for (ppcVar4 = (char **)0x0; (int)ppcVar4 < (int)in_stack_fffff9a8;
              ppcVar4 = (char **)((int)ppcVar4 + 1)) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              in_stack_fffff9a8 = (char *)ppcVar4;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9a8,(int)ppcVar4,false);
              pCVar10 = pCVar3;
            }
            else {
              pCVar10 = (CStrList_vtable *)0xec1;
              in_stack_fffff9a8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar8 = iVar8 + 4;
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Windy City Massacre'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)pCVar10);
        }
        if (iVar5 == 3) {
          iVar8 = 0x9c;
          pCVar10 = (CStrList_vtable *)0x4e26bf;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e26cd;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Graveyard'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e26e8;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'House of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Back from Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          for (ppcVar4 = (char **)0x0; (int)ppcVar4 < (int)in_stack_fffff9a8;
              ppcVar4 = (char **)((int)ppcVar4 + 1)) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              in_stack_fffff9a8 = (char *)ppcVar4;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9a8,(int)ppcVar4,false);
              pCVar10 = pCVar3;
            }
            else {
              pCVar10 = (CStrList_vtable *)0xec1;
              in_stack_fffff9a8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar8 = iVar8 + 4;
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'The House on the Edge of Hell'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)pCVar10);
        }
        if (iVar5 == 4) {
          iVar8 = 0xd0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9b8,pcVar9);
          for (pCVar10 = (CStrList_vtable *)0x0; (int)pCVar10 < (int)in_stack_fffff9b8;
              pCVar10 = (CStrList_vtable *)((int)&pCVar10->dtor + 1)) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              in_stack_fffff9b8 = (char *)pCVar10;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9b8,(int)pCVar10,false);
              in_stack_fffff9bc = pCVar3;
            }
            else {
              in_stack_fffff9bc = (CStrList_vtable *)0xec1;
              in_stack_fffff9b8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar8 = iVar8 + 4;
          }
          pCVar10 = (CStrList_vtable *)0x0;
          in_stack_fffff9b4 =
               (CStrList_vtable *)
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Epilogue'");
          in_stack_fffff9ac = (CStrList_vtable *)0x4e281d;
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9c0,(char *)in_stack_fffff9b4,(int)pCVar10,
                             (int)in_stack_fffff9bc);
          in_stack_fffff9bc = (CStrList_vtable *)&stack0xfffff9c4;
          in_stack_fffff9c0 = (CStrList_vtable *)0x0;
          in_stack_fffff9b8 = (char *)0x4e282e;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffff9c4,0,(uint)in_stack_fffff9c4,(uint)in_stack_fffff9c8
                     ,(uint)in_stack_fffff9cc,(uint)in_stack_fffff9d0,(uint)in_stack_fffff9d4);
          goto LAB_004e1ef8;
        }
      }
      else {
        if (in_stack_00000074 != 0) goto LAB_004e2250;
        iVar8 = 0;
      }
      in_stack_fffff9ac = (CStrList_vtable *)&stack0xfffff9b4;
      in_stack_fffff9a8 = (char *)0x4e2382;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff9b4,0,(uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,
                 (uint)in_stack_fffff9bc,(uint)in_stack_fffff9c0,(uint)in_stack_fffff9c4);
    } while( true );
  }
  iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select mission to play","world",
                     "*.msn",SUB41 /* extract 2-byte value */(acStack_10c,0));
  if (iVar8 == 0) {
    g_EditorFont = in_stack_00000020;
    return;
  }
  g_CurrentDisplayText = (char *)0x0;
  g_OverlayDisplayTimer = 0.0;
  DAT_02d830a8 = 0;
  goto LAB_004e1fac;
code_r0x004e1f00:
  pcVar6 = *(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar5 * 0x34 + iVar8 * 4);
  pcVar9 = acStack_10c;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("world",acStack_10c,"rt");
  if (pFVar2 == (FILE *)0x0) {
    g_EditorFont = in_stack_00000020;
    return;
  }
  pcVar6 = &DAT_02d830a8;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xf77);
  g_CurrentDisplayText = *(char **)(&DAT_0067b854 + iVar5 * 4);
  pcVar9 = *(char **)(&stack0x00000000 + iVar5 * 4);
  do {
    cVar1 = *pcVar9;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  g_OverlayDisplayTimer = 8.0;
LAB_004e1fac:
  chapter_name = g_CEventListPtr;
  core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
  iVar7 = 1;
  iVar8 = crt_string_c_stricmp_FUN_005fe7f0(&g_CurrentSaveFile,acStack_124);
  if (iVar8 != 0) {
    pcVar9 = acStack_120;
    pcVar6 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar9;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar7 = 0;
  }
  core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,10,0,iVar5);
  core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,acStack_120 + 4,iVar7);
  iVar5 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
  if (iVar5 != 0) {
    core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
    core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
    if (in_stack_0000003c->need_chapter_reload != 0) {
      in_stack_0000003c->need_chapter_reload = 0;
      core_game_cpp_CGame_loadSaveGame_FUN_004e12b0
                (in_stack_0000003c,(char *)&in_stack_0000003c->save_version,1,(char *)chapter_name);
    }
  }
  g_EditorFont = in_stack_00000020;
  return;
}
