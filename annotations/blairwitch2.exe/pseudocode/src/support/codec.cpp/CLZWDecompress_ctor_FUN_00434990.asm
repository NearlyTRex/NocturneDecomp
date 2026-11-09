; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_00434990(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   initial_bits
;
; XREF[2]:
;   core_dcamera.cpp_staticInit_FUN_0043aee0 at 0043af03
;   core_game.cpp_FUN_004bbf70 at 004bc274
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_004354f0_005f4284 = 004354f0
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00433e80
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00434250
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434990
        ;   Label: support_codec.cpp_CLZWDecompress_ctor_FUN_00434990
    PUSH EAX                            ; 00434994
    CALL support_codec.cpp_CCodec_ctor_FUN_00433e80 ; 00434995
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00433e80(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0043499a
    ADD EAX,0x4                         ; 0043499d
    PUSH EAX                            ; 004349a0
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00434250 ; 004349a1
        ;   XREF to: 00434250 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 004349a6
    SUB EAX,0x4                         ; 004349a9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004349ac
    MOV dword ptr [EAX],0x5f4284        ; 004349b0 | PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_004354f0_005f4284
    MOV dword ptr [EAX + 0x20],EDX      ; 004349b6
    MOV EDX,dword ptr [ESP + 0xc]       ; 004349b9
    MOV dword ptr [EAX + 0x24],EDX      ; 004349bd
    RET                                 ; 004349c0

