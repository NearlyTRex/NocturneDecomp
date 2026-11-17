; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; Referenced Globals:
;   uint g_UINT_0060d238 = 0x0
;   uint g_UINT_0060d23c = 0x0
;   int g_INT_0060d254 = 0x0
;   int g_INT_0060d258 = 0x0
;   void* g_PTR_0060d260 = 00000000
;   int g_INT_0060d264 = 0x0
;   qword g_QWORD_0061c868 = 0x10
;   qword g_QWORD_0061c888 = 0x8
;   qword g_QWORD_0061c8a8 = 0xff
;   qword g_QWORD_0061c8c8 = 0xff00
;   uchar* g_UCHAR_PTR_01c37770
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004722e9
        ;   Label: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_004722e9
    PUSH EDI                            ; 004722ea
    PUSH EBP                            ; 004722eb
    MOV EAX,dword ptr [ESI + 0x8]       ; 004722ec
    MOV ECX,dword ptr [EDI + 0x8]       ; 004722ef
    CMP EAX,ECX                         ; 004722f2
    JBE 0x004722f9                      ; 004722f4
        ;   XREF to: 004722f9 (CONDITIONAL_JUMP)  ; LAB_004722f9
    XCHG EAX,ECX                        ; 004722f6
    XCHG EDI,ESI                        ; 004722f7
    SHR ECX,0x10                        ; 004722f9
        ;   Label: LAB_004722f9
    SHR EAX,0x10                        ; 004722fc
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 004722ff
    SUB ECX,EAX                         ; 00472306
    JLE 0x004723d0                      ; 00472308
        ;   XREF to: 004723d0 (CONDITIONAL_JUMP)  ; LAB_004723d0
    LEA EBX,[EBX + EAX*0x4]             ; 0047230e
    SHL ECX,0x2                         ; 00472311
    MOV dword ptr [0x0060d264],ECX      ; 00472314 | g_INT_0060d264
    MOV dword ptr [0x0060d260],EBX      ; 0047231a | g_PTR_0060d260
    MOV EAX,dword ptr [EDI + 0x18]      ; 00472320
    MOV EBX,dword ptr [ESI + 0x18]      ; 00472323
    SUB EAX,EBX                         ; 00472326
    IMUL dword ptr [ECX + 0x1c35e74]    ; 00472328
    MOV dword ptr [0x0060d238],EBX      ; 0047232e | g_UINT_0060d238
    MOV dword ptr [0x0060d254],EDX      ; 00472334 | g_INT_0060d254
    MOV EAX,dword ptr [EDI + 0x20]      ; 0047233a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0047233d
    SUB EAX,EBX                         ; 00472340
    IMUL dword ptr [ECX + 0x1c35e74]    ; 00472342
    MOV dword ptr [0x0060d23c],EBX      ; 00472348 | g_UINT_0060d23c
    MOV dword ptr [0x0060d258],EDX      ; 0047234e | g_INT_0060d258
    MOV ECX,dword ptr [0x0060d238]      ; 00472354 | g_UINT_0060d238
    MOV EDX,dword ptr [0x0060d23c]      ; 0047235a | g_UINT_0060d23c
    MOV EDI,0x0                         ; 00472360
    MOVD MM0,ECX                        ; 00472365
        ;   Label: LAB_00472365
    MOVD MM2,EDX                        ; 00472368
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0047236b | g_QWORD_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 00472372 | g_QWORD_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 00472379 | g_QWORD_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 00472380 | g_QWORD_0061c8c8
    PADDD MM0,MM2                       ; 00472387
    MOVD EBX,MM0                        ; 0047238a
    SHL EBX,0x2                         ; 0047238d
    ADD EBX,dword ptr [0x01c37770]      ; 00472390 | g_UCHAR_PTR_01c37770
    MOVD MM0,dword ptr [EBX]            ; 00472396
    MOV EBX,dword ptr [0x0060d260]      ; 00472399 | g_PTR_0060d260
    ADD EBX,EDI                         ; 0047239f
    MOVD dword ptr [EBX],MM0            ; 004723a1
    ADD EDI,0x4                         ; 004723a4
    CMP EDI,dword ptr [0x0060d264]      ; 004723a7 | g_INT_0060d264
    JNC 0x004723d0                      ; 004723ad
        ;   XREF to: 004723d0 (CONDITIONAL_JUMP)  ; LAB_004723d0
    ADD ECX,dword ptr [0x0060d254]      ; 004723af | g_INT_0060d254
    PADDW MM5,MM6                       ; 004723b5
    ADD EDX,dword ptr [0x0060d258]      ; 004723b8 | g_INT_0060d258
    MOVQ MM0,MM5                        ; 004723be
    JMP 0x00472365                      ; 004723c1
        ;   XREF to: 00472365 (UNCONDITIONAL_JUMP)  ; LAB_00472365
    POP EBP                             ; 004723d0
        ;   Label: LAB_004723d0
    EMMS                                ; 004723d1
    POP EDI                             ; 004723d3
    POP ESI                             ; 004723d4
    RET                                 ; 004723d5

