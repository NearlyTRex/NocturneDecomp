; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   initial_bits
;
; XREF[2]:
;   core_dcamera.cpp_staticInit_FUN_0044bb10 at 0044bb33
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e15e0
;
; Referenced Globals:
;   CCodec_vtable g_CLZWDecompressVTable
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_0043e9a0
;   support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f490
        ;   Label: support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
    PUSH EAX                            ; 0043f494
    CALL support_codec.cpp_CCodec_ctor_FUN_0043e9a0 ; 0043f495 | CCodec * support_codec.cpp_CCodec_ctor_FUN_0043e9a0(CCodec * this_ptr)
        ;   XREF to: 0043e9a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043f49a
    ADD EAX,0x4                         ; 0043f49d
    PUSH EAX                            ; 0043f4a0
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0 ; 0043f4a1 | CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary * this_ptr)
        ;   XREF to: 0043edd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043f4a6
    SUB EAX,0x4                         ; 0043f4a9
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043f4ac
    MOV dword ptr [EAX],0x65bc24        ; 0043f4b0 | CCodec_vtable g_CLZWDecompressVTable
    MOV dword ptr [EAX + 0x20],EDX      ; 0043f4b6
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043f4b9
    MOV dword ptr [EAX + 0x24],EDX      ; 0043f4bd
    RET                                 ; 0043f4c0

