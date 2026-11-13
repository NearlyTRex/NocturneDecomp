; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_005203c0(int param_1,float param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined        Stack[-0x1a0]:1  local_1a0
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
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_0051ecc0 at 0051f094
;
; Referenced Globals:
;   undefined4 DAT_005e2bbb
;   undefined4 DAT_005e2bc3
;   undefined4 DAT_005e2bcb
;   undefined4 DAT_005e2bcf
;   undefined4 DAT_005e2bd3
;   undefined4 DAT_005e2bdb
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01e62080
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_motion.cpp_FUN_005035c0
;   core_scat.cpp_FUN_00520a60
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005203c0
        ;   Label: core_scat.cpp_FUN_005203c0
    PUSH ESI                            ; 005203c1
    PUSH EDI                            ; 005203c2
    PUSH EBP                            ; 005203c3
    MOV EBP,ESP                         ; 005203c4
    SUB ESP,0x194                       ; 005203c6
    AND ESP,0xfffffff8                  ; 005203cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005203cf
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005203d2
    MOV dword ptr [EAX + 0x25668],0x0   ; 005203d5
    TEST EDX,EDX                        ; 005203df
    JZ 0x005205cd                       ; 005203e1
        ;   XREF to: 005205cd (CONDITIONAL_JUMP)  ; LAB_005205cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005203e7
        ;   Label: LAB_005203e7
    MOV EAX,dword ptr [EAX + 0x25658]   ; 005203ea
    MOV dword ptr [ESP],EAX             ; 005203f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005203f3
    MOV EAX,dword ptr [EAX + 0x2565c]   ; 005203f6
    MOV dword ptr [ESP + 0x184],EAX     ; 005203fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520403
    CMP dword ptr [EAX + 0x24378],0x0   ; 00520406
    JNZ 0x005205f3                      ; 0052040d
        ;   XREF to: 005205f3 (CONDITIONAL_JUMP)  ; LAB_005205f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520413
        ;   Label: LAB_00520413
    CMP dword ptr [EAX + 0x25640],0x0   ; 00520416
    JNZ 0x00520666                      ; 0052041d
        ;   XREF to: 00520666 (CONDITIONAL_JUMP)  ; LAB_00520666
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520423
        ;   Label: LAB_00520423
    MOV dword ptr [EAX + 0x25664],0x0   ; 00520426
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520430
        ;   Label: LAB_00520430
    CMP dword ptr [EAX + 0x10a74],0x0   ; 00520433
    JZ 0x00520721                       ; 0052043a
        ;   XREF to: 00520721 (CONDITIONAL_JUMP)  ; LAB_00520721
    MOV EDX,dword ptr [EAX + 0x25664]   ; 00520440
    TEST EDX,EDX                        ; 00520446
    JNZ 0x0052046c                      ; 00520448
        ;   XREF to: 0052046c (CONDITIONAL_JUMP)  ; LAB_0052046c
    MOV dword ptr [EAX + 0x2565c],EDX   ; 0052044a
    MOV EDX,dword ptr [EAX + 0x2565c]   ; 00520450
    MOV dword ptr [EAX + 0x25658],EDX   ; 00520456
    MOV EAX,dword ptr [EAX + 0x25658]   ; 0052045c
    MOV dword ptr [ESP + 0x184],EAX     ; 00520462
    MOV dword ptr [ESP],EAX             ; 00520469
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052046c
        ;   Label: LAB_0052046c
    FLD float ptr [ESP + 0x184]         ; 0052046f
    FSUB float ptr [EAX + 0x2565c]      ; 00520476
    SUB ESP,0x4                         ; 0052047c
    FSTP float ptr [ESP]                ; 0052047f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00520482
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x194],EAX     ; 00520487
    FLD float ptr [ESP + 0x194]         ; 0052048e
    ADD ESP,0x4                         ; 00520495
    FLD float ptr [ESP]                 ; 00520498
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052049b
    FXCH                                ; 0052049e
    FSTP float ptr [ESP + 0x17c]        ; 005204a0
    FSUB float ptr [EAX + 0x25658]      ; 005204a7
    SUB ESP,0x4                         ; 005204ad
    FSTP float ptr [ESP]                ; 005204b0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005204b3
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x194],EAX     ; 005204b8
    FLD float ptr [ESP + 0x194]         ; 005204bf
    ADD ESP,0x4                         ; 005204c6
    FLD float ptr [EBP + 0x18]          ; 005204c9
    FMUL float ptr [0x005e2bbb]         ; 005204cc | DAT_005e2bbb
    FMUL double ptr [0x005e2bd3]        ; 005204d2 | DAT_005e2bd3
    FLD float ptr [ESP + 0x17c]         ; 005204d8
    FXCH ST2                            ; 005204df
    FSTP float ptr [ESP + 0x178]        ; 005204e1
    FST float ptr [ESP + 0x180]         ; 005204e8
    FCHS                                ; 005204ef
    FSTP float ptr [ESP + 0x170]        ; 005204f1
    FCOMP float ptr [ESP + 0x170]       ; 005204f8
    FNSTSW AX                           ; 005204ff
    SAHF                                ; 00520501
    JNC 0x00520512                      ; 00520502
        ;   XREF to: 00520512 (CONDITIONAL_JUMP)  ; LAB_00520512
    MOV EAX,dword ptr [ESP + 0x170]     ; 00520504
    MOV dword ptr [ESP + 0x17c],EAX     ; 0052050b
    FLD float ptr [ESP + 0x17c]         ; 00520512
        ;   Label: LAB_00520512
    FCOMP float ptr [ESP + 0x180]       ; 00520519
    FNSTSW AX                           ; 00520520
    SAHF                                ; 00520522
    JBE 0x00520533                      ; 00520523
        ;   XREF to: 00520533 (CONDITIONAL_JUMP)  ; LAB_00520533
    MOV EAX,dword ptr [ESP + 0x180]     ; 00520525
    MOV dword ptr [ESP + 0x17c],EAX     ; 0052052c
    FLD float ptr [ESP + 0x178]         ; 00520533
        ;   Label: LAB_00520533
    FLD float ptr [ESP + 0x180]         ; 0052053a
    FCHS                                ; 00520541
    FSTP float ptr [ESP + 0x16c]        ; 00520543
    FCOMP float ptr [ESP + 0x16c]       ; 0052054a
    FNSTSW AX                           ; 00520551
    SAHF                                ; 00520553
    JNC 0x00520564                      ; 00520554
        ;   XREF to: 00520564 (CONDITIONAL_JUMP)  ; LAB_00520564
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00520556
    MOV dword ptr [ESP + 0x178],EAX     ; 0052055d
    FLD float ptr [ESP + 0x178]         ; 00520564
        ;   Label: LAB_00520564
    FCOMP float ptr [ESP + 0x180]       ; 0052056b
    FNSTSW AX                           ; 00520572
    SAHF                                ; 00520574
    JBE 0x00520585                      ; 00520575
        ;   XREF to: 00520585 (CONDITIONAL_JUMP)  ; LAB_00520585
    MOV EAX,dword ptr [ESP + 0x180]     ; 00520577
    MOV dword ptr [ESP + 0x178],EAX     ; 0052057e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520585
        ;   Label: LAB_00520585
    FLD float ptr [EAX + 0x2565c]       ; 00520588
    FLD float ptr [EAX + 0x25658]       ; 0052058e
    MOV ECX,dword ptr [EAX + 0x25664]   ; 00520594
    FADD float ptr [ESP + 0x178]        ; 0052059a
    FXCH                                ; 005205a1
    FADD float ptr [ESP + 0x17c]        ; 005205a3
    FXCH                                ; 005205aa
    FSTP float ptr [EAX + 0x25658]      ; 005205ac
    FSTP float ptr [EAX + 0x2565c]      ; 005205b2
    TEST ECX,ECX                        ; 005205b8
    JZ 0x005205c6                       ; 005205ba
        ;   XREF to: 005205c6 (CONDITIONAL_JUMP)  ; LAB_005205c6
    CMP dword ptr [EBP + 0x1c],0x0      ; 005205bc
    JZ 0x005209d0                       ; 005205c0
        ;   XREF to: 005209d0 (CONDITIONAL_JUMP)  ; LAB_005209d0
    MOV ESP,EBP                         ; 005205c6
        ;   Label: LAB_005205c6
    POP EBP                             ; 005205c8
    POP EDI                             ; 005205c9
    POP ESI                             ; 005205ca
    POP EBX                             ; 005205cb
    RET                                 ; 005205cc
    ADD EAX,0x2b4                       ; 005205cd
        ;   Label: LAB_005205cd
    PUSH EAX                            ; 005205d2
    CALL core_motion.cpp_FUN_005035c0   ; 005205d3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005205d8
    ADD ESP,0x4                         ; 005205db
    CMP EAX,0x2                         ; 005205de
    JNZ 0x005203e7                      ; 005205e1
        ;   XREF to: 005203e7 (CONDITIONAL_JUMP)  ; LAB_005203e7
    MOV dword ptr [EBP + 0x1c],0x1      ; 005205e7
    JMP 0x005203e7                      ; 005205ee
        ;   XREF to: 005203e7 (UNCONDITIONAL_JUMP)  ; LAB_005203e7
    CMP dword ptr [EAX + 0x10a64],0x2   ; 005205f3
        ;   Label: LAB_005205f3
    JZ 0x00520413                       ; 005205fa
        ;   XREF to: 00520413 (CONDITIONAL_JUMP)  ; LAB_00520413
    FLD float ptr [EAX + 0x10a94]       ; 00520600
    FMUL float ptr [0x005e2bbb]         ; 00520606 | DAT_005e2bbb
    FMUL double ptr [0x005e2bc3]        ; 0052060c | DAT_005e2bc3
    FMUL float ptr [EBP + 0x18]         ; 00520612
    MOV EDI,0x3fc90fdb                  ; 00520615
    FLD float ptr [ESP]                 ; 0052061a
    FXCH                                ; 0052061d
    FADD ST0,ST1                        ; 0052061f
    MOV dword ptr [ESP + 0x174],EDI     ; 00520621
    FSTP ST1                            ; 00520628
    FST float ptr [ESP]                 ; 0052062a
    FCOMP float ptr [0x005e2bcb]        ; 0052062d | DAT_005e2bcb
    FNSTSW AX                           ; 00520633
    SAHF                                ; 00520635
    JNC 0x0052063f                      ; 00520636
        ;   XREF to: 0052063f (CONDITIONAL_JUMP)  ; LAB_0052063f
    MOV dword ptr [ESP],0xbfc90fdb      ; 00520638
    FLD float ptr [ESP]                 ; 0052063f
        ;   Label: LAB_0052063f
    FCOMP float ptr [ESP + 0x174]       ; 00520642
    FNSTSW AX                           ; 00520649
    SAHF                                ; 0052064b
    JBE 0x00520658                      ; 0052064c
        ;   XREF to: 00520658 (CONDITIONAL_JUMP)  ; LAB_00520658
    MOV EAX,dword ptr [ESP + 0x174]     ; 0052064e
    MOV dword ptr [ESP],EAX             ; 00520655
    XOR EDX,EDX                         ; 00520658
        ;   Label: LAB_00520658
    MOV dword ptr [ESP + 0x184],EDX     ; 0052065a
    JMP 0x0052046c                      ; 00520661
        ;   XREF to: 0052046c (UNCONDITIONAL_JUMP)  ; LAB_0052046c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00520666
        ;   Label: LAB_00520666
    TEST EBX,EBX                        ; 00520669
    JNZ 0x00520423                      ; 0052066b
        ;   XREF to: 00520423 (CONDITIONAL_JUMP)  ; LAB_00520423
    MOV ESI,dword ptr [EAX + 0x10a74]   ; 00520671
    TEST ESI,ESI                        ; 00520677
    JNZ 0x00520430                      ; 00520679
        ;   XREF to: 00520430 (CONDITIONAL_JUMP)  ; LAB_00520430
    MOV EDI,0x7149f2ca                  ; 0052067f
    MOV dword ptr [ESP + 0x188],EBX     ; 00520684
    MOV dword ptr [ESP + 0x18c],EDI     ; 0052068b
    XOR EDI,EDI                         ; 00520692
    MOV EAX,[0x0061b5a8]                ; 00520694 | g_CDemonSetPtr
        ;   Label: LAB_00520694
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00520699 | g_CDemonSetInstance.actor_count
    JGE 0x0052070c                      ; 0052069f
        ;   XREF to: 0052070c (CONDITIONAL_JUMP)  ; LAB_0052070c
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 005206a1 | g_CDemonSetInstance.actors[0]
    MOV EAX,dword ptr [EBP + 0x14]      ; 005206a8
    CMP EBX,dword ptr [EAX + 0x25664]   ; 005206ab
    SETZ AL                             ; 005206b1
    AND EAX,0xff                        ; 005206b4
    PUSH EAX                            ; 005206b9
    PUSH EBX                            ; 005206ba
    MOV EAX,dword ptr [EBP + 0x14]      ; 005206bb
    PUSH EAX                            ; 005206be
    CALL core_scat.cpp_FUN_00520a60     ; 005206bf
        ;   XREF to: 00520a60 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_00520a60()
    MOV dword ptr [ESP + 0x19c],EAX     ; 005206c4
    FLD float ptr [ESP + 0x19c]         ; 005206cb
    ADD ESP,0xc                         ; 005206d2
    FST float ptr [ESP + 0x4]           ; 005206d5
    FLDZ                                ; 005206d9
    FCOMPP                              ; 005206db
    FNSTSW AX                           ; 005206dd
    SAHF                                ; 005206df
    JBE 0x005206e8                      ; 005206e0
        ;   XREF to: 005206e8 (CONDITIONAL_JUMP)  ; LAB_005206e8
    INC ESI                             ; 005206e2
        ;   Label: LAB_005206e2
    ADD EDI,0x4                         ; 005206e3
    JMP 0x00520694                      ; 005206e6
        ;   XREF to: 00520694 (UNCONDITIONAL_JUMP)  ; LAB_00520694
    FLD float ptr [ESP + 0x4]           ; 005206e8
        ;   Label: LAB_005206e8
    FCOMP float ptr [ESP + 0x18c]       ; 005206ec
    FNSTSW AX                           ; 005206f3
    SAHF                                ; 005206f5
    JNC 0x005206e2                      ; 005206f6
        ;   XREF to: 005206e2 (CONDITIONAL_JUMP)  ; LAB_005206e2
    MOV EAX,dword ptr [ESP + 0x4]       ; 005206f8
    MOV dword ptr [ESP + 0x188],EBX     ; 005206fc
    MOV dword ptr [ESP + 0x18c],EAX     ; 00520703
    JMP 0x005206e2                      ; 0052070a
        ;   XREF to: 005206e2 (UNCONDITIONAL_JUMP)  ; LAB_005206e2
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052070c
        ;   Label: LAB_0052070c
    MOV EAX,dword ptr [ESP + 0x188]     ; 0052070f
    MOV dword ptr [EBX + 0x25664],EAX   ; 00520716
    JMP 0x00520430                      ; 0052071c
        ;   XREF to: 00520430 (UNCONDITIONAL_JUMP)  ; LAB_00520430
    CMP dword ptr [EAX + 0x25664],0x0   ; 00520721
        ;   Label: LAB_00520721
    JZ 0x0052046c                       ; 00520728
        ;   XREF to: 0052046c (CONDITIONAL_JUMP)  ; LAB_0052046c
    PUSH 0x5f22b0                       ; 0052072e | g_CVectorTypeInfo
    PUSH 0xa                            ; 00520733
    LEA EAX,[ESP + 0x10]                ; 00520735
    PUSH EAX                            ; 00520739
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0052073a
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052073f
    LEA ESI,[ESP + 0x8]                 ; 00520742
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520746
    PUSH ESI                            ; 00520749
    MOV EAX,dword ptr [EAX + 0x25664]   ; 0052074a
    PUSH EAX                            ; 00520750
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 00520751
    CALL dword ptr [EBX + 0x5c]         ; 00520757
    ADD ESP,0x8                         ; 0052075a
    TEST EAX,EAX                        ; 0052075d
    JLE 0x005208c2                      ; 0052075f
        ;   XREF to: 005208c2 (CONDITIONAL_JUMP)  ; LAB_005208c2
    LEA EAX,[ESP + 0xf8]                ; 00520765
    LEA EBX,[ESP + 0x8]                 ; 0052076c
    CMP EAX,EBX                         ; 00520770
    JZ 0x00520795                       ; 00520772
        ;   XREF to: 00520795 (CONDITIONAL_JUMP)  ; LAB_00520795
    MOV EAX,dword ptr [ESP + 0x8]       ; 00520774
    MOV dword ptr [ESP + 0xf8],EAX      ; 00520778
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052077f
    MOV dword ptr [ESP + 0xfc],EAX      ; 00520783
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052078a
    MOV dword ptr [ESP + 0x100],EAX     ; 0052078e
        ;   Label: LAB_0052078e
    LEA EAX,[ESP + 0xf8]                ; 00520795
        ;   Label: LAB_00520795
    PUSH EAX                            ; 0052079c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052079d
    MOV EBX,dword ptr [EAX + 0x25664]   ; 005207a0
    PUSH EBX                            ; 005207a6
    LEA ESI,[ESP + 0x130]               ; 005207a7
    LEA EDI,[ESP + 0xc4]                ; 005207ae
    CALL core_actor.cpp_FUN_00408d70    ; 005207b5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x130]               ; 005207ba
    ADD ESP,0x8                         ; 005207c1
    LEA EAX,[ESP + 0xbc]                ; 005207c4
    MOVSD ES:EDI,ESI                    ; 005207cb
    MOVSD ES:EDI,ESI                    ; 005207cc
    MOVSD ES:EDI,ESI                    ; 005207cd
    PUSH EAX                            ; 005207ce
    MOV ESI,dword ptr [EBP + 0x14]      ; 005207cf
    PUSH ESI                            ; 005207d2
    LEA ESI,[ESP + 0xb8]                ; 005207d3
    LEA EDI,[ESP + 0x124]               ; 005207da
    CALL core_actor.cpp_FUN_00408de0    ; 005207e1
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xb8]                ; 005207e6
    ADD ESP,0x8                         ; 005207ed
    MOVSD ES:EDI,ESI                    ; 005207f0
    MOVSD ES:EDI,ESI                    ; 005207f1
    MOVSD ES:EDI,ESI                    ; 005207f2
    MOV EDI,dword ptr [0x01e62080]      ; 005207f3 | DAT_01e62080
    MOV EAX,dword ptr [EBP + 0x14]      ; 005207f9
    PUSH EDI                            ; 005207fc
    ADD EAX,0x2b4                       ; 005207fd
    PUSH EAX                            ; 00520802
    LEA ESI,[ESP + 0x148]               ; 00520803
    LEA EDI,[ESP + 0xf4]                ; 0052080a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 00520811
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x148]               ; 00520816
    ADD ESP,0x8                         ; 0052081d
    LEA EAX,[ESP + 0x104]               ; 00520820
    FLD float ptr [ESP + 0x11c]         ; 00520827
    FLD float ptr [ESP + 0x120]         ; 0052082e
    MOVSD ES:EDI,ESI                    ; 00520835
    MOVSD ES:EDI,ESI                    ; 00520836
    MOVSD ES:EDI,ESI                    ; 00520837
    FLD float ptr [ESP + 0x124]         ; 00520838
    LEA EDI,[ESP + 0x104]               ; 0052083f
    LEA ESI,[ESP + 0xe0]                ; 00520846
    FXCH ST2                            ; 0052084d
    FSUB float ptr [ESP + 0xec]         ; 0052084f
    FXCH                                ; 00520856
    FSUB float ptr [ESP + 0xf0]         ; 00520858
    FXCH ST2                            ; 0052085f
    FSUB float ptr [ESP + 0xf4]         ; 00520861
    FXCH                                ; 00520868
    FSTP float ptr [ESP + 0xe0]         ; 0052086a
    FXCH                                ; 00520871
    FSTP float ptr [ESP + 0xe4]         ; 00520873
    FSTP float ptr [ESP + 0xe8]         ; 0052087a
    MOVSD ES:EDI,ESI                    ; 00520881
    MOVSD ES:EDI,ESI                    ; 00520882
    MOVSD ES:EDI,ESI                    ; 00520883
    PUSH EAX                            ; 00520884
    LEA ESI,[ESP + 0x138]               ; 00520885
    LEA EDI,[ESP + 0x150]               ; 0052088c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00520893
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x138]               ; 00520898
    ADD ESP,0x4                         ; 0052089f
    MOVSD ES:EDI,ESI                    ; 005208a2
    MOVSD ES:EDI,ESI                    ; 005208a3
    MOVSD ES:EDI,ESI                    ; 005208a4
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005208a5
    MOV dword ptr [ESP],EAX             ; 005208ac
    MOV EAX,dword ptr [ESP + 0x150]     ; 005208af
    MOV dword ptr [ESP + 0x184],EAX     ; 005208b6
    JMP 0x0052046c                      ; 005208bd
        ;   XREF to: 0052046c (UNCONDITIONAL_JUMP)  ; LAB_0052046c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005208c2
        ;   Label: LAB_005208c2
    MOV EAX,dword ptr [EAX + 0x25664]   ; 005208c5
    PUSH EAX                            ; 005208cb
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 005208cc
    LEA ESI,[ESP + 0x84]                ; 005208d2
    LEA EDI,[ESP + 0x9c]                ; 005208d9
    CALL dword ptr [EBX + 0x24]         ; 005208e0
    MOV ECX,0x6                         ; 005208e3
    LEA ESI,[ESP + 0x84]                ; 005208e8
    ADD ESP,0x4                         ; 005208ef
    MOVSD.REP ES:EDI,ESI                ; 005208f2
    LEA EAX,[ESP + 0x98]                ; 005208f4
    FLD float ptr [ESP + 0x98]          ; 005208fb
    FLD float ptr [ESP + 0x9c]          ; 00520902
    FLD float ptr [ESP + 0xa0]          ; 00520909
    LEA EDI,[ESP + 0x110]               ; 00520910
    LEA ESI,[ESP + 0x158]               ; 00520917
    FXCH ST2                            ; 0052091e
    FADD float ptr [EAX + 0xc]          ; 00520920
    FXCH                                ; 00520923
    FADD float ptr [EAX + 0x10]         ; 00520925
    FXCH ST2                            ; 00520928
    FADD float ptr [EAX + 0x14]         ; 0052092a
    FXCH                                ; 0052092d
    FSTP float ptr [ESP + 0x158]        ; 0052092f
    FXCH                                ; 00520936
    FSTP float ptr [ESP + 0x15c]        ; 00520938
    FSTP float ptr [ESP + 0x160]        ; 0052093f
    MOVSD ES:EDI,ESI                    ; 00520946
    MOVSD ES:EDI,ESI                    ; 00520947
    MOVSD ES:EDI,ESI                    ; 00520948
    FLD float ptr [0x005e2bcf]          ; 00520949 | DAT_005e2bcf
    FLD float ptr [ESP + 0x110]         ; 0052094f
    FMUL ST1                            ; 00520956
    FLD float ptr [ESP + 0x114]         ; 00520958
    FMUL ST2                            ; 0052095f
    FLD float ptr [ESP + 0x118]         ; 00520961
    FMULP ST3                           ; 00520968
    LEA EBX,[ESP + 0xf8]                ; 0052096a
    LEA EAX,[ESP + 0xd4]                ; 00520971
    LEA EDI,[ESP + 0xd4]                ; 00520978
    LEA ESI,[ESP + 0xc8]                ; 0052097f
    FXCH                                ; 00520986
    FSTP float ptr [ESP + 0xc8]         ; 00520988
    FSTP float ptr [ESP + 0xcc]         ; 0052098f
    FSTP float ptr [ESP + 0xd0]         ; 00520996
    MOVSD ES:EDI,ESI                    ; 0052099d
    MOVSD ES:EDI,ESI                    ; 0052099e
    MOVSD ES:EDI,ESI                    ; 0052099f
    CMP EBX,EAX                         ; 005209a0
    JZ 0x00520795                       ; 005209a2
        ;   XREF to: 00520795 (CONDITIONAL_JUMP)  ; LAB_00520795
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005209a8
    MOV dword ptr [ESP + 0xf8],EAX      ; 005209af
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005209b6
    MOV dword ptr [ESP + 0xfc],EAX      ; 005209bd
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005209c4
    JMP 0x0052078e                      ; 005209cb
        ;   XREF to: 0052078e (UNCONDITIONAL_JUMP)  ; LAB_0052078e
    FLD float ptr [EAX + 0x2565c]       ; 005209d0
        ;   Label: LAB_005209d0
    FSUB float ptr [ESP + 0x184]        ; 005209d6
    SUB ESP,0x4                         ; 005209dd
    FSTP float ptr [ESP]                ; 005209e0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005209e3
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x194],EAX     ; 005209e8
    FLD float ptr [ESP + 0x194]         ; 005209ef
    FABS                                ; 005209f6
    ADD ESP,0x4                         ; 005209f8
    FCOMP double ptr [0x005e2bdb]       ; 005209fb | DAT_005e2bdb
    FNSTSW AX                           ; 00520a01
    SAHF                                ; 00520a03
    JNC 0x00520a1a                      ; 00520a04
        ;   XREF to: 00520a1a (CONDITIONAL_JUMP)  ; LAB_00520a1a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520a06
        ;   Label: LAB_00520a06
    MOV dword ptr [EAX + 0x25668],0x1   ; 00520a09
    MOV ESP,EBP                         ; 00520a13
    POP EBP                             ; 00520a15
    POP EDI                             ; 00520a16
    POP ESI                             ; 00520a17
    POP EBX                             ; 00520a18
    RET                                 ; 00520a19
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520a1a
        ;   Label: LAB_00520a1a
    FLD float ptr [EAX + 0x2565c]       ; 00520a1d
    FSUB float ptr [ESP + 0x184]        ; 00520a23
    SUB ESP,0x4                         ; 00520a2a
    FSTP float ptr [ESP]                ; 00520a2d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00520a30
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x194],EAX     ; 00520a35
    FLD float ptr [ESP + 0x194]         ; 00520a3c
    FABS                                ; 00520a43
    ADD ESP,0x4                         ; 00520a45
    FCOMP double ptr [0x005e2bdb]       ; 00520a48 | DAT_005e2bdb
    FNSTSW AX                           ; 00520a4e
    SAHF                                ; 00520a50
    JC 0x00520a06                       ; 00520a51
        ;   XREF to: 00520a06 (CONDITIONAL_JUMP)  ; LAB_00520a06
    MOV ESP,EBP                         ; 00520a53
    POP EBP                             ; 00520a55
    POP EDI                             ; 00520a56
    POP ESI                             ; 00520a57
    POP EBX                             ; 00520a58
    RET                                 ; 00520a59

