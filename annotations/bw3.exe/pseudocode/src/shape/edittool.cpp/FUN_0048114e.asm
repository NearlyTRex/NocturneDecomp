; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0048114e(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005deffc
;   undefined4 DAT_005df00c
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;   engine_matrix.c_matrixPushAndTransform_FUN_004e56b0
;   engine_matrix.c_pop_FUN_004e5ef0
;   shape_edittool.cpp_FUN_00480f00
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0048114e
        ;   Label: shape_edittool.cpp_FUN_0048114e
    PUSH EBX                            ; 00481150
    PUSH ESI                            ; 00481151
    PUSH EDI                            ; 00481152
    SUB ESP,0x1c                        ; 00481153
    MOV EAX,dword ptr [ESP + 0x38]      ; 00481156
    LEA EBX,[ESP + 0x4]                 ; 0048115a
    FLD float ptr [EAX]                 ; 0048115e
    FMUL float ptr [0x005deffc]         ; 00481160 | DAT_005deffc
    FISTP dword ptr [EBX]               ; 00481166
    FLD float ptr [EAX + 0x4]           ; 00481168
    FMUL float ptr [0x005deffc]         ; 0048116b | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 00481171
    FLD float ptr [EAX + 0x8]           ; 00481174
    FMUL float ptr [0x005deffc]         ; 00481177 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 0048117d
    MOV EBX,ESP                         ; 00481180
    PUSH EBX                            ; 00481182
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 00481183
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_004037e0()
    ADD ESP,0x4                         ; 00481188
    LEA EBX,[ESP + 0x10]                ; 0048118b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048118f
    FLD float ptr [EAX]                 ; 00481193
    FMUL float ptr [0x005df00c]         ; 00481195 | DAT_005df00c
    FISTP dword ptr [EBX]               ; 0048119b
    FLD float ptr [EAX + 0x8]           ; 0048119d
    FMUL float ptr [0x005df00c]         ; 004811a0 | DAT_005df00c
    FISTP dword ptr [EBX + 0x4]         ; 004811a6
    FLD float ptr [EAX + 0x4]           ; 004811a9
    FMUL float ptr [0x005df00c]         ; 004811ac | DAT_005df00c
    FISTP dword ptr [EBX + 0x8]         ; 004811b2
    PUSH 0x0                            ; 004811b5
    PUSH 0x0                            ; 004811b7
    PUSH 0x0                            ; 004811b9
    MOV EDX,dword ptr [ESP + 0x24]      ; 004811bb
    PUSH EDX                            ; 004811bf
    MOV ECX,dword ptr [ESP + 0x24]      ; 004811c0
    PUSH ECX                            ; 004811c4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004811c5
    PUSH EBX                            ; 004811c9
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004e56b0 ; 004811ca
        ;   XREF to: 004e56b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004e56b0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 004811cf
    MOV ESI,dword ptr [ESP + 0x34]      ; 004811d2
    PUSH ESI                            ; 004811d6
    MOV EDI,dword ptr [ESP + 0x30]      ; 004811d7
    PUSH dword ptr [ESP + 0x34]         ; 004811db
    PUSH EDI                            ; 004811df
    CALL shape_edittool.cpp_FUN_00480f00 ; 004811e0
        ;   XREF to: 00480f00 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480f00()
    ADD ESP,0xc                         ; 004811e5
    CALL engine_matrix.c_pop_FUN_004e5ef0 ; 004811e8
        ;   XREF to: 004e5ef0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004e5ef0()
    ADD ESP,0x1c                        ; 004811ed
    POP EDI                             ; 004811f0
    POP ESI                             ; 004811f1
    POP EBX                             ; 004811f2
    RET                                 ; 004811f3

