; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_0043f6b0(CLZWDecompress *this_ptr,uint d1,uint d2,uint d3)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CLZWDecompressTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
;   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f6b0
        ;   Label: support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f6b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0043f6b5
    JNZ 0x0043f6e7                      ; 0043f6ba
        ;   XREF to: 0043f6e7 (CONDITIONAL_JUMP)  ; LAB_0043f6e7
    PUSH 0x0                            ; 0043f6bc
    ADD EBX,0x4                         ; 0043f6be
    PUSH EBX                            ; 0043f6c1
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 ; 0043f6c2
        ;   XREF to: 0043edf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr)
    ADD ESP,0x8                         ; 0043f6c7
    PUSH 0x1                            ; 0043f6ca
    LEA EBX,[EAX + -0x4]                ; 0043f6cc
    PUSH EBX                            ; 0043f6cf
    CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0 ; 0043f6d0
        ;   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, int d1)
    ADD ESP,0x8                         ; 0043f6d5
    MOV DL,byte ptr [ESP + 0xc]         ; 0043f6d8
    MOV EBX,EAX                         ; 0043f6dc
    TEST DL,0x2                         ; 0043f6de
    JNZ 0x0043f702                      ; 0043f6e1
        ;   XREF to: 0043f702 (CONDITIONAL_JUMP)  ; LAB_0043f702
    MOV EAX,EBX                         ; 0043f6e3
    POP EBX                             ; 0043f6e5
    RET                                 ; 0043f6e6
    PUSH 0x65bcf0                       ; 0043f6e7 | g_CLZWDecompressTypeInfo
        ;   Label: LAB_0043f6e7
    PUSH EBX                            ; 0043f6ec
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0043f6ed
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043f6f2
    PUSH EAX                            ; 0043f6f5
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0043f6f6
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0043f6fb
    MOV EAX,EBX                         ; 0043f6fe
    POP EBX                             ; 0043f700
    RET                                 ; 0043f701
    PUSH EAX                            ; 0043f702
        ;   Label: LAB_0043f702
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0043f703
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0043f708
    MOV EAX,EBX                         ; 0043f70b
    POP EBX                             ; 0043f70d
    RET                                 ; 0043f70e

