; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_menu_cpp_FUN_004e8f2e(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004e8f2e
        ;   Label: core_menu.cpp_FUN_004e8f2e
    MOV EAX,[0x005fe9dc]                ; 004e8f30 | g_CGamePtr
    CMP dword ptr [EAX + 0xd4],0x2      ; 004e8f35
    JNZ 0x004e8f4b                      ; 004e8f3c
        ;   XREF to: 004e8f4b (CONDITIONAL_JUMP)  ; LAB_004e8f4b
    CMP dword ptr [EAX + 0xbc],0x0      ; 004e8f3e
    JZ 0x004e7dc0                       ; 004e8f45
        ;   XREF to: 004e7dc0 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004e8f4b
        ;   Label: LAB_004e8f4b
    RET                                 ; 004e8f50

