; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370 at 0047c460
;   core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0 at 0047c2db
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479eec
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 at 00476e95
;   core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220 at 0047c229
;   core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470 at 0047c476
;   core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0 at 0047c4f7
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d53e
;
; Referenced Globals:
;   double g_FixedPointScale = 0.00390625
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478010
        ;   Label: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
    PUSH ESI                            ; 00478011
    PUSH EDI                            ; 00478012
    PUSH EBP                            ; 00478013
    SUB ESP,0x18                        ; 00478014
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00478017
    XOR EDX,EDX                         ; 0047801b
    MOV ECX,dword ptr [EBP + 0x100]     ; 0047801d
    MOV dword ptr [ESP + 0x10],EDX      ; 00478023
    TEST ECX,ECX                        ; 00478027
    JLE 0x00478168                      ; 00478029 | LAB_00478168
        ;   XREF to: 00478168 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x5678]              ; 0047802f
    MOV dword ptr [ESP + 0xc],EDX       ; 00478035
    MOV dword ptr [ESP + 0x14],EAX      ; 00478039
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047803d
        ;   Label: LAB_0047803d
    IMUL EAX,dword ptr [EBP + 0x104]    ; 00478041
    IMUL EAX,EAX,0xc                    ; 00478048
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047804b
    MOV EDI,dword ptr [EBP + 0x5690]    ; 0047804f
    ADD EDI,EBX                         ; 00478055
    MOV EBX,dword ptr [EBP + 0x10c]     ; 00478057
    ADD EBX,EAX                         ; 0047805d
    FLD double ptr [0x0061f79b]         ; 0047805f | double g_FixedPointScale
    FILD dword ptr [EBX]                ; 00478065
    FMUL ST1                            ; 00478067
    FSTP float ptr [ESP]                ; 00478069
    FILD dword ptr [EBX + 0x4]          ; 0047806c
    FMUL ST1                            ; 0047806f
    FSTP float ptr [ESP + 0x4]          ; 00478071
    FILD dword ptr [EBX + 0x8]          ; 00478075
    FMULP                               ; 00478078
    MOV ESI,EDI                         ; 0047807a
    MOV EAX,ESP                         ; 0047807c
    FSTP float ptr [ESP + 0x8]          ; 0047807e
    CMP EDI,EAX                         ; 00478082
    JNZ 0x00478170                      ; 00478084 | LAB_00478170
        ;   XREF to: 00478170 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0047808a
        ;   Label: LAB_0047808a
    ADD ESI,0xc                         ; 0047808c
    CMP ESI,EAX                         ; 0047808f
    JZ 0x004780a6                       ; 00478091 | LAB_004780a6
        ;   XREF to: 004780a6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00478093
    MOV dword ptr [ESI],EAX             ; 00478096
    MOV EAX,dword ptr [ESP + 0x4]       ; 00478098
    MOV dword ptr [ESI + 0x4],EAX       ; 0047809c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047809f
    MOV dword ptr [ESI + 0x8],EAX       ; 004780a3
    MOV ESI,0x1                         ; 004780a6
        ;   Label: LAB_004780a6
    CMP ESI,dword ptr [EBP + 0x104]     ; 004780ab
    JGE 0x004780f3                      ; 004780b1 | LAB_004780f3
        ;   XREF to: 004780f3 (CONDITIONAL_JUMP)
    FILD dword ptr [EBX + 0xc]          ; 004780b3
        ;   Label: LAB_004780b3
    FMUL double ptr [0x0061f79b]        ; 004780b6 | double g_FixedPointScale
    FSTP float ptr [ESP]                ; 004780bc
    FILD dword ptr [EBX + 0x10]         ; 004780bf
    FMUL double ptr [0x0061f79b]        ; 004780c2 | double g_FixedPointScale
    MOV EAX,ESP                         ; 004780c8
    FSTP float ptr [ESP + 0x4]          ; 004780ca
    FILD dword ptr [EBX + 0x14]         ; 004780ce
    FMUL double ptr [0x0061f79b]        ; 004780d1 | double g_FixedPointScale
    PUSH EAX                            ; 004780d7
    ADD EBX,0xc                         ; 004780d8
    INC ESI                             ; 004780db
    PUSH EDI                            ; 004780dc
    FSTP float ptr [ESP + 0x10]         ; 004780dd
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 004780e1 | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP + 0x104]     ; 004780e6
    ADD ESP,0x8                         ; 004780ec
    CMP ESI,EDX                         ; 004780ef
    JL 0x004780b3                       ; 004780f1 | LAB_004780b3
        ;   XREF to: 004780b3 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x10],0x0      ; 004780f3
        ;   Label: LAB_004780f3
    JNZ 0x0047812b                      ; 004780f8 | LAB_0047812b
        ;   XREF to: 0047812b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 004780fa
    MOV EBX,EDI                         ; 004780fe
    CMP EDI,EAX                         ; 00478100
    JZ 0x00478114                       ; 00478102 | LAB_00478114
        ;   XREF to: 00478114 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI]             ; 00478104
    MOV dword ptr [EAX],EDX             ; 00478106
    MOV EDX,dword ptr [EDI + 0x4]       ; 00478108
    MOV dword ptr [EAX + 0x4],EDX       ; 0047810b
    MOV EDX,dword ptr [EDI + 0x8]       ; 0047810e
    MOV dword ptr [EAX + 0x8],EDX       ; 00478111
    ADD EAX,0xc                         ; 00478114
        ;   Label: LAB_00478114
    CMP EAX,EBX                         ; 00478117
    JZ 0x0047812b                       ; 00478119 | LAB_0047812b
        ;   XREF to: 0047812b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX]             ; 0047811b
    MOV dword ptr [EAX],EDX             ; 0047811d
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047811f
    MOV dword ptr [EAX + 0x4],EDX       ; 00478122
    MOV EDX,dword ptr [EBX + 0x8]       ; 00478125
    MOV dword ptr [EAX + 0x8],EDX       ; 00478128
    PUSH EDI                            ; 0047812b
        ;   Label: LAB_0047812b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047812c
    PUSH EBX                            ; 00478130
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00478131 | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478136
    ADD EDI,0xc                         ; 00478139
    PUSH EDI                            ; 0047813c
    PUSH EBX                            ; 0047813d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0047813e | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478143
    MOV EDX,dword ptr [EBP + 0x100]     ; 00478146
    MOV EDI,dword ptr [ESP + 0xc]       ; 0047814c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00478150
    ADD EDI,0x18                        ; 00478154
    INC EAX                             ; 00478157
    MOV dword ptr [ESP + 0xc],EDI       ; 00478158
    MOV dword ptr [ESP + 0x10],EAX      ; 0047815c
    CMP EAX,EDX                         ; 00478160
    JL 0x0047803d                       ; 00478162 | LAB_0047803d
        ;   XREF to: 0047803d (CONDITIONAL_JUMP)
    ADD ESP,0x18                        ; 00478168
        ;   Label: LAB_00478168
    POP EBP                             ; 0047816b
    POP EDI                             ; 0047816c
    POP ESI                             ; 0047816d
    POP EBX                             ; 0047816e
    RET                                 ; 0047816f
    MOV EAX,dword ptr [ESP]             ; 00478170
        ;   Label: LAB_00478170
    MOV dword ptr [EDI],EAX             ; 00478173
    MOV EAX,dword ptr [ESP + 0x4]       ; 00478175
    MOV dword ptr [EDI + 0x4],EAX       ; 00478179
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047817c
    MOV dword ptr [EDI + 0x8],EAX       ; 00478180
    JMP 0x0047808a                      ; 00478183 | LAB_0047808a
        ;   XREF to: 0047808a (UNCONDITIONAL_JUMP)

