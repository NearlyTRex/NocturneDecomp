; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_testOBBIntersection_FUN_005763a0(SVDBox *obb_a,SVDBox *obb_b)
;
; Parameters:
; SVDBox *         Stack[0x4]:4   obb_a
; SVDBox *         Stack[0x8]:4   obb_b
; Local Variables:
; CVector3f[8]     Stack[-0x128]:96  local_128
; CBoundingBox3D   Stack[-0xc8]:24  local_c8
; CVector3f        Stack[-0xb0]:12  local_b0
; CVector3f        Stack[-0xa4]:12  local_a4
; CVector3f        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; CBoundingBox3D   Stack[-0x74]:24  local_74
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; double           Stack[-0x44]:8  local_44
; double           Stack[-0x3c]:8  local_3c
; double           Stack[-0x34]:8  local_34
; float            Stack[-0x2c]:4  local_2c
; CMatrix3x3f *    Stack[-0x28]:4  local_28
; CMatrix3x3f *    Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710 at 00576800
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005763a0
        ;   Label: core_setdir.cpp_testOBBIntersection_FUN_005763a0
    PUSH ESI                            ; 005763a1
    PUSH EDI                            ; 005763a2
    PUSH EBP                            ; 005763a3
    MOV EBP,ESP                         ; 005763a4
    SUB ESP,0x118                       ; 005763a6
    SUB EBP,0x7a                        ; 005763ac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005763af
    MOV EAX,dword ptr [EBP + 0x92]      ; 005763b5
    LEA EDX,[EBP + -0x3e]               ; 005763bb
    FLD float ptr [EAX + 0xc]           ; 005763be
    FCHS                                ; 005763c1
    FSTP float ptr [EBP + 0x16]         ; 005763c3
    FLD float ptr [EAX + 0x10]          ; 005763c6
    FCHS                                ; 005763c9
    FSTP float ptr [EBP + 0x1a]         ; 005763cb
    FLD float ptr [EAX + 0x14]          ; 005763ce
    FCHS                                ; 005763d1
    LEA EAX,[EBP + 0x16]                ; 005763d3
    FSTP float ptr [EBP + 0x1e]         ; 005763d6
    CMP EDX,EAX                         ; 005763d9
    JNZ 0x005766a7                      ; 005763db
        ;   XREF to: 005766a7 (CONDITIONAL_JUMP)  ; LAB_005766a7
    MOV EDX,dword ptr [EBP + 0x92]      ; 005763e1
        ;   Label: LAB_005763e1
    LEA EAX,[EBP + -0x32]               ; 005763e7
    ADD EDX,0xc                         ; 005763ea
    CMP EAX,EDX                         ; 005763ed
    JNZ 0x005766be                      ; 005763ef
        ;   XREF to: 005766be (CONDITIONAL_JUMP)  ; LAB_005766be
    PUSH 0x6598c0                       ; 005763f5 | g_CVectorTypeInfo
        ;   Label: LAB_005763f5
    PUSH 0x8                            ; 005763fa
    LEA EAX,[EBP + 0xffffff62]          ; 005763fc
    PUSH EAX                            ; 00576402
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 00576403
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00576408
    ADD EAX,0x18                        ; 0057640e
    XOR ESI,ESI                         ; 00576411
    MOV dword ptr [EBP + 0x62],EAX      ; 00576413
    LEA EAX,[EBX + 0x18]                ; 00576416
    ADD ESP,0xc                         ; 00576419
    MOV dword ptr [EBP + 0x66],EAX      ; 0057641c
    IMUL EDI,ESI,0xc                    ; 0057641f
        ;   Label: LAB_0057641f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00576422
    MOV dword ptr [EBP + 0x6a],EAX      ; 00576425
    LEA EAX,[EBP + 0xffffff62]          ; 00576428
    ADD EDI,EAX                         ; 0057642e
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00576430
        ;   Label: LAB_00576430
    MOV dword ptr [EBP + 0x22],EAX      ; 00576433
    TEST SI,0x2                         ; 00576436
    JZ 0x005766ec                       ; 0057643b
        ;   XREF to: 005766ec (CONDITIONAL_JUMP)  ; LAB_005766ec
    FLD float ptr [EBX + 0x10]          ; 00576441
    FCHS                                ; 00576444
    FSTP float ptr [EBP + 0x6e]         ; 00576446
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00576449
        ;   Label: LAB_00576449
    MOV dword ptr [EBP + 0x26],EAX      ; 0057644c
    TEST SI,0x4                         ; 0057644f
    JZ 0x005766f7                       ; 00576454
        ;   XREF to: 005766f7 (CONDITIONAL_JUMP)  ; LAB_005766f7
    FLD float ptr [EBX + 0x14]          ; 0057645a
    FCHS                                ; 0057645d
    FSTP float ptr [EBP + 0x72]         ; 0057645f
    MOV EAX,dword ptr [EBP + 0x72]      ; 00576462
        ;   Label: LAB_00576462
    MOV dword ptr [EBP + 0x2a],EAX      ; 00576465
    LEA EAX,[EBP + 0x22]                ; 00576468
    PUSH EAX                            ; 0057646b
    LEA EAX,[EBP + 0x2e]                ; 0057646c
    PUSH EAX                            ; 0057646f
    MOV EDX,dword ptr [EBP + 0x66]      ; 00576470
    PUSH EDX                            ; 00576473
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00576474
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 00576479
    FADD float ptr [EBX]                ; 0057647b
    LEA EDX,[EBP + 0x22]                ; 0057647d
    FSTP float ptr [EBP + -0x2]         ; 00576480
    FLD float ptr [EAX + 0x4]           ; 00576483
    FADD float ptr [EBX + 0x4]          ; 00576486
    ADD ESP,0xc                         ; 00576489
    FSTP float ptr [EBP + 0x2]          ; 0057648c
    FLD float ptr [EAX + 0x8]           ; 0057648f
    FADD float ptr [EBX + 0x8]          ; 00576492
    LEA EAX,[EBP + -0x2]                ; 00576495
    FSTP float ptr [EBP + 0x6]          ; 00576498
    CMP EDX,EAX                         ; 0057649b
    JZ 0x005764b1                       ; 0057649d
        ;   XREF to: 005764b1 (CONDITIONAL_JUMP)  ; LAB_005764b1
    MOV EAX,dword ptr [EBP + -0x2]      ; 0057649f
    MOV dword ptr [EBP + 0x22],EAX      ; 005764a2
    MOV EAX,dword ptr [EBP + 0x2]       ; 005764a5
    MOV dword ptr [EBP + 0x26],EAX      ; 005764a8
    MOV EAX,dword ptr [EBP + 0x6]       ; 005764ab
    MOV dword ptr [EBP + 0x2a],EAX      ; 005764ae
    MOV EAX,dword ptr [EBP + 0x92]      ; 005764b1
        ;   Label: LAB_005764b1
    FLD float ptr [EBP + 0x22]          ; 005764b7
    FSUB float ptr [EAX]                ; 005764ba
    FLD float ptr [EBP + 0x26]          ; 005764bc
    FXCH                                ; 005764bf
    FSTP float ptr [EBP + 0xa]          ; 005764c1
    FSUB float ptr [EAX + 0x4]          ; 005764c4
    FLD float ptr [EBP + 0x2a]          ; 005764c7
    FXCH                                ; 005764ca
    FSTP float ptr [EBP + 0xe]          ; 005764cc
    FSUB float ptr [EAX + 0x8]          ; 005764cf
    LEA EAX,[EBP + 0xa]                 ; 005764d2
    PUSH EAX                            ; 005764d5
    LEA EAX,[EBP + -0xe]                ; 005764d6
    PUSH EAX                            ; 005764d9
    MOV ECX,dword ptr [EBP + 0x62]      ; 005764da
    PUSH ECX                            ; 005764dd
    FSTP float ptr [EBP + 0x12]         ; 005764de
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 005764e1
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 005764e6
    LEA EAX,[EBP + 0x22]                ; 005764e8
    ADD ESP,0xc                         ; 005764eb
    CMP EAX,EDX                         ; 005764ee
    JZ 0x00576503                       ; 005764f0
        ;   XREF to: 00576503 (CONDITIONAL_JUMP)  ; LAB_00576503
    MOV EAX,dword ptr [EDX]             ; 005764f2
    MOV dword ptr [EBP + 0x22],EAX      ; 005764f4
    MOV EAX,dword ptr [EDX + 0x4]       ; 005764f7
    MOV dword ptr [EBP + 0x26],EAX      ; 005764fa
    MOV EAX,dword ptr [EDX + 0x8]       ; 005764fd
    MOV dword ptr [EBP + 0x2a],EAX      ; 00576500
    FLD float ptr [EBP + -0x3e]         ; 00576503
        ;   Label: LAB_00576503
    FCOMP float ptr [EBP + 0x22]        ; 00576506
    FNSTSW AX                           ; 00576509
    SAHF                                ; 0057650b
    JA 0x00576549                       ; 0057650c
        ;   XREF to: 00576549 (CONDITIONAL_JUMP)  ; LAB_00576549
    FLD float ptr [EBP + -0x3a]         ; 0057650e
    FCOMP float ptr [EBP + 0x26]        ; 00576511
    FNSTSW AX                           ; 00576514
    SAHF                                ; 00576516
    JA 0x00576549                       ; 00576517
        ;   XREF to: 00576549 (CONDITIONAL_JUMP)  ; LAB_00576549
    FLD float ptr [EBP + -0x36]         ; 00576519
    FCOMP float ptr [EBP + 0x2a]        ; 0057651c
    FNSTSW AX                           ; 0057651f
    SAHF                                ; 00576521
    JA 0x00576549                       ; 00576522
        ;   XREF to: 00576549 (CONDITIONAL_JUMP)  ; LAB_00576549
    FLD float ptr [EBP + -0x32]         ; 00576524
    FCOMP float ptr [EBP + 0x22]        ; 00576527
    FNSTSW AX                           ; 0057652a
    SAHF                                ; 0057652c
    JC 0x00576549                       ; 0057652d
        ;   XREF to: 00576549 (CONDITIONAL_JUMP)  ; LAB_00576549
    FLD float ptr [EBP + -0x2e]         ; 0057652f
    FCOMP float ptr [EBP + 0x26]        ; 00576532
    FNSTSW AX                           ; 00576535
    SAHF                                ; 00576537
    JC 0x00576549                       ; 00576538
        ;   XREF to: 00576549 (CONDITIONAL_JUMP)  ; LAB_00576549
    FLD float ptr [EBP + -0x2a]         ; 0057653a
    FCOMP float ptr [EBP + 0x2a]        ; 0057653d
    FNSTSW AX                           ; 00576540
    SAHF                                ; 00576542
    JNC 0x00576702                      ; 00576543
        ;   XREF to: 00576702 (CONDITIONAL_JUMP)  ; LAB_00576702
    LEA EAX,[EBP + 0x22]                ; 00576549
        ;   Label: LAB_00576549
    CMP EDI,EAX                         ; 0057654c
    JZ 0x00576561                       ; 0057654e
        ;   XREF to: 00576561 (CONDITIONAL_JUMP)  ; LAB_00576561
    MOV EAX,dword ptr [EBP + 0x22]      ; 00576550
    MOV dword ptr [EDI],EAX             ; 00576553
    MOV EAX,dword ptr [EBP + 0x26]      ; 00576555
    MOV dword ptr [EDI + 0x4],EAX       ; 00576558
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0057655b
    MOV dword ptr [EDI + 0x8],EAX       ; 0057655e
    INC ESI                             ; 00576561
        ;   Label: LAB_00576561
    ADD EDI,0xc                         ; 00576562
    CMP ESI,0x8                         ; 00576565
    JL 0x005766d4                       ; 00576568
        ;   XREF to: 005766d4 (CONDITIONAL_JUMP)  ; LAB_005766d4
    LEA ESI,[EBP + 0xffffff62]          ; 0057656e
    XOR EBX,EBX                         ; 00576574
    MOV EDX,EBX                         ; 00576576
        ;   Label: LAB_00576576
    XOR DL,0x1                          ; 00576578
    IMUL EDX,EDX,0xc                    ; 0057657b
    LEA EAX,[EBP + 0xffffff62]          ; 0057657e
    FLD float ptr [EDX + EAX*0x1]       ; 00576584
    FSUB float ptr [ESI]                ; 00576587
    FSTP float ptr [EBP + 0x3a]         ; 00576589
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0057658c
    FSUB float ptr [ESI + 0x4]          ; 00576590
    PUSH 0x0                            ; 00576593
    FSTP float ptr [EBP + 0x3e]         ; 00576595
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 00576598
    LEA EAX,[EBP + 0x3a]                ; 0057659c
    PUSH EAX                            ; 0057659f
    LEA EAX,[EBP + -0x3e]               ; 005765a0
    PUSH ESI                            ; 005765a3
    FSUB float ptr [ESI + 0x8]          ; 005765a4
    PUSH EAX                            ; 005765a7
    FSTP float ptr [EBP + 0x42]         ; 005765a8
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 005765ab
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    FLDZ                                ; 005765b0
    MOV dword ptr [EBP + 0x76],EAX      ; 005765b2
    ADD ESP,0x10                        ; 005765b5
    MOV EAX,dword ptr [EBP + 0x76]      ; 005765b8
    MOV dword ptr [EBP + 0x5e],EAX      ; 005765bb
    FLD float ptr [EBP + 0x5e]          ; 005765be
    FSTP double ptr [EBP + 0x46]        ; 005765c1
    FCOMP double ptr [EBP + 0x46]       ; 005765c4
    FNSTSW AX                           ; 005765c7
    SAHF                                ; 005765c9
    JA 0x005765da                       ; 005765ca
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    FLD1                                ; 005765cc
    FCOMP double ptr [EBP + 0x46]       ; 005765ce
    FNSTSW AX                           ; 005765d1
    SAHF                                ; 005765d3
    JNC 0x00576702                      ; 005765d4
        ;   XREF to: 00576702 (CONDITIONAL_JUMP)  ; LAB_00576702
    MOV EAX,EBX                         ; 005765da
        ;   Label: LAB_005765da
    XOR AL,0x2                          ; 005765dc
    IMUL EDX,EAX,0xc                    ; 005765de
    LEA EAX,[EBP + 0xffffff62]          ; 005765e1
    FLD float ptr [EDX + EAX*0x1]       ; 005765e7
    FSUB float ptr [ESI]                ; 005765ea
    FSTP float ptr [EBP + -0x1a]        ; 005765ec
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 005765ef
    FSUB float ptr [ESI + 0x4]          ; 005765f3
    PUSH 0x0                            ; 005765f6
    FSTP float ptr [EBP + -0x16]        ; 005765f8
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 005765fb
    LEA EAX,[EBP + -0x1a]               ; 005765ff
    PUSH EAX                            ; 00576602
    LEA EAX,[EBP + -0x3e]               ; 00576603
    PUSH ESI                            ; 00576606
    FSUB float ptr [ESI + 0x8]          ; 00576607
    PUSH EAX                            ; 0057660a
    FSTP float ptr [EBP + -0x12]        ; 0057660b
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 0057660e
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    FLDZ                                ; 00576613
    MOV dword ptr [EBP + 0x76],EAX      ; 00576615
    ADD ESP,0x10                        ; 00576618
    FLD float ptr [EBP + 0x76]          ; 0057661b
    FSTP double ptr [EBP + 0x4e]        ; 0057661e
    FCOMP double ptr [EBP + 0x4e]       ; 00576621
    FNSTSW AX                           ; 00576624
    SAHF                                ; 00576626
    JA 0x00576637                       ; 00576627
        ;   XREF to: 00576637 (CONDITIONAL_JUMP)  ; LAB_00576637
    FLD1                                ; 00576629
    FCOMP double ptr [EBP + 0x4e]       ; 0057662b
    FNSTSW AX                           ; 0057662e
    SAHF                                ; 00576630
    JNC 0x00576702                      ; 00576631
        ;   XREF to: 00576702 (CONDITIONAL_JUMP)  ; LAB_00576702
    MOV EAX,EBX                         ; 00576637
        ;   Label: LAB_00576637
    XOR AL,0x4                          ; 00576639
    IMUL EAX,EAX,0xc                    ; 0057663b
    LEA EDX,[EBP + 0xffffff62]          ; 0057663e
    FLD float ptr [EDX + EAX*0x1]       ; 00576644
    FSUB float ptr [ESI]                ; 00576647
    FSTP float ptr [EBP + -0x26]        ; 00576649
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0057664c
    FSUB float ptr [ESI + 0x4]          ; 00576650
    PUSH 0x0                            ; 00576653
    FSTP float ptr [EBP + -0x22]        ; 00576655
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 00576658
    LEA EAX,[EBP + -0x26]               ; 0057665c
    PUSH EAX                            ; 0057665f
    LEA EAX,[EBP + -0x3e]               ; 00576660
    PUSH ESI                            ; 00576663
    FSUB float ptr [ESI + 0x8]          ; 00576664
    PUSH EAX                            ; 00576667
    FSTP float ptr [EBP + -0x1e]        ; 00576668
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 0057666b
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    FLDZ                                ; 00576670
    MOV dword ptr [EBP + 0x76],EAX      ; 00576672
    ADD ESP,0x10                        ; 00576675
    FLD float ptr [EBP + 0x76]          ; 00576678
    FSTP double ptr [EBP + 0x56]        ; 0057667b
    FCOMP double ptr [EBP + 0x56]       ; 0057667e
    FNSTSW AX                           ; 00576681
    SAHF                                ; 00576683
    JA 0x00576690                       ; 00576684
        ;   XREF to: 00576690 (CONDITIONAL_JUMP)  ; LAB_00576690
    FLD1                                ; 00576686
    FCOMP double ptr [EBP + 0x56]       ; 00576688
    FNSTSW AX                           ; 0057668b
    SAHF                                ; 0057668d
    JNC 0x00576702                      ; 0057668e
        ;   XREF to: 00576702 (CONDITIONAL_JUMP)  ; LAB_00576702
    INC EBX                             ; 00576690
        ;   Label: LAB_00576690
    ADD ESI,0xc                         ; 00576691
    CMP EBX,0x8                         ; 00576694
    JL 0x00576576                       ; 00576697
        ;   XREF to: 00576576 (CONDITIONAL_JUMP)  ; LAB_00576576
    XOR EAX,EAX                         ; 0057669d
    LEA ESP,[EBP + 0x7a]                ; 0057669f
    POP EBP                             ; 005766a2
    POP EDI                             ; 005766a3
    POP ESI                             ; 005766a4
    POP EBX                             ; 005766a5
    RET                                 ; 005766a6
    MOV EAX,dword ptr [EBP + 0x16]      ; 005766a7
        ;   Label: LAB_005766a7
    MOV dword ptr [EBP + -0x3e],EAX     ; 005766aa
    MOV EAX,dword ptr [EBP + 0x1a]      ; 005766ad
    MOV dword ptr [EBP + -0x3a],EAX     ; 005766b0
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005766b3
    MOV dword ptr [EBP + -0x36],EAX     ; 005766b6
    JMP 0x005763e1                      ; 005766b9
        ;   XREF to: 005763e1 (UNCONDITIONAL_JUMP)  ; LAB_005763e1
    MOV EAX,dword ptr [EDX]             ; 005766be
        ;   Label: LAB_005766be
    MOV dword ptr [EBP + -0x32],EAX     ; 005766c0
    MOV EAX,dword ptr [EDX + 0x4]       ; 005766c3
    MOV dword ptr [EBP + -0x2e],EAX     ; 005766c6
    MOV EAX,dword ptr [EDX + 0x8]       ; 005766c9
    MOV dword ptr [EBP + -0x2a],EAX     ; 005766cc
    JMP 0x005763f5                      ; 005766cf
        ;   XREF to: 005763f5 (UNCONDITIONAL_JUMP)  ; LAB_005763f5
    TEST SI,0x1                         ; 005766d4
        ;   Label: LAB_005766d4
    JZ 0x0057641f                       ; 005766d9
        ;   XREF to: 0057641f (CONDITIONAL_JUMP)  ; LAB_0057641f
    FLD float ptr [EBX + 0xc]           ; 005766df
    FCHS                                ; 005766e2
    FSTP float ptr [EBP + 0x6a]         ; 005766e4
    JMP 0x00576430                      ; 005766e7
        ;   XREF to: 00576430 (UNCONDITIONAL_JUMP)  ; LAB_00576430
    MOV EAX,dword ptr [EBX + 0x10]      ; 005766ec
        ;   Label: LAB_005766ec
    MOV dword ptr [EBP + 0x6e],EAX      ; 005766ef
    JMP 0x00576449                      ; 005766f2
        ;   XREF to: 00576449 (UNCONDITIONAL_JUMP)  ; LAB_00576449
    MOV EAX,dword ptr [EBX + 0x14]      ; 005766f7
        ;   Label: LAB_005766f7
    MOV dword ptr [EBP + 0x72],EAX      ; 005766fa
    JMP 0x00576462                      ; 005766fd
        ;   XREF to: 00576462 (UNCONDITIONAL_JUMP)  ; LAB_00576462
    MOV EAX,0x1                         ; 00576702
        ;   Label: LAB_00576702
    LEA ESP,[EBP + 0x7a]                ; 00576707
    POP EBP                             ; 0057670a
    POP EDI                             ; 0057670b
    POP ESI                             ; 0057670c
    POP EBX                             ; 0057670d
    RET                                 ; 0057670e

