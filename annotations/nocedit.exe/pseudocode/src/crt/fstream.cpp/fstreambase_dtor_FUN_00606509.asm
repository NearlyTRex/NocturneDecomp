; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_00606509(fstreambase * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; fstreambase *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; XREF[3]:
;   crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_006064f1 at 00606500
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 at 005ff89c
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc at 005ff802
;
; Referenced Globals:
;   void* g_FStreamBase_Destructor = 00606509
;   void* g_FStreamBase_IOSDestructor = 006064f1
;   WatcomTypeInfo g_FStreamBaseTypeInfo
;
; Called Functions:
;   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606509
        ;   Label: crt_fstream.cpp_fstreambase_dtor_FUN_00606509
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060650a
    TEST byte ptr [ESP + 0xc],0x4       ; 0060650e
    JNZ 0x00606559                      ; 00606513 | LAB_00606559
        ;   XREF to: 00606559 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00606515
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606517
    LEA EDX,[EBX + EAX*0x1]             ; 0060651a
    MOV dword ptr [EDX + -0x4],EAX      ; 0060651d
    PUSH 0x0                            ; 00606520
    MOV EAX,dword ptr [EBX]             ; 00606522
    MOV dword ptr [EBX + 0x40],0x665ed4 ; 00606524 | void * g_FStreamBase_Destructor
    ADD EBX,0x4                         ; 0060652b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060652e
    PUSH EBX                            ; 00606531
    MOV dword ptr [EBX + EAX*0x1 + 0x24],0x665edc ; 00606532 | void * g_FStreamBase_IOSDestructor
    CALL crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 ; 0060653a | filebuf * crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9(filebuf * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 0060bdf9 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060653f
    MOV DL,byte ptr [ESP + 0xc]         ; 00606542
    LEA EBX,[EAX + -0x4]                ; 00606546
    TEST DL,0x1                         ; 00606549
    JZ 0x00606574                       ; 0060654c | LAB_00606574
        ;   XREF to: 00606574 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0xc],0x2       ; 0060654e
        ;   Label: LAB_0060654e
    JNZ 0x00606587                      ; 00606553 | LAB_00606587
        ;   XREF to: 00606587 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00606555
    POP EBX                             ; 00606557
    RET                                 ; 00606558
    PUSH 0x665f10                       ; 00606559 | WatcomTypeInfo g_FStreamBaseTypeInfo
        ;   Label: LAB_00606559
    PUSH EBX                            ; 0060655e
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0060655f | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00606564
    PUSH EAX                            ; 00606567
    CALL crt_memory.c_free_FUN_005fe659 ; 00606568 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060656d
        ;   Label: LAB_0060656d
    MOV EAX,EBX                         ; 00606570
    POP EBX                             ; 00606572
    RET                                 ; 00606573
    PUSH 0x1                            ; 00606574
        ;   Label: LAB_00606574
    ADD EBX,0x48                        ; 00606576
    PUSH EBX                            ; 00606579
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 0060657a | ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060657f
    LEA EBX,[EAX + -0x48]               ; 00606582
    JMP 0x0060654e                      ; 00606585 | LAB_0060654e
        ;   XREF to: 0060654e (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00606587
        ;   Label: LAB_00606587
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00606588 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    JMP 0x0060656d                      ; 0060658d | LAB_0060656d
        ;   XREF to: 0060656d (UNCONDITIONAL_JUMP)

