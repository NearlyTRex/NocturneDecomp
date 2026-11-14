; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00548580(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int              Stack[0xc]:4   vertex_count
; int              Stack[0x10]:4   tri_count
; int              Stack[0x14]:4   cap_tri_count
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60 at 00549bd7
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d19f2
;   TerminatedCString s_CDeformableModel_allocLO_005d1a07
;   TerminatedCString s_core_skeleton_cpp_005d1a3a
;   TerminatedCString s_Out_of_hunk_in_CDeformab_005d1a4f
;   WatcomTypeInfo g_SVertTypeInfo
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_free_FUN_00548370
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a556a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548580
        ;   Label: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00548580
    PUSH ESI                            ; 00548581
    PUSH EDI                            ; 00548582
    PUSH EBP                            ; 00548583
    MOV ESI,dword ptr [ESP + 0x14]      ; 00548584
    MOV EDI,dword ptr [ESP + 0x18]      ; 00548588
    TEST EDI,EDI                        ; 0054858c
    JL 0x00548594                       ; 0054858e
        ;   XREF to: 00548594 (CONDITIONAL_JUMP)  ; LAB_00548594
    CMP EDI,dword ptr [ESI]             ; 00548590
    JL 0x005485b8                       ; 00548592
        ;   XREF to: 005485b8 (CONDITIONAL_JUMP)  ; LAB_005485b8
    PUSH EDI                            ; 00548594
        ;   Label: LAB_00548594
    MOV ECX,0x5d19f2                    ; 00548595 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x29a                       ; 0054859a
    PUSH 0x5d1a07                       ; 0054859f | = "CDeformableModel::allocLOD - invalid ..."
    MOV dword ptr [0x01d71de0],ECX      ; 005485a4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 005485aa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005485b0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005485b5
    LEA EBX,[EDI*0x4 + 0x0]             ; 005485b8
        ;   Label: LAB_005485b8
    ADD EBX,ESI                         ; 005485bf
    MOV EBP,dword ptr [EBX + 0x40]      ; 005485c1
    PUSH EBP                            ; 005485c4
    CALL crt_unknown.c_FUN_005a30b6     ; 005485c5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005485ca
    MOV EAX,dword ptr [EBX + 0x7c]      ; 005485cd
    PUSH EAX                            ; 005485d0
    CALL crt_unknown.c_FUN_005a30b6     ; 005485d1
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005485d6
    MOV EDX,dword ptr [EBX + 0x90]      ; 005485d9
    PUSH EDX                            ; 005485df
    CALL crt_unknown.c_FUN_005a30b6     ; 005485e0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005485e5
    MOV ECX,dword ptr [EBX + 0xa4]      ; 005485e8
    PUSH ECX                            ; 005485ee
    CALL crt_unknown.c_FUN_005a30b6     ; 005485ef
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005485f4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005485f7
    PUSH 0x5e4790                       ; 005485fb | g_SVertTypeInfo
    MOV dword ptr [EBX + 0x2c],EAX      ; 00548600
    MOV EAX,dword ptr [ESP + 0x24]      ; 00548603
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00548607
    MOV dword ptr [EBX + 0x54],EAX      ; 0054860a
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054860d
    PUSH EDX                            ; 00548611
    MOV dword ptr [EBX + 0x68],EAX      ; 00548612
    LEA EAX,[EDX*0x4 + 0x0]             ; 00548615
    SUB EAX,EDX                         ; 0054861c
    SHL EAX,0x2                         ; 0054861e
    ADD EAX,EDX                         ; 00548621
    SHL EAX,0x2                         ; 00548623
    PUSH EAX                            ; 00548626
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00548627
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 0054862c
    PUSH EAX                            ; 0054862f
    CALL crt_unknown.c_FUN_005a556a     ; 00548630
        ;   XREF to: 005a556a (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a556a()
    MOV EDX,dword ptr [EBX + 0x54]      ; 00548635
    ADD EDX,dword ptr [EBX + 0x68]      ; 00548638
    MOV dword ptr [EBX + 0x40],EAX      ; 0054863b
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054863e
    ADD EAX,EDX                         ; 00548645
    ADD ESP,0xc                         ; 00548647
    ADD EAX,EAX                         ; 0054864a
    PUSH EAX                            ; 0054864c
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 0054864d
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    MOV dword ptr [EBX + 0x7c],EAX      ; 00548652
    MOV EDX,dword ptr [EBX + 0x68]      ; 00548655
    MOV EAX,dword ptr [EBX + 0x54]      ; 00548658
    ADD EAX,EDX                         ; 0054865b
    ADD ESP,0x4                         ; 0054865d
    SHL EAX,0x2                         ; 00548660
    PUSH EAX                            ; 00548663
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00548664
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00548669
    MOV ECX,dword ptr [EBX + 0x68]      ; 0054866c
    MOV dword ptr [EBX + 0x90],EAX      ; 0054866f
    TEST ECX,ECX                        ; 00548675
    JLE 0x005486c1                      ; 00548677
        ;   XREF to: 005486c1 (CONDITIONAL_JUMP)  ; LAB_005486c1
    LEA EAX,[ECX*0x4 + 0x0]             ; 00548679
    PUSH EAX                            ; 00548680
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00548681
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00548686
    MOV dword ptr [EBX + 0xa4],EAX      ; 00548689
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054868f
        ;   Label: LAB_0054868f
    ADD EAX,ESI                         ; 00548696
    CMP dword ptr [EAX + 0x40],0x0      ; 00548698
    JZ 0x005486cd                       ; 0054869c
        ;   XREF to: 005486cd (CONDITIONAL_JUMP)  ; LAB_005486cd
    CMP dword ptr [EAX + 0x7c],0x0      ; 0054869e
    JZ 0x005486cd                       ; 005486a2
        ;   XREF to: 005486cd (CONDITIONAL_JUMP)  ; LAB_005486cd
    CMP dword ptr [EAX + 0x90],0x0      ; 005486a4
    JZ 0x005486cd                       ; 005486ab
        ;   XREF to: 005486cd (CONDITIONAL_JUMP)  ; LAB_005486cd
    CMP dword ptr [EAX + 0x68],0x0      ; 005486ad
    JLE 0x005486bc                      ; 005486b1
        ;   XREF to: 005486bc (CONDITIONAL_JUMP)  ; LAB_005486bc
    CMP dword ptr [EAX + 0xa4],0x0      ; 005486b3
    JZ 0x005486cd                       ; 005486ba
        ;   XREF to: 005486cd (CONDITIONAL_JUMP)  ; LAB_005486cd
    POP EBP                             ; 005486bc
        ;   Label: LAB_005486bc
    POP EDI                             ; 005486bd
    POP ESI                             ; 005486be
    POP EBX                             ; 005486bf
    RET                                 ; 005486c0
    MOV dword ptr [EBX + 0xa4],0x0      ; 005486c1
        ;   Label: LAB_005486c1
    JMP 0x0054868f                      ; 005486cb
        ;   XREF to: 0054868f (UNCONDITIONAL_JUMP)  ; LAB_0054868f
    PUSH ESI                            ; 005486cd
        ;   Label: LAB_005486cd
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00548370 ; 005486ce
        ;   XREF to: 00548370 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00548370(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005486d3
    LEA EAX,[ESI + 0x68]                ; 005486d6
    PUSH EAX                            ; 005486d9
    LEA EAX,[ESI + 0x54]                ; 005486da
    PUSH EAX                            ; 005486dd
    ADD ESI,0x2c                        ; 005486de
    PUSH ESI                            ; 005486e1
    MOV EBX,0x5d1a3a                    ; 005486e2 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x2be                       ; 005486e7
    PUSH 0x5d1a4f                       ; 005486ec | = "Out of hunk in CDeformableModel::allo..."
    MOV dword ptr [0x01d71de0],EBX      ; 005486f1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005486f7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005486fd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 00548702
    POP EBP                             ; 00548705
    POP EDI                             ; 00548706
    POP ESI                             ; 00548707
    POP EBX                             ; 00548708
    RET                                 ; 00548709

