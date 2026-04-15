; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blur3x3MMXStride128_FUN_004922c8(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; Referenced Globals:
;   _MMX_INTEGER g_FilterBlendConstant
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004922c8
        ;   Label: core_dstrender.cpp_blur3x3MMXStride128_FUN_004922c8
    MOV EBP,ESP                         ; 004922c9
    PUSH ESI                            ; 004922cb
    PUSH EDI                            ; 004922cc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004922cd
    MOV EDI,dword ptr [EBP + 0x8]       ; 004922d0
    MOV ECX,dword ptr [EBP + 0x10]      ; 004922d3
    MOVQ MM0,qword ptr [ESI + -0x80]    ; 004922d6
    MOVQ MM2,qword ptr [ESI]            ; 004922da
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 004922dd
    PUNPCKLBW MM0,dword ptr [0x00676438] ; 004922e4 | g_FilterBlendConstant
    PUNPCKLBW MM2,dword ptr [0x00676438] ; 004922eb | g_FilterBlendConstant
    PUNPCKLBW MM3,dword ptr [0x00676438] ; 004922f2 | g_FilterBlendConstant
    PADDUSW MM0,MM2                     ; 004922f9
    PADDUSW MM2,MM3                     ; 004922fc
    PADDUSW MM0,MM2                     ; 004922ff
    MOVQ MM1,qword ptr [ESI + 0xffffff78] ; 00492302
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00492309
    MOVQ MM3,qword ptr [ESI + 0x78]     ; 0049230d
    PUNPCKHBW MM1,qword ptr [0x00676438] ; 00492311 | g_FilterBlendConstant
    PUNPCKHBW MM2,qword ptr [0x00676438] ; 00492318 | g_FilterBlendConstant
    PUNPCKHBW MM3,qword ptr [0x00676438] ; 0049231f | g_FilterBlendConstant
    PADDUSW MM1,MM2                     ; 00492326
    PADDUSW MM2,MM3                     ; 00492329
    PADDUSW MM1,MM2                     ; 0049232c
    PSRLQ MM1,0x30                      ; 0049232f
    MOVQ MM6,MM0                        ; 00492333
        ;   Label: LAB_00492333
    MOVQ MM5,MM0                        ; 00492336
    PADDUSW MM1,MM0                     ; 00492339
    PSLLQ MM6,0x10                      ; 0049233c
    PSRLQ MM5,0x10                      ; 00492340
    PADDUSW MM5,MM0                     ; 00492344
    PADDUSW MM6,MM1                     ; 00492347
    MOVQ MM1,qword ptr [ESI + -0x80]    ; 0049234a
    MOVQ MM2,qword ptr [ESI]            ; 0049234e
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 00492351
    PUNPCKHBW MM1,qword ptr [0x00676438] ; 00492358 | g_FilterBlendConstant
    PUNPCKHBW MM2,qword ptr [0x00676438] ; 0049235f | g_FilterBlendConstant
    PUNPCKHBW MM3,qword ptr [0x00676438] ; 00492366 | g_FilterBlendConstant
    PADDUSW MM1,MM2                     ; 0049236d
    PADDUSW MM2,MM3                     ; 00492370
    PADDUSW MM1,MM2                     ; 00492373
    PADDUSW MM6,MM5                     ; 00492376
    MOVQ MM4,MM1                        ; 00492379
    PSLLQ MM4,0x30                      ; 0049237c
    PSRLQ MM0,0x30                      ; 00492380
    MOVQ MM7,MM1                        ; 00492384
    MOVQ MM5,MM1                        ; 00492387
    PADDUSW MM0,MM1                     ; 0049238a
    PSLLQ MM7,0x10                      ; 0049238d
    PSRLQ MM5,0x10                      ; 00492391
    PADDUSW MM6,MM4                     ; 00492395
    PADDUSW MM5,MM1                     ; 00492398
    PADDUSW MM7,MM0                     ; 0049239b
    MOVQ MM0,qword ptr [ESI + -0x78]    ; 0049239e
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 004923a2
    MOVQ MM3,qword ptr [ESI + 0x88]     ; 004923a6
    PUNPCKLBW MM0,dword ptr [0x00676438] ; 004923ad | g_FilterBlendConstant
    PUNPCKLBW MM2,dword ptr [0x00676438] ; 004923b4 | g_FilterBlendConstant
    PUNPCKLBW MM3,dword ptr [0x00676438] ; 004923bb | g_FilterBlendConstant
    PADDUSW MM0,MM2                     ; 004923c2
    PADDUSW MM2,MM3                     ; 004923c5
    PADDUSW MM0,MM2                     ; 004923c8
    PADDUSW MM7,MM5                     ; 004923cb
    MOVQ MM4,MM0                        ; 004923ce
    PSRLW MM6,0x4                       ; 004923d1
    PSLLQ MM4,0x30                      ; 004923d5
    PSRLQ MM1,0x30                      ; 004923d9
    PADDUSW MM7,MM4                     ; 004923dd
    PSRLW MM7,0x4                       ; 004923e0
    ADD ESI,0x8                         ; 004923e4
    PACKUSWB MM6,MM7                    ; 004923e7
    MOVQ qword ptr [EDI],MM6            ; 004923ea
    ADD EDI,0x8                         ; 004923ed
    SUB ECX,0x8                         ; 004923f0
    JG 0x00492333                       ; 004923f3
        ;   XREF to: 00492333 (CONDITIONAL_JUMP)  ; LAB_00492333
    EMMS                                ; 004923f9
    POP EDI                             ; 004923fb
    POP ESI                             ; 004923fc
    LEAVE                               ; 004923fd
    RET                                 ; 004923fe

