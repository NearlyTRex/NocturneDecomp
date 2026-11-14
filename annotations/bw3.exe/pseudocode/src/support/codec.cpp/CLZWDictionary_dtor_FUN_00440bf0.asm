; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0(CLZWDictionary *this_ptr,uint flags)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044fd02
;   core_game.cpp_FUN_004bda10 at 004bde0f
;   core_game.cpp_FUN_004bdfb0 at 004be391
;   support_codec.cpp_CLZWCompress_dtor_FUN_00441ed0 at 00441ee2
;   support_codec.cpp_CLZWDecompress_dtor_FUN_00441e70 at 00441e82
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_free_FUN_00440c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440bf0
        ;   Label: support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00440bf1
    PUSH EBX                            ; 00440bf5
    CALL support_codec.cpp_CLZWDictionary_free_FUN_00440c10 ; 00440bf6
        ;   XREF to: 00440c10 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_free_FUN_00440c10(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00440bfb
    MOV EAX,EBX                         ; 00440bfe
    POP EBX                             ; 00440c00
    RET                                 ; 00440c01

