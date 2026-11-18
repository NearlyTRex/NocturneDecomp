; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderDepthOnlyReversed_FUN_00486de0(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486de0
        ;   Label: core_dstrendr.cpp_renderDepthOnlyReversed_FUN_00486de0
    PUSH EDI                            ; 00486de1
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486de2
    MOV ECX,dword ptr [EDI + 0x8]       ; 00486de5
    CMP EAX,ECX                         ; 00486de8
    JBE 0x00486def                      ; 00486dea
        ;   XREF to: 00486def (CONDITIONAL_JUMP)  ; LAB_00486def
    XCHG EAX,ECX                        ; 00486dec
    XCHG EDI,ESI                        ; 00486ded
    SHR EAX,0x10                        ; 00486def
        ;   Label: LAB_00486def
    SHR ECX,0x10                        ; 00486df2
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4480c] ; 00486df5
    SUB ECX,EAX                         ; 00486dfc
    JLE 0x00486e23                      ; 00486dfe
        ;   XREF to: 00486e23 (CONDITIONAL_JUMP)  ; LAB_00486e23
    SHL EAX,0x2                         ; 00486e00
    ADD EBX,EAX                         ; 00486e03
    MOV EAX,dword ptr [EDI + 0x28]      ; 00486e05
    SUB EAX,dword ptr [ESI + 0x28]      ; 00486e08
    IMUL dword ptr [ECX*0x4 + 0x1c4f034] ; 00486e0b
    MOV ESI,dword ptr [ESI + 0x28]      ; 00486e12
    CMP ESI,dword ptr [EBX]             ; 00486e15
        ;   Label: LAB_00486e15
    JL 0x00486e1b                       ; 00486e17
        ;   XREF to: 00486e1b (CONDITIONAL_JUMP)  ; LAB_00486e1b
    MOV dword ptr [EBX],ESI             ; 00486e19
    ADD ESI,EDX                         ; 00486e1b
        ;   Label: LAB_00486e1b
    ADD EBX,0x4                         ; 00486e1d
    DEC ECX                             ; 00486e20
    JG 0x00486e15                       ; 00486e21
        ;   XREF to: 00486e15 (CONDITIONAL_JUMP)  ; LAB_00486e15
    POP EDI                             ; 00486e23
        ;   Label: LAB_00486e23
    POP ESI                             ; 00486e24
    RET                                 ; 00486e25

