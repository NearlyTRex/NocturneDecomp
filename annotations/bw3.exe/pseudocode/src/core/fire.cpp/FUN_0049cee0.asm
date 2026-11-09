; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049cee0(undefined4 *param_1,undefined4 param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,undefined4 param_6)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_FUN_004a3a30 at 004a3a70
;
; Referenced Globals:
;   undefined1* switchdataD_0049ced0 = 0049cf17
;   TerminatedCString s_dynamitestick_kfm_005c06c6
;   TerminatedCString s_bindingstone_kfm_005c06d8
;   TerminatedCString s_scarabstone_kfm_005c06e9
;   TerminatedCString s_rainvial_kfm_005c06f9
;   TerminatedCString s_core_fire_cpp_005c0706
;   TerminatedCString s_CToss_create_invalid_tos_005c0717
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041ae00
;   core_box.cpp_CBox_setupVelocities_FUN_0041d790
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cee0
        ;   Label: core_fire.cpp_FUN_0049cee0
    PUSH ESI                            ; 0049cee1
    PUSH EDI                            ; 0049cee2
    PUSH EBP                            ; 0049cee3
    SUB ESP,0x28                        ; 0049cee4
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049cee7
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049ceeb
    MOV dword ptr [EBX],EAX             ; 0049ceef
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049cef1
    MOV dword ptr [EBX + 0x3dc],EAX     ; 0049cef5
    MOV EAX,dword ptr [EBX]             ; 0049cefb
    MOV dword ptr [EBX + 0x3e4],0x0     ; 0049cefd
    CMP EAX,0x3                         ; 0049cf07
    JA 0x0049d056                       ; 0049cf0a
        ;   XREF to: 0049d056 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x49ced0]  ; 0049cf10 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5c06c6                       ; 0049cf17 | = "dynamitestick.kfm"
        ;   Label: caseD_0
    LEA EAX,[EBX + 0x4]                 ; 0049cf1c
    PUSH EAX                            ; 0049cf1f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0049cf20
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV EAX,0x3f800000                  ; 0049cf25
    ADD ESP,0x8                         ; 0049cf2a
    MOV dword ptr [ESP + 0x24],EAX      ; 0049cf2d
    FLD float ptr [EBX + 0x3dc]         ; 0049cf31
        ;   Label: LAB_0049cf31
    FLDZ                                ; 0049cf37
    FCOMPP                              ; 0049cf39
    FNSTSW AX                           ; 0049cf3b
    SAHF                                ; 0049cf3d
    JC 0x0049cf4a                       ; 0049cf3e
        ;   XREF to: 0049cf4a (CONDITIONAL_JUMP)  ; LAB_0049cf4a
    MOV dword ptr [EBX + 0x3dc],0x40a00000 ; 0049cf40
    LEA ESI,[EBX + 0x4]                 ; 0049cf4a
        ;   Label: LAB_0049cf4a
    FLD float ptr [EBX + 0x3dc]         ; 0049cf4d
    PUSH ESI                            ; 0049cf53
    FSTP float ptr [EBX + 0x3e0]        ; 0049cf54
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0049cf5a
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049cf5f
    PUSH ESI                            ; 0049cf62
    LEA EDI,[ESP + 0x4]                 ; 0049cf63
    ADD EBX,0x180                       ; 0049cf67
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0049cf6d
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[ESP + 0x1c]                ; 0049cf72
    ADD ESP,0x4                         ; 0049cf76
    MOV EDX,EAX                         ; 0049cf79
    PUSH dword ptr [ESP + 0x24]         ; 0049cf7b
    FLD float ptr [EDX + 0x344]         ; 0049cf7f
    FLD float ptr [EDX + 0x348]         ; 0049cf85
    ADD EAX,0x338                       ; 0049cf8b
    FLD float ptr [EDX + 0x34c]         ; 0049cf90
    MOV ECX,dword ptr [ESP + 0x48]      ; 0049cf96
    FXCH                                ; 0049cf9a
    FSUB float ptr [EAX + 0x4]          ; 0049cf9c
    FXCH                                ; 0049cf9f
    FSUB float ptr [EAX + 0x8]          ; 0049cfa1
    FXCH ST2                            ; 0049cfa4
    FSUB float ptr [EAX]                ; 0049cfa6
    LEA EAX,[ESP + 0x4]                 ; 0049cfa8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049cfac
    PUSH EAX                            ; 0049cfb0
    FSTP float ptr [ESP + 0x20]         ; 0049cfb1
    PUSH EDX                            ; 0049cfb5
    FSTP float ptr [ESP + 0x28]         ; 0049cfb6
    PUSH ECX                            ; 0049cfba
    FSTP float ptr [ESP + 0x30]         ; 0049cfbb
    PUSH EBX                            ; 0049cfbf
    MOVSD ES:EDI,ESI                    ; 0049cfc0
    MOVSD ES:EDI,ESI                    ; 0049cfc1
    MOVSD ES:EDI,ESI                    ; 0049cfc2
    CALL core_box.cpp_CBox_setupCorners_FUN_0041ae00 ; 0049cfc3
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041ae00(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0049cfc8
    LEA EAX,[ESP + 0xc]                 ; 0049cfcb
    PUSH EAX                            ; 0049cfcf
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049cfd0
    XOR ESI,ESI                         ; 0049cfd4
    PUSH EAX                            ; 0049cfd6
    MOV EBP,0x4116cbe4                  ; 0049cfd7
    MOV dword ptr [ESP + 0x1c],ESI      ; 0049cfdc
    PUSH EBX                            ; 0049cfe0
    MOV dword ptr [ESP + 0x1c],ESI      ; 0049cfe1
    MOV dword ptr [ESP + 0x18],EBP      ; 0049cfe5
    CALL core_box.cpp_CBox_setupVelocities_FUN_0041d790 ; 0049cfe9
        ;   XREF to: 0041d790 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_0041d790(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 0049cfee
    ADD ESP,0x28                        ; 0049cff1
    POP EBP                             ; 0049cff4
    POP EDI                             ; 0049cff5
    POP ESI                             ; 0049cff6
    POP EBX                             ; 0049cff7
    RET                                 ; 0049cff8
    PUSH 0x5c06d8                       ; 0049cff9 | = "bindingstone.kfm"
        ;   Label: caseD_1
    LEA EAX,[EBX + 0x4]                 ; 0049cffe
    PUSH EAX                            ; 0049d001
    MOV EBP,0x3f800000                  ; 0049d002
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0049d007
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0049d00c
    MOV dword ptr [ESP + 0x24],EBP      ; 0049d00f
    JMP 0x0049cf31                      ; 0049d013
        ;   XREF to: 0049cf31 (UNCONDITIONAL_JUMP)  ; LAB_0049cf31
    PUSH 0x5c06e9                       ; 0049d018 | = "scarabstone.kfm"
        ;   Label: caseD_2
    LEA EAX,[EBX + 0x4]                 ; 0049d01d
    PUSH EAX                            ; 0049d020
    MOV EDI,0x3f800000                  ; 0049d021
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0049d026
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0049d02b
    MOV dword ptr [ESP + 0x24],EDI      ; 0049d02e
    JMP 0x0049cf31                      ; 0049d032
        ;   XREF to: 0049cf31 (UNCONDITIONAL_JUMP)  ; LAB_0049cf31
    PUSH 0x5c06f9                       ; 0049d037 | = "rainvial.kfm"
        ;   Label: caseD_3
    LEA EAX,[EBX + 0x4]                 ; 0049d03c
    PUSH EAX                            ; 0049d03f
    MOV ESI,0x3f800000                  ; 0049d040
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0049d045
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0049d04a
    MOV dword ptr [ESP + 0x24],ESI      ; 0049d04d
    JMP 0x0049cf31                      ; 0049d051
        ;   XREF to: 0049cf31 (UNCONDITIONAL_JUMP)  ; LAB_0049cf31
    MOV EDX,0x5c0706                    ; 0049d056 | = "..\\core\\fire.cpp"
        ;   Label: default
    MOV ECX,0xe59                       ; 0049d05b
    PUSH 0x5c0717                       ; 0049d060 | = "CToss::create - invalid toss type."
    MOV dword ptr [0x01d71de0],EDX      ; 0049d065 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0049d06b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0049d071
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0049d076
    JMP 0x0049cf31                      ; 0049d079
        ;   XREF to: 0049cf31 (UNCONDITIONAL_JUMP)  ; LAB_0049cf31

