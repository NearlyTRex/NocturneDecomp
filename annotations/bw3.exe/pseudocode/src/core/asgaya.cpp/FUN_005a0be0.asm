; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_asgaya_cpp_FUN_005a0be0(CCharacter *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CExorcism_005da590
;   TerminatedCString s_Bible_005da59a
;   undefined4 s_ible_005da59a+1
;   undefined4 s_ble_005da59a+2
;   undefined4 s_le_005da59a+3
;   TerminatedCString s_STAND_005da5a0
;   TerminatedCString s_s_confused_while_walking_005da5a6
;   undefined4 DAT_005da5d0
;   undefined4 DAT_005da5d4
;   TerminatedCString s_STAND_005da5d9
;   TerminatedCString s_APPEAR_005da5df
;   TerminatedCString s_DISAPPEAR_005da5e6
;   TerminatedCString s_indian_cast_005da5f0
;   undefined4 DAT_005da5fe
;   undefined4 DAT_005da606
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_0042cd70
;   core_charactr.cpp_FUN_00431660
;   core_charactr.cpp_FUN_004319d0
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433350
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00433fb0
;   core_charactr.cpp_FUN_00434850
;   core_fire.cpp_FUN_004a3af0
;   core_fire.cpp_FUN_004a3c50
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0be0
        ;   Label: core_asgaya.cpp_FUN_005a0be0
    PUSH ESI                            ; 005a0be1
    PUSH EDI                            ; 005a0be2
    PUSH EBP                            ; 005a0be3
    MOV EBP,ESP                         ; 005a0be4
    SUB ESP,0x194                       ; 005a0be6
    AND ESP,0xfffffff8                  ; 005a0bec
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0bef
    PUSH dword ptr [EBP + 0x18]         ; 005a0bf2
    PUSH EDX                            ; 005a0bf5
    CALL core_charactr.cpp_FUN_0042cd70 ; 005a0bf6
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042cd70()
    ADD ESP,0x8                         ; 005a0bfb
    TEST EAX,EAX                        ; 005a0bfe
    JZ 0x005a1082                       ; 005a0c00
        ;   XREF to: 005a1082 (CONDITIONAL_JUMP)  ; LAB_005a1082
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0c06
    CMP dword ptr [EAX + 0x33fb4],0x0   ; 005a0c09
    JZ 0x005a0c92                       ; 005a0c10
        ;   XREF to: 005a0c92 (CONDITIONAL_JUMP)  ; LAB_005a0c92
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0c16
        ;   Label: LAB_005a0c16
    CMP dword ptr [EAX + 0x33fc4],0x0   ; 005a0c19
    JZ 0x005a0d6b                       ; 005a0c20
        ;   XREF to: 005a0d6b (CONDITIONAL_JUMP)  ; LAB_005a0d6b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0c26
        ;   Label: LAB_005a0c26
    FLD float ptr [EBP + 0x18]          ; 005a0c29
    MOV EDI,0x1                         ; 005a0c2c
    FMUL float ptr [EAX + 0x33fac]      ; 005a0c31
    MOV dword ptr [ESP + 0x18c],EDI     ; 005a0c37
    MOV dword ptr [EAX + 0x24a4],0x0    ; 005a0c3e
    LEA ESI,[EAX + 0x158]               ; 005a0c48
    FLD float ptr [EAX + 0x24a4]        ; 005a0c4e
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a0c54
    FST float ptr [EAX + 0x24a0]        ; 005a0c57
    FSTP float ptr [EAX + 0x249c]       ; 005a0c5d
    FSTP float ptr [ESP + 0x1c]         ; 005a0c63
    FLD float ptr [ESP + 0x1c]          ; 005a0c67
        ;   Label: LAB_005a0c67
    FLDZ                                ; 005a0c6b
    FCOMPP                              ; 005a0c6d
    FNSTSW AX                           ; 005a0c6f
    SAHF                                ; 005a0c71
    JNC 0x005a0d7c                      ; 005a0c72
        ;   XREF to: 005a0d7c (CONDITIONAL_JUMP)  ; LAB_005a0d7c
    LEA EAX,[ESP + 0x1c]                ; 005a0c78
    PUSH EAX                            ; 005a0c7c
    PUSH ESI                            ; 005a0c7d
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 005a0c7e
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005a0c83
    PUSH EAX                            ; 005a0c86
    PUSH EDI                            ; 005a0c87
    CALL core_charactr.cpp_FUN_00433fb0 ; 005a0c88
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005a0c8d
    JMP 0x005a0c67                      ; 005a0c90
        ;   XREF to: 005a0c67 (UNCONDITIONAL_JUMP)  ; LAB_005a0c67
    PUSH 0x5da590                       ; 005a0c92 | = "CExorcism"
        ;   Label: LAB_005a0c92
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 005a0c97
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 005a0c9c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a0c9f
    MOV dword ptr [EBX + 0x33fd0],EAX   ; 005a0ca2
    PUSH EAX                            ; 005a0ca8
    MOV EBX,dword ptr [EAX + 0x154]     ; 005a0ca9
    CALL dword ptr [EBX]                ; 005a0caf
    ADD ESP,0x4                         ; 005a0cb1
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a0cb4
    MOV ESI,0x5da59a                    ; 005a0cb7 | = "Bible"
    MOV EDI,dword ptr [EDI + 0x33fd0]   ; 005a0cbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a0cc2
    PUSH EDI                            ; 005a0cc5
    MOV AL,byte ptr [ESI]               ; 005a0cc6 | = "Bible" | s_ble_005da59a+2
        ;   Label: LAB_005a0cc6
    MOV byte ptr [EDI],AL               ; 005a0cc8
    CMP AL,0x0                          ; 005a0cca
    JZ 0x005a0cde                       ; 005a0ccc
        ;   XREF to: 005a0cde (CONDITIONAL_JUMP)  ; LAB_005a0cde
    MOV AL,byte ptr [ESI + 0x1]         ; 005a0cce | s_ible_005da59a+1 | s_le_005da59a+3
    ADD ESI,0x2                         ; 005a0cd1
    MOV byte ptr [EDI + 0x1],AL         ; 005a0cd4
    ADD EDI,0x2                         ; 005a0cd7
    CMP AL,0x0                          ; 005a0cda
    JNZ 0x005a0cc6                      ; 005a0cdc
        ;   XREF to: 005a0cc6 (CONDITIONAL_JUMP)  ; LAB_005a0cc6
    POP EDI                             ; 005a0cde
        ;   Label: LAB_005a0cde
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0cdf
    MOV EBX,dword ptr [EBX + 0x33fd0]   ; 005a0ce2
    MOV EDX,dword ptr [EAX + 0x20]      ; 005a0ce8
    MOV dword ptr [EBX + 0x20],EDX      ; 005a0ceb
    MOV EDX,dword ptr [EAX + 0x24]      ; 005a0cee
    MOV dword ptr [EBX + 0x24],EDX      ; 005a0cf1
    MOV EDX,dword ptr [EAX + 0x28]      ; 005a0cf4
    MOV dword ptr [EBX + 0x28],EDX      ; 005a0cf7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005a0cfa
    MOV dword ptr [EBX + 0x2c],EAX      ; 005a0cfd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0d00
    MOV EBX,dword ptr [EAX + 0x33fd0]   ; 005a0d03
    TEST EBX,EBX                        ; 005a0d09
    JZ 0x005a0d27                       ; 005a0d0b
        ;   XREF to: 005a0d27 (CONDITIONAL_JUMP)  ; LAB_005a0d27
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a0d0d
    MOV EAX,dword ptr [EAX + 0x33fd0]   ; 005a0d17
    MOV dword ptr [EAX + 0xf8],0x0      ; 005a0d1d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0d27
        ;   Label: LAB_005a0d27
    PUSH 0x0                            ; 005a0d2a
    MOV ESI,dword ptr [EAX + 0x33fd0]   ; 005a0d2c
    PUSH 0x0                            ; 005a0d32
    PUSH ESI                            ; 005a0d34
    PUSH 0x0                            ; 005a0d35
    PUSH EAX                            ; 005a0d37
    MOV EDI,EAX                         ; 005a0d38
    CALL core_charactr.cpp_FUN_004319d0 ; 005a0d3a
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    MOV EAX,EDI                         ; 005a0d3f
    ADD ESP,0x14                        ; 005a0d41
    MOV EDX,dword ptr [EAX + 0x33fd0]   ; 005a0d44
    PUSH EDX                            ; 005a0d4a
    MOV ECX,dword ptr [0x00600530]      ; 005a0d4b | DAT_00600530
    PUSH ECX                            ; 005a0d51 | DAT_01d81080
    CALL core_mission.cpp_FUN_004f6930  ; 005a0d52
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    MOV EAX,EDI                         ; 005a0d57
    ADD ESP,0x8                         ; 005a0d59
    MOV dword ptr [EAX + 0x33fb4],0x1   ; 005a0d5c
    JMP 0x005a0c16                      ; 005a0d66
        ;   XREF to: 005a0c16 (UNCONDITIONAL_JUMP)  ; LAB_005a0c16
    PUSH dword ptr [EBP + 0x18]         ; 005a0d6b
        ;   Label: LAB_005a0d6b
    PUSH EAX                            ; 005a0d6e
    CALL core_charactr.cpp_FUN_00433c60 ; 005a0d6f
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 005a0d74
    JMP 0x005a0c26                      ; 005a0d77
        ;   XREF to: 005a0c26 (UNCONDITIONAL_JUMP)  ; LAB_005a0c26
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0d7c
        ;   Label: LAB_005a0d7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0d7f
    PUSH EDX                            ; 005a0d82
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a0d83
    CALL dword ptr [EAX + 0x10c]        ; 005a0d89
    ADD ESP,0x4                         ; 005a0d8f
    CMP EAX,0x1                         ; 005a0d92
    JLE 0x005a0e38                      ; 005a0d95
        ;   XREF to: 005a0e38 (CONDITIONAL_JUMP)  ; LAB_005a0e38
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0d9b
    CMP dword ptr [EAX + 0x70],0x1      ; 005a0d9e
    JNZ 0x005a0e38                      ; 005a0da2
        ;   XREF to: 005a0e38 (CONDITIONAL_JUMP)  ; LAB_005a0e38
    MOV EBX,dword ptr [EAX + 0x33fa8]   ; 005a0da8
    TEST EBX,EBX                        ; 005a0dae
    JNZ 0x005a0e38                      ; 005a0db0
        ;   XREF to: 005a0e38 (CONDITIONAL_JUMP)  ; LAB_005a0e38
    CMP dword ptr [EAX + 0xdc],0x0      ; 005a0db6
    JNZ 0x005a0e38                      ; 005a0dbd
        ;   XREF to: 005a0e38 (CONDITIONAL_JUMP)  ; LAB_005a0e38
    PUSH EBX                            ; 005a0dbf
    PUSH ESI                            ; 005a0dc0
    LEA ESI,[ESP + 0x10c]               ; 005a0dc1
    LEA EDI,[ESP + 0xd0]                ; 005a0dc8
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 005a0dcf
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 005a0dd4
    LEA EAX,[ESP + 0xc8]                ; 005a0dd7
    LEA ESI,[ESP + 0x104]               ; 005a0dde
    PUSH EAX                            ; 005a0de5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0de6
    MOVSD ES:EDI,ESI                    ; 005a0de9
    MOVSD ES:EDI,ESI                    ; 005a0dea
    MOVSD ES:EDI,ESI                    ; 005a0deb
    PUSH EAX                            ; 005a0dec
    LEA ESI,[ESP + 0x118]               ; 005a0ded
    CALL core_actor.cpp_FUN_00408b80    ; 005a0df4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005a0df9
    PUSH EBX                            ; 005a0dfc
    LEA EAX,[ESP + 0x78]                ; 005a0dfd
    LEA EDI,[ESP + 0x78]                ; 005a0e01
    PUSH EAX                            ; 005a0e05
    MOV EDX,dword ptr [0x005fed24]      ; 005a0e06 | g_CGorePtr
    LEA ESI,[ESP + 0x118]               ; 005a0e0c
    PUSH EDX                            ; 005a0e13
    MOVSD ES:EDI,ESI                    ; 005a0e14
    MOVSD ES:EDI,ESI                    ; 005a0e15
    MOVSD ES:EDI,ESI                    ; 005a0e16
    CALL core_gore.cpp_FUN_004cec40     ; 005a0e17
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 005a0e1c
    MOV ECX,0x1                         ; 005a0e1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0e24
    MOV dword ptr [ESP + 0x18c],ECX     ; 005a0e27
    MOV dword ptr [EAX + 0x33fa8],0x1   ; 005a0e2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0e38
        ;   Label: LAB_005a0e38
    FLD float ptr [EBP + 0x18]          ; 005a0e3b
    FMUL float ptr [EAX + 0x33fac]      ; 005a0e3e
    SUB ESP,0x4                         ; 005a0e44
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 005a0e47
    MOV dword ptr [EAX + 0x2524],EDX    ; 005a0e4d
    FSTP float ptr [ESP]                ; 005a0e53
    PUSH EAX                            ; 005a0e56
    MOV EBX,EAX                         ; 005a0e57
    CALL core_charactr.cpp_FUN_00434850 ; 005a0e59
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 005a0e5e
    MOV ESI,EBX                         ; 005a0e61
    PUSH dword ptr [EBP + 0x18]         ; 005a0e63
    PUSH ESI                            ; 005a0e66
    CALL core_charactr.cpp_FUN_00431660 ; 005a0e67
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a0e6c
    ADD ESI,0x158                       ; 005a0e6f
    TEST EAX,EAX                        ; 005a0e75
    JZ 0x005a10f7                       ; 005a0e77
        ;   XREF to: 005a10f7 (CONDITIONAL_JUMP)  ; LAB_005a10f7
    MOV EAX,EBX                         ; 005a0e7d
    MOV EAX,dword ptr [EAX + 0x273c]    ; 005a0e7f
    CMP EAX,0x2                         ; 005a0e85
    JNC 0x005a10e1                      ; 005a0e88
        ;   XREF to: 005a10e1 (CONDITIONAL_JUMP)  ; LAB_005a10e1
    CMP EAX,0x1                         ; 005a0e8e
    JNZ 0x005a10e8                      ; 005a0e91
        ;   XREF to: 005a10e8 (CONDITIONAL_JUMP)  ; LAB_005a10e8
    PUSH 0x1                            ; 005a0e97
        ;   Label: LAB_005a0e97
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0e99
    PUSH 0x5da5d4                       ; 005a0e9c | DAT_005da5d4
    ADD EAX,0x158                       ; 005a0ea1
        ;   Label: LAB_005a0ea1
    PUSH EAX                            ; 005a0ea6
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 005a0ea7
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 005a0eac
        ;   Label: LAB_005a0eac
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0eaf
    MOV dword ptr [EAX + 0x24a4],0x0    ; 005a0eb2
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 005a0ebc
    MOV dword ptr [EAX + 0x24a0],EDX    ; 005a0ec2
    MOV EDX,dword ptr [EAX + 0x24a0]    ; 005a0ec8
    MOV dword ptr [EAX + 0x249c],EDX    ; 005a0ece
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0ed4
        ;   Label: LAB_005a0ed4
    FLD float ptr [EAX + 0x33fc8]       ; 005a0ed7
    FLDZ                                ; 005a0edd
    FCOMPP                              ; 005a0edf
    FNSTSW AX                           ; 005a0ee1
    SAHF                                ; 005a0ee3
    JNC 0x005a0ef8                      ; 005a0ee4
        ;   XREF to: 005a0ef8 (CONDITIONAL_JUMP)  ; LAB_005a0ef8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0ee6
    FLD float ptr [EAX + 0x33fc8]       ; 005a0ee9
    FSUB float ptr [EBP + 0x18]         ; 005a0eef
    FSTP float ptr [EAX + 0x33fc8]      ; 005a0ef2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0ef8
        ;   Label: LAB_005a0ef8
    FLD float ptr [EAX + 0x33fc8]       ; 005a0efb
    FLDZ                                ; 005a0f01
    FCOMPP                              ; 005a0f03
    FNSTSW AX                           ; 005a0f05
    SAHF                                ; 005a0f07
    JBE 0x005a0f17                      ; 005a0f08
        ;   XREF to: 005a0f17 (CONDITIONAL_JUMP)  ; LAB_005a0f17
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0f0a
    MOV dword ptr [EAX + 0x33fc8],0x0   ; 005a0f0d
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a0f17
        ;   Label: LAB_005a0f17
    PUSH dword ptr [EBP + 0x18]         ; 005a0f1a
    PUSH EBX                            ; 005a0f1d
    CALL core_charactr.cpp_FUN_0042c1e0 ; 005a0f1e
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 005a0f23
    FLD float ptr [EBX + 0x2518]        ; 005a0f26
    FMUL float ptr [EBP + 0x18]         ; 005a0f2c
    FLD float ptr [EBX + 0x251c]        ; 005a0f2f
    FMUL float ptr [EBP + 0x18]         ; 005a0f35
    FLD float ptr [EBX + 0x2520]        ; 005a0f38
    FMUL float ptr [EBP + 0x18]         ; 005a0f3e
    LEA EDI,[ESP + 0xf8]                ; 005a0f41
    LEA ESI,[ESP + 0x8c]                ; 005a0f48
    FXCH ST2                            ; 005a0f4f
    FSTP float ptr [ESP + 0x8c]         ; 005a0f51
    FSTP float ptr [ESP + 0x90]         ; 005a0f58
    FSTP float ptr [ESP + 0x94]         ; 005a0f5f
    MOVSD ES:EDI,ESI                    ; 005a0f66
    MOVSD ES:EDI,ESI                    ; 005a0f67
    MOVSD ES:EDI,ESI                    ; 005a0f68
    FLD float ptr [ESP + 0xf8]          ; 005a0f69
    FLD float ptr [ESP + 0xfc]          ; 005a0f70
    FLD float ptr [ESP + 0x100]         ; 005a0f77
    LEA EDI,[ESP + 0x38]                ; 005a0f7e
    LEA ESI,[ESP + 0x20]                ; 005a0f82
    FXCH ST2                            ; 005a0f86
    FADD float ptr [EBX + 0x250c]       ; 005a0f88
    FXCH                                ; 005a0f8e
    FADD float ptr [EBX + 0x2510]       ; 005a0f90
    FXCH ST2                            ; 005a0f96
    FADD float ptr [EBX + 0x2514]       ; 005a0f98
    FXCH                                ; 005a0f9e
    FSTP float ptr [ESP + 0x20]         ; 005a0fa0
    FXCH                                ; 005a0fa4
    FSTP float ptr [ESP + 0x24]         ; 005a0fa6
    FSTP float ptr [ESP + 0x28]         ; 005a0faa
    MOVSD ES:EDI,ESI                    ; 005a0fae
    MOVSD ES:EDI,ESI                    ; 005a0faf
    MOVSD ES:EDI,ESI                    ; 005a0fb0
    FLD float ptr [ESP + 0x38]          ; 005a0fb1
    FLD float ptr [ESP + 0x3c]          ; 005a0fb5
    FLD float ptr [ESP + 0x40]          ; 005a0fb9
    LEA EDI,[ESP + 0x11c]               ; 005a0fbd
    LEA ESI,[ESP + 0x50]                ; 005a0fc4
    FXCH ST2                            ; 005a0fc8
    FADD float ptr [EBX + 0x249c]       ; 005a0fca
    FXCH                                ; 005a0fd0
    FADD float ptr [EBX + 0x24a0]       ; 005a0fd2
    FXCH ST2                            ; 005a0fd8
    FADD float ptr [EBX + 0x24a4]       ; 005a0fda
    FXCH                                ; 005a0fe0
    FSTP float ptr [ESP + 0x50]         ; 005a0fe2
    FXCH                                ; 005a0fe6
    FSTP float ptr [ESP + 0x54]         ; 005a0fe8
    FSTP float ptr [ESP + 0x58]         ; 005a0fec
    MOVSD ES:EDI,ESI                    ; 005a0ff0
    MOVSD ES:EDI,ESI                    ; 005a0ff1
    MOVSD ES:EDI,ESI                    ; 005a0ff2
    MOV dword ptr [EBX + 0x2514],0x0    ; 005a0ff3
    MOV dword ptr [EBX + 0x24a4],0x0    ; 005a0ffd
    MOV EAX,EBX                         ; 005a1007
    MOV EDX,dword ptr [EBX + 0x2514]    ; 005a1009
    MOV dword ptr [EBX + 0x2510],EDX    ; 005a100f
    MOV EDX,dword ptr [EBX + 0x2510]    ; 005a1015
    MOV dword ptr [EBX + 0x250c],EDX    ; 005a101b
    MOV EDX,dword ptr [EAX + 0x24a4]    ; 005a1021
    MOV dword ptr [EBX + 0x24a0],EDX    ; 005a1027
    FLD float ptr [EAX + 0x24a0]        ; 005a102d
    LEA EAX,[ESP + 0x11c]               ; 005a1033
    PUSH EAX                            ; 005a103a
    PUSH EBX                            ; 005a103b
    FSTP float ptr [EBX + 0x249c]       ; 005a103c
    CALL core_charactr.cpp_FUN_0042c230 ; 005a1042
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005a1047
    PUSH EBX                            ; 005a104a
    CALL core_charactr.cpp_FUN_0042cd30 ; 005a104b
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005a1050
    LEA EAX,[EBX + 0x158]               ; 005a1053
    PUSH EAX                            ; 005a1059
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005a105a
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a105f
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005a1062
    PUSH EAX                            ; 005a1069
    PUSH dword ptr [EBP + 0x18]         ; 005a106a
    PUSH EBX                            ; 005a106d
    CALL core_charactr.cpp_FUN_00432330 ; 005a106e
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    ADD ESP,0xc                         ; 005a1073
    PUSH dword ptr [EBP + 0x18]         ; 005a1076
    PUSH EBX                            ; 005a1079
    CALL core_charactr.cpp_FUN_00433350 ; 005a107a
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a107f
    MOV ESP,EBP                         ; 005a1082
        ;   Label: LAB_005a1082
    POP EBP                             ; 005a1084
    POP EDI                             ; 005a1085
    POP ESI                             ; 005a1086
    POP EBX                             ; 005a1087
    RET                                 ; 005a1088
    PUSH 0x1                            ; 005a1089
        ;   Label: LAB_005a1089
    PUSH 0x5da5a0                       ; 005a108b | = "STAND"
    PUSH ESI                            ; 005a1090
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 005a1091
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 005a1096
    MOV ECX,EBX                         ; 005a1099
    PUSH ECX                            ; 005a109b
    PUSH 0x5da5a6                       ; 005a109c | = "%s confused while walking to scriptDe..."
    MOV EBX,dword ptr [0x005f1690]      ; 005a10a1 | g_CConsolePtr
    PUSH EBX                            ; 005a10a7 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005a10a8
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x005a0eac                      ; 005a10ad
        ;   XREF to: 005a0eac (UNCONDITIONAL_JUMP)  ; LAB_005a0eac
    PUSH 0x0                            ; 005a10b2
        ;   Label: LAB_005a10b2
    PUSH 0x5da5d0                       ; 005a10b4 | DAT_005da5d0
    PUSH ESI                            ; 005a10b9
    CALL core_motion.cpp_FUN_004fc310   ; 005a10ba
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a10bf
    PUSH EAX                            ; 005a10c2
    CALL core_motion.cpp_FUN_004fba50   ; 005a10c3
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005a10c8
    TEST EAX,EAX                        ; 005a10cb
    JL 0x005a0e97                       ; 005a10cd
        ;   XREF to: 005a0e97 (CONDITIONAL_JUMP)  ; LAB_005a0e97
    PUSH 0x1                            ; 005a10d3
    PUSH EAX                            ; 005a10d5
    PUSH ESI                            ; 005a10d6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a10d7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x005a0eac                      ; 005a10dc
        ;   XREF to: 005a0eac (UNCONDITIONAL_JUMP)  ; LAB_005a0eac
    JBE 0x005a10b2                      ; 005a10e1
        ;   XREF to: 005a10b2 (CONDITIONAL_JUMP)  ; LAB_005a10b2
        ;   Label: LAB_005a10e1
    CMP EAX,0x3                         ; 005a10e3
    JZ 0x005a1089                       ; 005a10e6
        ;   XREF to: 005a1089 (CONDITIONAL_JUMP)  ; LAB_005a1089
    PUSH 0x1                            ; 005a10e8
        ;   Label: LAB_005a10e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a10ea
    PUSH 0x5da5d9                       ; 005a10ed | = "STAND"
    JMP 0x005a0ea1                      ; 005a10f2
        ;   XREF to: 005a0ea1 (UNCONDITIONAL_JUMP)  ; LAB_005a0ea1
    PUSH ESI                            ; 005a10f7
        ;   Label: LAB_005a10f7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005a10f8
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a10fd
    PUSH ESI                            ; 005a1100
    MOV EBX,dword ptr [EAX + 0x24]      ; 005a1101
    CALL core_motion.cpp_FUN_004fc930   ; 005a1104
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x194],EAX     ; 005a1109
    FLD float ptr [ESP + 0x194]         ; 005a1110
    ADD ESP,0x4                         ; 005a1117
    PUSH ESI                            ; 005a111a
    FSTP float ptr [ESP + 0x1c]         ; 005a111b
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320 ; 005a111f
        ;   XREF to: 004fc320 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a1124
    PUSH 0x5da5df                       ; 005a1127 | = "APPEAR"
    PUSH EAX                            ; 005a112c
    MOV ESI,EAX                         ; 005a112d
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005a112f
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a1134
    TEST EAX,EAX                        ; 005a1137
    JZ 0x005a16ac                       ; 005a1139
        ;   XREF to: 005a16ac (CONDITIONAL_JUMP)  ; LAB_005a16ac
    PUSH 0x5da5e6                       ; 005a113f | = "DISAPPEAR"
        ;   Label: LAB_005a113f
    PUSH ESI                            ; 005a1144
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005a1145
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a114a
    TEST EAX,EAX                        ; 005a114d
    JZ 0x005a16eb                       ; 005a114f
        ;   XREF to: 005a16eb (CONDITIONAL_JUMP)  ; LAB_005a16eb
    CMP EBX,0x95                        ; 005a1155
        ;   Label: LAB_005a1155
    JNZ 0x005a0ed4                      ; 005a115b
        ;   XREF to: 005a0ed4 (CONDITIONAL_JUMP)  ; LAB_005a0ed4
    FLD float ptr [ESP + 0x18]          ; 005a1161
    FLD1                                ; 005a1165
    FXCH                                ; 005a1167
    FSTP double ptr [ESP + 0x8]         ; 005a1169
    FCOMP double ptr [ESP + 0x8]        ; 005a116d
    FNSTSW AX                           ; 005a1171
    SAHF                                ; 005a1173
    JNC 0x005a12e3                      ; 005a1174
        ;   XREF to: 005a12e3 (CONDITIONAL_JUMP)  ; LAB_005a12e3
    FLD double ptr [ESP + 0x8]          ; 005a117a
    FCOMP double ptr [0x005da5fe]       ; 005a117e | DAT_005da5fe
    FNSTSW AX                           ; 005a1184
    SAHF                                ; 005a1186
    JNC 0x005a12e3                      ; 005a1187
        ;   XREF to: 005a12e3 (CONDITIONAL_JUMP)  ; LAB_005a12e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a118d
    MOV ECX,dword ptr [EAX + 0x33fbc]   ; 005a1190
    PUSH ECX                            ; 005a1196
    ADD EAX,0x158                       ; 005a1197
    PUSH EAX                            ; 005a119c
    LEA ESI,[ESP + 0xa0]                ; 005a119d
    LEA EDI,[ESP + 0xf4]                ; 005a11a4
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a11ab
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0xa0]                ; 005a11b0
    ADD ESP,0x8                         ; 005a11b7
    LEA EAX,[ESP + 0xec]                ; 005a11ba
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a11c1
    PUSH EAX                            ; 005a11c4
    MOVSD ES:EDI,ESI                    ; 005a11c5
    MOVSD ES:EDI,ESI                    ; 005a11c6
    MOVSD ES:EDI,ESI                    ; 005a11c7
    PUSH EBX                            ; 005a11c8
    LEA ESI,[ESP + 0xac]                ; 005a11c9
    LEA EDI,[ESP + 0x160]               ; 005a11d0
    CALL core_actor.cpp_FUN_00408b80    ; 005a11d7
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xac]                ; 005a11dc
    LEA EBX,[ESP + 0x160]               ; 005a11e3
    ADD ESP,0x8                         ; 005a11ea
    LEA EAX,[ESP + 0x2c]                ; 005a11ed
    MOVSD ES:EDI,ESI                    ; 005a11f1
    MOVSD ES:EDI,ESI                    ; 005a11f2
    MOVSD ES:EDI,ESI                    ; 005a11f3
    CMP EAX,EBX                         ; 005a11f4
    JZ 0x005a1219                       ; 005a11f6
        ;   XREF to: 005a1219 (CONDITIONAL_JUMP)  ; LAB_005a1219
    MOV EAX,dword ptr [ESP + 0x158]     ; 005a11f8
    MOV dword ptr [ESP + 0x2c],EAX      ; 005a11ff
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a1203
    MOV dword ptr [ESP + 0x30],EAX      ; 005a120a
    MOV EAX,dword ptr [ESP + 0x160]     ; 005a120e
    MOV dword ptr [ESP + 0x34],EAX      ; 005a1215
    PUSH 0x4                            ; 005a1219
        ;   Label: LAB_005a1219
    PUSH 0x0                            ; 005a121b
    PUSH 0x1                            ; 005a121d
    PUSH 0x2cfd900                      ; 005a121f | DAT_02cfd900
    LEA EAX,[ESP + 0x3c]                ; 005a1224
    PUSH EAX                            ; 005a1228
    MOV ESI,dword ptr [0x005fc5a0]      ; 005a1229 | DAT_005fc5a0
    PUSH ESI                            ; 005a122f
    CALL core_fire.cpp_FUN_004a3af0     ; 005a1230
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3af0()
    ADD ESP,0x18                        ; 005a1235
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a1238
    MOV EDI,dword ptr [EAX + 0x33fb8]   ; 005a123b
    PUSH EDI                            ; 005a1241
    ADD EAX,0x158                       ; 005a1242
    LEA EBX,[ESP + 0x30]                ; 005a1247
    PUSH EAX                            ; 005a124b
    LEA ESI,[ESP + 0xc4]                ; 005a124c
    LEA EDI,[ESP + 0x148]               ; 005a1253
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a125a
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 005a125f
    LEA EAX,[ESP + 0x140]               ; 005a1262
    LEA ESI,[ESP + 0xbc]                ; 005a1269
    PUSH EAX                            ; 005a1270
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a1271
    MOVSD ES:EDI,ESI                    ; 005a1274
    MOVSD ES:EDI,ESI                    ; 005a1275
    MOVSD ES:EDI,ESI                    ; 005a1276
    PUSH EAX                            ; 005a1277
    LEA ESI,[ESP + 0xb8]                ; 005a1278
    LEA EDI,[ESP + 0x88]                ; 005a127f
    CALL core_actor.cpp_FUN_00408b80    ; 005a1286
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xb8]                ; 005a128b
    ADD ESP,0x8                         ; 005a1292
    LEA EAX,[ESP + 0x80]                ; 005a1295
    MOVSD ES:EDI,ESI                    ; 005a129c
    MOVSD ES:EDI,ESI                    ; 005a129d
    MOVSD ES:EDI,ESI                    ; 005a129e
    CMP EBX,EAX                         ; 005a129f
    JZ 0x005a12c4                       ; 005a12a1
        ;   XREF to: 005a12c4 (CONDITIONAL_JUMP)  ; LAB_005a12c4
    MOV EAX,dword ptr [ESP + 0x80]      ; 005a12a3
    MOV dword ptr [ESP + 0x2c],EAX      ; 005a12aa
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a12ae
    MOV dword ptr [ESP + 0x30],EAX      ; 005a12b5
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a12b9
    MOV dword ptr [ESP + 0x34],EAX      ; 005a12c0
    PUSH 0x4                            ; 005a12c4
        ;   Label: LAB_005a12c4
    PUSH 0x0                            ; 005a12c6
    PUSH 0x1                            ; 005a12c8
    PUSH 0x2cfd900                      ; 005a12ca | DAT_02cfd900
    LEA EAX,[ESP + 0x3c]                ; 005a12cf
    PUSH EAX                            ; 005a12d3
    MOV EDX,dword ptr [0x005fc5a0]      ; 005a12d4 | DAT_005fc5a0
    PUSH EDX                            ; 005a12da
    CALL core_fire.cpp_FUN_004a3af0     ; 005a12db
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3af0()
    ADD ESP,0x18                        ; 005a12e0
    FLD float ptr [ESP + 0x18]          ; 005a12e3
        ;   Label: LAB_005a12e3
    FLD1                                ; 005a12e7
    FXCH                                ; 005a12e9
    FSTP double ptr [ESP + 0x10]        ; 005a12eb
    FCOMP double ptr [ESP + 0x10]       ; 005a12ef
    FNSTSW AX                           ; 005a12f3
    SAHF                                ; 005a12f5
    JNC 0x005a160b                      ; 005a12f6
        ;   XREF to: 005a160b (CONDITIONAL_JUMP)  ; LAB_005a160b
    FLD double ptr [ESP + 0x10]         ; 005a12fc
    FCOMP double ptr [0x005da606]       ; 005a1300 | DAT_005da606
    FNSTSW AX                           ; 005a1306
    SAHF                                ; 005a1308
    JNC 0x005a160b                      ; 005a1309
        ;   XREF to: 005a160b (CONDITIONAL_JUMP)  ; LAB_005a160b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a130f
    MOV ESI,0x1                         ; 005a1312
    ADD EBX,0x20                        ; 005a1317
    LEA EAX,[ESP + 0xd4]                ; 005a131a
        ;   Label: LAB_005a131a
    CMP EAX,EBX                         ; 005a1321
    JZ 0x005a1342                       ; 005a1323
        ;   XREF to: 005a1342 (CONDITIONAL_JUMP)  ; LAB_005a1342
    MOV EAX,dword ptr [EBX]             ; 005a1325
    MOV dword ptr [ESP + 0xd4],EAX      ; 005a1327
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a132e
    MOV dword ptr [ESP + 0xd8],EAX      ; 005a1331
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a1338
    MOV dword ptr [ESP + 0xdc],EAX      ; 005a133b
    LEA EAX,[ESP + 0x164]               ; 005a1342
        ;   Label: LAB_005a1342
    CMP EAX,EBX                         ; 005a1349
    JZ 0x005a136a                       ; 005a134b
        ;   XREF to: 005a136a (CONDITIONAL_JUMP)  ; LAB_005a136a
    MOV EAX,dword ptr [EBX]             ; 005a134d
    MOV dword ptr [ESP + 0x164],EAX     ; 005a134f
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a1356
    MOV dword ptr [ESP + 0x168],EAX     ; 005a1359
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a1360
    MOV dword ptr [ESP + 0x16c],EAX     ; 005a1363
    PUSH 0xffff                         ; 005a136a
        ;   Label: LAB_005a136a
    MOV dword ptr [ESP + 0x194],ESI     ; 005a136f
    PUSH 0x3e800000                     ; 005a1376
    FILD dword ptr [ESP + 0x198]        ; 005a137b
    PUSH 0x3                            ; 005a1382
    FLD double ptr [0x005da60e]         ; 005a1384 | DAT_005da60e
    FXCH                                ; 005a138a
    FMUL ST1                            ; 005a138c
    PUSH 0x3f400000                     ; 005a138e
    LEA EAX,[ESP + 0xe4]                ; 005a1393
    PUSH 0x3f400000                     ; 005a139a
    INC ESI                             ; 005a139f
    PUSH 0x0                            ; 005a13a0
    FLD ST0                             ; 005a13a2
    PUSH EAX                            ; 005a13a4
    FADD double ptr [0x005da62e]        ; 005a13a5 | DAT_005da62e
    FXCH                                ; 005a13ab
    FADDP ST2,ST0                       ; 005a13ad
    FLD float ptr [ESP + 0x184]         ; 005a13af
    LEA EAX,[ESP + 0x180]               ; 005a13b6
    FLD float ptr [ESP + 0xf4]          ; 005a13bd
    PUSH EAX                            ; 005a13c4
    FXCH ST2                            ; 005a13c5
    FADD ST0,ST1                        ; 005a13c7
    FXCH ST3                            ; 005a13c9
    FADD ST0,ST2                        ; 005a13cb
    MOV EAX,[0x005fc5a0]                ; 005a13cd | DAT_005fc5a0
    FXCH ST3                            ; 005a13d2
    FSTP ST1                            ; 005a13d4
    FXCH ST2                            ; 005a13d6
    FSTP ST1                            ; 005a13d8
    FXCH                                ; 005a13da
    FSTP float ptr [ESP + 0x188]        ; 005a13dc
    PUSH EAX                            ; 005a13e3
    FSTP float ptr [ESP + 0xfc]         ; 005a13e4
    CALL core_fire.cpp_FUN_004a3c50     ; 005a13eb
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 005a13f0
    CMP ESI,0xb                         ; 005a13f3
    JL 0x005a131a                       ; 005a13f6
        ;   XREF to: 005a131a (CONDITIONAL_JUMP)  ; LAB_005a131a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a13fc
    MOV EDX,dword ptr [EAX + 0x33fbc]   ; 005a13ff
    PUSH EDX                            ; 005a1405
    ADD EAX,0x158                       ; 005a1406
    LEA ESI,[ESP + 0x12c]               ; 005a140b
    PUSH EAX                            ; 005a1412
    LEA EDI,[ESP + 0x13c]               ; 005a1413
    LEA EBX,[ESP + 0xdc]                ; 005a141a
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a1421
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x130]               ; 005a1426
    ADD ESP,0x8                         ; 005a142d
    LEA EAX,[ESP + 0x134]               ; 005a1430
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a1437
    PUSH EAX                            ; 005a143a
    MOVSD ES:EDI,ESI                    ; 005a143b
    MOVSD ES:EDI,ESI                    ; 005a143c
    MOVSD ES:EDI,ESI                    ; 005a143d
    PUSH ECX                            ; 005a143e
    LEA ESI,[ESP + 0x4c]                ; 005a143f
    LEA EDI,[ESP + 0x154]               ; 005a1443
    CALL core_actor.cpp_FUN_00408b80    ; 005a144a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x4c]                ; 005a144f
    ADD ESP,0x8                         ; 005a1453
    LEA EAX,[ESP + 0x14c]               ; 005a1456
    MOVSD ES:EDI,ESI                    ; 005a145d
    MOVSD ES:EDI,ESI                    ; 005a145e
    MOVSD ES:EDI,ESI                    ; 005a145f
    CMP EBX,EAX                         ; 005a1460
    JZ 0x005a148e                       ; 005a1462
        ;   XREF to: 005a148e (CONDITIONAL_JUMP)  ; LAB_005a148e
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005a1464
    MOV dword ptr [ESP + 0xd4],EAX      ; 005a146b
    MOV EAX,dword ptr [ESP + 0x150]     ; 005a1472
    MOV dword ptr [ESP + 0xd8],EAX      ; 005a1479
    MOV EAX,dword ptr [ESP + 0x154]     ; 005a1480
    MOV dword ptr [ESP + 0xdc],EAX      ; 005a1487
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a148e
        ;   Label: LAB_005a148e
    LEA EAX,[ESP + 0x164]               ; 005a1491
    ADD EBX,0x20                        ; 005a1498
    CMP EAX,EBX                         ; 005a149b
    JZ 0x005a14bc                       ; 005a149d
        ;   XREF to: 005a14bc (CONDITIONAL_JUMP)  ; LAB_005a14bc
    MOV EAX,dword ptr [EBX]             ; 005a149f
    MOV dword ptr [ESP + 0x164],EAX     ; 005a14a1
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a14a8
    MOV dword ptr [ESP + 0x168],EAX     ; 005a14ab
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a14b2
    MOV dword ptr [ESP + 0x16c],EAX     ; 005a14b5
    PUSH 0xffff                         ; 005a14bc
        ;   Label: LAB_005a14bc
    PUSH 0x3e800000                     ; 005a14c1
    PUSH 0x3                            ; 005a14c6
    PUSH 0x3f400000                     ; 005a14c8
    PUSH 0x3f400000                     ; 005a14cd
    LEA EAX,[ESP + 0xe8]                ; 005a14d2
    PUSH 0x0                            ; 005a14d9
    FLD float ptr [ESP + 0x180]         ; 005a14db
    PUSH EAX                            ; 005a14e2
    LEA EAX,[ESP + 0x180]               ; 005a14e3
    MOV EBX,dword ptr [0x005fc5a0]      ; 005a14ea | DAT_005fc5a0
    PUSH EAX                            ; 005a14f0
    FADD float ptr [0x005da616]         ; 005a14f1 | DAT_005da616
    PUSH EBX                            ; 005a14f7
    FSTP float ptr [ESP + 0x18c]        ; 005a14f8
    CALL core_fire.cpp_FUN_004a3c50     ; 005a14ff
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 005a1504
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a1507
    MOV ESI,dword ptr [EAX + 0x33fb8]   ; 005a150a
    PUSH ESI                            ; 005a1510
    ADD EAX,0x158                       ; 005a1511
    PUSH EAX                            ; 005a1516
    LEA ESI,[ESP + 0x64]                ; 005a1517
    LEA EDI,[ESP + 0x70]                ; 005a151b
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a151f
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x64]                ; 005a1524
    ADD ESP,0x8                         ; 005a1528
    LEA EAX,[ESP + 0x68]                ; 005a152b
    MOVSD ES:EDI,ESI                    ; 005a152f
    MOVSD ES:EDI,ESI                    ; 005a1530
    MOVSD ES:EDI,ESI                    ; 005a1531
    PUSH EAX                            ; 005a1532
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a1533
    PUSH EDI                            ; 005a1536
    LEA ESI,[ESP + 0xe8]                ; 005a1537
    LEA EBX,[ESP + 0xdc]                ; 005a153e
    CALL core_actor.cpp_FUN_00408b80    ; 005a1545
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA EDI,[ESP + 0x178]               ; 005a154a
    LEA ESI,[ESP + 0xe8]                ; 005a1551
    ADD ESP,0x8                         ; 005a1558
    LEA EAX,[ESP + 0x170]               ; 005a155b
    MOVSD ES:EDI,ESI                    ; 005a1562
    MOVSD ES:EDI,ESI                    ; 005a1563
    MOVSD ES:EDI,ESI                    ; 005a1564
    CMP EBX,EAX                         ; 005a1565
    JZ 0x005a1593                       ; 005a1567
        ;   XREF to: 005a1593 (CONDITIONAL_JUMP)  ; LAB_005a1593
    MOV EAX,dword ptr [ESP + 0x170]     ; 005a1569
    MOV dword ptr [ESP + 0xd4],EAX      ; 005a1570
    MOV EAX,dword ptr [ESP + 0x174]     ; 005a1577
    MOV dword ptr [ESP + 0xd8],EAX      ; 005a157e
    MOV EAX,dword ptr [ESP + 0x178]     ; 005a1585
    MOV dword ptr [ESP + 0xdc],EAX      ; 005a158c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a1593
        ;   Label: LAB_005a1593
    LEA EAX,[ESP + 0x164]               ; 005a1596
    ADD EBX,0x20                        ; 005a159d
    CMP EAX,EBX                         ; 005a15a0
    JZ 0x005a15c1                       ; 005a15a2
        ;   XREF to: 005a15c1 (CONDITIONAL_JUMP)  ; LAB_005a15c1
    MOV EAX,dword ptr [EBX]             ; 005a15a4
    MOV dword ptr [ESP + 0x164],EAX     ; 005a15a6
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a15ad
    MOV dword ptr [ESP + 0x168],EAX     ; 005a15b0
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a15b7
    MOV dword ptr [ESP + 0x16c],EAX     ; 005a15ba
    PUSH 0xffff                         ; 005a15c1
        ;   Label: LAB_005a15c1
    PUSH 0x3e800000                     ; 005a15c6
    PUSH 0x3                            ; 005a15cb
    PUSH 0x3f400000                     ; 005a15cd
    PUSH 0x3f400000                     ; 005a15d2
    PUSH 0x0                            ; 005a15d7
    LEA EAX,[ESP + 0xec]                ; 005a15d9
    PUSH EAX                            ; 005a15e0
    LEA EAX,[ESP + 0x180]               ; 005a15e1
    FLD float ptr [ESP + 0x184]         ; 005a15e8
    PUSH EAX                            ; 005a15ef
    MOV EAX,[0x005fc5a0]                ; 005a15f0 | DAT_005fc5a0
    FADD float ptr [0x005da616]         ; 005a15f5 | DAT_005da616
    PUSH EAX                            ; 005a15fb
    FSTP float ptr [ESP + 0x18c]        ; 005a15fc
    CALL core_fire.cpp_FUN_004a3c50     ; 005a1603
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3c50()
    ADD ESP,0x24                        ; 005a1608
    FLD float ptr [ESP + 0x18]          ; 005a160b
        ;   Label: LAB_005a160b
    FST double ptr [ESP]                ; 005a160f
    FCOMP double ptr [0x005da61e]       ; 005a1612 | DAT_005da61e
    FNSTSW AX                           ; 005a1618
    SAHF                                ; 005a161a
    JBE 0x005a1661                      ; 005a161b
        ;   XREF to: 005a1661 (CONDITIONAL_JUMP)  ; LAB_005a1661
    FLD double ptr [ESP]                ; 005a161d
    FCOMP double ptr [0x005da5fe]       ; 005a1620 | DAT_005da5fe
    FNSTSW AX                           ; 005a1626
    SAHF                                ; 005a1628
    JNC 0x005a1661                      ; 005a1629
        ;   XREF to: 005a1661 (CONDITIONAL_JUMP)  ; LAB_005a1661
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a162b
    MOV EAX,dword ptr [EAX + 0x33fd0]   ; 005a162e
    PUSH EAX                            ; 005a1634
    MOV EBX,dword ptr [EAX + 0x154]     ; 005a1635
    CALL dword ptr [EBX + 0xe8]         ; 005a163b
    ADD ESP,0x4                         ; 005a1641
    TEST EAX,EAX                        ; 005a1644
    JZ 0x005a1661                       ; 005a1646
        ;   XREF to: 005a1661 (CONDITIONAL_JUMP)  ; LAB_005a1661
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a1648
    MOV EAX,dword ptr [EAX + 0x33fd0]   ; 005a164b
    PUSH EAX                            ; 005a1651
    MOV EBX,dword ptr [EAX + 0x154]     ; 005a1652
    CALL dword ptr [EBX + 0xe4]         ; 005a1658
    ADD ESP,0x4                         ; 005a165e
    FLD float ptr [ESP + 0x18]          ; 005a1661
        ;   Label: LAB_005a1661
    FCOMP double ptr [0x005da626]       ; 005a1665 | DAT_005da626
    FNSTSW AX                           ; 005a166b
    SAHF                                ; 005a166d
    JBE 0x005a0ed4                      ; 005a166e
        ;   XREF to: 005a0ed4 (CONDITIONAL_JUMP)  ; LAB_005a0ed4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a1674
    MOV EDX,dword ptr [EAX + 0x33fc0]   ; 005a1677
    CMP EDX,0x6                         ; 005a167d
    JGE 0x005a0ed4                      ; 005a1680
        ;   XREF to: 005a0ed4 (CONDITIONAL_JUMP)  ; LAB_005a0ed4
    PUSH 0x428c0000                     ; 005a1686
    PUSH 0x5da5f0                       ; 005a168b | = "indian_cast"
    ADD EAX,0x158                       ; 005a1690
    LEA ECX,[EDX + 0x1]                 ; 005a1695
    PUSH EAX                            ; 005a1698
    MOV dword ptr [EAX + 0x33e68],ECX   ; 005a1699
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0 ; 005a169f
        ;   XREF to: 004fc3f0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005a16a4
    JMP 0x005a0ed4                      ; 005a16a7
        ;   XREF to: 005a0ed4 (UNCONDITIONAL_JUMP)  ; LAB_005a0ed4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a16ac
        ;   Label: LAB_005a16ac
    CMP dword ptr [EAX + 0x33fc4],0x0   ; 005a16af
    JG 0x005a113f                       ; 005a16b6
        ;   XREF to: 005a113f (CONDITIONAL_JUMP)  ; LAB_005a113f
    MOV dword ptr [EAX + 0x33fc4],0x1   ; 005a16bc
    MOV dword ptr [EAX + 0xfc],0x1      ; 005a16c6
    MOV dword ptr [EAX + 0xf8],0x0      ; 005a16d0
    MOV EDX,dword ptr [EAX + 0x206c4]   ; 005a16da
    MOV dword ptr [EAX + 0x33fc8],EDX   ; 005a16e0
    JMP 0x005a113f                      ; 005a16e6
        ;   XREF to: 005a113f (UNCONDITIONAL_JUMP)  ; LAB_005a113f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a16eb
        ;   Label: LAB_005a16eb
    CMP dword ptr [EAX + 0x33fc4],0x0   ; 005a16ee
    JZ 0x005a1155                       ; 005a16f5
        ;   XREF to: 005a1155 (CONDITIONAL_JUMP)  ; LAB_005a1155
    MOV dword ptr [EAX + 0x33fc4],0x0   ; 005a16fb
    MOV dword ptr [EAX + 0xfc],0x1      ; 005a1705
    MOV dword ptr [EAX + 0xf8],0x0      ; 005a170f
    MOV EDX,dword ptr [EAX + 0x206c4]   ; 005a1719
    MOV dword ptr [EAX + 0x33fc8],EDX   ; 005a171f
    JMP 0x005a1155                      ; 005a1725
        ;   XREF to: 005a1155 (UNCONDITIONAL_JUMP)  ; LAB_005a1155

