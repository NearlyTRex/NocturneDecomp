; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d48d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d21570
;   undefined4 DAT_01d21e98
;
; *****************************************************************************

section .text

    MOV EAX,[0x005fe9dc]                ; 004d48d0 | DAT_005fe9dc
        ;   Label: FUN_004d48d0
    CMP dword ptr [EAX + 0x264],0x0     ; 004d48d5 | DAT_01d21570
    JNZ 0x004d48ed                      ; 004d48dc
        ;   XREF to: 004d48ed (CONDITIONAL_JUMP)  ; LAB_004d48ed
    PUSH 0x1                            ; 004d48de
    MOV EDX,dword ptr [EAX + 0xb8c]     ; 004d48e0 | DAT_01d21e98
    PUSH EAX                            ; 004d48e6 | DAT_01d2130c
    CALL dword ptr [EDX]                ; 004d48e7
    ADD ESP,0x8                         ; 004d48e9
    RET                                 ; 004d48ec
    PUSH 0x0                            ; 004d48ed
        ;   Label: LAB_004d48ed
    MOV EDX,dword ptr [EAX + 0xb8c]     ; 004d48ef | DAT_01d21e98
    PUSH EAX                            ; 004d48f5 | DAT_01d2130c
    CALL dword ptr [EDX]                ; 004d48f6
    ADD ESP,0x8                         ; 004d48f8
    RET                                 ; 004d48fb

