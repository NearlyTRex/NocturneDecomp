; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d9c20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x17c]:4  local_17c
;
; XREF[1]:
;   FUN_004d7ee0 at 004d7f40
;
; Referenced Globals:
;   string s_CHero_00589fd1
;   string s_Warning:_mission_has_no_hero_pla_00589fd7
;   string s_Mission_has_no_hero_placeholders_0058a010
;   string s_..\\core\\mission.cpp_0058a0d2
;   string s_Hell_froze_finding_hero._0058a0e6
;   string s_Replaced_hero_OK._You_will_need_t_0058a0ff
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01cae160
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0040d7e0
;   FUN_0040d890
;   FUN_0046fe60
;   FUN_00473cb0
;   FUN_00474080
;   FUN_00474c90
;   FUN_00474cf0
;   FUN_00474d70
;   FUN_004b5f90
;   FUN_004c8440
;   FUN_004d8c60
;   FUN_004d8f90
;   FUN_004d90a0
;   FUN_004d9720
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9c20
        ;   Label: FUN_004d9c20
    PUSH EDI                            ; 004d9c21
    PUSH EBP                            ; 004d9c22
    SUB ESP,0x170                       ; 004d9c23
    MOV EDI,dword ptr [ESP + 0x180]     ; 004d9c29
    MOV EAX,ESP                         ; 004d9c30
    PUSH EAX                            ; 004d9c32
    CALL FUN_00474c90                   ; 004d9c33
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    MOV EBX,dword ptr [EDI + 0x514]     ; 004d9c38
    ADD ESP,0x4                         ; 004d9c3e
    TEST EBX,EBX                        ; 004d9c41
    JZ 0x004d9c87                       ; 004d9c43
        ;   XREF to: 004d9c87 (CONDITIONAL_JUMP)  ; LAB_004d9c87
    PUSH 0x589fd1                       ; 004d9c45 | = "CHero"
        ;   Label: LAB_004d9c45
    PUSH EBX                            ; 004d9c4a
    CALL FUN_0040d7e0                   ; 004d9c4b
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 004d9c50
    TEST EAX,EAX                        ; 004d9c53
    JZ 0x004d9c65                       ; 004d9c55
        ;   XREF to: 004d9c65 (CONDITIONAL_JUMP)  ; LAB_004d9c65
    PUSH EBX                            ; 004d9c57
    LEA EAX,[ESP + 0x4]                 ; 004d9c58
    PUSH EAX                            ; 004d9c5c
    CALL FUN_00473cb0                   ; 004d9c5d
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cb0()
    ADD ESP,0x8                         ; 004d9c62
    MOV EBP,dword ptr [0x01cae160]      ; 004d9c65 | DAT_01cae160
        ;   Label: LAB_004d9c65
    PUSH EBP                            ; 004d9c6b
    PUSH EBX                            ; 004d9c6c
    CALL FUN_0040d890                   ; 004d9c6d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004d9c72
    TEST EAX,EAX                        ; 004d9c75
    JNZ 0x004d9d99                      ; 004d9c77
        ;   XREF to: 004d9d99 (CONDITIONAL_JUMP)  ; LAB_004d9d99
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d9c7d
        ;   Label: LAB_004d9c7d
    TEST EBX,EBX                        ; 004d9c83
    JNZ 0x004d9c45                      ; 004d9c85
        ;   XREF to: 004d9c45 (CONDITIONAL_JUMP)  ; LAB_004d9c45
    CMP dword ptr [ESP],0x1             ; 004d9c87
        ;   Label: LAB_004d9c87
    JL 0x004d9dbf                       ; 004d9c8b
        ;   XREF to: 004d9dbf (CONDITIONAL_JUMP)  ; LAB_004d9dbf
    PUSH -0x1                           ; 004d9c91
    PUSH 0x58a010                       ; 004d9c93 | = "Mission has no hero placeholders.\n\n..."
    LEA EAX,[ESP + 0x8]                 ; 004d9c98
    PUSH EAX                            ; 004d9c9c
    CALL FUN_00474d70                   ; 004d9c9d
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00474d70()
    ADD ESP,0xc                         ; 004d9ca2
    TEST EAX,EAX                        ; 004d9ca5
    JL 0x004d9dd3                       ; 004d9ca7
        ;   XREF to: 004d9dd3 (CONDITIONAL_JUMP)  ; LAB_004d9dd3
    PUSH ESI                            ; 004d9cad
    PUSH EAX                            ; 004d9cae
    LEA EAX,[ESP + 0x8]                 ; 004d9caf
    PUSH EAX                            ; 004d9cb3
    CALL FUN_00474080                   ; 004d9cb4
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined FUN_00474080()
    ADD ESP,0x8                         ; 004d9cb9
    PUSH EAX                            ; 004d9cbc
    PUSH EDI                            ; 004d9cbd
    CALL FUN_004d90a0                   ; 004d9cbe
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d90a0()
    ADD ESP,0x8                         ; 004d9cc3
    MOV ESI,EAX                         ; 004d9cc6
    TEST EAX,EAX                        ; 004d9cc8
    JNZ 0x004d9cef                      ; 004d9cca
        ;   XREF to: 004d9cef (CONDITIONAL_JUMP)  ; LAB_004d9cef
    MOV ECX,0x58a0d2                    ; 004d9ccc | = "..\\core\\mission.cpp"
    MOV EBX,0x687                       ; 004d9cd1
    PUSH 0x58a0e6                       ; 004d9cd6 | = "Hell froze finding hero."
    MOV dword ptr [0x01cc4800],ECX      ; 004d9cdb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004d9ce1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d9ce7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d9cec
    PUSH 0x154                          ; 004d9cef
        ;   Label: LAB_004d9cef
    CALL FUN_0056497c                   ; 004d9cf4
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004d9cf9
    TEST EAX,EAX                        ; 004d9cfc
    JZ 0x004d9d09                       ; 004d9cfe
        ;   XREF to: 004d9d09 (CONDITIONAL_JUMP)  ; LAB_004d9d09
    PUSH EAX                            ; 004d9d00
    CALL FUN_004b5f90                   ; 004d9d01
        ;   XREF to: 004b5f90 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5f90()
    ADD ESP,0x4                         ; 004d9d06
    MOV EBP,EAX                         ; 004d9d09
        ;   Label: LAB_004d9d09
    LEA EDX,[ESI + 0x20]                ; 004d9d0b
    MOV dword ptr [EAX + 0x150],0x0     ; 004d9d0e
    LEA EBX,[EAX + 0x20]                ; 004d9d18
    MOV ECX,dword ptr [EDX]             ; 004d9d1b
    MOV dword ptr [EBX],ECX             ; 004d9d1d
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d9d1f
    MOV dword ptr [EBX + 0x4],ECX       ; 004d9d22
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d9d25
    MOV dword ptr [EBX + 0x8],ECX       ; 004d9d28
    MOV EDX,dword ptr [EDX + 0xc]       ; 004d9d2b
    ADD EAX,0x30                        ; 004d9d2e
    MOV dword ptr [EBX + 0xc],EDX       ; 004d9d31
    LEA EBX,[ESI + 0x30]                ; 004d9d34
    CMP EAX,EBX                         ; 004d9d37
    JZ 0x004d9d4b                       ; 004d9d39
        ;   XREF to: 004d9d4b (CONDITIONAL_JUMP)  ; LAB_004d9d4b
    MOV EDX,dword ptr [EBX]             ; 004d9d3b
    MOV dword ptr [EAX],EDX             ; 004d9d3d
    MOV EDX,dword ptr [EBX + 0x4]       ; 004d9d3f
    MOV dword ptr [EAX + 0x4],EDX       ; 004d9d42
    MOV EDX,dword ptr [EBX + 0x8]       ; 004d9d45
    MOV dword ptr [EAX + 0x8],EDX       ; 004d9d48
    PUSH EBP                            ; 004d9d4b
        ;   Label: LAB_004d9d4b
    PUSH EDI                            ; 004d9d4c
    CALL FUN_004d9720                   ; 004d9d4d
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9720()
    ADD ESP,0x8                         ; 004d9d52
    PUSH 0x1                            ; 004d9d55
    PUSH ESI                            ; 004d9d57
    PUSH EDI                            ; 004d9d58
    CALL FUN_004d8f90                   ; 004d9d59
        ;   XREF to: 004d8f90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8f90()
    ADD ESP,0xc                         ; 004d9d5e
    PUSH EBP                            ; 004d9d61
    PUSH EDI                            ; 004d9d62
    CALL FUN_004d8c60                   ; 004d9d63
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c60()
    ADD ESP,0x8                         ; 004d9d68
    PUSH 0x58a0ff                       ; 004d9d6b | = "Replaced hero OK.  You will need to s..."
    MOV ESI,dword ptr [0x005b6d50]      ; 004d9d70 | DAT_005b6d50
    PUSH ESI                            ; 004d9d76
    CALL FUN_0046fe60                   ; 004d9d77
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe60()
    ADD ESP,0x8                         ; 004d9d7c
    PUSH 0x0                            ; 004d9d7f
    LEA EAX,[ESP + 0x8]                 ; 004d9d81
    PUSH EAX                            ; 004d9d85
    CALL FUN_00474cf0                   ; 004d9d86
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00474cf0()
    ADD ESP,0x8                         ; 004d9d8b
    POP ESI                             ; 004d9d8e
    ADD ESP,0x170                       ; 004d9d8f
    POP EBP                             ; 004d9d95
    POP EDI                             ; 004d9d96
    POP EBX                             ; 004d9d97
    RET                                 ; 004d9d98
    MOV EDX,dword ptr [EAX + 0x150]     ; 004d9d99
        ;   Label: LAB_004d9d99
    TEST EDX,EDX                        ; 004d9d9f
    JNZ 0x004d9c7d                      ; 004d9da1
        ;   XREF to: 004d9c7d (CONDITIONAL_JUMP)  ; LAB_004d9c7d
    PUSH EDX                            ; 004d9da7
    LEA EAX,[ESP + 0x4]                 ; 004d9da8
    PUSH EAX                            ; 004d9dac
    CALL FUN_00474cf0                   ; 004d9dad
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00474cf0()
    ADD ESP,0x8                         ; 004d9db2
    ADD ESP,0x170                       ; 004d9db5
    POP EBP                             ; 004d9dbb
    POP EDI                             ; 004d9dbc
    POP EBX                             ; 004d9dbd
    RET                                 ; 004d9dbe
    PUSH 0x589fd7                       ; 004d9dbf | = "Warning: mission has no hero placehol..."
        ;   Label: LAB_004d9dbf
    MOV EDI,dword ptr [0x005b6d50]      ; 004d9dc4 | DAT_005b6d50
    PUSH EDI                            ; 004d9dca
    CALL FUN_0046fe60                   ; 004d9dcb
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe60()
    ADD ESP,0x8                         ; 004d9dd0
    PUSH 0x0                            ; 004d9dd3
        ;   Label: LAB_004d9dd3
    LEA EAX,[ESP + 0x4]                 ; 004d9dd5
    PUSH EAX                            ; 004d9dd9
    CALL FUN_00474cf0                   ; 004d9dda
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00474cf0()
    ADD ESP,0x8                         ; 004d9ddf
    ADD ESP,0x170                       ; 004d9de2
    POP EBP                             ; 004d9de8
    POP EDI                             ; 004d9de9
    POP EBX                             ; 004d9dea
    RET                                 ; 004d9deb

