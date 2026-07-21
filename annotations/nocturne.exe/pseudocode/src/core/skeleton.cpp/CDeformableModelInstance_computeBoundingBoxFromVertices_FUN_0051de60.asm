; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 at 0051de10
;
; Referenced Globals:
;   undefined4 DAT_00591c87
;   undefined4 DAT_005a1eb0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051de60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60
    PUSH ESI                            ; 0051de61
    PUSH EDI                            ; 0051de62
    PUSH EBP                            ; 0051de63
    SUB ESP,0x3c                        ; 0051de64
    MOV EBP,dword ptr [ESP + 0x50]      ; 0051de67
    MOV EDX,0x7fffffff                  ; 0051de6b
    MOV ESI,0x80000001                  ; 0051de70
    PUSH EBP                            ; 0051de75
    MOV dword ptr [ESP + 0x24],EDX      ; 0051de76
    MOV dword ptr [ESP + 0x20],EDX      ; 0051de7a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0051de7e
    MOV dword ptr [ESP + 0xc],ESI       ; 0051de82
    MOV dword ptr [ESP + 0x8],ESI       ; 0051de86
    MOV dword ptr [ESP + 0x4],ESI       ; 0051de8a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051de8e
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051de93
    PUSH 0x0                            ; 0051de96
    PUSH 0x0                            ; 0051de98
    PUSH EBP                            ; 0051de9a
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0051de9b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0 ; 0051de9e
        ;   XREF to: 0051b8f0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0()
    ADD ESP,0xc                         ; 0051dea3
    PUSH 0x0                            ; 0051dea6
    PUSH EBP                            ; 0051dea8
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 0051dea9
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50()
    ADD ESP,0x8                         ; 0051deae
    TEST ESI,ESI                        ; 0051deb1
    JLE 0x0051df31                      ; 0051deb3
        ;   XREF to: 0051df31 (CONDITIONAL_JUMP)  ; LAB_0051df31
    LEA ECX,[ESI*0x4 + 0x0]             ; 0051deb9
    SUB ECX,ESI                         ; 0051dec0
    XOR EDX,EDX                         ; 0051dec2
    SHL ECX,0x2                         ; 0051dec4
    MOV ESI,dword ptr [EBP + 0x2234]    ; 0051dec7
        ;   Label: LAB_0051dec7
    LEA EDI,[ESP + 0xc]                 ; 0051decd
    ADD ESI,EDX                         ; 0051ded1
    MOVSD ES:EDI,ESI                    ; 0051ded3
    MOVSD ES:EDI,ESI                    ; 0051ded4
    MOVSD ES:EDI,ESI                    ; 0051ded5
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051ded6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051deda
    CMP EAX,EBX                         ; 0051dede
    JGE 0x0051dee6                      ; 0051dee0
        ;   XREF to: 0051dee6 (CONDITIONAL_JUMP)  ; LAB_0051dee6
    MOV dword ptr [ESP + 0x18],EAX      ; 0051dee2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051dee6
        ;   Label: LAB_0051dee6
    CMP EAX,dword ptr [ESP]             ; 0051deea
    JLE 0x0051def2                      ; 0051deed
        ;   XREF to: 0051def2 (CONDITIONAL_JUMP)  ; LAB_0051def2
    MOV dword ptr [ESP],EAX             ; 0051deef
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051def2
        ;   Label: LAB_0051def2
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0051def6
    JGE 0x0051df00                      ; 0051defa
        ;   XREF to: 0051df00 (CONDITIONAL_JUMP)  ; LAB_0051df00
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051defc
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051df00
        ;   Label: LAB_0051df00
    CMP EAX,dword ptr [ESP + 0x4]       ; 0051df04
    JLE 0x0051df0e                      ; 0051df08
        ;   XREF to: 0051df0e (CONDITIONAL_JUMP)  ; LAB_0051df0e
    MOV dword ptr [ESP + 0x4],EAX       ; 0051df0a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051df0e
        ;   Label: LAB_0051df0e
    CMP EAX,dword ptr [ESP + 0x20]      ; 0051df12
    JGE 0x0051df1c                      ; 0051df16
        ;   XREF to: 0051df1c (CONDITIONAL_JUMP)  ; LAB_0051df1c
    MOV dword ptr [ESP + 0x20],EAX      ; 0051df18
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051df1c
        ;   Label: LAB_0051df1c
    CMP EAX,dword ptr [ESP + 0x8]       ; 0051df20
    JLE 0x0051df2a                      ; 0051df24
        ;   XREF to: 0051df2a (CONDITIONAL_JUMP)  ; LAB_0051df2a
    MOV dword ptr [ESP + 0x8],EAX       ; 0051df26
    ADD EDX,0xc                         ; 0051df2a
        ;   Label: LAB_0051df2a
    CMP EDX,ECX                         ; 0051df2d
    JL 0x0051dec7                       ; 0051df2f
        ;   XREF to: 0051dec7 (CONDITIONAL_JUMP)  ; LAB_0051dec7
    LEA EDX,[EBP + 0x2238]              ; 0051df31
        ;   Label: LAB_0051df31
    LEA EAX,[ESP + 0x18]                ; 0051df37
    MOV EBX,EDX                         ; 0051df3b
    FILD dword ptr [EAX]                ; 0051df3d
    FMUL float ptr [0x005a1eb0]         ; 0051df3f | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051df45
    FILD dword ptr [EAX + 0x4]          ; 0051df47
    FMUL float ptr [0x005a1eb0]         ; 0051df4a | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051df50
    FILD dword ptr [EAX + 0x8]          ; 0051df53
    FMUL float ptr [0x005a1eb0]         ; 0051df56 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051df5c
    ADD EBP,0x2244                      ; 0051df5f
    MOV EAX,ESP                         ; 0051df65
    MOV EBX,EBP                         ; 0051df67
    FILD dword ptr [EAX]                ; 0051df69
    FMUL float ptr [0x005a1eb0]         ; 0051df6b | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051df71
    FILD dword ptr [EAX + 0x4]          ; 0051df73
    FMUL float ptr [0x005a1eb0]         ; 0051df76 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051df7c
    FILD dword ptr [EAX + 0x8]          ; 0051df7f
    FMUL float ptr [0x005a1eb0]         ; 0051df82 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051df88
    FLD float ptr [EBP]                 ; 0051df8b
    FSUB float ptr [EDX]                ; 0051df8e
    FST float ptr [ESP + 0x30]          ; 0051df90
    FLD float ptr [EBP + 0x4]           ; 0051df94
    FSUB float ptr [EDX + 0x4]          ; 0051df97
    FXCH                                ; 0051df9a
    FLD float ptr [0x00591c87]          ; 0051df9c | DAT_00591c87
    FXCH                                ; 0051dfa2
    FMUL ST1                            ; 0051dfa4
    FXCH ST2                            ; 0051dfa6
    FST float ptr [ESP + 0x34]          ; 0051dfa8
    FLD float ptr [EBP + 0x8]           ; 0051dfac
    FSUB float ptr [EDX + 0x8]          ; 0051dfaf
    FXCH                                ; 0051dfb2
    FMUL ST2                            ; 0051dfb4
    FXCH                                ; 0051dfb6
    FST float ptr [ESP + 0x38]          ; 0051dfb8
    FMULP ST2                           ; 0051dfbc
    FXCH ST2                            ; 0051dfbe
    FSTP float ptr [ESP + 0x24]         ; 0051dfc0
    FXCH                                ; 0051dfc4
    FSTP float ptr [ESP + 0x28]         ; 0051dfc6
    FSTP float ptr [ESP + 0x2c]         ; 0051dfca
    FLD float ptr [EDX]                 ; 0051dfce
    FSUB float ptr [ESP + 0x24]         ; 0051dfd0
    FLD float ptr [EDX + 0x4]           ; 0051dfd4
    FXCH                                ; 0051dfd7
    FSTP float ptr [EDX]                ; 0051dfd9
    FSUB float ptr [ESP + 0x28]         ; 0051dfdb
    FLD float ptr [EDX + 0x8]           ; 0051dfdf
    FXCH                                ; 0051dfe2
    FSTP float ptr [EDX + 0x4]          ; 0051dfe4
    FSUB float ptr [ESP + 0x2c]         ; 0051dfe7
    FSTP float ptr [EDX + 0x8]          ; 0051dfeb
    FLD float ptr [EBP]                 ; 0051dfee
    FADD float ptr [ESP + 0x24]         ; 0051dff1
    FLD float ptr [EBP + 0x4]           ; 0051dff5
    FXCH                                ; 0051dff8
    FSTP float ptr [EBP]                ; 0051dffa
    FADD float ptr [ESP + 0x28]         ; 0051dffd
    FLD float ptr [EBP + 0x8]           ; 0051e001
    FXCH                                ; 0051e004
    FSTP float ptr [EBP + 0x4]          ; 0051e006
    FADD float ptr [ESP + 0x2c]         ; 0051e009
    FSTP float ptr [EBP + 0x8]          ; 0051e00d
    ADD ESP,0x3c                        ; 0051e010
    POP EBP                             ; 0051e013
    POP EDI                             ; 0051e014
    POP ESI                             ; 0051e015
    POP EBX                             ; 0051e016
    RET                                 ; 0051e017

