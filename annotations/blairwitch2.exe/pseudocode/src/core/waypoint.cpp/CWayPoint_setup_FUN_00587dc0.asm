; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_00587dc0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_patrpoin.cpp_CPatrolPoint_setup_FUN_0059c670 at 0059c675
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_trigger.cpp_CTrigger_setup_FUN_005778a0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587dc0
        ;   Label: core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0
    PUSH ESI                            ; 00587dc1
    PUSH EBP                            ; 00587dc2
    SUB ESP,0xc                         ; 00587dc3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00587dc6
    PUSH ESI                            ; 00587dca
    CALL core_trigger.cpp_CTrigger_setup_FUN_005778a0 ; 00587dcb
        ;   XREF to: 005778a0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_setup_FUN_005778a0(CTrigger * this_ptr)
    XOR EBX,EBX                         ; 00587dd0
    ADD ESP,0x4                         ; 00587dd2
    MOV EDX,dword ptr [ESI + 0x4d0]     ; 00587dd5
    MOV dword ptr [ESI + 0xf8],0x1      ; 00587ddb
    TEST EDX,EDX                        ; 00587de5
    JLE 0x00587e29                      ; 00587de7
        ;   XREF to: 00587e29 (CONDITIONAL_JUMP)  ; LAB_00587e29
    PUSH EDI                            ; 00587de9
    LEA ECX,[ESI + 0x20]                ; 00587dea
    MOV EDX,ESI                         ; 00587ded
    MOV EAX,dword ptr [EDX + 0x4d4]     ; 00587def
        ;   Label: LAB_00587def
    FLD float ptr [ECX]                 ; 00587df5
    FSUB float ptr [EAX + 0x20]         ; 00587df7
    FMUL ST0                            ; 00587dfa
    FLD float ptr [ECX + 0x4]           ; 00587dfc
    FSUB float ptr [EAX + 0x24]         ; 00587dff
    FMUL ST0                            ; 00587e02
    FLD float ptr [ECX + 0x8]           ; 00587e04
    FXCH                                ; 00587e07
    FADDP ST2,ST0                       ; 00587e09
    FSUB float ptr [EAX + 0x28]         ; 00587e0b
    FMUL ST0                            ; 00587e0e
    FADDP                               ; 00587e10
    FSQRT                               ; 00587e12
    INC EBX                             ; 00587e14
    FSTP float ptr [EDX + 0x4d8]        ; 00587e15
    MOV EDI,dword ptr [ESI + 0x4d0]     ; 00587e1b
    ADD EDX,0x8                         ; 00587e21
    CMP EBX,EDI                         ; 00587e24
    JL 0x00587def                       ; 00587e26
        ;   XREF to: 00587def (CONDITIONAL_JUMP)  ; LAB_00587def
    POP EDI                             ; 00587e28
    CMP byte ptr [ESI + 0x78],0x0       ; 00587e29
        ;   Label: LAB_00587e29
    JNZ 0x00587e36                      ; 00587e2d
        ;   XREF to: 00587e36 (CONDITIONAL_JUMP)  ; LAB_00587e36
    ADD ESP,0xc                         ; 00587e2f
        ;   Label: LAB_00587e2f
    POP EBP                             ; 00587e32
    POP ESI                             ; 00587e33
    POP EBX                             ; 00587e34
    RET                                 ; 00587e35
    PUSH 0x5ee0bf                       ; 00587e36
        ;   Label: LAB_00587e36
    ADD ESI,0x78                        ; 00587e3b
    PUSH ESI                            ; 00587e3e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00587e3f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00587e44
    TEST EAX,EAX                        ; 00587e47
    JZ 0x00587e2f                       ; 00587e49
        ;   XREF to: 00587e2f (CONDITIONAL_JUMP)  ; LAB_00587e2f
    PUSH 0x5ee0c4                       ; 00587e4b
    PUSH ESI                            ; 00587e50
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00587e51
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00587e56
    TEST EAX,EAX                        ; 00587e59
    JZ 0x00587e2f                       ; 00587e5b
        ;   XREF to: 00587e2f (CONDITIONAL_JUMP)  ; LAB_00587e2f
    MOV EBP,0x5ee0c9                    ; 00587e5d
    MOV EAX,0x8b                        ; 00587e62
    PUSH 0x5ee0de                       ; 00587e67
    MOV dword ptr [0x01d046a0],EBP      ; 00587e6c | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00587e72 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00587e77
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00587e7c
    ADD ESP,0xc                         ; 00587e7f
    POP EBP                             ; 00587e82
    POP ESI                             ; 00587e83
    POP EBX                             ; 00587e84
    RET                                 ; 00587e85

