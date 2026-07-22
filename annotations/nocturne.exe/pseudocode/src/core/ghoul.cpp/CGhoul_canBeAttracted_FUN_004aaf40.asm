; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_00584e1d = 0.5
;   undefined4 DAT_01c78c18
;   undefined4 DAT_01c78c1c
;   undefined4 DAT_01c78c20
;   undefined4 DAT_01c78c24
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aaf40
        ;   Label: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004aaf40
    PUSH EDI                            ; 004aaf41
    PUSH EBP                            ; 004aaf42
    SUB ESP,0x88                        ; 004aaf43
    MOV EDI,dword ptr [ESP + 0x9c]      ; 004aaf49
    MOV EBX,dword ptr [ESP + 0x98]      ; 004aaf50
    PUSH 0xb                            ; 004aaf57
    ADD EBX,0x150                       ; 004aaf59
    PUSH EBX                            ; 004aaf5f
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004aaf60
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x8c],EAX      ; 004aaf65
    FLD float ptr [ESP + 0x8c]          ; 004aaf6c
    FLDZ                                ; 004aaf73
    ADD ESP,0x8                         ; 004aaf75
    FCOMPP                              ; 004aaf78
    FNSTSW AX                           ; 004aaf7a
    SAHF                                ; 004aaf7c
    JC 0x004aaf8b                       ; 004aaf7d
        ;   XREF to: 004aaf8b (CONDITIONAL_JUMP)  ; LAB_004aaf8b
    XOR EAX,EAX                         ; 004aaf7f
    ADD ESP,0x88                        ; 004aaf81
    POP EBP                             ; 004aaf87
    POP EDI                             ; 004aaf88
    POP EBX                             ; 004aaf89
    RET                                 ; 004aaf8a
    PUSH ESI                            ; 004aaf8b
        ;   Label: LAB_004aaf8b
    MOV EDX,dword ptr [0x01c78c18]      ; 004aaf8c | DAT_01c78c18
    PUSH EDX                            ; 004aaf92
    LEA EAX,[ESP + 0x5c]                ; 004aaf93
    PUSH EAX                            ; 004aaf97
    PUSH EBX                            ; 004aaf98
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004aaf99
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004aaf9e
    MOV ECX,dword ptr [0x01c78c20]      ; 004aafa1 | DAT_01c78c20
    PUSH ECX                            ; 004aafa7
    MOV ESI,EAX                         ; 004aafa8
    LEA EAX,[ESP + 0x14]                ; 004aafaa
    PUSH EAX                            ; 004aafae
    PUSH EBX                            ; 004aafaf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004aafb0
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    FLD float ptr [EAX]                 ; 004aafb5
    FADD float ptr [ESI]                ; 004aafb7
    ADD ESP,0xc                         ; 004aafb9
    FST float ptr [ESP + 0x64]          ; 004aafbc
    FLD float ptr [EAX + 0x4]           ; 004aafc0
    FADD float ptr [ESI + 0x4]          ; 004aafc3
    FXCH                                ; 004aafc6
    FMUL float ptr [0x00584e1d]         ; 004aafc8 | FLOAT_00584e1d
    FXCH                                ; 004aafce
    FST float ptr [ESP + 0x68]          ; 004aafd0
    FLD float ptr [EAX + 0x8]           ; 004aafd4
    FADD float ptr [ESI + 0x8]          ; 004aafd7
    FXCH                                ; 004aafda
    FMUL float ptr [0x00584e1d]         ; 004aafdc | FLOAT_00584e1d
    FXCH                                ; 004aafe2
    FST float ptr [ESP + 0x6c]          ; 004aafe4
    FMUL float ptr [0x00584e1d]         ; 004aafe8 | FLOAT_00584e1d
    MOV ESI,dword ptr [0x01c78c1c]      ; 004aafee | DAT_01c78c1c
    LEA EAX,[ESP + 0x4]                 ; 004aaff4
    PUSH ESI                            ; 004aaff8
    FXCH ST2                            ; 004aaff9
    FSTP float ptr [ESP + 0x44]         ; 004aaffb
    PUSH EAX                            ; 004aafff
    FSTP float ptr [ESP + 0x4c]         ; 004ab000
    PUSH EBX                            ; 004ab004
    FSTP float ptr [ESP + 0x54]         ; 004ab005
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ab009
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004ab00e
    MOV EBP,dword ptr [0x01c78c24]      ; 004ab011 | DAT_01c78c24
    PUSH EBP                            ; 004ab017
    MOV ESI,EAX                         ; 004ab018
    LEA EAX,[ESP + 0x50]                ; 004ab01a
    PUSH EAX                            ; 004ab01e
    PUSH EBX                            ; 004ab01f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ab020
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    FLD float ptr [EAX]                 ; 004ab025
    FADD float ptr [ESI]                ; 004ab027
    ADD ESP,0xc                         ; 004ab029
    FST float ptr [ESP + 0x1c]          ; 004ab02c
    FLD float ptr [EAX + 0x4]           ; 004ab030
    FADD float ptr [ESI + 0x4]          ; 004ab033
    FXCH                                ; 004ab036
    FMUL float ptr [0x00584e1d]         ; 004ab038 | FLOAT_00584e1d
    FXCH                                ; 004ab03e
    FST float ptr [ESP + 0x20]          ; 004ab040
    FMUL float ptr [0x00584e1d]         ; 004ab044 | FLOAT_00584e1d
    FLD float ptr [EAX + 0x8]           ; 004ab04a
    FADD float ptr [ESI + 0x8]          ; 004ab04d
    FLD float ptr [ESP + 0x40]          ; 004ab050
    FXCH                                ; 004ab054
    FSTP float ptr [ESP + 0x24]         ; 004ab056
    FXCH ST2                            ; 004ab05a
    FSTP float ptr [ESP + 0x34]         ; 004ab05c
    FLD float ptr [ESP + 0x24]          ; 004ab060
    FXCH ST2                            ; 004ab064
    FADD float ptr [ESP + 0x34]         ; 004ab066
    FXCH ST2                            ; 004ab06a
    FMUL float ptr [0x00584e1d]         ; 004ab06c | FLOAT_00584e1d
    FXCH ST2                            ; 004ab072
    FST float ptr [ESP + 0x70]          ; 004ab074
    FMUL float ptr [0x00584e1d]         ; 004ab078 | FLOAT_00584e1d
    FLD float ptr [ESP + 0x44]          ; 004ab07e
    FXCH ST2                            ; 004ab082
    FSTP float ptr [ESP + 0x38]         ; 004ab084
    FXCH                                ; 004ab088
    FADD float ptr [ESP + 0x38]         ; 004ab08a
    LEA EAX,[ESP + 0x28]                ; 004ab08e
    FST float ptr [ESP + 0x74]          ; 004ab092
    FMUL float ptr [0x00584e1d]         ; 004ab096 | FLOAT_00584e1d
    PUSH EAX                            ; 004ab09c
    LEA EAX,[ESP + 0x80]                ; 004ab09d
    FLD float ptr [ESP + 0x4c]          ; 004ab0a4
    PUSH EAX                            ; 004ab0a8
    FXCH ST3                            ; 004ab0a9
    FSTP float ptr [ESP + 0x44]         ; 004ab0ab
    FXCH ST2                            ; 004ab0af
    FADD float ptr [ESP + 0x44]         ; 004ab0b1
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004ab0b5
    FST float ptr [ESP + 0x80]          ; 004ab0bc
    FMUL float ptr [0x00584e1d]         ; 004ab0c3 | FLOAT_00584e1d
    PUSH EAX                            ; 004ab0c9
    FXCH                                ; 004ab0ca
    FSTP float ptr [ESP + 0x34]         ; 004ab0cc
    FXCH                                ; 004ab0d0
    FSTP float ptr [ESP + 0x38]         ; 004ab0d2
    FSTP float ptr [ESP + 0x3c]         ; 004ab0d6
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004ab0da
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004ab0df
    CMP EDI,EAX                         ; 004ab0e2
    JZ 0x004ab0f6                       ; 004ab0e4
        ;   XREF to: 004ab0f6 (CONDITIONAL_JUMP)  ; LAB_004ab0f6
    MOV EDX,dword ptr [EAX]             ; 004ab0e6
    MOV dword ptr [EDI],EDX             ; 004ab0e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ab0ea
    MOV dword ptr [EDI + 0x4],EDX       ; 004ab0ed
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ab0f0
    MOV dword ptr [EDI + 0x8],EDX       ; 004ab0f3
    MOV EAX,0x1                         ; 004ab0f6
        ;   Label: LAB_004ab0f6
    POP ESI                             ; 004ab0fb
    ADD ESP,0x88                        ; 004ab0fc
    POP EBP                             ; 004ab102
    POP EDI                             ; 004ab103
    POP EBX                             ; 004ab104
    RET                                 ; 004ab105

