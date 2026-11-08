; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2ce0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00498e40 at 00498e5f
;
; Called Functions:
;   FUN_005c2d94
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c2ce0
        ;   Label: FUN_005c2ce0
    PUSH EDX                            ; 005c2ce4
    CALL FUN_005c2d94                   ; 005c2ce5
        ;   XREF to: 005c2d94 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2d94()
    ADD ESP,0x4                         ; 005c2cea
    RET                                 ; 005c2ced

