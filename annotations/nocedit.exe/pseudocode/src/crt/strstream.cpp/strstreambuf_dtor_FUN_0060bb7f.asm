; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f(strstreambuf *this_ptr,uint flags)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 at 006062d7
;
; Referenced Globals:
;   strstreambuf_vtable g_StrstreambufVTable
;   WatcomTypeInfo g_StrStreamBufTypeInfo
;
; Called Functions:
;   crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060bb7f
        ;   Label: crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060bb80
    TEST byte ptr [ESP + 0xc],0x4       ; 0060bb84
    JNZ 0x0060bbcf                      ; 0060bb89
        ;   XREF to: 0060bbcf (CONDITIONAL_JUMP)  ; LAB_0060bbcf
    MOV DL,byte ptr [EBX + 0x3c]        ; 0060bb8b
    MOV dword ptr [EBX + 0x28],0x665d34 ; 0060bb8e | g_StrstreambufVTable
    TEST DL,0x2                         ; 0060bb95
    JZ 0x0060bbb5                       ; 0060bb98
        ;   XREF to: 0060bbb5 (CONDITIONAL_JUMP)  ; LAB_0060bbb5
    TEST DL,0x1                         ; 0060bb9a
    JNZ 0x0060bbb5                      ; 0060bb9d
        ;   XREF to: 0060bbb5 (CONDITIONAL_JUMP)  ; LAB_0060bbb5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060bb9f
    TEST EAX,EAX                        ; 0060bba2
    JZ 0x0060bbb5                       ; 0060bba4
        ;   XREF to: 0060bbb5 (CONDITIONAL_JUMP)  ; LAB_0060bbb5
    CMP dword ptr [EBX + 0x30],0x0      ; 0060bba6
    JNZ 0x0060bbea                      ; 0060bbaa
        ;   XREF to: 0060bbea (CONDITIONAL_JUMP)  ; LAB_0060bbea
    PUSH EAX                            ; 0060bbac
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0060bbad
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0060bbb2
        ;   Label: LAB_0060bbb2
    PUSH 0x1                            ; 0060bbb5
        ;   Label: LAB_0060bbb5
    PUSH EBX                            ; 0060bbb7
    CALL crt_iostream.cpp_streambuf_destructor_FUN_0060d64f ; 0060bbb8
        ;   XREF to: 0060d64f (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_destructor_FUN_0060d64f(streambuf * this_ptr)
    ADD ESP,0x8                         ; 0060bbbd
    MOV CL,byte ptr [ESP + 0xc]         ; 0060bbc0
    MOV EBX,EAX                         ; 0060bbc4
    TEST CL,0x2                         ; 0060bbc6
    JNZ 0x0060bbf0                      ; 0060bbc9
        ;   XREF to: 0060bbf0 (CONDITIONAL_JUMP)  ; LAB_0060bbf0
    MOV EAX,EBX                         ; 0060bbcb
    POP EBX                             ; 0060bbcd
    RET                                 ; 0060bbce
    PUSH 0x665fb0                       ; 0060bbcf | g_StrStreamBufTypeInfo
        ;   Label: LAB_0060bbcf
    PUSH EBX                            ; 0060bbd4
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0060bbd5
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0060bbda
    PUSH EAX                            ; 0060bbdd
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0060bbde
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0060bbe3
        ;   Label: LAB_0060bbe3
    MOV EAX,EBX                         ; 0060bbe6
    POP EBX                             ; 0060bbe8
    RET                                 ; 0060bbe9
    PUSH EAX                            ; 0060bbea
        ;   Label: LAB_0060bbea
    CALL dword ptr [EBX + 0x30]         ; 0060bbeb
    JMP 0x0060bbb2                      ; 0060bbee
        ;   XREF to: 0060bbb2 (UNCONDITIONAL_JUMP)  ; LAB_0060bbb2
    PUSH EAX                            ; 0060bbf0
        ;   Label: LAB_0060bbf0
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0060bbf1
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x0060bbe3                      ; 0060bbf6
        ;   XREF to: 0060bbe3 (UNCONDITIONAL_JUMP)  ; LAB_0060bbe3

