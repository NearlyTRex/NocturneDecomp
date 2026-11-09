; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hag_cpp_FUN_005aa970(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   core_hag.cpp_CHag_ctor_FUN_005aa600 at 005aa6d8
;
; Referenced Globals:
;   TerminatedCString s_HagAlert_005f0b88
;   TerminatedCString s_HagAlert_005f0b91
;   TerminatedCString s_MeleeAttack_005f0b9a
;   TerminatedCString s_MeleeAttack_005f0ba6
;   TerminatedCString s_Healing_005f0bb2
;   TerminatedCString s_Healing_005f0bba
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059d650
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkafter_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa970
        ;   Label: core_hag.cpp_FUN_005aa970
    PUSH ESI                            ; 005aa971
    MOV ESI,dword ptr [ESP + 0xc]       ; 005aa972
    MOV EBX,dword ptr [ESP + 0x14]      ; 005aa976
    TEST EBX,EBX                        ; 005aa97a
    JNZ 0x005aa9ba                      ; 005aa97c
        ;   XREF to: 005aa9ba (CONDITIONAL_JUMP)  ; LAB_005aa9ba
    LEA EAX,[ESI + 0x10af8]             ; 005aa97e
        ;   Label: LAB_005aa97e
    TEST EBX,EBX                        ; 005aa984
    JBE 0x005aa9ca                      ; 005aa986
        ;   XREF to: 005aa9ca (CONDITIONAL_JUMP)  ; LAB_005aa9ca
    CMP EBX,0x1                         ; 005aa988
    JZ 0x005aa9da                       ; 005aa98b
        ;   XREF to: 005aa9da (CONDITIONAL_JUMP)  ; LAB_005aa9da
    LEA EAX,[ESI + 0x10af8]             ; 005aa98d
        ;   Label: LAB_005aa98d
    TEST EBX,EBX                        ; 005aa993
    JBE 0x005aaa03                      ; 005aa995
        ;   XREF to: 005aaa03 (CONDITIONAL_JUMP)  ; LAB_005aaa03
    CMP EBX,0x1                         ; 005aa997
    JZ 0x005aaa13                       ; 005aa99a
        ;   XREF to: 005aaa13 (CONDITIONAL_JUMP)  ; LAB_005aaa13
    LEA EAX,[ESI + 0x10af8]             ; 005aa9a0
        ;   Label: LAB_005aa9a0
    TEST EBX,EBX                        ; 005aa9a6
    JBE 0x005aaa40                      ; 005aa9a8
        ;   XREF to: 005aaa40 (CONDITIONAL_JUMP)  ; LAB_005aaa40
    CMP EBX,0x1                         ; 005aa9ae
    JZ 0x005aaa51                       ; 005aa9b1
        ;   XREF to: 005aaa51 (CONDITIONAL_JUMP)  ; LAB_005aaa51
    POP ESI                             ; 005aa9b7
        ;   Label: LAB_005aa9b7
    POP EBX                             ; 005aa9b8
    RET                                 ; 005aa9b9
    PUSH EBX                            ; 005aa9ba
        ;   Label: LAB_005aa9ba
    PUSH dword ptr [ESP + 0x14]         ; 005aa9bb
    PUSH ESI                            ; 005aa9bf
    CALL unkafter_basicene.cpp_FUN_0059e8c0 ; 005aa9c0
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005aa9c5
    JMP 0x005aa97e                      ; 005aa9c8
        ;   XREF to: 005aa97e (UNCONDITIONAL_JUMP)  ; LAB_005aa97e
    PUSH 0x5f0b88                       ; 005aa9ca | = "HagAlert"
        ;   Label: LAB_005aa9ca
    PUSH EAX                            ; 005aa9cf
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005aa9d0
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005aa9d5
    JMP 0x005aa98d                      ; 005aa9d8
        ;   XREF to: 005aa98d (UNCONDITIONAL_JUMP)  ; LAB_005aa98d
    PUSH 0x5f0b91                       ; 005aa9da | = "HagAlert"
        ;   Label: LAB_005aa9da
    PUSH EAX                            ; 005aa9df
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aa9e0
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aa9e5
    TEST EAX,EAX                        ; 005aa9e8
    JZ 0x005aa98d                       ; 005aa9ea
        ;   XREF to: 005aa98d (CONDITIONAL_JUMP)  ; LAB_005aa98d
    PUSH dword ptr [ESP + 0x10]         ; 005aa9ec
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005aa9f0
    PUSH ESI                            ; 005aa9f6
    CALL dword ptr [EAX + 0x180]        ; 005aa9f7
    ADD ESP,0x8                         ; 005aa9fd
    POP ESI                             ; 005aaa00
    POP EBX                             ; 005aaa01
    RET                                 ; 005aaa02
    PUSH 0x5f0b9a                       ; 005aaa03 | = "MeleeAttack"
        ;   Label: LAB_005aaa03
    PUSH EAX                            ; 005aaa08
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005aaa09
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005aaa0e
    JMP 0x005aa9a0                      ; 005aaa11
        ;   XREF to: 005aa9a0 (UNCONDITIONAL_JUMP)  ; LAB_005aa9a0
    PUSH 0x5f0ba6                       ; 005aaa13 | = "MeleeAttack"
        ;   Label: LAB_005aaa13
    PUSH EAX                            ; 005aaa18
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aaa19
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aaa1e
    TEST EAX,EAX                        ; 005aaa21
    JZ 0x005aa9a0                       ; 005aaa23
        ;   XREF to: 005aa9a0 (CONDITIONAL_JUMP)  ; LAB_005aa9a0
    PUSH dword ptr [ESP + 0x10]         ; 005aaa29
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005aaa2d
    PUSH ESI                            ; 005aaa33
    CALL dword ptr [EAX + 0x184]        ; 005aaa34
    ADD ESP,0x8                         ; 005aaa3a
    POP ESI                             ; 005aaa3d
    POP EBX                             ; 005aaa3e
    RET                                 ; 005aaa3f
    PUSH 0x5f0bb2                       ; 005aaa40 | = "Healing"
        ;   Label: LAB_005aaa40
    PUSH EAX                            ; 005aaa45
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005aaa46
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005aaa4b
    POP ESI                             ; 005aaa4e
    POP EBX                             ; 005aaa4f
    RET                                 ; 005aaa50
    PUSH 0x5f0bba                       ; 005aaa51 | = "Healing"
        ;   Label: LAB_005aaa51
    PUSH EAX                            ; 005aaa56
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005aaa57
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005aaa5c
    TEST EAX,EAX                        ; 005aaa5f
    JZ 0x005aa9b7                       ; 005aaa61
        ;   XREF to: 005aa9b7 (CONDITIONAL_JUMP)  ; LAB_005aa9b7
    PUSH dword ptr [ESP + 0x10]         ; 005aaa67
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005aaa6b
    PUSH ESI                            ; 005aaa71
    CALL dword ptr [EAX + 0x188]        ; 005aaa72
    ADD ESP,0x8                         ; 005aaa78
    POP ESI                             ; 005aaa7b
    POP EBX                             ; 005aaa7c
    RET                                 ; 005aaa7d

