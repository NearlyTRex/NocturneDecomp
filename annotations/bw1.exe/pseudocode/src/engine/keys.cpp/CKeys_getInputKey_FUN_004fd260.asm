; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004fd260(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0 at 00495bd6
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 004939d6
;
; Called Functions:
;   wincore_winrun.cpp_getNextKeypress_FUN_005b2510
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 004fd260
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
        ;   Label: engine_keys.cpp_CKeys_getInputKey_FUN_004fd260
    AND EAX,0xff                        ; 004fd265
    RET                                 ; 004fd26a

