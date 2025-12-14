; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00538df0()
;
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005386a3
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_00523f20
;   core_msnedit.cpp_FUN_00538ea0
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00538df0
        ;   Label: core_msnedit.cpp_FUN_00538df0
    PUSH EBP                            ; 00538df1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00538df2
    MOV EBP,dword ptr [ESP + 0x10]      ; 00538df6
    TEST EBP,EBP                        ; 00538dfa
    JL 0x00538e9b                       ; 00538dfc
        ;   XREF to: 00538e9b (CONDITIONAL_JUMP)  ; LAB_00538e9b
    CMP EBP,dword ptr [EDI + 0x144]     ; 00538e02
    JGE 0x00538e9b                      ; 00538e08
        ;   XREF to: 00538e9b (CONDITIONAL_JUMP)  ; LAB_00538e9b
    PUSH ESI                            ; 00538e0e
    PUSH EBX                            ; 00538e0f
    MOV EBX,dword ptr [EDI + 0x548]     ; 00538e10
    TEST EBX,EBX                        ; 00538e16
    JZ 0x00538e43                       ; 00538e18
        ;   XREF to: 00538e43 (CONDITIONAL_JUMP)  ; LAB_00538e43
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00538e1a
        ;   Label: LAB_00538e1a
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00538e1d
    CMP EBP,ECX                         ; 00538e23
    JNZ 0x00538e3d                      ; 00538e25
        ;   XREF to: 00538e3d (CONDITIONAL_JUMP)  ; LAB_00538e3d
    PUSH EBX                            ; 00538e27
    PUSH EDI                            ; 00538e28
    CALL core_msnedit.cpp_FUN_00538ea0  ; 00538e29
        ;   XREF to: 00538ea0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00538ea0()
    ADD ESP,0x8                         ; 00538e2e
    PUSH 0x1                            ; 00538e31
    PUSH EBX                            ; 00538e33
    PUSH EDI                            ; 00538e34
    CALL core_mission.cpp_CDemonMission_FUN_00523f20 ; 00538e35
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 00538e3a
    MOV EBX,ESI                         ; 00538e3d
        ;   Label: LAB_00538e3d
    TEST ESI,ESI                        ; 00538e3f
    JNZ 0x00538e1a                      ; 00538e41
        ;   XREF to: 00538e1a (CONDITIONAL_JUMP)  ; LAB_00538e1a
    MOV EBX,dword ptr [EDI + 0x548]     ; 00538e43
        ;   Label: LAB_00538e43
    TEST EBX,EBX                        ; 00538e49
    JZ 0x00538e70                       ; 00538e4b
        ;   XREF to: 00538e70 (CONDITIONAL_JUMP)  ; LAB_00538e70
    PUSH EBP                            ; 00538e4d
        ;   Label: LAB_00538e4d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00538e4e
    PUSH EBX                            ; 00538e54
    CALL dword ptr [EAX + 0xc8]         ; 00538e55
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00538e5b
    ADD ESP,0x8                         ; 00538e61
    TEST EBX,EBX                        ; 00538e64
    JNZ 0x00538e4d                      ; 00538e66
        ;   XREF to: 00538e4d (CONDITIONAL_JUMP)  ; LAB_00538e4d
    LEA EAX,[EAX]                       ; 00538e68
    MOV EDX,EDX                         ; 00538e6e
    MOV EBX,dword ptr [EDI + 0x144]     ; 00538e70
        ;   Label: LAB_00538e70
    DEC EBX                             ; 00538e76
    MOV EAX,EBX                         ; 00538e77
    SUB EAX,EBP                         ; 00538e79
    SHL EAX,0x8                         ; 00538e7b
    PUSH EAX                            ; 00538e7e
    MOV EAX,EBP                         ; 00538e7f
    ADD EDI,0x148                       ; 00538e81
    SHL EAX,0x8                         ; 00538e87
    ADD EAX,EDI                         ; 00538e8a
    PUSH EAX                            ; 00538e8c
    PUSH EAX                            ; 00538e8d
    MOV dword ptr [EDI + -0x4],EBX      ; 00538e8e
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00538e91
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00538e96
    POP EBX                             ; 00538e99
    POP ESI                             ; 00538e9a
    POP EBP                             ; 00538e9b
        ;   Label: LAB_00538e9b
    POP EDI                             ; 00538e9c
    RET                                 ; 00538e9d

