; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_werewolf_cpp_FUN_0058dc50(int param_1)
;
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058dc50
        ;   Label: core_werewolf.cpp_FUN_0058dc50
    MOV EDX,dword ptr [EAX + 0x70]      ; 0058dc54
    CMP EDX,0x2                         ; 0058dc57
    JNZ 0x0058dc6b                      ; 0058dc5a
        ;   XREF to: 0058dc6b (CONDITIONAL_JUMP)  ; LAB_0058dc6b
    MOV EAX,EDX                         ; 0058dc5c
    RET                                 ; 0058dc5e
    MOV EAX,0x1                         ; 0058dc5f
        ;   Label: LAB_0058dc5f
    RET                                 ; 0058dc64
    MOV EAX,0x2                         ; 0058dc65
        ;   Label: LAB_0058dc65
    RET                                 ; 0058dc6a
    ADD EAX,0x2b4                       ; 0058dc6b
        ;   Label: LAB_0058dc6b
    PUSH EAX                            ; 0058dc70
    CALL core_motion.cpp_FUN_005035c0   ; 0058dc71
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058dc76
    ADD ESP,0x4                         ; 0058dc79
    CMP EAX,0xc                         ; 0058dc7c
    JC 0x0058dc88                       ; 0058dc7f
        ;   XREF to: 0058dc88 (CONDITIONAL_JUMP)  ; LAB_0058dc88
    JBE 0x0058dc5f                      ; 0058dc81
        ;   XREF to: 0058dc5f (CONDITIONAL_JUMP)  ; LAB_0058dc5f
    CMP EAX,0xd                         ; 0058dc83
    JZ 0x0058dc65                       ; 0058dc86
        ;   XREF to: 0058dc65 (CONDITIONAL_JUMP)  ; LAB_0058dc65
    XOR EAX,EAX                         ; 0058dc88
        ;   Label: LAB_0058dc88
    RET                                 ; 0058dc8a

