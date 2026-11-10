; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90(CLZWDictionary *this_ptr,uint flags)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453bc2
;   core_game.cpp_FUN_004d6420 at 004d67f8
;   core_game.cpp_FUN_004d6990 at 004d6d4b
;   support_codec.cpp_CLZWCompress_dtor_FUN_00444270 at 00444282
;   support_codec.cpp_CLZWDecompress_dtor_FUN_00444210 at 00444222
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_free_FUN_00442fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442f90
        ;   Label: support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442f91
    PUSH EBX                            ; 00442f95
    CALL support_codec.cpp_CLZWDictionary_free_FUN_00442fb0 ; 00442f96
        ;   XREF to: 00442fb0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_free_FUN_00442fb0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00442f9b
    MOV EAX,EBX                         ; 00442f9e
    POP EBX                             ; 00442fa0
    RET                                 ; 00442fa1

