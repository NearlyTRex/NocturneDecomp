; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_005b6a50(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)
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
;   core_morph.cpp_CMorphModel_render_FUN_005b6a10 at 005b6a2f
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f177f
;   TerminatedCString s_CMorphModel_rotatePoints_005f1791
;   undefined4 DAT_006013a0
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0267a38c
;   undefined4 DAT_0267a390
;   undefined4 DAT_0267a394
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00532190
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6a50
        ;   Label: core_morph.cpp_CMorphModel_rotatePoints_FUN_005b6a50
    PUSH ESI                            ; 005b6a51
    PUSH EDI                            ; 005b6a52
    PUSH EBP                            ; 005b6a53
    SUB ESP,0x60                        ; 005b6a54
    MOV EAX,dword ptr [ESP + 0x74]      ; 005b6a57
    CMP dword ptr [EAX + 0x54],0x7d0    ; 005b6a5b
    JG 0x005b6bf9                       ; 005b6a62
        ;   XREF to: 005b6bf9 (CONDITIONAL_JUMP)  ; LAB_005b6bf9
    FLD float ptr [ESP + 0x78]          ; 005b6a68
        ;   Label: LAB_005b6a68
    MOV EDI,0xff                        ; 005b6a6c
    FLD1                                ; 005b6a71
    XOR ESI,ESI                         ; 005b6a73
    MOV EAX,dword ptr [ESP + 0x74]      ; 005b6a75
    MOV dword ptr [ESP + 0x48],ESI      ; 005b6a79
    MOV dword ptr [ESP + 0x58],EDI      ; 005b6a7d
    MOV dword ptr [ESP + 0x4c],ESI      ; 005b6a81
    FSUBRP                              ; 005b6a85
    MOV EDX,dword ptr [EAX + 0x54]      ; 005b6a87
    FSTP float ptr [ESP + 0x54]         ; 005b6a8a
    TEST EDX,EDX                        ; 005b6a8e
    JLE 0x005b6be9                      ; 005b6a90
        ;   XREF to: 005b6be9 (CONDITIONAL_JUMP)  ; LAB_005b6be9
    MOV EBP,0x267a38c                   ; 005b6a96
    MOV dword ptr [ESP + 0x50],ESI      ; 005b6a9b
    MOV dword ptr [ESP + 0x5c],ESI      ; 005b6a9f
    MOV EDX,dword ptr [ESP + 0x74]      ; 005b6aa3
        ;   Label: LAB_005b6aa3
    MOV ESI,dword ptr [ESP + 0x50]      ; 005b6aa7
    MOV EDX,dword ptr [EDX + 0x58]      ; 005b6aab
    ADD EDX,ESI                         ; 005b6aae
    MOV EAX,dword ptr [EDX]             ; 005b6ab0
    MOV EDI,dword ptr [ESP + 0x7c]      ; 005b6ab2
    SHL EAX,0x4                         ; 005b6ab6
    ADD EAX,EDI                         ; 005b6ab9
    FLD float ptr [ESP + 0x54]          ; 005b6abb
    FLD float ptr [EAX + 0x4]           ; 005b6abf
    FMUL ST1                            ; 005b6ac2
    FLD float ptr [EAX + 0x8]           ; 005b6ac4
    FMUL ST2                            ; 005b6ac7
    FLD float ptr [EAX + 0xc]           ; 005b6ac9
    FMULP ST3                           ; 005b6acc
    LEA ESI,[ESP + 0x3c]                ; 005b6ace
    LEA EDI,[ESP + 0xc]                 ; 005b6ad2
    LEA EAX,[EDX + 0x4]                 ; 005b6ad6
    FXCH                                ; 005b6ad9
    FSTP float ptr [ESP + 0x3c]         ; 005b6adb
    FSTP float ptr [ESP + 0x40]         ; 005b6adf
    FSTP float ptr [ESP + 0x44]         ; 005b6ae3
    MOVSD ES:EDI,ESI                    ; 005b6ae7
    MOVSD ES:EDI,ESI                    ; 005b6ae8
    MOVSD ES:EDI,ESI                    ; 005b6ae9
    FLD float ptr [ESP + 0x78]          ; 005b6aea
    FLD float ptr [EAX]                 ; 005b6aee
    FMUL ST1                            ; 005b6af0
    FLD float ptr [EAX + 0x4]           ; 005b6af2
    FMUL ST2                            ; 005b6af5
    FLD float ptr [EAX + 0x8]           ; 005b6af7
    FMULP ST3                           ; 005b6afa
    MOV EBX,EBP                         ; 005b6afc
    MOV EDI,ESP                         ; 005b6afe
    LEA ESI,[ESP + 0x30]                ; 005b6b00
    FXCH                                ; 005b6b04
    FSTP float ptr [ESP + 0x30]         ; 005b6b06
    FSTP float ptr [ESP + 0x34]         ; 005b6b0a
    FSTP float ptr [ESP + 0x38]         ; 005b6b0e
    MOVSD ES:EDI,ESI                    ; 005b6b12
    MOVSD ES:EDI,ESI                    ; 005b6b13
    MOVSD ES:EDI,ESI                    ; 005b6b14
    LEA EAX,[ESP + 0x18]                ; 005b6b15
    FLD float ptr [ESP]                 ; 005b6b19
    FLD float ptr [ESP + 0x4]           ; 005b6b1c
    FLD float ptr [ESP + 0x8]           ; 005b6b20
    LEA EDI,[ESP + 0x18]                ; 005b6b24
    LEA ESI,[ESP + 0x24]                ; 005b6b28
    FXCH ST2                            ; 005b6b2c
    FADD float ptr [ESP + 0xc]          ; 005b6b2e
    FXCH                                ; 005b6b32
    FADD float ptr [ESP + 0x10]         ; 005b6b34
    FXCH ST2                            ; 005b6b38
    FADD float ptr [ESP + 0x14]         ; 005b6b3a
    FXCH                                ; 005b6b3e
    FSTP float ptr [ESP + 0x24]         ; 005b6b40
    FXCH                                ; 005b6b44
    FSTP float ptr [ESP + 0x28]         ; 005b6b46
    FSTP float ptr [ESP + 0x2c]         ; 005b6b4a
    MOVSD ES:EDI,ESI                    ; 005b6b4e
    MOVSD ES:EDI,ESI                    ; 005b6b4f
    MOVSD ES:EDI,ESI                    ; 005b6b50
    FLD float ptr [EAX]                 ; 005b6b51
    FMUL float ptr [0x006013a0]         ; 005b6b53 | DAT_006013a0
    FISTP dword ptr [EBX]               ; 005b6b59 | DAT_0267a38c
    FLD float ptr [EAX + 0x4]           ; 005b6b5b
    FMUL float ptr [0x006013a0]         ; 005b6b5e | DAT_006013a0
    FISTP dword ptr [EBX + 0x4]         ; 005b6b64 | DAT_0267a390
    FLD float ptr [EAX + 0x8]           ; 005b6b67
    FMUL float ptr [0x006013a0]         ; 005b6b6a | DAT_006013a0
    FISTP dword ptr [EBX + 0x8]         ; 005b6b70 | DAT_0267a394
    MOV EAX,[0x0060b280]                ; 005b6b73 | DAT_0060b280
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005b6b78
    MOV EAX,dword ptr [EAX]             ; 005b6b7c | DAT_01ba5c50
    PUSH EBP                            ; 005b6b7e | DAT_0267a38c
    ADD EAX,EDX                         ; 005b6b7f
    PUSH EAX                            ; 005b6b81
    CALL engine_special.cpp_FUN_0055d723 ; 005b6b82
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005b6b87
    MOV EAX,[0x0060b280]                ; 005b6b8a | DAT_0060b280
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005b6b8f
    MOV EAX,dword ptr [EAX]             ; 005b6b93 | DAT_01ba5c50
    ADD EAX,ECX                         ; 005b6b95
    MOV EAX,dword ptr [EAX + 0x10]      ; 005b6b97
    TEST EAX,0x80000000                 ; 005b6b9a
    JZ 0x005b6c21                       ; 005b6b9f
        ;   XREF to: 005b6c21 (CONDITIONAL_JUMP)  ; LAB_005b6c21
    MOV EDI,dword ptr [ESP + 0x58]      ; 005b6ba5
    MOV ESI,0x1                         ; 005b6ba9
    AND EDI,EAX                         ; 005b6bae
    MOV dword ptr [ESP + 0x48],ESI      ; 005b6bb0
    MOV dword ptr [ESP + 0x58],EDI      ; 005b6bb4
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005b6bb8
        ;   Label: LAB_005b6bb8
    MOV EBX,dword ptr [ESP + 0x50]      ; 005b6bbc
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005b6bc0
    MOV EDX,dword ptr [ESP + 0x74]      ; 005b6bc4
    ADD EBP,0xc                         ; 005b6bc8
    ADD ECX,0x30                        ; 005b6bcb
    ADD EBX,0x10                        ; 005b6bce
    INC ESI                             ; 005b6bd1
    MOV EDI,dword ptr [EDX + 0x54]      ; 005b6bd2
    MOV dword ptr [ESP + 0x5c],ECX      ; 005b6bd5
    MOV dword ptr [ESP + 0x50],EBX      ; 005b6bd9
    MOV dword ptr [ESP + 0x4c],ESI      ; 005b6bdd
    CMP ESI,EDI                         ; 005b6be1
    JL 0x005b6aa3                       ; 005b6be3
        ;   XREF to: 005b6aa3 (CONDITIONAL_JUMP)  ; LAB_005b6aa3
    MOV EBP,dword ptr [ESP + 0x58]      ; 005b6be9
        ;   Label: LAB_005b6be9
    TEST EBP,EBP                        ; 005b6bed
    JZ 0x005b6c29                       ; 005b6bef
        ;   XREF to: 005b6c29 (CONDITIONAL_JUMP)  ; LAB_005b6c29
    ADD ESP,0x60                        ; 005b6bf1
    POP EBP                             ; 005b6bf4
    POP EDI                             ; 005b6bf5
    POP ESI                             ; 005b6bf6
    POP EBX                             ; 005b6bf7
    RET                                 ; 005b6bf8
    MOV ECX,0x5f177f                    ; 005b6bf9 | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b6bf9
    MOV EBX,0x1f8                       ; 005b6bfe
    PUSH 0x5f1791                       ; 005b6c03 | = "CMorphModel::rotatePoints - too many ..."
    MOV dword ptr [0x01d046a0],ECX      ; 005b6c08 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005b6c0e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b6c14
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b6c19
    JMP 0x005b6a68                      ; 005b6c1c
        ;   XREF to: 005b6a68 (UNCONDITIONAL_JUMP)  ; LAB_005b6a68
    XOR EBX,EBX                         ; 005b6c21
        ;   Label: LAB_005b6c21
    MOV dword ptr [ESP + 0x58],EBX      ; 005b6c23
    JMP 0x005b6bb8                      ; 005b6c27
        ;   XREF to: 005b6bb8 (UNCONDITIONAL_JUMP)  ; LAB_005b6bb8
    MOV EAX,dword ptr [ESP + 0x74]      ; 005b6c29
        ;   Label: LAB_005b6c29
    MOV EDX,dword ptr [EAX + 0x54]      ; 005b6c2d
    PUSH EDX                            ; 005b6c30
    MOV ECX,dword ptr [0x0061b5a8]      ; 005b6c31 | g_CDemonSetPtr
    PUSH ECX                            ; 005b6c37 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0 ; 005b6c38
        ;   XREF to: 00531ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 005b6c3d
    PUSH EBP                            ; 005b6c40
    PUSH 0x3                            ; 005b6c41
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005b6c43
    PUSH 0x267a38c                      ; 005b6c47 | DAT_0267a38c
    MOV EBX,dword ptr [EAX + 0x60]      ; 005b6c4c
    PUSH EBX                            ; 005b6c4f
    MOV ESI,dword ptr [EAX + 0x5c]      ; 005b6c50
    PUSH ESI                            ; 005b6c53
    MOV EDI,dword ptr [EAX + 0x54]      ; 005b6c54
    PUSH EDI                            ; 005b6c57
    MOV EBP,dword ptr [0x0061b5a8]      ; 005b6c58 | g_CDemonSetPtr
    PUSH EBP                            ; 005b6c5e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00532190 ; 005b6c5f
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00532190(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 005b6c64
    MOV EAX,dword ptr [ESP + 0x48]      ; 005b6c67
    PUSH EAX                            ; 005b6c6b
    MOV EDX,dword ptr [0x0060b280]      ; 005b6c6c | DAT_0060b280
    PUSH EDX                            ; 005b6c72 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 005b6c73
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005b6c78
    ADD ESP,0x60                        ; 005b6c7b
    POP EBP                             ; 005b6c7e
    POP EDI                             ; 005b6c7f
    POP ESI                             ; 005b6c80
    POP EBX                             ; 005b6c81
    RET                                 ; 005b6c82

