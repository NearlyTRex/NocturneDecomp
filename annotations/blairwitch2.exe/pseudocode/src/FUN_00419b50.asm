; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00419b50(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_004254b0
;   FUN_0046b960
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 00419b50 | DAT_0060b280
        ;   Label: FUN_00419b50
    PUSH EDX                            ; 00419b56 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00419b57
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00419b5c
    TEST EAX,EAX                        ; 00419b5f
    JNZ 0x00419b64                      ; 00419b61
        ;   XREF to: 00419b64 (CONDITIONAL_JUMP)  ; LAB_00419b64
    RET                                 ; 00419b63
    MOV ECX,dword ptr [ESP + 0x4]       ; 00419b64
        ;   Label: LAB_00419b64
    PUSH ECX                            ; 00419b68
    CALL FUN_004254b0                   ; 00419b69
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254b0()
    ADD ESP,0x4                         ; 00419b6e
    RET                                 ; 00419b71

