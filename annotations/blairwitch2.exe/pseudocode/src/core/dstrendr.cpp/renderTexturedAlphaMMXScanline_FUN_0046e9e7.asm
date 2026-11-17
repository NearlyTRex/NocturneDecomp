; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0 at 0046a848
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046a3a0 at 0046a414
;
; Referenced Globals:
;   uint g_UINT_0060d238 = 0x0
;   uint g_UINT_0060d23c = 0x0
;   uint g_UINT_0060d244 = 0x0
;   int g_INT_0060d254 = 0x0
;   int g_INT_0060d258 = 0x0
;   int g_INT_0060d25c = 0x0
;   int g_INT_0060d264 = 0x0
;   uint* g_UINT_PTR_0060d268 = 00000000
;   qword g_QWORD_0061c868 = 0x10
;   qword g_QWORD_0061c888 = 0x8
;   qword g_QWORD_0061c8a8 = 0xff
;   qword g_QWORD_0061c8c8 = 0xff00
;   void*[1200] g_ARRAY_PTR_01c2a38c
;   undefined4 g_UINT_ARRAY_01c35e70[1]
;   uchar* g_UCHAR_PTR_01c37770
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046e9e7
        ;   Label: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7
    PUSH EDI                            ; 0046e9e8
    PUSH EBP                            ; 0046e9e9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046e9ea
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046e9ed
    CMP EAX,ECX                         ; 0046e9f0
    JBE 0x0046e9f7                      ; 0046e9f2
        ;   XREF to: 0046e9f7 (CONDITIONAL_JUMP)  ; LAB_0046e9f7
    XCHG EAX,ECX                        ; 0046e9f4
    XCHG EDI,ESI                        ; 0046e9f5
    SHR ECX,0x10                        ; 0046e9f7
        ;   Label: LAB_0046e9f7
    SHR EAX,0x10                        ; 0046e9fa
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046e9fd | g_ARRAY_PTR_01c2a38c
    SUB ECX,EAX                         ; 0046ea04
    JLE 0x0046eafc                      ; 0046ea06
        ;   XREF to: 0046eafc (CONDITIONAL_JUMP)  ; LAB_0046eafc
    SHL ECX,0x1                         ; 0046ea0c
    LEA EBP,[EBP + EAX*0x2]             ; 0046ea0e
    MOV dword ptr [0x0060d264],ECX      ; 0046ea12 | g_INT_0060d264
    MOV dword ptr [0x0060d268],EBP      ; 0046ea18 | g_UINT_PTR_0060d268
    MOV EAX,dword ptr [EDI + 0x18]      ; 0046ea1e
    MOV EBX,dword ptr [ESI + 0x18]      ; 0046ea21
    SUB EAX,EBX                         ; 0046ea24
    IMUL dword ptr [ECX*0x2 + 0x1c35e74] ; 0046ea26 | g_UINT_ARRAY_01c35e70[1]
    MOV dword ptr [0x0060d238],EBX      ; 0046ea2d | g_UINT_0060d238
    MOV dword ptr [0x0060d254],EDX      ; 0046ea33 | g_INT_0060d254
    MOV EAX,dword ptr [EDI + 0x20]      ; 0046ea39
    MOV EBX,dword ptr [ESI + 0x20]      ; 0046ea3c
    SUB EAX,EBX                         ; 0046ea3f
    IMUL dword ptr [ECX*0x2 + 0x1c35e74] ; 0046ea41 | g_UINT_ARRAY_01c35e70[1]
    MOV dword ptr [0x0060d23c],EBX      ; 0046ea48 | g_UINT_0060d23c
    MOV dword ptr [0x0060d258],EDX      ; 0046ea4e | g_INT_0060d258
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046ea54
    MOV EBX,dword ptr [ESI + 0x28]      ; 0046ea57
    SUB EAX,EBX                         ; 0046ea5a
    IMUL dword ptr [ECX*0x2 + 0x1c35e74] ; 0046ea5c | g_UINT_ARRAY_01c35e70[1]
    MOV dword ptr [0x0060d244],EBX      ; 0046ea63 | g_UINT_0060d244
    MOV dword ptr [0x0060d25c],EDX      ; 0046ea69 | g_INT_0060d25c
    MOV ECX,dword ptr [0x0060d238]      ; 0046ea6f | g_UINT_0060d238
    MOV EDX,dword ptr [0x0060d23c]      ; 0046ea75 | g_UINT_0060d23c
    MOV EDI,0x0                         ; 0046ea7b
    MOV ESI,dword ptr [0x0060d244]      ; 0046ea80 | g_UINT_0060d244
    MOV EBP,dword ptr [0x0060d268]      ; 0046ea86 | g_UINT_PTR_0060d268
        ;   Label: LAB_0046ea86
    ADD EBP,EDI                         ; 0046ea8c
    MOVZX EAX,word ptr [EBP]            ; 0046ea8e
    CMP ESI,EAX                         ; 0046ea92
    JNC 0x0046eadd                      ; 0046ea94
        ;   XREF to: 0046eadd (CONDITIONAL_JUMP)  ; LAB_0046eadd
    MOVD MM0,ECX                        ; 0046ea96
    MOVD MM2,EDX                        ; 0046ea99
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0046ea9c | g_QWORD_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0046eaa3 | g_QWORD_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0046eaaa | g_QWORD_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0046eab1 | g_QWORD_0061c8c8
    PADDD MM0,MM2                       ; 0046eab8
    MOVD EBX,MM0                        ; 0046eabb
    MOV EAX,[0x01c37774]                ; 0046eabe | g_UCHAR_PTR_01c37774
    TEST EAX,0xffffffff                 ; 0046eac3
    JNZ 0x0046eacf                      ; 0046eac8
        ;   XREF to: 0046eacf (CONDITIONAL_JUMP)  ; LAB_0046eacf
    MOV EAX,[0x01c37770]                ; 0046eaca | g_UCHAR_PTR_01c37770
    ADD EBX,EAX                         ; 0046eacf
        ;   Label: LAB_0046eacf
    MOVZX EAX,byte ptr [EBX]            ; 0046ead1
    CMP EAX,0x0                         ; 0046ead4
    JZ 0x0046eadd                       ; 0046ead7
        ;   XREF to: 0046eadd (CONDITIONAL_JUMP)  ; LAB_0046eadd
    MOV word ptr [EBP],SI               ; 0046ead9
    ADD EDI,0x2                         ; 0046eadd
        ;   Label: LAB_0046eadd
    CMP EDI,dword ptr [0x0060d264]      ; 0046eae0 | g_INT_0060d264
    JA 0x0046eafc                       ; 0046eae6
        ;   XREF to: 0046eafc (CONDITIONAL_JUMP)  ; LAB_0046eafc
    ADD ECX,dword ptr [0x0060d254]      ; 0046eae8 | g_INT_0060d254
    ADD EDX,dword ptr [0x0060d258]      ; 0046eaee | g_INT_0060d258
    ADD ESI,dword ptr [0x0060d25c]      ; 0046eaf4 | g_INT_0060d25c
    JMP 0x0046ea86                      ; 0046eafa
        ;   XREF to: 0046ea86 (UNCONDITIONAL_JUMP)  ; LAB_0046ea86
    POP EBP                             ; 0046eafc
        ;   Label: LAB_0046eafc
    EMMS                                ; 0046eafd
    POP EDI                             ; 0046eaff
    POP ESI                             ; 0046eb00
    RET                                 ; 0046eb01

