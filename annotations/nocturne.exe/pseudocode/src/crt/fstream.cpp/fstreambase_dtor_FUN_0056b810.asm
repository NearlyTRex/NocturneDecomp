; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; fstreambase * __cdecl crt_fstream_cpp_fstreambase_dtor_FUN_0056b810(fstreambase *this_ptr,uint flags)
;
; Parameters:
; fstreambase *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   FUN_0056b7f8 at 0056b807
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264 at 005652aa
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca at 00565210
;
; Referenced Globals:
;   void* PTR_crt_fstream.cpp_fstreambase_dtor_FUN_0056b810_005a4a24 = 0056b810
;   void* PTR_FUN_005a4a2c = 0056b7f8
;   WatcomTypeInfo g_fstreambaseTypeInfo_005a4a60
;
; Called Functions:
;   crt_fstream.cpp_filebuf_dtor_FUN_00570449
;   crt_iostream.cpp_ios_dtor_FUN_0056b633
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b810
        ;   Label: crt_fstream.cpp_fstreambase_dtor_FUN_0056b810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b811
    TEST byte ptr [ESP + 0xc],0x4       ; 0056b815
    JNZ 0x0056b860                      ; 0056b81a
        ;   XREF to: 0056b860 (CONDITIONAL_JUMP)  ; LAB_0056b860
    MOV EAX,dword ptr [EBX]             ; 0056b81c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b81e
    LEA EDX,[EBX + EAX*0x1]             ; 0056b821
    MOV dword ptr [EDX + -0x4],EAX      ; 0056b824
    PUSH 0x0                            ; 0056b827
    MOV EAX,dword ptr [EBX]             ; 0056b829
    MOV dword ptr [EBX + 0x40],0x5a4a24 ; 0056b82b | PTR_crt_fstream.cpp_fstreambase_dtor_FUN_0056b810_005a4a24
    ADD EBX,0x4                         ; 0056b832
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b835
    PUSH EBX                            ; 0056b838
    MOV dword ptr [EBX + EAX*0x1 + 0x24],0x5a4a2c ; 0056b839 | PTR_FUN_005a4a2c
    CALL crt_fstream.cpp_filebuf_dtor_FUN_00570449 ; 0056b841
        ;   XREF to: 00570449 (UNCONDITIONAL_CALL)  ; filebuf * crt_fstream.cpp_filebuf_dtor_FUN_00570449(filebuf * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b846
    MOV DL,byte ptr [ESP + 0xc]         ; 0056b849
    LEA EBX,[EAX + -0x4]                ; 0056b84d
    TEST DL,0x1                         ; 0056b850
    JZ 0x0056b87b                       ; 0056b853
        ;   XREF to: 0056b87b (CONDITIONAL_JUMP)  ; LAB_0056b87b
    TEST byte ptr [ESP + 0xc],0x2       ; 0056b855
        ;   Label: LAB_0056b855
    JNZ 0x0056b88e                      ; 0056b85a
        ;   XREF to: 0056b88e (CONDITIONAL_JUMP)  ; LAB_0056b88e
    MOV EAX,EBX                         ; 0056b85c
    POP EBX                             ; 0056b85e
    RET                                 ; 0056b85f
    PUSH 0x5a4a60                       ; 0056b860 | g_fstreambaseTypeInfo_005a4a60
        ;   Label: LAB_0056b860
    PUSH EBX                            ; 0056b865
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0056b866
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0056b86b
    PUSH EAX                            ; 0056b86e
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056b86f
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0056b874
        ;   Label: LAB_0056b874
    MOV EAX,EBX                         ; 0056b877
    POP EBX                             ; 0056b879
    RET                                 ; 0056b87a
    PUSH 0x1                            ; 0056b87b
        ;   Label: LAB_0056b87b
    ADD EBX,0x48                        ; 0056b87d
    PUSH EBX                            ; 0056b880
    CALL crt_iostream.cpp_ios_dtor_FUN_0056b633 ; 0056b881
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0056b633(ios * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b886
    LEA EBX,[EAX + -0x48]               ; 0056b889
    JMP 0x0056b855                      ; 0056b88c
        ;   XREF to: 0056b855 (UNCONDITIONAL_JUMP)  ; LAB_0056b855
    PUSH EBX                            ; 0056b88e
        ;   Label: LAB_0056b88e
    CALL crt_unknown.c_FUN_00564494     ; 0056b88f
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    JMP 0x0056b874                      ; 0056b894
        ;   XREF to: 0056b874 (UNCONDITIONAL_JUMP)  ; LAB_0056b874

