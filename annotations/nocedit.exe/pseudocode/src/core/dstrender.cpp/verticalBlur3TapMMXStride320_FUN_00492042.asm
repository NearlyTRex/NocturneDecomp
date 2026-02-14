; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00492042(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0 at 00450a75
;
; Referenced Globals:
;   ulonglong g_FilterBlendConstant = 0x0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00492042
        ;   Label: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042
    MOV EBP,ESP                         ; 00492043
    PUSH ESI                            ; 00492045
    PUSH EDI                            ; 00492046
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492047
    MOV EDI,dword ptr [EBP + 0x8]       ; 0049204a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0049204d
    MOVQ MM0,qword ptr [ESI + 0xfffffec0] ; 00492050
    MOVQ MM2,qword ptr [ESI]            ; 00492057
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 0049205a
    PUNPCKLBW MM0,dword ptr [0x00676438] ; 00492061 | g_FilterBlendConstant
    PUNPCKLBW MM2,dword ptr [0x00676438] ; 00492068 | g_FilterBlendConstant
    PUNPCKLBW MM3,dword ptr [0x00676438] ; 0049206f | g_FilterBlendConstant
    PADDUSW MM0,MM2                     ; 00492076
    PADDUSW MM2,MM3                     ; 00492079
    PADDUSW MM0,MM2                     ; 0049207c
    MOVQ MM1,qword ptr [ESI + 0xfffffeb8] ; 0049207f
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00492086
    MOVQ MM3,qword ptr [ESI + 0x138]    ; 0049208a
    PUNPCKHBW MM1,qword ptr [0x00676438] ; 00492091 | g_FilterBlendConstant
    PUNPCKHBW MM2,qword ptr [0x00676438] ; 00492098 | g_FilterBlendConstant
    PUNPCKHBW MM3,qword ptr [0x00676438] ; 0049209f | g_FilterBlendConstant
    PADDUSW MM1,MM2                     ; 004920a6
    PADDUSW MM2,MM3                     ; 004920a9
    PADDUSW MM1,MM2                     ; 004920ac
    PSRLQ MM1,0x30                      ; 004920af
    MOVQ MM6,MM0                        ; 004920b3
        ;   Label: LAB_004920b3
    MOVQ MM5,MM0                        ; 004920b6
    PADDUSW MM1,MM0                     ; 004920b9
    PSLLQ MM6,0x10                      ; 004920bc
    PSRLQ MM5,0x10                      ; 004920c0
    PADDUSW MM5,MM0                     ; 004920c4
    PADDUSW MM6,MM1                     ; 004920c7
    MOVQ MM1,qword ptr [ESI + 0xfffffec0] ; 004920ca
    MOVQ MM2,qword ptr [ESI]            ; 004920d1
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 004920d4
    PUNPCKHBW MM1,qword ptr [0x00676438] ; 004920db | g_FilterBlendConstant
    PUNPCKHBW MM2,qword ptr [0x00676438] ; 004920e2 | g_FilterBlendConstant
    PUNPCKHBW MM3,qword ptr [0x00676438] ; 004920e9 | g_FilterBlendConstant
    PADDUSW MM1,MM2                     ; 004920f0
    PADDUSW MM2,MM3                     ; 004920f3
    PADDUSW MM1,MM2                     ; 004920f6
    PADDUSW MM6,MM5                     ; 004920f9
    MOVQ MM4,MM1                        ; 004920fc
    PSLLQ MM4,0x30                      ; 004920ff
    PSRLQ MM0,0x30                      ; 00492103
    MOVQ MM7,MM1                        ; 00492107
    MOVQ MM5,MM1                        ; 0049210a
    PADDUSW MM0,MM1                     ; 0049210d
    PSLLQ MM7,0x10                      ; 00492110
    PSRLQ MM5,0x10                      ; 00492114
    PADDUSW MM6,MM4                     ; 00492118
    PADDUSW MM5,MM1                     ; 0049211b
    PADDUSW MM7,MM0                     ; 0049211e
    MOVQ MM0,qword ptr [ESI + 0xfffffec8] ; 00492121
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00492128
    MOVQ MM3,qword ptr [ESI + 0x148]    ; 0049212c
    PUNPCKLBW MM0,dword ptr [0x00676438] ; 00492133 | g_FilterBlendConstant
    PUNPCKLBW MM2,dword ptr [0x00676438] ; 0049213a | g_FilterBlendConstant
    PUNPCKLBW MM3,dword ptr [0x00676438] ; 00492141 | g_FilterBlendConstant
    PADDUSW MM0,MM2                     ; 00492148
    PADDUSW MM2,MM3                     ; 0049214b
    PADDUSW MM0,MM2                     ; 0049214e
    PADDUSW MM7,MM5                     ; 00492151
    MOVQ MM4,MM0                        ; 00492154
    PSRLW MM6,0x4                       ; 00492157
    PSLLQ MM4,0x30                      ; 0049215b
    PSRLQ MM1,0x30                      ; 0049215f
    PADDUSW MM7,MM4                     ; 00492163
    PSRLW MM7,0x4                       ; 00492166
    ADD ESI,0x8                         ; 0049216a
    PACKUSWB MM6,MM7                    ; 0049216d
    MOVQ qword ptr [EDI],MM6            ; 00492170
    ADD EDI,0x8                         ; 00492173
    SUB ECX,0x8                         ; 00492176
    JG 0x004920b3                       ; 00492179
        ;   XREF to: 004920b3 (CONDITIONAL_JUMP)  ; LAB_004920b3
    EMMS                                ; 0049217f
    POP EDI                             ; 00492181
    POP ESI                             ; 00492182
    LEAVE                               ; 00492183
    RET                                 ; 00492184

