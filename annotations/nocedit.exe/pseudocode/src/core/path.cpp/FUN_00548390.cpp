// Name: core_path.cpp_FUN_00548390
// Address: 00548390
// Address Range: [[00548390, 005484fa]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00548390()
// Cross-references:
//   core_path.cpp_FUN_00548500 (00548500) at 00548505 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CPathMapTypeInfo
//   WatcomStaticDestructorNode DAT_00680bc8
//   undefined4 DAT_00680bd8
//   undefined4 DAT_00680bdc
//   CPathMap[12] DAT_02fd9060
//   undefined4 DAT_02fec910
//   undefined4 DAT_02fec914
//   undefined4 DAT_02fec918
//   undefined4 DAT_030001ec
//   undefined4 DAT_030001f0
//   undefined4 DAT_030001f4
//   undefined1 DAT_030c3ab0
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

CPathMap * core_path_cpp_FUN_00548390(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  int iVar5;
  int unaff_EDI;
  byte bVar6;
  CVector3f *in_stack_00000004;
  float afStackY_1010 [1012];
  CVector3i *in_stack_ffffffd4;
  float local_28;
  CVector3f local_1c;
  
  bVar6 = 0;
  if ((DAT_030c3ab0 & 1) == 0) {
    DAT_030c3ab0 = DAT_030c3ab0 | 1;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_02fd9060,0xc,&g_CPathMapTypeInfo)
    ;
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_00680bc8);
  }
  if (DAT_00680bd8 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_00680bd8 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,in_stack_00000004,in_stack_ffffffd4);
  iVar2 = 0;
  local_1c.z = local_28;
  *(undefined4 *)(&stack0xfffffff0 + (uint)bVar6 * -8) =
       *(undefined4 *)(&stack0xffffffdc + (uint)bVar6 * -8);
  *(undefined4 *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(undefined4 *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((unaff_EBP == *(int *)((int)&DAT_02fd9060[0].cached_voxel_coords.x + iVar3)) &&
        (unaff_EDI == *(int *)((int)&DAT_02fd9060[0].cached_voxel_coords.y + iVar3))) &&
       (iVar5 = iVar2, unaff_ESI == *(int *)((int)&DAT_02fd9060[0].cached_voxel_coords.z + iVar3)))
    break;
    iVar5 = iVar1;
    if ((&DAT_00680bd8)[iVar1] < *(int *)((int)&DAT_00680bd8 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00680bd8 + iVar1) < (&DAT_00680bd8)[iVar5]) {
      *(int *)((int)&DAT_00680bd8 + iVar1) = *(int *)((int)&DAT_00680bd8 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  (&DAT_00680bd8)[iVar5] = 0;
  local_1c.x = in_stack_00000004->x;
  local_1c.y = in_stack_00000004->y;
  local_1c.z = in_stack_00000004->z;
  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(DAT_02fd9060 + iVar5,&local_1c,1);
  return DAT_02fd9060 + iVar5;
}


// Assembly code:
// 00548390: PUSH EBX
//   Label: core_path.cpp_FUN_00548390
// 00548391: PUSH ESI
// 00548392: PUSH EDI
// 00548393: PUSH EBP
// 00548394: SUB ESP,0x24
// 00548397: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0054839b: MOV AH,byte ptr [0x030c3ab0]
//   XREF to: 030c3ab0 (READ)
// 005483a1: TEST AH,0x1
// 005483a4: JZ 0x00548489
//   XREF to: 00548489 (CONDITIONAL_JUMP)
// 005483aa: CMP dword ptr [0x00680bd8],0x0
//   Label: LAB_005483aa
//   XREF to: 00680bd8 (READ)
// 005483b1: JL 0x005484ba
//   XREF to: 005484ba (CONDITIONAL_JUMP)
// 005483b7: LEA EAX,[EAX]
// 005483bd: LEA EDX,[EDX]
// 005483c0: PUSH EBP
//   Label: LAB_005483c0
// 005483c1: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 005483c5: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005483ca: LEA EDI,[ESP + 0x20]
//   XREF to: Stack[-0x1c] (DATA)
// 005483ce: XOR EBX,EBX
// 005483d0: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 005483d5: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 005483d9: ADD ESP,0x8
// 005483dc: XOR ECX,ECX
// 005483de: MOVSD ES:EDI,ESI
// 005483df: MOVSD ES:EDI,ESI
// 005483e0: MOVSD ES:EDI,ESI
// 005483e1: XOR EDX,EDX
// 005483e3: XOR ESI,ESI
// 005483e5: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_005483e5
//   XREF to: Stack[-0x1c] (READ)
// 005483e9: CMP EDI,dword ptr [EDX + 0x2fec910]
//   XREF to: 02fec910 (READ)
//   XREF to: 030001ec (READ)
// 005483ef: JNZ 0x005484d2
//   XREF to: 005484d2 (CONDITIONAL_JUMP)
// 005483f5: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 005483f9: CMP EDI,dword ptr [EDX + 0x2fec914]
//   XREF to: 02fec914 (READ)
//   XREF to: 030001f0 (READ)
// 005483ff: JNZ 0x005484d2
//   XREF to: 005484d2 (CONDITIONAL_JUMP)
// 00548405: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00548409: CMP EDI,dword ptr [EDX + 0x2fec918]
//   XREF to: 02fec918 (READ)
//   XREF to: 030001f4 (READ)
// 0054840f: JNZ 0x005484d2
//   XREF to: 005484d2 (CONDITIONAL_JUMP)
// 00548415: MOV ESI,ECX
// 00548417: LEA ECX,[ESI*0x4 + 0x0]
//   Label: LAB_00548417
// 0054841e: XOR EAX,EAX
// 00548420: MOV EBX,dword ptr [ECX + 0x680bd8]
//   Label: LAB_00548420
//   XREF to: 00680bd8 (READ)
//   XREF to: 00680bdc (READ)
// 00548426: MOV EDX,dword ptr [EAX + 0x680bd8]
//   XREF to: 00680bd8 (READ)
//   XREF to: 00680bdc (READ)
// 0054842c: CMP EDX,EBX
// 0054842e: JGE 0x00548439
//   XREF to: 00548439 (CONDITIONAL_JUMP)
// 00548430: LEA EDI,[EDX + 0x1]
// 00548433: MOV dword ptr [EAX + 0x680bd8],EDI
//   XREF to: 00680bd8 (WRITE)
//   XREF to: 00680bdc (WRITE)
// 00548439: ADD EAX,0x4
//   Label: LAB_00548439
// 0054843c: CMP EAX,0x30
// 0054843f: JNZ 0x00548420
//   XREF to: 00548420 (CONDITIONAL_JUMP)
// 00548441: IMUL EBX,ESI,0x138dc
// 00548447: XOR EAX,EAX
// 00548449: MOV dword ptr [ESI*0x4 + 0x680bd8],EAX
//   XREF to: 00680bd8 (WRITE)
// 00548450: MOV EAX,dword ptr [EBP]
// 00548453: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00548457: LEA EAX,[EBP + 0x4]
// 0054845a: MOV EAX,dword ptr [EAX]
// 0054845c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00548460: LEA EAX,[EBP + 0x8]
// 00548463: MOV EAX,dword ptr [EAX]
// 00548465: PUSH 0x1
// 00548467: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0054846b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 0054846f: PUSH EAX
// 00548470: ADD EBX,0x2fd9060
//   XREF to: 02fd9060 (PARAM)
// 00548476: PUSH EBX
//   XREF to: 02fd9060 (DATA)
// 00548477: CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
//   XREF to: 00546a60 (UNCONDITIONAL_CALL)
// 0054847c: ADD ESP,0xc
// 0054847f: MOV EAX,EBX
//   XREF to: 02fd9060 (DATA)
// 00548481: ADD ESP,0x24
// 00548484: POP EBP
// 00548485: POP EDI
// 00548486: POP ESI
// 00548487: POP EBX
// 00548488: RET
// 00548489: PUSH 0x662110
//   Label: LAB_00548489
//   XREF to: 00662110 (DATA)
// 0054848e: MOV DL,AH
// 00548490: PUSH 0xc
// 00548492: OR DL,0x1
// 00548495: PUSH 0x2fd9060
//   XREF to: 02fd9060 (DATA)
// 0054849a: MOV byte ptr [0x030c3ab0],DL
//   XREF to: 030c3ab0 (WRITE)
// 005484a0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005484a5: ADD ESP,0xc
// 005484a8: PUSH 0x680bc8
//   XREF to: 00680bc8 (DATA)
// 005484ad: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005484b2: ADD ESP,0x4
// 005484b5: JMP 0x005483aa
//   XREF to: 005483aa (UNCONDITIONAL_JUMP)
// 005484ba: XOR EDX,EDX
//   Label: LAB_005484ba
// 005484bc: XOR EAX,EAX
// 005484be: MOV dword ptr [EDX + 0x680bd8],EAX
//   Label: LAB_005484be
//   XREF to: 00680bd8 (WRITE)
//   XREF to: 00680bdc (WRITE)
// 005484c4: INC EAX
// 005484c5: ADD EDX,0x4
// 005484c8: CMP EAX,0xc
// 005484cb: JL 0x005484be
//   XREF to: 005484be (CONDITIONAL_JUMP)
// 005484cd: JMP 0x005483c0
//   XREF to: 005483c0 (UNCONDITIONAL_JUMP)
// 005484d2: MOV EAX,dword ptr [EBX + 0x680bd8]
//   Label: LAB_005484d2
//   XREF to: 00680bd8 (READ)
//   XREF to: 00680bdc (READ)
// 005484d8: CMP EAX,dword ptr [ESI*0x4 + 0x680bd8]
//   XREF to: 00680bd8 (READ)
// 005484df: JLE 0x005484e3
//   XREF to: 005484e3 (CONDITIONAL_JUMP)
// 005484e1: MOV ESI,ECX
// 005484e3: ADD EBX,0x4
//   Label: LAB_005484e3
// 005484e6: INC ECX
// 005484e7: ADD EDX,0x138dc
// 005484ed: CMP ECX,0xc
// 005484f0: JL 0x005483e5
//   XREF to: 005483e5 (CONDITIONAL_JUMP)
// 005484f6: JMP 0x00548417
//   XREF to: 00548417 (UNCONDITIONAL_JUMP)
