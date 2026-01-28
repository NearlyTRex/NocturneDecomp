; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress *this_ptr)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452b56
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e1054
;
; Referenced Globals:
;   CCodec_vtable g_CLZWCompressVTable
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_0043e9a0
;   support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f2d0
        ;   Label: support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
    PUSH EAX                            ; 0043f2d4
    CALL support_codec.cpp_CCodec_ctor_FUN_0043e9a0 ; 0043f2d5
        ;   XREF to: 0043e9a0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_0043e9a0(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0043f2da
    ADD EAX,0x4                         ; 0043f2dd
    PUSH EAX                            ; 0043f2e0
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0 ; 0043f2e1
        ;   XREF to: 0043edd0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 0043f2e6
    SUB EAX,0x4                         ; 0043f2e9
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043f2ec
    MOV dword ptr [EAX + 0x20],EDX      ; 0043f2f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043f2f3
    MOV dword ptr [EAX + 0x24],EDX      ; 0043f2f7
    MOV EDX,0xffffffff                  ; 0043f2fa
    MOV CL,byte ptr [EAX + 0x24]        ; 0043f2ff
    MOV dword ptr [EAX],0x65bbf4        ; 0043f302 | g_CLZWCompressVTable
    SHL EDX,CL                          ; 0043f308
    MOV dword ptr [EAX + 0x28],EDX      ; 0043f30a
    NOT EDX                             ; 0043f30d
    MOV dword ptr [EAX + 0x28],EDX      ; 0043f30f
    RET                                 ; 0043f312

