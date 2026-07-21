; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c_getenv_FUN_00566e10(char *param_1)
;
;
; XREF[7]:
;   FUN_0049cc10 at 0049d613
;   FUN_0049f930 at 0049fece
;   FUN_004c85f0 at 004c8622
;   FUN_005687bc at 005687d4
;   FUN_0056d608 at 0056d60d
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dc1e
;   core_netgame.cpp_CNetGame_init_FUN_004e9910 at 004e994a
;
; Referenced Globals:
;   undefined4 DAT_02de54a4
;
; Called Functions:
;   FUN_0056dcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566e10
        ;   Label: crt_env.c_getenv_FUN_00566e10
    PUSH ESI                            ; 00566e11
    PUSH EDI                            ; 00566e12
    PUSH EBP                            ; 00566e13
    MOV EBP,dword ptr [ESP + 0x14]      ; 00566e14
    MOV ESI,dword ptr [0x02de54a4]      ; 00566e18 | DAT_02de54a4
    TEST ESI,ESI                        ; 00566e1e
    JZ 0x00566e64                       ; 00566e20
        ;   XREF to: 00566e64 (CONDITIONAL_JUMP)  ; LAB_00566e64
    TEST EBP,EBP                        ; 00566e22
    JZ 0x00566e64                       ; 00566e24
        ;   XREF to: 00566e64 (CONDITIONAL_JUMP)  ; LAB_00566e64
    MOV EDI,EBP                         ; 00566e26
    PUSH ES                             ; 00566e28
    MOV AX,DS                           ; 00566e29
    MOV ES,AX                           ; 00566e2b
    SUB ECX,ECX                         ; 00566e2d
    DEC ECX                             ; 00566e2f
    XOR EAX,EAX                         ; 00566e30
    SCASB.REPNE ES:EDI                  ; 00566e32
    NOT ECX                             ; 00566e34
    DEC ECX                             ; 00566e36
    POP ES                              ; 00566e37
    MOV EDI,ECX                         ; 00566e38
    JMP 0x00566e5e                      ; 00566e3a
        ;   XREF to: 00566e5e (UNCONDITIONAL_JUMP)  ; LAB_00566e5e
    PUSH EDI                            ; 00566e3c
        ;   Label: LAB_00566e3c
    PUSH EBP                            ; 00566e3d
    PUSH EBX                            ; 00566e3e
    CALL FUN_0056dcd0                   ; 00566e3f
        ;   XREF to: 0056dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dcd0()
    ADD ESP,0xc                         ; 00566e44
    TEST EAX,EAX                        ; 00566e47
    JNZ 0x00566e5b                      ; 00566e49
        ;   XREF to: 00566e5b (CONDITIONAL_JUMP)  ; LAB_00566e5b
    CMP byte ptr [EDI + EBX*0x1],0x3d   ; 00566e4b
    JNZ 0x00566e5b                      ; 00566e4f
        ;   XREF to: 00566e5b (CONDITIONAL_JUMP)  ; LAB_00566e5b
    LEA EAX,[EDI + 0x1]                 ; 00566e51
    ADD EAX,EBX                         ; 00566e54
    POP EBP                             ; 00566e56
    POP EDI                             ; 00566e57
    POP ESI                             ; 00566e58
    POP EBX                             ; 00566e59
    RET                                 ; 00566e5a
    ADD ESI,0x4                         ; 00566e5b
        ;   Label: LAB_00566e5b
    MOV EBX,dword ptr [ESI]             ; 00566e5e
        ;   Label: LAB_00566e5e
    TEST EBX,EBX                        ; 00566e60
    JNZ 0x00566e3c                      ; 00566e62
        ;   XREF to: 00566e3c (CONDITIONAL_JUMP)  ; LAB_00566e3c
    XOR EAX,EAX                         ; 00566e64
        ;   Label: LAB_00566e64
    POP EBP                             ; 00566e66
    POP EDI                             ; 00566e67
    POP ESI                             ; 00566e68
    POP EBX                             ; 00566e69
    RET                                 ; 00566e6a

