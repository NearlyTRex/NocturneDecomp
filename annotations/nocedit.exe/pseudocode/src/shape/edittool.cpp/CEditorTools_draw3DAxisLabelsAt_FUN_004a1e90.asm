; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools * this_ptr, int param2, CQuaternion4f * world_position, CQuaternion4f * label_offset, void * param5)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param2
; CQuaternion4f *  Stack[0xc]:4   world_position
; CQuaternion4f *  Stack[0x10]:4   label_offset
; void *           Stack[0x14]:4   param5
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_emitter.cpp_FUN_004a8860 at 004a8a60
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 005396f3
;
; Referenced Globals:
;   float g_WorldToScreenScale2 = 256
;   float g_LabelOffsetScale = 10430.38
;
; Called Functions:
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
;   engine_matrix.c_pop_FUN_0050d720
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1e90
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
    PUSH ESI                            ; 004a1e91
    PUSH EDI                            ; 004a1e92
    SUB ESP,0x1c                        ; 004a1e93
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a1e96
    LEA EBX,[ESP + 0x4]                 ; 004a1e9a
    FLD float ptr [EAX]                 ; 004a1e9e
    FMUL float ptr [0x0065d44c]         ; 004a1ea0 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a1ea6
    FLD float ptr [EAX + 0x4]           ; 004a1ea8
    FMUL float ptr [0x0065d44c]         ; 004a1eab | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a1eb1
    FLD float ptr [EAX + 0x8]           ; 004a1eb4
    FMUL float ptr [0x0065d44c]         ; 004a1eb7 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a1ebd
    MOV EBX,ESP                         ; 004a1ec0
    PUSH EBX                            ; 004a1ec2
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 004a1ec3
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f * input_point)
    ADD ESP,0x4                         ; 004a1ec8
    LEA EBX,[ESP + 0x10]                ; 004a1ecb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a1ecf
    FLD float ptr [EAX]                 ; 004a1ed3
    FMUL float ptr [0x0065d45c]         ; 004a1ed5 | g_LabelOffsetScale
    FISTP dword ptr [EBX]               ; 004a1edb
    FLD float ptr [EAX + 0x8]           ; 004a1edd
    FMUL float ptr [0x0065d45c]         ; 004a1ee0 | g_LabelOffsetScale
    FISTP dword ptr [EBX + 0x4]         ; 004a1ee6
    FLD float ptr [EAX + 0x4]           ; 004a1ee9
    FMUL float ptr [0x0065d45c]         ; 004a1eec | g_LabelOffsetScale
    FISTP dword ptr [EBX + 0x8]         ; 004a1ef2
    PUSH 0x0                            ; 004a1ef5
    PUSH 0x0                            ; 004a1ef7
    PUSH 0x0                            ; 004a1ef9
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a1efb
    PUSH EDX                            ; 004a1eff
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a1f00
    PUSH ECX                            ; 004a1f04
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a1f05
    PUSH EBX                            ; 004a1f09
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 004a1f0a
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(ushort rotX, ushort rotY, ushort rotZ, int translateX, ...)
    ADD ESP,0x18                        ; 004a1f0f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a1f12
    PUSH ESI                            ; 004a1f16
    MOV EDI,dword ptr [ESP + 0x30]      ; 004a1f17
    PUSH dword ptr [ESP + 0x34]         ; 004a1f1b
    PUSH EDI                            ; 004a1f1f
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 004a1f20
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 004a1f25
    CALL engine_matrix.c_pop_FUN_0050d720 ; 004a1f28
        ;   XREF to: 0050d720 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0050d720()

