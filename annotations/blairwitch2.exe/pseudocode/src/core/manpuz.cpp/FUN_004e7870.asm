; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004e7870(CDemonActor *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc72d
;   undefined4 DAT_005dc731
;   undefined4 DAT_005dc735
;   undefined4 DAT_00617dd4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7870
        ;   Label: core_manpuz.cpp_FUN_004e7870
    PUSH EBP                            ; 004e7871
    MOV EBP,ESP                         ; 004e7872
    SUB ESP,0x4                         ; 004e7874
    AND ESP,0xfffffff8                  ; 004e7877
    MOV EBX,dword ptr [EBP + 0xc]       ; 004e787a
    FLD float ptr [EBP + 0x10]          ; 004e787d
    FMUL float ptr [0x005dc72d]         ; 004e7880 | DAT_005dc72d
    FDIV float ptr [0x005dc731]         ; 004e7886 | DAT_005dc731
    PUSH 0x38                           ; 004e788c
    MOV EAX,[0x00617dd4]                ; 004e788e | DAT_00617dd4
    PUSH EAX                            ; 004e7893
    MOV EDX,dword ptr [EAX]             ; 004e7894
    FSTP float ptr [ESP + 0x8]          ; 004e7896
    CALL dword ptr [EDX]                ; 004e789a
    ADD ESP,0x8                         ; 004e789c
    TEST EAX,EAX                        ; 004e789f
    JZ 0x004e78af                       ; 004e78a1
        ;   XREF to: 004e78af (CONDITIONAL_JUMP)  ; LAB_004e78af
    FLD float ptr [ESP]                 ; 004e78a3
    FMUL double ptr [0x005dc735]        ; 004e78a6 | DAT_005dc735
    FSTP float ptr [ESP]                ; 004e78ac
    PUSH 0x33                           ; 004e78af
        ;   Label: LAB_004e78af
    MOV EAX,[0x00617dd4]                ; 004e78b1 | DAT_00617dd4
    PUSH EAX                            ; 004e78b6
    MOV EDX,dword ptr [EAX]             ; 004e78b7
    CALL dword ptr [EDX]                ; 004e78b9
    ADD ESP,0x8                         ; 004e78bb
    TEST EAX,EAX                        ; 004e78be
    JZ 0x004e78cb                       ; 004e78c0
        ;   XREF to: 004e78cb (CONDITIONAL_JUMP)  ; LAB_004e78cb
    FLD float ptr [EBX + 0x34]          ; 004e78c2
    FSUB float ptr [ESP]                ; 004e78c5
    FSTP float ptr [EBX + 0x34]         ; 004e78c8
    PUSH 0x34                           ; 004e78cb
        ;   Label: LAB_004e78cb
    MOV EAX,[0x00617dd4]                ; 004e78cd | DAT_00617dd4
    PUSH EAX                            ; 004e78d2
    MOV EDX,dword ptr [EAX]             ; 004e78d3
    CALL dword ptr [EDX]                ; 004e78d5
    ADD ESP,0x8                         ; 004e78d7
    TEST EAX,EAX                        ; 004e78da
    JZ 0x004e78e7                       ; 004e78dc
        ;   XREF to: 004e78e7 (CONDITIONAL_JUMP)  ; LAB_004e78e7
    FLD float ptr [EBX + 0x34]          ; 004e78de
    FADD float ptr [ESP]                ; 004e78e1
    FSTP float ptr [EBX + 0x34]         ; 004e78e4
    PUSH EBX                            ; 004e78e7
        ;   Label: LAB_004e78e7
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004e78e8
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e78ed
    MOV ESP,EBP                         ; 004e78f0
    POP EBP                             ; 004e78f2
    POP EBX                             ; 004e78f3
    RET                                 ; 004e78f4

