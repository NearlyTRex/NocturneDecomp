; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457f70(CDemonCube *this_ptr,uint rendering_mode)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   rendering_mode
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 at 0048d17b
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770 at 0048e7be
;
; Referenced Globals:
;   undefined1* PTR_LAB_00457f50 = 00458094
;   TerminatedCString s_core_dcube_cpp_005d7c94
;   TerminatedCString s_CDemonCube_rotateVertici_005d7ca6
;   undefined4 DAT_005d7cff
;   undefined4 DAT_005fe660
;   undefined4 DAT_00612560
;   undefined4 DAT_0152bd3c
;   undefined4 DAT_0152bd40
;   undefined4 DAT_0152bd44
;   undefined4 DAT_0152bd48
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bc1224
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00457af0
;   core_main.c_FUN_005030e0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457f70
        ;   Label: core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70
    PUSH ESI                            ; 00457f71
    PUSH EDI                            ; 00457f72
    PUSH EBP                            ; 00457f73
    MOV EBP,ESP                         ; 00457f74
    SUB ESP,0x38                        ; 00457f76
    PUSH 0x2c8af28                      ; 00457f79 | DAT_02c8af28
    MOV EDX,dword ptr [0x00612560]      ; 00457f7e | DAT_00612560
    PUSH EDX                            ; 00457f84 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00457f85
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457f8a
    MOV ECX,dword ptr [EAX + 0x20]      ; 00457f8d
    ADD ESP,0x8                         ; 00457f90
    CMP ECX,0x4e20                      ; 00457f93
    JG 0x0045817e                       ; 00457f99
        ;   XREF to: 0045817e (CONDITIONAL_JUMP)  ; LAB_0045817e
    PUSH 0x1                            ; 00457f9f
        ;   Label: LAB_00457f9f
    MOV EAX,[0x00612560]                ; 00457fa1 | DAT_00612560
    PUSH EAX                            ; 00457fa6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00457fa7
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00457fac
    PUSH 0x1                            ; 00457faf
    MOV EDX,dword ptr [0x00612560]      ; 00457fb1 | DAT_00612560
    PUSH EDX                            ; 00457fb7 | DAT_01bc120c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00457fb8
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00457fbb
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457fc0
    MOV EDI,dword ptr [0x00612560]      ; 00457fc3 | DAT_00612560
    ADD ESP,0x8                         ; 00457fc9
    XOR ECX,ECX                         ; 00457fcc
    MOV ESI,dword ptr [ESI + 0x24]      ; 00457fce
    MOV dword ptr [EBP + -0x10],ECX     ; 00457fd1
    MOV dword ptr [EBP + -0xc],ECX      ; 00457fd4
    MOV EDX,dword ptr [EAX + 0x20]      ; 00457fd7
    MOV EDI,dword ptr [EDI]             ; 00457fda | DAT_01bc120c
    TEST EDX,EDX                        ; 00457fdc
    JLE 0x00458036                      ; 00457fde
        ;   XREF to: 00458036 (CONDITIONAL_JUMP)  ; LAB_00458036
    LEA EBX,[EBP + -0x38]               ; 00457fe0
        ;   Label: LAB_00457fe0
    MOV EAX,ESI                         ; 00457fe3
    FLD float ptr [EAX]                 ; 00457fe5
    FMUL float ptr [0x005fe660]         ; 00457fe7 | DAT_005fe660
    FISTP dword ptr [EBX]               ; 00457fed
    FLD float ptr [EAX + 0x4]           ; 00457fef
    FMUL float ptr [0x005fe660]         ; 00457ff2 | DAT_005fe660
    FISTP dword ptr [EBX + 0x4]         ; 00457ff8
    FLD float ptr [EAX + 0x8]           ; 00457ffb
    FMUL float ptr [0x005fe660]         ; 00457ffe | DAT_005fe660
    FISTP dword ptr [EBX + 0x8]         ; 00458004
    LEA EAX,[EBP + -0x38]               ; 00458007
    PUSH EAX                            ; 0045800a
    PUSH EDI                            ; 0045800b
    CALL engine_special.cpp_FUN_00580173 ; 0045800c
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV DH,byte ptr [EDI + 0x13]        ; 00458011
    ADD ESP,0x8                         ; 00458014
    TEST DH,0x80                        ; 00458017
    JNZ 0x0045801f                      ; 0045801a
        ;   XREF to: 0045801f (CONDITIONAL_JUMP)  ; LAB_0045801f
    INC dword ptr [EBP + -0x10]         ; 0045801c
    MOV ECX,dword ptr [EBP + -0xc]      ; 0045801f
        ;   Label: LAB_0045801f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00458022
    ADD EDI,0x30                        ; 00458025
    ADD ESI,0xc                         ; 00458028
    INC ECX                             ; 0045802b
    MOV EBX,dword ptr [EDX + 0x20]      ; 0045802c
    MOV dword ptr [EBP + -0xc],ECX      ; 0045802f
    CMP ECX,EBX                         ; 00458032
    JL 0x00457fe0                       ; 00458034
        ;   XREF to: 00457fe0 (CONDITIONAL_JUMP)  ; LAB_00457fe0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00458036
        ;   Label: LAB_00458036
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458039
    CMP EAX,dword ptr [EDX + 0x20]      ; 0045803c
    JNZ 0x00458057                      ; 0045803f
        ;   XREF to: 00458057 (CONDITIONAL_JUMP)  ; LAB_00458057
    MOV EAX,[0x00612560]                ; 00458041 | DAT_00612560
    MOV EDX,dword ptr [EAX + 0x18]      ; 00458046 | DAT_01bc1224
    TEST EDX,EDX                        ; 00458049
    JNZ 0x00458057                      ; 0045804b
        ;   XREF to: 00458057 (CONDITIONAL_JUMP)  ; LAB_00458057
    PUSH EDX                            ; 0045804d
    PUSH EAX                            ; 0045804e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0045804f
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00458054
    MOV AH,byte ptr [0x0152bd48]        ; 00458057 | DAT_0152bd48
        ;   Label: LAB_00458057
    TEST AH,0x1                         ; 0045805d
    JZ 0x004581ac                       ; 00458060
        ;   XREF to: 004581ac (CONDITIONAL_JUMP)  ; LAB_004581ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458066
        ;   Label: LAB_00458066
    XOR ECX,ECX                         ; 00458069
    MOV EBX,dword ptr [EAX + 0x28]      ; 0045806b
    MOV dword ptr [EBP + -0x4],ECX      ; 0045806e
    TEST EBX,EBX                        ; 00458071
    JLE 0x00458156                      ; 00458073
        ;   XREF to: 00458156 (CONDITIONAL_JUMP)  ; LAB_00458156
    MOV EAX,dword ptr [EBP + 0x18]      ; 00458079
    SHL EAX,0x2                         ; 0045807c
    MOV dword ptr [EBP + -0x8],ECX      ; 0045807f
    MOV dword ptr [EBP + -0x14],EAX     ; 00458082
    CMP dword ptr [EBP + 0x18],0x4      ; 00458085
        ;   Label: LAB_00458085
    JA 0x00458094                       ; 00458089
        ;   XREF to: 00458094 (CONDITIONAL_JUMP)  ; LAB_00458094
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045808b
    JMP dword ptr [EAX + 0x457f50]      ; 0045808e | PTR_LAB_00457f50
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458094
        ;   Label: LAB_00458094
    MOV ESI,dword ptr [EBP + -0x8]      ; 00458097
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0045809a
    ADD EAX,ESI                         ; 0045809d
    LEA EDX,[EAX + 0xc]                 ; 0045809f
    LEA EAX,[EBP + -0x2c]               ; 004580a2
    CMP EAX,EDX                         ; 004580a5
    JZ 0x004580ba                       ; 004580a7
        ;   XREF to: 004580ba (CONDITIONAL_JUMP)  ; LAB_004580ba
    MOV EAX,dword ptr [EDX]             ; 004580a9
    MOV dword ptr [EBP + -0x2c],EAX     ; 004580ab
    MOV EAX,dword ptr [EDX + 0x4]       ; 004580ae
    MOV dword ptr [EBP + -0x28],EAX     ; 004580b1
    MOV EAX,dword ptr [EDX + 0x8]       ; 004580b4
    MOV dword ptr [EBP + -0x24],EAX     ; 004580b7
    FLD float ptr [0x005d7cff]          ; 004580ba | DAT_005d7cff
        ;   Label: LAB_004580ba
    FLD float ptr [EBP + -0x2c]         ; 004580c0
    FMUL ST1                            ; 004580c3
    FSTP float ptr [EBP + -0x2c]        ; 004580c5
    FLD float ptr [EBP + -0x28]         ; 004580c8
    FMUL ST1                            ; 004580cb
    FSTP float ptr [EBP + -0x28]        ; 004580cd
    FMUL float ptr [EBP + -0x24]        ; 004580d0
    FSTP float ptr [EBP + -0x24]        ; 004580d3
    LEA EAX,[EBP + 0xffffffd4]          ; 004580d6
    FLD float ptr [EAX]                 ; 004580dc
    FLD float ptr [EAX + 0x4]           ; 004580de
    FLD float ptr [EAX + 0x8]           ; 004580e1
    FISTP dword ptr [EBP + 0xffffffe8]  ; 004580e4
    FISTP dword ptr [EBP + 0xffffffe4]  ; 004580ea
    FISTP dword ptr [EBP + 0xffffffe0]  ; 004580f0
    MOV EAX,dword ptr [EBP + -0x18]     ; 004580f6
    AND EAX,0xff                        ; 004580f9
    PUSH EAX                            ; 004580fe
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004580ff
    AND EAX,0xff                        ; 00458102
    PUSH EAX                            ; 00458107
    MOV EAX,dword ptr [EBP + -0x20]     ; 00458108
    AND EAX,0xff                        ; 0045810b
    PUSH EAX                            ; 00458110
    MOV EDI,dword ptr [0x00612560]      ; 00458111 | DAT_00612560
    PUSH EDI                            ; 00458117 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0 ; 00458118
        ;   XREF to: 00483cf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    ADD ESP,0x10                        ; 0045811d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458120
        ;   Label: LAB_00458120
    MOV ECX,dword ptr [EBP + -0x8]      ; 00458123
    MOV EBX,dword ptr [EBP + -0x8]      ; 00458126
    MOV EDX,dword ptr [EAX + 0x24]      ; 00458129
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0045812c
    PUSH EDX                            ; 0045812f
    ADD EAX,ECX                         ; 00458130
    MOV ESI,dword ptr [EBP + -0x4]      ; 00458132
    PUSH EAX                            ; 00458135
    ADD EBX,0x20                        ; 00458136
    INC ESI                             ; 00458139
    CALL core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00457af0 ; 0045813a
        ;   XREF to: 00457af0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00457af0()
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045813f
    MOV dword ptr [EBP + -0x8],EBX      ; 00458142
    MOV dword ptr [EBP + -0x4],ESI      ; 00458145
    MOV EDI,dword ptr [EDX + 0x28]      ; 00458148
    ADD ESP,0x8                         ; 0045814b
    CMP ESI,EDI                         ; 0045814e
    JL 0x00458085                       ; 00458150
        ;   XREF to: 00458085 (CONDITIONAL_JUMP)  ; LAB_00458085
    PUSH 0x1                            ; 00458156
        ;   Label: LAB_00458156
    MOV EAX,[0x00612560]                ; 00458158 | DAT_00612560
    PUSH EAX                            ; 0045815d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0045815e
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00458163
    PUSH 0x0                            ; 00458166
    MOV EDX,dword ptr [0x00612560]      ; 00458168 | DAT_00612560
    PUSH EDX                            ; 0045816e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0045816f
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00458174
    MOV ESP,EBP                         ; 00458177
    POP EBP                             ; 00458179
    POP EDI                             ; 0045817a
    POP ESI                             ; 0045817b
    POP EBX                             ; 0045817c
    RET                                 ; 0045817d
    PUSH 0x4e20                         ; 0045817e
        ;   Label: LAB_0045817e
    PUSH ECX                            ; 00458183
    MOV EBX,0x5d7c94                    ; 00458184 | = "..\\core\\dcube.cpp"
    MOV ESI,0x7bb                       ; 00458189
    PUSH 0x5d7ca6                       ; 0045818e | = "CDemonCube::rotateVerticies - tried t..."
    MOV dword ptr [0x01d1d400],EBX      ; 00458193 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00458199 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045819f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004581a4
    JMP 0x00457f9f                      ; 004581a7
        ;   XREF to: 00457f9f (UNCONDITIONAL_JUMP)  ; LAB_00457f9f
    MOV EDI,0x3f13cd3a                  ; 004581ac
        ;   Label: LAB_004581ac
    MOV DL,AH                           ; 004581b1
    MOV EAX,0xbf13cd3a                  ; 004581b3
    OR DL,0x1                           ; 004581b8
    MOV dword ptr [0x0152bd3c],EDI      ; 004581bb | DAT_0152bd3c
    MOV dword ptr [0x0152bd44],EDI      ; 004581c1 | DAT_0152bd44
    MOV [0x0152bd40],EAX                ; 004581c7 | DAT_0152bd40
    MOV byte ptr [0x0152bd48],DL        ; 004581cc | DAT_0152bd48
    JMP 0x00458066                      ; 004581d2
        ;   XREF to: 00458066 (UNCONDITIONAL_JUMP)  ; LAB_00458066

