; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_0059ed50(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0 at 0059eb35
;
; Called Functions:
;   core_basicene.cpp_FUN_0059ec10
;   core_basicene.cpp_FUN_0059f570
;   core_basicene.cpp_FUN_005a01a0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ed50
        ;   Label: core_basicene.cpp_FUN_0059ed50
    PUSH ESI                            ; 0059ed51
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059ed52
    PUSH dword ptr [ESP + 0x10]         ; 0059ed56
    PUSH EBX                            ; 0059ed5a
    CALL core_basicene.cpp_FUN_0059ec10 ; 0059ed5b
        ;   XREF to: 0059ec10 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059ec10()
    MOV EDX,dword ptr [EBX + 0x113b4]   ; 0059ed60
    ADD ESP,0x8                         ; 0059ed66
    TEST EDX,EDX                        ; 0059ed69
    JNZ 0x0059ed76                      ; 0059ed6b
        ;   XREF to: 0059ed76 (CONDITIONAL_JUMP)  ; LAB_0059ed76
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0059ed6d
    JNZ 0x0059ed9e                      ; 0059ed74
        ;   XREF to: 0059ed9e (CONDITIONAL_JUMP)  ; LAB_0059ed9e
    LEA EAX,[EBX + 0x2b4]               ; 0059ed76
        ;   Label: LAB_0059ed76
    PUSH EAX                            ; 0059ed7c
    CALL core_motion.cpp_FUN_005035c0   ; 0059ed7d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059ed82
    MOV ESI,dword ptr [EBX + 0x11384]   ; 0059ed85
    ADD ESP,0x4                         ; 0059ed8b
    CMP EAX,ESI                         ; 0059ed8e
    JNZ 0x0059ed9b                      ; 0059ed90
        ;   XREF to: 0059ed9b (CONDITIONAL_JUMP)  ; LAB_0059ed9b
    CMP dword ptr [EBX + 0x113b4],0x0   ; 0059ed92
    JNZ 0x0059edcd                      ; 0059ed99
        ;   XREF to: 0059edcd (CONDITIONAL_JUMP)  ; LAB_0059edcd
    POP ESI                             ; 0059ed9b
        ;   Label: LAB_0059ed9b
    POP EBX                             ; 0059ed9c
    RET                                 ; 0059ed9d
    PUSH 0x40000000                     ; 0059ed9e
        ;   Label: LAB_0059ed9e
    PUSH 0x3f800000                     ; 0059eda3
    PUSH dword ptr [EBX + 0x113c4]      ; 0059eda8
    PUSH EBX                            ; 0059edae
    CALL core_basicene.cpp_FUN_005a01a0 ; 0059edaf
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 0059edb4
    PUSH EBX                            ; 0059edb7
    CALL core_basicene.cpp_FUN_0059f570 ; 0059edb8
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 0059edbd
    MOV dword ptr [EBX + 0x113b4],0x1   ; 0059edc0
    POP ESI                             ; 0059edca
    POP EBX                             ; 0059edcb
    RET                                 ; 0059edcc
    PUSH 0x41200000                     ; 0059edcd
        ;   Label: LAB_0059edcd
    PUSH 0x0                            ; 0059edd2
    PUSH dword ptr [EBX + 0x113c4]      ; 0059edd4
    PUSH EBX                            ; 0059edda
    CALL core_basicene.cpp_FUN_005a01a0 ; 0059eddb
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 0059ede0
    PUSH EBX                            ; 0059ede3
    CALL core_basicene.cpp_FUN_0059f570 ; 0059ede4
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 0059ede9
    MOV dword ptr [EBX + 0x113b4],0x0   ; 0059edec
    POP ESI                             ; 0059edf6
    POP EBX                             ; 0059edf7
    RET                                 ; 0059edf8

