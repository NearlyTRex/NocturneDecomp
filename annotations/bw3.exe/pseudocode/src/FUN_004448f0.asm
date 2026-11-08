; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004448f0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040f3d0 at 0040f3e5
;   FUN_00512cf0 at 00512d05
;
; Called Functions:
;   FUN_00444aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004448f0
        ;   Label: FUN_004448f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004448f1
    PUSH EBX                            ; 004448f5
    CALL FUN_00444aa0                   ; 004448f6
        ;   XREF to: 00444aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00444aa0()
    ADD ESP,0x4                         ; 004448fb
    MOV EAX,EBX                         ; 004448fe
    POP EBX                             ; 00444900
    RET                                 ; 00444901

