; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_confzomb_cpp_FUN_005a24a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005eff17
;   TerminatedCString s_Animation_005eff1d
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a24a0
        ;   Label: core_confzomb.cpp_FUN_005a24a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a24a1
    PUSH 0x5eff17                       ; 005a24a5 | = "Death"
    ADD EBX,0x10af8                     ; 005a24aa
    PUSH EBX                            ; 005a24b0
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a24b1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a24b6
    TEST EAX,EAX                        ; 005a24b9
    JZ 0x005a24e3                       ; 005a24bb
        ;   XREF to: 005a24e3 (CONDITIONAL_JUMP)  ; LAB_005a24e3
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a24bd
        ;   Label: LAB_005a24bd
    ADD EAX,0x2b4                       ; 005a24c1
    PUSH EAX                            ; 005a24c6
    CALL core_motion.cpp_FUN_005035c0   ; 005a24c7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a24cc
    ADD ESP,0x4                         ; 005a24cf
    CMP EAX,0x5                         ; 005a24d2
    JC 0x005a24dc                       ; 005a24d5
        ;   XREF to: 005a24dc (CONDITIONAL_JUMP)  ; LAB_005a24dc
    JBE 0x005a24f7                      ; 005a24d7
        ;   XREF to: 005a24f7 (CONDITIONAL_JUMP)  ; LAB_005a24f7
    CMP EAX,0x6                         ; 005a24d9
    MOV EAX,0x2                         ; 005a24dc
        ;   Label: LAB_005a24dc
    POP EBX                             ; 005a24e1
    RET                                 ; 005a24e2
    PUSH 0x5eff1d                       ; 005a24e3 | = "Animation"
        ;   Label: LAB_005a24e3
    PUSH EBX                            ; 005a24e8
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a24e9
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a24ee
    TEST EAX,EAX                        ; 005a24f1
    JNZ 0x005a24bd                      ; 005a24f3
        ;   XREF to: 005a24bd (CONDITIONAL_JUMP)  ; LAB_005a24bd
    POP EBX                             ; 005a24f5
    RET                                 ; 005a24f6
    MOV EAX,0x1                         ; 005a24f7
        ;   Label: LAB_005a24f7
    POP EBX                             ; 005a24fc
    RET                                 ; 005a24fd

