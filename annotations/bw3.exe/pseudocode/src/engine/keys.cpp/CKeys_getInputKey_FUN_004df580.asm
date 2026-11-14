; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004df580(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e776
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c576
;
; Called Functions:
;   wincore_winrun.cpp_getNextKeypress_FUN_00580790
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_00580790 ; 004df580
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00580790()
        ;   Label: engine_keys.cpp_CKeys_getInputKey_FUN_004df580
    AND EAX,0xff                        ; 004df585
    RET                                 ; 004df58a

