; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004b90d0 at 004b9188
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c546
;   shape_edittool.cpp_FUN_00482350 at 00482474
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005b8e40
;   wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_0058ead0 ; 004dfea0
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_0058ead0()
        ;   Label: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0
    AND EAX,0xff                        ; 004dfea5
    PUSH EAX                            ; 004dfeaa
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004dfeab
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004dfeb0
    RET                                 ; 004dfeb3

