; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bb240(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 0052421d
;
; Referenced Globals:
;   undefined4 DAT_005d83eb
;   undefined4 DAT_005f7550
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CScript* g_CScriptPtr = 01e65cd0
;   undefined4 DAT_01cb80e0
;   undefined4 DAT_01cb810c
;   undefined4 DAT_01cb8110
;   undefined4 DAT_01cb8114
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0
;   core_game.cpp_calculateIrisFadeCenter_FUN_004bb2c0
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004bb099
        ;   Label: LAB_004bb099
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 004bb09a
    LEA ESI,[ESP + 0x1c]                ; 004bb0a0
    LEA EDI,[ESP + 0x4]                 ; 004bb0a4
    CALL dword ptr [EAX + 0x24]         ; 004bb0a8
    MOV ECX,0x6                         ; 004bb0ab
    LEA ESI,[ESP + 0x1c]                ; 004bb0b0
    ADD ESP,0x4                         ; 004bb0b4
    MOVSD.REP ES:EDI,ESI                ; 004bb0b7
    MOV EDX,ESP                         ; 004bb0b9
    FLD float ptr [ESP]                 ; 004bb0bb
    FLD float ptr [ESP + 0x4]           ; 004bb0be
    FLD float ptr [ESP + 0x8]           ; 004bb0c2
    LEA EDI,[ESP + 0x90]                ; 004bb0c6
    LEA ESI,[ESP + 0x6c]                ; 004bb0cd
    FXCH ST2                            ; 004bb0d1
    FADD float ptr [EDX + 0xc]          ; 004bb0d3
    FXCH                                ; 004bb0d6
    FADD float ptr [EDX + 0x10]         ; 004bb0d8
    FXCH ST2                            ; 004bb0db
    FADD float ptr [EDX + 0x14]         ; 004bb0dd
    FXCH                                ; 004bb0e0
    FSTP float ptr [ESP + 0x6c]         ; 004bb0e2
    FXCH                                ; 004bb0e6
    FSTP float ptr [ESP + 0x70]         ; 004bb0e8
    FSTP float ptr [ESP + 0x74]         ; 004bb0ec
    MOVSD ES:EDI,ESI                    ; 004bb0f0
    MOVSD ES:EDI,ESI                    ; 004bb0f1
    MOVSD ES:EDI,ESI                    ; 004bb0f2
    FLD float ptr [0x005d83eb]          ; 004bb0f3 | DAT_005d83eb
    FLD float ptr [ESP + 0x90]          ; 004bb0f9
    FMUL ST1                            ; 004bb100
    FLD float ptr [ESP + 0x94]          ; 004bb102
    FMUL ST2                            ; 004bb109
    LEA EAX,[ESP + 0x60]                ; 004bb10b
    FLD float ptr [ESP + 0x98]          ; 004bb10f
    FMULP ST3                           ; 004bb116
    PUSH EAX                            ; 004bb118
    MOV EAX,[0x0061b460]                ; 004bb119 | g_CScriptPtr
    LEA EDI,[ESP + 0x64]                ; 004bb11e
    LEA ESI,[ESP + 0x58]                ; 004bb122
    FXCH                                ; 004bb126
    FSTP float ptr [ESP + 0x58]         ; 004bb128
    FSTP float ptr [ESP + 0x5c]         ; 004bb12c
    FSTP float ptr [ESP + 0x60]         ; 004bb130
    MOVSD ES:EDI,ESI                    ; 004bb134
    MOVSD ES:EDI,ESI                    ; 004bb135
    MOVSD ES:EDI,ESI                    ; 004bb136
    MOV EBX,dword ptr [EAX + 0xc]       ; 004bb137
    PUSH EBX                            ; 004bb13a
    LEA ESI,[ESP + 0x80]                ; 004bb13b
    LEA EDI,[ESP + 0x44]                ; 004bb142
    CALL core_actor.cpp_FUN_00408d70    ; 004bb146
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x80]                ; 004bb14b
    LEA EBX,[ESP + 0x38]                ; 004bb152
    ADD ESP,0x8                         ; 004bb156
    LEA EAX,[ESP + 0x3c]                ; 004bb159
    MOVSD ES:EDI,ESI                    ; 004bb15d
    MOVSD ES:EDI,ESI                    ; 004bb15e
    MOVSD ES:EDI,ESI                    ; 004bb15f
    FLD float ptr [EAX]                 ; 004bb160
    FMUL float ptr [0x005f7550]         ; 004bb162 | DAT_005f7550
    FISTP dword ptr [EBX]               ; 004bb168
    FLD float ptr [EAX + 0x4]           ; 004bb16a
    FMUL float ptr [0x005f7550]         ; 004bb16d | DAT_005f7550
    FISTP dword ptr [EBX + 0x4]         ; 004bb173
    FLD float ptr [EAX + 0x8]           ; 004bb176
    FMUL float ptr [0x005f7550]         ; 004bb179 | DAT_005f7550
    FISTP dword ptr [EBX + 0x8]         ; 004bb17f
    LEA EAX,[ESP + 0x30]                ; 004bb182
    PUSH EAX                            ; 004bb186
    PUSH 0x1fc7838                      ; 004bb187
    LEA ESI,[ESP + 0x8c]                ; 004bb18c
    LEA EDI,[ESP + 0x50]                ; 004bb193
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0 ; 004bb197
        ;   XREF to: 0043cbe0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x8c]                ; 004bb19c
    ADD ESP,0x8                         ; 004bb1a3
    MOVSD ES:EDI,ESI                    ; 004bb1a6
    MOVSD ES:EDI,ESI                    ; 004bb1a7
    MOVSD ES:EDI,ESI                    ; 004bb1a8
    CMP dword ptr [ESP + 0x50],0x0      ; 004bb1a9
    JZ 0x004bb2db                       ; 004bb1ae
        ;   XREF to: 004bb2db (CONDITIONAL_JUMP)  ; LAB_004bb2db
    MOV EAX,dword ptr [ESP + 0x48]      ; 004bb1b4
    MOV EDX,EAX                         ; 004bb1b8
    SAR EDX,0x1f                        ; 004bb1ba
    SHL EDX,0x10                        ; 004bb1bd
    SBB EAX,EDX                         ; 004bb1c0
    SAR EAX,0x10                        ; 004bb1c2
    MOV [0x01cb8110],EAX                ; 004bb1c5 | DAT_01cb8110
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004bb1ca
    MOV EDX,EAX                         ; 004bb1ce
    SAR EDX,0x1f                        ; 004bb1d0
    SHL EDX,0x10                        ; 004bb1d3
    SBB EAX,EDX                         ; 004bb1d6
    SAR EAX,0x10                        ; 004bb1d8
    MOV EDI,dword ptr [0x006141bc]      ; 004bb1db | DAT_006141bc
    MOV [0x01cb8114],EAX                ; 004bb1e1 | DAT_01cb8114
    CMP EDI,0x1e0                       ; 004bb1e6
    JLE 0x004bb2db                      ; 004bb1ec
        ;   XREF to: 004bb2db (CONDITIONAL_JUMP)  ; LAB_004bb2db
    MOV EBP,dword ptr [0x006141b8]      ; 004bb1f2 | DAT_006141b8
    MOV EDX,dword ptr [0x01cb8110]      ; 004bb1f8 | DAT_01cb8110
    IMUL EDX,EBP                        ; 004bb1fe
    MOV EBX,0x280                       ; 004bb201
    MOV EAX,EDX                         ; 004bb206
    SAR EDX,0x1f                        ; 004bb208
    IDIV EBX                            ; 004bb20b
    MOV EDX,dword ptr [0x01cb8114]      ; 004bb20d | DAT_01cb8114
    IMUL EDX,EDI                        ; 004bb213
    MOV EBX,0x1e0                       ; 004bb216
    MOV [0x01cb8110],EAX                ; 004bb21b | DAT_01cb8110
    MOV EAX,EDX                         ; 004bb220
    SAR EDX,0x1f                        ; 004bb222
    IDIV EBX                            ; 004bb225
    MOV [0x01cb8114],EAX                ; 004bb227 | DAT_01cb8114
    ADD ESP,0x9c                        ; 004bb22c
    POP EBP                             ; 004bb232
    POP EDI                             ; 004bb233
    POP ESI                             ; 004bb234
    POP EBX                             ; 004bb235
    RET                                 ; 004bb236
    MOV dword ptr [0x01cb80e0],0x1      ; 004bb240 | DAT_01cb80e0
        ;   Label: core_game.cpp_FUN_004bb240
    MOV EDX,dword ptr [0x006141b8]      ; 004bb24a | DAT_006141b8
    MOV EAX,EDX                         ; 004bb250
    SAR EDX,0x1f                        ; 004bb252
    SUB EAX,EDX                         ; 004bb255
    SAR EAX,0x1                         ; 004bb257
    MOV EDX,dword ptr [0x006141bc]      ; 004bb259 | DAT_006141bc
    MOV [0x01cb8110],EAX                ; 004bb25f | DAT_01cb8110
    MOV EAX,EDX                         ; 004bb264
    SAR EDX,0x1f                        ; 004bb266
    SUB EAX,EDX                         ; 004bb269
    SAR EAX,0x1                         ; 004bb26b
    XOR ECX,ECX                         ; 004bb26d
    MOV dword ptr [0x01cb810c],ECX      ; 004bb26f | DAT_01cb810c
    MOV [0x01cb8114],EAX                ; 004bb275 | DAT_01cb8114
    JMP 0x004bb2c0                      ; 004bb27a
        ;   XREF to: 004bb2c0 (UNCONDITIONAL_CALL)

