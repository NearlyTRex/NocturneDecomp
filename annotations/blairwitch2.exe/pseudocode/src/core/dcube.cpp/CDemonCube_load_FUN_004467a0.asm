; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_load_FUN_004467a0(CDemonCube *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_dtrace.cpp_FUN_004728d0 at 00472a18
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590
;   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004447b0
;   crt_stdio.c_fread_FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004467a0
        ;   Label: core_dcube.cpp_CDemonCube_load_FUN_004467a0
    PUSH ESI                            ; 004467a1
    PUSH EDI                            ; 004467a2
    PUSH EBP                            ; 004467a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004467a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004467a8
    PUSH EBP                            ; 004467ac
    PUSH 0xc                            ; 004467ad
    PUSH 0x1                            ; 004467af
    LEA EAX,[ESI + 0x8]                 ; 004467b1
    PUSH EAX                            ; 004467b4
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004467b5
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 004467ba
    PUSH EBP                            ; 004467bd
    PUSH 0xc                            ; 004467be
    PUSH 0x1                            ; 004467c0
    LEA EAX,[ESI + 0x14]                ; 004467c2
    PUSH EAX                            ; 004467c5
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004467c6
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 004467cb
    PUSH EBP                            ; 004467ce
    PUSH 0x4                            ; 004467cf
    PUSH 0x1                            ; 004467d1
    LEA EAX,[ESI + 0x20]                ; 004467d3
    PUSH EAX                            ; 004467d6
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004467d7
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 004467dc
    PUSH EBP                            ; 004467df
    PUSH 0x4                            ; 004467e0
    PUSH 0x1                            ; 004467e2
    LEA EAX,[ESI + 0x28]                ; 004467e4
    PUSH EAX                            ; 004467e7
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004467e8
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    MOV EDX,dword ptr [ESI + 0x28]      ; 004467ed
    ADD ESP,0x10                        ; 004467f0
    TEST EDX,EDX                        ; 004467f3
    JNZ 0x00446862                      ; 004467f5
        ;   XREF to: 00446862 (CONDITIONAL_JUMP)  ; LAB_00446862
    PUSH EBP                            ; 004467f7
        ;   Label: LAB_004467f7
    PUSH 0xc                            ; 004467f8
    MOV ECX,dword ptr [ESI + 0x20]      ; 004467fa
    PUSH ECX                            ; 004467fd
    MOV EBX,dword ptr [ESI + 0x24]      ; 004467fe
    PUSH EBX                            ; 00446801
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00446802
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00446807
    MOV EDI,dword ptr [ESI + 0x28]      ; 0044680a
    XOR EBX,EBX                         ; 0044680d
    TEST EDI,EDI                        ; 0044680f
    JLE 0x00446840                      ; 00446811
        ;   XREF to: 00446840 (CONDITIONAL_JUMP)  ; LAB_00446840
    XOR EDI,EDI                         ; 00446813
    MOV EAX,dword ptr [ESI + 0x24]      ; 00446815
        ;   Label: LAB_00446815
    PUSH EAX                            ; 00446818
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00446819
    PUSH EBP                            ; 0044681c
    ADD EAX,EDI                         ; 0044681d
    PUSH EAX                            ; 0044681f
    INC EBX                             ; 00446820
    CALL core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004447b0 ; 00446821
        ;   XREF to: 004447b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004447b0(CDemonCubeTriangle * this_ptr, _FILE * file_handle, CVector3f * vertex_buffer_base)
    ADD EDI,0x20                        ; 00446826
    MOV EDX,dword ptr [ESI + 0x28]      ; 00446829
    ADD ESP,0xc                         ; 0044682c
    CMP EBX,EDX                         ; 0044682f
    JL 0x00446815                       ; 00446831
        ;   XREF to: 00446815 (CONDITIONAL_JUMP)  ; LAB_00446815
    LEA EAX,[EAX]                       ; 00446833
    LEA EDX,[EDX]                       ; 00446839
    NOP                                 ; 0044683f
    MOV ECX,dword ptr [ESI + 0x28]      ; 00446840
        ;   Label: LAB_00446840
    TEST ECX,ECX                        ; 00446843
    JZ 0x00446857                       ; 00446845
        ;   XREF to: 00446857 (CONDITIONAL_JUMP)  ; LAB_00446857
    PUSH EBP                            ; 00446847
    PUSH ECX                            ; 00446848
    PUSH 0x1                            ; 00446849
    MOV EDI,dword ptr [ESI + 0x30]      ; 0044684b
    PUSH EDI                            ; 0044684e
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044684f
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00446854
    CMP dword ptr [ESI + 0x28],0x0      ; 00446857
        ;   Label: LAB_00446857
    JNZ 0x0044686d                      ; 0044685b
        ;   XREF to: 0044686d (CONDITIONAL_JUMP)  ; LAB_0044686d
    POP EBP                             ; 0044685d
    POP EDI                             ; 0044685e
    POP ESI                             ; 0044685f
    POP EBX                             ; 00446860
    RET                                 ; 00446861
    PUSH ESI                            ; 00446862
        ;   Label: LAB_00446862
    CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590 ; 00446863
        ;   XREF to: 00446590 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 00446868
    JMP 0x004467f7                      ; 0044686b
        ;   XREF to: 004467f7 (UNCONDITIONAL_JUMP)  ; LAB_004467f7
    PUSH EBP                            ; 0044686d
        ;   Label: LAB_0044686d
    PUSH 0x40                           ; 0044686e
    PUSH 0x1                            ; 00446870
    MOV EDX,dword ptr [ESI]             ; 00446872
    PUSH EDX                            ; 00446874
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00446875
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    MOV ECX,0x40                        ; 0044687a
    ADD ESP,0x10                        ; 0044687f
    MOV EAX,dword ptr [ESI]             ; 00446882
    MOV EDI,dword ptr [ESI + 0x4]       ; 00446884
    MOV ESI,EAX                         ; 00446887
    PUSH EDI                            ; 00446889
    MOV EAX,ECX                         ; 0044688a
    SHR ECX,0x2                         ; 0044688c
    MOVSD.REP ES:EDI,ESI                ; 0044688f
    MOV CL,AL                           ; 00446891
    AND CL,0x3                          ; 00446893
    MOVSB.REP ES:EDI,ESI                ; 00446896
    POP EDI                             ; 00446898
    POP EBP                             ; 00446899
    POP EDI                             ; 0044689a
    POP ESI                             ; 0044689b
    POP EBX                             ; 0044689c
    RET                                 ; 0044689d

