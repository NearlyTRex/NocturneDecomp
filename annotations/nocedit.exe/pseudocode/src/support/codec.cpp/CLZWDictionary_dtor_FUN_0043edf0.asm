; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452f40
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e16bb
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e10d5
;   support_codec.cpp_CLZWCompress_dtor_FUN_0043f710 at 0043f722
;   support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0 at 0043f6c2
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043edf0
        ;   Label: support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043edf1
    PUSH EBX                            ; 0043edf5
    CALL support_codec.cpp_CLZWDictionary_free_FUN_0043ee10 ; 0043edf6
        ;   XREF to: 0043ee10 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 0043edfb
    MOV EAX,EBX                         ; 0043edfe
    POP EBX                             ; 0043ee00
    RET                                 ; 0043ee01

