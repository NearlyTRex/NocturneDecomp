// Name: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
// Address: 005513d0
// Address Range: [[005513d0, 00551819]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod * this_ptr)
// Cross-references:
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551ae2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640838
//   TerminatedCString s_Too_many_POD_dependency__0064084a
//   TerminatedCString s_engine_pod_cpp_00640871
//   TerminatedCString s_Circular_POD_mount_order_00640883
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_pod.cpp_CPod_dismountPod_FUN_005518c0
//   engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
//   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod *this_ptr)

{
  CPod *pCVar1;
  CPodFile *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  CPodDependencyRecord *in_stack_fffff550;
  undefined4 auStack_46c [65];
  undefined4 local_368;
  CPodDependencyRecord CStack_364;
  undefined4 auStack_25c [65];
  undefined4 local_158;
  CPodDependencyRecord CStack_154;
  CPod *local_4c;
  int local_48;
  int local_44;
  int local_40;
  CPod *local_3c;
  CPodFile **local_38;
  int local_34;
  int local_30;
  CPodFile *local_2c;
  int local_28;
  int local_24;
  CPodFile **local_20;
  int local_1c;
  CPodFile *local_18;
  int local_14;
  
  bVar8 = 0;
  do {
    local_28 = 0;
    local_44 = 0;
    if (0 < this_ptr->pod_file_count) {
      local_3c = this_ptr;
      do {
        local_18 = local_3c->pod_files[0];
        local_40 = 0;
        for (iVar5 = 0; iVar5 < local_18->dependency_count; iVar5 = iVar5 + 1) {
          engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(local_18,iVar5,in_stack_fffff550)
          ;
          puVar6 = auStack_25c;
          puVar7 = &local_368;
          for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          if (CStack_364.unknown != (char  [4])0x0) {
            in_stack_fffff550 = &CStack_364;
            iVar4 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820
                              (this_ptr,in_stack_fffff550->filename);
            if (iVar4 < 0) goto LAB_0055143e;
          }
        }
        if (local_40 == 0) {
          local_28 = local_28 + 1;
          local_3c = (CPod *)local_3c->pod_files;
        }
        else {
LAB_0055143e:
          engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,local_28);
          local_40 = 1;
        }
      } while (local_28 < this_ptr->pod_file_count);
    }
  } while (local_44 != 0);
  iVar5 = this_ptr->pod_file_count;
  while (iVar5 = iVar5 + -1, 0 < iVar5) {
    iVar4 = 0;
    pCVar1 = this_ptr;
    if (0 < iVar5) {
      do {
        pCVar2 = pCVar1->pod_files[1];
        if (pCVar2->mount_priority < pCVar1->pod_files[0]->mount_priority) {
          pCVar1->pod_files[1] = pCVar1->pod_files[0];
          pCVar1->pod_files[0] = pCVar2;
        }
        iVar4 = iVar4 + 1;
        pCVar1 = (CPod *)pCVar1->pod_files;
      } while (iVar4 < iVar5);
    }
  }
  local_48 = 0;
  local_24 = 0;
  if (0 < this_ptr->pod_file_count) {
    local_4c = this_ptr;
    do {
      local_30 = 0;
      local_2c = local_4c->pod_files[0];
      iVar5 = local_24 << 3;
      while (local_30 < local_2c->dependency_count) {
        engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0
                  (local_2c,local_30,in_stack_fffff550);
        puVar6 = auStack_46c;
        puVar7 = &local_158;
        for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if (CStack_154.has_dependencies == 0) {
LAB_00551547:
          local_30 = local_30 + 1;
        }
        else {
          in_stack_fffff550 = &CStack_154;
          iVar4 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820
                            (this_ptr,in_stack_fffff550->filename);
          if (iVar4 < 0) goto LAB_00551547;
          if (199 < local_1c) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x572;
            in_stack_fffff550 = (CPodDependencyRecord *)0x5516e5;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many POD dependency ordering rules");
          }
          if ((int)CStack_154.filename._252_4_ < 0) {
            *(CPodFile **)(&stack0xfffff550 + iVar5) = local_2c;
            pCVar2 = this_ptr->pod_files[iVar4];
          }
          else {
            *(CPodFile **)(&stack0xfffff550 + iVar5) = this_ptr->pod_files[iVar4];
            pCVar2 = local_2c;
          }
          *(CPodFile **)(&stack0xfffff554 + iVar5) = pCVar2;
          iVar5 = iVar5 + 8;
          local_24 = local_24 + 1;
          local_30 = local_30 + 1;
        }
      }
      local_48 = local_48 + 1;
      local_4c = (CPod *)local_4c->pod_files;
    } while (local_48 < this_ptr->pod_file_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->pod_file_count) {
    CStack_154.unknown = (char  [4])this_ptr;
    do {
      local_34 = iVar5;
      if (iVar5 < this_ptr->pod_file_count) {
        local_38 = this_ptr->pod_files + iVar5 + -1;
        do {
          local_14 = 0;
          if (0 < local_24) {
            local_20 = local_38;
            iVar4 = 0;
            local_1c = local_24 * 8;
            do {
              if (*(CPodFile **)(&stack0xfffff554 + iVar4) == local_38[1]) {
                uVar3 = (uint)*(CPodFile **)(&stack0xfffff554 + iVar4) ^ (uint)local_38[1];
                pCVar1 = this_ptr;
                if (0 < iVar5) {
                  do {
                    if (pCVar1->pod_files[0] == *(CPodFile **)(&stack0xfffff550 + iVar4)) break;
                    uVar3 = uVar3 + 1;
                    pCVar1 = (CPod *)pCVar1->pod_files;
                  } while ((int)uVar3 < iVar5);
                }
                if (iVar5 <= (int)uVar3) break;
              }
              iVar4 = iVar4 + 8;
              local_14 = local_14 + 1;
            } while (iVar4 < local_24 * 8);
          }
          if (local_24 <= local_14) break;
          local_34 = local_34 + 1;
          local_38 = local_38 + 1;
        } while (local_34 < this_ptr->pod_file_count);
      }
      if (this_ptr->pod_file_count <= local_34) {
        g_CurrentFilename = "..\\engine\\pod.cpp";
        g_CurrentLineNumber = 0x5c4;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Circular POD mount order dependency detected.");
      }
      pCVar2 = ((CPod *)(this_ptr->pod_files + local_34 + -1))->pod_files[0];
      pCVar1 = (CPod *)(this_ptr->pod_files + local_34 + -1);
      for (; iVar5 < local_34; local_34 = local_34 + -1) {
        pCVar1->pod_files[0] = (CPodFile *)pCVar1->pod_file_count;
        pCVar1 = (CPod *)((int)(pCVar1 + 0xffffffff) + 0x194);
      }
      *(CPodFile **)((int)CStack_154.unknown + 4) = pCVar2;
      iVar5 = iVar5 + 1;
      CStack_154.unknown = (char  [4])((int)CStack_154.unknown + 4);
    } while (iVar5 < this_ptr->pod_file_count);
  }
  return;
}


