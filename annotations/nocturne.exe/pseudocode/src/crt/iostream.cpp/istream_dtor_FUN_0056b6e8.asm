; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_0056b6e8(_istream *this_ptr,uint flags)
;
; Parameters:
; _istream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264 at 0056529c
;   crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0 at 0056b6df
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 at 00565010
;
; Referenced Globals:
;   void* PTR_crt_iostream.cpp_istream_dtor_FUN_0056b6e8_005a49c4 = 0056b6e8
;   void* PTR_crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0_005a49cc = 0056b6d0
;   WatcomTypeInfo g_istreamTypeInfo_005a4a00
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0056b633
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b6e8
        ;   Label: crt_iostream.cpp_istream_dtor_FUN_0056b6e8
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b6e9
    TEST byte ptr [ESP + 0xc],0x4       ; 0056b6ed
    JNZ 0x0056b727                      ; 0056b6f2
        ;   XREF to: 0056b727 (CONDITIONAL_JUMP)  ; LAB_0056b727
    MOV EAX,dword ptr [EBX]             ; 0056b6f4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056b6f6
    LEA EAX,[EBX + EDX*0x1]             ; 0056b6f9
    MOV dword ptr [EAX + -0x4],EDX      ; 0056b6fc
    MOV EAX,dword ptr [EBX]             ; 0056b6ff
    MOV dword ptr [EBX + 0x8],0x5a49c4  ; 0056b701 | PTR_crt_iostream.cpp_istream_dtor_FUN_0056b6e8_005a49c4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b708
    MOV DL,byte ptr [ESP + 0xc]         ; 0056b70b
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a49cc ; 0056b70f | PTR_crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_0056b6d0_005a49cc
    TEST DL,0x1                         ; 0056b717
    JZ 0x0056b742                       ; 0056b71a
        ;   XREF to: 0056b742 (CONDITIONAL_JUMP)  ; LAB_0056b742
    TEST byte ptr [ESP + 0xc],0x2       ; 0056b71c
        ;   Label: LAB_0056b71c
    JNZ 0x0056b755                      ; 0056b721
        ;   XREF to: 0056b755 (CONDITIONAL_JUMP)  ; LAB_0056b755
    MOV EAX,EBX                         ; 0056b723
    POP EBX                             ; 0056b725
    RET                                 ; 0056b726
    PUSH 0x5a4a00                       ; 0056b727 | g_istreamTypeInfo_005a4a00
        ;   Label: LAB_0056b727
    PUSH EBX                            ; 0056b72c
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0056b72d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0056b732
    PUSH EAX                            ; 0056b735
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056b736
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0056b73b
        ;   Label: LAB_0056b73b
    MOV EAX,EBX                         ; 0056b73e
    POP EBX                             ; 0056b740
    RET                                 ; 0056b741
    PUSH 0x1                            ; 0056b742
        ;   Label: LAB_0056b742
    ADD EBX,0x10                        ; 0056b744
    PUSH EBX                            ; 0056b747
    CALL crt_iostream.cpp_ios_dtor_FUN_0056b633 ; 0056b748
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0056b633(ios * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b74d
    LEA EBX,[EAX + -0x10]               ; 0056b750
    JMP 0x0056b71c                      ; 0056b753
        ;   XREF to: 0056b71c (UNCONDITIONAL_JUMP)  ; LAB_0056b71c
    PUSH EBX                            ; 0056b755
        ;   Label: LAB_0056b755
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0056b756
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    JMP 0x0056b73b                      ; 0056b75b
        ;   XREF to: 0056b73b (UNCONDITIONAL_JUMP)  ; LAB_0056b73b

