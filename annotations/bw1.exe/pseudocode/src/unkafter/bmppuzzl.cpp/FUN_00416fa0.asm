; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bmppuzzl_cpp_FUN_00416fa0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005d3ffe
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1420932_0x15ae84
;   undefined4 g_CDemonSetInstance.field1420936_0x15ae88
;   undefined4 g_CDemonSetInstance.field1420940_0x15ae8c
;   undefined4 g_CDemonSetInstance.field1420944_0x15ae90
;   undefined4 g_CDemonSetInstance.field1420948_0x15ae94
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
;   engine_drender.cpp_FUN_004834b0
;   engine_matrix.c_FUN_004839b0
;   engine_matrix.c_FUN_00483c10
;   engine_matrix.c_pop_FUN_004839a0
;   engine_matrix.c_popViewport_FUN_00483c40
;   engine_special.cpp_fillDepthRegion_FUN_0057dd92
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416fa0
        ;   Label: unkafter_bmppuzzl.cpp_FUN_00416fa0
    PUSH ESI                            ; 00416fa1
    PUSH EDI                            ; 00416fa2
    PUSH EBP                            ; 00416fa3
    SUB ESP,0x60                        ; 00416fa4
    MOV EDX,dword ptr [0x0061b498]      ; 00416fa7 | DAT_0061b498
    MOV EBP,0xfc                        ; 00416fad
    CMP EDX,0x280                       ; 00416fb2
    JLE 0x00417008                      ; 00416fb8
        ;   XREF to: 00417008 (CONDITIONAL_JUMP)  ; LAB_00417008
    MOV EDX,dword ptr [ESP + 0x78]      ; 00416fba
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416fbe
    ADD EDX,EAX                         ; 00416fc5
    SHL EDX,0x7                         ; 00416fc7
    MOV ECX,dword ptr [0x0061b498]      ; 00416fca | DAT_0061b498
    MOV EAX,EDX                         ; 00416fd0
    SAR EDX,0x1f                        ; 00416fd2
    IDIV ECX                            ; 00416fd5
    MOV dword ptr [ESP + 0x78],EAX      ; 00416fd7
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00416fdb
    SHL EAX,0x5                         ; 00416fdf
    MOV EDX,EAX                         ; 00416fe2
    SHL EAX,0x4                         ; 00416fe4
    SUB EAX,EDX                         ; 00416fe7
    MOV EDX,EAX                         ; 00416fe9
    MOV EBX,dword ptr [0x0061b49c]      ; 00416feb | DAT_0061b49c
    SAR EDX,0x1f                        ; 00416ff1
    IDIV EBX                            ; 00416ff4
    MOV dword ptr [ESP + 0x7c],EAX      ; 00416ff6
    MOV EAX,0x27600                     ; 00416ffa
    MOV EDX,EAX                         ; 00416fff
    SAR EDX,0x1f                        ; 00417001
    IDIV ECX                            ; 00417004
    MOV EBP,EAX                         ; 00417006
    MOV EAX,[0x00622c18]                ; 00417008 | g_CDemonSetPtr
        ;   Label: LAB_00417008
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0041700d | g_CDemonSetInstance.field1420932_0x15ae84
    MOV dword ptr [EAX + 0x15ae88],0xffffb7d5 ; 00417017 | g_CDemonSetInstance.field1420936_0x15ae88
    MOV dword ptr [EAX + 0x15ae8c],0xffffb7d5 ; 00417021 | g_CDemonSetInstance.field1420940_0x15ae8c
    MOV dword ptr [EAX + 0x15ae90],0x482b ; 0041702b | g_CDemonSetInstance.field1420944_0x15ae90
    MOV dword ptr [EAX + 0x15ae94],0x7d00 ; 00417035 | g_CDemonSetInstance.field1420948_0x15ae94
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0041703f
    ADD EAX,EBP                         ; 00417043
    DEC EAX                             ; 00417045
    PUSH EAX                            ; 00417046
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00417047
    MOV EDI,dword ptr [ESP + 0x80]      ; 0041704b
    ADD EAX,EBP                         ; 00417052
    PUSH EDI                            ; 00417054
    DEC EAX                             ; 00417055
    PUSH EAX                            ; 00417056
    MOV EAX,dword ptr [ESP + 0x84]      ; 00417057
    PUSH EAX                            ; 0041705e
    CALL engine_special.cpp_fillDepthRegion_FUN_0057dd92 ; 0041705f
        ;   XREF to: 0057dd92 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_fillDepthRegion_FUN_0057dd92(int left, int right, int top, int bottom)
    ADD ESP,0x10                        ; 00417064
    MOV EBX,dword ptr [ESP + 0x74]      ; 00417067
    ADD EBX,0x8f8                       ; 0041706b
    PUSH EBX                            ; 00417071
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00417072
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00417077
    MOV EDI,ESP                         ; 0041707a
    MOV ECX,0x6                         ; 0041707c
    PUSH EBP                            ; 00417081
    MOV ESI,dword ptr [EAX + 0x350]     ; 00417082
    MOV EDX,dword ptr [ESP + 0x80]      ; 00417088
    PUSH EBP                            ; 0041708f
    MOVSD.REP ES:EDI,ESI                ; 00417090
    PUSH EDX                            ; 00417092
    MOV ECX,dword ptr [ESP + 0x84]      ; 00417093
    PUSH ECX                            ; 0041709a
    MOV ESI,dword ptr [0x00612560]      ; 0041709b | DAT_00612560
    PUSH ESI                            ; 004170a1 | DAT_01bc120c
    CALL engine_matrix.c_FUN_00483c10   ; 004170a2
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483c10()
    MOV EAX,0xc0000000                  ; 004170a7
    ADD ESP,0x14                        ; 004170ac
    MOV dword ptr [ESP + 0x20],EAX      ; 004170af
    LEA EAX,[ESP + 0x18]                ; 004170b3
    PUSH EAX                            ; 004170b7
    MOV EDX,dword ptr [0x00612560]      ; 004170b8 | DAT_00612560
    XOR EDI,EDI                         ; 004170be
    PUSH EDX                            ; 004170c0 | DAT_01bc120c
    MOV dword ptr [ESP + 0x20],EDI      ; 004170c1
    MOV dword ptr [ESP + 0x24],EDI      ; 004170c5
    CALL engine_drender.cpp_FUN_004834b0 ; 004170c9
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004170ce
    MOV ECX,dword ptr [0x00612560]      ; 004170d1 | DAT_00612560
    PUSH 0x42100000                     ; 004170d7
    PUSH ECX                            ; 004170dc | DAT_01bc120c
    CALL engine_matrix.c_FUN_004839b0   ; 004170dd
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004839b0()
    ADD ESP,0x8                         ; 004170e2
    PUSH 0x2c8af28                      ; 004170e5 | DAT_02c8af28
    MOV ESI,dword ptr [0x00612560]      ; 004170ea | DAT_00612560
    PUSH ESI                            ; 004170f0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 004170f1
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004170f6
    PUSH 0x2c8af28                      ; 004170f9 | DAT_02c8af28
    MOV EDI,dword ptr [0x00612560]      ; 004170fe | DAT_00612560
    PUSH EDI                            ; 00417104 | DAT_01bc120c
    LEA ESI,[ESP + 0x38]                ; 00417105
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00417109
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041710e
    LEA EDI,[ESP + 0x3c]                ; 00417111
    FLD float ptr [ESP]                 ; 00417115
    FLD float ptr [ESP + 0x4]           ; 00417118
    FLD float ptr [ESP + 0x8]           ; 0041711c
    FXCH ST2                            ; 00417120
    FADD float ptr [ESP + 0xc]          ; 00417122
    FXCH                                ; 00417126
    FADD float ptr [ESP + 0x10]         ; 00417128
    FXCH ST2                            ; 0041712c
    FADD float ptr [ESP + 0x14]         ; 0041712e
    FXCH                                ; 00417132
    FSTP float ptr [ESP + 0x30]         ; 00417134
    FXCH                                ; 00417138
    FSTP float ptr [ESP + 0x34]         ; 0041713a
    FSTP float ptr [ESP + 0x38]         ; 0041713e
    MOVSD ES:EDI,ESI                    ; 00417142
    MOVSD ES:EDI,ESI                    ; 00417143
    MOVSD ES:EDI,ESI                    ; 00417144
    FLD float ptr [0x005d3ffe]          ; 00417145 | DAT_005d3ffe
    FLD float ptr [ESP + 0x3c]          ; 0041714b
    FMUL ST1                            ; 0041714f
    FLD float ptr [ESP + 0x40]          ; 00417151
    FMUL ST2                            ; 00417155
    FLD float ptr [ESP + 0x44]          ; 00417157
    FMULP ST3                           ; 0041715b
    XOR EBP,EBP                         ; 0041715d
    MOV ECX,dword ptr [0x00612560]      ; 0041715f | DAT_00612560
    MOV dword ptr [0x01c51cac],EBP      ; 00417165 | DAT_01c51cac
    XOR EAX,EAX                         ; 0041716b
    XOR EDX,EDX                         ; 0041716d
    MOV dword ptr [ESP + 0x24],EAX      ; 0041716f
    MOV dword ptr [ESP + 0x28],EDX      ; 00417173
    MOV EAX,dword ptr [ESP + 0x80]      ; 00417177
    PUSH EDX                            ; 0041717e
    MOV dword ptr [ESP + 0x30],EAX      ; 0041717f
    LEA EAX,[ESP + 0x28]                ; 00417183
    LEA EDI,[ESP + 0x58]                ; 00417187
    LEA ESI,[ESP + 0x4c]                ; 0041718b
    PUSH EAX                            ; 0041718f
    FXCH                                ; 00417190
    FSTP float ptr [ESP + 0x50]         ; 00417192
    FSTP float ptr [ESP + 0x54]         ; 00417196
    FSTP float ptr [ESP + 0x58]         ; 0041719a
    PUSH ECX                            ; 0041719e | DAT_01bc120c
    MOVSD ES:EDI,ESI                    ; 0041719f
    MOVSD ES:EDI,ESI                    ; 004171a0
    MOVSD ES:EDI,ESI                    ; 004171a1
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004171a2
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004171a7
    LEA EAX,[ESP + 0x54]                ; 004171aa
    PUSH EAX                            ; 004171ae
    PUSH 0x2c8af28                      ; 004171af | DAT_02c8af28
    MOV ESI,dword ptr [0x00612560]      ; 004171b4 | DAT_00612560
    PUSH ESI                            ; 004171ba | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004171bb
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004171c0
    CMP dword ptr [ESP + 0x84],0x0      ; 004171c3
    JNZ 0x00417226                      ; 004171cb
        ;   XREF to: 00417226 (CONDITIONAL_JUMP)  ; LAB_00417226
    MOV EAX,dword ptr [ESP + 0x74]      ; 004171cd
    PUSH -0x1                           ; 004171d1
    ADD EAX,0xa74                       ; 004171d3
    PUSH 0x0                            ; 004171d8
    PUSH EAX                            ; 004171da
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004171db
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   Label: LAB_004171db
    ADD ESP,0xc                         ; 004171e0
    MOV EBP,dword ptr [0x00612560]      ; 004171e3 | DAT_00612560
    PUSH EBP                            ; 004171e9 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004171ea
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004171ef
    MOV EAX,[0x00612560]                ; 004171f2 | DAT_00612560
    PUSH EAX                            ; 004171f7 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004171f8
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004171fd
    MOV EDX,dword ptr [0x00612560]      ; 00417200 | DAT_00612560
    PUSH EDX                            ; 00417206 | DAT_01bc120c
    CALL engine_matrix.c_popViewport_FUN_00483c40 ; 00417207
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00483c40()
    MOV EAX,[0x00622c18]                ; 0041720c | g_CDemonSetPtr | g_CDemonSetInstance
    ADD ESP,0x4                         ; 00417211
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 00417214 | g_CDemonSetInstance.field1420932_0x15ae84
    ADD ESP,0x60                        ; 0041721e
    POP EBP                             ; 00417221
    POP EDI                             ; 00417222
    POP ESI                             ; 00417223
    POP EBX                             ; 00417224
    RET                                 ; 00417225
    PUSH -0x1                           ; 00417226
        ;   Label: LAB_00417226
    PUSH 0x0                            ; 00417228
    PUSH EBX                            ; 0041722a
    JMP 0x004171db                      ; 0041722b
        ;   XREF to: 004171db (UNCONDITIONAL_JUMP)  ; LAB_004171db

