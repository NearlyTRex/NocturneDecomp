; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectCard_FUN_00532d00(int card_index)
;
; Parameters:
; int              Stack[0x4]:4   card_index
;
; XREF[3]:
;   core_game.cpp_CGame_setGameRes_FUN_0049d870 at 0049d929
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0c52
;   engine_special.cpp_loadExternalRenderer_FUN_00531780 at 0053228e
;
; Referenced Globals:
;   APIDLL_selectCard* g_APIDLL_selectCard
;   int g_LoadedExternalDLLRenderer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9e04],0x0      ; 00532d00 | g_LoadedExternalDLLRenderer
        ;   Label: engine_special.cpp_selectCard_FUN_00532d00
    JNZ 0x00532d0c                      ; 00532d07
        ;   XREF to: 00532d0c (CONDITIONAL_JUMP)  ; LAB_00532d0c
    XOR EAX,EAX                         ; 00532d09
    RET                                 ; 00532d0b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00532d0c
        ;   Label: LAB_00532d0c
    PUSH ECX                            ; 00532d10
    CALL dword ptr [0x02dc9df4]         ; 00532d11 | g_APIDLL_selectCard
    ADD ESP,0x4                         ; 00532d17
    RET                                 ; 00532d1a

