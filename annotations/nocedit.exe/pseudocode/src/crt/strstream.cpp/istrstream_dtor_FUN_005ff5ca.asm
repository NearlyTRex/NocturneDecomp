; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1)
;
; Parameters:
; istrstream *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   d1
;
; XREF[4]:
;   crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2 at 005ff5c1
;   crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c at 005ff5a9
;   support_codec.cpp_CCodec_processBuffer_FUN_0043eba0 at 0043ec10
;   support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30 at 0043eb88
;
; Referenced Globals:
;   WatcomTypeInfo g_IStrStreamTypeInfo
;   WatcomThunkedDestructor PTR_FUN_00665bf4
;   WatcomThunkedDestructor PTR_FUN_00665bfc
;   WatcomThunkedDestructorDirect PTR_FUN_00665c04
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_iostream.cpp_istream_dtor_FUN_006063e1
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff5ca
        ;   Label: crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ff5cb
    TEST byte ptr [ESP + 0xc],0x4       ; 005ff5cf
    JNZ 0x005ff62e                      ; 005ff5d4 | LAB_005ff62e
        ;   XREF to: 005ff62e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ff5d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ff5d8
    LEA EAX,[EBX + EDX*0x1]             ; 005ff5db
    MOV dword ptr [EAX + -0x4],EDX      ; 005ff5de
    MOV dword ptr [EBX + 0x44],0x665bf4 ; 005ff5e1 | WatcomThunkedDestructor PTR_FUN_00665bf4
    PUSH 0x1                            ; 005ff5e8
    MOV EAX,dword ptr [EBX]             ; 005ff5ea
    MOV dword ptr [EBX + 0x50],0x665bfc ; 005ff5ec | WatcomThunkedDestructor PTR_FUN_00665bfc
    ADD EBX,0x48                        ; 005ff5f3
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff5f6
    PUSH EBX                            ; 005ff5f9
    MOV dword ptr [EBX + EAX*0x1 + -0x20],0x665c04 ; 005ff5fa | WatcomThunkedDestructorDirect PTR_FUN_00665c04
    CALL crt_iostream.cpp_istream_dtor_FUN_006063e1 ; 005ff602 | istream * crt_iostream.cpp_istream_dtor_FUN_006063e1(istream * this_ptr, uint d1, uint d2)
        ;   XREF to: 006063e1 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff607
    PUSH 0x1                            ; 005ff60a
    LEA EBX,[EAX + -0x48]               ; 005ff60c
    PUSH EBX                            ; 005ff60f
    CALL crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 ; 005ff610 | strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_006062a6(strstreambase * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 006062a6 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff615
    MOV DL,byte ptr [ESP + 0xc]         ; 005ff618
    MOV EBX,EAX                         ; 005ff61c
    TEST DL,0x1                         ; 005ff61e
    JZ 0x005ff649                       ; 005ff621 | LAB_005ff649
        ;   XREF to: 005ff649 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0xc],0x2       ; 005ff623
        ;   Label: LAB_005ff623
    JNZ 0x005ff65c                      ; 005ff628 | LAB_005ff65c
        ;   XREF to: 005ff65c (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005ff62a
    POP EBX                             ; 005ff62c
    RET                                 ; 005ff62d
    PUSH 0x65bc90                       ; 005ff62e | WatcomTypeInfo g_IStrStreamTypeInfo
        ;   Label: LAB_005ff62e
    PUSH EBX                            ; 005ff633
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005ff634 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff639
    PUSH EAX                            ; 005ff63c
    CALL crt_memory.c_free_FUN_005fe659 ; 005ff63d | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ff642
        ;   Label: LAB_005ff642
    MOV EAX,EBX                         ; 005ff645
    POP EBX                             ; 005ff647
    RET                                 ; 005ff648
    PUSH 0x1                            ; 005ff649
        ;   Label: LAB_005ff649
    ADD EAX,0x58                        ; 005ff64b
    PUSH EAX                            ; 005ff64e
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 005ff64f | ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff654
    LEA EBX,[EAX + -0x58]               ; 005ff657
    JMP 0x005ff623                      ; 005ff65a | LAB_005ff623
        ;   XREF to: 005ff623 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005ff65c
        ;   Label: LAB_005ff65c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005ff65d | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    JMP 0x005ff642                      ; 005ff662 | LAB_005ff642
        ;   XREF to: 005ff642 (UNCONDITIONAL_JUMP)

