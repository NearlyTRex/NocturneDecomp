; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00581d10(void)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004b93e0 at 004b93fe
;
; Referenced Globals:
;   void* PTR_joyGetPos_005b3440 = 001b38cc
;   undefined4 DAT_01c6e250
;   undefined4 DAT_01c6e254
;   undefined4 DAT_01c6e258
;   undefined4 DAT_01c6e25c
;   undefined4 DAT_01c6e260
;   undefined4 DAT_01c6e264
;   undefined4 DAT_01c6e268
;   undefined4 DAT_01c6e26c
;   undefined4 DAT_01c6e274
;   undefined4 DAT_01c6e278
;   undefined4 DAT_02d22c1c
;
; Called Functions:
;   joyGetPos
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581d10
        ;   Label: wincore_winrun.cpp_getJoystickState_FUN_00581d10
    PUSH ESI                            ; 00581d11
    PUSH EDI                            ; 00581d12
    SUB ESP,0x44                        ; 00581d13
    CMP dword ptr [0x01c6e264],0x0      ; 00581d16 | DAT_01c6e264
    JZ 0x00581dd0                       ; 00581d1d
        ;   XREF to: 00581dd0 (CONDITIONAL_JUMP)  ; LAB_00581dd0
    MOV ECX,dword ptr [0x02d22c1c]      ; 00581d23 | DAT_02d22c1c
    TEST ECX,ECX                        ; 00581d29
    JZ 0x00581e2e                       ; 00581d2b
        ;   XREF to: 00581e2e (CONDITIONAL_JUMP)  ; LAB_00581e2e
    MOV ESI,0x83                        ; 00581d31
    MOV EBX,0x34                        ; 00581d36
    MOV EDI,dword ptr [0x01c6e274]      ; 00581d3b | DAT_01c6e274
    MOV dword ptr [ESP + 0x4],ESI       ; 00581d41
    MOV dword ptr [ESP],EBX             ; 00581d45
    TEST EDI,EDI                        ; 00581d48
    JNZ 0x00581dd7                      ; 00581d4a
        ;   XREF to: 00581dd7 (CONDITIONAL_JUMP)  ; LAB_00581dd7
    CMP dword ptr [0x01c6e26c],0x0      ; 00581d50 | DAT_01c6e26c
        ;   Label: LAB_00581d50
    JZ 0x00581d5e                       ; 00581d57
        ;   XREF to: 00581d5e (CONDITIONAL_JUMP)  ; LAB_00581d5e
    OR byte ptr [ESP + 0x4],0x4         ; 00581d59
    CMP dword ptr [0x01c6e268],0x0      ; 00581d5e | DAT_01c6e268
        ;   Label: LAB_00581d5e
    JZ 0x00581d6c                       ; 00581d65
        ;   XREF to: 00581d6c (CONDITIONAL_JUMP)  ; LAB_00581d6c
    OR byte ptr [ESP + 0x4],0x8         ; 00581d67
    MOV EAX,ESP                         ; 00581d6c
        ;   Label: LAB_00581d6c
    PUSH EAX                            ; 00581d6e
    PUSH 0x0                            ; 00581d6f
    CALL dword ptr [0x02d22c1c]         ; 00581d71 | DAT_02d22c1c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00581d77
    MOV [0x01c6e260],EAX                ; 00581d7b | DAT_01c6e260
    MOV EAX,dword ptr [ESP + 0x8]       ; 00581d80
    MOV [0x01c6e250],EAX                ; 00581d84 | DAT_01c6e250
    MOV EAX,dword ptr [ESP + 0xc]       ; 00581d89
    MOV [0x01c6e254],EAX                ; 00581d8d | DAT_01c6e254
    MOV EAX,dword ptr [ESP + 0x14]      ; 00581d92
    MOV [0x01c6e258],EAX                ; 00581d96 | DAT_01c6e258
    MOV EAX,dword ptr [ESP + 0x10]      ; 00581d9b
    MOV ECX,dword ptr [0x01c6e274]      ; 00581d9f | DAT_01c6e274
    MOV [0x01c6e25c],EAX                ; 00581da5 | DAT_01c6e25c
    TEST ECX,ECX                        ; 00581daa
    JZ 0x00581dd0                       ; 00581dac
        ;   XREF to: 00581dd0 (CONDITIONAL_JUMP)  ; LAB_00581dd0
    MOV EBX,dword ptr [ESP + 0x28]      ; 00581dae
    CMP EBX,0x4650                      ; 00581db2
    JNC 0x00581e12                      ; 00581db8
        ;   XREF to: 00581e12 (CONDITIONAL_JUMP)  ; LAB_00581e12
    TEST EBX,EBX                        ; 00581dba
    JBE 0x00581de4                      ; 00581dbc
        ;   XREF to: 00581de4 (CONDITIONAL_JUMP)  ; LAB_00581de4
    CMP EBX,0x2328                      ; 00581dbe
    JNZ 0x00581e08                      ; 00581dc4
        ;   XREF to: 00581e08 (CONDITIONAL_JUMP)  ; LAB_00581e08
    MOV dword ptr [0x01c6e278],0x4      ; 00581dc6 | DAT_01c6e278
    ADD ESP,0x44                        ; 00581dd0
        ;   Label: LAB_00581dd0
    POP EDI                             ; 00581dd3
    POP ESI                             ; 00581dd4
    POP EBX                             ; 00581dd5
    RET                                 ; 00581dd6
    MOV dword ptr [ESP + 0x4],0xc3      ; 00581dd7
        ;   Label: LAB_00581dd7
    JMP 0x00581d50                      ; 00581ddf
        ;   XREF to: 00581d50 (UNCONDITIONAL_JUMP)  ; LAB_00581d50
    MOV dword ptr [0x01c6e278],0x1      ; 00581de4 | DAT_01c6e278
        ;   Label: LAB_00581de4
    JMP 0x00581dd0                      ; 00581dee
        ;   XREF to: 00581dd0 (UNCONDITIONAL_JUMP)  ; LAB_00581dd0
    MOV dword ptr [0x01c6e278],0x2      ; 00581df0 | DAT_01c6e278
        ;   Label: LAB_00581df0
    JMP 0x00581dd0                      ; 00581dfa
        ;   XREF to: 00581dd0 (UNCONDITIONAL_JUMP)  ; LAB_00581dd0
    MOV dword ptr [0x01c6e278],0x3      ; 00581dfc | DAT_01c6e278
        ;   Label: LAB_00581dfc
    JMP 0x00581dd0                      ; 00581e06
        ;   XREF to: 00581dd0 (UNCONDITIONAL_JUMP)  ; LAB_00581dd0
    XOR EDX,EDX                         ; 00581e08
        ;   Label: LAB_00581e08
    MOV dword ptr [0x01c6e278],EDX      ; 00581e0a | DAT_01c6e278
    JMP 0x00581dd0                      ; 00581e10
        ;   XREF to: 00581dd0 (UNCONDITIONAL_JUMP)  ; LAB_00581dd0
    JBE 0x00581df0                      ; 00581e12
        ;   XREF to: 00581df0 (CONDITIONAL_JUMP)  ; LAB_00581df0
        ;   Label: LAB_00581e12
    CMP EBX,0x6978                      ; 00581e14
    JC 0x00581e08                       ; 00581e1a
        ;   XREF to: 00581e08 (CONDITIONAL_JUMP)  ; LAB_00581e08
    JBE 0x00581dfc                      ; 00581e1c
        ;   XREF to: 00581dfc (CONDITIONAL_JUMP)  ; LAB_00581dfc
    CMP EBX,0xffff                      ; 00581e1e
    XOR EDX,EDX                         ; 00581e24
    MOV dword ptr [0x01c6e278],EDX      ; 00581e26 | DAT_01c6e278
    JMP 0x00581dd0                      ; 00581e2c
        ;   XREF to: 00581dd0 (UNCONDITIONAL_JUMP)  ; LAB_00581dd0
    LEA EAX,[ESP + 0x34]                ; 00581e2e
        ;   Label: LAB_00581e2e
    PUSH EAX                            ; 00581e32
    PUSH ECX                            ; 00581e33
    CALL dword ptr CS:[0x5b3440]        ; 00581e34 | PTR_joyGetPos_005b3440
    MOV EAX,dword ptr [ESP + 0x40]      ; 00581e3b
    MOV [0x01c6e260],EAX                ; 00581e3f | DAT_01c6e260
    MOV EAX,dword ptr [ESP + 0x34]      ; 00581e44
    MOV [0x01c6e250],EAX                ; 00581e48 | DAT_01c6e250
    MOV EAX,dword ptr [ESP + 0x38]      ; 00581e4d
    MOV [0x01c6e254],EAX                ; 00581e51 | DAT_01c6e254
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00581e56
    MOV [0x01c6e25c],EAX                ; 00581e5a | DAT_01c6e25c
    ADD ESP,0x44                        ; 00581e5f
    POP EDI                             ; 00581e62
    POP ESI                             ; 00581e63
    POP EBX                             ; 00581e64
    RET                                 ; 00581e65

