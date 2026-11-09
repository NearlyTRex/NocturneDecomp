; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042e580(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 at 0042e9c7
;
; Referenced Globals:
;   undefined4 DAT_005d5937
;   undefined4 DAT_005d593c
;   undefined4 DAT_005d593f
;   undefined4 DAT_005d5942
;   undefined4 DAT_005d5945
;   TerminatedCString s_e1_left_005d5948
;   TerminatedCString s_e2_left_005d5950
;   TerminatedCString s_e3_left_005d5958
;   TerminatedCString s_e4_left_005d5960
;   TerminatedCString s_e1_right_005d5968
;   TerminatedCString s_e2_right_005d5971
;   TerminatedCString s_e3_right_005d597a
;   TerminatedCString s_e4_right_005d5983
;   undefined4 DAT_005d598f
;   undefined4 DAT_00612560
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_charactr.cpp_FUN_0042e410
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_00565780
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e580
        ;   Label: core_charactr.cpp_FUN_0042e580
    PUSH ESI                            ; 0042e581
    PUSH EDI                            ; 0042e582
    PUSH EBP                            ; 0042e583
    SUB ESP,0x8                         ; 0042e584
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042e587
    MOV EDX,dword ptr [0x00612560]      ; 0042e58b | DAT_00612560
    PUSH EDX                            ; 0042e591 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0042e592
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042e597
    TEST EAX,EAX                        ; 0042e59a
    JNZ 0x0042e5a7                      ; 0042e59c
        ;   XREF to: 0042e5a7 (CONDITIONAL_JUMP)  ; LAB_0042e5a7
    CMP dword ptr [EBX + 0xc19c],-0x1   ; 0042e59e
    JNZ 0x0042e5af                      ; 0042e5a5
        ;   XREF to: 0042e5af (CONDITIONAL_JUMP)  ; LAB_0042e5af
    ADD ESP,0x8                         ; 0042e5a7
        ;   Label: LAB_0042e5a7
    POP EBP                             ; 0042e5aa
    POP EDI                             ; 0042e5ab
    POP ESI                             ; 0042e5ac
    POP EBX                             ; 0042e5ad
    RET                                 ; 0042e5ae
    LEA EAX,[EBX + 0x158]               ; 0042e5af
        ;   Label: LAB_0042e5af
    PUSH EAX                            ; 0042e5b5
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0042e5b6
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0042e5bb
    ADD ESP,0x4                         ; 0042e5bd
    MOV EBP,dword ptr [EBX + 0xc19c]    ; 0042e5c0
    MOV EDI,EAX                         ; 0042e5c6
    CMP EBP,-0x2                        ; 0042e5c8
    JZ 0x0042e746                       ; 0042e5cb
        ;   XREF to: 0042e746 (CONDITIONAL_JUMP)  ; LAB_0042e746
    MOV EAX,EBX                         ; 0042e5d1
        ;   Label: LAB_0042e5d1
    LEA ECX,[EBX + 0x10]                ; 0042e5d3
    XOR ESI,ESI                         ; 0042e5d6
    MOV EBP,dword ptr [EAX + 0xc1a0]    ; 0042e5d8
        ;   Label: LAB_0042e5d8
    CMP EBP,-0x1                        ; 0042e5de
    JZ 0x0042e5ec                       ; 0042e5e1
        ;   XREF to: 0042e5ec (CONDITIONAL_JUMP)  ; LAB_0042e5ec
    MOV EDX,EBP                         ; 0042e5e3
    MOV dword ptr [EBX + EDX*0x4 + 0x2298],ESI ; 0042e5e5
    MOV EDX,dword ptr [EAX + 0xc1b0]    ; 0042e5ec
        ;   Label: LAB_0042e5ec
    CMP EDX,-0x1                        ; 0042e5f2
    JZ 0x0042e5fe                       ; 0042e5f5
        ;   XREF to: 0042e5fe (CONDITIONAL_JUMP)  ; LAB_0042e5fe
    MOV dword ptr [EBX + EDX*0x4 + 0x2298],ESI ; 0042e5f7
    MOV EDX,dword ptr [EAX + 0xc1c0]    ; 0042e5fe
        ;   Label: LAB_0042e5fe
    ADD EAX,0x4                         ; 0042e604
    MOV dword ptr [EBX + EDX*0x4 + 0x2298],ESI ; 0042e607
    CMP EAX,ECX                         ; 0042e60e
    JNZ 0x0042e5d8                      ; 0042e610
        ;   XREF to: 0042e5d8 (CONDITIONAL_JUMP)  ; LAB_0042e5d8
    FILD dword ptr [0x01c43530]         ; 0042e612 | DAT_01c43530
    FMUL float ptr [0x005d598f]         ; 0042e618 | DAT_005d598f
    FLD float ptr [EBX + 0xc194]        ; 0042e61e
    FXCH                                ; 0042e624
    FSTP float ptr [ESP]                ; 0042e626
    FSUB float ptr [ESP]                ; 0042e629
    MOV ECX,dword ptr [EBX + 0xc190]    ; 0042e62c
    FSTP float ptr [EBX + 0xc194]       ; 0042e632
    CMP ECX,0x1                         ; 0042e638
    JNZ 0x0042e889                      ; 0042e63b
        ;   XREF to: 0042e889 (CONDITIONAL_JUMP)  ; LAB_0042e889
    FLDZ                                ; 0042e641
    FCOMP float ptr [EBX + 0xc194]      ; 0042e643
    FNSTSW AX                           ; 0042e649
    SAHF                                ; 0042e64b
    JC 0x0042e68c                       ; 0042e64c
        ;   XREF to: 0042e68c (CONDITIONAL_JUMP)  ; LAB_0042e68c
    PUSH 0x41000000                     ; 0042e64e
    PUSH 0x40a00000                     ; 0042e653
    CALL core_actor.cpp_FUN_0040cc00    ; 0042e658
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBX + 0xc184],0x0    ; 0042e65d
    MOV dword ptr [EBX + 0xc188],0x0    ; 0042e667
    MOV dword ptr [ESP + 0xc],EAX       ; 0042e671
    MOV dword ptr [EBX + 0xc190],0x0    ; 0042e675
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e67f
    MOV dword ptr [EBX + 0xc194],EAX    ; 0042e683
    ADD ESP,0x8                         ; 0042e689
    FLD float ptr [EBX + 0xc198]        ; 0042e68c
        ;   Label: LAB_0042e68c
    FSUB float ptr [ESP]                ; 0042e692
    FLDZ                                ; 0042e695
    FXCH                                ; 0042e697
    FSTP float ptr [EBX + 0xc198]       ; 0042e699
    FCOMP float ptr [EBX + 0xc198]      ; 0042e69f
    FNSTSW AX                           ; 0042e6a5
    SAHF                                ; 0042e6a7
    JC 0x0042e6d2                       ; 0042e6a8
        ;   XREF to: 0042e6d2 (CONDITIONAL_JUMP)  ; LAB_0042e6d2
    MOV EAX,[0x00622ad0]                ; 0042e6aa | g_CScriptPtr
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042e6af | g_CScriptInstance.field4_0x4
    CMP EBX,ESI                         ; 0042e6b2
    JNZ 0x0042e8c7                      ; 0042e6b4
        ;   XREF to: 0042e8c7 (CONDITIONAL_JUMP)  ; LAB_0042e8c7
    MOV dword ptr [ESI + 0xc198],0x3e19999a ; 0042e6ba
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0042e6c4
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0x3                         ; 0042e6c9
    MOV dword ptr [ESI + 0xc18c],EAX    ; 0042e6cc
    MOV EAX,dword ptr [EBX + 0xc184]    ; 0042e6d2
        ;   Label: LAB_0042e6d2
    SHL EAX,0x2                         ; 0042e6d8
    ADD EAX,EBX                         ; 0042e6db
    MOV EBP,dword ptr [EAX + 0xc1a0]    ; 0042e6dd
    CMP EBP,-0x1                        ; 0042e6e3
    JZ 0x0042e6f9                       ; 0042e6e6
        ;   XREF to: 0042e6f9 (CONDITIONAL_JUMP)  ; LAB_0042e6f9
    PUSH EBP                            ; 0042e6e8
    MOV ECX,dword ptr [EBX + 0xc19c]    ; 0042e6e9
    PUSH ECX                            ; 0042e6ef
    PUSH EDI                            ; 0042e6f0
    CALL core_charactr.cpp_FUN_0042e410 ; 0042e6f1
        ;   XREF to: 0042e410 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e410()
    ADD ESP,0xc                         ; 0042e6f6
    MOV EAX,dword ptr [EBX + 0xc188]    ; 0042e6f9
        ;   Label: LAB_0042e6f9
    SHL EAX,0x2                         ; 0042e6ff
    ADD EAX,EBX                         ; 0042e702
    MOV ESI,dword ptr [EAX + 0xc1b0]    ; 0042e704
    CMP ESI,-0x1                        ; 0042e70a
    JZ 0x0042e720                       ; 0042e70d
        ;   XREF to: 0042e720 (CONDITIONAL_JUMP)  ; LAB_0042e720
    PUSH ESI                            ; 0042e70f
    MOV EAX,dword ptr [EBX + 0xc19c]    ; 0042e710
    PUSH EAX                            ; 0042e716
    PUSH EDI                            ; 0042e717
    CALL core_charactr.cpp_FUN_0042e410 ; 0042e718
        ;   XREF to: 0042e410 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e410()
    ADD ESP,0xc                         ; 0042e71d
    MOV EAX,dword ptr [EBX + 0xc18c]    ; 0042e720
        ;   Label: LAB_0042e720
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xc1c0] ; 0042e726
    PUSH EDX                            ; 0042e72d
    MOV ECX,dword ptr [EBX + 0xc19c]    ; 0042e72e
    PUSH ECX                            ; 0042e734
    PUSH EDI                            ; 0042e735
    CALL core_charactr.cpp_FUN_0042e410 ; 0042e736
        ;   XREF to: 0042e410 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e410()
    ADD ESP,0xc                         ; 0042e73b
    ADD ESP,0x8                         ; 0042e73e
    POP EBP                             ; 0042e741
    POP EDI                             ; 0042e742
    POP ESI                             ; 0042e743
    POP EBX                             ; 0042e744
    RET                                 ; 0042e745
    PUSH 0x0                            ; 0042e746
        ;   Label: LAB_0042e746
    PUSH 0x5d5937                       ; 0042e748 | DAT_005d5937
    PUSH EAX                            ; 0042e74d
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e74e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e753
    MOV dword ptr [EBX + 0xc19c],EAX    ; 0042e756
    CMP EAX,-0x1                        ; 0042e75c
    JZ 0x0042e5a7                       ; 0042e75f
        ;   XREF to: 0042e5a7 (CONDITIONAL_JUMP)  ; LAB_0042e5a7
    PUSH 0x0                            ; 0042e765
    PUSH 0x5d593c                       ; 0042e767 | DAT_005d593c
    PUSH ESI                            ; 0042e76c
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e76d
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e772
    MOV dword ptr [EBX + 0xc1c0],EAX    ; 0042e775
    CMP EAX,-0x1                        ; 0042e77b
    JZ 0x0042e87b                       ; 0042e77e
        ;   XREF to: 0042e87b (CONDITIONAL_JUMP)  ; LAB_0042e87b
    PUSH 0x1                            ; 0042e784
    PUSH 0x5d593f                       ; 0042e786 | DAT_005d593f
    PUSH ESI                            ; 0042e78b
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e78c
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e791
    PUSH 0x1                            ; 0042e794
    PUSH 0x5d5942                       ; 0042e796 | DAT_005d5942
    PUSH ESI                            ; 0042e79b
    MOV dword ptr [EBX + 0xc1c4],EAX    ; 0042e79c
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e7a2
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e7a7
    PUSH 0x1                            ; 0042e7aa
    PUSH 0x5d5945                       ; 0042e7ac | DAT_005d5945
    PUSH ESI                            ; 0042e7b1
    MOV dword ptr [EBX + 0xc1c8],EAX    ; 0042e7b2
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e7b8
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e7bd
    PUSH 0x0                            ; 0042e7c0
    PUSH 0x5d5948                       ; 0042e7c2 | = "e1_left"
    PUSH ESI                            ; 0042e7c7
    MOV dword ptr [EBX + 0xc1cc],EAX    ; 0042e7c8
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e7ce
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e7d3
    PUSH 0x0                            ; 0042e7d6
    PUSH 0x5d5950                       ; 0042e7d8 | = "e2_left"
    PUSH ESI                            ; 0042e7dd
    MOV dword ptr [EBX + 0xc1a0],EAX    ; 0042e7de
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e7e4
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e7e9
    PUSH 0x0                            ; 0042e7ec
    PUSH 0x5d5958                       ; 0042e7ee | = "e3_left"
    PUSH ESI                            ; 0042e7f3
    MOV dword ptr [EBX + 0xc1a4],EAX    ; 0042e7f4
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e7fa
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e7ff
    PUSH 0x0                            ; 0042e802
    PUSH 0x5d5960                       ; 0042e804 | = "e4_left"
    PUSH ESI                            ; 0042e809
    MOV dword ptr [EBX + 0xc1a8],EAX    ; 0042e80a
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e810
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e815
    PUSH 0x0                            ; 0042e818
    PUSH 0x5d5968                       ; 0042e81a | = "e1_right"
    PUSH ESI                            ; 0042e81f
    MOV dword ptr [EBX + 0xc1ac],EAX    ; 0042e820
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e826
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e82b
    PUSH 0x0                            ; 0042e82e
    PUSH 0x5d5971                       ; 0042e830 | = "e2_right"
    PUSH ESI                            ; 0042e835
    MOV dword ptr [EBX + 0xc1b0],EAX    ; 0042e836
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e83c
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e841
    MOV dword ptr [EBX + 0xc1b4],EAX    ; 0042e844
    PUSH 0x0                            ; 0042e84a
    PUSH 0x5d597a                       ; 0042e84c | = "e3_right"
    PUSH ESI                            ; 0042e851
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e852
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e857
    PUSH 0x0                            ; 0042e85a
    PUSH 0x5d5983                       ; 0042e85c | = "e4_right"
    PUSH ESI                            ; 0042e861
    MOV dword ptr [EBX + 0xc1b8],EAX    ; 0042e862
    CALL core_skeleton.cpp_FUN_00565780 ; 0042e868
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042e86d
    MOV dword ptr [EBX + 0xc1bc],EAX    ; 0042e870
    JMP 0x0042e5d1                      ; 0042e876
        ;   XREF to: 0042e5d1 (UNCONDITIONAL_JUMP)  ; LAB_0042e5d1
    MOV dword ptr [EBX + 0xc19c],EAX    ; 0042e87b
        ;   Label: LAB_0042e87b
    ADD ESP,0x8                         ; 0042e881
    POP EBP                             ; 0042e884
    POP EDI                             ; 0042e885
    POP ESI                             ; 0042e886
    POP EBX                             ; 0042e887
    RET                                 ; 0042e888
    FLDZ                                ; 0042e889
        ;   Label: LAB_0042e889
    FCOMP float ptr [EBX + 0xc194]      ; 0042e88b
    FNSTSW AX                           ; 0042e891
    SAHF                                ; 0042e893
    JC 0x0042e68c                       ; 0042e894
        ;   XREF to: 0042e68c (CONDITIONAL_JUMP)  ; LAB_0042e68c
    MOV dword ptr [EBX + 0xc188],0x3    ; 0042e89a
    MOV dword ptr [EBX + 0xc190],0x1    ; 0042e8a4
    MOV dword ptr [EBX + 0xc194],0x3d4ccccd ; 0042e8ae
    MOV dword ptr [EBX + 0xc184],0x3    ; 0042e8b8
    JMP 0x0042e68c                      ; 0042e8c2
        ;   XREF to: 0042e68c (UNCONDITIONAL_JUMP)  ; LAB_0042e68c
    MOV dword ptr [EBX + 0xc18c],0x0    ; 0042e8c7
        ;   Label: LAB_0042e8c7
    MOV dword ptr [EBX + 0xc198],0x0    ; 0042e8d1
    JMP 0x0042e6d2                      ; 0042e8db
        ;   XREF to: 0042e6d2 (UNCONDITIONAL_JUMP)  ; LAB_0042e6d2

