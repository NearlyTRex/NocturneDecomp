; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004df590(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bb1c3
;   shape_edittool.cpp_CPickList_handleInput_FUN_00483550 at 00483674
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d69e
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;   wincore_winrun.cpp_getNextKeypress_FUN_00580790
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_00580790 ; 004df590
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00580790()
        ;   Label: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590
    AND EAX,0xff                        ; 004df595
    PUSH EAX                            ; 004df59a
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004df59b
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004df5a0
    RET                                 ; 004df5a3

