; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride256_FUN_00492185(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; Referenced Globals:
;   ulonglong g_FilterBlendConstant = 0x0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00492185
        ;   Label: core_dstrender.cpp_verticalBlur3TapMMXStride256_FUN_00492185
    MOV EBP,ESP                         ; 00492186
    PUSH ESI                            ; 00492188
    PUSH EDI                            ; 00492189
    MOV ESI,dword ptr [EBP + 0xc]       ; 0049218a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0049218d
    MOV ECX,dword ptr [EBP + 0x10]      ; 00492190
    MOVQ MM0,qword ptr [ESI + 0xffffff00] ; 00492193
    MOVQ MM2,qword ptr [ESI]            ; 0049219a
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 0049219d
    PUNPCKLBW MM0,dword ptr [0x00676438] ; 004921a4 | g_FilterBlendConstant
    PUNPCKLBW MM2,dword ptr [0x00676438] ; 004921ab | g_FilterBlendConstant
    PUNPCKLBW MM3,dword ptr [0x00676438] ; 004921b2 | g_FilterBlendConstant
    PADDUSW MM0,MM2                     ; 004921b9
    PADDUSW MM2,MM3                     ; 004921bc
    PADDUSW MM0,MM2                     ; 004921bf
    MOVQ MM1,qword ptr [ESI + 0xfffffef8] ; 004921c2
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 004921c9
    MOVQ MM3,qword ptr [ESI + 0xf8]     ; 004921cd
    PUNPCKHBW MM1,qword ptr [0x00676438] ; 004921d4 | g_FilterBlendConstant
    PUNPCKHBW MM2,qword ptr [0x00676438] ; 004921db | g_FilterBlendConstant
    PUNPCKHBW MM3,qword ptr [0x00676438] ; 004921e2 | g_FilterBlendConstant
    PADDUSW MM1,MM2                     ; 004921e9
    PADDUSW MM2,MM3                     ; 004921ec
    PADDUSW MM1,MM2                     ; 004921ef
    PSRLQ MM1,0x30                      ; 004921f2
    MOVQ MM6,MM0                        ; 004921f6
        ;   Label: LAB_004921f6
    MOVQ MM5,MM0                        ; 004921f9
    PADDUSW MM1,MM0                     ; 004921fc
    PSLLQ MM6,0x10                      ; 004921ff
    PSRLQ MM5,0x10                      ; 00492203
    PADDUSW MM5,MM0                     ; 00492207
    PADDUSW MM6,MM1                     ; 0049220a
    MOVQ MM1,qword ptr [ESI + 0xffffff00] ; 0049220d
    MOVQ MM2,qword ptr [ESI]            ; 00492214
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 00492217
    PUNPCKHBW MM1,qword ptr [0x00676438] ; 0049221e | g_FilterBlendConstant
    PUNPCKHBW MM2,qword ptr [0x00676438] ; 00492225 | g_FilterBlendConstant
    PUNPCKHBW MM3,qword ptr [0x00676438] ; 0049222c | g_FilterBlendConstant
    PADDUSW MM1,MM2                     ; 00492233
    PADDUSW MM2,MM3                     ; 00492236
    PADDUSW MM1,MM2                     ; 00492239
    PADDUSW MM6,MM5                     ; 0049223c
    MOVQ MM4,MM1                        ; 0049223f
    PSLLQ MM4,0x30                      ; 00492242
    PSRLQ MM0,0x30                      ; 00492246
    MOVQ MM7,MM1                        ; 0049224a
    MOVQ MM5,MM1                        ; 0049224d
    PADDUSW MM0,MM1                     ; 00492250
    PSLLQ MM7,0x10                      ; 00492253
    PSRLQ MM5,0x10                      ; 00492257
    PADDUSW MM6,MM4                     ; 0049225b
    PADDUSW MM5,MM1                     ; 0049225e
    PADDUSW MM7,MM0                     ; 00492261
    MOVQ MM0,qword ptr [ESI + 0xffffff08] ; 00492264
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 0049226b
    MOVQ MM3,qword ptr [ESI + 0x108]    ; 0049226f
    PUNPCKLBW MM0,dword ptr [0x00676438] ; 00492276 | g_FilterBlendConstant
    PUNPCKLBW MM2,dword ptr [0x00676438] ; 0049227d | g_FilterBlendConstant
    PUNPCKLBW MM3,dword ptr [0x00676438] ; 00492284 | g_FilterBlendConstant
    PADDUSW MM0,MM2                     ; 0049228b
    PADDUSW MM2,MM3                     ; 0049228e
    PADDUSW MM0,MM2                     ; 00492291
    PADDUSW MM7,MM5                     ; 00492294
    MOVQ MM4,MM0                        ; 00492297
    PSRLW MM6,0x4                       ; 0049229a
    PSLLQ MM4,0x30                      ; 0049229e
    PSRLQ MM1,0x30                      ; 004922a2
    PADDUSW MM7,MM4                     ; 004922a6
    PSRLW MM7,0x4                       ; 004922a9
    ADD ESI,0x8                         ; 004922ad
    PACKUSWB MM6,MM7                    ; 004922b0
    MOVQ qword ptr [EDI],MM6            ; 004922b3
    ADD EDI,0x8                         ; 004922b6
    SUB ECX,0x8                         ; 004922b9
    JG 0x004921f6                       ; 004922bc
        ;   XREF to: 004921f6 (CONDITIONAL_JUMP)  ; LAB_004921f6
    EMMS                                ; 004922c2
    POP EDI                             ; 004922c4
    POP ESI                             ; 004922c5
    LEAVE                               ; 004922c6
    RET                                 ; 004922c7

