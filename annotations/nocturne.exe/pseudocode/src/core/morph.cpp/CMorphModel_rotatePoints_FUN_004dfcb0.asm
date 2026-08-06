; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   blend_factor
; SMorphPoint *    Stack[0xc]:4   ref_points
; Local Variables:
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
;   core_morph.cpp_CMorphModel_render_FUN_004dfc70 at 004dfc8f
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0058ad2c
;   TerminatedCString s_CMorphModel_rotatePoints_0058ad3e
;   undefined4 DAT_005a0cc0
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cce554
;   undefined4 DAT_01cce558
;   undefined4 DAT_01cce55c
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfcb0
        ;   Label: core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0
    PUSH ESI                            ; 004dfcb1
    PUSH EDI                            ; 004dfcb2
    PUSH EBP                            ; 004dfcb3
    SUB ESP,0x34                        ; 004dfcb4
    MOV EAX,dword ptr [ESP + 0x48]      ; 004dfcb7
    CMP dword ptr [EAX + 0x54],0x7d0    ; 004dfcbb
    JG 0x004dfe0a                       ; 004dfcc2
        ;   XREF to: 004dfe0a (CONDITIONAL_JUMP)  ; LAB_004dfe0a
    FLD float ptr [ESP + 0x4c]          ; 004dfcc8
        ;   Label: LAB_004dfcc8
    MOV EDI,0xff                        ; 004dfccc
    FLD1                                ; 004dfcd1
    XOR ESI,ESI                         ; 004dfcd3
    MOV EAX,dword ptr [ESP + 0x48]      ; 004dfcd5
    MOV dword ptr [ESP + 0x24],ESI      ; 004dfcd9
    MOV dword ptr [ESP + 0x30],EDI      ; 004dfcdd
    MOV dword ptr [ESP + 0x2c],ESI      ; 004dfce1
    FSUBRP                              ; 004dfce5
    MOV EDX,dword ptr [EAX + 0x54]      ; 004dfce7
    FSTP float ptr [ESP + 0x28]         ; 004dfcea
    TEST EDX,EDX                        ; 004dfcee
    JLE 0x004dfdfa                      ; 004dfcf0
        ;   XREF to: 004dfdfa (CONDITIONAL_JUMP)  ; LAB_004dfdfa
    MOV ESI,0x1cce554                   ; 004dfcf6
    XOR EBP,EBP                         ; 004dfcfb
    XOR EDI,EDI                         ; 004dfcfd
    MOV EAX,dword ptr [ESP + 0x48]      ; 004dfcff
        ;   Label: LAB_004dfcff
    MOV EAX,dword ptr [EAX + 0x58]      ; 004dfd03
    MOV EAX,dword ptr [EAX + EBP*0x1]   ; 004dfd06
    MOV EDX,dword ptr [ESP + 0x50]      ; 004dfd09
    SHL EAX,0x4                         ; 004dfd0d
    ADD EAX,EDX                         ; 004dfd10
    FLD float ptr [ESP + 0x28]          ; 004dfd12
    FLD float ptr [EAX + 0x4]           ; 004dfd16
    FMUL ST1                            ; 004dfd19
    FSTP float ptr [ESP + 0xc]          ; 004dfd1b
    FLD float ptr [EAX + 0x8]           ; 004dfd1f
    FMUL ST1                            ; 004dfd22
    FSTP float ptr [ESP + 0x10]         ; 004dfd24
    FMUL float ptr [EAX + 0xc]          ; 004dfd28
    MOV EAX,dword ptr [ESP + 0x48]      ; 004dfd2b
    FSTP float ptr [ESP + 0x14]         ; 004dfd2f
    MOV EAX,dword ptr [EAX + 0x58]      ; 004dfd33
    FLD float ptr [ESP + 0x4c]          ; 004dfd36
    FLD float ptr [EAX + EBP*0x1 + 0x4] ; 004dfd3a
    FMUL ST1                            ; 004dfd3e
    FSTP float ptr [ESP + 0x18]         ; 004dfd40
    FLD float ptr [EAX + EBP*0x1 + 0x8] ; 004dfd44
    FMUL ST1                            ; 004dfd48
    FSTP float ptr [ESP + 0x1c]         ; 004dfd4a
    FMUL float ptr [EAX + EBP*0x1 + 0xc] ; 004dfd4e
    MOV EBX,ESI                         ; 004dfd52
    FLD float ptr [ESP + 0x18]          ; 004dfd54
    FADD float ptr [ESP + 0xc]          ; 004dfd58
    FLD float ptr [ESP + 0x1c]          ; 004dfd5c
    FXCH                                ; 004dfd60
    FSTP float ptr [ESP]                ; 004dfd62
    MOV EAX,ESP                         ; 004dfd65
    FADD float ptr [ESP + 0x10]         ; 004dfd67
    FXCH                                ; 004dfd6b
    FST float ptr [ESP + 0x20]          ; 004dfd6d
    FADD float ptr [ESP + 0x14]         ; 004dfd71
    FXCH                                ; 004dfd75
    FSTP float ptr [ESP + 0x4]          ; 004dfd77
    FSTP float ptr [ESP + 0x8]          ; 004dfd7b
    FLD float ptr [EAX]                 ; 004dfd7f
    FMUL float ptr [0x005a0cc0]         ; 004dfd81 | DAT_005a0cc0
    FISTP dword ptr [EBX]               ; 004dfd87 | DAT_01cce554
    FLD float ptr [EAX + 0x4]           ; 004dfd89
    FMUL float ptr [0x005a0cc0]         ; 004dfd8c | DAT_005a0cc0
    FISTP dword ptr [EBX + 0x4]         ; 004dfd92 | DAT_01cce558
    FLD float ptr [EAX + 0x8]           ; 004dfd95
    FMUL float ptr [0x005a0cc0]         ; 004dfd98 | DAT_005a0cc0
    FISTP dword ptr [EBX + 0x8]         ; 004dfd9e | DAT_01cce55c
    MOV EAX,[0x005ae704]                ; 004dfda1 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 004dfda6 | DAT_01b4d738
    PUSH ESI                            ; 004dfda8 | DAT_01cce554
    ADD EAX,EDI                         ; 004dfda9
    PUSH EAX                            ; 004dfdab
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004dfdac
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004dfdb1 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 004dfdb6 | DAT_01b4d738
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x10] ; 004dfdb8
    ADD ESP,0x8                         ; 004dfdbc
    TEST EAX,0x80000000                 ; 004dfdbf
    JZ 0x004dfe32                       ; 004dfdc4
        ;   XREF to: 004dfe32 (CONDITIONAL_JUMP)  ; LAB_004dfe32
    MOV EDX,dword ptr [ESP + 0x30]      ; 004dfdc6
    MOV EBX,0x1                         ; 004dfdca
    AND EDX,EAX                         ; 004dfdcf
    MOV dword ptr [ESP + 0x24],EBX      ; 004dfdd1
    MOV dword ptr [ESP + 0x30],EDX      ; 004dfdd5
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004dfdd9
        ;   Label: LAB_004dfdd9
    MOV EDX,dword ptr [ESP + 0x48]      ; 004dfddd
    ADD EDI,0x30                        ; 004dfde1
    ADD ESI,0xc                         ; 004dfde4
    ADD EBP,0x10                        ; 004dfde7
    INC ECX                             ; 004dfdea
    MOV EBX,dword ptr [EDX + 0x54]      ; 004dfdeb
    MOV dword ptr [ESP + 0x2c],ECX      ; 004dfdee
    CMP ECX,EBX                         ; 004dfdf2
    JL 0x004dfcff                       ; 004dfdf4
        ;   XREF to: 004dfcff (CONDITIONAL_JUMP)  ; LAB_004dfcff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004dfdfa
        ;   Label: LAB_004dfdfa
    TEST ESI,ESI                        ; 004dfdfe
    JZ 0x004dfe3a                       ; 004dfe00
        ;   XREF to: 004dfe3a (CONDITIONAL_JUMP)  ; LAB_004dfe3a
    ADD ESP,0x34                        ; 004dfe02
    POP EBP                             ; 004dfe05
    POP EDI                             ; 004dfe06
    POP ESI                             ; 004dfe07
    POP EBX                             ; 004dfe08
    RET                                 ; 004dfe09
    MOV ECX,0x58ad2c                    ; 004dfe0a | = "..\\core\\morph.cpp"
        ;   Label: LAB_004dfe0a
    MOV EBX,0x1f8                       ; 004dfe0f
    PUSH 0x58ad3e                       ; 004dfe14 | = "CMorphModel::rotatePoints - too many ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004dfe19 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 004dfe1f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004dfe25
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004dfe2a
    JMP 0x004dfcc8                      ; 004dfe2d
        ;   XREF to: 004dfcc8 (UNCONDITIONAL_JUMP)  ; LAB_004dfcc8
    XOR ECX,ECX                         ; 004dfe32
        ;   Label: LAB_004dfe32
    MOV dword ptr [ESP + 0x30],ECX      ; 004dfe34
    JMP 0x004dfdd9                      ; 004dfe38
        ;   XREF to: 004dfdd9 (UNCONDITIONAL_JUMP)  ; LAB_004dfdd9
    MOV EAX,dword ptr [ESP + 0x48]      ; 004dfe3a
        ;   Label: LAB_004dfe3a
    MOV EDI,dword ptr [EAX + 0x54]      ; 004dfe3e
    PUSH EDI                            ; 004dfe41
    MOV EBP,dword ptr [0x005be368]      ; 004dfe42 | g_CDemonSet_PTR_005be368
    PUSH EBP                            ; 004dfe48 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010 ; 004dfe49
        ;   XREF to: 0050c010 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 004dfe4e
    PUSH ESI                            ; 004dfe51
    PUSH 0x3                            ; 004dfe52
    MOV EAX,dword ptr [ESP + 0x50]      ; 004dfe54
    PUSH 0x1cce554                      ; 004dfe58 | DAT_01cce554
    MOV EDX,dword ptr [EAX + 0x60]      ; 004dfe5d
    PUSH EDX                            ; 004dfe60
    MOV ECX,dword ptr [EAX + 0x5c]      ; 004dfe61
    PUSH ECX                            ; 004dfe64
    MOV EBX,dword ptr [EAX + 0x54]      ; 004dfe65
    PUSH EBX                            ; 004dfe68
    MOV ESI,dword ptr [0x005be368]      ; 004dfe69 | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 004dfe6f | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 004dfe70
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 004dfe75
    MOV EDI,dword ptr [ESP + 0x24]      ; 004dfe78
    PUSH EDI                            ; 004dfe7c
    MOV EBP,dword ptr [0x005ae704]      ; 004dfe7d | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004dfe83 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 004dfe84
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004dfe89
    ADD ESP,0x34                        ; 004dfe8c
    POP EBP                             ; 004dfe8f
    POP EDI                             ; 004dfe90
    POP ESI                             ; 004dfe91
    POP EBX                             ; 004dfe92
    RET                                 ; 004dfe93

