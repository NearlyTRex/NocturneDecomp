; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004a4170 at 004a44b1
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10_0059b444 = 00439c10
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00438f20
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00439350
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004399f0
        ;   Label: support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0
    PUSH EAX                            ; 004399f4
    CALL support_codec.cpp_CCodec_ctor_FUN_00438f20 ; 004399f5
        ;   XREF to: 00438f20 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CCodec_ctor_FUN_00438f20()
    ADD ESP,0x4                         ; 004399fa
    ADD EAX,0x4                         ; 004399fd
    PUSH EAX                            ; 00439a00
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00439350 ; 00439a01
        ;   XREF to: 00439350 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_ctor_FUN_00439350()
    ADD ESP,0x4                         ; 00439a06
    SUB EAX,0x4                         ; 00439a09
    MOV EDX,dword ptr [ESP + 0x8]       ; 00439a0c
    MOV dword ptr [EAX],0x59b444        ; 00439a10 | PTR_support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10_0059b444
    MOV dword ptr [EAX + 0x20],EDX      ; 00439a16
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439a19
    MOV dword ptr [EAX + 0x24],EDX      ; 00439a1d
    RET                                 ; 00439a20

