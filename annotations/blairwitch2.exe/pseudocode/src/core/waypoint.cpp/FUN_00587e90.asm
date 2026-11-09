; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_waypoint_cpp_FUN_00587e90(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ee107
;   undefined4 DAT_005fde10
;   undefined4 DAT_0060b280
;   undefined4 DAT_00618170
;   CGameHook* g_CGameHookPtr = 02668118
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   engine_3d.c_FUN_00407c40
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00587e90
        ;   Label: core_waypoint.cpp_FUN_00587e90
    SUB ESP,0x12c                       ; 00587e91
    MOV EBP,dword ptr [ESP + 0x134]     ; 00587e97
    MOV EDX,dword ptr [0x0060b280]      ; 00587e9e | DAT_0060b280
    PUSH EDX                            ; 00587ea4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00587ea5
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00587eaa
    TEST EAX,EAX                        ; 00587ead
    JNZ 0x00587eca                      ; 00587eaf
        ;   XREF to: 00587eca (CONDITIONAL_JUMP)  ; LAB_00587eca
    MOV EAX,[0x00618170]                ; 00587eb1 | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 00587eb6
    JNZ 0x00587eca                      ; 00587ebd
        ;   XREF to: 00587eca (CONDITIONAL_JUMP)  ; LAB_00587eca
    MOV EAX,[0x0061ea5c]                ; 00587ebf | g_CGameHookPtr
    CMP dword ptr [EAX + 0x8],0x0       ; 00587ec4
    JNZ 0x00587ed4                      ; 00587ec8
        ;   XREF to: 00587ed4 (CONDITIONAL_JUMP)  ; LAB_00587ed4
    XOR EAX,EAX                         ; 00587eca
        ;   Label: LAB_00587eca
    ADD ESP,0x12c                       ; 00587ecc
    POP EBP                             ; 00587ed2
    RET                                 ; 00587ed3
    PUSH EDI                            ; 00587ed4
        ;   Label: LAB_00587ed4
    PUSH ESI                            ; 00587ed5
    PUSH EBX                            ; 00587ed6
    PUSH EBP                            ; 00587ed7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00587ed8
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00587edd
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00587ee0
    PUSH EBP                            ; 00587ee6
    LEA ESI,[ESP + 0x28]                ; 00587ee7
    LEA EDI,[ESP + 0x40]                ; 00587eeb
    CALL dword ptr [EAX + 0x24]         ; 00587eef
    MOV ECX,0x6                         ; 00587ef2
    LEA ESI,[ESP + 0x28]                ; 00587ef7
    ADD ESP,0x4                         ; 00587efb
    MOVSD.REP ES:EDI,ESI                ; 00587efe
    LEA EAX,[ESP + 0x3c]                ; 00587f00
    FLD float ptr [ESP + 0x3c]          ; 00587f04
    FLD float ptr [ESP + 0x40]          ; 00587f08
    FLD float ptr [ESP + 0x44]          ; 00587f0c
    LEA EDI,[ESP + 0x114]               ; 00587f10
    LEA ESI,[ESP + 0x108]               ; 00587f17
    FXCH ST2                            ; 00587f1e
    FADD float ptr [EAX + 0xc]          ; 00587f20
    FXCH                                ; 00587f23
    FADD float ptr [EAX + 0x10]         ; 00587f25
    FXCH ST2                            ; 00587f28
    FADD float ptr [EAX + 0x14]         ; 00587f2a
    FXCH                                ; 00587f2d
    FSTP float ptr [ESP + 0x108]        ; 00587f2f
    FXCH                                ; 00587f36
    FSTP float ptr [ESP + 0x10c]        ; 00587f38
    FSTP float ptr [ESP + 0x110]        ; 00587f3f
    MOVSD ES:EDI,ESI                    ; 00587f46
    MOVSD ES:EDI,ESI                    ; 00587f47
    MOVSD ES:EDI,ESI                    ; 00587f48
    FLD float ptr [0x005ee107]          ; 00587f49 | DAT_005ee107
    FLD float ptr [ESP + 0x114]         ; 00587f4f
    FMUL ST1                            ; 00587f56
    FLD float ptr [ESP + 0x118]         ; 00587f58
    FMUL ST2                            ; 00587f5f
    FLD float ptr [ESP + 0x11c]         ; 00587f61
    FMULP ST3                           ; 00587f68
    LEA EBX,[ESP + 0x120]               ; 00587f6a
    LEA EAX,[ESP + 0xa8]                ; 00587f71
    LEA EDI,[ESP + 0x120]               ; 00587f78
    LEA ESI,[ESP + 0xc0]                ; 00587f7f
    FXCH                                ; 00587f86
    FSTP float ptr [ESP + 0xc0]         ; 00587f88
    FSTP float ptr [ESP + 0xc4]         ; 00587f8f
    FSTP float ptr [ESP + 0xc8]         ; 00587f96
    MOVSD ES:EDI,ESI                    ; 00587f9d
    MOVSD ES:EDI,ESI                    ; 00587f9e
    MOVSD ES:EDI,ESI                    ; 00587f9f
    CMP EAX,EBX                         ; 00587fa0
    JZ 0x00587fce                       ; 00587fa2
        ;   XREF to: 00587fce (CONDITIONAL_JUMP)  ; LAB_00587fce
    MOV EAX,dword ptr [ESP + 0x120]     ; 00587fa4
    MOV dword ptr [ESP + 0xa8],EAX      ; 00587fab
    MOV EAX,dword ptr [ESP + 0x124]     ; 00587fb2
    MOV dword ptr [ESP + 0xac],EAX      ; 00587fb9
    MOV EAX,dword ptr [ESP + 0x128]     ; 00587fc0
    MOV dword ptr [ESP + 0xb0],EAX      ; 00587fc7
    LEA EBX,[ESP + 0x6c]                ; 00587fce
        ;   Label: LAB_00587fce
    LEA EAX,[ESP + 0xa8]                ; 00587fd2
    MOV ESI,dword ptr [0x0060b280]      ; 00587fd9 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00587fdf
    FMUL float ptr [0x005fde10]         ; 00587fe1 | DAT_005fde10
    FISTP dword ptr [EBX]               ; 00587fe7
    FLD float ptr [EAX + 0x4]           ; 00587fe9
    FMUL float ptr [0x005fde10]         ; 00587fec | DAT_005fde10
    FISTP dword ptr [EBX + 0x4]         ; 00587ff2
    FLD float ptr [EAX + 0x8]           ; 00587ff5
    FMUL float ptr [0x005fde10]         ; 00587ff8 | DAT_005fde10
    FISTP dword ptr [EBX + 0x8]         ; 00587ffe
    LEA EAX,[ESP + 0x6c]                ; 00588001
    PUSH EAX                            ; 00588005
    MOV EAX,dword ptr [ESI]             ; 00588006
    PUSH EAX                            ; 00588008
    CALL engine_special.cpp_FUN_0055d723 ; 00588009
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 0058800e
    ADD ESP,0x8                         ; 00588010
    MOV EDI,dword ptr [EBP + 0x4d0]     ; 00588013
    MOV dword ptr [ESP + 0x134],ESI     ; 00588019
    TEST EDI,EDI                        ; 00588020
    JLE 0x00588074                      ; 00588022
        ;   XREF to: 00588074 (CONDITIONAL_JUMP)  ; LAB_00588074
    LEA EAX,[ESP + 0x54]                ; 00588024
    ADD EAX,0xc                         ; 00588028
    MOV dword ptr [ESP + 0x130],EBP     ; 0058802b
    MOV dword ptr [ESP + 0x12c],EAX     ; 00588032
    MOV EBX,dword ptr [ESP + 0x130]     ; 00588039
        ;   Label: LAB_00588039
    MOV EBX,dword ptr [EBX + 0x4d4]     ; 00588040
    CMP EBX,EBP                         ; 00588046
    JNC 0x0058808d                      ; 00588048
        ;   XREF to: 0058808d (CONDITIONAL_JUMP)  ; LAB_0058808d
    MOV EAX,dword ptr [ESP + 0x130]     ; 0058804a
        ;   Label: LAB_0058804a
    MOV EDX,dword ptr [ESP + 0x134]     ; 00588051
    MOV ECX,dword ptr [EBP + 0x4d0]     ; 00588058
    ADD EAX,0x8                         ; 0058805e
    INC EDX                             ; 00588061
    MOV dword ptr [ESP + 0x130],EAX     ; 00588062
    MOV dword ptr [ESP + 0x134],EDX     ; 00588069
    CMP EDX,ECX                         ; 00588070
    JL 0x00588039                       ; 00588072
        ;   XREF to: 00588039 (CONDITIONAL_JUMP)  ; LAB_00588039
    PUSH EBP                            ; 00588074
        ;   Label: LAB_00588074
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00588075
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 0058807a
    ADD ESP,0x4                         ; 0058807f
    POP EBX                             ; 00588082
    POP ESI                             ; 00588083
    POP EDI                             ; 00588084
    ADD ESP,0x12c                       ; 00588085
    POP EBP                             ; 0058808b
    RET                                 ; 0058808c
    MOV ESI,0x2                         ; 0058808d
        ;   Label: LAB_0058808d
    PUSH EBX                            ; 00588092
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00588093
    MOV dword ptr [0x01c35e60],ESI      ; 00588099 | DAT_01c35e60
    LEA ESI,[ESP + 0x10]                ; 0058809f
    LEA EDI,[ESP + 0x58]                ; 005880a3
    CALL dword ptr [EAX + 0x24]         ; 005880a7
    MOV ECX,0x6                         ; 005880aa
    LEA ESI,[ESP + 0x10]                ; 005880af
    ADD ESP,0x4                         ; 005880b3
    MOVSD.REP ES:EDI,ESI                ; 005880b6
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005880b8
    FLD float ptr [ESP + 0x54]          ; 005880bf
    FLD float ptr [ESP + 0x58]          ; 005880c3
    FLD float ptr [ESP + 0x5c]          ; 005880c7
    LEA EDI,[ESP + 0x84]                ; 005880cb
    LEA ESI,[ESP + 0xcc]                ; 005880d2
    FXCH ST2                            ; 005880d9
    FADD float ptr [EAX]                ; 005880db
    FXCH                                ; 005880dd
    FADD float ptr [EAX + 0x4]          ; 005880df
    FXCH ST2                            ; 005880e2
    FADD float ptr [EAX + 0x8]          ; 005880e4
    FXCH                                ; 005880e7
    FSTP float ptr [ESP + 0xcc]         ; 005880e9
    FXCH                                ; 005880f0
    FSTP float ptr [ESP + 0xd0]         ; 005880f2
    FSTP float ptr [ESP + 0xd4]         ; 005880f9
    MOVSD ES:EDI,ESI                    ; 00588100
    MOVSD ES:EDI,ESI                    ; 00588101
    MOVSD ES:EDI,ESI                    ; 00588102
    FLD float ptr [0x005ee107]          ; 00588103 | DAT_005ee107
    FLD float ptr [ESP + 0x84]          ; 00588109
    FMUL ST1                            ; 00588110
    FLD float ptr [ESP + 0x88]          ; 00588112
    FMUL ST2                            ; 00588119
    LEA EAX,[ESP + 0x90]                ; 0058811b
    FLD float ptr [ESP + 0x8c]          ; 00588122
    FMULP ST3                           ; 00588129
    PUSH EAX                            ; 0058812b
    LEA EDI,[ESP + 0x94]                ; 0058812c
    LEA ESI,[ESP + 0xe8]                ; 00588133
    FXCH                                ; 0058813a
    FSTP float ptr [ESP + 0xe8]         ; 0058813c
    FSTP float ptr [ESP + 0xec]         ; 00588143
    FSTP float ptr [ESP + 0xf0]         ; 0058814a
    MOVSD ES:EDI,ESI                    ; 00588151
    MOVSD ES:EDI,ESI                    ; 00588152
    MOVSD ES:EDI,ESI                    ; 00588153
    PUSH EBX                            ; 00588154
    LEA ESI,[ESP + 0xe0]                ; 00588155
    LEA EDI,[ESP + 0xa4]                ; 0058815c
    CALL core_actor.cpp_FUN_00408d70    ; 00588163
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xe0]                ; 00588168
    ADD ESP,0x8                         ; 0058816f
    LEA EAX,[ESP + 0x9c]                ; 00588172
    LEA EBX,[ESP + 0xf0]                ; 00588179
    PUSH EAX                            ; 00588180
    MOVSD ES:EDI,ESI                    ; 00588181
    MOVSD ES:EDI,ESI                    ; 00588182
    MOVSD ES:EDI,ESI                    ; 00588183
    PUSH EBP                            ; 00588184
    LEA ESI,[ESP + 0x104]               ; 00588185
    LEA EDI,[ESP + 0xf8]                ; 0058818c
    CALL core_actor.cpp_FUN_00408de0    ; 00588193
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x104]               ; 00588198
    ADD ESP,0x8                         ; 0058819f
    LEA EAX,[ESP + 0x78]                ; 005881a2
    MOVSD ES:EDI,ESI                    ; 005881a6
    MOVSD ES:EDI,ESI                    ; 005881a7
    MOVSD ES:EDI,ESI                    ; 005881a8
    CMP EAX,EBX                         ; 005881a9
    JZ 0x005881d1                       ; 005881ab
        ;   XREF to: 005881d1 (CONDITIONAL_JUMP)  ; LAB_005881d1
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005881ad
    MOV dword ptr [ESP + 0x78],EAX      ; 005881b4
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005881b8
    MOV dword ptr [ESP + 0x7c],EAX      ; 005881bf
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005881c3
    MOV dword ptr [ESP + 0x80],EAX      ; 005881ca
    LEA EBX,[ESP + 0xb4]                ; 005881d1
        ;   Label: LAB_005881d1
    LEA EAX,[ESP + 0x78]                ; 005881d8
    MOV ESI,dword ptr [0x0060b280]      ; 005881dc | DAT_0060b280
    FLD float ptr [EAX]                 ; 005881e2
    FMUL float ptr [0x005fde10]         ; 005881e4 | DAT_005fde10
    FISTP dword ptr [EBX]               ; 005881ea
    FLD float ptr [EAX + 0x4]           ; 005881ec
    FMUL float ptr [0x005fde10]         ; 005881ef | DAT_005fde10
    FISTP dword ptr [EBX + 0x4]         ; 005881f5
    FLD float ptr [EAX + 0x8]           ; 005881f8
    FMUL float ptr [0x005fde10]         ; 005881fb | DAT_005fde10
    FISTP dword ptr [EBX + 0x8]         ; 00588201
    LEA EAX,[ESP + 0xb4]                ; 00588204
    PUSH EAX                            ; 0058820b
    MOV EAX,dword ptr [ESI]             ; 0058820c
    ADD EAX,0x30                        ; 0058820e
    PUSH EAX                            ; 00588211
    CALL engine_special.cpp_FUN_0055d723 ; 00588212
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00588217
    PUSH 0x1                            ; 0058821a
    PUSH 0x0                            ; 0058821c
    CALL engine_3d.c_FUN_00407c40       ; 0058821e
        ;   XREF to: 00407c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_FUN_00407c40(int vertex_index1, int vertex_index2)
    ADD ESP,0x8                         ; 00588223
    JMP 0x0058804a                      ; 00588226
        ;   XREF to: 0058804a (UNCONDITIONAL_JUMP)  ; LAB_0058804a

