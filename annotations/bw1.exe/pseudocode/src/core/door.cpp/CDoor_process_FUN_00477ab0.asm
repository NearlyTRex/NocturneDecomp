; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_process_FUN_00477ab0(CDoor *this_ptr,float delta_time)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00477a98 = 00477af9
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f700
;   core_door.cpp_FUN_00477540
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440
;   core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005594e0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477ab0
        ;   Label: core_door.cpp_CDoor_process_FUN_00477ab0
    PUSH ESI                            ; 00477ab1
    PUSH EDI                            ; 00477ab2
    PUSH EBP                            ; 00477ab3
    SUB ESP,0xf8                        ; 00477ab4
    MOV EBP,dword ptr [ESP + 0x10c]     ; 00477aba
    LEA EDI,[ESP + 0x7c]                ; 00477ac1
    LEA ESI,[EBP + 0x20]                ; 00477ac5
    MOVSD ES:EDI,ESI                    ; 00477ac8
    MOVSD ES:EDI,ESI                    ; 00477ac9
    MOVSD ES:EDI,ESI                    ; 00477aca
    MOV EAX,dword ptr [EBP + 0x9ac]     ; 00477acb
    MOV EDX,dword ptr [EBP + 0x9c8]     ; 00477ad1
    MOV dword ptr [ESP + 0xb0],EAX      ; 00477ad7
    CMP EDX,0x2                         ; 00477ade
    JGE 0x00477c20                      ; 00477ae1
        ;   XREF to: 00477c20 (CONDITIONAL_JUMP)  ; LAB_00477c20
    MOV EAX,dword ptr [EBP + 0x2e0]     ; 00477ae7
    CMP EAX,0x3                         ; 00477aed
    JA 0x00477b55                       ; 00477af0
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x477a98]  ; 00477af2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBP + 0x2e8]               ; 00477af9
        ;   Label: caseD_0
    PUSH EAX                            ; 00477aff
    MOV EBX,dword ptr [0x0061b4d0]      ; 00477b00 | DAT_0061b4d0
    PUSH EBX                            ; 00477b06
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00477b07
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00477b0c
    TEST EAX,EAX                        ; 00477b0f
    JZ 0x00477b4b                       ; 00477b11
        ;   XREF to: 00477b4b (CONDITIONAL_JUMP)  ; LAB_00477b4b
    MOV DL,byte ptr [EBP + 0x864]       ; 00477b13
    MOV dword ptr [EBP + 0x2e0],0x1     ; 00477b19
    TEST DL,DL                          ; 00477b23
    JZ 0x00477b3b                       ; 00477b25
        ;   XREF to: 00477b3b (CONDITIONAL_JUMP)  ; LAB_00477b3b
    LEA EAX,[EBP + 0x864]               ; 00477b27
    PUSH EAX                            ; 00477b2d
    MOV EBX,dword ptr [EBP + 0x154]     ; 00477b2e
    PUSH EBP                            ; 00477b34
    CALL dword ptr [EBX + 0x2c]         ; 00477b35
    ADD ESP,0x8                         ; 00477b38
    PUSH EBP                            ; 00477b3b
        ;   Label: LAB_00477b3b
    MOV ESI,dword ptr [0x00622c18]      ; 00477b3c | g_CDemonSetPtr
    PUSH ESI                            ; 00477b42 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005594e0 ; 00477b43
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005594e0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00477b48
    MOV dword ptr [EBP + 0x9ac],0x0     ; 00477b4b
        ;   Label: LAB_00477b4b
    MOV EAX,dword ptr [EBP + 0x2e0]     ; 00477b55
        ;   Label: default
    TEST EAX,EAX                        ; 00477b5b
    JBE 0x00477e13                      ; 00477b5d
        ;   XREF to: 00477e13 (CONDITIONAL_JUMP)  ; LAB_00477e13
    CMP EAX,0x2                         ; 00477b63
    JNZ 0x00477b87                      ; 00477b66
        ;   XREF to: 00477b87 (CONDITIONAL_JUMP)  ; LAB_00477b87
    CMP byte ptr [EBP + 0x3b0],0x0      ; 00477b68
    JZ 0x00477b87                       ; 00477b6f
        ;   XREF to: 00477b87 (CONDITIONAL_JUMP)  ; LAB_00477b87
    LEA EAX,[EBP + 0x3b0]               ; 00477b71
    PUSH EAX                            ; 00477b77
    MOV EDI,dword ptr [0x0061b4d0]      ; 00477b78 | DAT_0061b4d0
    PUSH EDI                            ; 00477b7e
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00477b7f
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
        ;   Label: LAB_00477b7f
    ADD ESP,0x8                         ; 00477b84
    PUSH EBP                            ; 00477b87
        ;   Label: LAB_00477b87
    CALL core_door.cpp_FUN_00477540     ; 00477b88
        ;   XREF to: 00477540 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00477540()
    ADD ESP,0x4                         ; 00477b8d
    FLD float ptr [EBP + 0x9ac]         ; 00477b90
    FCOMP float ptr [ESP + 0xb0]        ; 00477b96
    FNSTSW AX                           ; 00477b9d
    SAHF                                ; 00477b9f
    JZ 0x00477c20                       ; 00477ba0
        ;   XREF to: 00477c20 (CONDITIONAL_JUMP)  ; LAB_00477c20
    CMP dword ptr [EBP + 0x2d8],0x3     ; 00477ba6
    JZ 0x00477c20                       ; 00477bad
        ;   XREF to: 00477c20 (CONDITIONAL_JUMP)  ; LAB_00477c20
    PUSH EBP                            ; 00477baf
    MOV EAX,dword ptr [EBP + 0x154]     ; 00477bb0
    LEA ESI,[ESP + 0x2c]                ; 00477bb6
    LEA EDI,[ESP + 0x44]                ; 00477bba
    CALL dword ptr [EAX + 0x1c]         ; 00477bbe
    MOV ECX,0x6                         ; 00477bc1
    LEA ESI,[ESP + 0x2c]                ; 00477bc6
    ADD ESP,0x4                         ; 00477bca
    LEA EAX,[EBP + 0x20]                ; 00477bcd
    MOVSD.REP ES:EDI,ESI                ; 00477bd0
    MOV dword ptr [ESP + 0xec],EAX      ; 00477bd2
    XOR ECX,ECX                         ; 00477bd9
    LEA EAX,[EBP + 0x3c]                ; 00477bdb
    MOV dword ptr [ESP + 0xac],ECX      ; 00477bde
    MOV dword ptr [ESP + 0xe4],ECX      ; 00477be5
    MOV dword ptr [ESP + 0xb4],EAX      ; 00477bec
    MOV dword ptr [ESP + 0xe8],ECX      ; 00477bf3
    MOV EAX,[0x00622c18]                ; 00477bfa | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_00477bfa
    MOV EBX,dword ptr [ESP + 0xe4]      ; 00477bff
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 00477c06 | g_CDemonSetInstance.character_count
    JL 0x00477e57                       ; 00477c0c
        ;   XREF to: 00477e57 (CONDITIONAL_JUMP)  ; LAB_00477e57
    CMP dword ptr [ESP + 0xac],0x0      ; 00477c12
    JNZ 0x00477ff0                      ; 00477c1a
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    ADD ESP,0xf8                        ; 00477c20
        ;   Label: LAB_00477c20
    POP EBP                             ; 00477c26
    POP EDI                             ; 00477c27
    POP ESI                             ; 00477c28
    POP EBX                             ; 00477c29
    RET                                 ; 00477c2a
    LEA EAX,[EBP + 0x34c]               ; 00477c2b
        ;   Label: caseD_2
    PUSH EAX                            ; 00477c31
    MOV EAX,[0x0061b4d0]                ; 00477c32 | DAT_0061b4d0
    PUSH EAX                            ; 00477c37
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00477c38
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00477c3d
    TEST EAX,EAX                        ; 00477c40
    JZ 0x00477c6c                       ; 00477c42
        ;   XREF to: 00477c6c (CONDITIONAL_JUMP)  ; LAB_00477c6c
    MOV AH,byte ptr [EBP + 0x8c8]       ; 00477c44
    MOV dword ptr [EBP + 0x2e0],0x3     ; 00477c4a
    TEST AH,AH                          ; 00477c54
    JZ 0x00477c6c                       ; 00477c56
        ;   XREF to: 00477c6c (CONDITIONAL_JUMP)  ; LAB_00477c6c
    LEA EAX,[EBP + 0x8c8]               ; 00477c58
    PUSH EAX                            ; 00477c5e
    MOV EBX,dword ptr [EBP + 0x154]     ; 00477c5f
    PUSH EBP                            ; 00477c65
    CALL dword ptr [EBX + 0x2c]         ; 00477c66
    ADD ESP,0x8                         ; 00477c69
    MOV EAX,dword ptr [EBP + 0x9b0]     ; 00477c6c
        ;   Label: LAB_00477c6c
    MOV dword ptr [EBP + 0x9ac],EAX     ; 00477c72
    JMP 0x00477b55                      ; 00477c78
        ;   XREF to: 00477b55 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x110]         ; 00477c7d
        ;   Label: caseD_1
    FMUL float ptr [EBP + 0x9b0]        ; 00477c84
    FDIV float ptr [EBP + 0x9b4]        ; 00477c8a
    FLD float ptr [EBP + 0x9b0]         ; 00477c90
    FXCH                                ; 00477c96
    FADD float ptr [ESP + 0xb0]         ; 00477c98
    FLDZ                                ; 00477c9f
    FXCH                                ; 00477ca1
    FSTP float ptr [EBP + 0x9ac]        ; 00477ca3
    FCOMPP                              ; 00477ca9
    FNSTSW AX                           ; 00477cab
    SAHF                                ; 00477cad
    JNC 0x00477cf8                      ; 00477cae
        ;   XREF to: 00477cf8 (CONDITIONAL_JUMP)  ; LAB_00477cf8
    FLD float ptr [EBP + 0x9ac]         ; 00477cb0
    FCOMP float ptr [EBP + 0x9b0]       ; 00477cb6
    FNSTSW AX                           ; 00477cbc
    SAHF                                ; 00477cbe
    JBE 0x00477b55                      ; 00477cbf
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x2     ; 00477cc5
    FLD float ptr [EBP + 0x9b0]         ; 00477ccf
    MOV ECX,dword ptr [EBP + 0x9c8]     ; 00477cd5
    FSTP float ptr [EBP + 0x9ac]        ; 00477cdb
    TEST ECX,ECX                        ; 00477ce1
    JZ 0x00477b55                       ; 00477ce3
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00477ce9
    JMP 0x00477b55                      ; 00477cf3
        ;   XREF to: 00477b55 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBP + 0x9ac]         ; 00477cf8
        ;   Label: LAB_00477cf8
    FCOMP float ptr [EBP + 0x9b0]       ; 00477cfe
    FNSTSW AX                           ; 00477d04
    SAHF                                ; 00477d06
    JNC 0x00477b55                      ; 00477d07
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x2     ; 00477d0d
    FLD float ptr [EBP + 0x9b0]         ; 00477d17
    MOV EDX,dword ptr [EBP + 0x9c8]     ; 00477d1d
    FSTP float ptr [EBP + 0x9ac]        ; 00477d23
    TEST EDX,EDX                        ; 00477d29
    JZ 0x00477b55                       ; 00477d2b
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00477d31
    JMP 0x00477b55                      ; 00477d3b
        ;   XREF to: 00477b55 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x110]         ; 00477d40
        ;   Label: caseD_3
    FMUL float ptr [EBP + 0x9b0]        ; 00477d47
    FDIV float ptr [EBP + 0x9b8]        ; 00477d4d
    FLD float ptr [EBP + 0x9b0]         ; 00477d53
    FXCH                                ; 00477d59
    FSUBR float ptr [ESP + 0xb0]        ; 00477d5b
    FLDZ                                ; 00477d62
    FXCH                                ; 00477d64
    FSTP float ptr [EBP + 0x9ac]        ; 00477d66
    FCOMPP                              ; 00477d6c
    FNSTSW AX                           ; 00477d6e
    SAHF                                ; 00477d70
    JNC 0x00477dc3                      ; 00477d71
        ;   XREF to: 00477dc3 (CONDITIONAL_JUMP)  ; LAB_00477dc3
    FLD float ptr [EBP + 0x9ac]         ; 00477d73
    FLDZ                                ; 00477d79
    FCOMPP                              ; 00477d7b
    FNSTSW AX                           ; 00477d7d
    SAHF                                ; 00477d7f
    JBE 0x00477b55                      ; 00477d80
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x0     ; 00477d86
    MOV ESI,dword ptr [EBP + 0x9c8]     ; 00477d90
    MOV dword ptr [EBP + 0x9ac],0x0     ; 00477d96
    TEST ESI,ESI                        ; 00477da0
    JZ 0x00477dae                       ; 00477da2
        ;   XREF to: 00477dae (CONDITIONAL_JUMP)  ; LAB_00477dae
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00477da4
    PUSH EBP                            ; 00477dae
        ;   Label: LAB_00477dae
    MOV EDI,dword ptr [0x00622c18]      ; 00477daf | g_CDemonSetPtr
    PUSH EDI                            ; 00477db5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440 ; 00477db6
        ;   XREF to: 00559440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00477dbb
    JMP 0x00477b55                      ; 00477dbe
        ;   XREF to: 00477b55 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBP + 0x9ac]         ; 00477dc3
        ;   Label: LAB_00477dc3
    FLDZ                                ; 00477dc9
    FCOMPP                              ; 00477dcb
    FNSTSW AX                           ; 00477dcd
    SAHF                                ; 00477dcf
    JNC 0x00477b55                      ; 00477dd0
        ;   XREF to: 00477b55 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x0     ; 00477dd6
    MOV ECX,dword ptr [EBP + 0x9c8]     ; 00477de0
    MOV dword ptr [EBP + 0x9ac],0x0     ; 00477de6
    TEST ECX,ECX                        ; 00477df0
    JZ 0x00477dfe                       ; 00477df2
        ;   XREF to: 00477dfe (CONDITIONAL_JUMP)  ; LAB_00477dfe
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00477df4
    PUSH EBP                            ; 00477dfe
        ;   Label: LAB_00477dfe
    MOV EBX,dword ptr [0x00622c18]      ; 00477dff | g_CDemonSetPtr
    PUSH EBX                            ; 00477e05 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440 ; 00477e06
        ;   XREF to: 00559440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00477e0b
    JMP 0x00477b55                      ; 00477e0e
        ;   XREF to: 00477b55 (UNCONDITIONAL_JUMP)  ; default
    CMP byte ptr [EBP + 0x414],0x0      ; 00477e13
        ;   Label: LAB_00477e13
    JZ 0x00477b87                       ; 00477e1a
        ;   XREF to: 00477b87 (CONDITIONAL_JUMP)  ; LAB_00477b87
    LEA EAX,[EBP + 0x414]               ; 00477e20
    PUSH EAX                            ; 00477e26
    MOV EAX,[0x0061b4d0]                ; 00477e27 | DAT_0061b4d0
    PUSH EAX                            ; 00477e2c
    JMP 0x00477b7f                      ; 00477e2d
        ;   XREF to: 00477b7f (UNCONDITIONAL_JUMP)  ; LAB_00477b7f
    MOV ESI,dword ptr [ESP + 0xe4]      ; 00477e32
        ;   Label: LAB_00477e32
    MOV EBX,dword ptr [ESP + 0xe8]      ; 00477e39
    INC ESI                             ; 00477e40
    ADD EBX,0x4                         ; 00477e41
    MOV dword ptr [ESP + 0xe4],ESI      ; 00477e44
    MOV dword ptr [ESP + 0xe8],EBX      ; 00477e4b
    JMP 0x00477bfa                      ; 00477e52
        ;   XREF to: 00477bfa (UNCONDITIONAL_JUMP)  ; LAB_00477bfa
    ADD EAX,dword ptr [ESP + 0xe8]      ; 00477e57
        ;   Label: LAB_00477e57
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00477e5e
    MOV EAX,ESP                         ; 00477e64
    PUSH EAX                            ; 00477e66
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00477e67
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00477e6c
    MOV ESI,ESP                         ; 00477e6f
    PUSH ESI                            ; 00477e71
    MOV EAX,dword ptr [EBX + 0x154]     ; 00477e72
    PUSH EBX                            ; 00477e78
    CALL dword ptr [EAX + 0x3c]         ; 00477e79
    ADD ESP,0x8                         ; 00477e7c
    CMP EAX,0x2                         ; 00477e7f
    JNZ 0x00477e32                      ; 00477e82
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0x14]          ; 00477e84
    FADD float ptr [EBX + 0x24]         ; 00477e88
    FLD float ptr [EBP + 0x24]          ; 00477e8b
    FADD float ptr [ESP + 0x50]         ; 00477e8e
    FCOMPP                              ; 00477e92
    FNSTSW AX                           ; 00477e94
    SAHF                                ; 00477e96
    JC 0x00477e32                       ; 00477e97
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0x18]          ; 00477e99
    FADD float ptr [EBX + 0x24]         ; 00477e9d
    FLD float ptr [EBP + 0x24]          ; 00477ea0
    FADD float ptr [ESP + 0x44]         ; 00477ea3
    FCOMPP                              ; 00477ea7
    FNSTSW AX                           ; 00477ea9
    SAHF                                ; 00477eab
    JA 0x00477e32                       ; 00477eac
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [EBX + 0x24]          ; 00477eae
    FLD float ptr [EBX + 0x28]          ; 00477eb1
    FLD float ptr [EBX + 0x20]          ; 00477eb4
    MOV EAX,dword ptr [ESP + 0xec]      ; 00477eb7
    LEA EDI,[ESP + 0x94]                ; 00477ebe
    LEA ESI,[ESP + 0x64]                ; 00477ec5
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00477ec9
    LEA EBX,[ESP + 0x88]                ; 00477ed0
    FSUB float ptr [EAX]                ; 00477ed7
    FXCH ST2                            ; 00477ed9
    FSUB float ptr [EAX + 0x4]          ; 00477edb
    FXCH                                ; 00477ede
    FSUB float ptr [EAX + 0x8]          ; 00477ee0
    FXCH ST2                            ; 00477ee3
    FSTP float ptr [ESP + 0x64]         ; 00477ee5
    FSTP float ptr [ESP + 0x68]         ; 00477ee9
    LEA EAX,[ESP + 0x94]                ; 00477eed
    FSTP float ptr [ESP + 0x6c]         ; 00477ef4
    PUSH EAX                            ; 00477ef8
    MOVSD ES:EDI,ESI                    ; 00477ef9
    MOVSD ES:EDI,ESI                    ; 00477efa
    MOVSD ES:EDI,ESI                    ; 00477efb
    PUSH ECX                            ; 00477efc
    LEA ESI,[ESP + 0x78]                ; 00477efd
    LEA EDI,[ESP + 0x90]                ; 00477f01
    CALL core_dirmat.cpp_FUN_0045f700   ; 00477f08
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x78]                ; 00477f0d
    ADD ESP,0x8                         ; 00477f11
    LEA EAX,[ESP + 0x58]                ; 00477f14
    MOVSD ES:EDI,ESI                    ; 00477f18
    MOVSD ES:EDI,ESI                    ; 00477f19
    MOVSD ES:EDI,ESI                    ; 00477f1a
    CMP EAX,EBX                         ; 00477f1b
    JZ 0x00477f40                       ; 00477f1d
        ;   XREF to: 00477f40 (CONDITIONAL_JUMP)  ; LAB_00477f40
    MOV EAX,dword ptr [ESP + 0x88]      ; 00477f1f
    MOV dword ptr [ESP + 0x58],EAX      ; 00477f26
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00477f2a
    MOV dword ptr [ESP + 0x5c],EAX      ; 00477f31
    MOV EAX,dword ptr [ESP + 0x90]      ; 00477f35
    MOV dword ptr [ESP + 0x60],EAX      ; 00477f3c
    FLD float ptr [ESP + 0x58]          ; 00477f40
        ;   Label: LAB_00477f40
    FADD float ptr [ESP + 0x1c]         ; 00477f44
    FST float ptr [ESP + 0xc0]          ; 00477f48
    FCOMP float ptr [ESP + 0x40]        ; 00477f4f
    FNSTSW AX                           ; 00477f53
    SAHF                                ; 00477f55
    JC 0x00477e32                       ; 00477f56
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0x58]          ; 00477f5c
    FSUB float ptr [ESP + 0x1c]         ; 00477f60
    FST float ptr [ESP + 0xb8]          ; 00477f64
    FCOMP float ptr [ESP + 0x4c]        ; 00477f6b
    FNSTSW AX                           ; 00477f6f
    SAHF                                ; 00477f71
    JA 0x00477e32                       ; 00477f72
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0x60]          ; 00477f78
    FADD float ptr [ESP + 0x1c]         ; 00477f7c
    FST float ptr [ESP + 0xf4]          ; 00477f80
    FCOMP float ptr [ESP + 0x48]        ; 00477f87
    FNSTSW AX                           ; 00477f8b
    SAHF                                ; 00477f8d
    JC 0x00477e32                       ; 00477f8e
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0x60]          ; 00477f94
    FSUB float ptr [ESP + 0x1c]         ; 00477f98
    FST float ptr [ESP + 0xbc]          ; 00477f9c
    FCOMP float ptr [ESP + 0x54]        ; 00477fa3
    FNSTSW AX                           ; 00477fa7
    SAHF                                ; 00477fa9
    JA 0x00477e32                       ; 00477faa
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0xb8]          ; 00477fb0
    FCOMP float ptr [ESP + 0x40]        ; 00477fb7
    FNSTSW AX                           ; 00477fbb
    SAHF                                ; 00477fbd
    JC 0x0047802e                       ; 00477fbe
        ;   XREF to: 0047802e (CONDITIONAL_JUMP)  ; LAB_0047802e
    FLD float ptr [ESP + 0xc0]          ; 00477fc0
    FCOMP float ptr [ESP + 0x4c]        ; 00477fc7
    FNSTSW AX                           ; 00477fcb
    SAHF                                ; 00477fcd
    JA 0x0047802e                       ; 00477fce
        ;   XREF to: 0047802e (CONDITIONAL_JUMP)  ; LAB_0047802e
    FLD float ptr [ESP + 0xbc]          ; 00477fd0
    FCOMP float ptr [ESP + 0x48]        ; 00477fd7
    FNSTSW AX                           ; 00477fdb
    SAHF                                ; 00477fdd
    JC 0x0047802e                       ; 00477fde
        ;   XREF to: 0047802e (CONDITIONAL_JUMP)  ; LAB_0047802e
    FLD float ptr [ESP + 0xf4]          ; 00477fe0
    FCOMP float ptr [ESP + 0x54]        ; 00477fe7
    FNSTSW AX                           ; 00477feb
    SAHF                                ; 00477fed
    JA 0x0047802e                       ; 00477fee
        ;   XREF to: 0047802e (CONDITIONAL_JUMP)  ; LAB_0047802e
    LEA EBX,[EBP + 0x20]                ; 00477ff0
        ;   Label: LAB_00477ff0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00477ff3
    MOV dword ptr [EBX],EAX             ; 00477ff7
    MOV EAX,dword ptr [ESP + 0x80]      ; 00477ff9
    MOV dword ptr [EBX + 0x4],EAX       ; 00478000
    MOV EAX,dword ptr [ESP + 0x84]      ; 00478003
    MOV dword ptr [EBX + 0x8],EAX       ; 0047800a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0047800d
    PUSH EBP                            ; 00478014
    MOV dword ptr [EBP + 0x9ac],EAX     ; 00478015
    CALL core_door.cpp_FUN_00477540     ; 0047801b
        ;   XREF to: 00477540 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00477540()
    ADD ESP,0x4                         ; 00478020
    ADD ESP,0xf8                        ; 00478023
    POP EBP                             ; 00478029
    POP EDI                             ; 0047802a
    POP ESI                             ; 0047802b
    POP EBX                             ; 0047802c
    RET                                 ; 0047802d
    FLD float ptr [ESP + 0x1c]          ; 0047802e
        ;   Label: LAB_0047802e
    FMUL ST0                            ; 00478032
    FLD float ptr [ESP + 0x4c]          ; 00478034
    FSUB float ptr [ESP + 0x58]         ; 00478038
    FMUL ST0                            ; 0047803c
    FXCH                                ; 0047803e
    FSTP float ptr [ESP + 0xf0]         ; 00478040
    FSUBR float ptr [ESP + 0xf0]        ; 00478047
    FSQRT                               ; 0047804e
    FLD float ptr [ESP + 0x60]          ; 00478050
    FLD ST0                             ; 00478054
    FADD ST0,ST2                        ; 00478056
    FXCH                                ; 00478058
    FSUBRP ST2,ST0                      ; 0047805a
    FSTP float ptr [ESP + 0xc8]         ; 0047805c
    FSTP float ptr [ESP + 0xd8]         ; 00478063
    FLD float ptr [ESP + 0xc8]          ; 0047806a
    FCOMP float ptr [ESP + 0x48]        ; 00478071
    FNSTSW AX                           ; 00478075
    SAHF                                ; 00478077
    JC 0x0047808e                       ; 00478078
        ;   XREF to: 0047808e (CONDITIONAL_JUMP)  ; LAB_0047808e
    FLD float ptr [ESP + 0xc8]          ; 0047807a
    FCOMP float ptr [ESP + 0x54]        ; 00478081
    FNSTSW AX                           ; 00478085
    SAHF                                ; 00478087
    JBE 0x00477ff0                      ; 00478088
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0xd8]          ; 0047808e
        ;   Label: LAB_0047808e
    FCOMP float ptr [ESP + 0x48]        ; 00478095
    FNSTSW AX                           ; 00478099
    SAHF                                ; 0047809b
    JC 0x004780b2                       ; 0047809c
        ;   XREF to: 004780b2 (CONDITIONAL_JUMP)  ; LAB_004780b2
    FLD float ptr [ESP + 0xd8]          ; 0047809e
    FCOMP float ptr [ESP + 0x54]        ; 004780a5
    FNSTSW AX                           ; 004780a9
    SAHF                                ; 004780ab
    JBE 0x00477ff0                      ; 004780ac
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0x40]          ; 004780b2
        ;   Label: LAB_004780b2
    FSUB float ptr [ESP + 0x58]         ; 004780b6
    FMUL ST0                            ; 004780ba
    FSUBR float ptr [ESP + 0xf0]        ; 004780bc
    FSQRT                               ; 004780c3
    FLD float ptr [ESP + 0x60]          ; 004780c5
    FLD ST0                             ; 004780c9
    FADD ST0,ST2                        ; 004780cb
    FXCH                                ; 004780cd
    FSUBRP ST2,ST0                      ; 004780cf
    FSTP float ptr [ESP + 0xe0]         ; 004780d1
    FSTP float ptr [ESP + 0xcc]         ; 004780d8
    FLD float ptr [ESP + 0xe0]          ; 004780df
    FCOMP float ptr [ESP + 0x48]        ; 004780e6
    FNSTSW AX                           ; 004780ea
    SAHF                                ; 004780ec
    JC 0x00478103                       ; 004780ed
        ;   XREF to: 00478103 (CONDITIONAL_JUMP)  ; LAB_00478103
    FLD float ptr [ESP + 0xe0]          ; 004780ef
    FCOMP float ptr [ESP + 0x54]        ; 004780f6
    FNSTSW AX                           ; 004780fa
    SAHF                                ; 004780fc
    JBE 0x00477ff0                      ; 004780fd
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0xcc]          ; 00478103
        ;   Label: LAB_00478103
    FCOMP float ptr [ESP + 0x48]        ; 0047810a
    FNSTSW AX                           ; 0047810e
    SAHF                                ; 00478110
    JC 0x00478127                       ; 00478111
        ;   XREF to: 00478127 (CONDITIONAL_JUMP)  ; LAB_00478127
    FLD float ptr [ESP + 0xcc]          ; 00478113
    FCOMP float ptr [ESP + 0x54]        ; 0047811a
    FNSTSW AX                           ; 0047811e
    SAHF                                ; 00478120
    JBE 0x00477ff0                      ; 00478121
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0x54]          ; 00478127
        ;   Label: LAB_00478127
    FSUB float ptr [ESP + 0x60]         ; 0047812b
    FMUL ST0                            ; 0047812f
    FSUBR float ptr [ESP + 0xf0]        ; 00478131
    FSQRT                               ; 00478138
    FLD float ptr [ESP + 0x58]          ; 0047813a
    FLD ST0                             ; 0047813e
    FADD ST0,ST2                        ; 00478140
    FXCH                                ; 00478142
    FSUBRP ST2,ST0                      ; 00478144
    FSTP float ptr [ESP + 0xd4]         ; 00478146
    FSTP float ptr [ESP + 0xd0]         ; 0047814d
    FLD float ptr [ESP + 0xd4]          ; 00478154
    FCOMP float ptr [ESP + 0x40]        ; 0047815b
    FNSTSW AX                           ; 0047815f
    SAHF                                ; 00478161
    JC 0x00478178                       ; 00478162
        ;   XREF to: 00478178 (CONDITIONAL_JUMP)  ; LAB_00478178
    FLD float ptr [ESP + 0xd4]          ; 00478164
    FCOMP float ptr [ESP + 0x4c]        ; 0047816b
    FNSTSW AX                           ; 0047816f
    SAHF                                ; 00478171
    JBE 0x00477ff0                      ; 00478172
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0xd0]          ; 00478178
        ;   Label: LAB_00478178
    FCOMP float ptr [ESP + 0x40]        ; 0047817f
    FNSTSW AX                           ; 00478183
    SAHF                                ; 00478185
    JC 0x0047819c                       ; 00478186
        ;   XREF to: 0047819c (CONDITIONAL_JUMP)  ; LAB_0047819c
    FLD float ptr [ESP + 0xd0]          ; 00478188
    FCOMP float ptr [ESP + 0x4c]        ; 0047818f
    FNSTSW AX                           ; 00478193
    SAHF                                ; 00478195
    JBE 0x00477ff0                      ; 00478196
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0x48]          ; 0047819c
        ;   Label: LAB_0047819c
    FSUB float ptr [ESP + 0x60]         ; 004781a0
    FMUL ST0                            ; 004781a4
    FSUBR float ptr [ESP + 0xf0]        ; 004781a6
    FSQRT                               ; 004781ad
    FLD float ptr [ESP + 0x58]          ; 004781af
    FLD ST0                             ; 004781b3
    FADD ST0,ST2                        ; 004781b5
    FXCH                                ; 004781b7
    FSUBRP ST2,ST0                      ; 004781b9
    FSTP float ptr [ESP + 0xdc]         ; 004781bb
    FSTP float ptr [ESP + 0xc4]         ; 004781c2
    FLD float ptr [ESP + 0xdc]          ; 004781c9
    FCOMP float ptr [ESP + 0x40]        ; 004781d0
    FNSTSW AX                           ; 004781d4
    SAHF                                ; 004781d6
    JC 0x004781ed                       ; 004781d7
        ;   XREF to: 004781ed (CONDITIONAL_JUMP)  ; LAB_004781ed
    FLD float ptr [ESP + 0xdc]          ; 004781d9
    FCOMP float ptr [ESP + 0x4c]        ; 004781e0
    FNSTSW AX                           ; 004781e4
    SAHF                                ; 004781e6
    JBE 0x00477ff0                      ; 004781e7
        ;   XREF to: 00477ff0 (CONDITIONAL_JUMP)  ; LAB_00477ff0
    FLD float ptr [ESP + 0xc4]          ; 004781ed
        ;   Label: LAB_004781ed
    FCOMP float ptr [ESP + 0x40]        ; 004781f4
    FNSTSW AX                           ; 004781f8
    SAHF                                ; 004781fa
    JC 0x00477e32                       ; 004781fb
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    FLD float ptr [ESP + 0xc4]          ; 00478201
    FCOMP float ptr [ESP + 0x4c]        ; 00478208
    FNSTSW AX                           ; 0047820c
    SAHF                                ; 0047820e
    JA 0x00477e32                       ; 0047820f
        ;   XREF to: 00477e32 (CONDITIONAL_JUMP)  ; LAB_00477e32
    JMP 0x00477ff0                      ; 00478215
        ;   XREF to: 00477ff0 (UNCONDITIONAL_JUMP)  ; LAB_00477ff0

