// Name: shape_superopt.cpp_FUN_005d0340
// Address: 005d0340
// Address Range: [[005d0340, 005d0cd2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d0340()
// Function calls:
//   shape_superopt.cpp_FUN_005d6640

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d0340(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d0340(void)

{
  double dVar1;
  
  dVar1 = (double)shape_superopt_cpp_FUN_005d6640();
  if (((dVar1 <= 0.0) && (dVar1 = (double)shape_superopt_cpp_FUN_005d6640(), dVar1 <= 0.0)) &&
     (dVar1 = (double)shape_superopt_cpp_FUN_005d6640(), dVar1 <= 0.0)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005d0340: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d0340
// 005d0341: PUSH ESI
// 005d0342: PUSH EBP
// 005d0343: MOV EBP,ESP
// 005d0345: SUB ESP,0x1c8
// 005d034b: AND ESP,0xfffffff8
// 005d034e: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d0351: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d0354: FLDZ
// 005d0356: FCOMP double ptr [EDX + 0x40]
// 005d0359: FNSTSW AX
// 005d035b: SAHF
// 005d035c: JBE 0x005d05ba
//   XREF to: 005d05ba (CONDITIONAL_JUMP)
// 005d0362: FLD double ptr [EDX + 0x40]
// 005d0365: FCHS
// 005d0367: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d0] (WRITE)
// 005d036b: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005d036b
//   XREF to: Stack[-0x1d0] (READ)
// 005d036f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 005d0373: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1cc] (READ)
// 005d0377: FLDZ
// 005d0379: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 005d037d: FCOMP double ptr [EDX + 0x48]
// 005d0380: FNSTSW AX
// 005d0382: SAHF
// 005d0383: JA 0x005d05cd
//   XREF to: 005d05cd (CONDITIONAL_JUMP)
// 005d0389: MOV EAX,dword ptr [EDX + 0x48]
// 005d038c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1d8] (DATA)
// 005d038f: MOV EAX,dword ptr [EDX + 0x4c]
// 005d0392: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 005d0396: MOV EAX,dword ptr [ESP]
//   Label: LAB_005d0396
//   XREF to: Stack[-0x1d8] (DATA)
// 005d0399: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 005d039d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1d4] (READ)
// 005d03a1: FLDZ
// 005d03a3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 005d03a7: FCOMP double ptr [EDX + 0x50]
// 005d03aa: FNSTSW AX
// 005d03ac: SAHF
// 005d03ad: JA 0x005d05da
//   XREF to: 005d05da (CONDITIONAL_JUMP)
// 005d03b3: MOV EAX,dword ptr [EDX + 0x50]
// 005d03b6: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 005d03ba: MOV EAX,dword ptr [EDX + 0x54]
// 005d03bd: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 005d03c1: FLD double ptr [ESP + 0x20]
//   Label: LAB_005d03c1
//   XREF to: Stack[-0x1b8] (READ)
// 005d03c5: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1b0] (READ)
// 005d03c9: MOV ECX,dword ptr [EDX]
// 005d03cb: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 005d03cf: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1ac] (READ)
// 005d03d3: MOV ECX,dword ptr [ECX + 0x4]
// 005d03d6: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 005d03da: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c8] (READ)
// 005d03de: FNSTSW AX
// 005d03e0: SAHF
// 005d03e1: JC 0x005d070c
//   XREF to: 005d070c (CONDITIONAL_JUMP)
// 005d03e7: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1b8] (READ)
// 005d03eb: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1b0] (READ)
// 005d03ef: FNSTSW AX
// 005d03f1: SAHF
// 005d03f2: JC 0x005d070c
//   XREF to: 005d070c (CONDITIONAL_JUMP)
// 005d03f8: FLDZ
// 005d03fa: FCOMP double ptr [EDX + 0x40]
// 005d03fd: FNSTSW AX
// 005d03ff: SAHF
// 005d0400: JBE 0x005d05e8
//   XREF to: 005d05e8 (CONDITIONAL_JUMP)
// 005d0406: MOV EAX,dword ptr [EDX + 0x4]
// 005d0409: SHL EAX,0x3
// 005d040c: MOV ESI,EAX
// 005d040e: SHL EAX,0x3
// 005d0411: SUB EAX,ESI
// 005d0413: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d0417: MOV dword ptr [ESP + 0xd8],ESI
//   XREF to: Stack[-0x100] (WRITE)
// 005d041e: MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0422: MOV dword ptr [ESP + 0xdc],ESI
//   XREF to: Stack[-0xfc] (WRITE)
// 005d0429: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d042d: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d0431: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005d0438: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x100] (READ)
// 005d043f: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d0443: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0xfc] (READ)
// 005d044a: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d044e: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0xf4] (READ)
// 005d0455: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x190] (WRITE)
// 005d0459: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d045d: MOV EAX,dword ptr [EDX + 0x8]
// 005d0460: SHL EAX,0x3
// 005d0463: MOV dword ptr [ESP + 0xe0],ESI
//   XREF to: Stack[-0xf8] (WRITE)
// 005d046a: MOV ESI,EAX
// 005d046c: SHL EAX,0x3
// 005d046f: SUB EAX,ESI
// 005d0471: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d0475: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x150] (WRITE)
// 005d047c: MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0480: MOV dword ptr [ESP + 0x8c],ESI
//   XREF to: Stack[-0x14c] (WRITE)
// 005d0487: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d048b: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d048f: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005d0496: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x150] (READ)
// 005d049d: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d04a1: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14c] (READ)
// 005d04a8: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d04ac: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x144] (READ)
// 005d04b3: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x170] (WRITE)
// 005d04b7: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d04bb: MOV EAX,dword ptr [EDX + 0xc]
// 005d04be: SHL EAX,0x3
// 005d04c1: MOV EDX,EAX
// 005d04c3: SHL EAX,0x3
// 005d04c6: SUB EAX,EDX
// 005d04c8: ADD ECX,EAX
// 005d04ca: MOV EAX,dword ptr [ECX + 0x8]
// 005d04cd: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 005d04d4: MOV EAX,dword ptr [ECX + 0xc]
// 005d04d7: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 005d04de: MOV EAX,dword ptr [ECX + 0x10]
// 005d04e1: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005d04e8: MOV EAX,dword ptr [ECX + 0x14]
// 005d04eb: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005d04f2: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x130] (READ)
// 005d04f9: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d04fd: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x12c] (READ)
// 005d0504: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d0508: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x128] (READ)
// 005d050f: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d0513: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x124] (READ)
// 005d051a: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0x148] (WRITE)
// 005d0521: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d0525: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005d0525
// 005d0528: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005d052f: MOV EAX,dword ptr [EBX + 0xc]
// 005d0532: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005d0539: MOV EAX,dword ptr [EBX + 0x10]
// 005d053c: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005d0543: MOV EAX,dword ptr [EBX + 0x14]
// 005d0546: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005d054d: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0xc8] (READ)
// 005d0554: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005d0558: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0xc4] (READ)
// 005d055f: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005d0563: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0xc0] (READ)
// 005d056a: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005d056e: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0xbc] (READ)
// 005d0575: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_005d0575
//   XREF to: Stack[-0x17c] (WRITE)
// 005d0579: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x188] (DATA)
// 005d057d: PUSH EAX
// 005d057e: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x178] (DATA)
// 005d0582: PUSH EAX
// 005d0583: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x198] (DATA)
// 005d0587: PUSH EAX
// 005d0588: CALL shape_superopt.cpp_FUN_005d6640
//   XREF to: 005d6640 (UNCONDITIONAL_CALL)
// 005d058d: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d0594: MOV dword ptr [ESP + 0x1d0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005d059b: FLD double ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x18] (READ)
// 005d05a2: FLDZ
// 005d05a4: ADD ESP,0xc
// 005d05a7: FCOMPP
// 005d05a9: FNSTSW AX
// 005d05ab: SAHF
// 005d05ac: JNC 0x005d0c56
//   XREF to: 005d0c56 (CONDITIONAL_JUMP)
// 005d05b2: XOR EAX,EAX
//   Label: LAB_005d05b2
// 005d05b4: MOV ESP,EBP
// 005d05b6: POP EBP
// 005d05b7: POP ESI
// 005d05b8: POP EBX
// 005d05b9: RET
// 005d05ba: MOV EAX,dword ptr [EDX + 0x40]
//   Label: LAB_005d05ba
// 005d05bd: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 005d05c1: MOV EAX,dword ptr [EDX + 0x44]
// 005d05c4: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 005d05c8: JMP 0x005d036b
//   XREF to: 005d036b (UNCONDITIONAL_JUMP)
// 005d05cd: FLD double ptr [EDX + 0x48]
//   Label: LAB_005d05cd
// 005d05d0: FCHS
// 005d05d2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1d8] (DATA)
// 005d05d5: JMP 0x005d0396
//   XREF to: 005d0396 (UNCONDITIONAL_JUMP)
// 005d05da: FLD double ptr [EDX + 0x50]
//   Label: LAB_005d05da
// 005d05dd: FCHS
// 005d05df: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1b0] (WRITE)
// 005d05e3: JMP 0x005d03c1
//   XREF to: 005d03c1 (UNCONDITIONAL_JUMP)
// 005d05e8: MOV EAX,dword ptr [EDX + 0x4]
//   Label: LAB_005d05e8
// 005d05eb: SHL EAX,0x3
// 005d05ee: MOV ESI,EAX
// 005d05f0: SHL EAX,0x3
// 005d05f3: SUB EAX,ESI
// 005d05f5: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d05f9: MOV dword ptr [ESP + 0x188],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 005d0600: MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0604: MOV dword ptr [ESP + 0x18c],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 005d060b: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d060f: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d0613: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 005d061a: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x50] (READ)
// 005d0621: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d0625: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x4c] (READ)
// 005d062c: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d0630: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x10c] (READ)
// 005d0637: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d063b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d063f: MOV EAX,dword ptr [EDX + 0x8]
// 005d0642: SHL EAX,0x3
// 005d0645: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x110] (WRITE)
// 005d064c: MOV ESI,EAX
// 005d064e: SHL EAX,0x3
// 005d0651: SUB EAX,ESI
// 005d0653: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d0657: MOV dword ptr [ESP + 0x190],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 005d065e: MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0662: MOV dword ptr [ESP + 0x194],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 005d0669: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d066d: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d0671: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005d0678: MOV EAX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x48] (READ)
// 005d067f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d0683: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x44] (READ)
// 005d068a: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d068e: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xe4] (READ)
// 005d0695: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x170] (WRITE)
// 005d0699: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d069d: MOV EAX,dword ptr [EDX + 0xc]
// 005d06a0: SHL EAX,0x3
// 005d06a3: MOV EDX,EAX
// 005d06a5: SHL EAX,0x3
// 005d06a8: SUB EAX,EDX
// 005d06aa: ADD ECX,EAX
// 005d06ac: MOV EAX,dword ptr [ECX + 0x8]
// 005d06af: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005d06b6: MOV EAX,dword ptr [ECX + 0xc]
// 005d06b9: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005d06c0: MOV EAX,dword ptr [ECX + 0x10]
// 005d06c3: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005d06ca: MOV EAX,dword ptr [ECX + 0x14]
// 005d06cd: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005d06d4: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0xd8] (READ)
// 005d06db: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d06df: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0xd4] (READ)
// 005d06e6: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d06ea: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0xd0] (READ)
// 005d06f1: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005d06f5: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0xcc] (READ)
// 005d06fc: MOV dword ptr [ESP + 0xf0],ESI
//   XREF to: Stack[-0xe8] (WRITE)
// 005d0703: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d0707: JMP 0x005d0525
//   XREF to: 005d0525 (UNCONDITIONAL_JUMP)
// 005d070c: FLD double ptr [ESP + 0x10]
//   Label: LAB_005d070c
//   XREF to: Stack[-0x1c8] (READ)
// 005d0710: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1b8] (READ)
// 005d0714: FNSTSW AX
// 005d0716: SAHF
// 005d0717: JC 0x005d09c1
//   XREF to: 005d09c1 (CONDITIONAL_JUMP)
// 005d071d: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c8] (READ)
// 005d0721: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c0] (READ)
// 005d0725: FNSTSW AX
// 005d0727: SAHF
// 005d0728: JC 0x005d09c1
//   XREF to: 005d09c1 (CONDITIONAL_JUMP)
// 005d072e: FLDZ
// 005d0730: FCOMP double ptr [EDX + 0x48]
// 005d0733: FNSTSW AX
// 005d0735: SAHF
// 005d0736: JNC 0x005d08a0
//   XREF to: 005d08a0 (CONDITIONAL_JUMP)
// 005d073c: MOV EAX,dword ptr [EDX + 0x4]
// 005d073f: SHL EAX,0x3
// 005d0742: MOV ESI,EAX
// 005d0744: SHL EAX,0x3
// 005d0747: SUB EAX,ESI
// 005d0749: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d074c: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x168] (WRITE)
// 005d0750: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d0754: MOV dword ptr [ESP + 0x74],ESI
//   XREF to: Stack[-0x164] (WRITE)
// 005d0758: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d075c: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d0760: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005d0767: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x168] (READ)
// 005d076b: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d076f: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x164] (READ)
// 005d0773: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d0777: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x13c] (READ)
// 005d077e: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x190] (WRITE)
// 005d0782: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d0786: MOV EAX,dword ptr [EDX + 0x8]
// 005d0789: SHL EAX,0x3
// 005d078c: MOV dword ptr [ESP + 0x98],ESI
//   XREF to: Stack[-0x140] (WRITE)
// 005d0793: MOV ESI,EAX
// 005d0795: SHL EAX,0x3
// 005d0798: SUB EAX,ESI
// 005d079a: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d079d: MOV dword ptr [ESP + 0x148],ESI
//   XREF to: Stack[-0x90] (WRITE)
// 005d07a4: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d07a8: MOV dword ptr [ESP + 0x14c],ESI
//   XREF to: Stack[-0x8c] (WRITE)
// 005d07af: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d07b3: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d07b7: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005d07be: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x90] (READ)
// 005d07c5: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d07c9: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x8c] (READ)
// 005d07d0: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d07d4: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xec] (READ)
// 005d07db: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x170] (WRITE)
// 005d07df: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d07e3: MOV EAX,dword ptr [EDX + 0xc]
// 005d07e6: SHL EAX,0x3
// 005d07e9: MOV EDX,EAX
// 005d07eb: SHL EAX,0x3
// 005d07ee: SUB EAX,EDX
// 005d07f0: ADD ECX,EAX
// 005d07f2: MOV EAX,dword ptr [ECX]
// 005d07f4: MOV dword ptr [ESP + 0x168],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005d07fb: MOV EAX,dword ptr [ECX + 0x4]
// 005d07fe: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005d0805: MOV EAX,dword ptr [ECX + 0x10]
// 005d0808: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005d080f: MOV EAX,dword ptr [ECX + 0x14]
// 005d0812: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005d0819: MOV EAX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x70] (READ)
// 005d0820: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d0824: MOV EAX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x6c] (READ)
// 005d082b: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d082f: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x120] (READ)
// 005d0836: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d083a: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x11c] (READ)
// 005d0841: MOV dword ptr [ESP + 0xe8],ESI
//   XREF to: Stack[-0xf0] (WRITE)
// 005d0848: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d084c: MOV EAX,dword ptr [EBX]
//   Label: LAB_005d084c
// 005d084e: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005d0855: MOV EAX,dword ptr [EBX + 0x4]
// 005d0858: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d085f: MOV EAX,dword ptr [EBX + 0x10]
// 005d0862: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005d0869: MOV EAX,dword ptr [EBX + 0x14]
// 005d086c: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005d0873: MOV EAX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x30] (READ)
// 005d087a: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005d087e: MOV EAX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x2c] (READ)
// 005d0885: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005d0889: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xa8] (READ)
// 005d0890: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005d0894: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0xa4] (READ)
// 005d089b: JMP 0x005d0575
//   XREF to: 005d0575 (UNCONDITIONAL_JUMP)
// 005d08a0: MOV EAX,dword ptr [EDX + 0x4]
//   Label: LAB_005d08a0
// 005d08a3: SHL EAX,0x3
// 005d08a6: MOV ESI,EAX
// 005d08a8: SHL EAX,0x3
// 005d08ab: SUB EAX,ESI
// 005d08ad: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d08b0: MOV dword ptr [ESP + 0x180],ESI
//   XREF to: Stack[-0x58] (WRITE)
// 005d08b7: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d08bb: MOV dword ptr [ESP + 0x184],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 005d08c2: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d08c6: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d08ca: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005d08d1: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x58] (READ)
// 005d08d8: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d08dc: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x54] (READ)
// 005d08e3: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d08e7: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x64] (READ)
// 005d08ee: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d08f2: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d08f6: MOV EAX,dword ptr [EDX + 0x8]
// 005d08f9: SHL EAX,0x3
// 005d08fc: MOV dword ptr [ESP + 0x170],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 005d0903: MOV ESI,EAX
// 005d0905: SHL EAX,0x3
// 005d0908: SUB EAX,ESI
// 005d090a: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d090d: MOV dword ptr [ESP + 0xd0],ESI
//   XREF to: Stack[-0x108] (WRITE)
// 005d0914: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d0918: MOV dword ptr [ESP + 0xd4],ESI
//   XREF to: Stack[-0x104] (WRITE)
// 005d091f: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 005d0923: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14]
// 005d0927: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005d092e: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x108] (READ)
// 005d0935: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d0939: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x104] (READ)
// 005d0940: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d0944: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x94] (READ)
// 005d094b: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x170] (WRITE)
// 005d094f: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d0953: MOV EAX,dword ptr [EDX + 0xc]
// 005d0956: SHL EAX,0x3
// 005d0959: MOV EDX,EAX
// 005d095b: SHL EAX,0x3
// 005d095e: SUB EAX,EDX
// 005d0960: ADD ECX,EAX
// 005d0962: MOV EAX,dword ptr [ECX]
// 005d0964: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005d096b: MOV EAX,dword ptr [ECX + 0x4]
// 005d096e: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d0975: MOV EAX,dword ptr [ECX + 0x10]
// 005d0978: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005d097f: MOV EAX,dword ptr [ECX + 0x14]
// 005d0982: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005d0989: MOV EAX,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x40] (READ)
// 005d0990: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d0994: MOV EAX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x3c] (READ)
// 005d099b: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d099f: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x78] (READ)
// 005d09a6: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005d09aa: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x74] (READ)
// 005d09b1: MOV dword ptr [ESP + 0x140],ESI
//   XREF to: Stack[-0x98] (WRITE)
// 005d09b8: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d09bc: JMP 0x005d084c
//   XREF to: 005d084c (UNCONDITIONAL_JUMP)
// 005d09c1: FLDZ
//   Label: LAB_005d09c1
// 005d09c3: FCOMP double ptr [EDX + 0x50]
// 005d09c6: FNSTSW AX
// 005d09c8: SAHF
// 005d09c9: JBE 0x005d0b33
//   XREF to: 005d0b33 (CONDITIONAL_JUMP)
// 005d09cf: MOV EAX,dword ptr [EDX + 0x4]
// 005d09d2: SHL EAX,0x3
// 005d09d5: MOV ESI,EAX
// 005d09d7: SHL EAX,0x3
// 005d09da: SUB EAX,ESI
// 005d09dc: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d09df: MOV dword ptr [ESP + 0x1b0],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005d09e6: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d09ea: MOV dword ptr [ESP + 0x1b4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005d09f1: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d09f5: MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d09f9: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005d0a00: MOV EAX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x28] (READ)
// 005d0a07: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d0a0b: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x24] (READ)
// 005d0a12: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d0a16: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0xb4] (READ)
// 005d0a1d: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x190] (WRITE)
// 005d0a21: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d0a25: MOV EAX,dword ptr [EDX + 0x8]
// 005d0a28: SHL EAX,0x3
// 005d0a2b: MOV dword ptr [ESP + 0x120],ESI
//   XREF to: Stack[-0xb8] (WRITE)
// 005d0a32: MOV ESI,EAX
// 005d0a34: SHL EAX,0x3
// 005d0a37: SUB EAX,ESI
// 005d0a39: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d0a3c: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x160] (WRITE)
// 005d0a40: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d0a44: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x15c] (WRITE)
// 005d0a48: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d0a4c: MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0a50: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005d0a57: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x160] (READ)
// 005d0a5b: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d0a5f: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x15c] (READ)
// 005d0a63: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d0a67: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x9c] (READ)
// 005d0a6e: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x170] (WRITE)
// 005d0a72: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d0a76: MOV EAX,dword ptr [EDX + 0xc]
// 005d0a79: SHL EAX,0x3
// 005d0a7c: MOV EDX,EAX
// 005d0a7e: SHL EAX,0x3
// 005d0a81: SUB EAX,EDX
// 005d0a83: ADD ECX,EAX
// 005d0a85: MOV EAX,dword ptr [ECX]
// 005d0a87: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005d0a8e: MOV EAX,dword ptr [ECX + 0x4]
// 005d0a91: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 005d0a98: MOV EAX,dword ptr [ECX + 0x8]
// 005d0a9b: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005d0aa2: MOV EAX,dword ptr [ECX + 0xc]
// 005d0aa5: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005d0aac: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x158] (READ)
// 005d0ab3: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d0ab7: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x154] (READ)
// 005d0abe: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d0ac2: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x80] (READ)
// 005d0ac9: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d0acd: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x7c] (READ)
// 005d0ad4: MOV dword ptr [ESP + 0x138],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 005d0adb: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d0adf: MOV EAX,dword ptr [EBX]
//   Label: LAB_005d0adf
// 005d0ae1: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005d0ae8: MOV EAX,dword ptr [EBX + 0x4]
// 005d0aeb: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005d0af2: MOV EAX,dword ptr [EBX + 0x8]
// 005d0af5: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005d0afc: MOV EAX,dword ptr [EBX + 0xc]
// 005d0aff: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005d0b06: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x88] (READ)
// 005d0b0d: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005d0b11: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x84] (READ)
// 005d0b18: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005d0b1c: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe0] (READ)
// 005d0b23: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005d0b27: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xdc] (READ)
// 005d0b2e: JMP 0x005d0575
//   XREF to: 005d0575 (UNCONDITIONAL_JUMP)
// 005d0b33: MOV EAX,dword ptr [EDX + 0x4]
//   Label: LAB_005d0b33
// 005d0b36: SHL EAX,0x3
// 005d0b39: MOV ESI,EAX
// 005d0b3b: SHL EAX,0x3
// 005d0b3e: SUB EAX,ESI
// 005d0b40: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d0b43: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0x138] (WRITE)
// 005d0b4a: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d0b4e: MOV dword ptr [ESP + 0xa4],ESI
//   XREF to: Stack[-0x134] (WRITE)
// 005d0b55: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d0b59: MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0b5d: MOV dword ptr [ESP + 0x17c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d0b64: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x138] (READ)
// 005d0b6b: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d0b6f: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x134] (READ)
// 005d0b76: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d0b7a: MOV EAX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x5c] (READ)
// 005d0b81: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d0b85: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d0b89: MOV EAX,dword ptr [EDX + 0x8]
// 005d0b8c: SHL EAX,0x3
// 005d0b8f: MOV dword ptr [ESP + 0x178],ESI
//   XREF to: Stack[-0x60] (WRITE)
// 005d0b96: MOV ESI,EAX
// 005d0b98: SHL EAX,0x3
// 005d0b9b: SUB EAX,ESI
// 005d0b9d: MOV ESI,dword ptr [ECX + EAX*0x1]
// 005d0ba0: MOV dword ptr [ESP + 0xc0],ESI
//   XREF to: Stack[-0x118] (WRITE)
// 005d0ba7: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4]
// 005d0bab: MOV dword ptr [ESP + 0xc4],ESI
//   XREF to: Stack[-0x114] (WRITE)
// 005d0bb2: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 005d0bb6: MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc]
// 005d0bba: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005d0bc1: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x118] (READ)
// 005d0bc8: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d0bcc: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x114] (READ)
// 005d0bd3: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d0bd7: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0xac] (READ)
// 005d0bde: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x170] (WRITE)
// 005d0be2: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d0be6: MOV EDX,dword ptr [EDX + 0xc]
// 005d0be9: SHL EDX,0x3
// 005d0bec: MOV EAX,EDX
// 005d0bee: SHL EDX,0x3
// 005d0bf1: SUB EDX,EAX
// 005d0bf3: MOV EAX,dword ptr [ECX + EDX*0x1]
// 005d0bf6: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d0bfd: MOV EAX,dword ptr [ECX + EDX*0x1 + 0x4]
// 005d0c01: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d0c08: MOV EAX,dword ptr [ECX + EDX*0x1 + 0x8]
// 005d0c0c: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005d0c13: MOV EAX,dword ptr [ECX + EDX*0x1 + 0xc]
// 005d0c17: MOV dword ptr [ESP + 0x1a4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005d0c1e: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x20] (READ)
// 005d0c25: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d0c29: MOV EAX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x1c] (READ)
// 005d0c30: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d0c34: MOV EAX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x38] (READ)
// 005d0c3b: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005d0c3f: MOV EAX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x34] (READ)
// 005d0c46: MOV dword ptr [ESP + 0x128],ESI
//   XREF to: Stack[-0xb0] (WRITE)
// 005d0c4d: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d0c51: JMP 0x005d0adf
//   XREF to: 005d0adf (UNCONDITIONAL_JUMP)
// 005d0c56: LEA EAX,[ESP + 0x50]
//   Label: LAB_005d0c56
//   XREF to: Stack[-0x188] (DATA)
// 005d0c5a: PUSH EAX
// 005d0c5b: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x1a8] (DATA)
// 005d0c5f: PUSH EAX
// 005d0c60: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x178] (DATA)
// 005d0c64: PUSH EAX
// 005d0c65: CALL shape_superopt.cpp_FUN_005d6640
//   XREF to: 005d6640 (UNCONDITIONAL_CALL)
// 005d0c6a: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d0c71: MOV dword ptr [ESP + 0x1d0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005d0c78: FLD double ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x18] (READ)
// 005d0c7f: FLDZ
// 005d0c81: ADD ESP,0xc
// 005d0c84: FCOMPP
// 005d0c86: FNSTSW AX
// 005d0c88: SAHF
// 005d0c89: JC 0x005d05b2
//   XREF to: 005d05b2 (CONDITIONAL_JUMP)
// 005d0c8f: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x188] (DATA)
// 005d0c93: PUSH EAX
// 005d0c94: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x198] (DATA)
// 005d0c98: PUSH EAX
// 005d0c99: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1a8] (DATA)
// 005d0c9d: PUSH EAX
// 005d0c9e: CALL shape_superopt.cpp_FUN_005d6640
//   XREF to: 005d6640 (UNCONDITIONAL_CALL)
// 005d0ca3: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d0caa: MOV dword ptr [ESP + 0x1d0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005d0cb1: FLD double ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x18] (READ)
// 005d0cb8: FLDZ
// 005d0cba: ADD ESP,0xc
// 005d0cbd: FCOMPP
// 005d0cbf: FNSTSW AX
// 005d0cc1: SAHF
// 005d0cc2: JC 0x005d05b2
//   XREF to: 005d05b2 (CONDITIONAL_JUMP)
// 005d0cc8: MOV EAX,0x1
// 005d0ccd: MOV ESP,EBP
// 005d0ccf: POP EBP
// 005d0cd0: POP ESI
// 005d0cd1: POP EBX
// 005d0cd2: RET
