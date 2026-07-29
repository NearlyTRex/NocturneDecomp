; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectCard_FUN_005b7d90(int card_index)
;
; Parameters:
; int              Stack[0x4]:4   card_index
;
; XREF[3]:
;   core_game.cpp_CGame_setGameRes_FUN_004dade0 at 004dae99
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 005117c8
;   engine_special.cpp_loadExternalRenderer_FUN_005b6750 at 005b71c0
;
; Referenced Globals:
;   APIDLL_selectCard* g_APIDLL_selectCard
;   int g_LoadedExternalDLLRenderer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b978],0x0      ; 005b7d90 | g_LoadedExternalDLLRenderer
        ;   Label: engine_special.cpp_selectCard_FUN_005b7d90
    JNZ 0x005b7d9c                      ; 005b7d97
        ;   XREF to: 005b7d9c (CONDITIONAL_JUMP)  ; LAB_005b7d9c
    XOR EAX,EAX                         ; 005b7d99
    RET                                 ; 005b7d9b
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b7d9c
        ;   Label: LAB_005b7d9c
    PUSH ECX                            ; 005b7da0
    CALL dword ptr [0x03f6b918]         ; 005b7da1 | g_APIDLL_selectCard
    ADD ESP,0x4                         ; 005b7da7
    RET                                 ; 005b7daa

