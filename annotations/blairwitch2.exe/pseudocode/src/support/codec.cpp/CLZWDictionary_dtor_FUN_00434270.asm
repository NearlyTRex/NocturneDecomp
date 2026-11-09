; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_dtor_FUN_00434270(CLZWDictionary *this_ptr,uint flags)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442502
;   core_game.cpp_FUN_004bb9b0 at 004bbd86
;   core_game.cpp_FUN_004bbf70 at 004bc32e
;   support_codec.cpp_CLZWCompress_dtor_FUN_00435550 at 00435562
;   support_codec.cpp_CLZWDecompress_dtor_FUN_004354f0 at 00435502
;
; Called Functions:
;   support_codec.cpp_FUN_00434290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434270
        ;   Label: support_codec.cpp_CLZWDictionary_dtor_FUN_00434270
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434271
    PUSH EBX                            ; 00434275
    CALL support_codec.cpp_FUN_00434290 ; 00434276
        ;   XREF to: 00434290 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_FUN_00434290(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 0043427b
    MOV EAX,EBX                         ; 0043427e
    POP EBX                             ; 00434280
    RET                                 ; 00434281

