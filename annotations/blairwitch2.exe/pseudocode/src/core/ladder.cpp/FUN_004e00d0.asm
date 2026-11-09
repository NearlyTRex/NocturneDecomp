; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_FUN_004e00d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbd66
;   undefined4 DAT_005dbd6e
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e00d0
        ;   Label: core_ladder.cpp_FUN_004e00d0
    PUSH EDI                            ; 004e00d1
    SUB ESP,0x30                        ; 004e00d2
    MOV EBX,ESI                         ; 004e00d5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004e00d7
    LEA EAX,[ESI + 0x2b4]               ; 004e00db
    PUSH EAX                            ; 004e00e1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e00e2
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 004e00e7
    ADD ESP,0x4                         ; 004e00ed
    CMP EDX,0x1                         ; 004e00f0
    JGE 0x004e016f                      ; 004e00f3
        ;   XREF to: 004e016f (CONDITIONAL_JUMP)  ; LAB_004e016f
    FLD double ptr [0x005dbd66]         ; 004e00f5 | DAT_005dbd66
    FLD float ptr [ESI + 0x430]         ; 004e00fb
    FMUL ST1                            ; 004e0101
    FLD float ptr [ESI + 0x438]         ; 004e0103
    FMUL ST2                            ; 004e0109
    FLD float ptr [ESI + 0x430]         ; 004e010b
    FCHS                                ; 004e0111
    FMUL ST3                            ; 004e0113
    FLD float ptr [ESI + 0x438]         ; 004e0115
    FCHS                                ; 004e011b
    FMULP ST4                           ; 004e011d
    FLD float ptr [ESI + 0x434]         ; 004e011f
    MOV ECX,0xbdcccccd                  ; 004e0125
    LEA EDI,[ESP + 0x18]                ; 004e012a
    MOV ESI,ESP                         ; 004e012e
    MOV dword ptr [ESP + 0x4],ECX       ; 004e0130
    FADD double ptr [0x005dbd6e]        ; 004e0134 | DAT_005dbd6e
    FXCH ST3                            ; 004e013a
    FSTP float ptr [ESP + 0xc]          ; 004e013c
    FXCH ST2                            ; 004e0140
    FSTP float ptr [ESP + 0x10]         ; 004e0142
    FSTP float ptr [ESP + 0x14]         ; 004e0146
    MOV ECX,0x6                         ; 004e014a
    FXCH                                ; 004e014f
    FSTP float ptr [ESP + 0x8]          ; 004e0151
    FSTP float ptr [ESP]                ; 004e0155
    MOVSD.REP ES:EDI,ESI                ; 004e0158
        ;   Label: LAB_004e0158
    MOV ECX,0x6                         ; 004e015a
    LEA ESI,[ESP + 0x18]                ; 004e015f
    MOV EDI,EBX                         ; 004e0163
    MOVSD.REP ES:EDI,ESI                ; 004e0165
    MOV EAX,EBX                         ; 004e0167
    ADD ESP,0x30                        ; 004e0169
    POP EDI                             ; 004e016c
    POP EBX                             ; 004e016d
    RET                                 ; 004e016e
    ADD ESI,0x2b4                       ; 004e016f
        ;   Label: LAB_004e016f
    PUSH ESI                            ; 004e0175
    LEA EDI,[ESP + 0x1c]                ; 004e0176
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e017a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004e017f
    LEA ESI,[EAX + 0x338]               ; 004e0184
    ADD ESP,0x4                         ; 004e018a
    JMP 0x004e0158                      ; 004e018d
        ;   XREF to: 004e0158 (UNCONDITIONAL_JUMP)  ; LAB_004e0158

