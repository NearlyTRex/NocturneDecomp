; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bfb18(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[17]:
;   FUN_00445430 at 00445468
;   FUN_00480d90 at 00480dbd
;   FUN_00480fa0 at 00480fca
;   FUN_004942e0 at 0049430a
;   FUN_00494340 at 0049436a
;   FUN_004943a0 at 004943ca
;   FUN_00494400 at 0049445d
;   FUN_00494d20 at 00494d4a
;   FUN_004a1210 at 004a1227
;   FUN_004c20e0 at 004c20ff
;   ... and 7 more
;
; Called Functions:
;   FUN_005c3320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb18
        ;   Label: FUN_005bfb18
    PUSH 0x5bfb00                       ; 005bfb19 | LAB_005bfb00
    MOV EDX,dword ptr [ESP + 0x14]      ; 005bfb1e
    PUSH EDX                            ; 005bfb22
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bfb23
    PUSH EBX                            ; 005bfb27
    MOV ECX,dword ptr [ESP + 0x14]      ; 005bfb28
    PUSH ECX                            ; 005bfb2c
    CALL FUN_005c3320                   ; 005bfb2d
        ;   XREF to: 005c3320 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3320()
    ADD ESP,0x10                        ; 005bfb32
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bfb35
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005bfb39
    POP EBX                             ; 005bfb3d
    RET                                 ; 005bfb3e

