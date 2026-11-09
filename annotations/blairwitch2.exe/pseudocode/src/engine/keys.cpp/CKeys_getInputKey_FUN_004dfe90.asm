; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004dfe90(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0047d270 at 0047d576
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b49a
;
; Called Functions:
;   wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_0058ead0 ; 004dfe90
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_0058ead0()
        ;   Label: engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90
    AND EAX,0xff                        ; 004dfe95
    RET                                 ; 004dfe9a