// Assembly code:
// 005513d0: PUSH EBX
//   Label: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
// 005513d1: PUSH ESI
// 005513d2: PUSH EDI
// 005513d3: PUSH EBP
// 005513d4: SUB ESP,0xaa0
// 005513da: MOV EBP,dword ptr [ESP + 0xab4]
//   XREF to: Stack[0x4] (READ)
// 005513e1: XOR EDX,EDX
//   Label: LAB_005513e1
// 005513e3: MOV EBX,dword ptr [EBP]
// 005513e6: MOV dword ptr [ESP + 0xa88],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005513ed: MOV dword ptr [ESP + 0xa6c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 005513f4: TEST EBX,EBX
// 005513f6: JLE 0x00551467
//   XREF to: 00551467 (CONDITIONAL_JUMP)
// 005513f8: MOV dword ptr [ESP + 0xa74],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 005513ff: MOV EAX,dword ptr [ESP + 0xa74]
//   Label: LAB_005513ff
//   XREF to: Stack[-0x3c] (READ)
// 00551406: MOV EAX,dword ptr [EAX + 0x4]
// 00551409: MOV dword ptr [ESP + 0xa98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00551410: XOR EAX,EAX
// 00551412: XOR EBX,EBX
// 00551414: MOV dword ptr [ESP + 0xa70],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0055141b: MOV EAX,dword ptr [ESP + 0xa98]
//   Label: LAB_0055141b
//   XREF to: Stack[-0x18] (READ)
// 00551422: MOV EAX,dword ptr [EAX + 0x424]
// 00551428: CMP EBX,EAX
// 0055142a: JL 0x00551556
//   XREF to: 00551556 (CONDITIONAL_JUMP)
// 00551430: CMP dword ptr [ESP + 0xa70],0x0
//   XREF to: Stack[-0x40] (READ)
// 00551438: JZ 0x005515a7
//   XREF to: 005515a7 (CONDITIONAL_JUMP)
// 0055143e: MOV EAX,dword ptr [ESP + 0xa88]
//   Label: LAB_0055143e
//   XREF to: Stack[-0x28] (READ)
// 00551445: PUSH EAX
// 00551446: PUSH EBP
// 00551447: CALL engine_pod.cpp_CPod_dismountPod_FUN_005518c0
//   XREF to: 005518c0 (UNCONDITIONAL_CALL)
// 0055144c: MOV EDX,0x1
// 00551451: ADD ESP,0x8
// 00551454: MOV dword ptr [ESP + 0xa6c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0055145b: MOV EAX,dword ptr [ESP + 0xa88]
//   Label: LAB_0055145b
//   XREF to: Stack[-0x28] (READ)
// 00551462: CMP EAX,dword ptr [EBP]
// 00551465: JL 0x005513ff
//   XREF to: 005513ff (CONDITIONAL_JUMP)
// 00551467: CMP dword ptr [ESP + 0xa6c],0x0
//   Label: LAB_00551467
//   XREF to: Stack[-0x44] (READ)
// 0055146f: JNZ 0x005513e1
//   XREF to: 005513e1 (CONDITIONAL_JUMP)
// 00551475: MOV EDI,dword ptr [EBP]
// 00551478: DEC EDI
// 00551479: TEST EDI,EDI
// 0055147b: JLE 0x005514ac
//   XREF to: 005514ac (CONDITIONAL_JUMP)
// 0055147d: XOR EDX,EDX
//   Label: LAB_0055147d
// 0055147f: TEST EDI,EDI
// 00551481: JLE 0x005514a7
//   XREF to: 005514a7 (CONDITIONAL_JUMP)
// 00551483: MOV EAX,EBP
// 00551485: MOV EBX,dword ptr [EAX + 0x4]
//   Label: LAB_00551485
// 00551488: MOV ECX,dword ptr [EAX + 0x8]
// 0055148b: MOV ESI,dword ptr [EBX + 0x408]
// 00551491: CMP ESI,dword ptr [ECX + 0x408]
// 00551497: JLE 0x0055149f
//   XREF to: 0055149f (CONDITIONAL_JUMP)
// 00551499: MOV dword ptr [EAX + 0x8],EBX
// 0055149c: MOV dword ptr [EAX + 0x4],ECX
// 0055149f: INC EDX
//   Label: LAB_0055149f
// 005514a0: ADD EAX,0x4
// 005514a3: CMP EDX,EDI
// 005514a5: JL 0x00551485
//   XREF to: 00551485 (CONDITIONAL_JUMP)
// 005514a7: DEC EDI
//   Label: LAB_005514a7
// 005514a8: TEST EDI,EDI
// 005514aa: JG 0x0055147d
//   XREF to: 0055147d (CONDITIONAL_JUMP)
// 005514ac: XOR ECX,ECX
//   Label: LAB_005514ac
// 005514ae: MOV ESI,dword ptr [EBP]
// 005514b1: MOV dword ptr [ESP + 0xa68],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 005514b8: MOV dword ptr [ESP + 0xa8c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005514bf: TEST ESI,ESI
// 005514c1: JLE 0x005515f7
//   XREF to: 005515f7 (CONDITIONAL_JUMP)
// 005514c7: MOV dword ptr [ESP + 0xa64],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 005514ce: XOR EBX,EBX
//   Label: LAB_005514ce
// 005514d0: MOV EAX,dword ptr [ESP + 0xa64]
//   XREF to: Stack[-0x4c] (READ)
// 005514d7: MOV dword ptr [ESP + 0xa80],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005514de: MOV EAX,dword ptr [EAX + 0x4]
// 005514e1: MOV EBX,dword ptr [ESP + 0xa8c]
//   XREF to: Stack[-0x24] (READ)
// 005514e8: MOV dword ptr [ESP + 0xa84],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005514ef: SHL EBX,0x3
// 005514f2: MOV EAX,dword ptr [ESP + 0xa84]
//   Label: LAB_005514f2
//   XREF to: Stack[-0x2c] (READ)
// 005514f9: MOV ESI,dword ptr [ESP + 0xa80]
//   XREF to: Stack[-0x30] (READ)
// 00551500: CMP ESI,dword ptr [EAX + 0x424]
// 00551506: JGE 0x005515cc
//   XREF to: 005515cc (CONDITIONAL_JUMP)
// 0055150c: PUSH ESI
// 0055150d: MOV EAX,dword ptr [ESP + 0xa88]
//   XREF to: Stack[-0x2c] (READ)
// 00551514: PUSH EAX
// 00551515: LEA ESI,[ESP + 0x648]
//   XREF to: Stack[-0x470] (DATA)
// 0055151c: LEA EDI,[ESP + 0x960]
//   XREF to: Stack[-0x158] (DATA)
// 00551523: CALL engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
//   XREF to: 005506c0 (UNCONDITIONAL_CALL)
// 00551528: MOV ECX,0x42
// 0055152d: LEA ESI,[ESP + 0x648]
//   XREF to: Stack[-0x470] (DATA)
// 00551534: ADD ESP,0x8
// 00551537: MOVSD.REP ES:EDI,ESI
// 00551539: CMP dword ptr [ESP + 0xa58],0x0
//   XREF to: Stack[-0x58] (READ)
// 00551541: JNZ 0x0055169e
//   XREF to: 0055169e (CONDITIONAL_JUMP)
// 00551547: INC dword ptr [ESP + 0xa80]
//   Label: LAB_00551547
//   XREF to: Stack[-0x30] (READ_WRITE)
// 0055154e: JMP 0x005514f2
//   XREF to: 005514f2 (UNCONDITIONAL_JUMP)
// 00551550: INC EBX
//   Label: LAB_00551550
// 00551551: JMP 0x0055141b
//   XREF to: 0055141b (UNCONDITIONAL_JUMP)
// 00551556: PUSH EBX
//   Label: LAB_00551556
// 00551557: MOV ESI,dword ptr [ESP + 0xa9c]
//   XREF to: Stack[-0x18] (READ)
// 0055155e: PUSH ESI
// 0055155f: LEA ESI,[ESP + 0x858]
//   XREF to: Stack[-0x260] (DATA)
// 00551566: LEA EDI,[ESP + 0x750]
//   XREF to: Stack[-0x368] (DATA)
// 0055156d: CALL engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
//   XREF to: 005506c0 (UNCONDITIONAL_CALL)
// 00551572: MOV ECX,0x42
// 00551577: LEA ESI,[ESP + 0x858]
//   XREF to: Stack[-0x260] (DATA)
// 0055157e: ADD ESP,0x8
// 00551581: MOVSD.REP ES:EDI,ESI
// 00551583: CMP dword ptr [ESP + 0x84c],0x0
//   XREF to: Stack[-0x264] (READ)
// 0055158b: JZ 0x00551550
//   XREF to: 00551550 (CONDITIONAL_JUMP)
// 0055158d: LEA EAX,[ESP + 0x748]
//   XREF to: Stack[-0x368] (DATA)
// 00551594: PUSH EAX
// 00551595: PUSH EBP
// 00551596: CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
//   XREF to: 00551820 (UNCONDITIONAL_CALL)
// 0055159b: ADD ESP,0x8
// 0055159e: TEST EAX,EAX
// 005515a0: JGE 0x00551550
//   XREF to: 00551550 (CONDITIONAL_JUMP)
// 005515a2: JMP 0x0055143e
//   XREF to: 0055143e (UNCONDITIONAL_JUMP)
// 005515a7: MOV EBX,dword ptr [ESP + 0xa88]
//   Label: LAB_005515a7
//   XREF to: Stack[-0x28] (READ)
// 005515ae: MOV ECX,dword ptr [ESP + 0xa74]
//   XREF to: Stack[-0x3c] (READ)
// 005515b5: INC EBX
// 005515b6: ADD ECX,0x4
// 005515b9: MOV dword ptr [ESP + 0xa88],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005515c0: MOV dword ptr [ESP + 0xa74],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005515c7: JMP 0x0055145b
//   XREF to: 0055145b (UNCONDITIONAL_JUMP)
// 005515cc: MOV EDI,dword ptr [ESP + 0xa64]
//   Label: LAB_005515cc
//   XREF to: Stack[-0x4c] (READ)
// 005515d3: MOV EAX,dword ptr [ESP + 0xa68]
//   XREF to: Stack[-0x48] (READ)
// 005515da: MOV EDX,dword ptr [EBP]
// 005515dd: ADD EDI,0x4
// 005515e0: INC EAX
// 005515e1: MOV dword ptr [ESP + 0xa64],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 005515e8: MOV dword ptr [ESP + 0xa68],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005515ef: CMP EAX,EDX
// 005515f1: JL 0x005514ce
//   XREF to: 005514ce (CONDITIONAL_JUMP)
// 005515f7: MOV ECX,dword ptr [EBP]
//   Label: LAB_005515f7
// 005515fa: XOR ESI,ESI
// 005515fc: TEST ECX,ECX
// 005515fe: JLE 0x00551693
//   XREF to: 00551693 (CONDITIONAL_JUMP)
// 00551604: MOV dword ptr [ESP + 0xa60],EBP
//   XREF to: Stack[-0x50] (WRITE)
// 0055160b: MOV EDX,dword ptr [EBP]
//   Label: LAB_0055160b
// 0055160e: MOV dword ptr [ESP + 0xa7c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 00551615: CMP ESI,EDX
// 00551617: JL 0x005517df
//   XREF to: 005517df (CONDITIONAL_JUMP)
// 0055161d: MOV EAX,dword ptr [ESP + 0xa7c]
//   Label: LAB_0055161d
//   XREF to: Stack[-0x34] (READ)
// 00551624: CMP EAX,dword ptr [EBP]
// 00551627: JL 0x0055164b
//   XREF to: 0055164b (CONDITIONAL_JUMP)
// 00551629: MOV EAX,0x640871
//   XREF to: 00640871 (PARAM)
// 0055162e: MOV EDX,0x5c4
// 00551633: PUSH 0x640883
//   XREF to: 00640883 (DATA)
// 00551638: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0055163d: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00551643: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00551648: ADD ESP,0x4
// 0055164b: MOV EAX,dword ptr [ESP + 0xa7c]
//   Label: LAB_0055164b
//   XREF to: Stack[-0x34] (READ)
// 00551652: SHL EAX,0x2
// 00551655: ADD EAX,EBP
// 00551657: MOV EDX,dword ptr [ESP + 0xa7c]
//   XREF to: Stack[-0x34] (READ)
// 0055165e: MOV EDI,dword ptr [EAX + 0x4]
// 00551661: CMP ESI,EDX
// 00551663: JGE 0x00551673
//   XREF to: 00551673 (CONDITIONAL_JUMP)
// 00551665: SUB EAX,0x4
//   Label: LAB_00551665
// 00551668: MOV ECX,dword ptr [EAX + 0x4]
// 0055166b: DEC EDX
// 0055166c: MOV dword ptr [EAX + 0x8],ECX
// 0055166f: CMP EDX,ESI
// 00551671: JG 0x00551665
//   XREF to: 00551665 (CONDITIONAL_JUMP)
// 00551673: MOV EAX,dword ptr [ESP + 0xa60]
//   Label: LAB_00551673
//   XREF to: Stack[-0x50] (READ)
// 0055167a: MOV dword ptr [EAX + 0x4],EDI
// 0055167d: LEA EDI,[EAX + 0x4]
// 00551680: INC ESI
// 00551681: MOV EAX,dword ptr [EBP]
// 00551684: MOV dword ptr [ESP + 0xa60],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 0055168b: CMP ESI,EAX
// 0055168d: JL 0x0055160b
//   XREF to: 0055160b (CONDITIONAL_JUMP)
// 00551693: ADD ESP,0xaa0
//   Label: LAB_00551693
// 00551699: POP EBP
// 0055169a: POP EDI
// 0055169b: POP ESI
// 0055169c: POP EBX
// 0055169d: RET
// 0055169e: LEA EAX,[ESP + 0x958]
//   Label: LAB_0055169e
//   XREF to: Stack[-0x158] (DATA)
// 005516a5: PUSH EAX
// 005516a6: PUSH EBP
// 005516a7: CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
//   XREF to: 00551820 (UNCONDITIONAL_CALL)
// 005516ac: ADD ESP,0x8
// 005516af: MOV ESI,EAX
// 005516b1: TEST EAX,EAX
// 005516b3: JL 0x00551547
//   XREF to: 00551547 (CONDITIONAL_JUMP)
// 005516b9: CMP dword ptr [ESP + 0xa8c],0xc8
//   XREF to: Stack[-0x24] (READ)
// 005516c4: JL 0x005516e8
//   XREF to: 005516e8 (CONDITIONAL_JUMP)
// 005516c6: MOV EDI,0x640838
//   XREF to: 00640838 (DATA)
// 005516cb: MOV EAX,0x572
// 005516d0: PUSH 0x64084a
//   XREF to: 0064084a (DATA)
// 005516d5: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005516db: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005516e0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005516e5: ADD ESP,0x4
// 005516e8: LEA EAX,[ESI*0x4 + 0x0]
//   Label: LAB_005516e8
// 005516ef: MOV EDX,dword ptr [ESP + 0xa58]
//   XREF to: Stack[-0x58] (READ)
// 005516f6: ADD EAX,EBP
// 005516f8: TEST EDX,EDX
// 005516fa: JL 0x0055172b
//   XREF to: 0055172b (CONDITIONAL_JUMP)
// 005516fc: MOV EAX,dword ptr [EAX + 0x4]
// 005516ff: MOV dword ptr [ESP + EBX*0x1],EAX
// 00551702: MOV EAX,dword ptr [ESP + 0xa84]
//   XREF to: Stack[-0x2c] (READ)
// 00551709: MOV dword ptr [ESP + EBX*0x1 + 0x4],EAX
//   Label: LAB_00551709
// 0055170d: MOV ECX,dword ptr [ESP + 0xa8c]
//   XREF to: Stack[-0x24] (READ)
// 00551714: INC ECX
// 00551715: ADD EBX,0x8
// 00551718: MOV dword ptr [ESP + 0xa8c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0055171f: INC dword ptr [ESP + 0xa80]
//   XREF to: Stack[-0x30] (READ_WRITE)
// 00551726: JMP 0x005514f2
//   XREF to: 005514f2 (UNCONDITIONAL_JUMP)
// 0055172b: MOV EDX,dword ptr [ESP + 0xa84]
//   Label: LAB_0055172b
//   XREF to: Stack[-0x2c] (READ)
// 00551732: MOV dword ptr [ESP + EBX*0x1],EDX
// 00551735: MOV EAX,dword ptr [EAX + 0x4]
// 00551738: JMP 0x00551709
//   XREF to: 00551709 (UNCONDITIONAL_JUMP)
// 0055173a: MOV ECX,dword ptr [ESP + 0xa78]
//   Label: LAB_0055173a
//   XREF to: Stack[-0x38] (READ)
// 00551741: MOV EBX,dword ptr [ESP + 0xa7c]
//   XREF to: Stack[-0x34] (READ)
// 00551748: MOV EDI,dword ptr [EBP]
// 0055174b: ADD ECX,0x4
// 0055174e: INC EBX
// 0055174f: MOV dword ptr [ESP + 0xa78],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00551756: MOV dword ptr [ESP + 0xa7c],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0055175d: CMP EBX,EDI
// 0055175f: JGE 0x0055161d
//   XREF to: 0055161d (CONDITIONAL_JUMP)
// 00551765: XOR EAX,EAX
//   Label: LAB_00551765
// 00551767: MOV EDX,dword ptr [ESP + 0xa8c]
//   XREF to: Stack[-0x24] (READ)
// 0055176e: MOV dword ptr [ESP + 0xa9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00551775: TEST EDX,EDX
// 00551777: JLE 0x005517c6
//   XREF to: 005517c6 (CONDITIONAL_JUMP)
// 00551779: MOV EAX,dword ptr [ESP + 0xa78]
//   XREF to: Stack[-0x38] (READ)
// 00551780: MOV dword ptr [ESP + 0xa90],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00551787: LEA EAX,[EDX*0x8 + 0x0]
// 0055178e: XOR EDI,EDI
// 00551790: MOV dword ptr [ESP + 0xa94],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00551797: MOV EDX,dword ptr [ESP + 0xa90]
//   Label: LAB_00551797
//   XREF to: Stack[-0x20] (READ)
// 0055179e: MOV EAX,dword ptr [ESP + EDI*0x1 + 0x4]
// 005517a2: MOV ECX,dword ptr [EDX + 0x4]
// 005517a5: CMP EAX,ECX
// 005517a7: JZ 0x005517f4
//   XREF to: 005517f4 (CONDITIONAL_JUMP)
// 005517a9: MOV ECX,dword ptr [ESP + 0xa9c]
//   Label: LAB_005517a9
//   XREF to: Stack[-0x14] (READ)
// 005517b0: MOV EBX,dword ptr [ESP + 0xa94]
//   XREF to: Stack[-0x1c] (READ)
// 005517b7: INC ECX
// 005517b8: ADD EDI,0x8
// 005517bb: MOV dword ptr [ESP + 0xa9c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005517c2: CMP EDI,EBX
// 005517c4: JL 0x00551797
//   XREF to: 00551797 (CONDITIONAL_JUMP)
// 005517c6: MOV EAX,dword ptr [ESP + 0xa9c]
//   Label: LAB_005517c6
//   XREF to: Stack[-0x14] (READ)
// 005517cd: CMP EAX,dword ptr [ESP + 0xa8c]
//   XREF to: Stack[-0x24] (READ)
// 005517d4: JGE 0x0055161d
//   XREF to: 0055161d (CONDITIONAL_JUMP)
// 005517da: JMP 0x0055173a
//   XREF to: 0055173a (UNCONDITIONAL_JUMP)
// 005517df: LEA EAX,[ESI*0x4 + 0x0]
//   Label: LAB_005517df
// 005517e6: ADD EAX,EBP
// 005517e8: MOV dword ptr [ESP + 0xa78],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005517ef: JMP 0x00551765
//   XREF to: 00551765 (UNCONDITIONAL_JUMP)
// 005517f4: XOR EAX,ECX
//   Label: LAB_005517f4
// 005517f6: TEST ESI,ESI
// 005517f8: JLE 0x00551806
//   XREF to: 00551806 (CONDITIONAL_JUMP)
// 005517fa: MOV EDX,EBP
// 005517fc: MOV EBX,EDI
// 005517fe: MOV ECX,dword ptr [EDX + 0x4]
//   Label: LAB_005517fe
// 00551801: CMP ECX,dword ptr [ESP + EBX*0x1]
//   XREF to: Stack[-0xab0] (DATA)
// 00551804: JNZ 0x0055180c
//   XREF to: 0055180c (CONDITIONAL_JUMP)
// 00551806: CMP EAX,ESI
//   Label: LAB_00551806
// 00551808: JGE 0x005517c6
//   XREF to: 005517c6 (CONDITIONAL_JUMP)
// 0055180a: JMP 0x005517a9
//   XREF to: 005517a9 (UNCONDITIONAL_JUMP)
// 0055180c: INC EAX
//   Label: LAB_0055180c
// 0055180d: ADD EDX,0x4
// 00551810: CMP EAX,ESI
// 00551812: JL 0x005517fe
//   XREF to: 005517fe (CONDITIONAL_JUMP)
// 00551814: CMP EAX,ESI
// 00551816: JGE 0x005517c6
//   XREF to: 005517c6 (CONDITIONAL_JUMP)
// 00551818: JMP 0x005517a9
//   XREF to: 005517a9 (UNCONDITIONAL_JUMP)
