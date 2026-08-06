; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(void *this_ptr,uint flags)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   crt_unknown.c_FUN_00564faa at 00564fb7
;   crt_unknown.c_FUN_00564fc0 at 00564fcf
;   support_codec.cpp_CCodec_processBuffer_FUN_00439120 at 00439190
;   support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0 at 00439108
;
; Referenced Globals:
;   undefined4 DAT_0059b4b0
;   void* PTR_crt_strstream.cpp_istrstream_dtor_FUN_00564fd8_005a4744 = 00564fd8
;   void* PTR_crt_unknown.c_FUN_00564faa_005a474c = 00564faa
;   void* PTR_crt_unknown.c_FUN_00564fc0_005a4754 = 00564fc0
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0056b633
;   crt_iostream.cpp_istream_dtor_FUN_0056b6e8
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564fd8
        ;   Label: crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
    MOV EBX,dword ptr [ESP + 0x8]       ; 00564fd9
    TEST byte ptr [ESP + 0xc],0x4       ; 00564fdd
    JNZ 0x0056503c                      ; 00564fe2
        ;   XREF to: 0056503c (CONDITIONAL_JUMP)  ; LAB_0056503c
    MOV EAX,dword ptr [EBX]             ; 00564fe4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00564fe6
    LEA EAX,[EBX + EDX*0x1]             ; 00564fe9
    MOV dword ptr [EAX + -0x4],EDX      ; 00564fec
    MOV dword ptr [EBX + 0x44],0x5a4744 ; 00564fef | PTR_crt_strstream.cpp_istrstream_dtor_FUN_00564fd8_005a4744
    PUSH 0x1                            ; 00564ff6
    MOV EAX,dword ptr [EBX]             ; 00564ff8
    MOV dword ptr [EBX + 0x50],0x5a474c ; 00564ffa | PTR_crt_unknown.c_FUN_00564faa_005a474c
    ADD EBX,0x48                        ; 00565001
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565004
    PUSH EBX                            ; 00565007
    MOV dword ptr [EBX + EAX*0x1 + -0x20],0x5a4754 ; 00565008 | PTR_crt_unknown.c_FUN_00564fc0_005a4754
    CALL crt_iostream.cpp_istream_dtor_FUN_0056b6e8 ; 00565010
        ;   XREF to: 0056b6e8 (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_dtor_FUN_0056b6e8(_istream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00565015
    PUSH 0x1                            ; 00565018
    LEA EBX,[EAX + -0x48]               ; 0056501a
    PUSH EBX                            ; 0056501d
    CALL crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad ; 0056501e
        ;   XREF to: 0056b5ad (UNCONDITIONAL_CALL)  ; strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad(strstreambase * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00565023
    MOV DL,byte ptr [ESP + 0xc]         ; 00565026
    MOV EBX,EAX                         ; 0056502a
    TEST DL,0x1                         ; 0056502c
    JZ 0x00565057                       ; 0056502f
        ;   XREF to: 00565057 (CONDITIONAL_JUMP)  ; LAB_00565057
    TEST byte ptr [ESP + 0xc],0x2       ; 00565031
        ;   Label: LAB_00565031
    JNZ 0x0056506a                      ; 00565036
        ;   XREF to: 0056506a (CONDITIONAL_JUMP)  ; LAB_0056506a
    MOV EAX,EBX                         ; 00565038
    POP EBX                             ; 0056503a
    RET                                 ; 0056503b
    PUSH 0x59b4b0                       ; 0056503c | DAT_0059b4b0
        ;   Label: LAB_0056503c
    PUSH EBX                            ; 00565041
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00565042
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00565047
    PUSH EAX                            ; 0056504a
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056504b
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00565050
        ;   Label: LAB_00565050
    MOV EAX,EBX                         ; 00565053
    POP EBX                             ; 00565055
    RET                                 ; 00565056
    PUSH 0x1                            ; 00565057
        ;   Label: LAB_00565057
    ADD EAX,0x58                        ; 00565059
    PUSH EAX                            ; 0056505c
    CALL crt_iostream.cpp_ios_dtor_FUN_0056b633 ; 0056505d
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0056b633(ios * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00565062
    LEA EBX,[EAX + -0x58]               ; 00565065
    JMP 0x00565031                      ; 00565068
        ;   XREF to: 00565031 (UNCONDITIONAL_JUMP)  ; LAB_00565031
    PUSH EBX                            ; 0056506a
        ;   Label: LAB_0056506a
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0056506b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    JMP 0x00565050                      ; 00565070
        ;   XREF to: 00565050 (UNCONDITIONAL_JUMP)  ; LAB_00565050

