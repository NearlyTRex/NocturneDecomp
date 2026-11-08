; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ec70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;
; Called Functions:
;   FUN_0053ee00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ec70
        ;   Label: FUN_0040ec70
    CMP dword ptr [EAX + 0x164],0x0     ; 0040ec74
    JNZ 0x0040ec7e                      ; 0040ec7b
        ;   XREF to: 0040ec7e (CONDITIONAL_JUMP)  ; LAB_0040ec7e
    RET                                 ; 0040ec7d
    PUSH EAX                            ; 0040ec7e
        ;   Label: LAB_0040ec7e
    MOV ECX,dword ptr [0x00603b28]      ; 0040ec7f | DAT_00603b28
    PUSH ECX                            ; 0040ec85
    CALL FUN_0053ee00                   ; 0040ec86
        ;   XREF to: 0053ee00 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ee00()
    ADD ESP,0x8                         ; 0040ec8b
    RET                                 ; 0040ec8e

