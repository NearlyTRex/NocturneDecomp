; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d48d0(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field612_0x264
;   undefined4 g_CGameInstance.field2956_0xb8c
;
; *****************************************************************************

section .text

    MOV EAX,[0x005fe9dc]                ; 004d48d0 | g_CGamePtr
        ;   Label: core_hero.cpp_FUN_004d48d0
    CMP dword ptr [EAX + 0x264],0x0     ; 004d48d5 | g_CGameInstance.field612_0x264
    JNZ 0x004d48ed                      ; 004d48dc
        ;   XREF to: 004d48ed (CONDITIONAL_JUMP)  ; LAB_004d48ed
    PUSH 0x1                            ; 004d48de
    MOV EDX,dword ptr [EAX + 0xb8c]     ; 004d48e0 | g_CGameInstance.field2956_0xb8c
    PUSH EAX                            ; 004d48e6 | g_CGameInstance
    CALL dword ptr [EDX]                ; 004d48e7
    ADD ESP,0x8                         ; 004d48e9
    RET                                 ; 004d48ec
    PUSH 0x0                            ; 004d48ed
        ;   Label: LAB_004d48ed
    MOV EDX,dword ptr [EAX + 0xb8c]     ; 004d48ef | g_CGameInstance.field2956_0xb8c
    PUSH EAX                            ; 004d48f5 | g_CGameInstance
    CALL dword ptr [EDX]                ; 004d48f6
    ADD ESP,0x8                         ; 004d48f8
    RET                                 ; 004d48fb

