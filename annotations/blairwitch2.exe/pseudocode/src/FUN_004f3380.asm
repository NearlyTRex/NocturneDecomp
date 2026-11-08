; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3380(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004a97a0 at 004a97f2
;   FUN_004f90d0 at 004f92ec
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;
; Called Functions:
;   FUN_00574e00
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d0d2b4],0x0      ; 004f3380 | DAT_01d0d2b4
        ;   Label: FUN_004f3380
    JZ 0x004f338a                       ; 004f3387
        ;   XREF to: 004f338a (CONDITIONAL_JUMP)  ; LAB_004f338a
    RET                                 ; 004f3389
    MOV ECX,dword ptr [ESP + 0x4]       ; 004f338a
        ;   Label: LAB_004f338a
    PUSH ECX                            ; 004f338e
    CALL FUN_00574e00                   ; 004f338f
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    ADD ESP,0x4                         ; 004f3394
    RET                                 ; 004f3397

