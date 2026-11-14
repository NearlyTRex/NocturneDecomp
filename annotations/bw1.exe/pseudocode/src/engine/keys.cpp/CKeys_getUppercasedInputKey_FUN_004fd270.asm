; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004fd270(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d2873
;   shape_edittool.cpp_CPickList_handleInput_FUN_0049a9b0 at 0049aad4
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 at 00494afe
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005c12b0
;   wincore_winrun.cpp_getNextKeypress_FUN_005b2510
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 004fd270
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
        ;   Label: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270
    AND EAX,0xff                        ; 004fd275
    PUSH EAX                            ; 004fd27a
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004fd27b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004fd280
    RET                                 ; 004fd283

