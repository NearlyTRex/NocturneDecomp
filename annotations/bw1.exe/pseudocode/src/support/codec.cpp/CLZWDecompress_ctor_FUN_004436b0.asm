; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004436b0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   initial_bits
;
; XREF[2]:
;   core_dcamera.cpp_staticInit_FUN_0044c580 at 0044c5a3
;   core_game.cpp_FUN_004d6990 at 004d6c91
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_00444210_005fd9b4 = 00444210
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00442ba0
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004436b0
        ;   Label: support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0
    PUSH EAX                            ; 004436b4
    CALL support_codec.cpp_CCodec_ctor_FUN_00442ba0 ; 004436b5
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00442ba0(CCodec * this_ptr)
    ADD ESP,0x4                         ; 004436ba
    ADD EAX,0x4                         ; 004436bd
    PUSH EAX                            ; 004436c0
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70 ; 004436c1
        ;   XREF to: 00442f70 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 004436c6
    SUB EAX,0x4                         ; 004436c9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004436cc
    MOV dword ptr [EAX],0x5fd9b4        ; 004436d0 | PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_00444210_005fd9b4
    MOV dword ptr [EAX + 0x20],EDX      ; 004436d6
    MOV EDX,dword ptr [ESP + 0xc]       ; 004436d9
    MOV dword ptr [EAX + 0x24],EDX      ; 004436dd
    RET                                 ; 004436e0

