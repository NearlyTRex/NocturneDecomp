; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047ff4e(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5cec
;   undefined4 DAT_005f5cfc
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_00403830
;   engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0
;   engine_matrix.c_pop_FUN_004e9810
;   shape_edittool.cpp_FUN_0047fd00
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0047ff4e
        ;   Label: shape_edittool.cpp_FUN_0047ff4e
    PUSH EBX                            ; 0047ff50
    PUSH ESI                            ; 0047ff51
    PUSH EDI                            ; 0047ff52
    SUB ESP,0x1c                        ; 0047ff53
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047ff56
    LEA EBX,[ESP + 0x4]                 ; 0047ff5a
    FLD float ptr [EAX]                 ; 0047ff5e
    FMUL float ptr [0x005f5cec]         ; 0047ff60 | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 0047ff66
    FLD float ptr [EAX + 0x4]           ; 0047ff68
    FMUL float ptr [0x005f5cec]         ; 0047ff6b | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 0047ff71
    FLD float ptr [EAX + 0x8]           ; 0047ff74
    FMUL float ptr [0x005f5cec]         ; 0047ff77 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 0047ff7d
    MOV EBX,ESP                         ; 0047ff80
    PUSH EBX                            ; 0047ff82
    CALL engine_3d.c_processCameraRelativePoint_FUN_00403830 ; 0047ff83
        ;   XREF to: 00403830 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_00403830(SMRGLPoint * block)
    ADD ESP,0x4                         ; 0047ff88
    LEA EBX,[ESP + 0x10]                ; 0047ff8b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047ff8f
    FLD float ptr [EAX]                 ; 0047ff93
    FMUL float ptr [0x005f5cfc]         ; 0047ff95 | DAT_005f5cfc
    FISTP dword ptr [EBX]               ; 0047ff9b
    FLD float ptr [EAX + 0x8]           ; 0047ff9d
    FMUL float ptr [0x005f5cfc]         ; 0047ffa0 | DAT_005f5cfc
    FISTP dword ptr [EBX + 0x4]         ; 0047ffa6
    FLD float ptr [EAX + 0x4]           ; 0047ffa9
    FMUL float ptr [0x005f5cfc]         ; 0047ffac | DAT_005f5cfc
    FISTP dword ptr [EBX + 0x8]         ; 0047ffb2
    PUSH 0x0                            ; 0047ffb5
    PUSH 0x0                            ; 0047ffb7
    PUSH 0x0                            ; 0047ffb9
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047ffbb
    PUSH EDX                            ; 0047ffbf
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047ffc0
    PUSH ECX                            ; 0047ffc4
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047ffc5
    PUSH EBX                            ; 0047ffc9
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0 ; 0047ffca
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0047ffcf
    MOV ESI,dword ptr [ESP + 0x34]      ; 0047ffd2
    PUSH ESI                            ; 0047ffd6
    MOV EDI,dword ptr [ESP + 0x30]      ; 0047ffd7
    PUSH dword ptr [ESP + 0x34]         ; 0047ffdb
    PUSH EDI                            ; 0047ffdf
    CALL shape_edittool.cpp_FUN_0047fd00 ; 0047ffe0
        ;   XREF to: 0047fd00 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fd00()
    ADD ESP,0xc                         ; 0047ffe5
    CALL engine_matrix.c_pop_FUN_004e9810 ; 0047ffe8
        ;   XREF to: 004e9810 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004e9810()
    ADD ESP,0x1c                        ; 0047ffed
    POP EDI                             ; 0047fff0
    POP ESI                             ; 0047fff1
    POP EBX                             ; 0047fff2
    RET                                 ; 0047fff3

