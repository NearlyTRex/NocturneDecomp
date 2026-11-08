; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cc8a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005cc8b0 at 005cc8f9
;
; Called Functions:
;   FUN_005c08d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cc8a0
        ;   Label: FUN_005cc8a0
    PUSH EDX                            ; 005cc8a4
    CALL FUN_005c08d0                   ; 005cc8a5
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 005cc8aa
    RET                                 ; 005cc8ad

