; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderDepth16BitConditional_FUN_0049077d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 at 0048a9df
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;   undefined4 DAT_02d02584
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049077d
        ;   Label: core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d
    PUSH EDI                            ; 0049077e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0049077f
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490782
    CMP EAX,ECX                         ; 00490785
    JBE 0x0049078c                      ; 00490787
        ;   XREF to: 0049078c (CONDITIONAL_JUMP)  ; LAB_0049078c
    XCHG EAX,ECX                        ; 00490789
    XCHG EDI,ESI                        ; 0049078a
    SHR EAX,0x10                        ; 0049078c
        ;   Label: LAB_0049078c
    SHR ECX,0x10                        ; 0049078f
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 00490792 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490799
    JLE 0x004907ce                      ; 0049079b
        ;   XREF to: 004907ce (CONDITIONAL_JUMP)  ; LAB_004907ce
    SHL EAX,0x1                         ; 0049079d
    ADD EBX,EAX                         ; 0049079f
    MOV EAX,dword ptr [EDI + 0x28]      ; 004907a1
    SUB EAX,dword ptr [ESI + 0x28]      ; 004907a4
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 004907a7 | DAT_02d02584
    MOV ESI,dword ptr [ESI + 0x28]      ; 004907ae
    MOV EAX,ESI                         ; 004907b1
        ;   Label: LAB_004907b1
    SAR EAX,0x8                         ; 004907b3
    CMP word ptr [EBX],0x0              ; 004907b6
    JZ 0x004907c6                       ; 004907ba
        ;   XREF to: 004907c6 (CONDITIONAL_JUMP)  ; LAB_004907c6
    CMP EAX,0xffff                      ; 004907bc
    JA 0x004907e0                       ; 004907c1
        ;   XREF to: 004907e0 (CONDITIONAL_JUMP)  ; LAB_004907e0
    MOV word ptr [EBX],AX               ; 004907c3
    ADD ESI,EDX                         ; 004907c6
        ;   Label: LAB_004907c6
    ADD EBX,0x2                         ; 004907c8
    DEC ECX                             ; 004907cb
    JG 0x004907b1                       ; 004907cc
        ;   XREF to: 004907b1 (CONDITIONAL_JUMP)  ; LAB_004907b1
    POP EDI                             ; 004907ce
        ;   Label: LAB_004907ce
    POP ESI                             ; 004907cf
    RET                                 ; 004907d0
    MOV word ptr [EBX],0xffff           ; 004907e0
        ;   Label: LAB_004907e0
    JMP 0x004907c6                      ; 004907e5
        ;   XREF to: 004907c6 (UNCONDITIONAL_JUMP)  ; LAB_004907c6

