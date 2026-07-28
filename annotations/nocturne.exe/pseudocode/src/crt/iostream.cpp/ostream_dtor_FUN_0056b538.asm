; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_0056b538(_ostream *this_ptr,uint flags)
;
; Parameters:
; _ostream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   FUN_0056b4eb at 0056b4fa
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca at 00565202
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 at 00564ed0
;
; Referenced Globals:
;   void* PTR_crt_iostream.cpp_ostream_dtor_FUN_0056b538_005a4914 = 0056b538
;   void* PTR_FUN_005a491c = 0056b4eb
;   WatcomTypeInfo g_ostreamTypeInfo_005a4960
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0056b633
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b538
        ;   Label: crt_iostream.cpp_ostream_dtor_FUN_0056b538
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b539
    TEST byte ptr [ESP + 0xc],0x4       ; 0056b53d
    JNZ 0x0056b577                      ; 0056b542
        ;   XREF to: 0056b577 (CONDITIONAL_JUMP)  ; LAB_0056b577
    MOV EAX,dword ptr [EBX]             ; 0056b544
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056b546
    LEA EAX,[EBX + EDX*0x1]             ; 0056b549
    MOV dword ptr [EAX + -0x4],EDX      ; 0056b54c
    MOV EAX,dword ptr [EBX]             ; 0056b54f
    MOV dword ptr [EBX + 0x4],0x5a4914  ; 0056b551 | PTR_crt_iostream.cpp_ostream_dtor_FUN_0056b538_005a4914
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b558
    MOV DL,byte ptr [ESP + 0xc]         ; 0056b55b
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a491c ; 0056b55f | PTR_FUN_005a491c
    TEST DL,0x1                         ; 0056b567
    JZ 0x0056b592                       ; 0056b56a
        ;   XREF to: 0056b592 (CONDITIONAL_JUMP)  ; LAB_0056b592
    TEST byte ptr [ESP + 0xc],0x2       ; 0056b56c
        ;   Label: LAB_0056b56c
    JNZ 0x0056b5a5                      ; 0056b571
        ;   XREF to: 0056b5a5 (CONDITIONAL_JUMP)  ; LAB_0056b5a5
    MOV EAX,EBX                         ; 0056b573
    POP EBX                             ; 0056b575
    RET                                 ; 0056b576
    PUSH 0x5a4960                       ; 0056b577 | g_ostreamTypeInfo_005a4960
        ;   Label: LAB_0056b577
    PUSH EBX                            ; 0056b57c
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0056b57d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0056b582
    PUSH EAX                            ; 0056b585
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056b586
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0056b58b
        ;   Label: LAB_0056b58b
    MOV EAX,EBX                         ; 0056b58e
    POP EBX                             ; 0056b590
    RET                                 ; 0056b591
    PUSH 0x1                            ; 0056b592
        ;   Label: LAB_0056b592
    ADD EBX,0xc                         ; 0056b594
    PUSH EBX                            ; 0056b597
    CALL crt_iostream.cpp_ios_dtor_FUN_0056b633 ; 0056b598
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0056b633(ios * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b59d
    LEA EBX,[EAX + -0xc]                ; 0056b5a0
    JMP 0x0056b56c                      ; 0056b5a3
        ;   XREF to: 0056b56c (UNCONDITIONAL_JUMP)  ; LAB_0056b56c
    PUSH EBX                            ; 0056b5a5
        ;   Label: LAB_0056b5a5
    CALL crt_unknown.c_FUN_00564494     ; 0056b5a6
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    JMP 0x0056b58b                      ; 0056b5ab
        ;   XREF to: 0056b58b (UNCONDITIONAL_JUMP)  ; LAB_0056b58b

