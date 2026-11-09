; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_004a0ab0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 s_Capture_005dcb71+1
;   TerminatedCString s_s_can_see_hero_005dcb7a
;   undefined4 DAT_005dcb8e
;   undefined4 DAT_005ffb48
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01c3f6a4
;   undefined4 DAT_01c415e4
;   undefined4 g_CGameInstance.field496_0x1f0
;   undefined4 g_CGameInstance.field588_0x24c
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_enemy.cpp_FUN_004a0980
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0ab0
        ;   Label: core_enemy.cpp_FUN_004a0ab0
    PUSH ESI                            ; 004a0ab1
    PUSH EDI                            ; 004a0ab2
    PUSH EBP                            ; 004a0ab3
    MOV EBP,ESP                         ; 004a0ab4
    SUB ESP,0x50                        ; 004a0ab6
    AND ESP,0xfffffff8                  ; 004a0ab9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0abc
    MOV EAX,dword ptr [EAX + 0xc25c]    ; 004a0abf
    MOV dword ptr [ESP],EAX             ; 004a0ac5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0ac8
    MOV EDX,dword ptr [EAX + 0xc260]    ; 004a0acb
    TEST EDX,EDX                        ; 004a0ad1
    JZ 0x004a0b12                       ; 004a0ad3
        ;   XREF to: 004a0b12 (CONDITIONAL_JUMP)  ; LAB_004a0b12
    CMP EDX,dword ptr [0x005ffb48]      ; 004a0ad5 | DAT_005ffb48
    JNZ 0x004a0b05                      ; 004a0adb
        ;   XREF to: 004a0b05 (CONDITIONAL_JUMP)  ; LAB_004a0b05
    MOV dword ptr [EAX + 0xc1e8],0x0    ; 004a0add
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0ae7
        ;   Label: LAB_004a0ae7
    MOV dword ptr [EAX + 0xc1dc],0x0    ; 004a0aea
    MOV dword ptr [EAX + 0xc1ec],0x0    ; 004a0af4
    MOV ESP,EBP                         ; 004a0afe
        ;   Label: LAB_004a0afe
    POP EBP                             ; 004a0b00
    POP EDI                             ; 004a0b01
    POP ESI                             ; 004a0b02
    POP EBX                             ; 004a0b03
    RET                                 ; 004a0b04
    MOV EAX,EDX                         ; 004a0b05
        ;   Label: LAB_004a0b05
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a0b07
    MOV dword ptr [EDX + 0xc1e8],EAX    ; 004a0b0a
    JMP 0x004a0ae7                      ; 004a0b10
        ;   XREF to: 004a0ae7 (UNCONDITIONAL_JUMP)  ; LAB_004a0ae7
    MOV EAX,[0x0061d95c]                ; 004a0b12 | g_CGamePtr
        ;   Label: LAB_004a0b12
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004a0b17 | g_CGameInstance.field496_0x1f0
    JNZ 0x004a0b29                      ; 004a0b1e
        ;   XREF to: 004a0b29 (CONDITIONAL_JUMP)  ; LAB_004a0b29
    CMP dword ptr [EAX + 0x24c],0x0     ; 004a0b20 | g_CGameInstance.field588_0x24c
    JNZ 0x004a0b51                      ; 004a0b27
        ;   XREF to: 004a0b51 (CONDITIONAL_JUMP)  ; LAB_004a0b51
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0b29
        ;   Label: LAB_004a0b29
    MOV dword ptr [EAX + 0xc1dc],0x0    ; 004a0b2c
    MOV dword ptr [EAX + 0xc1ec],0x0    ; 004a0b36
    MOV dword ptr [EAX + 0xc1e8],0x0    ; 004a0b40
    MOV ESP,EBP                         ; 004a0b4a
    POP EBP                             ; 004a0b4c
    POP EDI                             ; 004a0b4d
    POP ESI                             ; 004a0b4e
    POP EBX                             ; 004a0b4f
    RET                                 ; 004a0b50
    PUSH 0x5dcb72                       ; 004a0b51 | s_Capture_005dcb71+1
        ;   Label: LAB_004a0b51
    MOV ESI,dword ptr [0x0061b4d0]      ; 004a0b56 | DAT_0061b4d0
    PUSH ESI                            ; 004a0b5c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004a0b5d
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a0b62
    TEST EAX,EAX                        ; 004a0b65
    JNZ 0x004a0b29                      ; 004a0b67
        ;   XREF to: 004a0b29 (CONDITIONAL_JUMP)  ; LAB_004a0b29
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0b69
    FLD float ptr [EAX + 0xc1ec]        ; 004a0b6c
    FSUB float ptr [EBP + 0x18]         ; 004a0b72
    FST float ptr [EAX + 0xc1ec]        ; 004a0b75
    FLDZ                                ; 004a0b7b
    FCOMPP                              ; 004a0b7d
    FNSTSW AX                           ; 004a0b7f
    SAHF                                ; 004a0b81
    JNC 0x004a0bd5                      ; 004a0b82
        ;   XREF to: 004a0bd5 (CONDITIONAL_JUMP)  ; LAB_004a0bd5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0b84
    MOV ESI,dword ptr [EAX + 0xc1e8]    ; 004a0b87
    TEST ESI,ESI                        ; 004a0b8d
    JZ 0x004a0afe                       ; 004a0b8f
        ;   XREF to: 004a0afe (CONDITIONAL_JUMP)  ; LAB_004a0afe
    PUSH ESI                            ; 004a0b95
    MOV EDX,dword ptr [ESI + 0x154]     ; 004a0b96
    CALL dword ptr [EDX + 0x10c]        ; 004a0b9c
    ADD ESP,0x4                         ; 004a0ba2
    TEST EAX,EAX                        ; 004a0ba5
    JZ 0x004a0afe                       ; 004a0ba7
        ;   XREF to: 004a0afe (CONDITIONAL_JUMP)  ; LAB_004a0afe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0bad
    MOV dword ptr [EAX + 0xc1ec],0x0    ; 004a0bb0
    MOV dword ptr [EAX + 0xc1dc],0x0    ; 004a0bba
    MOV dword ptr [EAX + 0xc1e8],0x0    ; 004a0bc4
    MOV ESP,EBP                         ; 004a0bce
    POP EBP                             ; 004a0bd0
    POP EDI                             ; 004a0bd1
    POP ESI                             ; 004a0bd2
    POP EBX                             ; 004a0bd3
    RET                                 ; 004a0bd4
    PUSH 0x3fc00000                     ; 004a0bd5
        ;   Label: LAB_004a0bd5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0bda
    PUSH 0x3f000000                     ; 004a0bdd
    MOV dword ptr [EAX + 0xc1dc],0x0    ; 004a0be2
    CALL core_actor.cpp_FUN_0040cc00    ; 004a0bec
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x54],EAX      ; 004a0bf1
    FLD float ptr [ESP + 0x54]          ; 004a0bf5
    ADD ESP,0x8                         ; 004a0bf9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0bfc
    XOR EDI,EDI                         ; 004a0bff
    FLD float ptr [EAX + 0xc1f0]        ; 004a0c01
    FMUL ST0                            ; 004a0c07
    MOV dword ptr [ESP + 0x44],EDI      ; 004a0c09
    FXCH                                ; 004a0c0d
    FSTP float ptr [EAX + 0xc1ec]       ; 004a0c0f
    MOV EDX,dword ptr [EAX + 0xc1e8]    ; 004a0c15
    FSTP float ptr [ESP + 0x2c]         ; 004a0c1b
    TEST EDX,EDX                        ; 004a0c1f
    JZ 0x004a0d46                       ; 004a0c21
        ;   XREF to: 004a0d46 (CONDITIONAL_JUMP)  ; LAB_004a0d46
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0c27
        ;   Label: LAB_004a0c27
    ADD EAX,0x20                        ; 004a0c2a
    XOR ECX,ECX                         ; 004a0c2d
    MOV dword ptr [ESP + 0x34],EAX      ; 004a0c2f
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a0c33
    MOV dword ptr [ESP + 0x38],ECX      ; 004a0c37
    SHL EAX,0x2                         ; 004a0c3b
    MOV dword ptr [ESP + 0x40],ECX      ; 004a0c3e
    MOV dword ptr [ESP + 0x3c],EAX      ; 004a0c42
    MOV EAX,[0x00622c18]                ; 004a0c46 | g_CDemonSetPtr
        ;   Label: LAB_004a0c46
    MOV EDX,dword ptr [ESP + 0x38]      ; 004a0c4b
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 004a0c4f | g_CDemonSetInstance.field1372328_0x14f0a8
    JL 0x004a0d6f                       ; 004a0c55
        ;   XREF to: 004a0d6f (CONDITIONAL_JUMP)  ; LAB_004a0d6f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0c5b
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a0c5e
    ADD EAX,0x20                        ; 004a0c61
    MOV EDI,dword ptr [EDI + 0xc1e8]    ; 004a0c64
    MOV dword ptr [ESP + 0x28],EAX      ; 004a0c6a
    MOV dword ptr [EAX + 0xc1c8],0x0    ; 004a0c6e
    MOV EBX,0x60ad78ec                  ; 004a0c78
        ;   Label: LAB_004a0c78
    MOV ESI,dword ptr [ESP + 0x44]      ; 004a0c7d
    XOR EDX,EDX                         ; 004a0c81
    MOV dword ptr [ESP + 0x48],EBX      ; 004a0c83
    MOV EBX,0xffffffff                  ; 004a0c87
    TEST ESI,ESI                        ; 004a0c8c
    JLE 0x004a0cb9                      ; 004a0c8e
        ;   XREF to: 004a0cb9 (CONDITIONAL_JUMP)  ; LAB_004a0cb9
    XOR ECX,ECX                         ; 004a0c90
    FLD float ptr [ECX + 0x1c415e4]     ; 004a0c92 | DAT_01c415e4
        ;   Label: LAB_004a0c92
    FCOMP float ptr [ESP + 0x48]        ; 004a0c98
    FNSTSW AX                           ; 004a0c9c
    SAHF                                ; 004a0c9e
    JNC 0x004a0cad                      ; 004a0c9f
        ;   XREF to: 004a0cad (CONDITIONAL_JUMP)  ; LAB_004a0cad
    MOV EAX,dword ptr [ECX + 0x1c415e4] ; 004a0ca1 | DAT_01c415e4
    MOV EBX,EDX                         ; 004a0ca7
    MOV dword ptr [ESP + 0x48],EAX      ; 004a0ca9
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a0cad
        ;   Label: LAB_004a0cad
    INC EDX                             ; 004a0cb1
    ADD ECX,0x4                         ; 004a0cb2
    CMP EDX,EAX                         ; 004a0cb5
    JL 0x004a0c92                       ; 004a0cb7
        ;   XREF to: 004a0c92 (CONDITIONAL_JUMP)  ; LAB_004a0c92
    TEST EBX,EBX                        ; 004a0cb9
        ;   Label: LAB_004a0cb9
    JL 0x004a0afe                       ; 004a0cbb
        ;   XREF to: 004a0afe (CONDITIONAL_JUMP)  ; LAB_004a0afe
    MOV ESI,dword ptr [EBX*0x4 + 0x1c3f6a4] ; 004a0cc1 | DAT_01c3f6a4 | g_CEnemyClassInfo.name_hash
    PUSH ESI                            ; 004a0cc8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a0cc9
    PUSH EDX                            ; 004a0ccc
    CALL core_enemy.cpp_FUN_004a0980    ; 004a0ccd
        ;   XREF to: 004a0980 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0980()
    ADD ESP,0x8                         ; 004a0cd2
    TEST EAX,EAX                        ; 004a0cd5
    JNZ 0x004a0e8f                      ; 004a0cd7
        ;   XREF to: 004a0e8f (CONDITIONAL_JUMP)  ; LAB_004a0e8f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0cdd
    MOV ECX,dword ptr [EAX + 0xc264]    ; 004a0ce0
    TEST ECX,ECX                        ; 004a0ce6
    JZ 0x004a0eb4                       ; 004a0ce8
        ;   XREF to: 004a0eb4 (CONDITIONAL_JUMP)  ; LAB_004a0eb4
    PUSH ESI                            ; 004a0cee
        ;   Label: LAB_004a0cee
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a0cef
    CALL dword ptr [EAX + 0xc4]         ; 004a0cf5
    ADD ESP,0x4                         ; 004a0cfb
    TEST EAX,EAX                        ; 004a0cfe
    JZ 0x004a0d25                       ; 004a0d00
        ;   XREF to: 004a0d25 (CONDITIONAL_JUMP)  ; LAB_004a0d25
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a0d02
    MOV ECX,dword ptr [EDX + 0x6c]      ; 004a0d05
    PUSH ECX                            ; 004a0d08
    LEA EDX,[ESP + 0x14]                ; 004a0d09
    PUSH EDX                            ; 004a0d0d
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a0d0e
    PUSH EDX                            ; 004a0d12
    PUSH EAX                            ; 004a0d13
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 004a0d14
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004a0d19
    CMP EAX,0x1                         ; 004a0d1c
    JZ 0x004a0ec7                       ; 004a0d1f
        ;   XREF to: 004a0ec7 (CONDITIONAL_JUMP)  ; LAB_004a0ec7
    MOV dword ptr [EBX*0x4 + 0x1c415e4],0x7149f2ca ; 004a0d25 | DAT_01c415e4
        ;   Label: LAB_004a0d25
    CMP ESI,EDI                         ; 004a0d30
    JNZ 0x004a0c78                      ; 004a0d32
        ;   XREF to: 004a0c78 (CONDITIONAL_JUMP)  ; LAB_004a0c78
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0d38
    MOV dword ptr [EAX + 0xc1e8],EDI    ; 004a0d3b
    JMP 0x004a0c78                      ; 004a0d41
        ;   XREF to: 004a0c78 (UNCONDITIONAL_JUMP)  ; LAB_004a0c78
    FLD float ptr [EAX + 0xc1e0]        ; 004a0d46
        ;   Label: LAB_004a0d46
    FCOMP float ptr [EAX + 0xc1f0]      ; 004a0d4c
    FNSTSW AX                           ; 004a0d52
    SAHF                                ; 004a0d54
    JNC 0x004a0c27                      ; 004a0d55
        ;   XREF to: 004a0c27 (CONDITIONAL_JUMP)  ; LAB_004a0c27
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0d5b
    FLD float ptr [EAX + 0xc1e0]        ; 004a0d5e
    FMUL ST0                            ; 004a0d64
    FSTP float ptr [ESP + 0x2c]         ; 004a0d66
    JMP 0x004a0c27                      ; 004a0d6a
        ;   XREF to: 004a0c27 (UNCONDITIONAL_JUMP)  ; LAB_004a0c27
    MOV EBX,dword ptr [ESP + 0x40]      ; 004a0d6f
        ;   Label: LAB_004a0d6f
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a0d73
    ADD EAX,EBX                         ; 004a0d76
    PUSH ESI                            ; 004a0d78
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 004a0d79
    PUSH EBX                            ; 004a0d7f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a0d80
    CALL dword ptr [EAX + 0xe4]         ; 004a0d86
    ADD ESP,0x8                         ; 004a0d8c
    TEST EAX,EAX                        ; 004a0d8f
    JZ 0x004a0e76                       ; 004a0d91
        ;   XREF to: 004a0e76 (CONDITIONAL_JUMP)  ; LAB_004a0e76
    PUSH EBX                            ; 004a0d97
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a0d98
    CALL dword ptr [EAX + 0x10c]        ; 004a0d9e
    ADD ESP,0x4                         ; 004a0da4
    TEST EAX,EAX                        ; 004a0da7
    JNZ 0x004a0e76                      ; 004a0da9
        ;   XREF to: 004a0e76 (CONDITIONAL_JUMP)  ; LAB_004a0e76
    PUSH EBX                            ; 004a0daf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a0db0
    CALL dword ptr [EAX + 0x70]         ; 004a0db6
    ADD ESP,0x4                         ; 004a0db9
    TEST EAX,EAX                        ; 004a0dbc
    JNZ 0x004a0e76                      ; 004a0dbe
        ;   XREF to: 004a0e76 (CONDITIONAL_JUMP)  ; LAB_004a0e76
    FLD float ptr [EBX + 0x27b4]        ; 004a0dc4
    FLDZ                                ; 004a0dca
    FCOMPP                              ; 004a0dcc
    FNSTSW AX                           ; 004a0dce
    SAHF                                ; 004a0dd0
    JC 0x004a0e76                       ; 004a0dd1
        ;   XREF to: 004a0e76 (CONDITIONAL_JUMP)  ; LAB_004a0e76
    MOV EDX,dword ptr [ESP + 0x34]      ; 004a0dd7
    LEA EAX,[EBX + 0x20]                ; 004a0ddb
    LEA EDI,[ESP + 0x1c]                ; 004a0dde
    LEA ESI,[ESP + 0x4]                 ; 004a0de2
    FLD float ptr [EAX]                 ; 004a0de6
    FLD float ptr [EAX + 0x4]           ; 004a0de8
    FLD float ptr [EAX + 0x8]           ; 004a0deb
    FXCH ST2                            ; 004a0dee
    FSUB float ptr [EDX]                ; 004a0df0
    FXCH                                ; 004a0df2
    FSUB float ptr [EDX + 0x4]          ; 004a0df4
    FXCH ST2                            ; 004a0df7
    FSUB float ptr [EDX + 0x8]          ; 004a0df9
    FXCH                                ; 004a0dfc
    FSTP float ptr [ESP + 0x4]          ; 004a0dfe
    FXCH                                ; 004a0e02
    FSTP float ptr [ESP + 0x8]          ; 004a0e04
    FSTP float ptr [ESP + 0xc]          ; 004a0e08
    MOVSD ES:EDI,ESI                    ; 004a0e0c
    MOVSD ES:EDI,ESI                    ; 004a0e0d
    MOVSD ES:EDI,ESI                    ; 004a0e0e
    FLD float ptr [ESP + 0x20]          ; 004a0e0f
    FABS                                ; 004a0e13
    FLD float ptr [ESP]                 ; 004a0e15
    FCOMPP                              ; 004a0e18
    FNSTSW AX                           ; 004a0e1a
    SAHF                                ; 004a0e1c
    JC 0x004a0e76                       ; 004a0e1d
        ;   XREF to: 004a0e76 (CONDITIONAL_JUMP)  ; LAB_004a0e76
    FLD float ptr [ESP + 0x20]          ; 004a0e1f
    FMUL float ptr [0x005dcb8e]         ; 004a0e23 | DAT_005dcb8e
    FST float ptr [ESP + 0x20]          ; 004a0e29
    FMUL float ptr [ESP + 0x20]         ; 004a0e2d
    FLD float ptr [ESP + 0x1c]          ; 004a0e31
    FMUL ST0                            ; 004a0e35
    FADDP                               ; 004a0e37
    FLD float ptr [ESP + 0x24]          ; 004a0e39
    FMUL ST0                            ; 004a0e3d
    FADDP                               ; 004a0e3f
    FST float ptr [ESP + 0x30]          ; 004a0e41
    FCOMP float ptr [ESP + 0x2c]        ; 004a0e45
    FNSTSW AX                           ; 004a0e49
    SAHF                                ; 004a0e4b
    JA 0x004a0e76                       ; 004a0e4c
        ;   XREF to: 004a0e76 (CONDITIONAL_JUMP)  ; LAB_004a0e76
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a0e4e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004a0e52
    MOV dword ptr [EAX + 0x1c3f6a4],EBX ; 004a0e56 | DAT_01c3f6a4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a0e5c
    MOV dword ptr [EDX + 0x1c415e4],EAX ; 004a0e60 | DAT_01c415e4
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a0e66
    LEA EDI,[EDX + 0x4]                 ; 004a0e6a
    INC EAX                             ; 004a0e6d
    MOV dword ptr [ESP + 0x3c],EDI      ; 004a0e6e
    MOV dword ptr [ESP + 0x44],EAX      ; 004a0e72
    MOV ECX,dword ptr [ESP + 0x38]      ; 004a0e76
        ;   Label: LAB_004a0e76
    MOV EDX,dword ptr [ESP + 0x40]      ; 004a0e7a
    INC ECX                             ; 004a0e7e
    ADD EDX,0x4                         ; 004a0e7f
    MOV dword ptr [ESP + 0x38],ECX      ; 004a0e82
    MOV dword ptr [ESP + 0x40],EDX      ; 004a0e86
    JMP 0x004a0c46                      ; 004a0e8a
        ;   XREF to: 004a0c46 (UNCONDITIONAL_JUMP)  ; LAB_004a0c46
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0e8f
        ;   Label: LAB_004a0e8f
    PUSH EAX                            ; 004a0e92
    PUSH 0x5dcb7a                       ; 004a0e93 | = "%s can see hero\n"
    MOV dword ptr [EAX + 0xc1e8],ESI    ; 004a0e98
    MOV ESI,dword ptr [0x00611100]      ; 004a0e9e | g_CConsolePtr
    PUSH ESI                            ; 004a0ea4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004a0ea5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004a0eaa
    MOV ESP,EBP                         ; 004a0ead
    POP EBP                             ; 004a0eaf
    POP EDI                             ; 004a0eb0
    POP ESI                             ; 004a0eb1
    POP EBX                             ; 004a0eb2
    RET                                 ; 004a0eb3
    JNZ 0x004a0d25                      ; 004a0eb4
        ;   XREF to: 004a0d25 (CONDITIONAL_JUMP)  ; LAB_004a0d25
        ;   Label: LAB_004a0eb4
    CMP ESI,EDI                         ; 004a0eba
    JZ 0x004a0cee                       ; 004a0ebc
        ;   XREF to: 004a0cee (CONDITIONAL_JUMP)  ; LAB_004a0cee
    JMP 0x004a0d25                      ; 004a0ec2
        ;   XREF to: 004a0d25 (UNCONDITIONAL_JUMP)  ; LAB_004a0d25
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0ec7
        ;   Label: LAB_004a0ec7
    MOV dword ptr [EAX + 0xc1e8],ESI    ; 004a0eca
    MOV ESP,EBP                         ; 004a0ed0
    POP EBP                             ; 004a0ed2
    POP EDI                             ; 004a0ed3
    POP ESI                             ; 004a0ed4
    POP EBX                             ; 004a0ed5
    RET                                 ; 004a0ed6

