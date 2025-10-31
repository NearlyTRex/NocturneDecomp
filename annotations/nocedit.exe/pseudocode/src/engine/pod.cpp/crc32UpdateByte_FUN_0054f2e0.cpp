// Name: engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
// Address: 0054f2e0
// Address Range: [[0054f2e0, 0054f395]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
// Cross-references:
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b65aa [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 (005507f0) at 005508e4 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005503b3 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 00551128 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 (0054f490) at 0054f512 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0 (0054f3e0) at 0054f422 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0 (0054f3a0) at 0054f3bd [UNCONDITIONAL_CALL]

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc,uchar data_byte)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = current_crc ^ (uint)data_byte << 0x18;
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  uVar2 = uVar1 * 2;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 ^ 0x4c11db7;
  }
  uVar1 = uVar2 * 2;
  if ((uVar2 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ 0x4c11db7;
  }
  if ((uVar1 & 0x80000000) == 0) {
    return uVar1 * 2;
  }
  return uVar1 * 2 ^ 0x4c11db7;
}


// Assembly code:
// 0054f2e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: Stack[0x4] (READ)
// 0054f2e4: XOR EAX,EAX
// 0054f2e6: MOV AL,byte ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054f2ea: SHL EAX,0x18
// 0054f2ed: XOR EDX,EAX
// 0054f2ef: LEA EAX,[EDX + EDX*0x1]
// 0054f2f2: TEST EDX,0x80000000
// 0054f2f8: JZ 0x0054f2ff
//   XREF to: 0054f2ff (CONDITIONAL_JUMP)
// 0054f2fa: XOR EAX,0x4c11db7
// 0054f2ff: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f2ff
// 0054f302: TEST EAX,0x80000000
// 0054f307: JZ 0x0054f37b
//   XREF to: 0054f37b (CONDITIONAL_JUMP)
// 0054f30d: MOV EAX,EDX
// 0054f30f: XOR EAX,0x4c11db7
// 0054f314: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f314
// 0054f317: TEST EAX,0x80000000
// 0054f31c: JZ 0x0054f37f
//   XREF to: 0054f37f (CONDITIONAL_JUMP)
// 0054f31e: MOV EAX,EDX
// 0054f320: XOR EAX,0x4c11db7
// 0054f325: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f325
// 0054f328: TEST EAX,0x80000000
// 0054f32d: JZ 0x0054f383
//   XREF to: 0054f383 (CONDITIONAL_JUMP)
// 0054f32f: MOV EAX,EDX
// 0054f331: XOR EAX,0x4c11db7
// 0054f336: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f336
// 0054f339: TEST EAX,0x80000000
// 0054f33e: JZ 0x0054f387
//   XREF to: 0054f387 (CONDITIONAL_JUMP)
// 0054f340: MOV EAX,EDX
// 0054f342: XOR EAX,0x4c11db7
// 0054f347: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f347
// 0054f34a: TEST EAX,0x80000000
// 0054f34f: JZ 0x0054f38b
//   XREF to: 0054f38b (CONDITIONAL_JUMP)
// 0054f351: MOV EAX,EDX
// 0054f353: XOR EAX,0x4c11db7
// 0054f358: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f358
// 0054f35b: TEST EAX,0x80000000
// 0054f360: JZ 0x0054f38f
//   XREF to: 0054f38f (CONDITIONAL_JUMP)
// 0054f362: MOV EAX,EDX
// 0054f364: XOR EAX,0x4c11db7
// 0054f369: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_0054f369
// 0054f36c: TEST EAX,0x80000000
// 0054f371: JZ 0x0054f393
//   XREF to: 0054f393 (CONDITIONAL_JUMP)
// 0054f373: MOV EAX,EDX
// 0054f375: XOR EAX,0x4c11db7
// 0054f37a: RET
// 0054f37b: MOV EAX,EDX
//   Label: LAB_0054f37b
// 0054f37d: JMP 0x0054f314
//   XREF to: 0054f314 (UNCONDITIONAL_JUMP)
// 0054f37f: MOV EAX,EDX
//   Label: LAB_0054f37f
// 0054f381: JMP 0x0054f325
//   XREF to: 0054f325 (UNCONDITIONAL_JUMP)
// 0054f383: MOV EAX,EDX
//   Label: LAB_0054f383
// 0054f385: JMP 0x0054f336
//   XREF to: 0054f336 (UNCONDITIONAL_JUMP)
// 0054f387: MOV EAX,EDX
//   Label: LAB_0054f387
// 0054f389: JMP 0x0054f347
//   XREF to: 0054f347 (UNCONDITIONAL_JUMP)
// 0054f38b: MOV EAX,EDX
//   Label: LAB_0054f38b
// 0054f38d: JMP 0x0054f358
//   XREF to: 0054f358 (UNCONDITIONAL_JUMP)
// 0054f38f: MOV EAX,EDX
//   Label: LAB_0054f38f
// 0054f391: JMP 0x0054f369
//   XREF to: 0054f369 (UNCONDITIONAL_JUMP)
// 0054f393: MOV EAX,EDX
//   Label: LAB_0054f393
// 0054f395: RET
