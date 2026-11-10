; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_model_c_FUN_00500f30(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
;
; XREF[4]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0 at 00407a40
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df960 at 004dfcc4
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004df770 at 004df78d
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004dfd50 at 004dfdba
;
; Referenced Globals:
;   void* switchdataD_00500e1c = 00500f4f
;   TerminatedCString s_MRGLSize_Bad_type_d_005df0a3
;   TerminatedCString s_engine_model_c_005df0bb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00500f30
        ;   Label: engine_model.c_FUN_00500f30
    MOV EAX,dword ptr [ESP + 0x104]     ; 00500f36
    MOV EDX,dword ptr [EAX]             ; 00500f3d
    CMP EDX,0x42                        ; 00500f3f
    JA 0x00501055                       ; 00500f42
        ;   XREF to: 00501055 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EDX*0x4 + 0x500e1c]  ; 00500f48 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,0x4                         ; 00500f4f
        ;   Label: caseD_0
    ADD ESP,0x100                       ; 00500f54
    RET                                 ; 00500f5a
    MOV EAX,0x10                        ; 00500f5b
        ;   Label: caseD_1
    ADD ESP,0x100                       ; 00500f60
    RET                                 ; 00500f66
    MOV EDX,dword ptr [EAX + 0x8]       ; 00500f67
        ;   Label: caseD_2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00500f6a
    SUB EAX,EDX                         ; 00500f71
    SHL EAX,0x2                         ; 00500f73
    ADD EAX,0xc                         ; 00500f76
    ADD ESP,0x100                       ; 00500f79
    RET                                 ; 00500f7f
    MOV EAX,dword ptr [EAX + 0x8]       ; 00500f80
        ;   Label: caseD_4
    SHL EAX,0x3                         ; 00500f83
    ADD EAX,0xc                         ; 00500f86
    ADD ESP,0x100                       ; 00500f89
    RET                                 ; 00500f8f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00500f90
        ;   Label: caseD_5
    SHL EAX,0x2                         ; 00500f93
    ADD EAX,0x18                        ; 00500f96
    ADD ESP,0x100                       ; 00500f99
    RET                                 ; 00500f9f
    MOV EAX,0x20                        ; 00500fa0
        ;   Label: caseD_9
    ADD ESP,0x100                       ; 00500fa5
    RET                                 ; 00500fab
    MOV EAX,0x8                         ; 00500fac
        ;   Label: caseD_a
    ADD ESP,0x100                       ; 00500fb1
    RET                                 ; 00500fb7
    MOV EAX,0x1c                        ; 00500fb8
        ;   Label: caseD_c
    ADD ESP,0x100                       ; 00500fbd
    RET                                 ; 00500fc3
    MOV EAX,0x18                        ; 00500fc4
        ;   Label: caseD_d
    ADD ESP,0x100                       ; 00500fc9
    RET                                 ; 00500fcf
    MOV EAX,0x48                        ; 00500fd0
        ;   Label: caseD_40
    ADD ESP,0x100                       ; 00500fd5
    RET                                 ; 00500fdb
    MOV EDX,dword ptr [EAX + 0x4]       ; 00500fdc
        ;   Label: caseD_e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00500fdf
    SUB EAX,EDX                         ; 00500fe6
    SHL EAX,0x2                         ; 00500fe8
    ADD EAX,0x18                        ; 00500feb
    ADD ESP,0x100                       ; 00500fee
    RET                                 ; 00500ff4
    MOV EAX,0x14                        ; 00500ff5
        ;   Label: caseD_10
    ADD ESP,0x100                       ; 00500ffa
    RET                                 ; 00501000
    MOV EAX,dword ptr [EAX + 0x4]       ; 00501001
        ;   Label: caseD_16
    SHL EAX,0x2                         ; 00501004
    ADD EAX,0x8                         ; 00501007
    ADD ESP,0x100                       ; 0050100a
    RET                                 ; 00501010
    MOV EAX,0xc                         ; 00501011
        ;   Label: caseD_17
    ADD ESP,0x100                       ; 00501016
    RET                                 ; 0050101c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0050101d
        ;   Label: caseD_1d
    SHL EAX,0x5                         ; 00501020
    ADD EAX,0x1c                        ; 00501023
    ADD ESP,0x100                       ; 00501026
    RET                                 ; 0050102c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0050102d
        ;   Label: caseD_1f
    SHL EAX,0x2                         ; 00501030
    ADD EAX,0xc                         ; 00501033
    ADD ESP,0x100                       ; 00501036
    RET                                 ; 0050103c
    MOV EAX,0x158                       ; 0050103d
        ;   Label: caseD_20
    ADD ESP,0x100                       ; 00501042
    RET                                 ; 00501048
    MOV EAX,0x3d60                      ; 00501049
        ;   Label: caseD_26
    ADD ESP,0x100                       ; 0050104e
    RET                                 ; 00501054
    PUSH EDX                            ; 00501055
        ;   Label: caseD_13
    PUSH 0x5df0a3                       ; 00501056 | = "MRGLSize: Bad type : %d"
    LEA EAX,[ESP + 0x8]                 ; 0050105b
    PUSH EAX                            ; 0050105f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00501060
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5df0bb                    ; 00501065 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0050106a
    MOV EAX,ESP                         ; 0050106d
    MOV ECX,0x25c                       ; 0050106f
    PUSH EAX                            ; 00501074
    MOV dword ptr [0x01d046a0],EDX      ; 00501075 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050107b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00501081
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    MOV EAX,0x4                         ; 00501086
    ADD ESP,0x4                         ; 0050108b
    ADD ESP,0x100                       ; 0050108e
    RET                                 ; 00501094

