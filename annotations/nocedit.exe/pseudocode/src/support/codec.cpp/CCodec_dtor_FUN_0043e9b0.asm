; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec *this_ptr,uint flags)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452f52
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e16cd
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e10e7
;   support_codec.cpp_CLZWCompress_dtor_FUN_0043f710 at 0043f730
;   support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0 at 0043f6d0
;
; Referenced Globals:
;   CCodec_vtable g_CCodecVTable
;   WatcomTypeInfo g_CCodecTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e9b0
        ;   Label: support_codec.cpp_CCodec_dtor_FUN_0043e9b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043e9b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043e9b5
    TEST AL,0x4                         ; 0043e9b9
    JNZ 0x0043e9d1                      ; 0043e9bb
        ;   XREF to: 0043e9d1 (CONDITIONAL_JUMP)  ; LAB_0043e9d1
    MOV dword ptr [EBX],0x65bbc4        ; 0043e9bd | g_CCodecVTable
    TEST AL,0x2                         ; 0043e9c3
    JNZ 0x0043e9ec                      ; 0043e9c5
        ;   XREF to: 0043e9ec (CONDITIONAL_JUMP)  ; LAB_0043e9ec
    MOV EAX,EBX                         ; 0043e9c7
    POP EBX                             ; 0043e9c9
    LEA EAX,[EAX]                       ; 0043e9ca
    PUSH 0x65bc50                       ; 0043e9d1 | g_CCodecTypeInfo
        ;   Label: LAB_0043e9d1
    PUSH EBX                            ; 0043e9d6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0043e9d7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043e9dc
    PUSH EAX                            ; 0043e9df
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0043e9e0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0043e9e5
    MOV EAX,EBX                         ; 0043e9e8
    POP EBX                             ; 0043e9ea
    RET                                 ; 0043e9eb
    PUSH EBX                            ; 0043e9ec
        ;   Label: LAB_0043e9ec
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0043e9ed
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0043e9f2
    MOV EAX,EBX                         ; 0043e9f5
    POP EBX                             ; 0043e9f7
    RET                                 ; 0043e9f8

