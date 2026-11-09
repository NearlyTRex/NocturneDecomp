; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_unionzom_cpp_FUN_005a4580(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0392
;   TerminatedCString s_Animation_005f0398
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4580
        ;   Label: core_unionzom.cpp_FUN_005a4580
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4581
    PUSH 0x5f0392                       ; 005a4585 | = "Death"
    ADD EBX,0x10af8                     ; 005a458a
    PUSH EBX                            ; 005a4590
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4591
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4596
    TEST EAX,EAX                        ; 005a4599
    JZ 0x005a45c3                       ; 005a459b
        ;   XREF to: 005a45c3 (CONDITIONAL_JUMP)  ; LAB_005a45c3
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a459d
        ;   Label: LAB_005a459d
    ADD EAX,0x2b4                       ; 005a45a1
    PUSH EAX                            ; 005a45a6
    CALL core_motion.cpp_FUN_005035c0   ; 005a45a7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a45ac
    ADD ESP,0x4                         ; 005a45af
    CMP EAX,0x5                         ; 005a45b2
    JC 0x005a45bc                       ; 005a45b5
        ;   XREF to: 005a45bc (CONDITIONAL_JUMP)  ; LAB_005a45bc
    JBE 0x005a45d7                      ; 005a45b7
        ;   XREF to: 005a45d7 (CONDITIONAL_JUMP)  ; LAB_005a45d7
    CMP EAX,0x6                         ; 005a45b9
    MOV EAX,0x2                         ; 005a45bc
        ;   Label: LAB_005a45bc
    POP EBX                             ; 005a45c1
    RET                                 ; 005a45c2
    PUSH 0x5f0398                       ; 005a45c3 | = "Animation"
        ;   Label: LAB_005a45c3
    PUSH EBX                            ; 005a45c8
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a45c9
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a45ce
    TEST EAX,EAX                        ; 005a45d1
    JNZ 0x005a459d                      ; 005a45d3
        ;   XREF to: 005a459d (CONDITIONAL_JUMP)  ; LAB_005a459d
    POP EBX                             ; 005a45d5
    RET                                 ; 005a45d6
    MOV EAX,0x1                         ; 005a45d7
        ;   Label: LAB_005a45d7
    POP EBX                             ; 005a45dc
    RET                                 ; 005a45dd

