; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_00441310(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   initial_bits
;
; XREF[2]:
;   core_dcamera.cpp_staticInit_FUN_004486c0 at 004486e3
;   core_game.cpp_FUN_004bdfb0 at 004be2d7
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_00441e70_005dd494 = 00441e70
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00440800
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00440bd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00441310
        ;   Label: support_codec.cpp_CLZWDecompress_ctor_FUN_00441310
    PUSH EAX                            ; 00441314
    CALL support_codec.cpp_CCodec_ctor_FUN_00440800 ; 00441315
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00440800(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0044131a
    ADD EAX,0x4                         ; 0044131d
    PUSH EAX                            ; 00441320
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00440bd0 ; 00441321
        ;   XREF to: 00440bd0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00440bd0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00441326
    SUB EAX,0x4                         ; 00441329
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044132c
    MOV dword ptr [EAX],0x5dd494        ; 00441330 | PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_00441e70_005dd494
    MOV dword ptr [EAX + 0x20],EDX      ; 00441336
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441339
    MOV dword ptr [EAX + 0x24],EDX      ; 0044133d
    RET                                 ; 00441340

