; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hand_cpp_FUN_005aa260(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0a80
;   TerminatedCString s_Animation_005f0a86
;   TerminatedCString s_Sleeping_005f0a90
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa260
        ;   Label: core_hand.cpp_FUN_005aa260
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aa261
    PUSH 0x5f0a80                       ; 005aa265 | = "Death"
    ADD EBX,0x10af8                     ; 005aa26a
    PUSH EBX                            ; 005aa270
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aa271
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aa276
    TEST EAX,EAX                        ; 005aa279
    JNZ 0x005aa28f                      ; 005aa27b
        ;   XREF to: 005aa28f (CONDITIONAL_JUMP)  ; LAB_005aa28f
    PUSH 0x5f0a86                       ; 005aa27d | = "Animation"
    PUSH EBX                            ; 005aa282
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aa283
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aa288
    TEST EAX,EAX                        ; 005aa28b
    JZ 0x005aa2b4                       ; 005aa28d
        ;   XREF to: 005aa2b4 (CONDITIONAL_JUMP)  ; LAB_005aa2b4
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa28f
        ;   Label: LAB_005aa28f
    ADD EAX,0x2b4                       ; 005aa293
    PUSH EAX                            ; 005aa298
    CALL core_motion.cpp_FUN_005035c0   ; 005aa299
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005aa29e
    ADD ESP,0x4                         ; 005aa2a1
    TEST EAX,EAX                        ; 005aa2a4
    JBE 0x005aa2ca                      ; 005aa2a6
        ;   XREF to: 005aa2ca (CONDITIONAL_JUMP)  ; LAB_005aa2ca
    CMP EAX,0x5                         ; 005aa2a8
    JNZ 0x005aa2c6                      ; 005aa2ab
        ;   XREF to: 005aa2c6 (CONDITIONAL_JUMP)  ; LAB_005aa2c6
    MOV EAX,0x1                         ; 005aa2ad
    POP EBX                             ; 005aa2b2
    RET                                 ; 005aa2b3
    PUSH 0x5f0a90                       ; 005aa2b4 | = "Sleeping"
        ;   Label: LAB_005aa2b4
    PUSH EBX                            ; 005aa2b9
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aa2ba
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aa2bf
    TEST EAX,EAX                        ; 005aa2c2
    JNZ 0x005aa28f                      ; 005aa2c4
        ;   XREF to: 005aa28f (CONDITIONAL_JUMP)  ; LAB_005aa28f
    XOR EAX,EAX                         ; 005aa2c6
        ;   Label: LAB_005aa2c6
    POP EBX                             ; 005aa2c8
    RET                                 ; 005aa2c9
    MOV EAX,0x2                         ; 005aa2ca
        ;   Label: LAB_005aa2ca
    POP EBX                             ; 005aa2cf
    RET                                 ; 005aa2d0

