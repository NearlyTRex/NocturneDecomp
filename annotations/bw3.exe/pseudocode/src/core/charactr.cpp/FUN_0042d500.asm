; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042d500(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042d8e0 at 0042d8f1
;
; Referenced Globals:
;   undefined4 DAT_005b8276
;   undefined4 DAT_005b827b
;   undefined4 DAT_005b827e
;   undefined4 DAT_005b8281
;   undefined4 DAT_005b8284
;   TerminatedCString s_e1_left_005b8287
;   TerminatedCString s_e2_left_005b828f
;   TerminatedCString s_e3_left_005b8297
;   TerminatedCString s_e4_left_005b829f
;   TerminatedCString s_e1_right_005b82a7
;   TerminatedCString s_e2_right_005b82b0
;   TerminatedCString s_e3_right_005b82b9
;   TerminatedCString s_e4_right_005b82c2
;   undefined4 DAT_005b82ce
;   undefined4 DAT_005f2afc
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_charactr.cpp_FUN_0042d390
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_0054a310
;   crt_stdlib.c_rand_FUN_005a35cc
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d500
        ;   Label: core_charactr.cpp_FUN_0042d500
    PUSH ESI                            ; 0042d501
    PUSH EDI                            ; 0042d502
    PUSH EBP                            ; 0042d503
    SUB ESP,0x8                         ; 0042d504
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042d507
    MOV EDX,dword ptr [0x005f2afc]      ; 0042d50b | DAT_005f2afc
    PUSH EDX                            ; 0042d511 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0042d512
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042d517
    TEST EAX,EAX                        ; 0042d51a
    JNZ 0x0042d527                      ; 0042d51c
        ;   XREF to: 0042d527 (CONDITIONAL_JUMP)  ; LAB_0042d527
    CMP dword ptr [EBX + 0xcd90],-0x1   ; 0042d51e
    JNZ 0x0042d52f                      ; 0042d525
        ;   XREF to: 0042d52f (CONDITIONAL_JUMP)  ; LAB_0042d52f
    ADD ESP,0x8                         ; 0042d527
        ;   Label: LAB_0042d527
    POP EBP                             ; 0042d52a
    POP EDI                             ; 0042d52b
    POP ESI                             ; 0042d52c
    POP EBX                             ; 0042d52d
    RET                                 ; 0042d52e
    LEA EAX,[EBX + 0x158]               ; 0042d52f
        ;   Label: LAB_0042d52f
    PUSH EAX                            ; 0042d535
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042d536
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0042d53b
    ADD ESP,0x4                         ; 0042d53d
    MOV EBP,dword ptr [EBX + 0xcd90]    ; 0042d540
    MOV EDI,EAX                         ; 0042d546
    CMP EBP,-0x2                        ; 0042d548
    JZ 0x0042d6c6                       ; 0042d54b
        ;   XREF to: 0042d6c6 (CONDITIONAL_JUMP)  ; LAB_0042d6c6
    MOV EAX,EBX                         ; 0042d551
        ;   Label: LAB_0042d551
    LEA ECX,[EBX + 0x10]                ; 0042d553
    XOR ESI,ESI                         ; 0042d556
    MOV EBP,dword ptr [EAX + 0xcd94]    ; 0042d558
        ;   Label: LAB_0042d558
    CMP EBP,-0x1                        ; 0042d55e
    JZ 0x0042d56c                       ; 0042d561
        ;   XREF to: 0042d56c (CONDITIONAL_JUMP)  ; LAB_0042d56c
    MOV EDX,EBP                         ; 0042d563
    MOV dword ptr [EBX + EDX*0x4 + 0x2298],ESI ; 0042d565
    MOV EDX,dword ptr [EAX + 0xcda4]    ; 0042d56c
        ;   Label: LAB_0042d56c
    CMP EDX,-0x1                        ; 0042d572
    JZ 0x0042d57e                       ; 0042d575
        ;   XREF to: 0042d57e (CONDITIONAL_JUMP)  ; LAB_0042d57e
    MOV dword ptr [EBX + EDX*0x4 + 0x2298],ESI ; 0042d577
    MOV EDX,dword ptr [EAX + 0xcdb4]    ; 0042d57e
        ;   Label: LAB_0042d57e
    ADD EAX,0x4                         ; 0042d584
    MOV dword ptr [EBX + EDX*0x4 + 0x2298],ESI ; 0042d587
    CMP EAX,ECX                         ; 0042d58e
    JNZ 0x0042d558                      ; 0042d590
        ;   XREF to: 0042d558 (CONDITIONAL_JUMP)  ; LAB_0042d558
    FILD dword ptr [0x01c5fad0]         ; 0042d592 | DAT_01c5fad0
    FMUL float ptr [0x005b82ce]         ; 0042d598 | DAT_005b82ce
    FLD float ptr [EBX + 0xcd88]        ; 0042d59e
    FXCH                                ; 0042d5a4
    FSTP float ptr [ESP]                ; 0042d5a6
    FSUB float ptr [ESP]                ; 0042d5a9
    MOV ECX,dword ptr [EBX + 0xcd84]    ; 0042d5ac
    FSTP float ptr [EBX + 0xcd88]       ; 0042d5b2
    CMP ECX,0x1                         ; 0042d5b8
    JNZ 0x0042d809                      ; 0042d5bb
        ;   XREF to: 0042d809 (CONDITIONAL_JUMP)  ; LAB_0042d809
    FLDZ                                ; 0042d5c1
    FCOMP float ptr [EBX + 0xcd88]      ; 0042d5c3
    FNSTSW AX                           ; 0042d5c9
    SAHF                                ; 0042d5cb
    JC 0x0042d60c                       ; 0042d5cc
        ;   XREF to: 0042d60c (CONDITIONAL_JUMP)  ; LAB_0042d60c
    PUSH 0x41000000                     ; 0042d5ce
    PUSH 0x40a00000                     ; 0042d5d3
    CALL core_actor.cpp_FUN_0040ce40    ; 0042d5d8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBX + 0xcd78],0x0    ; 0042d5dd
    MOV dword ptr [EBX + 0xcd7c],0x0    ; 0042d5e7
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d5f1
    MOV dword ptr [EBX + 0xcd84],0x0    ; 0042d5f5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d5ff
    MOV dword ptr [EBX + 0xcd88],EAX    ; 0042d603
    ADD ESP,0x8                         ; 0042d609
    FLD float ptr [EBX + 0xcd8c]        ; 0042d60c
        ;   Label: LAB_0042d60c
    FSUB float ptr [ESP]                ; 0042d612
    FLDZ                                ; 0042d615
    FXCH                                ; 0042d617
    FSTP float ptr [EBX + 0xcd8c]       ; 0042d619
    FCOMP float ptr [EBX + 0xcd8c]      ; 0042d61f
    FNSTSW AX                           ; 0042d625
    SAHF                                ; 0042d627
    JC 0x0042d652                       ; 0042d628
        ;   XREF to: 0042d652 (CONDITIONAL_JUMP)  ; LAB_0042d652
    MOV EAX,[0x006039e0]                ; 0042d62a | g_CScriptPtr
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042d62f | g_CScriptInstance.field4_0x4
    CMP EBX,ESI                         ; 0042d632
    JNZ 0x0042d847                      ; 0042d634
        ;   XREF to: 0042d847 (CONDITIONAL_JUMP)  ; LAB_0042d847
    MOV dword ptr [ESI + 0xcd8c],0x3e19999a ; 0042d63a
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0042d644
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    AND EAX,0x3                         ; 0042d649
    MOV dword ptr [ESI + 0xcd80],EAX    ; 0042d64c
    MOV EAX,dword ptr [EBX + 0xcd78]    ; 0042d652
        ;   Label: LAB_0042d652
    SHL EAX,0x2                         ; 0042d658
    ADD EAX,EBX                         ; 0042d65b
    MOV EBP,dword ptr [EAX + 0xcd94]    ; 0042d65d
    CMP EBP,-0x1                        ; 0042d663
    JZ 0x0042d679                       ; 0042d666
        ;   XREF to: 0042d679 (CONDITIONAL_JUMP)  ; LAB_0042d679
    PUSH EBP                            ; 0042d668
    MOV ECX,dword ptr [EBX + 0xcd90]    ; 0042d669
    PUSH ECX                            ; 0042d66f
    PUSH EDI                            ; 0042d670
    CALL core_charactr.cpp_FUN_0042d390 ; 0042d671
        ;   XREF to: 0042d390 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d390()
    ADD ESP,0xc                         ; 0042d676
    MOV EAX,dword ptr [EBX + 0xcd7c]    ; 0042d679
        ;   Label: LAB_0042d679
    SHL EAX,0x2                         ; 0042d67f
    ADD EAX,EBX                         ; 0042d682
    MOV ESI,dword ptr [EAX + 0xcda4]    ; 0042d684
    CMP ESI,-0x1                        ; 0042d68a
    JZ 0x0042d6a0                       ; 0042d68d
        ;   XREF to: 0042d6a0 (CONDITIONAL_JUMP)  ; LAB_0042d6a0
    PUSH ESI                            ; 0042d68f
    MOV EAX,dword ptr [EBX + 0xcd90]    ; 0042d690
    PUSH EAX                            ; 0042d696
    PUSH EDI                            ; 0042d697
    CALL core_charactr.cpp_FUN_0042d390 ; 0042d698
        ;   XREF to: 0042d390 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d390()
    ADD ESP,0xc                         ; 0042d69d
    MOV EAX,dword ptr [EBX + 0xcd80]    ; 0042d6a0
        ;   Label: LAB_0042d6a0
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xcdb4] ; 0042d6a6
    PUSH EDX                            ; 0042d6ad
    MOV ECX,dword ptr [EBX + 0xcd90]    ; 0042d6ae
    PUSH ECX                            ; 0042d6b4
    PUSH EDI                            ; 0042d6b5
    CALL core_charactr.cpp_FUN_0042d390 ; 0042d6b6
        ;   XREF to: 0042d390 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d390()
    ADD ESP,0xc                         ; 0042d6bb
    ADD ESP,0x8                         ; 0042d6be
    POP EBP                             ; 0042d6c1
    POP EDI                             ; 0042d6c2
    POP ESI                             ; 0042d6c3
    POP EBX                             ; 0042d6c4
    RET                                 ; 0042d6c5
    PUSH 0x0                            ; 0042d6c6
        ;   Label: LAB_0042d6c6
    PUSH 0x5b8276                       ; 0042d6c8 | DAT_005b8276
    PUSH EAX                            ; 0042d6cd
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d6ce
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d6d3
    MOV dword ptr [EBX + 0xcd90],EAX    ; 0042d6d6
    CMP EAX,-0x1                        ; 0042d6dc
    JZ 0x0042d527                       ; 0042d6df
        ;   XREF to: 0042d527 (CONDITIONAL_JUMP)  ; LAB_0042d527
    PUSH 0x0                            ; 0042d6e5
    PUSH 0x5b827b                       ; 0042d6e7 | DAT_005b827b
    PUSH ESI                            ; 0042d6ec
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d6ed
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d6f2
    MOV dword ptr [EBX + 0xcdb4],EAX    ; 0042d6f5
    CMP EAX,-0x1                        ; 0042d6fb
    JZ 0x0042d7fb                       ; 0042d6fe
        ;   XREF to: 0042d7fb (CONDITIONAL_JUMP)  ; LAB_0042d7fb
    PUSH 0x1                            ; 0042d704
    PUSH 0x5b827e                       ; 0042d706 | DAT_005b827e
    PUSH ESI                            ; 0042d70b
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d70c
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d711
    PUSH 0x1                            ; 0042d714
    PUSH 0x5b8281                       ; 0042d716 | DAT_005b8281
    PUSH ESI                            ; 0042d71b
    MOV dword ptr [EBX + 0xcdb8],EAX    ; 0042d71c
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d722
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d727
    PUSH 0x1                            ; 0042d72a
    PUSH 0x5b8284                       ; 0042d72c | DAT_005b8284
    PUSH ESI                            ; 0042d731
    MOV dword ptr [EBX + 0xcdbc],EAX    ; 0042d732
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d738
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d73d
    PUSH 0x0                            ; 0042d740
    PUSH 0x5b8287                       ; 0042d742 | = "e1_left"
    PUSH ESI                            ; 0042d747
    MOV dword ptr [EBX + 0xcdc0],EAX    ; 0042d748
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d74e
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d753
    PUSH 0x0                            ; 0042d756
    PUSH 0x5b828f                       ; 0042d758 | = "e2_left"
    PUSH ESI                            ; 0042d75d
    MOV dword ptr [EBX + 0xcd94],EAX    ; 0042d75e
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d764
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d769
    PUSH 0x0                            ; 0042d76c
    PUSH 0x5b8297                       ; 0042d76e | = "e3_left"
    PUSH ESI                            ; 0042d773
    MOV dword ptr [EBX + 0xcd98],EAX    ; 0042d774
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d77a
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d77f
    PUSH 0x0                            ; 0042d782
    PUSH 0x5b829f                       ; 0042d784 | = "e4_left"
    PUSH ESI                            ; 0042d789
    MOV dword ptr [EBX + 0xcd9c],EAX    ; 0042d78a
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d790
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d795
    PUSH 0x0                            ; 0042d798
    PUSH 0x5b82a7                       ; 0042d79a | = "e1_right"
    PUSH ESI                            ; 0042d79f
    MOV dword ptr [EBX + 0xcda0],EAX    ; 0042d7a0
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d7a6
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d7ab
    PUSH 0x0                            ; 0042d7ae
    PUSH 0x5b82b0                       ; 0042d7b0 | = "e2_right"
    PUSH ESI                            ; 0042d7b5
    MOV dword ptr [EBX + 0xcda4],EAX    ; 0042d7b6
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d7bc
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d7c1
    MOV dword ptr [EBX + 0xcda8],EAX    ; 0042d7c4
    PUSH 0x0                            ; 0042d7ca
    PUSH 0x5b82b9                       ; 0042d7cc | = "e3_right"
    PUSH ESI                            ; 0042d7d1
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d7d2
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d7d7
    PUSH 0x0                            ; 0042d7da
    PUSH 0x5b82c2                       ; 0042d7dc | = "e4_right"
    PUSH ESI                            ; 0042d7e1
    MOV dword ptr [EBX + 0xcdac],EAX    ; 0042d7e2
    CALL core_skeleton.cpp_FUN_0054a310 ; 0042d7e8
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042d7ed
    MOV dword ptr [EBX + 0xcdb0],EAX    ; 0042d7f0
    JMP 0x0042d551                      ; 0042d7f6
        ;   XREF to: 0042d551 (UNCONDITIONAL_JUMP)  ; LAB_0042d551
    MOV dword ptr [EBX + 0xcd90],EAX    ; 0042d7fb
        ;   Label: LAB_0042d7fb
    ADD ESP,0x8                         ; 0042d801
    POP EBP                             ; 0042d804
    POP EDI                             ; 0042d805
    POP ESI                             ; 0042d806
    POP EBX                             ; 0042d807
    RET                                 ; 0042d808
    FLDZ                                ; 0042d809
        ;   Label: LAB_0042d809
    FCOMP float ptr [EBX + 0xcd88]      ; 0042d80b
    FNSTSW AX                           ; 0042d811
    SAHF                                ; 0042d813
    JC 0x0042d60c                       ; 0042d814
        ;   XREF to: 0042d60c (CONDITIONAL_JUMP)  ; LAB_0042d60c
    MOV dword ptr [EBX + 0xcd7c],0x3    ; 0042d81a
    MOV dword ptr [EBX + 0xcd84],0x1    ; 0042d824
    MOV dword ptr [EBX + 0xcd88],0x3d4ccccd ; 0042d82e
    MOV dword ptr [EBX + 0xcd78],0x3    ; 0042d838
    JMP 0x0042d60c                      ; 0042d842
        ;   XREF to: 0042d60c (UNCONDITIONAL_JUMP)  ; LAB_0042d60c
    MOV dword ptr [EBX + 0xcd80],0x0    ; 0042d847
        ;   Label: LAB_0042d847
    MOV dword ptr [EBX + 0xcd8c],0x0    ; 0042d851
    JMP 0x0042d652                      ; 0042d85b
        ;   XREF to: 0042d652 (UNCONDITIONAL_JUMP)  ; LAB_0042d652

