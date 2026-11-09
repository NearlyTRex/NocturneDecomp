; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004992b0(int *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_0049e5d0 at 0049e5fe
;
; Referenced Globals:
;   undefined4 s_dynamitestick_kfm_005d5547+3
;   TerminatedCString s_core_fire_cpp_005d555c
;   TerminatedCString s_CToss_create_invalid_tos_005d556d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_005b1c80
;   core_box.cpp_CBox_setupVelocities_FUN_005b4610
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004992b0
        ;   Label: core_fire.cpp_FUN_004992b0
    PUSH ESI                            ; 004992b1
    PUSH EDI                            ; 004992b2
    PUSH EBP                            ; 004992b3
    SUB ESP,0x28                        ; 004992b4
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004992b7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004992bb
    MOV dword ptr [EBX],EAX             ; 004992bf
    MOV EAX,dword ptr [ESP + 0x50]      ; 004992c1
    MOV dword ptr [EBX + 0x3dc],EAX     ; 004992c5
    MOV EAX,dword ptr [EBX]             ; 004992cb
    MOV dword ptr [EBX + 0x3e0],0x0     ; 004992cd
    TEST EAX,EAX                        ; 004992d7
    JZ 0x004993c2                       ; 004992d9
        ;   XREF to: 004993c2 (CONDITIONAL_JUMP)  ; LAB_004993c2
    MOV EDX,0x5d555c                    ; 004992df | = "..\\core\\fire.cpp"
    MOV ECX,0xd76                       ; 004992e4
    PUSH 0x5d556d                       ; 004992e9 | = "CToss::create - invalid toss type."
    MOV dword ptr [0x01d046a0],EDX      ; 004992ee | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004992f4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004992fa
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004992ff
    FLD float ptr [EBX + 0x3dc]         ; 00499302
        ;   Label: LAB_00499302
    FLDZ                                ; 00499308
    FCOMPP                              ; 0049930a
    FNSTSW AX                           ; 0049930c
    SAHF                                ; 0049930e
    JC 0x0049931b                       ; 0049930f
        ;   XREF to: 0049931b (CONDITIONAL_JUMP)  ; LAB_0049931b
    MOV dword ptr [EBX + 0x3dc],0x40a00000 ; 00499311
    LEA ESI,[EBX + 0x4]                 ; 0049931b
        ;   Label: LAB_0049931b
    PUSH ESI                            ; 0049931e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0049931f
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00499324
    PUSH ESI                            ; 00499327
    LEA EDI,[ESP + 0x10]                ; 00499328
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0049932c
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[ESP + 0x4]                 ; 00499331
    ADD ESP,0x4                         ; 00499335
    MOV EDX,EAX                         ; 00499338
    PUSH dword ptr [ESP + 0x24]         ; 0049933a
    FLD float ptr [EDX + 0x344]         ; 0049933e
    FLD float ptr [EDX + 0x348]         ; 00499344
    ADD EAX,0x338                       ; 0049934a
    FLD float ptr [EDX + 0x34c]         ; 0049934f
    FXCH ST2                            ; 00499355
    FSUB float ptr [EAX]                ; 00499357
    FXCH                                ; 00499359
    FSUB float ptr [EAX + 0x4]          ; 0049935b
    FXCH ST2                            ; 0049935e
    FSUB float ptr [EAX + 0x8]          ; 00499360
    FXCH                                ; 00499363
    FSTP float ptr [ESP + 0x4]          ; 00499365
    FXCH                                ; 00499369
    FSTP float ptr [ESP + 0x8]          ; 0049936b
    FSTP float ptr [ESP + 0xc]          ; 0049936f
    LEA EAX,[ESP + 0x10]                ; 00499373
    MOVSD ES:EDI,ESI                    ; 00499377
    MOVSD ES:EDI,ESI                    ; 00499378
    MOVSD ES:EDI,ESI                    ; 00499379
    PUSH EAX                            ; 0049937a
    MOV EDI,dword ptr [ESP + 0x50]      ; 0049937b
    PUSH EDI                            ; 0049937f
    MOV EBP,dword ptr [ESP + 0x50]      ; 00499380
    PUSH EBP                            ; 00499384
    ADD EBX,0x180                       ; 00499385
    PUSH EBX                            ; 0049938b
    CALL core_box.cpp_CBox_setupCorners_FUN_005b1c80 ; 0049938c
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_005b1c80(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00499391
    XOR EAX,EAX                         ; 00499394
    MOV dword ptr [ESP + 0x20],EAX      ; 00499396
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049939a
    LEA EAX,[ESP + 0x18]                ; 0049939e
    PUSH EAX                            ; 004993a2
    MOV ESI,dword ptr [ESP + 0x50]      ; 004993a3
    PUSH ESI                            ; 004993a7
    MOV ECX,0x4116cbe4                  ; 004993a8
    PUSH EBX                            ; 004993ad
    MOV dword ptr [ESP + 0x24],ECX      ; 004993ae
    CALL core_box.cpp_CBox_setupVelocities_FUN_005b4610 ; 004993b2
        ;   XREF to: 005b4610 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_005b4610(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 004993b7
    ADD ESP,0x28                        ; 004993ba
    POP EBP                             ; 004993bd
    POP EDI                             ; 004993be
    POP ESI                             ; 004993bf
    POP EBX                             ; 004993c0
    RET                                 ; 004993c1
    PUSH 0x5d554a                       ; 004993c2 | s_dynamitestick_kfm_005d5547+3
        ;   Label: LAB_004993c2
    LEA EAX,[EBX + 0x4]                 ; 004993c7
    PUSH EAX                            ; 004993ca
    MOV ESI,0x3f800000                  ; 004993cb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004993d0
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004993d5
    MOV dword ptr [ESP + 0x24],ESI      ; 004993d8
    JMP 0x00499302                      ; 004993dc
        ;   XREF to: 00499302 (UNCONDITIONAL_JUMP)  ; LAB_00499302

