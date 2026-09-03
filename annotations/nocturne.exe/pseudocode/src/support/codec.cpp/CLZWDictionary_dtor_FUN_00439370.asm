; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(CLZWDictionary *this_ptr,uint flags)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00446810 at 00446db6
;   core_game.cpp_CGame_FUN_004a3b90 at 004a3f8b
;   core_game.cpp_CGame_FUN_004a4170 at 004a4581
;   support_codec.cpp_CLZWCompress_dtor_FUN_00439c70 at 00439c82
;   support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10 at 00439c22
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_free_FUN_00439390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439370
        ;   Label: support_codec.cpp_CLZWDictionary_dtor_FUN_00439370
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439371
    PUSH EBX                            ; 00439375
    CALL support_codec.cpp_CLZWDictionary_free_FUN_00439390 ; 00439376
        ;   XREF to: 00439390 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_free_FUN_00439390(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 0043937b
    MOV EAX,EBX                         ; 0043937e
    POP EBX                             ; 00439380
    RET                                 ; 00439381

