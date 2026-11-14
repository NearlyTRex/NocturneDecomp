; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_FUN_005680b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005680b0
        ;   Label: shape_spotview.cpp_FUN_005680b0
    PUSH ESI                            ; 005680b1
    PUSH EDI                            ; 005680b2
    SUB ESP,0x7c                        ; 005680b3
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005680b6
    MOV EDX,dword ptr [0x005f2afc]      ; 005680bd | DAT_005f2afc
    PUSH 0x41e00000                     ; 005680c3
    PUSH EDX                            ; 005680c8
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 005680c9
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 005680ce
    MOV EAX,dword ptr [EBX + 0x24]      ; 005680d1
    XOR ECX,ECX                         ; 005680d4
    MOV dword ptr [ESP + 0x34],EAX      ; 005680d6
    MOV dword ptr [ESP + 0x3c],ECX      ; 005680da
    MOV EAX,dword ptr [EBX + 0x28]      ; 005680de
    MOV dword ptr [ESP + 0x38],EAX      ; 005680e1
    LEA EAX,[ESP + 0x34]                ; 005680e5
    PUSH EAX                            ; 005680e9
    LEA EAX,[ESP + 0x4]                 ; 005680ea
    PUSH EAX                            ; 005680ee
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 005680ef
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005680f4
    MOV EAX,dword ptr [EBX + 0x30]      ; 005680f7
    MOV dword ptr [ESP + 0x74],EAX      ; 005680fa
    MOV EAX,dword ptr [EBX + 0x34]      ; 005680fe
    FLD float ptr [EBX + 0x2c]          ; 00568101
    MOV dword ptr [ESP + 0x78],EAX      ; 00568104
    MOV EAX,dword ptr [ESP + 0x74]      ; 00568108
    FCHS                                ; 0056810c
    MOV dword ptr [ESP + 0x40],EAX      ; 0056810e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00568112
    FSTP float ptr [ESP + 0x70]         ; 00568116
    MOV dword ptr [ESP + 0x44],EAX      ; 0056811a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056811e
    MOV dword ptr [ESP + 0x48],EAX      ; 00568122
    LEA EAX,[ESP + 0x40]                ; 00568126
    PUSH EAX                            ; 0056812a
    LEA EAX,[ESP + 0x4]                 ; 0056812b
    PUSH EAX                            ; 0056812f
    LEA ESI,[ESP + 0x60]                ; 00568130
    LEA EDI,[ESP + 0x54]                ; 00568134
    CALL core_dirmat.cpp_FUN_0045b800   ; 00568138
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x60]                ; 0056813d
    ADD ESP,0x8                         ; 00568141
    LEA EAX,[ESP + 0x28]                ; 00568144
    MOVSD ES:EDI,ESI                    ; 00568148
    MOVSD ES:EDI,ESI                    ; 00568149
    MOVSD ES:EDI,ESI                    ; 0056814a
    PUSH EAX                            ; 0056814b
    FLD float ptr [EBX + 0x1c]          ; 0056814c
    FLD float ptr [EBX + 0x20]          ; 0056814f
    FLD float ptr [EBX + 0x18]          ; 00568152
    LEA EDI,[ESP + 0x2c]                ; 00568155
    LEA ESI,[ESP + 0x68]                ; 00568159
    MOV EBX,dword ptr [0x005f2afc]      ; 0056815d | DAT_005f2afc
    FADD float ptr [ESP + 0x50]         ; 00568163
    FXCH ST2                            ; 00568167
    FADD float ptr [ESP + 0x54]         ; 00568169
    FXCH                                ; 0056816d
    FADD float ptr [ESP + 0x58]         ; 0056816f
    FXCH ST2                            ; 00568173
    FSTP float ptr [ESP + 0x68]         ; 00568175
    FSTP float ptr [ESP + 0x6c]         ; 00568179
    FSTP float ptr [ESP + 0x70]         ; 0056817d
    PUSH EBX                            ; 00568181
    MOVSD ES:EDI,ESI                    ; 00568182
    MOVSD ES:EDI,ESI                    ; 00568183
    MOVSD ES:EDI,ESI                    ; 00568184
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 00568185
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0056818a
    LEA EAX,[ESP + 0x34]                ; 0056818d
    PUSH EAX                            ; 00568191
    MOV ESI,dword ptr [0x005f2afc]      ; 00568192 | DAT_005f2afc
    PUSH ESI                            ; 00568198
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 00568199
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0056819e
    ADD ESP,0x7c                        ; 005681a1
    POP EDI                             ; 005681a4
    POP ESI                             ; 005681a5
    POP EBX                             ; 005681a6
    RET                                 ; 005681a7

