; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj * this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_Deleting_d_disjoing_vert_006544b0
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_malloc_FUN_006021da
;   crt_memory.c_memset_FUN_005fde40
;   crt_memory.c_realloc_FUN_00601df0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d44d0
        ;   Label: shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0
    PUSH ESI                            ; 005d44d1
    PUSH EBP                            ; 005d44d2
    SUB ESP,0x70                        ; 005d44d3
    MOV ESI,dword ptr [ESP + 0x80]      ; 005d44d6
    MOV EAX,dword ptr [ESI]             ; 005d44dd
    SHL EAX,0x2                         ; 005d44df
    PUSH EAX                            ; 005d44e2
    CALL crt_memory.c_malloc_FUN_006021da ; 005d44e3 | void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d44e8
    MOV EBX,EAX                         ; 005d44eb
    TEST EAX,EAX                        ; 005d44ed
    JZ 0x005d46e5                       ; 005d44ef | LAB_005d46e5
        ;   XREF to: 005d46e5 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 005d44f5
    MOV ECX,dword ptr [ESI]             ; 005d44f7
    MOV dword ptr [ESP + 0x5c],EDX      ; 005d44f9
    CMP ECX,0x3e8                       ; 005d44fd
    JA 0x005d4611                       ; 005d4503 | LAB_005d4611
        ;   XREF to: 005d4611 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005d4509
        ;   Label: LAB_005d4509
    MOV EAX,dword ptr [ESI]             ; 005d450a
    SHL EAX,0x2                         ; 005d450c
    PUSH EAX                            ; 005d450f
    PUSH 0xff                           ; 005d4510
    PUSH EBX                            ; 005d4515
    CALL crt_memory.c_memset_FUN_005fde40 ; 005d4516 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d451b
    MOV EDI,dword ptr [ESI + 0x8]       ; 005d451e
    XOR EDX,EDX                         ; 005d4521
    TEST EDI,EDI                        ; 005d4523
    JBE 0x005d4560                      ; 005d4525 | LAB_005d4560
        ;   XREF to: 005d4560 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 005d4527
    MOV EAX,dword ptr [ESI + 0xc]       ; 005d4529
        ;   Label: LAB_005d4529
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x4] ; 005d452c
    SHL ECX,0x2                         ; 005d4530
    LEA EBP,[EBX + ECX*0x1]             ; 005d4533
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x4] ; 005d4536
    MOV dword ptr [EBP],ECX             ; 005d453a
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x8] ; 005d453d
    SHL ECX,0x2                         ; 005d4541
    LEA EBP,[EBX + ECX*0x1]             ; 005d4544
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x8] ; 005d4547
    MOV dword ptr [EBP],ECX             ; 005d454b
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0xc] ; 005d454e
    INC EDX                             ; 005d4552
    MOV dword ptr [EBX + ECX*0x4],ECX   ; 005d4553
    MOV EBP,dword ptr [ESI + 0x8]       ; 005d4556
    ADD EDI,0x68                        ; 005d4559
    CMP EDX,EBP                         ; 005d455c
    JC 0x005d4529                       ; 005d455e | LAB_005d4529
        ;   XREF to: 005d4529 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005d4560
        ;   Label: LAB_005d4560
    MOV ECX,dword ptr [ESI]             ; 005d4562
    XOR EDI,EDI                         ; 005d4564
    XOR EDX,EDX                         ; 005d4566
    TEST ECX,ECX                        ; 005d4568
    JBE 0x005d4580                      ; 005d456a | LAB_005d4580
        ;   XREF to: 005d4580 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX],-0x1            ; 005d456c
        ;   Label: LAB_005d456c
    JNZ 0x005d4624                      ; 005d456f | LAB_005d4624
        ;   XREF to: 005d4624 (CONDITIONAL_JUMP)
    INC EDI                             ; 005d4575
    INC EDX                             ; 005d4576
        ;   Label: LAB_005d4576
    MOV EBP,dword ptr [ESI]             ; 005d4577
    ADD EAX,0x4                         ; 005d4579
    CMP EDX,EBP                         ; 005d457c
    JC 0x005d456c                       ; 005d457e | LAB_005d456c
        ;   XREF to: 005d456c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005d4580
        ;   Label: LAB_005d4580
    MOV EDX,dword ptr [ESI + 0x8]       ; 005d4582
    MOV dword ptr [ESP + 0x70],EAX      ; 005d4585
    TEST EDX,EDX                        ; 005d4589
    JBE 0x005d45d0                      ; 005d458b | LAB_005d45d0
        ;   XREF to: 005d45d0 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 005d458d
    MOV EAX,dword ptr [ESI + 0xc]       ; 005d458f
        ;   Label: LAB_005d458f
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 005d4592
    MOV EBP,dword ptr [EDX + EAX*0x1 + 0x4] ; 005d4596
    SUB EBP,dword ptr [EBX + ECX*0x4]   ; 005d459a
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005d459d
    MOV dword ptr [EDX + EAX*0x1 + 0x4],EBP ; 005d45a1
    MOV ECX,dword ptr [EBX + ECX*0x4]   ; 005d45a5
    MOV EBP,dword ptr [EDX + EAX*0x1 + 0x8] ; 005d45a8
    SUB EBP,ECX                         ; 005d45ac
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0xc] ; 005d45ae
    MOV dword ptr [EDX + EAX*0x1 + 0x8],EBP ; 005d45b2
    MOV ECX,dword ptr [EBX + ECX*0x4]   ; 005d45b6
    SUB dword ptr [EDX + EAX*0x1 + 0xc],ECX ; 005d45b9
    MOV EAX,dword ptr [ESP + 0x70]      ; 005d45bd
    ADD EDX,0x68                        ; 005d45c1
    INC EAX                             ; 005d45c4
    MOV ECX,dword ptr [ESI + 0x8]       ; 005d45c5
    MOV dword ptr [ESP + 0x70],EAX      ; 005d45c8
    CMP EAX,ECX                         ; 005d45cc
    JC 0x005d458f                       ; 005d45ce | LAB_005d458f
        ;   XREF to: 005d458f (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005d45d0
        ;   Label: LAB_005d45d0
    PUSH 0x6544b0                       ; 005d45d1 | = "Deleting %d disjoing vertices" | s_Deleting_d_disjoing_vert_006544b0 = Deleting %d disjoing vertices
    LEA EAX,[ESP + 0xc]                 ; 005d45d6
    PUSH EAX                            ; 005d45da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005d45db | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESI]             ; 005d45e0
    ADD ESP,0xc                         ; 005d45e2
    SUB EAX,EDI                         ; 005d45e5
    MOV dword ptr [ESP + 0x64],EAX      ; 005d45e7
    XOR EDI,EDI                         ; 005d45eb
    MOV EBP,dword ptr [ESP + 0x64]      ; 005d45ed
    MOV EAX,EBX                         ; 005d45f1
    MOV dword ptr [ESP + 0x6c],EDI      ; 005d45f3
    TEST EBP,EBP                        ; 005d45f7
    JBE 0x005d46a1                      ; 005d45f9 | LAB_005d46a1
        ;   XREF to: 005d46a1 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x68],EDI      ; 005d45ff
    MOV EDI,dword ptr [EAX]             ; 005d4603
        ;   Label: LAB_005d4603
    LEA ECX,[EAX + 0x4]                 ; 005d4605
    CMP EDI,-0x1                        ; 005d4608
    JNZ 0x005d462b                      ; 005d460b | LAB_005d462b
        ;   XREF to: 005d462b (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 005d460d
    JMP 0x005d4603                      ; 005d460f | LAB_005d4603
        ;   XREF to: 005d4603 (UNCONDITIONAL_JUMP)
    PUSH 0x4                            ; 005d4611
        ;   Label: LAB_005d4611
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005d4613 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d4618
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d461b
    JMP 0x005d4509                      ; 005d461f | LAB_005d4509
        ;   XREF to: 005d4509 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX],EDI             ; 005d4624
        ;   Label: LAB_005d4624
    JMP 0x005d4576                      ; 005d4626 | LAB_005d4576
        ;   XREF to: 005d4576 (UNCONDITIONAL_JUMP)
    SUB EAX,EBX                         ; 005d462b
        ;   Label: LAB_005d462b
    MOV EDX,EAX                         ; 005d462d
    SAR EDX,0x1f                        ; 005d462f
    SHL EDX,0x2                         ; 005d4632
    SBB EAX,EDX                         ; 005d4635
    SAR EAX,0x2                         ; 005d4637
    IMUL EAX,EAX,0x38                   ; 005d463a
    MOV EDX,dword ptr [ESI + 0x4]       ; 005d463d
    MOV EDI,dword ptr [ESP + 0x68]      ; 005d4640
    ADD EAX,EDX                         ; 005d4644
    ADD EDX,EDI                         ; 005d4646
    FLD double ptr [EAX]                ; 005d4648
    LEA EBP,[EAX + 0x18]                ; 005d464a
    FSTP double ptr [EDX]               ; 005d464d
    LEA EDI,[EDX + 0x18]                ; 005d464f
    FLD double ptr [EAX + 0x8]          ; 005d4652
    FSTP double ptr [EDX + 0x8]         ; 005d4655
    FLD double ptr [EAX + 0x10]         ; 005d4658
    FSTP double ptr [EDX + 0x10]        ; 005d465b
    FLD double ptr [EBP]                ; 005d465e
    FSTP double ptr [EDI]               ; 005d4661
    FLD double ptr [EBP + 0x8]          ; 005d4663
    FSTP double ptr [EDI + 0x8]         ; 005d4666
    FLD double ptr [EBP + 0x10]         ; 005d4669
    FSTP double ptr [EDI + 0x10]        ; 005d466c
    MOV EDI,dword ptr [EAX + 0x30]      ; 005d466f
    MOV dword ptr [EDX + 0x30],EDI      ; 005d4672
    MOV EAX,dword ptr [EAX + 0x34]      ; 005d4675
    MOV dword ptr [EDX + 0x34],EAX      ; 005d4678
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005d467b
    INC EAX                             ; 005d467f
    MOV EBP,dword ptr [ESP + 0x68]      ; 005d4680
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d4684
    ADD EBP,0x38                        ; 005d4688
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005d468b
    MOV EAX,ECX                         ; 005d468f
    MOV ECX,dword ptr [ESP + 0x64]      ; 005d4691
    MOV dword ptr [ESP + 0x68],EBP      ; 005d4695
    CMP EDX,ECX                         ; 005d4699
    JC 0x005d4603                       ; 005d469b | LAB_005d4603
        ;   XREF to: 005d4603 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x64]      ; 005d46a1
        ;   Label: LAB_005d46a1
    SHL EAX,0x3                         ; 005d46a5
    MOV EDX,EAX                         ; 005d46a8
    SHL EAX,0x3                         ; 005d46aa
    SUB EAX,EDX                         ; 005d46ad
    PUSH EAX                            ; 005d46af
    MOV EDI,dword ptr [ESI + 0x4]       ; 005d46b0
    PUSH EDI                            ; 005d46b3
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005d46b4 | void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d46b9
    TEST EAX,EAX                        ; 005d46bc
    JZ 0x005d46c3                       ; 005d46be | LAB_005d46c3
        ;   XREF to: 005d46c3 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x4],EAX       ; 005d46c0
    MOV EBP,dword ptr [ESP + 0x60]      ; 005d46c3
        ;   Label: LAB_005d46c3
    MOV EAX,dword ptr [ESP + 0x64]      ; 005d46c7
    PUSH EBP                            ; 005d46cb
    MOV dword ptr [ESI],EAX             ; 005d46cc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d46ce | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d46d3
    PUSH EBX                            ; 005d46d6
    CALL crt_memory.c_free_FUN_005fe659 ; 005d46d7 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 005d46dc
    ADD ESP,0x4                         ; 005d46e1
    POP EDI                             ; 005d46e4
    ADD ESP,0x70                        ; 005d46e5
        ;   Label: LAB_005d46e5
    POP EBP                             ; 005d46e8
    POP ESI                             ; 005d46e9
    POP EBX                             ; 005d46ea
    RET                                 ; 005d46eb

