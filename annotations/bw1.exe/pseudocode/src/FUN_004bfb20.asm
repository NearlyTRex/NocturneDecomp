; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfb20(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfb20
        ;   Label: FUN_004bfb20
    PUSH ESI                            ; 004bfb21
    MOV ESI,dword ptr [ESP + 0xc]       ; 004bfb22
    PUSH ESI                            ; 004bfb26
    CALL FUN_00408850                   ; 004bfb27
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    XOR EBX,EBX                         ; 004bfb2c
    MOV EDX,dword ptr [ESI + 0x164]     ; 004bfb2e
    ADD ESP,0x4                         ; 004bfb34
    TEST EDX,EDX                        ; 004bfb37
    JLE 0x004bfb50                      ; 004bfb39
        ;   XREF to: 004bfb50 (CONDITIONAL_JUMP)  ; LAB_004bfb50
    PUSH EBX                            ; 004bfb3b
        ;   Label: LAB_004bfb3b
    PUSH ESI                            ; 004bfb3c
    CALL FUN_004c0530                   ; 004bfb3d
        ;   XREF to: 004c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0530()
    INC EBX                             ; 004bfb42
    MOV ECX,dword ptr [ESI + 0x164]     ; 004bfb43
    ADD ESP,0x8                         ; 004bfb49
    CMP EBX,ECX                         ; 004bfb4c
    JL 0x004bfb3b                       ; 004bfb4e
        ;   XREF to: 004bfb3b (CONDITIONAL_JUMP)  ; LAB_004bfb3b
    MOV dword ptr [ESI + 0x2a1c],0x1    ; 004bfb50
        ;   Label: LAB_004bfb50
    POP ESI                             ; 004bfb5a
    POP EBX                             ; 004bfb5b
    RET                                 ; 004bfb5c

