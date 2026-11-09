; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004985ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff7ec
;   undefined4 DAT_005ff7fc
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;   engine_matrix.c_matrixPushAndTransform_FUN_00507c70
;   engine_matrix.c_pop_FUN_005084b0
;   shape_edittool.cpp_FUN_00498360
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004985ae
        ;   Label: shape_edittool.cpp_FUN_004985ae
    PUSH EBX                            ; 004985b0
    PUSH ESI                            ; 004985b1
    PUSH EDI                            ; 004985b2
    SUB ESP,0x1c                        ; 004985b3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004985b6
    LEA EBX,[ESP + 0x4]                 ; 004985ba
    FLD float ptr [EAX]                 ; 004985be
    FMUL float ptr [0x005ff7ec]         ; 004985c0 | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 004985c6
    FLD float ptr [EAX + 0x4]           ; 004985c8
    FMUL float ptr [0x005ff7ec]         ; 004985cb | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 004985d1
    FLD float ptr [EAX + 0x8]           ; 004985d4
    FMUL float ptr [0x005ff7ec]         ; 004985d7 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 004985dd
    MOV EBX,ESP                         ; 004985e0
    PUSH EBX                            ; 004985e2
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 004985e3
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_004037e0()
    ADD ESP,0x4                         ; 004985e8
    LEA EBX,[ESP + 0x10]                ; 004985eb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004985ef
    FLD float ptr [EAX]                 ; 004985f3
    FMUL float ptr [0x005ff7fc]         ; 004985f5 | DAT_005ff7fc
    FISTP dword ptr [EBX]               ; 004985fb
    FLD float ptr [EAX + 0x8]           ; 004985fd
    FMUL float ptr [0x005ff7fc]         ; 00498600 | DAT_005ff7fc
    FISTP dword ptr [EBX + 0x4]         ; 00498606
    FLD float ptr [EAX + 0x4]           ; 00498609
    FMUL float ptr [0x005ff7fc]         ; 0049860c | DAT_005ff7fc
    FISTP dword ptr [EBX + 0x8]         ; 00498612
    PUSH 0x0                            ; 00498615
    PUSH 0x0                            ; 00498617
    PUSH 0x0                            ; 00498619
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049861b
    PUSH EDX                            ; 0049861f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00498620
    PUSH ECX                            ; 00498624
    MOV EBX,dword ptr [ESP + 0x24]      ; 00498625
    PUSH EBX                            ; 00498629
    CALL engine_matrix.c_matrixPushAndTransform_FUN_00507c70 ; 0049862a
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_00507c70(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0049862f
    MOV ESI,dword ptr [ESP + 0x34]      ; 00498632
    PUSH ESI                            ; 00498636
    MOV EDI,dword ptr [ESP + 0x30]      ; 00498637
    PUSH dword ptr [ESP + 0x34]         ; 0049863b
    PUSH EDI                            ; 0049863f
    CALL shape_edittool.cpp_FUN_00498360 ; 00498640
        ;   XREF to: 00498360 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00498360()
    ADD ESP,0xc                         ; 00498645
    CALL engine_matrix.c_pop_FUN_005084b0 ; 00498648
        ;   XREF to: 005084b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_005084b0()
    ADD ESP,0x1c                        ; 0049864d
    POP EDI                             ; 00498650
    POP ESI                             ; 00498651
    POP EBX                             ; 00498652
    RET                                 ; 00498653

