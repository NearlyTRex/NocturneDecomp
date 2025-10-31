// Name: core_waypoint.cpp_CWaypoint_FUN_005ebf70
// Address: 005ebf70
// Address Range: [[005ebf70, 005ec27d]]
// Convention: __cdecl
// Signature: int core_waypoint.cpp_CWaypoint_FUN_005ebf70(CWayPoint * this_ptr)
// Globals:
//   float FLOAT_00657583 = 0.5
//   undefined4 DAT_00665460
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
//   undefined4 DAT_02f33780
//   undefined4 g_CWayPointClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750
//   core_path.cpp_FUN_00547fc0
//   core_path.cpp_FUN_00548500
//   engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_waypoint_cpp_CWaypoint_FUN_005ebf70(CWayPoint *this_ptr)

{
  CWayPoint *this_ptr_00;
  int iVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D *pCVar3;
  CPathMap *this_ptr_01;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CWayPoint *pCVar5;
  undefined4 uStack00000010;
  CWayPoint *in_stack_00000014;
  CWayPoint *in_stack_00000018;
  CLocation *pCStack_84;
  CVector3i CStack_5c;
  undefined1 auStack_4c [12];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float local_14;
  
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c),
                        g_CWayPointClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      return 0;
    }
    core_actor_cpp_renderActorBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    pCVar3 = (*((this_ptr->base_trigger).base_actor.metadata.vtable)->getBoundingBox)
                       ((CDemonActor *)this_ptr,(CBoundingBox3D *)&pCStack_84);
    fStack_28 = (pCVar3->min).x + (pCVar3->max).x;
    fStack_24 = (pCVar3->min).y + (pCVar3->max).y;
    fStack_40 = fStack_28 * FLOAT_00657583;
    fStack_20 = (pCVar3->min).z + (pCVar3->max).z;
    fStack_3c = fStack_24 * FLOAT_00657583;
    fStack_38 = fStack_20 * FLOAT_00657583;
    auStack_4c._0_4_ = (undefined4)ROUND(fStack_40 * _DAT_00665460);
    auStack_4c._4_4_ = (undefined4)ROUND(fStack_3c * _DAT_00665460);
    auStack_4c._8_4_ = (undefined4)ROUND(fStack_38 * _DAT_00665460);
    iVar1 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)auStack_4c);
    pCVar5 = this_ptr;
    if (0 < this_ptr->num_adjacent_waypoints) {
      do {
        this_ptr_00 = *(CWayPoint **)pCVar5->field2_0x374;
        if (this_ptr <= this_ptr_00) {
          g_ActiveRenderColor = 2;
          if ((this_ptr == in_stack_00000014) || (this_ptr_00 == in_stack_00000014)) {
            g_ActiveRenderColor = 0xfa;
          }
          pCVar3 = (*((this_ptr_00->base_trigger).base_actor.metadata.vtable)->getBoundingBox)
                             ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&pCStack_84);
          fStack_1c = (pCVar3->min).x + (pCVar3->max).x;
          fStack_18 = (pCVar3->min).y + (pCVar3->max).y;
          fStack_40 = fStack_1c * FLOAT_00657583;
          fStack_3c = fStack_18 * FLOAT_00657583;
          local_14 = (pCVar3->min).z + (pCVar3->max).z;
          fStack_38 = local_14 * FLOAT_00657583;
          core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)this_ptr_00);
          pCVar4 = core_actor_cpp_CDemonActor_FUN_00408f10((CDemonActor *)this_ptr);
          if ((CVector3f *)(auStack_4c + 8) != pCVar4) {
            auStack_4c._8_4_ = pCVar4->x;
            fStack_40 = pCVar4->y;
            fStack_3c = pCVar4->z;
          }
          CStack_5c.x = (int)ROUND((float)auStack_4c._8_4_ * _DAT_00665460);
          CStack_5c.y = (int)ROUND(fStack_40 * _DAT_00665460);
          CStack_5c.z = (int)ROUND(fStack_3c * _DAT_00665460);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_5c);
          engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(0,1);
        }
        iVar1 = iVar1 + 1;
        pCVar5 = (CWayPoint *)((pCVar5->base_trigger).base_actor.actor_name + 8);
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    if ((in_stack_00000018 != (CWayPoint *)0x0) &&
       (*(int *)(g_CDemonMissionPtr->field2_0xc + 0x34) != 0)) {
      if ((this_ptr != in_stack_00000018) && (*(int *)(g_CDemonMissionPtr->field2_0xc + 0x34) != 2))
      {
        return 0;
      }
      uStack00000010 = 0xff;
      if (this_ptr == in_stack_00000018) {
        uStack00000010 = 0;
      }
      pCStack_84 = &(this_ptr->base_trigger).base_actor.location;
      this_ptr_01 = (CPathMap *)core_path_cpp_FUN_00548500();
      pCStack_84 = (CLocation *)0x5ec122;
      core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(this_ptr_01);
      pCStack_84 = (CLocation *)0xff;
      core_path_cpp_FUN_00547fc0();
      return 0;
    }
  }
  return 0;
}


