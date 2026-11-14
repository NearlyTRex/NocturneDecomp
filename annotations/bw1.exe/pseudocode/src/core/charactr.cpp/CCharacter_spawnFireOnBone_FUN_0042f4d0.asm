; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton
; int              Stack[0xc]:4   target_bone_index
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 at 0043093c
;   core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0 at 0042fdb7
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510 at 0042c631
;
; Referenced Globals:
;   undefined4 DAT_005d59b7
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00565810
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_xform.cpp_FUN_005b5080
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f4d0
        ;   Label: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0
    PUSH ESI                            ; 0042f4d1
    PUSH EDI                            ; 0042f4d2
    PUSH EBP                            ; 0042f4d3
    MOV EBP,ESP                         ; 0042f4d4
    SUB ESP,0xb8                        ; 0042f4d6
    AND ESP,0xfffffff8                  ; 0042f4dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042f4df
    CMP dword ptr [EBP + 0x1c],0x0      ; 0042f4e2
    JL 0x0042f62e                       ; 0042f4e6
        ;   XREF to: 0042f62e (CONDITIONAL_JUMP)  ; LAB_0042f62e
    MOV EDX,dword ptr [EBP + 0x18]      ; 0042f4ec
    MOV ECX,0xffffffff                  ; 0042f4ef
    LEA EAX,[EBX + 0x1b0]               ; 0042f4f4
    XOR ESI,ESI                         ; 0042f4fa
    XOR EDI,EDI                         ; 0042f4fc
    MOV dword ptr [ESP + 0x9c],ESI      ; 0042f4fe
    MOV dword ptr [ESP + 0x7c],EAX      ; 0042f505
    MOV ESI,EAX                         ; 0042f509
    CMP dword ptr [EDX + 0x1de78],0x0   ; 0042f50b
    JLE 0x0042f535                      ; 0042f512
        ;   XREF to: 0042f535 (CONDITIONAL_JUMP)  ; LAB_0042f535
    MOV EAX,dword ptr [EDX + 0x1de9c]   ; 0042f514
        ;   Label: LAB_0042f514
    CMP EAX,dword ptr [EBP + 0x1c]      ; 0042f51a
    JZ 0x0042f635                       ; 0042f51d
        ;   XREF to: 0042f635 (CONDITIONAL_JUMP)  ; LAB_0042f635
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042f523
        ;   Label: LAB_0042f523
    ADD EDX,0x24                        ; 0042f526
    INC EDI                             ; 0042f529
    ADD ESI,0xc                         ; 0042f52a
    CMP EDI,dword ptr [EAX + 0x1de78]   ; 0042f52d
    JL 0x0042f514                       ; 0042f533
        ;   XREF to: 0042f514 (CONDITIONAL_JUMP)  ; LAB_0042f514
    CMP ECX,-0x1                        ; 0042f535
        ;   Label: LAB_0042f535
    JZ 0x0042f62e                       ; 0042f538
        ;   XREF to: 0042f62e (CONDITIONAL_JUMP)  ; LAB_0042f62e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0042f53e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042f541
    SUB EAX,EDX                         ; 0042f548
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0042f54a
    SHL EAX,0x2                         ; 0042f54e
    ADD EDX,EAX                         ; 0042f551
    LEA EAX,[ECX*0x4 + 0x0]             ; 0042f553
    SUB EAX,ECX                         ; 0042f55a
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0042f55c
    SHL EAX,0x2                         ; 0042f560
    ADD EAX,EDI                         ; 0042f563
    LEA ESI,[ESP + 0x18]                ; 0042f565
    FLD float ptr [EAX]                 ; 0042f569
    FLD float ptr [EAX + 0x4]           ; 0042f56b
    FLD float ptr [EAX + 0x8]           ; 0042f56e
    LEA EDI,[ESP + 0x48]                ; 0042f571
    FXCH ST2                            ; 0042f575
    FSUB float ptr [EDX]                ; 0042f577
    FXCH                                ; 0042f579
    FSUB float ptr [EDX + 0x4]          ; 0042f57b
    FXCH ST2                            ; 0042f57e
    FSUB float ptr [EDX + 0x8]          ; 0042f580
    FXCH                                ; 0042f583
    FSTP float ptr [ESP + 0x18]         ; 0042f585
    FXCH                                ; 0042f589
    FSTP float ptr [ESP + 0x1c]         ; 0042f58b
    FSTP float ptr [ESP + 0x20]         ; 0042f58f
    MOVSD ES:EDI,ESI                    ; 0042f593
    MOVSD ES:EDI,ESI                    ; 0042f594
    MOVSD ES:EDI,ESI                    ; 0042f595
    FLD float ptr [ESP + 0x4c]          ; 0042f596
    FMUL ST0                            ; 0042f59a
    FLD float ptr [ESP + 0x48]          ; 0042f59c
    FMUL ST0                            ; 0042f5a0
    FADDP                               ; 0042f5a2
    FLD float ptr [ESP + 0x50]          ; 0042f5a4
    FMUL ST0                            ; 0042f5a8
    FADDP                               ; 0042f5aa
    FSQRT                               ; 0042f5ac
    FMUL double ptr [0x005d59b7]        ; 0042f5ae | DAT_005d59b7
    CALL crt_math.c_round_FUN_005c03a0  ; 0042f5b4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xb0]        ; 0042f5b9
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042f5c0
    INC EAX                             ; 0042f5c7
    MOV dword ptr [ESP + 0x94],EAX      ; 0042f5c8
    XOR EAX,EAX                         ; 0042f5cf
    MOV EDX,dword ptr [ESP + 0x94]      ; 0042f5d1
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042f5d8
    TEST EDX,EDX                        ; 0042f5df
    JLE 0x0042f62e                      ; 0042f5e1
        ;   XREF to: 0042f62e (CONDITIONAL_JUMP)  ; LAB_0042f62e
    LEA EAX,[EBX + 0xfd8]               ; 0042f5e3
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042f5e9
    LEA EAX,[EBX + 0x35dc]              ; 0042f5f0
    MOV dword ptr [ESP + 0x84],EAX      ; 0042f5f6
    LEA EAX,[EBX + 0x312c]              ; 0042f5fd
    MOV dword ptr [ESP + 0x88],EAX      ; 0042f603
    LEA EAX,[EBX + 0x158]               ; 0042f60a
    MOV dword ptr [ESP + 0x80],EAX      ; 0042f610
    LEA EAX,[EDX + 0x1]                 ; 0042f617
    MOV dword ptr [ESP + 0x90],EAX      ; 0042f61a
    CMP dword ptr [EBX + 0x3120],0x32   ; 0042f621
        ;   Label: LAB_0042f621
    JL 0x0042f675                       ; 0042f628
        ;   XREF to: 0042f675 (CONDITIONAL_JUMP)  ; LAB_0042f675
    MOV ESP,EBP                         ; 0042f62e
        ;   Label: LAB_0042f62e
    POP EBP                             ; 0042f630
    POP EDI                             ; 0042f631
    POP ESI                             ; 0042f632
    POP EBX                             ; 0042f633
    RET                                 ; 0042f634
    FLD float ptr [ESI + 0x4]           ; 0042f635
        ;   Label: LAB_0042f635
    FMUL ST0                            ; 0042f638
    FLD float ptr [ESI]                 ; 0042f63a
    FMUL ST0                            ; 0042f63c
    FADDP                               ; 0042f63e
    FLD float ptr [ESI + 0x8]           ; 0042f640
    FMUL ST0                            ; 0042f643
    FADDP                               ; 0042f645
    FSQRT                               ; 0042f647
    FST float ptr [ESP + 0xa0]          ; 0042f649
    FCOMP float ptr [ESP + 0x9c]        ; 0042f650
    FNSTSW AX                           ; 0042f657
    SAHF                                ; 0042f659
    JBE 0x0042f523                      ; 0042f65a
        ;   XREF to: 0042f523 (CONDITIONAL_JUMP)  ; LAB_0042f523
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042f660
    MOV ECX,EDI                         ; 0042f667
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042f669
    JMP 0x0042f523                      ; 0042f670
        ;   XREF to: 0042f523 (UNCONDITIONAL_JUMP)  ; LAB_0042f523
    MOV ESI,dword ptr [EBX + 0x3120]    ; 0042f675
        ;   Label: LAB_0042f675
    IMUL EAX,ESI,0x18                   ; 0042f67b
    MOV EDX,dword ptr [ESP + 0x88]      ; 0042f67e
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042f685
    ADD EDX,EAX                         ; 0042f68f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042f691
    LEA EDI,[ESI + 0x1]                 ; 0042f698
    PUSH EAX                            ; 0042f69b
    MOV dword ptr [ESP + 0xb0],EDX      ; 0042f69c
    MOV dword ptr [EBX + 0x3120],EDI    ; 0042f6a3
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0042f6a9
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f6ae
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0042f6b1
    PUSH EDX                            ; 0042f6b4
    PUSH EAX                            ; 0042f6b5
    CALL core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00565810 ; 0042f6b6
        ;   XREF to: 00565810 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00565810(CDeformableModel * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0042f6bb
    MOV EDX,dword ptr [ESP + 0xac]      ; 0042f6be
    MOV dword ptr [EDX],EAX             ; 0042f6c5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042f6c7
    MOV dword ptr [EDX + 0x4],EAX       ; 0042f6ca
    MOV EAX,dword ptr [ESP + 0x90]      ; 0042f6cd
    MOV dword ptr [ESP + 0xb0],EAX      ; 0042f6d4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042f6db
    INC EAX                             ; 0042f6e2
    MOV dword ptr [ESP + 0xb4],EAX      ; 0042f6e3
    FLD float ptr [ESP + 0x48]          ; 0042f6ea
    FILD dword ptr [ESP + 0xb4]         ; 0042f6ee
    FSTP float ptr [ESP + 0xa4]         ; 0042f6f5
    FMUL float ptr [ESP + 0xa4]         ; 0042f6fc
    FLD float ptr [ESP + 0x4c]          ; 0042f703
    FMUL float ptr [ESP + 0xa4]         ; 0042f707
    FLD float ptr [ESP + 0x50]          ; 0042f70e
    FMUL float ptr [ESP + 0xa4]         ; 0042f712
    LEA ESI,[ESP + 0xc]                 ; 0042f719
    LEA EDI,[ESP + 0x3c]                ; 0042f71d
    FLD1                                ; 0042f721
    FILD dword ptr [ESP + 0xb0]         ; 0042f723
    FXCH ST4                            ; 0042f72a
    FSTP float ptr [ESP + 0xc]          ; 0042f72c
    FXCH ST2                            ; 0042f730
    FSTP float ptr [ESP + 0x10]         ; 0042f732
    FSTP float ptr [ESP + 0x14]         ; 0042f736
    MOVSD ES:EDI,ESI                    ; 0042f73a
    MOVSD ES:EDI,ESI                    ; 0042f73b
    MOVSD ES:EDI,ESI                    ; 0042f73c
    FXCH                                ; 0042f73d
    FSTP float ptr [ESP + 0x98]         ; 0042f73f
    FLD float ptr [ESP + 0x3c]          ; 0042f746
    FXCH                                ; 0042f74a
    FDIV float ptr [ESP + 0x98]         ; 0042f74c
    FXCH                                ; 0042f753
    FMUL ST1                            ; 0042f755
    FLD float ptr [ESP + 0x40]          ; 0042f757
    FMUL ST2                            ; 0042f75b
    FLD float ptr [ESP + 0x44]          ; 0042f75d
    FMULP ST3                           ; 0042f761
    LEA EDI,[ESP + 0x60]                ; 0042f763
    LEA ESI,[ESP + 0x30]                ; 0042f767
    FXCH                                ; 0042f76b
    FSTP float ptr [ESP + 0x30]         ; 0042f76d
    FSTP float ptr [ESP + 0x34]         ; 0042f771
    FSTP float ptr [ESP + 0x38]         ; 0042f775
    MOVSD ES:EDI,ESI                    ; 0042f779
    MOVSD ES:EDI,ESI                    ; 0042f77a
    MOVSD ES:EDI,ESI                    ; 0042f77b
    LEA EAX,[ESP + 0x60]                ; 0042f77c
    LEA ESI,[EDX + 0x8]                 ; 0042f780
    CMP ESI,EAX                         ; 0042f783
    JZ 0x0042f79b                       ; 0042f785
        ;   XREF to: 0042f79b (CONDITIONAL_JUMP)  ; LAB_0042f79b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042f787
    MOV dword ptr [ESI],EAX             ; 0042f78b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042f78d
    MOV dword ptr [ESI + 0x4],EAX       ; 0042f791
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042f794
    MOV dword ptr [ESI + 0x8],EAX       ; 0042f798
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042f79b
        ;   Label: LAB_0042f79b
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 0042f7a2
    ADD EAX,dword ptr [ESP + 0x8c]      ; 0042f7a6
    PUSH EAX                            ; 0042f7ad
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042f7ae
    ADD EAX,0x8                         ; 0042f7b5
    PUSH EAX                            ; 0042f7b8
    LEA ESI,[ESP + 0x74]                ; 0042f7b9
    LEA EDI,[ESP + 0x2c]                ; 0042f7bd
    CALL core_xform.cpp_FUN_005b5080    ; 0042f7c1
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0042f7c6
    LEA EAX,[ESP + 0x24]                ; 0042f7c9
    LEA ESI,[ESP + 0x6c]                ; 0042f7cd
    PUSH EAX                            ; 0042f7d1
    MOVSD ES:EDI,ESI                    ; 0042f7d2
    MOVSD ES:EDI,ESI                    ; 0042f7d3
    MOVSD ES:EDI,ESI                    ; 0042f7d4
    PUSH EBX                            ; 0042f7d5
    LEA ESI,[ESP + 0x8]                 ; 0042f7d6
    LEA EDI,[ESP + 0x5c]                ; 0042f7da
    CALL core_actor.cpp_FUN_00408b40    ; 0042f7de
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 0042f7e3
    ADD ESP,0x8                         ; 0042f7e7
    MOVSD ES:EDI,ESI                    ; 0042f7ea
    MOVSD ES:EDI,ESI                    ; 0042f7eb
    MOVSD ES:EDI,ESI                    ; 0042f7ec
    MOV EAX,dword ptr [EBX + 0x3120]    ; 0042f7ed
    DEC EAX                             ; 0042f7f3
    IMUL EAX,EAX,0x2a4                  ; 0042f7f4
    ADD EAX,dword ptr [ESP + 0x84]      ; 0042f7fa
    LEA ESI,[EAX + 0x20]                ; 0042f801
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042f804
    MOV dword ptr [ESI],EAX             ; 0042f808
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042f80a
    MOV dword ptr [ESI + 0x4],EAX       ; 0042f80e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042f811
    MOV dword ptr [ESI + 0x8],EAX       ; 0042f815
    MOV EAX,dword ptr [EBX + 0x3120]    ; 0042f818
    DEC EAX                             ; 0042f81e
    IMUL EAX,EAX,0x2a4                  ; 0042f81f
    MOV dword ptr [EBX + EAX*0x1 + 0x3788],0x0 ; 0042f825
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042f830
    MOV dword ptr [EAX + 0x14],0x3f000000 ; 0042f837
    FLD float ptr [EAX + 0x14]          ; 0042f83e
    MOV EAX,dword ptr [EBX + 0x3120]    ; 0042f841
    DEC EAX                             ; 0042f847
    IMUL EAX,EAX,0x2a4                  ; 0042f848
    FLD double ptr [0x005d59b7]         ; 0042f84e | DAT_005d59b7
    FXCH                                ; 0042f854
    FMUL ST1                            ; 0042f856
    FSTP float ptr [EBX + EAX*0x1 + 0x3734] ; 0042f858
    MOV EAX,dword ptr [EBX + 0x3120]    ; 0042f85f
    DEC EAX                             ; 0042f865
    IMUL EAX,EAX,0x2a4                  ; 0042f866
    MOV EDX,dword ptr [ESP + 0xac]      ; 0042f86c
    MOV ECX,dword ptr [EDX + 0x14]      ; 0042f873
    MOV dword ptr [EBX + EAX*0x1 + 0x3738],ECX ; 0042f876
    MOV EAX,dword ptr [EBX + 0x3120]    ; 0042f87d
    DEC EAX                             ; 0042f883
    IMUL EAX,EAX,0x2a4                  ; 0042f884
    FMUL float ptr [EDX + 0x14]         ; 0042f88a
    FSTP float ptr [EBX + EAX*0x1 + 0x373c] ; 0042f88d
    MOV EAX,dword ptr [EBX + 0x3120]    ; 0042f894
    DEC EAX                             ; 0042f89a
    IMUL EAX,EAX,0x2a4                  ; 0042f89b
    MOV EDX,dword ptr [EBX + 0x3124]    ; 0042f8a1
    MOV dword ptr [EBX + EAX*0x1 + 0x3784],EDX ; 0042f8a7
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042f8ae
    INC EAX                             ; 0042f8b5
    MOV EDX,dword ptr [ESP + 0x94]      ; 0042f8b6
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042f8bd
    CMP EAX,EDX                         ; 0042f8c4
    JL 0x0042f621                       ; 0042f8c6
        ;   XREF to: 0042f621 (CONDITIONAL_JUMP)  ; LAB_0042f621
    MOV ESP,EBP                         ; 0042f8cc
    POP EBP                             ; 0042f8ce
    POP EDI                             ; 0042f8cf
    POP ESI                             ; 0042f8d0
    POP EBX                             ; 0042f8d1
    RET                                 ; 0042f8d2

