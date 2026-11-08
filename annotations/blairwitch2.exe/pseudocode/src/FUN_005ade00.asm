; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ade00(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_004b2840 at 004b2855
;   FUN_004f0400 at 004f0459
;   FUN_00571a30 at 00571a45
;   FUN_005837e0 at 00583809
;   FUN_005b14a0 at 005b1530
;   FUN_005b1550 at 005b156e
;   FUN_005b1640 at 005b1690
;
; Called Functions:
;   FUN_0044dcb0
;   FUN_005ade80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ade00
        ;   Label: FUN_005ade00
    PUSH EDX                            ; 005ade04
    CALL FUN_005ade80                   ; 005ade05
        ;   XREF to: 005ade80 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade80()
    ADD ESP,0x4                         ; 005ade0a
    PUSH 0x1                            ; 005ade0d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ade0f
    PUSH ECX                            ; 005ade13
    CALL FUN_0044dcb0                   ; 005ade14
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dcb0()
    ADD ESP,0x8                         ; 005ade19
    RET                                 ; 005ade1c

