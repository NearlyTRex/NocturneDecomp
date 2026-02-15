; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
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
;   core_morph.cpp_CMorphModel_FUN_0052af30 at 0052af4f
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a3f7
;   TerminatedCString s_CMorphModel_rotatePoints_0063a409
;   float FLOAT_00661b40 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f3dbb4
;   undefined4 DAT_02f3dbb8
;   undefined4 DAT_02f3dbbc
;   undefined4 DAT_02f3dbc0
;   undefined4 DAT_02f3dbc4
;   undefined4 DAT_02f3dbc8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_FUN_0056e5d0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052af70
        ;   Label: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
    PUSH ESI                            ; 0052af71
    PUSH EDI                            ; 0052af72
    PUSH EBP                            ; 0052af73
    SUB ESP,0x34                        ; 0052af74
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052af77
    CMP dword ptr [EAX + 0x54],0x7d0    ; 0052af7b
    JG 0x0052b0ca                       ; 0052af82
        ;   XREF to: 0052b0ca (CONDITIONAL_JUMP)  ; LAB_0052b0ca
    FLD float ptr [ESP + 0x4c]          ; 0052af88
        ;   Label: LAB_0052af88
    MOV EDI,0xff                        ; 0052af8c
    FLD1                                ; 0052af91
    XOR ESI,ESI                         ; 0052af93
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052af95
    MOV dword ptr [ESP + 0x24],ESI      ; 0052af99
    MOV dword ptr [ESP + 0x30],EDI      ; 0052af9d
    MOV dword ptr [ESP + 0x2c],ESI      ; 0052afa1
    FSUBRP                              ; 0052afa5
    MOV EDX,dword ptr [EAX + 0x54]      ; 0052afa7
    FSTP float ptr [ESP + 0x28]         ; 0052afaa
    TEST EDX,EDX                        ; 0052afae
    JLE 0x0052b0ba                      ; 0052afb0
        ;   XREF to: 0052b0ba (CONDITIONAL_JUMP)  ; LAB_0052b0ba
    MOV ESI,0x2f3dbb4                   ; 0052afb6 | DAT_02f3dbb4
    XOR EBP,EBP                         ; 0052afbb
    XOR EDI,EDI                         ; 0052afbd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052afbf
        ;   Label: LAB_0052afbf
    MOV EAX,dword ptr [EAX + 0x58]      ; 0052afc3
    MOV EAX,dword ptr [EAX + EBP*0x1]   ; 0052afc6
    MOV EDX,dword ptr [ESP + 0x50]      ; 0052afc9
    SHL EAX,0x4                         ; 0052afcd
    ADD EAX,EDX                         ; 0052afd0
    FLD float ptr [ESP + 0x28]          ; 0052afd2
    FLD float ptr [EAX + 0x4]           ; 0052afd6
    FMUL ST1                            ; 0052afd9
    FSTP float ptr [ESP + 0xc]          ; 0052afdb
    FLD float ptr [EAX + 0x8]           ; 0052afdf
    FMUL ST1                            ; 0052afe2
    FSTP float ptr [ESP + 0x10]         ; 0052afe4
    FMUL float ptr [EAX + 0xc]          ; 0052afe8
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052afeb
    FSTP float ptr [ESP + 0x14]         ; 0052afef
    MOV EAX,dword ptr [EAX + 0x58]      ; 0052aff3
    FLD float ptr [ESP + 0x4c]          ; 0052aff6
    FLD float ptr [EAX + EBP*0x1 + 0x4] ; 0052affa
    FMUL ST1                            ; 0052affe
    FSTP float ptr [ESP + 0x18]         ; 0052b000
    FLD float ptr [EAX + EBP*0x1 + 0x8] ; 0052b004
    FMUL ST1                            ; 0052b008
    FSTP float ptr [ESP + 0x1c]         ; 0052b00a
    FMUL float ptr [EAX + EBP*0x1 + 0xc] ; 0052b00e
    MOV EBX,ESI                         ; 0052b012 | DAT_02f3dbb4 | DAT_02f3dbc0
    FLD float ptr [ESP + 0x18]          ; 0052b014
    FADD float ptr [ESP + 0xc]          ; 0052b018
    FLD float ptr [ESP + 0x1c]          ; 0052b01c
    FXCH                                ; 0052b020
    FSTP float ptr [ESP]                ; 0052b022
    MOV EAX,ESP                         ; 0052b025
    FADD float ptr [ESP + 0x10]         ; 0052b027
    FXCH                                ; 0052b02b
    FST float ptr [ESP + 0x20]          ; 0052b02d
    FADD float ptr [ESP + 0x14]         ; 0052b031
    FXCH                                ; 0052b035
    FSTP float ptr [ESP + 0x4]          ; 0052b037
    FSTP float ptr [ESP + 0x8]          ; 0052b03b
    FLD float ptr [EAX]                 ; 0052b03f
    FMUL float ptr [0x00661b40]         ; 0052b041 | FLOAT_00661b40
    FISTP dword ptr [EBX]               ; 0052b047 | DAT_02f3dbb4 | DAT_02f3dbc0
    FLD float ptr [EAX + 0x4]           ; 0052b049
    FMUL float ptr [0x00661b40]         ; 0052b04c | FLOAT_00661b40
    FISTP dword ptr [EBX + 0x4]         ; 0052b052 | DAT_02f3dbb8 | DAT_02f3dbc4
    FLD float ptr [EAX + 0x8]           ; 0052b055
    FMUL float ptr [0x00661b40]         ; 0052b058 | FLOAT_00661b40
    FISTP dword ptr [EBX + 0x8]         ; 0052b05e | DAT_02f3dbbc | DAT_02f3dbc8
    MOV EAX,[0x006703ec]                ; 0052b061 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0052b066 | g_CDemonRendererInstance
    PUSH ESI                            ; 0052b068 | DAT_02f3dbb4 | DAT_02f3dbc0
    ADD EAX,EDI                         ; 0052b069
    PUSH EAX                            ; 0052b06b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0052b06c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0052b071 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0052b076 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x10] ; 0052b078
    ADD ESP,0x8                         ; 0052b07c
    TEST EAX,0x80000000                 ; 0052b07f
    JZ 0x0052b0f2                       ; 0052b084
        ;   XREF to: 0052b0f2 (CONDITIONAL_JUMP)  ; LAB_0052b0f2
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052b086
    MOV EBX,0x1                         ; 0052b08a
    AND EDX,EAX                         ; 0052b08f
    MOV dword ptr [ESP + 0x24],EBX      ; 0052b091
    MOV dword ptr [ESP + 0x30],EDX      ; 0052b095
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0052b099
        ;   Label: LAB_0052b099
    MOV EDX,dword ptr [ESP + 0x48]      ; 0052b09d
    ADD EDI,0x30                        ; 0052b0a1
    ADD ESI,0xc                         ; 0052b0a4
    ADD EBP,0x10                        ; 0052b0a7
    INC ECX                             ; 0052b0aa
    MOV EBX,dword ptr [EDX + 0x54]      ; 0052b0ab
    MOV dword ptr [ESP + 0x2c],ECX      ; 0052b0ae
    CMP ECX,EBX                         ; 0052b0b2
    JL 0x0052afbf                       ; 0052b0b4
        ;   XREF to: 0052afbf (CONDITIONAL_JUMP)  ; LAB_0052afbf
    MOV ESI,dword ptr [ESP + 0x30]      ; 0052b0ba
        ;   Label: LAB_0052b0ba
    TEST ESI,ESI                        ; 0052b0be
    JZ 0x0052b0fa                       ; 0052b0c0
        ;   XREF to: 0052b0fa (CONDITIONAL_JUMP)  ; LAB_0052b0fa
    ADD ESP,0x34                        ; 0052b0c2
    POP EBP                             ; 0052b0c5
    POP EDI                             ; 0052b0c6
    POP ESI                             ; 0052b0c7
    POP EBX                             ; 0052b0c8
    RET                                 ; 0052b0c9
    MOV ECX,0x63a3f7                    ; 0052b0ca | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052b0ca
    MOV EBX,0x1f8                       ; 0052b0cf
    PUSH 0x63a409                       ; 0052b0d4 | = "CMorphModel::rotatePoints - too many ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0052b0d9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0052b0df | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052b0e5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052b0ea
    JMP 0x0052af88                      ; 0052b0ed
        ;   XREF to: 0052af88 (UNCONDITIONAL_JUMP)  ; LAB_0052af88
    XOR ECX,ECX                         ; 0052b0f2
        ;   Label: LAB_0052b0f2
    MOV dword ptr [ESP + 0x30],ECX      ; 0052b0f4
    JMP 0x0052b099                      ; 0052b0f8
        ;   XREF to: 0052b099 (UNCONDITIONAL_JUMP)  ; LAB_0052b099
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052b0fa
        ;   Label: LAB_0052b0fa
    MOV EDI,dword ptr [EAX + 0x54]      ; 0052b0fe
    PUSH EDI                            ; 0052b101
    MOV EBP,dword ptr [0x006810c8]      ; 0052b102 | g_CDemonSetPtr
    PUSH EBP                            ; 0052b108 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056e5d0 ; 0052b109
        ;   XREF to: 0056e5d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056e5d0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0052b10e
    PUSH ESI                            ; 0052b111
    PUSH 0x3                            ; 0052b112
    MOV EAX,dword ptr [ESP + 0x50]      ; 0052b114
    PUSH 0x2f3dbb4                      ; 0052b118 | DAT_02f3dbb4
    MOV EDX,dword ptr [EAX + 0x60]      ; 0052b11d
    PUSH EDX                            ; 0052b120
    MOV ECX,dword ptr [EAX + 0x5c]      ; 0052b121
    PUSH ECX                            ; 0052b124
    MOV EBX,dword ptr [EAX + 0x54]      ; 0052b125
    PUSH EBX                            ; 0052b128
    MOV ESI,dword ptr [0x006810c8]      ; 0052b129 | g_CDemonSetPtr
    PUSH ESI                            ; 0052b12f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0052b130
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, ...)
    ADD ESP,0x1c                        ; 0052b135
    MOV EDI,dword ptr [ESP + 0x24]      ; 0052b138
    PUSH EDI                            ; 0052b13c
    MOV EBP,dword ptr [0x006703ec]      ; 0052b13d | g_CDemonRendererPtr2
    PUSH EBP                            ; 0052b143 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0052b144
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0052b149
    ADD ESP,0x34                        ; 0052b14c
    POP EBP                             ; 0052b14f
    POP EDI                             ; 0052b150
    POP ESI                             ; 0052b151
    POP EBX                             ; 0052b152
    RET                                 ; 0052b153

