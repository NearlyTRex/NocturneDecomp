; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_0043f710(CLZWCompress *this_ptr,uint flags)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLZWCompressTypeInfo
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

    PUSH EBX                            ; 0043f710
        ;   Label: support_codec.cpp_CLZWCompress_dtor_FUN_0043f710
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f711
    TEST byte ptr [ESP + 0xc],0x4       ; 0043f715
    JNZ 0x0043f747                      ; 0043f71a
        ;   XREF to: 0043f747 (CONDITIONAL_JUMP)  ; LAB_0043f747
    PUSH 0x0                            ; 0043f71c
    ADD EBX,0x4                         ; 0043f71e
    PUSH EBX                            ; 0043f721
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 ; 0043f722
        ;   XREF to: 0043edf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043f727
    PUSH 0x1                            ; 0043f72a
    LEA EBX,[EAX + -0x4]                ; 0043f72c
    PUSH EBX                            ; 0043f72f
    CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0 ; 0043f730
        ;   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043f735
    MOV DL,byte ptr [ESP + 0xc]         ; 0043f738
    MOV EBX,EAX                         ; 0043f73c
    TEST DL,0x2                         ; 0043f73e
    JNZ 0x0043f762                      ; 0043f741
        ;   XREF to: 0043f762 (CONDITIONAL_JUMP)  ; LAB_0043f762
    MOV EAX,EBX                         ; 0043f743
    POP EBX                             ; 0043f745
    RET                                 ; 0043f746
    PUSH 0x65bd10                       ; 0043f747 | g_CLZWCompressTypeInfo
        ;   Label: LAB_0043f747
    PUSH EBX                            ; 0043f74c
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0043f74d
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043f752
    PUSH EAX                            ; 0043f755
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0043f756
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0043f75b
    MOV EAX,EBX                         ; 0043f75e
    POP EBX                             ; 0043f760
    RET                                 ; 0043f761
    PUSH EAX                            ; 0043f762
        ;   Label: LAB_0043f762
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0043f763
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0043f768
    MOV EAX,EBX                         ; 0043f76b
    POP EBX                             ; 0043f76d
    RET                                 ; 0043f76e

