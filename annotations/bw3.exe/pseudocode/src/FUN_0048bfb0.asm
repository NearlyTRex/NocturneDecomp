; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048bfb0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0048b780 at 0048b785
;
; Called Functions:
;   FUN_0048bfd0
;   FUN_00494880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bfb0
        ;   Label: FUN_0048bfb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048bfb1
    PUSH EBX                            ; 0048bfb5
    CALL FUN_0048bfd0                   ; 0048bfb6
        ;   XREF to: 0048bfd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048bfd0()
    ADD ESP,0x4                         ; 0048bfbb
    PUSH EBX                            ; 0048bfbe
    CALL FUN_00494880                   ; 0048bfbf
        ;   XREF to: 00494880 (UNCONDITIONAL_CALL)  ; undefined FUN_00494880()
    ADD ESP,0x4                         ; 0048bfc4
    MOV EAX,EBX                         ; 0048bfc7
    POP EBX                             ; 0048bfc9
    RET                                 ; 0048bfca

