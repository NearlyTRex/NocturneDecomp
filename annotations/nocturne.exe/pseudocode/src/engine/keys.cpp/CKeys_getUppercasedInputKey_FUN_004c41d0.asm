; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(void)
;
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0613
;   shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0 at 00475109
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004c41d0
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
        ;   Label: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0
    AND EAX,0xff                        ; 004c41d5
    PUSH EAX                            ; 004c41da
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004c41db
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 004c41e0
    RET                                 ; 004c41e3

