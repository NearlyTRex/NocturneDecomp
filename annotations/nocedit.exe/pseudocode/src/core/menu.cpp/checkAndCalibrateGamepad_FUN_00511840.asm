; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_menu.cpp_checkAndCalibrateGamepad_FUN_00511840(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.x_center
;   undefined4 g_CGameInstance.game_control
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067b654]                ; 00511840 | g_CGamePtr | g_CGameInstance
        ;   Label: core_menu.cpp_checkAndCalibrateGamepad_FUN_00511840
    CMP dword ptr [EAX + 0xbc],0x2      ; 00511845 | g_CGameInstance.game_control
    JNZ 0x0051185b                      ; 0051184c
        ;   XREF to: 0051185b (CONDITIONAL_JUMP)  ; LAB_0051185b
    CMP dword ptr [EAX + 0xa4],0x0      ; 0051184e | g_CGameInstance.x_center
    JZ 0x005104d0                       ; 00511855
        ;   XREF to: 005104d0 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0051185b
        ;   Label: LAB_0051185b
    RET                                 ; 00511860

