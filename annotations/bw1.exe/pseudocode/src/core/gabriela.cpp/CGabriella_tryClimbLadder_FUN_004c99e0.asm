; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c7927
;
; Referenced Globals:
;   undefined4 DAT_005e113c
;   undefined4 DAT_005e1144
;   undefined4 DAT_005e114c
;   undefined4 DAT_005e1154
;   undefined4 DAT_005e115c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c99e0
        ;   Label: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004c99e0
    PUSH ESI                            ; 004c99e1
    PUSH EDI                            ; 004c99e2
    PUSH EBP                            ; 004c99e3
    MOV EBP,ESP                         ; 004c99e4
    SUB ESP,0xf4                        ; 004c99e6
    AND ESP,0xfffffff8                  ; 004c99ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c99ef
    XOR EDX,EDX                         ; 004c99f2
    ADD EAX,0x20                        ; 004c99f4
    MOV dword ptr [ESP + 0xe4],EDX      ; 004c99f7
    MOV dword ptr [ESP + 0xe8],EDX      ; 004c99fe
    MOV dword ptr [EAX + 0x1ff64],0x0   ; 004c9a05
    MOV dword ptr [ESP + 0xec],EAX      ; 004c9a0f
    MOV EAX,[0x00622c18]                ; 004c9a16 | g_CDemonSetPtr
        ;   Label: LAB_004c9a16
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c9a1b
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004c9a22 | g_CDemonSetInstance.actor_count
    JL 0x004c9a55                       ; 004c9a28
        ;   XREF to: 004c9a55 (CONDITIONAL_JUMP)  ; LAB_004c9a55
    XOR EAX,EAX                         ; 004c9a2a
    MOV ESP,EBP                         ; 004c9a2c
    POP EBP                             ; 004c9a2e
    POP EDI                             ; 004c9a2f
    POP ESI                             ; 004c9a30
    POP EBX                             ; 004c9a31
    RET                                 ; 004c9a32
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c9a33
        ;   Label: LAB_004c9a33
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004c9a3a
    INC ECX                             ; 004c9a41
    ADD EDX,0x4                         ; 004c9a42
    MOV dword ptr [ESP + 0xe4],ECX      ; 004c9a45
    MOV dword ptr [ESP + 0xe8],EDX      ; 004c9a4c
    JMP 0x004c9a16                      ; 004c9a53
        ;   XREF to: 004c9a16 (UNCONDITIONAL_JUMP)  ; LAB_004c9a16
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004c9a55
        ;   Label: LAB_004c9a55
    MOV EDI,dword ptr [0x01d1bcdc]      ; 004c9a5c | g_CLadderClassInfo.name_hash
    ADD EAX,ESI                         ; 004c9a62
    PUSH EDI                            ; 004c9a64
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 004c9a65 | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 004c9a6b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c9a6c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004c9a71
    MOV EBX,EAX                         ; 004c9a74
    MOV dword ptr [ESP + 0xdc],EAX      ; 004c9a76
    TEST EAX,EAX                        ; 004c9a7d
    JZ 0x004c9a33                       ; 004c9a7f
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    LEA EDX,[EAX + 0x20]                ; 004c9a81
    MOV EAX,dword ptr [ESP + 0xec]      ; 004c9a84
    LEA EDI,[ESP + 0x70]                ; 004c9a8b
    LEA ESI,[ESP + 0x58]                ; 004c9a8f
    FLD float ptr [EAX]                 ; 004c9a93
    FLD float ptr [EAX + 0x4]           ; 004c9a95
    FLD float ptr [EAX + 0x8]           ; 004c9a98
    FXCH ST2                            ; 004c9a9b
    FSUB float ptr [EDX]                ; 004c9a9d
    FXCH                                ; 004c9a9f
    FSUB float ptr [EDX + 0x4]          ; 004c9aa1
    FXCH ST2                            ; 004c9aa4
    FSUB float ptr [EDX + 0x8]          ; 004c9aa6
    FXCH                                ; 004c9aa9
    FSTP float ptr [ESP + 0x58]         ; 004c9aab
    FXCH                                ; 004c9aaf
    FSTP float ptr [ESP + 0x5c]         ; 004c9ab1
    FSTP float ptr [ESP + 0x60]         ; 004c9ab5
    MOVSD ES:EDI,ESI                    ; 004c9ab9
    MOVSD ES:EDI,ESI                    ; 004c9aba
    MOVSD ES:EDI,ESI                    ; 004c9abb
    FLD float ptr [ESP + 0x74]          ; 004c9abc
    FABS                                ; 004c9ac0
    FCOMP double ptr [0x005e113c]       ; 004c9ac2 | DAT_005e113c
    FNSTSW AX                           ; 004c9ac8
    SAHF                                ; 004c9aca
    JA 0x004c9a33                       ; 004c9acb
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    FLD float ptr [ESP + 0x70]          ; 004c9ad1
    FMUL ST0                            ; 004c9ad5
    FLD float ptr [ESP + 0x78]          ; 004c9ad7
    FMUL ST0                            ; 004c9adb
    XOR EAX,EAX                         ; 004c9add
    FADDP                               ; 004c9adf
    MOV dword ptr [ESP + 0x74],EAX      ; 004c9ae1
    FSQRT                               ; 004c9ae5
    FCOMP double ptr [0x005e1144]       ; 004c9ae7 | DAT_005e1144
    FNSTSW AX                           ; 004c9aed
    SAHF                                ; 004c9aef
    JA 0x004c9a33                       ; 004c9af0
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    PUSH EDX                            ; 004c9af6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9af7
    PUSH EDX                            ; 004c9afa
    LEA ESI,[ESP + 0x90]                ; 004c9afb
    LEA EDI,[ESP + 0x18]                ; 004c9b02
    CALL core_actor.cpp_FUN_00408bb0    ; 004c9b06
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x90]                ; 004c9b0b
    ADD ESP,0x8                         ; 004c9b12
    MOVSD ES:EDI,ESI                    ; 004c9b15
    MOVSD ES:EDI,ESI                    ; 004c9b16
    MOVSD ES:EDI,ESI                    ; 004c9b17
    FLD float ptr [ESP + 0x10]          ; 004c9b18
    FABS                                ; 004c9b1c
    FCOMP double ptr [0x005e114c]       ; 004c9b1e | DAT_005e114c
    FNSTSW AX                           ; 004c9b24
    SAHF                                ; 004c9b26
    JA 0x004c9a33                       ; 004c9b27
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    FLD float ptr [ESP + 0x18]          ; 004c9b2d
    FST double ptr [ESP + 0x8]          ; 004c9b31
    FCOMP double ptr [0x005e1154]       ; 004c9b35 | DAT_005e1154
    FNSTSW AX                           ; 004c9b3b
    SAHF                                ; 004c9b3d
    JC 0x004c9a33                       ; 004c9b3e
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    FLD double ptr [ESP + 0x8]          ; 004c9b44
    FCOMP double ptr [0x005e1144]       ; 004c9b48 | DAT_005e1144
    FNSTSW AX                           ; 004c9b4e
    SAHF                                ; 004c9b50
    JA 0x004c9a33                       ; 004c9b51
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    LEA EAX,[ESP + 0x10]                ; 004c9b57
    PUSH EAX                            ; 004c9b5b
    LEA ESI,[ESP + 0xd4]                ; 004c9b5c
    LEA EDI,[ESP + 0x38]                ; 004c9b63
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004c9b67
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xd4]                ; 004c9b6c
    ADD ESP,0x4                         ; 004c9b73
    MOVSD ES:EDI,ESI                    ; 004c9b76
    MOVSD ES:EDI,ESI                    ; 004c9b77
    MOVSD ES:EDI,ESI                    ; 004c9b78
    PUSH dword ptr [ESP + 0x38]         ; 004c9b79
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004c9b7d
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xf4],EAX      ; 004c9b82
    FLD float ptr [ESP + 0xf4]          ; 004c9b89
    FABS                                ; 004c9b90
    ADD ESP,0x4                         ; 004c9b92
    FCOMP double ptr [0x005e115c]       ; 004c9b95 | DAT_005e115c
    FNSTSW AX                           ; 004c9b9b
    SAHF                                ; 004c9b9d
    JA 0x004c9a33                       ; 004c9b9e
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    MOV ESI,dword ptr [ESP + 0xec]      ; 004c9ba4
    PUSH ESI                            ; 004c9bab
    LEA EDI,[ESP + 0x20]                ; 004c9bac
    XOR ECX,ECX                         ; 004c9bb0
    PUSH EBX                            ; 004c9bb2
    LEA ESI,[ESP + 0xb4]                ; 004c9bb3
    MOV dword ptr [ESP + 0xe8],ECX      ; 004c9bba
    CALL core_actor.cpp_FUN_00408bb0    ; 004c9bc1
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xb4]                ; 004c9bc6
    LEA EDX,[ESP + 0x24]                ; 004c9bcd
    ADD ESP,0x8                         ; 004c9bd1
    LEA EAX,[ESP + 0x10]                ; 004c9bd4
    MOVSD ES:EDI,ESI                    ; 004c9bd8
    MOVSD ES:EDI,ESI                    ; 004c9bd9
    MOVSD ES:EDI,ESI                    ; 004c9bda
    CMP EAX,EDX                         ; 004c9bdb
    JZ 0x004c9bf7                       ; 004c9bdd
        ;   XREF to: 004c9bf7 (CONDITIONAL_JUMP)  ; LAB_004c9bf7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c9bdf
    MOV dword ptr [ESP + 0x10],EAX      ; 004c9be3
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c9be7
    MOV dword ptr [ESP + 0x14],EAX      ; 004c9beb
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c9bef
    MOV dword ptr [ESP + 0x18],EAX      ; 004c9bf3
    FLD float ptr [ESP + 0x18]          ; 004c9bf7
        ;   Label: LAB_004c9bf7
    FLDZ                                ; 004c9bfb
    FCOMPP                              ; 004c9bfd
    FNSTSW AX                           ; 004c9bff
    SAHF                                ; 004c9c01
    JBE 0x004c9c1b                      ; 004c9c02
        ;   XREF to: 004c9c1b (CONDITIONAL_JUMP)  ; LAB_004c9c1b
    MOV AH,byte ptr [ESP + 0x1b]        ; 004c9c04
    MOV EDI,0x1                         ; 004c9c08
    XOR AH,0x80                         ; 004c9c0d
    MOV dword ptr [ESP + 0xe0],EDI      ; 004c9c10
    MOV byte ptr [ESP + 0x1b],AH        ; 004c9c17
    FLD float ptr [ESP + 0x10]          ; 004c9c1b
        ;   Label: LAB_004c9c1b
    FABS                                ; 004c9c1f
    FCOMP double ptr [0x005e114c]       ; 004c9c21 | DAT_005e114c
    FNSTSW AX                           ; 004c9c27
    SAHF                                ; 004c9c29
    JA 0x004c9a33                       ; 004c9c2a
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    FLD float ptr [ESP + 0x18]          ; 004c9c30
    FST double ptr [ESP]                ; 004c9c34
    FCOMP double ptr [0x005e1154]       ; 004c9c37 | DAT_005e1154
    FNSTSW AX                           ; 004c9c3d
    SAHF                                ; 004c9c3f
    JC 0x004c9a33                       ; 004c9c40
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    FLD double ptr [ESP]                ; 004c9c46
    FCOMP double ptr [0x005e1144]       ; 004c9c49 | DAT_005e1144
    FNSTSW AX                           ; 004c9c4f
    SAHF                                ; 004c9c51
    JA 0x004c9a33                       ; 004c9c52
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    LEA EAX,[ESP + 0x10]                ; 004c9c58
    PUSH EAX                            ; 004c9c5c
    LEA ESI,[ESP + 0xc8]                ; 004c9c5d
    LEA EDI,[ESP + 0xbc]                ; 004c9c64
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004c9c6b
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xc8]                ; 004c9c70
    ADD ESP,0x4                         ; 004c9c77
    MOVSD ES:EDI,ESI                    ; 004c9c7a
    MOVSD ES:EDI,ESI                    ; 004c9c7b
    MOVSD ES:EDI,ESI                    ; 004c9c7c
    PUSH dword ptr [ESP + 0xbc]         ; 004c9c7d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004c9c84
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xf4],EAX      ; 004c9c89
    FLD float ptr [ESP + 0xf4]          ; 004c9c90
    FABS                                ; 004c9c97
    ADD ESP,0x4                         ; 004c9c99
    FCOMP double ptr [0x005e115c]       ; 004c9c9c | DAT_005e115c
    FNSTSW AX                           ; 004c9ca2
    SAHF                                ; 004c9ca4
    JA 0x004c9a33                       ; 004c9ca5
        ;   XREF to: 004c9a33 (CONDITIONAL_JUMP)  ; LAB_004c9a33
    PUSH 0x1                            ; 004c9cab
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9cad
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c9cb0
    PUSH 0x16                           ; 004c9cb7
    MOV dword ptr [EDX + 0x1ff84],EAX   ; 004c9cb9
    LEA EAX,[EDX + 0x158]               ; 004c9cbf
    PUSH EAX                            ; 004c9cc5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c9cc6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c9ccb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9cce
    MOV ECX,0x40000000                  ; 004c9cd1
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004c9cd6
    MOV dword ptr [EAX + 0xc1e4],0x0    ; 004c9cdd
    XOR EAX,EAX                         ; 004c9ce7
    MOV dword ptr [ESP + 0x48],ECX      ; 004c9ce9
    MOV dword ptr [ESP + 0x40],EAX      ; 004c9ced
    MOV dword ptr [ESP + 0x44],EAX      ; 004c9cf1
    TEST EBX,EBX                        ; 004c9cf5
    JZ 0x004c9d01                       ; 004c9cf7
        ;   XREF to: 004c9d01 (CONDITIONAL_JUMP)  ; LAB_004c9d01
    MOV dword ptr [ESP + 0x48],0xc0000000 ; 004c9cf9
    LEA EAX,[ESP + 0x40]                ; 004c9d01
        ;   Label: LAB_004c9d01
    PUSH EAX                            ; 004c9d05
    MOV EDI,dword ptr [ESP + 0xe0]      ; 004c9d06
    PUSH EDI                            ; 004c9d0d
    LEA ESI,[ESP + 0x6c]                ; 004c9d0e
    CALL core_actor.cpp_FUN_00408b40    ; 004c9d12
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x9c]                ; 004c9d17
    LEA ESI,[ESP + 0x6c]                ; 004c9d1e
    ADD ESP,0x8                         ; 004c9d22
    MOVSD ES:EDI,ESI                    ; 004c9d25
    MOVSD ES:EDI,ESI                    ; 004c9d26
    MOVSD ES:EDI,ESI                    ; 004c9d27
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9d28
    MOV EAX,dword ptr [ESP + 0x94]      ; 004c9d2b
    MOV dword ptr [EDX + 0x20],EAX      ; 004c9d32
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c9d35
    MOV dword ptr [EDX + 0x24],EAX      ; 004c9d3c
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004c9d3f
    MOV dword ptr [EDX + 0x28],EAX      ; 004c9d46
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c9d49
    LEA EDI,[ESP + 0x4c]                ; 004c9d50
    LEA ESI,[ESP + 0x7c]                ; 004c9d54
    FLD float ptr [EAX + 0x24]          ; 004c9d58
    FLD float ptr [EAX + 0x28]          ; 004c9d5b
    FLD float ptr [EAX + 0x20]          ; 004c9d5e
    LEA EAX,[ESP + 0x4c]                ; 004c9d61
    FSUB float ptr [EDX + 0x20]         ; 004c9d65
    FXCH ST2                            ; 004c9d68
    FSUB float ptr [EDX + 0x24]         ; 004c9d6a
    FXCH                                ; 004c9d6d
    FSUB float ptr [EDX + 0x28]         ; 004c9d6f
    FXCH ST2                            ; 004c9d72
    FSTP float ptr [ESP + 0x7c]         ; 004c9d74
    FSTP float ptr [ESP + 0x80]         ; 004c9d78
    FSTP float ptr [ESP + 0x84]         ; 004c9d7f
    MOVSD ES:EDI,ESI                    ; 004c9d86
    MOVSD ES:EDI,ESI                    ; 004c9d87
    MOVSD ES:EDI,ESI                    ; 004c9d88
    PUSH EAX                            ; 004c9d89
    LEA ESI,[ESP + 0x2c]                ; 004c9d8a
    LEA EDI,[ESP + 0xa4]                ; 004c9d8e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004c9d95
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x2c]                ; 004c9d9a
    ADD ESP,0x4                         ; 004c9d9e
    MOVSD ES:EDI,ESI                    ; 004c9da1
    MOVSD ES:EDI,ESI                    ; 004c9da2
    MOVSD ES:EDI,ESI                    ; 004c9da3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9da4
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004c9da7
    PUSH EDX                            ; 004c9dae
    MOV dword ptr [EDX + 0x34],EAX      ; 004c9daf
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004c9db2
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 004c9db7
    ADD ESP,0x4                         ; 004c9dbc
    MOV ESP,EBP                         ; 004c9dbf
    POP EBP                             ; 004c9dc1
    POP EDI                             ; 004c9dc2
    POP ESI                             ; 004c9dc3
    POP EBX                             ; 004c9dc4
    RET                                 ; 004c9dc5

