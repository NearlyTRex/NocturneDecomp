; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_menu_cpp_FUN_0050b410(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 0050b410 | g_CGamePtr
        ;   Label: core_menu.cpp_FUN_0050b410
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050b415
    JNZ 0x0050b42b                      ; 0050b41c
        ;   XREF to: 0050b42b (CONDITIONAL_JUMP)  ; LAB_0050b42b
    CMP dword ptr [EAX + 0xb8],0x0      ; 0050b41e
    JZ 0x0050a2b0                       ; 0050b425
        ;   XREF to: 0050a2b0 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0050b42b
        ;   Label: LAB_0050b42b
    RET                                 ; 0050b430

