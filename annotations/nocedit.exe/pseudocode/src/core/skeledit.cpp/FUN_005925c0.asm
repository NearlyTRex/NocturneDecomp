; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_005925c0()
;
;
; XREF[1]:
;   core_skeledit.cpp_FUN_00592690 at 00593c46
;
; Referenced Globals:
;   TerminatedCString s_skipTo_0064bfff
;   TerminatedCString s_flowTo_0064c006
;   TerminatedCString s_tweenPoseToPose_0064c00d
;   TerminatedCString s_tweenPoseToMotion_0064c01d
;   TerminatedCString s_tweenMotionToPose_0064c02f
;   TerminatedCString s_tweenMotionToMotion_0064c041
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 005925c0
        ;   Label: core_skeledit.cpp_FUN_005925c0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 005925c5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005925ca
    MOV EBX,dword ptr [ESP + 0x8]       ; 005925cb
    PUSH 0x64bfff                       ; 005925cf | = "skipTo" | s_skipTo_0064bfff = skipTo
    PUSH EBX                            ; 005925d4
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005925d5 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005925da
    TEST EAX,EAX                        ; 005925dd
    JNZ 0x005925e8                      ; 005925df | LAB_005925e8
        ;   XREF to: 005925e8 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005925e1
    POP EBX                             ; 005925e6
    RET                                 ; 005925e7
    PUSH 0x64c006                       ; 005925e8 | = "flowTo" | s_flowTo_0064c006 = flowTo
        ;   Label: LAB_005925e8
    PUSH EBX                            ; 005925ed
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005925ee | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005925f3
    TEST EAX,EAX                        ; 005925f6
    JNZ 0x00592601                      ; 005925f8 | LAB_00592601
        ;   XREF to: 00592601 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 005925fa
    POP EBX                             ; 005925ff
    RET                                 ; 00592600
    PUSH 0x64c00d                       ; 00592601 | = "tweenPoseToPose" | s_tweenPoseToPose_0064c00d = tweenPoseToPose
        ;   Label: LAB_00592601
    PUSH EBX                            ; 00592606
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00592607 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0059260c
    TEST EAX,EAX                        ; 0059260f
    JNZ 0x0059261a                      ; 00592611 | LAB_0059261a
        ;   XREF to: 0059261a (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 00592613
    POP EBX                             ; 00592618
    RET                                 ; 00592619
    PUSH 0x64c01d                       ; 0059261a | = "tweenPoseToMotion" | s_tweenPoseToMotion_0064c01d = tweenPoseToMotion
        ;   Label: LAB_0059261a
    PUSH EBX                            ; 0059261f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00592620 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00592625
    TEST EAX,EAX                        ; 00592628
    JNZ 0x00592633                      ; 0059262a | LAB_00592633
        ;   XREF to: 00592633 (CONDITIONAL_JUMP)
    MOV EAX,0x4                         ; 0059262c
    POP EBX                             ; 00592631
    RET                                 ; 00592632
    PUSH 0x64c02f                       ; 00592633 | = "tweenMotionToPose" | s_tweenMotionToPose_0064c02f = tweenMotionToPose
        ;   Label: LAB_00592633
    PUSH EBX                            ; 00592638
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00592639 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0059263e
    TEST EAX,EAX                        ; 00592641
    JNZ 0x0059264c                      ; 00592643 | LAB_0059264c
        ;   XREF to: 0059264c (CONDITIONAL_JUMP)
    MOV EAX,0x5                         ; 00592645
    POP EBX                             ; 0059264a
    RET                                 ; 0059264b
    PUSH 0x64c041                       ; 0059264c | = "tweenMotionToMotion" | s_tweenMotionToMotion_0064c041 = tweenMotionToMotion
        ;   Label: LAB_0059264c
    PUSH EBX                            ; 00592651
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00592652 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00592657
    TEST EAX,EAX                        ; 0059265a
    JNZ 0x00592665                      ; 0059265c | LAB_00592665
        ;   XREF to: 00592665 (CONDITIONAL_JUMP)
    MOV EAX,0x6                         ; 0059265e
    POP EBX                             ; 00592663
    RET                                 ; 00592664
    XOR EAX,EAX                         ; 00592665
        ;   Label: LAB_00592665
    POP EBX                             ; 00592667
    RET                                 ; 00592668

