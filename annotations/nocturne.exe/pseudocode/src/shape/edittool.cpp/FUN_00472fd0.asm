; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00472fd0(CEditorTools *param_1,float param_2,int param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_0059ca4c
;   undefined4 DAT_0059ca5c
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004044d0
;   engine_matrix.c_matrixPushAndTransform_FUN_004cd380
;   engine_matrix.c_pop_FUN_004cdbc0
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472fd0
        ;   Label: shape_edittool.cpp_FUN_00472fd0
    PUSH ESI                            ; 00472fd1
    PUSH EDI                            ; 00472fd2
    SUB ESP,0x1c                        ; 00472fd3
    MOV EAX,dword ptr [ESP + 0x38]      ; 00472fd6
    LEA EBX,[ESP + 0x4]                 ; 00472fda
    FLD float ptr [EAX]                 ; 00472fde
    FMUL float ptr [0x0059ca4c]         ; 00472fe0 | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 00472fe6
    FLD float ptr [EAX + 0x4]           ; 00472fe8
    FMUL float ptr [0x0059ca4c]         ; 00472feb | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 00472ff1
    FLD float ptr [EAX + 0x8]           ; 00472ff4
    FMUL float ptr [0x0059ca4c]         ; 00472ff7 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 00472ffd
    MOV EBX,ESP                         ; 00473000
    PUSH EBX                            ; 00473002
    CALL engine_3d.c_processCameraRelativePoint_FUN_004044d0 ; 00473003
        ;   XREF to: 004044d0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f * input_point)
    ADD ESP,0x4                         ; 00473008
    LEA EBX,[ESP + 0x10]                ; 0047300b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047300f
    FLD float ptr [EAX]                 ; 00473013
    FMUL float ptr [0x0059ca5c]         ; 00473015 | DAT_0059ca5c
    FISTP dword ptr [EBX]               ; 0047301b
    FLD float ptr [EAX + 0x8]           ; 0047301d
    FMUL float ptr [0x0059ca5c]         ; 00473020 | DAT_0059ca5c
    FISTP dword ptr [EBX + 0x4]         ; 00473026
    FLD float ptr [EAX + 0x4]           ; 00473029
    FMUL float ptr [0x0059ca5c]         ; 0047302c | DAT_0059ca5c
    FISTP dword ptr [EBX + 0x8]         ; 00473032
    PUSH 0x0                            ; 00473035
    PUSH 0x0                            ; 00473037
    PUSH 0x0                            ; 00473039
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047303b
    PUSH EDX                            ; 0047303f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00473040
    PUSH ECX                            ; 00473044
    MOV EBX,dword ptr [ESP + 0x24]      ; 00473045
    PUSH EBX                            ; 00473049
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004cd380 ; 0047304a
        ;   XREF to: 004cd380 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004cd380(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0047304f
    MOV ESI,dword ptr [ESP + 0x34]      ; 00473052
    PUSH ESI                            ; 00473056
    MOV EDI,dword ptr [ESP + 0x30]      ; 00473057
    PUSH dword ptr [ESP + 0x34]         ; 0047305b
    PUSH EDI                            ; 0047305f
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0 ; 00473060
        ;   XREF to: 00472de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 00473065
    CALL engine_matrix.c_pop_FUN_004cdbc0 ; 00473068
        ;   XREF to: 004cdbc0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004cdbc0()
    ADD ESP,0x1c                        ; 0047306d
    POP EDI                             ; 00473070
    POP ESI                             ; 00473071
    POP EBX                             ; 00473072
    RET                                 ; 00473073