// Assembly code:
// 005ebf70: PUSH EBX
//   Label: core_waypoint.cpp_CWaypoint_FUN_005ebf70
// 005ebf71: PUSH ESI
// 005ebf72: PUSH EDI
// 005ebf73: PUSH EBP
// 005ebf74: SUB ESP,0x9c
// 005ebf7a: MOV ESI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x4] (READ)
// 005ebf81: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005ebf86: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005ebf8a: JNZ 0x005ebf99
//   XREF to: 005ebf99 (CONDITIONAL_JUMP)
// 005ebf8c: XOR EAX,EAX
//   Label: LAB_005ebf8c
// 005ebf8e: ADD ESP,0x9c
//   Label: LAB_005ebf8e
// 005ebf94: POP EBP
// 005ebf95: POP EDI
// 005ebf96: POP ESI
// 005ebf97: POP EBX
// 005ebf98: RET
// 005ebf99: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_005ebf99
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ebf9f: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ebfa0: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005ebfa5: ADD ESP,0x4
// 005ebfa8: TEST EAX,EAX
// 005ebfaa: JNZ 0x005ebf8c
//   XREF to: 005ebf8c (CONDITIONAL_JUMP)
// 005ebfac: MOV EBX,dword ptr [0x03f9591c]
//   XREF to: 03f9591c (READ)
// 005ebfb2: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005ebfb7: PUSH EBX
// 005ebfb8: MOV EDI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 005ebfbb: PUSH EDI
// 005ebfbc: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ebfc1: ADD ESP,0x8
// 005ebfc4: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ebfcb: TEST EAX,EAX
// 005ebfcd: JZ 0x005ebf8e
//   XREF to: 005ebf8e (CONDITIONAL_JUMP)
// 005ebfcf: PUSH 0x3
// 005ebfd1: PUSH ESI
// 005ebfd2: CALL core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 005ebfd7: ADD ESP,0x8
// 005ebfda: PUSH ESI
// 005ebfdb: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005ebfe0: ADD ESP,0x4
// 005ebfe3: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x94] (DATA)
// 005ebfe7: PUSH EDX
// 005ebfe8: MOV EAX,dword ptr [ESI + 0x154]
// 005ebfee: PUSH ESI
// 005ebfef: CALL dword ptr [EAX + 0x14]
// 005ebff2: LEA EDX,[EAX + 0xc]
// 005ebff5: FLD float ptr [EAX]
// 005ebff7: FADD float ptr [EDX]
// 005ebff9: ADD ESP,0x8
// 005ebffc: FST float ptr [ESP + 0x60]
// 005ec000: FLD float ptr [EAX + 0x4]
// 005ec003: FADD float ptr [EDX + 0x4]
// 005ec006: FXCH
// 005ec008: FLD float ptr [0x00657583]
//   XREF to: 00657583 (READ)
// 005ec00e: FXCH
// 005ec010: FMUL ST1
// 005ec012: FXCH ST2
// 005ec014: FST float ptr [ESP + 0x64]
// 005ec018: FLD float ptr [EAX + 0x8]
// 005ec01b: FADD float ptr [EDX + 0x8]
// 005ec01e: FXCH
// 005ec020: FMUL ST2
// 005ec022: FXCH
// 005ec024: FST float ptr [ESP + 0x68]
// 005ec028: FMULP ST2
// 005ec02a: LEA EBX,[ESP + 0x3c]
// 005ec02e: LEA EAX,[ESP + 0x48]
// 005ec032: FXCH ST2
// 005ec034: FSTP float ptr [ESP + 0x48]
// 005ec038: FXCH
// 005ec03a: FSTP float ptr [ESP + 0x4c]
// 005ec03e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ec044: FSTP float ptr [ESP + 0x50]
// 005ec048: FLD float ptr [EAX]
// 005ec04a: FMUL float ptr [0x00665460]
//   XREF to: 00665460 (READ)
// 005ec050: FISTP dword ptr [EBX]
// 005ec052: FLD float ptr [EAX + 0x4]
// 005ec055: FMUL float ptr [0x00665460]
//   XREF to: 00665460 (READ)
// 005ec05b: FISTP dword ptr [EBX + 0x4]
// 005ec05e: FLD float ptr [EAX + 0x8]
// 005ec061: FMUL float ptr [0x00665460]
//   XREF to: 00665460 (READ)
// 005ec067: FISTP dword ptr [EBX + 0x8]
// 005ec06a: LEA EAX,[ESP + 0x3c]
// 005ec06e: PUSH EAX
// 005ec06f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ec071: PUSH EAX
// 005ec072: XOR EDI,EDI
// 005ec074: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ec079: MOV EBP,dword ptr [ESI + 0x370]
// 005ec07f: ADD ESP,0x8
// 005ec082: TEST EBP,EBP
// 005ec084: JLE 0x005ec0a4
//   XREF to: 005ec0a4 (CONDITIONAL_JUMP)
// 005ec086: MOV EBP,ESI
// 005ec088: MOV EBX,dword ptr [EBP + 0x374]
//   Label: LAB_005ec088
// 005ec08e: CMP EBX,ESI
// 005ec090: JNC 0x005ec14d
//   XREF to: 005ec14d (CONDITIONAL_JUMP)
// 005ec096: INC EDI
//   Label: LAB_005ec096
// 005ec097: MOV EAX,dword ptr [ESI + 0x370]
// 005ec09d: ADD EBP,0x8
// 005ec0a0: CMP EDI,EAX
// 005ec0a2: JL 0x005ec088
//   XREF to: 005ec088 (CONDITIONAL_JUMP)
// 005ec0a4: PUSH ESI
//   Label: LAB_005ec0a4
// 005ec0a5: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005ec0aa: ADD ESP,0x4
// 005ec0ad: MOV EDX,dword ptr [ESP + 0x98]
// 005ec0b4: TEST EDX,EDX
// 005ec0b6: JZ 0x005ebf8c
//   XREF to: 005ebf8c (CONDITIONAL_JUMP)
// 005ec0bc: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005ec0c1: MOV ECX,dword ptr [EAX + 0x40]
//   XREF to: 02f33780 (READ)
// 005ec0c4: TEST ECX,ECX
// 005ec0c6: JZ 0x005ebf8c
//   XREF to: 005ebf8c (CONDITIONAL_JUMP)
// 005ec0cc: CMP ESI,EDX
// 005ec0ce: JNZ 0x005ec268
//   XREF to: 005ec268 (CONDITIONAL_JUMP)
// 005ec0d4: MOV EBP,0xff
//   Label: LAB_005ec0d4
// 005ec0d9: MOV EDX,dword ptr [ESP + 0x98]
// 005ec0e0: MOV EDI,EBP
// 005ec0e2: MOV dword ptr [ESP + 0x90],EBP
// 005ec0e9: MOV dword ptr [ESP + 0x94],EBP
// 005ec0f0: MOV EBP,0x40
// 005ec0f5: CMP ESI,EDX
// 005ec0f7: JNZ 0x005ec10e
//   XREF to: 005ec10e (CONDITIONAL_JUMP)
// 005ec0f9: XOR ECX,ECX
// 005ec0fb: MOV EBP,0x80
// 005ec100: MOV dword ptr [ESP + 0x90],ECX
// 005ec107: MOV dword ptr [ESP + 0x94],ECX
// 005ec10e: ADD ESI,0x20
//   Label: LAB_005ec10e
// 005ec111: PUSH ESI
// 005ec112: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 005ec117: ADD ESP,0x4
// 005ec11a: PUSH EAX
// 005ec11b: MOV EBX,EAX
// 005ec11d: CALL core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750
//   XREF to: 00548750 (UNCONDITIONAL_CALL)
// 005ec122: ADD ESP,0x4
// 005ec125: PUSH EBP
// 005ec126: MOV ESI,dword ptr [ESP + 0x94]
// 005ec12d: PUSH ESI
// 005ec12e: PUSH EDI
// 005ec12f: MOV EDI,dword ptr [ESP + 0xa0]
// 005ec136: PUSH EDI
// 005ec137: PUSH EBX
// 005ec138: CALL core_path.cpp_FUN_00547fc0
//   XREF to: 00547fc0 (UNCONDITIONAL_CALL)
// 005ec13d: ADD ESP,0x14
// 005ec140: XOR EAX,EAX
// 005ec142: ADD ESP,0x9c
// 005ec148: POP EBP
// 005ec149: POP EDI
// 005ec14a: POP ESI
// 005ec14b: POP EBX
// 005ec14c: RET
// 005ec14d: MOV EAX,0x2
//   Label: LAB_005ec14d
// 005ec152: MOV EDX,dword ptr [ESP + 0x98]
// 005ec159: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 005ec15e: CMP ESI,EDX
// 005ec160: JNZ 0x005ec25b
//   XREF to: 005ec25b (CONDITIONAL_JUMP)
// 005ec166: MOV dword ptr [0x02d02570],0xfa
//   Label: LAB_005ec166
//   XREF to: 02d02570 (WRITE)
// 005ec170: MOV EDX,ESP
//   Label: LAB_005ec170
// 005ec172: PUSH EDX
// 005ec173: MOV EAX,dword ptr [EBX + 0x154]
// 005ec179: PUSH EBX
// 005ec17a: CALL dword ptr [EAX + 0x14]
// 005ec17d: LEA EDX,[EAX + 0xc]
// 005ec180: FLD float ptr [EAX]
// 005ec182: FADD float ptr [EDX]
// 005ec184: ADD ESP,0x8
// 005ec187: FST float ptr [ESP + 0x78]
// 005ec18b: FLD float ptr [EAX + 0x4]
// 005ec18e: FADD float ptr [EDX + 0x4]
// 005ec191: FXCH
// 005ec193: FLD float ptr [0x00657583]
//   XREF to: 00657583 (READ)
// 005ec199: FXCH
// 005ec19b: FMUL ST1
// 005ec19d: FXCH ST2
// 005ec19f: FST float ptr [ESP + 0x7c]
// 005ec1a3: FMUL ST1
// 005ec1a5: FLD float ptr [EAX + 0x8]
// 005ec1a8: FADD float ptr [EDX + 0x8]
// 005ec1ab: LEA EAX,[ESP + 0x54]
// 005ec1af: FST float ptr [ESP + 0x80]
// 005ec1b6: FMULP ST2
// 005ec1b8: PUSH EAX
// 005ec1b9: LEA EAX,[ESP + 0x88]
// 005ec1c0: FXCH ST2
// 005ec1c2: FSTP float ptr [ESP + 0x58]
// 005ec1c6: PUSH EAX
// 005ec1c7: FXCH
// 005ec1c9: FSTP float ptr [ESP + 0x60]
// 005ec1cd: PUSH EBX
// 005ec1ce: FSTP float ptr [ESP + 0x68]
// 005ec1d2: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005ec1d7: ADD ESP,0xc
// 005ec1da: PUSH EAX
// 005ec1db: LEA EAX,[ESP + 0x70]
// 005ec1df: PUSH EAX
// 005ec1e0: PUSH ESI
// 005ec1e1: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005ec1e6: MOV EBX,EAX
// 005ec1e8: LEA EAX,[ESP + 0x54]
// 005ec1ec: ADD ESP,0xc
// 005ec1ef: CMP EAX,EBX
// 005ec1f1: JZ 0x005ec207
//   XREF to: 005ec207 (CONDITIONAL_JUMP)
// 005ec1f3: MOV EAX,dword ptr [EBX]
// 005ec1f5: MOV dword ptr [ESP + 0x48],EAX
// 005ec1f9: MOV EAX,dword ptr [EBX + 0x4]
// 005ec1fc: MOV dword ptr [ESP + 0x4c],EAX
// 005ec200: MOV EAX,dword ptr [EBX + 0x8]
// 005ec203: MOV dword ptr [ESP + 0x50],EAX
// 005ec207: LEA EBX,[ESP + 0x30]
//   Label: LAB_005ec207
// 005ec20b: LEA EAX,[ESP + 0x48]
// 005ec20f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ec215: FLD float ptr [EAX]
// 005ec217: FMUL float ptr [0x00665460]
//   XREF to: 00665460 (READ)
// 005ec21d: FISTP dword ptr [EBX]
// 005ec21f: FLD float ptr [EAX + 0x4]
// 005ec222: FMUL float ptr [0x00665460]
//   XREF to: 00665460 (READ)
// 005ec228: FISTP dword ptr [EBX + 0x4]
// 005ec22b: FLD float ptr [EAX + 0x8]
// 005ec22e: FMUL float ptr [0x00665460]
//   XREF to: 00665460 (READ)
// 005ec234: FISTP dword ptr [EBX + 0x8]
// 005ec237: LEA EAX,[ESP + 0x30]
// 005ec23b: PUSH EAX
// 005ec23c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ec23e: ADD EAX,0x30
// 005ec241: PUSH EAX
// 005ec242: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ec247: ADD ESP,0x8
// 005ec24a: PUSH 0x1
// 005ec24c: PUSH 0x0
// 005ec24e: CALL engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
//   XREF to: 00407cf0 (UNCONDITIONAL_CALL)
// 005ec253: ADD ESP,0x8
// 005ec256: JMP 0x005ec096
//   XREF to: 005ec096 (UNCONDITIONAL_JUMP)
// 005ec25b: CMP EBX,EDX
//   Label: LAB_005ec25b
// 005ec25d: JZ 0x005ec166
//   XREF to: 005ec166 (CONDITIONAL_JUMP)
// 005ec263: JMP 0x005ec170
//   XREF to: 005ec170 (UNCONDITIONAL_JUMP)
// 005ec268: CMP ECX,0x2
//   Label: LAB_005ec268
// 005ec26b: JZ 0x005ec0d4
//   XREF to: 005ec0d4 (CONDITIONAL_JUMP)
// 005ec271: XOR EAX,EAX
// 005ec273: ADD ESP,0x9c
// 005ec279: POP EBP
// 005ec27a: POP EDI
// 005ec27b: POP ESI
// 005ec27c: POP EBX
// 005ec27d: RET
