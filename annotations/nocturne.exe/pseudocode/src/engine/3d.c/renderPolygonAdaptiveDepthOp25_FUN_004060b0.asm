; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005acab0
;   undefined4 DAT_005b7624
;   undefined4 DAT_006b0260
;   undefined4 DAT_006b0278
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c00c74
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_FUN_00404680
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;   engine_light.cpp_calculateLighting_FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004060b0
        ;   Label: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0
    PUSH ESI                            ; 004060b1
    PUSH EDI                            ; 004060b2
    PUSH EBP                            ; 004060b3
    MOV ESI,dword ptr [0x01c00c7c]      ; 004060b4 | DAT_01c00c7c
    MOV EBX,dword ptr [ESP + 0x14]      ; 004060ba
    LEA EDI,[EBX + 0x18]                ; 004060be
    LEA EAX,[EBX + 0x8]                 ; 004060c1
    PUSH EAX                            ; 004060c4
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004060c5
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 004060ca
    TEST EAX,EAX                        ; 004060cd
    JZ 0x00406148                       ; 004060cf
        ;   XREF to: 00406148 (CONDITIONAL_JUMP)  ; LAB_00406148
    CMP dword ptr [0x006b0278],0x0      ; 004060d1 | DAT_006b0278
    JZ 0x0040617f                       ; 004060d8
        ;   XREF to: 0040617f (CONDITIONAL_JUMP)  ; LAB_0040617f
    CMP dword ptr [0x01c03948],0x0      ; 004060de | DAT_01c03948
    JNZ 0x00406165                      ; 004060e5
        ;   XREF to: 00406165 (CONDITIONAL_JUMP)  ; LAB_00406165
    CMP dword ptr [0x005b7624],0x20     ; 004060eb | DAT_005b7624
    JNZ 0x0040615e                      ; 004060f2
        ;   XREF to: 0040615e (CONDITIONAL_JUMP)  ; LAB_0040615e
    MOV ESI,0x5300ec                    ; 004060f4
    XOR EDX,EDX                         ; 004060f9
        ;   Label: LAB_004060f9
    MOV dword ptr [0x01c00c7c],ESI      ; 004060fb | DAT_01c00c7c
    MOV dword ptr [0x01c039a4],EDX      ; 00406101 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDX      ; 00406107 | DAT_01c039a0
        ;   Label: LAB_00406107
    MOV EBP,dword ptr [EBX + 0x10]      ; 0040610d
    PUSH EBP                            ; 00406110
    MOV EAX,dword ptr [EBX + 0xc]       ; 00406111
    PUSH EAX                            ; 00406114
    MOV EDX,dword ptr [EBX + 0x8]       ; 00406115
    PUSH EDX                            ; 00406118
    CALL engine_light.cpp_calculateLighting_FUN_004c6cc0 ; 00406119
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; undefined engine_light.cpp_calculateLighting_FUN_004c6cc0()
    ADD ESP,0xc                         ; 0040611e
    PUSH EAX                            ; 00406121
    MOV ECX,dword ptr [0x006b0260]      ; 00406122 | DAT_006b0260
    PUSH ECX                            ; 00406128
    MOV [0x01c00c74],EAX                ; 00406129 | DAT_01c00c74
    CALL engine_3d.c_FUN_00404680       ; 0040612e
        ;   XREF to: 00404680 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00404680()
    ADD ESP,0x8                         ; 00406133
    PUSH EDI                            ; 00406136
    MOV EDI,dword ptr [EBX + 0x4]       ; 00406137
    PUSH EDI                            ; 0040613a
    MOV [0x01c00c70],EAX                ; 0040613b | DAT_01c00c70
    CALL engine_clipper.c_FUN_00432cd0  ; 00406140
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00406145
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406148
        ;   Label: LAB_00406148
    ADD EBX,0x18                        ; 0040614b
    SHL EAX,0x2                         ; 0040614e
    MOV ESI,dword ptr [0x01c00c7c]      ; 00406151 | DAT_01c00c7c
    ADD EAX,EBX                         ; 00406157
    POP EBP                             ; 00406159
    POP EDI                             ; 0040615a
    POP ESI                             ; 0040615b
    POP EBX                             ; 0040615c
    RET                                 ; 0040615d
    MOV ESI,0x530322                    ; 0040615e
        ;   Label: LAB_0040615e
    JMP 0x004060f9                      ; 00406163
        ;   XREF to: 004060f9 (UNCONDITIONAL_JUMP)  ; LAB_004060f9
    CMP dword ptr [0x005b7624],0x20     ; 00406165 | DAT_005b7624
        ;   Label: LAB_00406165
    JNZ 0x00406175                      ; 0040616c
        ;   XREF to: 00406175 (CONDITIONAL_JUMP)  ; LAB_00406175
    MOV ESI,0x52f031                    ; 0040616e
    JMP 0x004060f9                      ; 00406173
        ;   XREF to: 004060f9 (UNCONDITIONAL_JUMP)  ; LAB_004060f9
    MOV ESI,0x52f823                    ; 00406175
        ;   Label: LAB_00406175
    JMP 0x004060f9                      ; 0040617a
        ;   XREF to: 004060f9 (UNCONDITIONAL_JUMP)  ; LAB_004060f9
    CMP dword ptr [0x005acab0],0x0      ; 0040617f | DAT_005acab0
        ;   Label: LAB_0040617f
    JZ 0x004061d8                       ; 00406186
        ;   XREF to: 004061d8 (CONDITIONAL_JUMP)  ; LAB_004061d8
    CMP dword ptr [0x01c03948],0x0      ; 00406188 | DAT_01c03948
    JNZ 0x004061c1                      ; 0040618f
        ;   XREF to: 004061c1 (CONDITIONAL_JUMP)  ; LAB_004061c1
    CMP dword ptr [0x005b7624],0x20     ; 00406191 | DAT_005b7624
    JNZ 0x004061ba                      ; 00406198
        ;   XREF to: 004061ba (CONDITIONAL_JUMP)  ; LAB_004061ba
    MOV ESI,0x5300ec                    ; 0040619a
    MOV ECX,0x1                         ; 0040619f
        ;   Label: LAB_0040619f
    MOV EDX,0xd0                        ; 004061a4
    MOV dword ptr [0x01c00c7c],ESI      ; 004061a9 | DAT_01c00c7c
    MOV dword ptr [0x01c039a4],ECX      ; 004061af | DAT_01c039a4
    JMP 0x00406107                      ; 004061b5
        ;   XREF to: 00406107 (UNCONDITIONAL_JUMP)  ; LAB_00406107
    MOV ESI,0x530322                    ; 004061ba
        ;   Label: LAB_004061ba
    JMP 0x0040619f                      ; 004061bf
        ;   XREF to: 0040619f (UNCONDITIONAL_JUMP)  ; LAB_0040619f
    CMP dword ptr [0x005b7624],0x20     ; 004061c1 | DAT_005b7624
        ;   Label: LAB_004061c1
    JNZ 0x004061d1                      ; 004061c8
        ;   XREF to: 004061d1 (CONDITIONAL_JUMP)  ; LAB_004061d1
    MOV ESI,0x52f031                    ; 004061ca
    JMP 0x0040619f                      ; 004061cf
        ;   XREF to: 0040619f (UNCONDITIONAL_JUMP)  ; LAB_0040619f
    MOV ESI,0x52f823                    ; 004061d1
        ;   Label: LAB_004061d1
    JMP 0x0040619f                      ; 004061d6
        ;   XREF to: 0040619f (UNCONDITIONAL_JUMP)  ; LAB_0040619f
    CMP dword ptr [0x01c03948],0x0      ; 004061d8 | DAT_01c03948
        ;   Label: LAB_004061d8
    JNZ 0x0040620e                      ; 004061df
        ;   XREF to: 0040620e (CONDITIONAL_JUMP)  ; LAB_0040620e
    CMP dword ptr [0x005b7624],0x20     ; 004061e1 | DAT_005b7624
    JNZ 0x00406207                      ; 004061e8
        ;   XREF to: 00406207 (CONDITIONAL_JUMP)  ; LAB_00406207
    MOV ESI,0x5300ec                    ; 004061ea
    MOV EDX,0x10                        ; 004061ef
        ;   Label: LAB_004061ef
    XOR ECX,ECX                         ; 004061f4
    MOV dword ptr [0x01c00c7c],ESI      ; 004061f6 | DAT_01c00c7c
    MOV dword ptr [0x01c039a4],ECX      ; 004061fc | DAT_01c039a4
    JMP 0x00406107                      ; 00406202
        ;   XREF to: 00406107 (UNCONDITIONAL_JUMP)  ; LAB_00406107
    MOV ESI,0x530322                    ; 00406207
        ;   Label: LAB_00406207
    JMP 0x004061ef                      ; 0040620c
        ;   XREF to: 004061ef (UNCONDITIONAL_JUMP)  ; LAB_004061ef
    CMP dword ptr [0x005b7624],0x20     ; 0040620e | DAT_005b7624
        ;   Label: LAB_0040620e
    JNZ 0x0040621e                      ; 00406215
        ;   XREF to: 0040621e (CONDITIONAL_JUMP)  ; LAB_0040621e
    MOV ESI,0x52f031                    ; 00406217
    JMP 0x004061ef                      ; 0040621c
        ;   XREF to: 004061ef (UNCONDITIONAL_JUMP)  ; LAB_004061ef
    MOV ESI,0x52f823                    ; 0040621e
        ;   Label: LAB_0040621e
    JMP 0x004061ef                      ; 00406223
        ;   XREF to: 004061ef (UNCONDITIONAL_JUMP)  ; LAB_004061ef

