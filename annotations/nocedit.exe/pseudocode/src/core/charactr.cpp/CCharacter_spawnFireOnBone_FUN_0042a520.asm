; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton
; int              Stack[0xc]:4   target_bone_index
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; CVector3f        Stack[-0x68]:12  local_68
; CVector3f        Stack[-0x5c]:12  local_5c
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; CVector3f *      Stack[-0x44]:4  local_44
; CMatrix3x4f *    Stack[-0x40]:4  local_40
; CFlame *         Stack[-0x3c]:4  local_3c
; SFire *          Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; CDeformableModelInstance * Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 at 0042b64c
;   core_charactr.cpp_CCharacter_processFire_FUN_0042a830 at 0042acb3
;
; Referenced Globals:
;   double DOUBLE_006170c2 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a520
        ;   Label: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520
    PUSH ESI                            ; 0042a521
    PUSH EDI                            ; 0042a522
    PUSH EBP                            ; 0042a523
    SUB ESP,0x70                        ; 0042a524
    MOV EBX,dword ptr [ESP + 0x84]      ; 0042a527
    MOV EBP,dword ptr [ESP + 0x8c]      ; 0042a52e
    TEST EBP,EBP                        ; 0042a535
    JL 0x0042a643                       ; 0042a537
        ;   XREF to: 0042a643 (CONDITIONAL_JUMP)  ; LAB_0042a643
    MOV ECX,0xffffffff                  ; 0042a53d
    LEA EAX,[EBX + 0x1b0]               ; 0042a542
    XOR EDX,EDX                         ; 0042a548
    XOR EDI,EDI                         ; 0042a54a
    MOV dword ptr [ESP + 0x5c],EDX      ; 0042a54c
    MOV EDX,dword ptr [ESP + 0x88]      ; 0042a550
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042a557
    MOV ESI,EAX                         ; 0042a55b
    CMP dword ptr [EDX + 0x28558],0x0   ; 0042a55d
    JLE 0x0042a588                      ; 0042a564
        ;   XREF to: 0042a588 (CONDITIONAL_JUMP)  ; LAB_0042a588
    CMP EBP,dword ptr [EDX + 0x2857c]   ; 0042a566
        ;   Label: LAB_0042a566
    JZ 0x0042a64b                       ; 0042a56c
        ;   XREF to: 0042a64b (CONDITIONAL_JUMP)  ; LAB_0042a64b
    MOV EAX,dword ptr [ESP + 0x88]      ; 0042a572
        ;   Label: LAB_0042a572
    ADD EDX,0x24                        ; 0042a579
    INC EDI                             ; 0042a57c
    ADD ESI,0xc                         ; 0042a57d
    CMP EDI,dword ptr [EAX + 0x28558]   ; 0042a580
    JL 0x0042a566                       ; 0042a586
        ;   XREF to: 0042a566 (CONDITIONAL_JUMP)  ; LAB_0042a566
    CMP ECX,-0x1                        ; 0042a588
        ;   Label: LAB_0042a588
    JZ 0x0042a643                       ; 0042a58b
        ;   XREF to: 0042a643 (CONDITIONAL_JUMP)  ; LAB_0042a643
    LEA EAX,[EBP*0x4 + 0x0]             ; 0042a591
    SUB EAX,EBP                         ; 0042a598
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0042a59a
    SHL EAX,0x2                         ; 0042a59e
    ADD EDX,EAX                         ; 0042a5a1
    LEA EAX,[ECX*0x4 + 0x0]             ; 0042a5a3
    SUB EAX,ECX                         ; 0042a5aa
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0042a5ac
    SHL EAX,0x2                         ; 0042a5b0
    ADD EAX,ECX                         ; 0042a5b3
    FLD float ptr [EAX]                 ; 0042a5b5
    FSUB float ptr [EDX]                ; 0042a5b7
    FSTP float ptr [ESP + 0xc]          ; 0042a5b9
    FLD float ptr [EAX + 0x4]           ; 0042a5bd
    FSUB float ptr [EDX + 0x4]          ; 0042a5c0
    FST float ptr [ESP + 0x10]          ; 0042a5c3
    FMUL float ptr [ESP + 0x10]         ; 0042a5c7
    FLD float ptr [ESP + 0xc]           ; 0042a5cb
    FMUL ST0                            ; 0042a5cf
    FLD float ptr [EAX + 0x8]           ; 0042a5d1
    FSUB float ptr [EDX + 0x8]          ; 0042a5d4
    FXCH                                ; 0042a5d7
    FADDP ST2,ST0                       ; 0042a5d9
    FST float ptr [ESP + 0x14]          ; 0042a5db
    FMUL float ptr [ESP + 0x14]         ; 0042a5df
    FADDP                               ; 0042a5e3
    FSQRT                               ; 0042a5e5
    FMUL double ptr [0x006170c2]        ; 0042a5e7 | DOUBLE_006170c2
    CALL crt_math.c_round_FUN_005fe6b0  ; 0042a5ed
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x68]        ; 0042a5f2
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042a5f6
    INC EAX                             ; 0042a5fa
    XOR EDI,EDI                         ; 0042a5fb
    MOV dword ptr [ESP + 0x54],EAX      ; 0042a5fd
    TEST EAX,EAX                        ; 0042a601
    JLE 0x0042a643                      ; 0042a603
        ;   XREF to: 0042a643 (CONDITIONAL_JUMP)  ; LAB_0042a643
    LEA EAX,[EBX + 0xfd8]               ; 0042a605
    MOV dword ptr [ESP + 0x40],EAX      ; 0042a60b
    LEA EAX,[EBX + 0x33cc]              ; 0042a60f
    MOV dword ptr [ESP + 0x44],EAX      ; 0042a615
    LEA EAX,[EBX + 0x2f1c]              ; 0042a619
    MOV dword ptr [ESP + 0x48],EAX      ; 0042a61f
    LEA EAX,[EBX + 0x158]               ; 0042a623
    MOV dword ptr [ESP + 0x50],EAX      ; 0042a629
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042a62d
    INC EAX                             ; 0042a631
    MOV dword ptr [ESP + 0x4c],EAX      ; 0042a632
    CMP dword ptr [EBX + 0x2f10],0x32   ; 0042a636
        ;   Label: LAB_0042a636
    JL 0x0042a67f                       ; 0042a63d
        ;   XREF to: 0042a67f (CONDITIONAL_JUMP)  ; LAB_0042a67f
    ADD ESP,0x70                        ; 0042a643
        ;   Label: LAB_0042a643
    POP EBP                             ; 0042a646
    POP EDI                             ; 0042a647
    POP ESI                             ; 0042a648
    POP EBX                             ; 0042a649
    RET                                 ; 0042a64a
    FLD float ptr [ESI + 0x4]           ; 0042a64b
        ;   Label: LAB_0042a64b
    FMUL ST0                            ; 0042a64e
    FLD float ptr [ESI]                 ; 0042a650
    FMUL ST0                            ; 0042a652
    FADDP                               ; 0042a654
    FLD float ptr [ESI + 0x8]           ; 0042a656
    FMUL ST0                            ; 0042a659
    FADDP                               ; 0042a65b
    FSQRT                               ; 0042a65d
    FST float ptr [ESP + 0x60]          ; 0042a65f
    FCOMP float ptr [ESP + 0x5c]        ; 0042a663
    FNSTSW AX                           ; 0042a667
    SAHF                                ; 0042a669
    JBE 0x0042a572                      ; 0042a66a
        ;   XREF to: 0042a572 (CONDITIONAL_JUMP)  ; LAB_0042a572
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042a670
    MOV ECX,EDI                         ; 0042a674
    MOV dword ptr [ESP + 0x5c],EAX      ; 0042a676
    JMP 0x0042a572                      ; 0042a67a
        ;   XREF to: 0042a572 (UNCONDITIONAL_JUMP)  ; LAB_0042a572
    MOV EDX,dword ptr [EBX + 0x2f10]    ; 0042a67f
        ;   Label: LAB_0042a67f
    IMUL ESI,EDX,0x18                   ; 0042a685
    LEA EAX,[EDX + 0x1]                 ; 0042a688
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042a68b
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042a68f
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042a693
    PUSH EDX                            ; 0042a69d
    ADD ESI,ECX                         ; 0042a69e
    MOV dword ptr [EBX + 0x2f10],EAX    ; 0042a6a0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042a6a6
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a6ab
    PUSH EBP                            ; 0042a6ae
    PUSH EAX                            ; 0042a6af
    CALL core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0 ; 0042a6b0
        ;   XREF to: 0059c2d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0(CDeformableModel * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0042a6b5
    MOV dword ptr [ESI],EAX             ; 0042a6b8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042a6ba
    MOV dword ptr [ESP + 0x68],EAX      ; 0042a6be
    LEA EAX,[EDI + 0x1]                 ; 0042a6c2
    MOV dword ptr [ESI + 0x4],EBP       ; 0042a6c5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042a6c8
    FLD float ptr [ESP + 0xc]           ; 0042a6cc
    FILD dword ptr [ESP + 0x6c]         ; 0042a6d0
    FSTP float ptr [ESP + 0x64]         ; 0042a6d4
    FMUL float ptr [ESP + 0x64]         ; 0042a6d8
    FLD float ptr [ESP + 0x10]          ; 0042a6dc
    FMUL float ptr [ESP + 0x64]         ; 0042a6e0
    FLD float ptr [ESP + 0x14]          ; 0042a6e4
    FMUL float ptr [ESP + 0x64]         ; 0042a6e8
    FLD1                                ; 0042a6ec
    FILD dword ptr [ESP + 0x68]         ; 0042a6ee
    FSTP float ptr [ESP + 0x58]         ; 0042a6f2
    FXCH ST3                            ; 0042a6f6
    FST float ptr [ESP]                 ; 0042a6f8
    FXCH ST3                            ; 0042a6fb
    FDIV float ptr [ESP + 0x58]         ; 0042a6fd
    FXCH ST3                            ; 0042a701
    FMUL ST3                            ; 0042a703
    FXCH ST2                            ; 0042a705
    FST float ptr [ESP + 0x4]           ; 0042a707
    FMUL ST3                            ; 0042a70b
    FXCH                                ; 0042a70d
    FST float ptr [ESP + 0x8]           ; 0042a70f
    FMULP ST3                           ; 0042a713
    LEA EDX,[ESI + 0x8]                 ; 0042a715
    LEA EAX,[ESP + 0x30]                ; 0042a718
    FXCH                                ; 0042a71c
    FSTP float ptr [ESP + 0x30]         ; 0042a71e
    FSTP float ptr [ESP + 0x34]         ; 0042a722
    FSTP float ptr [ESP + 0x38]         ; 0042a726
    CMP EDX,EAX                         ; 0042a72a
    JZ 0x0042a742                       ; 0042a72c
        ;   XREF to: 0042a742 (CONDITIONAL_JUMP)  ; LAB_0042a742
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042a72e
    MOV dword ptr [EDX],EAX             ; 0042a732
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042a734
    MOV dword ptr [EDX + 0x4],EAX       ; 0042a738
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042a73b
    MOV dword ptr [EDX + 0x8],EAX       ; 0042a73f
    IMUL EAX,dword ptr [ESI + 0x4],0x30 ; 0042a742
        ;   Label: LAB_0042a742
    ADD EAX,dword ptr [ESP + 0x40]      ; 0042a746
    PUSH EAX                            ; 0042a74a
    LEA EAX,[ESI + 0x8]                 ; 0042a74b
    PUSH EAX                            ; 0042a74e
    LEA EAX,[ESP + 0x20]                ; 0042a74f
    PUSH EAX                            ; 0042a753
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042a754
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042a759
    PUSH EAX                            ; 0042a75c
    LEA EAX,[ESP + 0x28]                ; 0042a75d
    PUSH EAX                            ; 0042a761
    PUSH EBX                            ; 0042a762
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042a763
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [EBX + 0x2f10]    ; 0042a768
    DEC EDX                             ; 0042a76e
    IMUL EDX,EDX,0x2a4                  ; 0042a76f
    ADD ESP,0xc                         ; 0042a775
    ADD EDX,dword ptr [ESP + 0x44]      ; 0042a778
    MOV ECX,dword ptr [EAX]             ; 0042a77c
    MOV dword ptr [EDX + 0x20],ECX      ; 0042a77e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042a781
    MOV dword ptr [EDX + 0x24],ECX      ; 0042a784
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042a787
    MOV dword ptr [EDX + 0x28],ECX      ; 0042a78a
    MOV EAX,dword ptr [EBX + 0x2f10]    ; 0042a78d
    DEC EAX                             ; 0042a793
    IMUL EAX,EAX,0x2a4                  ; 0042a794
    MOV dword ptr [EBX + EAX*0x1 + 0x3578],0x0 ; 0042a79a
    MOV dword ptr [ESI + 0x14],0x3f000000 ; 0042a7a5
    MOV EAX,dword ptr [EBX + 0x2f10]    ; 0042a7ac
    DEC EAX                             ; 0042a7b2
    IMUL EAX,EAX,0x2a4                  ; 0042a7b3
    FLD double ptr [0x006170c2]         ; 0042a7b9 | DOUBLE_006170c2
    FLD float ptr [ESI + 0x14]          ; 0042a7bf
    FMUL ST1                            ; 0042a7c2
    FSTP float ptr [EBX + EAX*0x1 + 0x3524] ; 0042a7c4
    MOV EAX,dword ptr [EBX + 0x2f10]    ; 0042a7cb
    DEC EAX                             ; 0042a7d1
    IMUL EAX,EAX,0x2a4                  ; 0042a7d2
    MOV EDX,dword ptr [ESI + 0x14]      ; 0042a7d8
    MOV dword ptr [EBX + EAX*0x1 + 0x3528],EDX ; 0042a7db
    MOV EAX,dword ptr [EBX + 0x2f10]    ; 0042a7e2
    DEC EAX                             ; 0042a7e8
    IMUL EAX,EAX,0x2a4                  ; 0042a7e9
    FMUL float ptr [ESI + 0x14]         ; 0042a7ef
    FSTP float ptr [EBX + EAX*0x1 + 0x352c] ; 0042a7f2
    MOV EAX,dword ptr [EBX + 0x2f10]    ; 0042a7f9
    DEC EAX                             ; 0042a7ff
    IMUL EAX,EAX,0x2a4                  ; 0042a800
    INC EDI                             ; 0042a806
    MOV EDX,dword ptr [EBX + 0x2f14]    ; 0042a807
    MOV ESI,dword ptr [ESP + 0x54]      ; 0042a80d
    MOV dword ptr [EBX + EAX*0x1 + 0x3574],EDX ; 0042a811
    CMP EDI,ESI                         ; 0042a818
    JL 0x0042a636                       ; 0042a81a
        ;   XREF to: 0042a636 (CONDITIONAL_JUMP)  ; LAB_0042a636
    ADD ESP,0x70                        ; 0042a820
    POP EBP                             ; 0042a823
    POP EDI                             ; 0042a824
    POP ESI                             ; 0042a825
    POP EBX                             ; 0042a826
    RET                                 ; 0042a827

