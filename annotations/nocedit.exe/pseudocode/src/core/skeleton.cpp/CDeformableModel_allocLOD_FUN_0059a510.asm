; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510 (CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count )
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int              Stack[0xc]:4   vertex_count
; int              Stack[0x10]:4   tri_count
; int              Stack[0x14]:4   cap_tri_count
;
; XREF[4]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058b660 at 0058b7c3
;   core_skeledit.cpp_FUN_0058c190 at 0058c304
;   core_skeledit.cpp_FUN_0058d790 at 0058d7d6
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 at 0059baea
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e697
;   TerminatedCString s_CDeformableModel_allocLO_0064e6ac
;   TerminatedCString s_core_skeleton_cpp_0064e6df
;   TerminatedCString s_core_skeleton_cpp_0064e6f4
;   TerminatedCString s_core_skeleton_cpp_0064e709
;   TerminatedCString s_core_skeleton_cpp_0064e71e
;   TerminatedCString s_core_skeleton_cpp_0064e733
;   TerminatedCString s_core_skeleton_cpp_0064e748
;   TerminatedCString s_core_skeleton_cpp_0064e75d
;   TerminatedCString s_core_skeleton_cpp_0064e772
;   TerminatedCString s_core_skeleton_cpp_0064e787
;   TerminatedCString s_Out_of_hunk_in_CDeformab_0064e79c
;   WatcomTypeInfo g_SVertTypeInfo
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
;   crt_memory.c___vec_delete_FUN_005fe632
;   crt_memory.c___vec_new_FUN_00601272
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a510
        ;   Label: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
    PUSH ESI                            ; 0059a511
    PUSH EDI                            ; 0059a512
    PUSH EBP                            ; 0059a513
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059a514
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059a518
    TEST EDI,EDI                        ; 0059a51c
    JL 0x0059a524                       ; 0059a51e
        ;   XREF to: 0059a524 (CONDITIONAL_JUMP)  ; LAB_0059a524
    CMP EDI,dword ptr [ESI]             ; 0059a520
    JL 0x0059a548                       ; 0059a522
        ;   XREF to: 0059a548 (CONDITIONAL_JUMP)  ; LAB_0059a548
    PUSH EDI                            ; 0059a524
        ;   Label: LAB_0059a524
    MOV ECX,0x64e697                    ; 0059a525 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x28a                       ; 0059a52a
    PUSH 0x64e6ac                       ; 0059a52f | = "CDeformableModel::allocLOD - invalid ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0059a534 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0059a53a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a540
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0059a545
    MOV EBP,0x64e6df                    ; 0059a548 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059a548
    MOV EAX,0x28f                       ; 0059a54d
    MOV dword ptr [0x0067d20c],EBP      ; 0059a552 | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 0059a558 | g_CurrentDebugLine
    PUSH 0x662ed0                       ; 0059a55d | g_SVertTypeInfo
    MOV EDX,dword ptr [ESI + EDI*0x4 + 0x40] ; 0059a562
    PUSH EDX                            ; 0059a566
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0059a567
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0059a56c
    PUSH EAX                            ; 0059a56f
    MOV EBX,0x290                       ; 0059a570
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059a575
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV ECX,0x64e6f4                    ; 0059a57a | = "..\\core\\skeleton.cpp"
    MOV dword ptr [0x02f0d944],EBX      ; 0059a57f | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 0059a585 | g_CurrentDebugFilename
    ADD ESP,0x4                         ; 0059a58b
    MOV EBP,dword ptr [ESI + EDI*0x4 + 0x7c] ; 0059a58e
    PUSH EBP                            ; 0059a592
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059a593
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV EAX,0x64e709                    ; 0059a598 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x291                       ; 0059a59d
    MOV [0x0067d20c],EAX                ; 0059a5a2 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0059a5a7 | g_CurrentDebugLine
    ADD ESP,0x4                         ; 0059a5ad
    MOV ECX,dword ptr [ESI + EDI*0x4 + 0x90] ; 0059a5b0
    PUSH ECX                            ; 0059a5b7
    MOV EBX,0x64e71e                    ; 0059a5b8 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x292                       ; 0059a5bd
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059a5c2
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV dword ptr [0x0067d20c],EBX      ; 0059a5c7 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 0059a5cd | g_CurrentDebugLine
    ADD ESP,0x4                         ; 0059a5d3
    MOV EAX,dword ptr [ESI + EDI*0x4 + 0xa4] ; 0059a5d6
    PUSH EAX                            ; 0059a5dd
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059a5de
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0059a5e3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059a5e6
    MOV dword ptr [ESI + EDI*0x4 + 0x2c],EAX ; 0059a5ea
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059a5ee
    MOV dword ptr [ESI + EDI*0x4 + 0x54],EAX ; 0059a5f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059a5f6
    MOV dword ptr [ESI + EDI*0x4 + 0x68],EAX ; 0059a5fa
    PUSH 0x662ed0                       ; 0059a5fe | g_SVertTypeInfo
    MOV EAX,dword ptr [ESI + EDI*0x4 + 0x2c] ; 0059a603
    PUSH EAX                            ; 0059a607
    LEA EBX,[EAX*0x4 + 0x0]             ; 0059a608
    SUB EBX,EAX                         ; 0059a60f
    SHL EBX,0x2                         ; 0059a611
    ADD EBX,EAX                         ; 0059a614
    PUSH 0x29c                          ; 0059a616
    SHL EBX,0x2                         ; 0059a61b
    PUSH 0x64e733                       ; 0059a61e | = "..\\core\\skeleton.cpp"
    ADD EBX,0x4                         ; 0059a623
    PUSH EBX                            ; 0059a626
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059a627
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059a62c
    PUSH EAX                            ; 0059a62f
    CALL crt_memory.c___vec_new_FUN_00601272 ; 0059a630
        ;   XREF to: 00601272 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059a635
    TEST EAX,EAX                        ; 0059a638
    LEA EBX,[EDI*0x4 + 0x0]             ; 0059a63a
    ADD EBX,ESI                         ; 0059a641
    MOV dword ptr [EBX + 0x40],EAX      ; 0059a643
    MOV EDX,dword ptr [EBX + 0x68]      ; 0059a646
    ADD EDX,dword ptr [EBX + 0x54]      ; 0059a649
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059a64c
    PUSH 0x29d                          ; 0059a653
    ADD EAX,EDX                         ; 0059a658
    PUSH 0x64e748                       ; 0059a65a | = "..\\core\\skeleton.cpp"
    ADD EAX,EAX                         ; 0059a65f
    PUSH EAX                            ; 0059a661
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059a662
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV dword ptr [EBX + 0x7c],EAX      ; 0059a667
    ADD ESP,0xc                         ; 0059a66a
    MOV ECX,dword ptr [EBX + 0x68]      ; 0059a66d
    MOV EAX,dword ptr [EBX + 0x54]      ; 0059a670
    PUSH 0x29e                          ; 0059a673
    ADD EAX,ECX                         ; 0059a678
    PUSH 0x64e75d                       ; 0059a67a | = "..\\core\\skeleton.cpp"
    SHL EAX,0x2                         ; 0059a67f
    PUSH EAX                            ; 0059a682
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059a683
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059a688
    MOV EBP,dword ptr [EBX + 0x68]      ; 0059a68b
    MOV dword ptr [EBX + 0x90],EAX      ; 0059a68e
    TEST EBP,EBP                        ; 0059a694
    JLE 0x0059a6ea                      ; 0059a696
        ;   XREF to: 0059a6ea (CONDITIONAL_JUMP)  ; LAB_0059a6ea
    PUSH 0x2a0                          ; 0059a698
    PUSH 0x64e772                       ; 0059a69d | = "..\\core\\skeleton.cpp"
    LEA EAX,[EBP*0x4 + 0x0]             ; 0059a6a2
    PUSH EAX                            ; 0059a6a9
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059a6aa
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059a6af
    MOV dword ptr [EBX + 0xa4],EAX      ; 0059a6b2
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059a6b8
        ;   Label: LAB_0059a6b8
    ADD EAX,ESI                         ; 0059a6bf
    CMP dword ptr [EAX + 0x40],0x0      ; 0059a6c1
    JZ 0x0059a6f6                       ; 0059a6c5
        ;   XREF to: 0059a6f6 (CONDITIONAL_JUMP)  ; LAB_0059a6f6
    CMP dword ptr [EAX + 0x7c],0x0      ; 0059a6c7
    JZ 0x0059a6f6                       ; 0059a6cb
        ;   XREF to: 0059a6f6 (CONDITIONAL_JUMP)  ; LAB_0059a6f6
    CMP dword ptr [EAX + 0x90],0x0      ; 0059a6cd
    JZ 0x0059a6f6                       ; 0059a6d4
        ;   XREF to: 0059a6f6 (CONDITIONAL_JUMP)  ; LAB_0059a6f6
    CMP dword ptr [EAX + 0x68],0x0      ; 0059a6d6
    JLE 0x0059a6e5                      ; 0059a6da
        ;   XREF to: 0059a6e5 (CONDITIONAL_JUMP)  ; LAB_0059a6e5
    CMP dword ptr [EAX + 0xa4],0x0      ; 0059a6dc
    JZ 0x0059a6f6                       ; 0059a6e3
        ;   XREF to: 0059a6f6 (CONDITIONAL_JUMP)  ; LAB_0059a6f6
    POP EBP                             ; 0059a6e5
        ;   Label: LAB_0059a6e5
    POP EDI                             ; 0059a6e6
    POP ESI                             ; 0059a6e7
    POP EBX                             ; 0059a6e8
    RET                                 ; 0059a6e9
    MOV dword ptr [EBX + 0xa4],0x0      ; 0059a6ea
        ;   Label: LAB_0059a6ea
    JMP 0x0059a6b8                      ; 0059a6f4
        ;   XREF to: 0059a6b8 (UNCONDITIONAL_JUMP)  ; LAB_0059a6b8
    PUSH ESI                            ; 0059a6f6
        ;   Label: LAB_0059a6f6
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 ; 0059a6f7
        ;   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
    MOV EAX,0x64e787                    ; 0059a6fc | = "..\\core\\skeleton.cpp"
    ADD ESP,0x4                         ; 0059a701
    MOV [0x02f0ca48],EAX                ; 0059a704 | g_CurrentFilename
    LEA EAX,[ESI + 0x68]                ; 0059a709
    PUSH EAX                            ; 0059a70c
    LEA EAX,[ESI + 0x54]                ; 0059a70d
    PUSH EAX                            ; 0059a710
    ADD ESI,0x2c                        ; 0059a711
    PUSH ESI                            ; 0059a714
    MOV EDX,0x2ae                       ; 0059a715
    PUSH 0x64e79c                       ; 0059a71a | = "Out of hunk in CDeformableModel::allo..."
    MOV dword ptr [0x02f0ca4c],EDX      ; 0059a71f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a725
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0059a72a
    POP EBP                             ; 0059a72d
    POP EDI                             ; 0059a72e
    POP ESI                             ; 0059a72f
    POP EBX                             ; 0059a730
    RET                                 ; 0059a731

