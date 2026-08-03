; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
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
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280 at 00519a9b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591a9d
;   TerminatedCString s_CDeformableModel_compute_00591ab2
;   undefined4 DAT_005a1eb0
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ad20
        ;   Label: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20
    PUSH ESI                            ; 0051ad21
    PUSH EDI                            ; 0051ad22
    PUSH EBP                            ; 0051ad23
    SUB ESP,0x220                       ; 0051ad24
    MOV EBP,dword ptr [ESP + 0x234]     ; 0051ad2a
    CMP dword ptr [EBP + 0xc00],0x2     ; 0051ad31
    JGE 0x0051ad6b                      ; 0051ad38
        ;   XREF to: 0051ad6b (CONDITIONAL_JUMP)  ; LAB_0051ad6b
    MOV EAX,EBP                         ; 0051ad3a
    MOV dword ptr [EBP + 0xc60],0x0     ; 0051ad3c
    ADD EBP,0x190                       ; 0051ad46
    ADD EAX,0x4                         ; 0051ad4c
        ;   Label: LAB_0051ad4c
    MOV dword ptr [EAX + 0x26f8],0x0    ; 0051ad4f
    CMP EAX,EBP                         ; 0051ad59
    JNZ 0x0051ad4c                      ; 0051ad5b
        ;   XREF to: 0051ad4c (CONDITIONAL_JUMP)  ; LAB_0051ad4c
    LEA EAX,[EAX]                       ; 0051ad5d
    ADD ESP,0x220                       ; 0051ad60
        ;   Label: LAB_0051ad60
    POP EBP                             ; 0051ad66
    POP EDI                             ; 0051ad67
    POP ESI                             ; 0051ad68
    POP EBX                             ; 0051ad69
    RET                                 ; 0051ad6a
    PUSH EBP                            ; 0051ad6b
        ;   Label: LAB_0051ad6b
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0 ; 0051ad6c
        ;   XREF to: 005180a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0051ad71
    PUSH EBP                            ; 0051ad74
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 0051ad75
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0051ad7a
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0051ad7d
    PUSH 0x22b4                         ; 0051ad83
    MOV dword ptr [ESP + 0x210],EAX     ; 0051ad88
    CALL crt_unknown.c_FUN_0056497c     ; 0051ad8f
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0051ad94
    TEST EAX,EAX                        ; 0051ad97
    JZ 0x0051ada4                       ; 0051ad99
        ;   XREF to: 0051ada4 (CONDITIONAL_JUMP)  ; LAB_0051ada4
    PUSH EAX                            ; 0051ad9b
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 ; 0051ad9c
        ;   XREF to: 0051b660 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051ada1
    MOV dword ptr [ESP + 0x210],EAX     ; 0051ada4
        ;   Label: LAB_0051ada4
    TEST EAX,EAX                        ; 0051adab
    JNZ 0x0051add2                      ; 0051adad
        ;   XREF to: 0051add2 (CONDITIONAL_JUMP)  ; LAB_0051add2
    MOV ECX,0x591a9d                    ; 0051adaf | = "..\\core\\skeleton.cpp"
    MOV EBX,0x7d3                       ; 0051adb4
    PUSH 0x591ab2                       ; 0051adb9 | = "CDeformableModel::computePartDominant..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051adbe | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0051adc4 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051adca
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051adcf
    PUSH EBP                            ; 0051add2
        ;   Label: LAB_0051add2
    MOV ESI,dword ptr [ESP + 0x214]     ; 0051add3
    PUSH ESI                            ; 0051adda
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 ; 0051addb
        ;   XREF to: 0051dd00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0051ade0
    PUSH ESI                            ; 0051ade3
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 0051ade4
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051ade9
    PUSH ESI                            ; 0051adec
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 0051aded
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051adf2
    PUSH 0x0                            ; 0051adf5
    PUSH ESI                            ; 0051adf7
    XOR EBX,EBX                         ; 0051adf8
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 0051adfa
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0051adff
    MOV ESI,dword ptr [EBP + 0xc00]     ; 0051ae02
    MOV dword ptr [ESP + 0x1fc],EBX     ; 0051ae08
    TEST ESI,ESI                        ; 0051ae0f
    JLE 0x0051b183                      ; 0051ae11
        ;   XREF to: 0051b183 (CONDITIONAL_JUMP)  ; LAB_0051b183
    MOV dword ptr [ESP + 0x204],EBP     ; 0051ae17
    MOV EAX,dword ptr [ESP + 0x204]     ; 0051ae1e
        ;   Label: LAB_0051ae1e
    MOV EAX,dword ptr [EAX + 0xc24]     ; 0051ae25
    ADD EAX,EBX                         ; 0051ae2b
    MOV EDI,dword ptr [ESP + 0x20c]     ; 0051ae2d
    MOV dword ptr [ESP + 0x200],EAX     ; 0051ae34
    TEST EDI,EDI                        ; 0051ae3b
    JLE 0x0051ae55                      ; 0051ae3d
        ;   XREF to: 0051ae55 (CONDITIONAL_JUMP)  ; LAB_0051ae55
    LEA EDX,[EDI*0x4 + 0x0]             ; 0051ae3f
    XOR EAX,EAX                         ; 0051ae46
    ADD EAX,0x4                         ; 0051ae48
        ;   Label: LAB_0051ae48
    XOR ECX,ECX                         ; 0051ae4b
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 0051ae4d
    CMP EAX,EDX                         ; 0051ae51
    JL 0x0051ae48                       ; 0051ae53
        ;   XREF to: 0051ae48 (CONDITIONAL_JUMP)  ; LAB_0051ae48
    MOV ESI,dword ptr [ESP + 0x200]     ; 0051ae55
        ;   Label: LAB_0051ae55
    CMP EBX,ESI                         ; 0051ae5c
    JGE 0x0051b1f6                      ; 0051ae5e
        ;   XREF to: 0051b1f6 (CONDITIONAL_JUMP)  ; LAB_0051b1f6
    IMUL EBX,EBX,0x12                   ; 0051ae64
    IMUL EAX,ESI,0x12                   ; 0051ae67
    MOV dword ptr [ESP + 0x214],EBX     ; 0051ae6a
    MOV dword ptr [ESP + 0x208],EAX     ; 0051ae71
    MOV ESI,dword ptr [ESP + 0x214]     ; 0051ae78
        ;   Label: LAB_0051ae78
    MOV EDX,dword ptr [EBP + 0x7c]      ; 0051ae7f
    ADD EDX,ESI                         ; 0051ae82
    XOR EAX,EAX                         ; 0051ae84
    MOV AX,word ptr [EDX]               ; 0051ae86
    IMUL EAX,EAX,0xc                    ; 0051ae89
    MOV ECX,dword ptr [ESP + 0x210]     ; 0051ae8c
    MOV ECX,dword ptr [ECX + 0x2234]    ; 0051ae93
    LEA EBX,[ESP + 0x1e4]               ; 0051ae99
    ADD EAX,ECX                         ; 0051aea0
    FILD dword ptr [EAX]                ; 0051aea2
    FMUL float ptr [0x005a1eb0]         ; 0051aea4 | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051aeaa
    FILD dword ptr [EAX + 0x4]          ; 0051aeac
    FMUL float ptr [0x005a1eb0]         ; 0051aeaf | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051aeb5
    FILD dword ptr [EAX + 0x8]          ; 0051aeb8
    FMUL float ptr [0x005a1eb0]         ; 0051aebb | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051aec1
    XOR EAX,EAX                         ; 0051aec4
    MOV AX,word ptr [EDX + 0x2]         ; 0051aec6
    IMUL ECX,EAX,0xc                    ; 0051aeca
    MOV EAX,dword ptr [ESP + 0x210]     ; 0051aecd
    MOV EAX,dword ptr [EAX + 0x2234]    ; 0051aed4
    LEA EBX,[ESP + 0x1c0]               ; 0051aeda
    ADD EAX,ECX                         ; 0051aee1
    FILD dword ptr [EAX]                ; 0051aee3
    FMUL float ptr [0x005a1eb0]         ; 0051aee5 | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051aeeb
    FILD dword ptr [EAX + 0x4]          ; 0051aeed
    FMUL float ptr [0x005a1eb0]         ; 0051aef0 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051aef6
    FILD dword ptr [EAX + 0x8]          ; 0051aef9
    FMUL float ptr [0x005a1eb0]         ; 0051aefc | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051af02
    XOR EAX,EAX                         ; 0051af05
    MOV AX,word ptr [EDX + 0x4]         ; 0051af07
    IMUL ECX,EAX,0xc                    ; 0051af0b
    MOV EAX,dword ptr [ESP + 0x210]     ; 0051af0e
    MOV EAX,dword ptr [EAX + 0x2234]    ; 0051af15
    LEA EBX,[ESP + 0x1f0]               ; 0051af1b
    ADD EAX,ECX                         ; 0051af22
    FILD dword ptr [EAX]                ; 0051af24
    FMUL float ptr [0x005a1eb0]         ; 0051af26 | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051af2c
    FILD dword ptr [EAX + 0x4]          ; 0051af2e
    FMUL float ptr [0x005a1eb0]         ; 0051af31 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051af37
    FILD dword ptr [EAX + 0x8]          ; 0051af3a
    FMUL float ptr [0x005a1eb0]         ; 0051af3d | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051af43
    FLD float ptr [ESP + 0x1f0]         ; 0051af46
    FLD float ptr [ESP + 0x1f4]         ; 0051af4d
    FLD float ptr [ESP + 0x1f8]         ; 0051af54
    LEA ECX,[ESP + 0x1d8]               ; 0051af5b
    LEA EAX,[ESP + 0x190]               ; 0051af62
    FXCH ST2                            ; 0051af69
    FSUB float ptr [ESP + 0x1c0]        ; 0051af6b
    FXCH                                ; 0051af72
    FSUB float ptr [ESP + 0x1c4]        ; 0051af74
    FXCH ST2                            ; 0051af7b
    FSUB float ptr [ESP + 0x1c8]        ; 0051af7d
    FXCH                                ; 0051af84
    FSTP float ptr [ESP + 0x1d8]        ; 0051af86
    FXCH                                ; 0051af8d
    FSTP float ptr [ESP + 0x1dc]        ; 0051af8f
    FSTP float ptr [ESP + 0x1e0]        ; 0051af96
    CMP EAX,ECX                         ; 0051af9d
    JZ 0x0051afcb                       ; 0051af9f
        ;   XREF to: 0051afcb (CONDITIONAL_JUMP)  ; LAB_0051afcb
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0051afa1
    MOV dword ptr [ESP + 0x190],EAX     ; 0051afa8
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0051afaf
    MOV dword ptr [ESP + 0x194],EAX     ; 0051afb6
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0051afbd
    MOV dword ptr [ESP + 0x198],EAX     ; 0051afc4
    FLD float ptr [ESP + 0x1c0]         ; 0051afcb
        ;   Label: LAB_0051afcb
    FLD float ptr [ESP + 0x1c4]         ; 0051afd2
    FLD float ptr [ESP + 0x1c8]         ; 0051afd9
    LEA ECX,[ESP + 0x1b4]               ; 0051afe0
    LEA EAX,[ESP + 0x1a8]               ; 0051afe7
    FXCH ST2                            ; 0051afee
    FSUB float ptr [ESP + 0x1e4]        ; 0051aff0
    FXCH                                ; 0051aff7
    FSUB float ptr [ESP + 0x1e8]        ; 0051aff9
    FXCH ST2                            ; 0051b000
    FSUB float ptr [ESP + 0x1ec]        ; 0051b002
    FXCH ST2                            ; 0051b009
    FSTP float ptr [ESP + 0x1b8]        ; 0051b00b
    FXCH                                ; 0051b012
    FSTP float ptr [ESP + 0x1bc]        ; 0051b014
    FSTP float ptr [ESP + 0x1b4]        ; 0051b01b
    CMP EAX,ECX                         ; 0051b022
    JZ 0x0051b050                       ; 0051b024
        ;   XREF to: 0051b050 (CONDITIONAL_JUMP)  ; LAB_0051b050
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0051b026
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0051b02d
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0051b034
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0051b03b
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0051b042
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0051b049
    FLD float ptr [ESP + 0x194]         ; 0051b050
        ;   Label: LAB_0051b050
    FMUL float ptr [ESP + 0x1b0]        ; 0051b057
    FLD float ptr [ESP + 0x198]         ; 0051b05e
    FMUL float ptr [ESP + 0x1a8]        ; 0051b065
    FLD float ptr [ESP + 0x190]         ; 0051b06c
    FMUL float ptr [ESP + 0x1ac]        ; 0051b073
    FLD float ptr [ESP + 0x198]         ; 0051b07a
    FMUL float ptr [ESP + 0x1ac]        ; 0051b081
    FLD float ptr [ESP + 0x190]         ; 0051b088
    FMUL float ptr [ESP + 0x1b0]        ; 0051b08f
    FLD float ptr [ESP + 0x194]         ; 0051b096
    FMUL float ptr [ESP + 0x1a8]        ; 0051b09d
    LEA ECX,[ESP + 0x19c]               ; 0051b0a4
    LEA EAX,[ESP + 0x1cc]               ; 0051b0ab
    FXCH ST2                            ; 0051b0b2
    FSUBP ST5,ST0                       ; 0051b0b4
    FSUBP ST3,ST0                       ; 0051b0b6
    FSUBP                               ; 0051b0b8
    FXCH                                ; 0051b0ba
    FSTP float ptr [ESP + 0x1a0]        ; 0051b0bc
    FSTP float ptr [ESP + 0x1a4]        ; 0051b0c3
    FSTP float ptr [ESP + 0x19c]        ; 0051b0ca
    CMP EAX,ECX                         ; 0051b0d1
    JNZ 0x0051b233                      ; 0051b0d3
        ;   XREF to: 0051b233 (CONDITIONAL_JUMP)  ; LAB_0051b233
    FLD float ptr [ESP + 0x1d0]         ; 0051b0d9
        ;   Label: LAB_0051b0d9
    FMUL ST0                            ; 0051b0e0
    FLD float ptr [ESP + 0x1cc]         ; 0051b0e2
    FMUL ST0                            ; 0051b0e9
    FADDP                               ; 0051b0eb
    FLD float ptr [ESP + 0x1d4]         ; 0051b0ed
    FMUL ST0                            ; 0051b0f4
    FADDP                               ; 0051b0f6
    FSQRT                               ; 0051b0f8
    MOV EDI,EDX                         ; 0051b0fa
    ADD EDX,0x6                         ; 0051b0fc
    MOV dword ptr [ESP + 0x218],EDX     ; 0051b0ff
    FSTP float ptr [ESP + 0x21c]        ; 0051b106
    XOR ESI,ESI                         ; 0051b10d
        ;   Label: LAB_0051b10d
    MOV SI,word ptr [EDI]               ; 0051b10f
    IMUL ESI,ESI,0x34                   ; 0051b112
    MOV EAX,dword ptr [EBP + 0x40]      ; 0051b115
    ADD ESI,EAX                         ; 0051b118
    XOR ECX,ECX                         ; 0051b11a
    MOV EAX,ESI                         ; 0051b11c
    MOV EDX,ESI                         ; 0051b11e
    XOR EBX,EBX                         ; 0051b120
        ;   Label: LAB_0051b120
    MOV BL,byte ptr [ESI]               ; 0051b122
    CMP ECX,EBX                         ; 0051b124
    JGE 0x0051b262                      ; 0051b126
        ;   XREF to: 0051b262 (CONDITIONAL_JUMP)  ; LAB_0051b262
    FLD float ptr [EAX + 0x4]           ; 0051b12c
    XOR EBX,EBX                         ; 0051b12f
    FMUL float ptr [ESP + 0x21c]        ; 0051b131
    MOV BL,byte ptr [EDX + 0x1]         ; 0051b138
    ADD EAX,0x4                         ; 0051b13b
    INC EDX                             ; 0051b13e
    FADD float ptr [ESP + EBX*0x4]      ; 0051b13f
    INC ECX                             ; 0051b142
    FSTP float ptr [ESP + EBX*0x4]      ; 0051b143
    JMP 0x0051b120                      ; 0051b146
        ;   XREF to: 0051b120 (UNCONDITIONAL_JUMP)  ; LAB_0051b120
    MOV EAX,dword ptr [ESP + 0x204]     ; 0051b148
        ;   Label: LAB_0051b148
    MOV dword ptr [EAX + 0xc60],EDI     ; 0051b14f
    LEA EDI,[EAX + 0x60]                ; 0051b155
    MOV EBX,dword ptr [ESP + 0x200]     ; 0051b158
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0051b15f
    MOV EDX,dword ptr [EBP + 0xc00]     ; 0051b166
    INC EAX                             ; 0051b16c
    MOV dword ptr [ESP + 0x204],EDI     ; 0051b16d
    MOV dword ptr [ESP + 0x1fc],EAX     ; 0051b174
    CMP EAX,EDX                         ; 0051b17b
    JL 0x0051ae1e                       ; 0051b17d
        ;   XREF to: 0051ae1e (CONDITIONAL_JUMP)  ; LAB_0051ae1e
    MOV ECX,dword ptr [ESP + 0x210]     ; 0051b183
        ;   Label: LAB_0051b183
    TEST ECX,ECX                        ; 0051b18a
    JZ 0x0051b199                       ; 0051b18c
        ;   XREF to: 0051b199 (CONDITIONAL_JUMP)  ; LAB_0051b199
    PUSH 0x2                            ; 0051b18e
    MOV EAX,dword ptr [ECX + 0x50]      ; 0051b190
    PUSH ECX                            ; 0051b193
    CALL dword ptr [EAX]                ; 0051b194
    ADD ESP,0x8                         ; 0051b196
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0051b199
        ;   Label: LAB_0051b199
    XOR EBX,EBX                         ; 0051b1a0
    TEST ESI,ESI                        ; 0051b1a2
    JLE 0x0051ad60                      ; 0051b1a4
        ;   XREF to: 0051ad60 (CONDITIONAL_JUMP)  ; LAB_0051ad60
    MOV ESI,EBP                         ; 0051b1aa
    PUSH EBX                            ; 0051b1ac
        ;   Label: LAB_0051b1ac
    PUSH EBP                            ; 0051b1ad
    CALL core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0 ; 0051b1ae
        ;   XREF to: 00519be0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(CDeformableModel * this_ptr, int bone_index)
    INC EBX                             ; 0051b1b3
    ADD ESP,0x8                         ; 0051b1b4
    MOV dword ptr [ESI + 0x26fc],EAX    ; 0051b1b7
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0051b1bd
    ADD ESI,0x4                         ; 0051b1c4
    CMP EBX,EAX                         ; 0051b1c7
    JL 0x0051b1ac                       ; 0051b1c9
        ;   XREF to: 0051b1ac (CONDITIONAL_JUMP)  ; LAB_0051b1ac
    ADD ESP,0x220                       ; 0051b1cb
    POP EBP                             ; 0051b1d1
    POP EDI                             ; 0051b1d2
    POP ESI                             ; 0051b1d3
    POP EBX                             ; 0051b1d4
    RET                                 ; 0051b1d5
    MOV EDI,dword ptr [ESP + 0x214]     ; 0051b1d6
        ;   Label: LAB_0051b1d6
    ADD EDI,0x12                        ; 0051b1dd
    MOV EDX,dword ptr [ESP + 0x208]     ; 0051b1e0
    MOV dword ptr [ESP + 0x214],EDI     ; 0051b1e7
    CMP EDI,EDX                         ; 0051b1ee
    JL 0x0051ae78                       ; 0051b1f0
        ;   XREF to: 0051ae78 (CONDITIONAL_JUMP)  ; LAB_0051ae78
    MOV EBX,0x1                         ; 0051b1f6
        ;   Label: LAB_0051b1f6
    MOV ECX,dword ptr [ESP + 0x20c]     ; 0051b1fb
    XOR EDI,EDI                         ; 0051b202
    CMP ECX,EBX                         ; 0051b204
    JLE 0x0051b148                      ; 0051b206
        ;   XREF to: 0051b148 (CONDITIONAL_JUMP)  ; LAB_0051b148
    MOV EDX,0x4                         ; 0051b20c
    FLD float ptr [ESP + EDX*0x1]       ; 0051b211
        ;   Label: LAB_0051b211
    FCOMP float ptr [ESP + EDI*0x4]     ; 0051b214
    FNSTSW AX                           ; 0051b217
    SAHF                                ; 0051b219
    JBE 0x0051b21e                      ; 0051b21a
        ;   XREF to: 0051b21e (CONDITIONAL_JUMP)  ; LAB_0051b21e
    MOV EDI,EBX                         ; 0051b21c
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0051b21e
        ;   Label: LAB_0051b21e
    INC EBX                             ; 0051b225
    ADD EDX,0x4                         ; 0051b226
    CMP EBX,EAX                         ; 0051b229
    JGE 0x0051b148                      ; 0051b22b
        ;   XREF to: 0051b148 (CONDITIONAL_JUMP)  ; LAB_0051b148
    JMP 0x0051b211                      ; 0051b231
        ;   XREF to: 0051b211 (UNCONDITIONAL_JUMP)  ; LAB_0051b211
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0051b233
        ;   Label: LAB_0051b233
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0051b23a
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0051b241
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0051b248
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0051b24f
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0051b256
    JMP 0x0051b0d9                      ; 0051b25d
        ;   XREF to: 0051b0d9 (UNCONDITIONAL_JUMP)  ; LAB_0051b0d9
    MOV EDX,dword ptr [ESP + 0x218]     ; 0051b262
        ;   Label: LAB_0051b262
    ADD EDI,0x2                         ; 0051b269
    CMP EDI,EDX                         ; 0051b26c
    JZ 0x0051b1d6                       ; 0051b26e
        ;   XREF to: 0051b1d6 (CONDITIONAL_JUMP)  ; LAB_0051b1d6
    JMP 0x0051b10d                      ; 0051b274
        ;   XREF to: 0051b10d (UNCONDITIONAL_JUMP)  ; LAB_0051b10d

