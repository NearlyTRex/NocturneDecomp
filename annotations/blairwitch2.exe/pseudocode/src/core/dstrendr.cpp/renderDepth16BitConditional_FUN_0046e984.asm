; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderDepth16BitConditional_FUN_0046e984(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0 at 0046982f
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35e74
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046e984
        ;   Label: core_dstrendr.cpp_renderDepth16BitConditional_FUN_0046e984
    PUSH EDI                            ; 0046e985
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046e986
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046e989
    CMP EAX,ECX                         ; 0046e98c
    JBE 0x0046e993                      ; 0046e98e
        ;   XREF to: 0046e993 (CONDITIONAL_JUMP)  ; LAB_0046e993
    XCHG EAX,ECX                        ; 0046e990
    XCHG EDI,ESI                        ; 0046e991
    SHR EAX,0x10                        ; 0046e993
        ;   Label: LAB_0046e993
    SHR ECX,0x10                        ; 0046e996
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046e999 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046e9a0
    JLE 0x0046e9d5                      ; 0046e9a2
        ;   XREF to: 0046e9d5 (CONDITIONAL_JUMP)  ; LAB_0046e9d5
    SHL EAX,0x1                         ; 0046e9a4
    ADD EBX,EAX                         ; 0046e9a6
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046e9a8
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046e9ab
    IMUL dword ptr [ECX*0x4 + 0x1c35e74] ; 0046e9ae | DAT_01c35e74
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046e9b5
    MOV EAX,ESI                         ; 0046e9b8
        ;   Label: LAB_0046e9b8
    SAR EAX,0x8                         ; 0046e9ba
    CMP word ptr [EBX],0x0              ; 0046e9bd
    JZ 0x0046e9cd                       ; 0046e9c1
        ;   XREF to: 0046e9cd (CONDITIONAL_JUMP)  ; LAB_0046e9cd
    CMP EAX,0xffff                      ; 0046e9c3
    JA 0x0046e9e0                       ; 0046e9c8
        ;   XREF to: 0046e9e0 (CONDITIONAL_JUMP)  ; LAB_0046e9e0
    MOV word ptr [EBX],AX               ; 0046e9ca
    ADD ESI,EDX                         ; 0046e9cd
        ;   Label: LAB_0046e9cd
    ADD EBX,0x2                         ; 0046e9cf
    DEC ECX                             ; 0046e9d2
    JG 0x0046e9b8                       ; 0046e9d3
        ;   XREF to: 0046e9b8 (CONDITIONAL_JUMP)  ; LAB_0046e9b8
    POP EDI                             ; 0046e9d5
        ;   Label: LAB_0046e9d5
    POP ESI                             ; 0046e9d6
    RET                                 ; 0046e9d7
    MOV word ptr [EBX],0xffff           ; 0046e9e0
        ;   Label: LAB_0046e9e0
    JMP 0x0046e9cd                      ; 0046e9e5
        ;   XREF to: 0046e9cd (UNCONDITIONAL_JUMP)  ; LAB_0046e9cd

