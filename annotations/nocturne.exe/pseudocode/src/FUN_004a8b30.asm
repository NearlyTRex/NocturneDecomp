; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8b30(int param_1)
;
;
; Referenced Globals:
;   string s_modelName_00584ab3
;
; Called Functions:
;   FUN_0040ca00
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a8b30
        ;   Label: FUN_004a8b30
    PUSH EDX                            ; 004a8b34
    CALL FUN_0040d2d0                   ; 004a8b35
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 004a8b3a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8b3d
    PUSH 0x584ab3                       ; 004a8b41 | = "modelName"
    ADD EAX,0x150                       ; 004a8b46
    PUSH EAX                            ; 004a8b4b
    CALL FUN_0040ca00                   ; 004a8b4c
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca00()
    ADD ESP,0x8                         ; 004a8b51
    RET                                 ; 004a8b54

