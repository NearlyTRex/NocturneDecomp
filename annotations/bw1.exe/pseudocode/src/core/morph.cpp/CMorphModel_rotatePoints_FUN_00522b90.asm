; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_00522b90(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   blend_factor
; SMorphPoint *    Stack[0xc]:4   ref_points
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[1]:
;   core_morph.cpp_CMorphModel_render_FUN_00522b50 at 00522b6f
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea89a
;   TerminatedCString s_CMorphModel_rotatePoints_005ea8ac
;   undefined4 DAT_00604260
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d33f70
;   undefined4 DAT_01d33f74
;   undefined4 DAT_01d33f78
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522b90
        ;   Label: core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90
    PUSH ESI                            ; 00522b91
    PUSH EDI                            ; 00522b92
    PUSH EBP                            ; 00522b93
    SUB ESP,0x60                        ; 00522b94
    MOV EAX,dword ptr [ESP + 0x74]      ; 00522b97
    CMP dword ptr [EAX + 0x54],0x7d0    ; 00522b9b
    JG 0x00522d39                       ; 00522ba2
        ;   XREF to: 00522d39 (CONDITIONAL_JUMP)  ; LAB_00522d39
    FLD float ptr [ESP + 0x78]          ; 00522ba8
        ;   Label: LAB_00522ba8
    MOV EDI,0xff                        ; 00522bac
    FLD1                                ; 00522bb1
    XOR ESI,ESI                         ; 00522bb3
    MOV EAX,dword ptr [ESP + 0x74]      ; 00522bb5
    MOV dword ptr [ESP + 0x48],ESI      ; 00522bb9
    MOV dword ptr [ESP + 0x58],EDI      ; 00522bbd
    MOV dword ptr [ESP + 0x4c],ESI      ; 00522bc1
    FSUBRP                              ; 00522bc5
    MOV EDX,dword ptr [EAX + 0x54]      ; 00522bc7
    FSTP float ptr [ESP + 0x54]         ; 00522bca
    TEST EDX,EDX                        ; 00522bce
    JLE 0x00522d29                      ; 00522bd0
        ;   XREF to: 00522d29 (CONDITIONAL_JUMP)  ; LAB_00522d29
    MOV EBP,0x1d33f70                   ; 00522bd6
    MOV dword ptr [ESP + 0x50],ESI      ; 00522bdb
    MOV dword ptr [ESP + 0x5c],ESI      ; 00522bdf
    MOV EDX,dword ptr [ESP + 0x74]      ; 00522be3
        ;   Label: LAB_00522be3
    MOV ESI,dword ptr [ESP + 0x50]      ; 00522be7
    MOV EDX,dword ptr [EDX + 0x58]      ; 00522beb
    ADD EDX,ESI                         ; 00522bee
    MOV EAX,dword ptr [EDX]             ; 00522bf0
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00522bf2
    SHL EAX,0x4                         ; 00522bf6
    ADD EAX,EDI                         ; 00522bf9
    FLD float ptr [ESP + 0x54]          ; 00522bfb
    FLD float ptr [EAX + 0x4]           ; 00522bff
    FMUL ST1                            ; 00522c02
    FLD float ptr [EAX + 0x8]           ; 00522c04
    FMUL ST2                            ; 00522c07
    FLD float ptr [EAX + 0xc]           ; 00522c09
    FMULP ST3                           ; 00522c0c
    LEA ESI,[ESP + 0x3c]                ; 00522c0e
    LEA EDI,[ESP + 0xc]                 ; 00522c12
    LEA EAX,[EDX + 0x4]                 ; 00522c16
    FXCH                                ; 00522c19
    FSTP float ptr [ESP + 0x3c]         ; 00522c1b
    FSTP float ptr [ESP + 0x40]         ; 00522c1f
    FSTP float ptr [ESP + 0x44]         ; 00522c23
    MOVSD ES:EDI,ESI                    ; 00522c27
    MOVSD ES:EDI,ESI                    ; 00522c28
    MOVSD ES:EDI,ESI                    ; 00522c29
    FLD float ptr [ESP + 0x78]          ; 00522c2a
    FLD float ptr [EAX]                 ; 00522c2e
    FMUL ST1                            ; 00522c30
    FLD float ptr [EAX + 0x4]           ; 00522c32
    FMUL ST2                            ; 00522c35
    FLD float ptr [EAX + 0x8]           ; 00522c37
    FMULP ST3                           ; 00522c3a
    MOV EBX,EBP                         ; 00522c3c
    MOV EDI,ESP                         ; 00522c3e
    LEA ESI,[ESP + 0x30]                ; 00522c40
    FXCH                                ; 00522c44
    FSTP float ptr [ESP + 0x30]         ; 00522c46
    FSTP float ptr [ESP + 0x34]         ; 00522c4a
    FSTP float ptr [ESP + 0x38]         ; 00522c4e
    MOVSD ES:EDI,ESI                    ; 00522c52
    MOVSD ES:EDI,ESI                    ; 00522c53
    MOVSD ES:EDI,ESI                    ; 00522c54
    LEA EAX,[ESP + 0x18]                ; 00522c55
    FLD float ptr [ESP]                 ; 00522c59
    FLD float ptr [ESP + 0x4]           ; 00522c5c
    FLD float ptr [ESP + 0x8]           ; 00522c60
    LEA EDI,[ESP + 0x18]                ; 00522c64
    LEA ESI,[ESP + 0x24]                ; 00522c68
    FXCH ST2                            ; 00522c6c
    FADD float ptr [ESP + 0xc]          ; 00522c6e
    FXCH                                ; 00522c72
    FADD float ptr [ESP + 0x10]         ; 00522c74
    FXCH ST2                            ; 00522c78
    FADD float ptr [ESP + 0x14]         ; 00522c7a
    FXCH                                ; 00522c7e
    FSTP float ptr [ESP + 0x24]         ; 00522c80
    FXCH                                ; 00522c84
    FSTP float ptr [ESP + 0x28]         ; 00522c86
    FSTP float ptr [ESP + 0x2c]         ; 00522c8a
    MOVSD ES:EDI,ESI                    ; 00522c8e
    MOVSD ES:EDI,ESI                    ; 00522c8f
    MOVSD ES:EDI,ESI                    ; 00522c90
    FLD float ptr [EAX]                 ; 00522c91
    FMUL float ptr [0x00604260]         ; 00522c93 | DAT_00604260
    FISTP dword ptr [EBX]               ; 00522c99 | DAT_01d33f70
    FLD float ptr [EAX + 0x4]           ; 00522c9b
    FMUL float ptr [0x00604260]         ; 00522c9e | DAT_00604260
    FISTP dword ptr [EBX + 0x4]         ; 00522ca4 | DAT_01d33f74
    FLD float ptr [EAX + 0x8]           ; 00522ca7
    FMUL float ptr [0x00604260]         ; 00522caa | DAT_00604260
    FISTP dword ptr [EBX + 0x8]         ; 00522cb0 | DAT_01d33f78
    MOV EAX,[0x00612560]                ; 00522cb3 | DAT_00612560
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00522cb8
    MOV EAX,dword ptr [EAX]             ; 00522cbc | DAT_01bc120c
    PUSH EBP                            ; 00522cbe | DAT_01d33f70
    ADD EAX,EDX                         ; 00522cbf
    PUSH EAX                            ; 00522cc1
    CALL engine_special.cpp_FUN_00580173 ; 00522cc2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00522cc7
    MOV EAX,[0x00612560]                ; 00522cca | DAT_00612560
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00522ccf
    MOV EAX,dword ptr [EAX]             ; 00522cd3 | DAT_01bc120c
    ADD EAX,ECX                         ; 00522cd5
    MOV EAX,dword ptr [EAX + 0x10]      ; 00522cd7
    TEST EAX,0x80000000                 ; 00522cda
    JZ 0x00522d61                       ; 00522cdf
        ;   XREF to: 00522d61 (CONDITIONAL_JUMP)  ; LAB_00522d61
    MOV EDI,dword ptr [ESP + 0x58]      ; 00522ce5
    MOV ESI,0x1                         ; 00522ce9
    AND EDI,EAX                         ; 00522cee
    MOV dword ptr [ESP + 0x48],ESI      ; 00522cf0
    MOV dword ptr [ESP + 0x58],EDI      ; 00522cf4
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00522cf8
        ;   Label: LAB_00522cf8
    MOV EBX,dword ptr [ESP + 0x50]      ; 00522cfc
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00522d00
    MOV EDX,dword ptr [ESP + 0x74]      ; 00522d04
    ADD EBP,0xc                         ; 00522d08
    ADD ECX,0x30                        ; 00522d0b
    ADD EBX,0x10                        ; 00522d0e
    INC ESI                             ; 00522d11
    MOV EDI,dword ptr [EDX + 0x54]      ; 00522d12
    MOV dword ptr [ESP + 0x5c],ECX      ; 00522d15
    MOV dword ptr [ESP + 0x50],EBX      ; 00522d19
    MOV dword ptr [ESP + 0x4c],ESI      ; 00522d1d
    CMP ESI,EDI                         ; 00522d21
    JL 0x00522be3                       ; 00522d23
        ;   XREF to: 00522be3 (CONDITIONAL_JUMP)  ; LAB_00522be3
    MOV EBP,dword ptr [ESP + 0x58]      ; 00522d29
        ;   Label: LAB_00522d29
    TEST EBP,EBP                        ; 00522d2d
    JZ 0x00522d69                       ; 00522d2f
        ;   XREF to: 00522d69 (CONDITIONAL_JUMP)  ; LAB_00522d69
    ADD ESP,0x60                        ; 00522d31
    POP EBP                             ; 00522d34
    POP EDI                             ; 00522d35
    POP ESI                             ; 00522d36
    POP EBX                             ; 00522d37
    RET                                 ; 00522d38
    MOV ECX,0x5ea89a                    ; 00522d39 | = "..\\core\\morph.cpp"
        ;   Label: LAB_00522d39
    MOV EBX,0x1f8                       ; 00522d3e
    PUSH 0x5ea8ac                       ; 00522d43 | = "CMorphModel::rotatePoints - too many ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00522d48 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00522d4e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00522d54
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00522d59
    JMP 0x00522ba8                      ; 00522d5c
        ;   XREF to: 00522ba8 (UNCONDITIONAL_JUMP)  ; LAB_00522ba8
    XOR EBX,EBX                         ; 00522d61
        ;   Label: LAB_00522d61
    MOV dword ptr [ESP + 0x58],EBX      ; 00522d63
    JMP 0x00522cf8                      ; 00522d67
        ;   XREF to: 00522cf8 (UNCONDITIONAL_JUMP)  ; LAB_00522cf8
    MOV EAX,dword ptr [ESP + 0x74]      ; 00522d69
        ;   Label: LAB_00522d69
    MOV EDX,dword ptr [EAX + 0x54]      ; 00522d6d
    PUSH EDX                            ; 00522d70
    MOV ECX,dword ptr [0x00622c18]      ; 00522d71 | g_CDemonSetPtr
    PUSH ECX                            ; 00522d77 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50 ; 00522d78
        ;   XREF to: 00552f50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 00522d7d
    PUSH EBP                            ; 00522d80
    PUSH 0x3                            ; 00522d81
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00522d83
    PUSH 0x1d33f70                      ; 00522d87 | DAT_01d33f70
    MOV EBX,dword ptr [EAX + 0x60]      ; 00522d8c
    PUSH EBX                            ; 00522d8f
    MOV ESI,dword ptr [EAX + 0x5c]      ; 00522d90
    PUSH ESI                            ; 00522d93
    MOV EDI,dword ptr [EAX + 0x54]      ; 00522d94
    PUSH EDI                            ; 00522d97
    MOV EBP,dword ptr [0x00622c18]      ; 00522d98 | g_CDemonSetPtr
    PUSH EBP                            ; 00522d9e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 00522d9f
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00522da4
    MOV EAX,dword ptr [ESP + 0x48]      ; 00522da7
    PUSH EAX                            ; 00522dab
    MOV EDX,dword ptr [0x00612560]      ; 00522dac | DAT_00612560
    PUSH EDX                            ; 00522db2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00522db3
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00522db8
    ADD ESP,0x60                        ; 00522dbb
    POP EBP                             ; 00522dbe
    POP EDI                             ; 00522dbf
    POP ESI                             ; 00522dc0
    POP EBX                             ; 00522dc1
    RET                                 ; 00522dc2

