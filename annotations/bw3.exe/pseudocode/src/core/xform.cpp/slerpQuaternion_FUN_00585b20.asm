; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_slerpQuaternion_FUN_00585b20(float *param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[14]:
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419d2c
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417bd3
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000 at 004330b9
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 0044316c
;   core_course.cpp_FUN_00444b70 at 00444d0a
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340 at 00511456
;   core_prye.cpp_FUN_0051e6d0 at 0051ea2d
;   core_prye.cpp_FUN_0051ee10 at 0051efed
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0 at 0054d9a2
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 at 0054cdba
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005d81a3
;
; Called Functions:
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585b20
        ;   Label: core_xform.cpp_slerpQuaternion_FUN_00585b20
    PUSH EDI                            ; 00585b21
    PUSH EBP                            ; 00585b22
    MOV EBP,ESP                         ; 00585b23
    SUB ESP,0x54                        ; 00585b25
    AND ESP,0xfffffff8                  ; 00585b28
    MOV EDX,dword ptr [EBP + 0x10]      ; 00585b2b
    MOV ECX,ESI                         ; 00585b2e
    MOV ESI,dword ptr [EBP + 0x14]      ; 00585b30
    FLDZ                                ; 00585b33
    FCOMP float ptr [EBP + 0x18]        ; 00585b35
    FNSTSW AX                           ; 00585b38
    SAHF                                ; 00585b3a
    JNC 0x00585c3f                      ; 00585b3b
        ;   XREF to: 00585c3f (CONDITIONAL_JUMP)  ; LAB_00585c3f
    CMP dword ptr [EBP + 0x18],0x3f800000 ; 00585b41
    JGE 0x00585c47                      ; 00585b48
        ;   XREF to: 00585c47 (CONDITIONAL_JUMP)  ; LAB_00585c47
    FLD float ptr [EDX + 0x4]           ; 00585b4e
    FMUL float ptr [ESI + 0x4]          ; 00585b51
    FLD float ptr [EDX + 0x8]           ; 00585b54
    FMUL float ptr [ESI + 0x8]          ; 00585b57
    FADDP                               ; 00585b5a
    MOV EAX,dword ptr [ESI]             ; 00585b5c
    FLD float ptr [EDX + 0xc]           ; 00585b5e
    FMUL float ptr [ESI + 0xc]          ; 00585b61
    MOV dword ptr [ESP + 0x38],EAX      ; 00585b64
    FADDP                               ; 00585b68
    MOV EAX,dword ptr [ESI + 0x4]       ; 00585b6a
    FLD float ptr [EDX]                 ; 00585b6d
    FMUL float ptr [ESI]                ; 00585b6f
    MOV dword ptr [ESP + 0x50],EAX      ; 00585b71
    MOV EAX,dword ptr [ESI + 0x8]       ; 00585b75
    FLDZ                                ; 00585b78
    MOV dword ptr [ESP + 0x3c],EAX      ; 00585b7a
    MOV EAX,dword ptr [ESI + 0xc]       ; 00585b7e
    FXCH                                ; 00585b81
    FADDP ST2,ST0                       ; 00585b83
    MOV dword ptr [ESP + 0x4c],EAX      ; 00585b85
    FXCH                                ; 00585b89
    FSTP float ptr [ESP]                ; 00585b8b
    FCOMP float ptr [ESP]               ; 00585b8e
    FNSTSW AX                           ; 00585b91
    SAHF                                ; 00585b93
    JA 0x00585c4d                       ; 00585b94
        ;   XREF to: 00585c4d (CONDITIONAL_JUMP)  ; LAB_00585c4d
    FLD1                                ; 00585b9a
        ;   Label: LAB_00585b9a
    FSUB float ptr [EBP + 0x18]         ; 00585b9c
    FLD float ptr [ESP]                 ; 00585b9f
    FXCH                                ; 00585ba2
    FSTP float ptr [ESP + 0x48]         ; 00585ba4
    FCOMP float ptr [0x005d81a3]        ; 00585ba8 | DAT_005d81a3
    FNSTSW AX                           ; 00585bae
    SAHF                                ; 00585bb0
    JBE 0x00585c88                      ; 00585bb1
        ;   XREF to: 00585c88 (CONDITIONAL_JUMP)  ; LAB_00585c88
    MOV EAX,dword ptr [ESP + 0x48]      ; 00585bb7
    MOV dword ptr [ESP + 0x40],EAX      ; 00585bbb
    MOV EAX,dword ptr [EBP + 0x18]      ; 00585bbf
    MOV dword ptr [ESP + 0x44],EAX      ; 00585bc2
    FLD float ptr [ESP + 0x40]          ; 00585bc6
        ;   Label: LAB_00585bc6
    FLD ST0                             ; 00585bca
    FMUL float ptr [EDX + 0x4]          ; 00585bcc
    FLD ST1                             ; 00585bcf
    FMUL float ptr [EDX + 0x8]          ; 00585bd1
    FLD ST2                             ; 00585bd4
    FMUL float ptr [EDX + 0xc]          ; 00585bd6
    FXCH ST3                            ; 00585bd9
    FMUL float ptr [EDX]                ; 00585bdb
    FLD float ptr [ESP + 0x44]          ; 00585bdd
    FMUL float ptr [ESP + 0x50]         ; 00585be1
    FLD float ptr [ESP + 0x44]          ; 00585be5
    FMUL float ptr [ESP + 0x3c]         ; 00585be9
    FLD float ptr [ESP + 0x44]          ; 00585bed
    FMUL float ptr [ESP + 0x4c]         ; 00585bf1
    FXCH ST2                            ; 00585bf5
    FADDP ST5,ST0                       ; 00585bf7
    FLD float ptr [ESP + 0x44]          ; 00585bf9
    FMUL float ptr [ESP + 0x38]         ; 00585bfd
    LEA EDI,[ESP + 0x4]                 ; 00585c01
    LEA ESI,[ESP + 0x14]                ; 00585c05
    FXCH                                ; 00585c09
    FADDP ST4,ST0                       ; 00585c0b
    FXCH                                ; 00585c0d
    FADDP ST5,ST0                       ; 00585c0f
    FADDP                               ; 00585c11
    FXCH                                ; 00585c13
    FSTP float ptr [ESP + 0x1c]         ; 00585c15
    FXCH ST2                            ; 00585c19
    FSTP float ptr [ESP + 0x20]         ; 00585c1b
    FXCH                                ; 00585c1f
    FSTP float ptr [ESP + 0x14]         ; 00585c21
    FSTP float ptr [ESP + 0x18]         ; 00585c25
    MOVSD ES:EDI,ESI                    ; 00585c29
        ;   Label: LAB_00585c29
    MOVSD ES:EDI,ESI                    ; 00585c2a
    MOVSD ES:EDI,ESI                    ; 00585c2b
    MOVSD ES:EDI,ESI                    ; 00585c2c
    LEA ESI,[ESP + 0x4]                 ; 00585c2d
    MOV EDI,ECX                         ; 00585c31
    MOVSD ES:EDI,ESI                    ; 00585c33
    MOVSD ES:EDI,ESI                    ; 00585c34
    MOVSD ES:EDI,ESI                    ; 00585c35
    MOVSD ES:EDI,ESI                    ; 00585c36
    MOV EAX,ECX                         ; 00585c37
    MOV ESP,EBP                         ; 00585c39
    POP EBP                             ; 00585c3b
    POP EDI                             ; 00585c3c
    POP EBX                             ; 00585c3d
    RET                                 ; 00585c3e
    LEA EDI,[ESP + 0x4]                 ; 00585c3f
        ;   Label: LAB_00585c3f
    MOV ESI,EDX                         ; 00585c43
    JMP 0x00585c29                      ; 00585c45
        ;   XREF to: 00585c29 (UNCONDITIONAL_JUMP)  ; LAB_00585c29
    LEA EDI,[ESP + 0x4]                 ; 00585c47
        ;   Label: LAB_00585c47
    JMP 0x00585c29                      ; 00585c4b
        ;   XREF to: 00585c29 (UNCONDITIONAL_JUMP)  ; LAB_00585c29
    MOV AH,byte ptr [ESP + 0x3b]        ; 00585c4d
        ;   Label: LAB_00585c4d
    MOV BL,byte ptr [ESP + 0x53]        ; 00585c51
    XOR AH,0x80                         ; 00585c55
    XOR BL,0x80                         ; 00585c58
    MOV byte ptr [ESP + 0x3b],AH        ; 00585c5b
    MOV AL,byte ptr [ESP + 0x4f]        ; 00585c5f
    MOV byte ptr [ESP + 0x53],BL        ; 00585c63
    XOR AL,0x80                         ; 00585c67
    MOV BH,byte ptr [ESP + 0x3f]        ; 00585c69
    MOV byte ptr [ESP + 0x4f],AL        ; 00585c6d
    MOV AH,byte ptr [ESP + 0x3]         ; 00585c71
    XOR BH,0x80                         ; 00585c75
    XOR AH,0x80                         ; 00585c78
    MOV byte ptr [ESP + 0x3f],BH        ; 00585c7b
    MOV byte ptr [ESP + 0x3],AH         ; 00585c7f
    JMP 0x00585b9a                      ; 00585c83
        ;   XREF to: 00585b9a (UNCONDITIONAL_JUMP)  ; LAB_00585b9a
    FLD float ptr [ESP]                 ; 00585c88
        ;   Label: LAB_00585c88
    FLD ST0                             ; 00585c8b
    FMUL ST1                            ; 00585c8d
    FLD1                                ; 00585c8f
    FSUBRP                              ; 00585c91
    FSQRT                               ; 00585c93
    FLD ST0                             ; 00585c95
    FLD ST2                             ; 00585c97
    FXCH                                ; 00585c99
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585c9b
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FSTP ST2                            ; 00585ca0
    FLD float ptr [ESP + 0x48]          ; 00585ca2
    FMUL ST2                            ; 00585ca6
    FSIN                                ; 00585ca8
    FLD float ptr [EBP + 0x18]          ; 00585caa
    FMULP ST3                           ; 00585cad
    FXCH ST2                            ; 00585caf
    FSIN                                ; 00585cb1
    FLD1                                ; 00585cb3
    FDIVRP ST2,ST0                      ; 00585cb5
    FXCH ST2                            ; 00585cb7
    FMUL ST1                            ; 00585cb9
    FXCH ST2                            ; 00585cbb
    FMULP                               ; 00585cbd
    FXCH                                ; 00585cbf
    FSTP float ptr [ESP + 0x40]         ; 00585cc1
    FSTP float ptr [ESP + 0x44]         ; 00585cc5
    JMP 0x00585bc6                      ; 00585cc9
        ;   XREF to: 00585bc6 (UNCONDITIONAL_JUMP)  ; LAB_00585bc6

