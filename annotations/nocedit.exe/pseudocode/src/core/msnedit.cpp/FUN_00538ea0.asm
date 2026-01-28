; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_FUN_00538ea0(void)
;
;
; XREF[4]:
;   core_msnedit.cpp_FUN_00538df0 at 00538e29
;   core_msnedit.cpp_FUN_0053d8b0 at 0053dbb8
;   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 at 0053bca5
;   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 at 0053cec8
;
; Called Functions:
;   core_actor.cpp_FUN_0040e130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538ea0
        ;   Label: core_msnedit.cpp_FUN_00538ea0
    PUSH ESI                            ; 00538ea1
    PUSH EDI                            ; 00538ea2
    SUB ESP,0x2504                      ; 00538ea3
    MOV EBX,dword ptr [ESP + 0x2518]    ; 00538ea9
    MOV ESI,dword ptr [ESP + 0x2514]    ; 00538eb0
    MOV ESI,dword ptr [ESI + 0x548]     ; 00538eb7
    TEST ESI,ESI                        ; 00538ebd
    JZ 0x00538ecf                       ; 00538ebf
        ;   XREF to: 00538ecf (CONDITIONAL_JUMP)  ; LAB_00538ecf
    CMP ESI,EBX                         ; 00538ec1
        ;   Label: LAB_00538ec1
    JNZ 0x00538ed9                      ; 00538ec3
        ;   XREF to: 00538ed9 (CONDITIONAL_JUMP)  ; LAB_00538ed9
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00538ec5
        ;   Label: LAB_00538ec5
    TEST ESI,ESI                        ; 00538ecb
    JNZ 0x00538ec1                      ; 00538ecd
        ;   XREF to: 00538ec1 (CONDITIONAL_JUMP)  ; LAB_00538ec1
    ADD ESP,0x2504                      ; 00538ecf
        ;   Label: LAB_00538ecf
    POP EDI                             ; 00538ed5
    POP ESI                             ; 00538ed6
    POP EBX                             ; 00538ed7
    RET                                 ; 00538ed8
    PUSH EBX                            ; 00538ed9
        ;   Label: LAB_00538ed9
    MOV EAX,dword ptr [ESI + 0x154]     ; 00538eda
    PUSH ESI                            ; 00538ee0
    CALL dword ptr [EAX + 0xcc]         ; 00538ee1
    ADD ESP,0x8                         ; 00538ee7
    MOV EAX,ESP                         ; 00538eea
    PUSH EAX                            ; 00538eec
    CALL core_actor.cpp_FUN_0040e130    ; 00538eed
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e130()
    ADD ESP,0x4                         ; 00538ef2
    MOV EAX,ESP                         ; 00538ef5
    PUSH EAX                            ; 00538ef7
    MOV EDX,dword ptr [ESI + 0x154]     ; 00538ef8
    PUSH ESI                            ; 00538efe
    CALL dword ptr [EDX + 0xd4]         ; 00538eff
    ADD ESP,0x8                         ; 00538f05
    MOV ECX,dword ptr [ESP + 0x4]       ; 00538f08
    XOR EDX,EDX                         ; 00538f0c
    TEST ECX,ECX                        ; 00538f0e
    JLE 0x00538ec5                      ; 00538f10
        ;   XREF to: 00538ec5 (CONDITIONAL_JUMP)  ; LAB_00538ec5
    XOR EAX,EAX                         ; 00538f12
    CMP dword ptr [ESP + EAX*0x1 + 0x8],0x5 ; 00538f14
        ;   Label: LAB_00538f14
    JZ 0x00538f2b                       ; 00538f19
        ;   XREF to: 00538f2b (CONDITIONAL_JUMP)  ; LAB_00538f2b
    MOV EDI,dword ptr [ESP + 0x4]       ; 00538f1b
        ;   Label: LAB_00538f1b
    INC EDX                             ; 00538f1f
    ADD EAX,0xec                        ; 00538f20
    CMP EDX,EDI                         ; 00538f25
    JGE 0x00538ec5                      ; 00538f27
        ;   XREF to: 00538ec5 (CONDITIONAL_JUMP)  ; LAB_00538ec5
    JMP 0x00538f14                      ; 00538f29
        ;   XREF to: 00538f14 (UNCONDITIONAL_JUMP)  ; LAB_00538f14
    MOV ECX,dword ptr [ESP + EAX*0x1 + 0x70] ; 00538f2b
        ;   Label: LAB_00538f2b
    CMP EBX,dword ptr [ECX]             ; 00538f2f
    JNZ 0x00538f1b                      ; 00538f31
        ;   XREF to: 00538f1b (CONDITIONAL_JUMP)  ; LAB_00538f1b
    MOV dword ptr [ECX],0x0             ; 00538f33
    JMP 0x00538f1b                      ; 00538f39
        ;   XREF to: 00538f1b (UNCONDITIONAL_JUMP)  ; LAB_00538f1b

