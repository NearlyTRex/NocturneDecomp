; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   initial_bits
;
; XREF[2]:
;   core_dcamera.cpp_staticInit_FUN_0043f9c0 at 0043f9e3
;   core_game.cpp_FUN_004a4170 at 004a44b1
;
; Referenced Globals:
;   CCodec_vtable g_CLZWDecompressVTable
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
        ;   XREF to: 00438f20 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00438f20(CCodec * this_ptr)
    ADD ESP,0x4                         ; 004399fa
    ADD EAX,0x4                         ; 004399fd
    PUSH EAX                            ; 00439a00
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00439350 ; 00439a01
        ;   XREF to: 00439350 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00439350(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00439a06
    SUB EAX,0x4                         ; 00439a09
    MOV EDX,dword ptr [ESP + 0x8]       ; 00439a0c
    MOV dword ptr [EAX],0x59b444        ; 00439a10 | g_CLZWDecompressVTable
    MOV dword ptr [EAX + 0x20],EDX      ; 00439a16
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439a19
    MOV dword ptr [EAX + 0x24],EDX      ; 00439a1d
    RET                                 ; 00439a20

