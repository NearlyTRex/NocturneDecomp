; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_vampboss.cpp_CVampireBoss_FUN_005e75f0(CVampireBoss * this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042bc20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e75f0
        ;   Label: core_vampboss.cpp_CVampireBoss_FUN_005e75f0
    PUSH ESI                            ; 005e75f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005e75f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e75f6
    CMP dword ptr [EBX],0x2             ; 005e75fa
    JNZ 0x005e7604                      ; 005e75fd | LAB_005e7604
        ;   XREF to: 005e7604 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005e75ff
        ;   Label: LAB_005e75ff
    POP ESI                             ; 005e7601
    POP EBX                             ; 005e7602
    RET                                 ; 005e7603
    PUSH ESI                            ; 005e7604
        ;   Label: LAB_005e7604
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e7605
    CALL dword ptr [EAX + 0x120]        ; 005e760b
    ADD ESP,0x4                         ; 005e7611
    CMP EAX,0x1                         ; 005e7614
    JG 0x005e75ff                       ; 005e7617 | LAB_005e75ff
        ;   XREF to: 005e75ff (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX]             ; 005e7619
    CMP ECX,0x1                         ; 005e761b
    JNZ 0x005e763a                      ; 005e761e | LAB_005e763a
        ;   XREF to: 005e763a (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0xcdcc0],0x2   ; 005e7620
        ;   Label: LAB_005e7620
    JNZ 0x005e763f                      ; 005e7627 | LAB_005e763f
        ;   XREF to: 005e763f (CONDITIONAL_JUMP)
    ADD ESI,0xbebc                      ; 005e7629
    MOV EAX,0x1                         ; 005e762f
    MOV dword ptr [EBX + 0x20],ESI      ; 005e7634
    POP ESI                             ; 005e7637
    POP EBX                             ; 005e7638
    RET                                 ; 005e7639
    CMP ECX,0x3                         ; 005e763a
        ;   Label: LAB_005e763a
    JZ 0x005e7620                       ; 005e763d | LAB_005e7620
        ;   XREF to: 005e7620 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005e763f
        ;   Label: LAB_005e763f
    PUSH ESI                            ; 005e7640
    CALL core_charactr.cpp_CCharacter_FUN_0042bc20 ; 005e7641 | int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e7646
    POP ESI                             ; 005e7649
    POP EBX                             ; 005e764a
    RET                                 ; 005e764b

