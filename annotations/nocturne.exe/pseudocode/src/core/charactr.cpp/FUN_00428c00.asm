; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00428c00(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[31]:
;   FUN_0040fa20 at 0040faad
;   FUN_00418a00 at 00418e11
;   FUN_00439f50 at 00439ff2
;   FUN_00495a20 at 004965e0
;   FUN_004a9270 at 004a9373
;   FUN_004b32d0 at 004b3379
;   FUN_004b6d80 at 004b75f6
;   FUN_004b9fe0 at 004ba09b
;   FUN_004c4970 at 004c4a21
;   FUN_004da790 at 004daa94
;   ... and 21 more
;
; Referenced Globals:
;   string s_%s_can't_figure_out_next_waypoin_0057a106
;   double DOUBLE_0057a142 = 0.628318530700000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02ddf54c
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_followActor_FUN_00428780
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_door.cpp_CDoor_getOpenStandPos_FUN_00456260
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428c00
        ;   Label: core_charactr.cpp_FUN_00428c00
    PUSH ESI                            ; 00428c01
    PUSH EDI                            ; 00428c02
    PUSH EBP                            ; 00428c03
    SUB ESP,0x38                        ; 00428c04
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00428c07
    CMP dword ptr [EBX + 0x2598],0x0    ; 00428c0b
    JNZ 0x00428c21                      ; 00428c12
        ;   XREF to: 00428c21 (CONDITIONAL_JUMP)  ; LAB_00428c21
    CMP dword ptr [EBX + 0x25ac],0x0    ; 00428c14
    JZ 0x00428ccb                       ; 00428c1b
        ;   XREF to: 00428ccb (CONDITIONAL_JUMP)  ; LAB_00428ccb
    FLD float ptr [EBX + 0x25a4]        ; 00428c21
        ;   Label: LAB_00428c21
    FLDZ                                ; 00428c27
    FCOMPP                              ; 00428c29
    FNSTSW AX                           ; 00428c2b
    SAHF                                ; 00428c2d
    JA 0x00428cd5                       ; 00428c2e
        ;   XREF to: 00428cd5 (CONDITIONAL_JUMP)  ; LAB_00428cd5
    FLD float ptr [EBX + 0x25a4]        ; 00428c34
    FSUB float ptr [ESP + 0x50]         ; 00428c3a
    FST float ptr [EBX + 0x25a4]        ; 00428c3e
    FLDZ                                ; 00428c44
    FCOMPP                              ; 00428c46
    FNSTSW AX                           ; 00428c48
    SAHF                                ; 00428c4a
    JC 0x00428cd5                       ; 00428c4b
        ;   XREF to: 00428cd5 (CONDITIONAL_JUMP)  ; LAB_00428cd5
    MOV dword ptr [EBX + 0x25a4],0x0    ; 00428c51
    MOV EDX,dword ptr [EBX + 0x2598]    ; 00428c5b
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00428c61
    LEA EAX,[EBX + 0x20]                ; 00428c6b
    MOV ECX,dword ptr [EDX + 0x20]      ; 00428c6e
    MOV dword ptr [EAX],ECX             ; 00428c71
    MOV ECX,dword ptr [EDX + 0x24]      ; 00428c73
    MOV dword ptr [EAX + 0x4],ECX       ; 00428c76
    MOV ECX,dword ptr [EDX + 0x28]      ; 00428c79
    MOV dword ptr [EAX + 0x8],ECX       ; 00428c7c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00428c7f
    MOV dword ptr [EAX + 0xc],EDX       ; 00428c82
    MOV EDX,dword ptr [EBX + 0x2598]    ; 00428c85
    LEA EAX,[EBX + 0x30]                ; 00428c8b
    ADD EDX,0x30                        ; 00428c8e
    CMP EAX,EDX                         ; 00428c91
    JZ 0x00428ca5                       ; 00428c93
        ;   XREF to: 00428ca5 (CONDITIONAL_JUMP)  ; LAB_00428ca5
    MOV ECX,dword ptr [EDX]             ; 00428c95
    MOV dword ptr [EAX],ECX             ; 00428c97
    MOV ECX,dword ptr [EDX + 0x4]       ; 00428c99
    MOV dword ptr [EAX + 0x4],ECX       ; 00428c9c
    MOV ECX,dword ptr [EDX + 0x8]       ; 00428c9f
    MOV dword ptr [EAX + 0x8],ECX       ; 00428ca2
    CMP dword ptr [EBX + 0x25ac],0x0    ; 00428ca5
        ;   Label: LAB_00428ca5
    JZ 0x00428cbe                       ; 00428cac
        ;   XREF to: 00428cbe (CONDITIONAL_JUMP)  ; LAB_00428cbe
    PUSH EBX                            ; 00428cae
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428caf
    CALL dword ptr [EAX + 0x118]        ; 00428cb5
    ADD ESP,0x4                         ; 00428cbb
    MOV EAX,0x1                         ; 00428cbe
        ;   Label: LAB_00428cbe
    ADD ESP,0x38                        ; 00428cc3
    POP EBP                             ; 00428cc6
    POP EDI                             ; 00428cc7
    POP ESI                             ; 00428cc8
    POP EBX                             ; 00428cc9
    RET                                 ; 00428cca
    XOR EAX,EAX                         ; 00428ccb
        ;   Label: LAB_00428ccb
    ADD ESP,0x38                        ; 00428ccd
    POP EBP                             ; 00428cd0
    POP EDI                             ; 00428cd1
    POP ESI                             ; 00428cd2
    POP EBX                             ; 00428cd3
    RET                                 ; 00428cd4
    MOV ESI,dword ptr [EBX + 0x25ac]    ; 00428cd5
        ;   Label: LAB_00428cd5
    LEA EDI,[EBX + 0x20]                ; 00428cdb
    TEST ESI,ESI                        ; 00428cde
    JZ 0x00428e4a                       ; 00428ce0
        ;   XREF to: 00428e4a (CONDITIONAL_JUMP)  ; LAB_00428e4a
    PUSH EDI                            ; 00428ce6
    LEA EAX,[EBX + 0x25b0]              ; 00428ce7
    PUSH EAX                            ; 00428ced
    LEA EAX,[ESP + 0x14]                ; 00428cee
    PUSH EAX                            ; 00428cf2
    PUSH ESI                            ; 00428cf3
    CALL core_door.cpp_CDoor_getOpenStandPos_FUN_00456260 ; 00428cf4
        ;   XREF to: 00456260 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_CDoor_getOpenStandPos_FUN_00456260()
    ADD ESP,0x10                        ; 00428cf9
    PUSH 0x0                            ; 00428cfc
    MOV EAX,dword ptr [EBX + 0x25ac]    ; 00428cfe
    PUSH 0x0                            ; 00428d04
    PUSH 0x2dd1184                      ; 00428d06 | DAT_02dd1184
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00428d0b
    PUSH EAX                            ; 00428d11
    CALL dword ptr [EDX + 0xbc]         ; 00428d12
    ADD ESP,0x4                         ; 00428d18
    PUSH EAX                            ; 00428d1b
    LEA EAX,[ESP + 0x1c]                ; 00428d1c
    PUSH EAX                            ; 00428d20
    PUSH EBX                            ; 00428d21
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00428d22
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 00428d27
    TEST EAX,EAX                        ; 00428d2a
    JL 0x00428df4                       ; 00428d2c
        ;   XREF to: 00428df4 (CONDITIONAL_JUMP)  ; LAB_00428df4
    JLE 0x00428e33                      ; 00428d32
        ;   XREF to: 00428e33 (CONDITIONAL_JUMP)  ; LAB_00428e33
    MOV EAX,dword ptr [EBX + 0x25ac]    ; 00428d38
    ADD EAX,0x9b4                       ; 00428d3e
    PUSH EAX                            ; 00428d43
    LEA EAX,[ESP + 0x1c]                ; 00428d44
    PUSH EAX                            ; 00428d48
    PUSH EBX                            ; 00428d49
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00428d4a
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 00428d4f
    PUSH EAX                            ; 00428d52
    LEA EAX,[ESP + 0x4]                 ; 00428d53
    PUSH EAX                            ; 00428d57
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00428d58
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 00428d5d
    ADD ESP,0x8                         ; 00428d60
    FST float ptr [EBX + 0x2410]        ; 00428d63
    FCOMP double ptr [0x0057a142]       ; 00428d69 | DOUBLE_0057a142
    FNSTSW AX                           ; 00428d6f
    SAHF                                ; 00428d71
    JNC 0x00428e0b                      ; 00428d72
        ;   XREF to: 00428e0b (CONDITIONAL_JUMP)  ; LAB_00428e0b
    PUSH EBX                            ; 00428d78
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428d79
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00428d7f
    CALL dword ptr [EAX + 0x118]        ; 00428d89
    ADD ESP,0x4                         ; 00428d8f
    MOV EAX,dword ptr [EBX + 0x2410]    ; 00428d92
        ;   Label: LAB_00428d92
    MOV dword ptr [ESP + 0x30],EAX      ; 00428d98
    MOV EAX,dword ptr [EBX + 0x2430]    ; 00428d9c
    PUSH dword ptr [ESP + 0x30]         ; 00428da2
    MOV dword ptr [ESP + 0x30],EAX      ; 00428da6
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00428daa
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x38],EAX      ; 00428daf
    FLD float ptr [ESP + 0x38]          ; 00428db3
    ADD ESP,0x4                         ; 00428db7
    FLD float ptr [ESP + 0x2c]          ; 00428dba
    FXCH                                ; 00428dbe
    FST float ptr [ESP + 0x30]          ; 00428dc0
    FXCH                                ; 00428dc4
    FCHS                                ; 00428dc6
    FSTP float ptr [ESP + 0x24]         ; 00428dc8
    FCOMP float ptr [ESP + 0x24]        ; 00428dcc
    FNSTSW AX                           ; 00428dd0
    SAHF                                ; 00428dd2
    JNC 0x00428e1a                      ; 00428dd3
        ;   XREF to: 00428e1a (CONDITIONAL_JUMP)  ; LAB_00428e1a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00428dd5
    MOV dword ptr [ESP + 0x28],EAX      ; 00428dd9
        ;   Label: LAB_00428dd9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00428ddd
    MOV dword ptr [EBX + 0x2410],EAX    ; 00428de1
    MOV EAX,0x1                         ; 00428de7
    ADD ESP,0x38                        ; 00428dec
    POP EBP                             ; 00428def
    POP EDI                             ; 00428df0
    POP ESI                             ; 00428df1
    POP EBX                             ; 00428df2
    RET                                 ; 00428df3
    MOV dword ptr [EBX + 0x25a8],0x3    ; 00428df4
        ;   Label: LAB_00428df4
    MOV EAX,0x1                         ; 00428dfe
    ADD ESP,0x38                        ; 00428e03
    POP EBP                             ; 00428e06
    POP EDI                             ; 00428e07
    POP ESI                             ; 00428e08
    POP EBX                             ; 00428e09
    RET                                 ; 00428e0a
    MOV dword ptr [EBX + 0x25a8],0x1    ; 00428e0b
        ;   Label: LAB_00428e0b
    JMP 0x00428d92                      ; 00428e15
        ;   XREF to: 00428d92 (UNCONDITIONAL_JUMP)  ; LAB_00428d92
    FLD float ptr [ESP + 0x30]          ; 00428e1a
        ;   Label: LAB_00428e1a
    FCOMP float ptr [ESP + 0x2c]        ; 00428e1e
    FNSTSW AX                           ; 00428e22
    SAHF                                ; 00428e24
    JBE 0x00428e2d                      ; 00428e25
        ;   XREF to: 00428e2d (CONDITIONAL_JUMP)  ; LAB_00428e2d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00428e27
    JMP 0x00428dd9                      ; 00428e2b
        ;   XREF to: 00428dd9 (UNCONDITIONAL_JUMP)  ; LAB_00428dd9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00428e2d
        ;   Label: LAB_00428e2d
    JMP 0x00428dd9                      ; 00428e31
        ;   XREF to: 00428dd9 (UNCONDITIONAL_JUMP)  ; LAB_00428dd9
    MOV dword ptr [EBX + 0x25a8],0x1    ; 00428e33
        ;   Label: LAB_00428e33
    MOV EAX,0x1                         ; 00428e3d
    ADD ESP,0x38                        ; 00428e42
    POP EBP                             ; 00428e45
    POP EDI                             ; 00428e46
    POP ESI                             ; 00428e47
    POP EBX                             ; 00428e48
    RET                                 ; 00428e49
    FLD float ptr [EBX + 0x259c]        ; 00428e4a
        ;   Label: LAB_00428e4a
    FLDZ                                ; 00428e50
    MOV ESI,dword ptr [EBX + 0x2598]    ; 00428e52
    FCOMPP                              ; 00428e58
    FNSTSW AX                           ; 00428e5a
    SAHF                                ; 00428e5c
    JA 0x00428e83                       ; 00428e5d
        ;   XREF to: 00428e83 (CONDITIONAL_JUMP)  ; LAB_00428e83
    MOV EBP,dword ptr [0x02ddf54c]      ; 00428e5f | DAT_02ddf54c
    PUSH EBP                            ; 00428e65
    PUSH ESI                            ; 00428e66
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00428e67
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00428e6c
    TEST EAX,EAX                        ; 00428e6f
    JZ 0x00428e83                       ; 00428e71
        ;   XREF to: 00428e83 (CONDITIONAL_JUMP)  ; LAB_00428e83
    PUSH EAX                            ; 00428e73
    PUSH EDI                            ; 00428e74
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680 ; 00428e75
        ;   XREF to: 00552680 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680()
    ADD ESP,0x8                         ; 00428e7a
    MOV ESI,EAX                         ; 00428e7d
    TEST EAX,EAX                        ; 00428e7f
    JZ 0x00428ead                       ; 00428e81
        ;   XREF to: 00428ead (CONDITIONAL_JUMP)  ; LAB_00428ead
    LEA EAX,[EBX + 0x25a8]              ; 00428e83
        ;   Label: LAB_00428e83
    PUSH EAX                            ; 00428e89
    PUSH dword ptr [EBX + 0x25a0]       ; 00428e8a
    PUSH dword ptr [EBX + 0x259c]       ; 00428e90
    PUSH ESI                            ; 00428e96
    PUSH EBX                            ; 00428e97
    CALL core_charactr.cpp_CCharacter_followActor_FUN_00428780 ; 00428e98
        ;   XREF to: 00428780 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_followActor_FUN_00428780()
    ADD ESP,0x14                        ; 00428e9d
    MOV EAX,0x1                         ; 00428ea0
    ADD ESP,0x38                        ; 00428ea5
    POP EBP                             ; 00428ea8
    POP EDI                             ; 00428ea9
    POP ESI                             ; 00428eaa
    POP EBX                             ; 00428eab
    RET                                 ; 00428eac
    MOV EAX,dword ptr [EBX + 0x2598]    ; 00428ead
        ;   Label: LAB_00428ead
    PUSH EAX                            ; 00428eb3
    PUSH EBX                            ; 00428eb4
    PUSH 0x57a106                       ; 00428eb5 | = "%s can't figure out next waypoint try..."
    MOV EDX,dword ptr [0x005ad350]      ; 00428eba | PTR_DAT_005ad350
    PUSH EDX                            ; 00428ec0 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00428ec1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EAX,0x1                         ; 00428ec6
    ADD ESP,0x10                        ; 00428ecb
    ADD ESP,0x38                        ; 00428ece
    POP EBP                             ; 00428ed1
    POP EDI                             ; 00428ed2
    POP ESI                             ; 00428ed3
    POP EBX                             ; 00428ed4
    RET                                 ; 00428ed5

