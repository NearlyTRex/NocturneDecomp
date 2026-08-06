; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderDepth16BitConditional_FUN_00463ac7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90 at 0045f01f
;
; Referenced Globals:
;   undefined4 DAT_01bd2fa0
;   undefined4 g_ReciprocalLookupTable[1]
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463ac7
        ;   Label: core_dstrender.cpp_renderDepth16BitConditional_FUN_00463ac7
    PUSH EDI                            ; 00463ac8
    MOV EAX,dword ptr [ESI + 0x8]       ; 00463ac9
    MOV ECX,dword ptr [EDI + 0x8]       ; 00463acc
    CMP EAX,ECX                         ; 00463acf
    JBE 0x00463ad6                      ; 00463ad1
        ;   XREF to: 00463ad6 (CONDITIONAL_JUMP)  ; LAB_00463ad6
    XCHG EAX,ECX                        ; 00463ad3
    XCHG EDI,ESI                        ; 00463ad4
    SHR EAX,0x10                        ; 00463ad6
        ;   Label: LAB_00463ad6
    SHR ECX,0x10                        ; 00463ad9
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00463adc | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00463ae3
    JLE 0x00463b18                      ; 00463ae5
        ;   XREF to: 00463b18 (CONDITIONAL_JUMP)  ; LAB_00463b18
    SHL EAX,0x1                         ; 00463ae7
    ADD EBX,EAX                         ; 00463ae9
    MOV EAX,dword ptr [EDI + 0x28]      ; 00463aeb
    SUB EAX,dword ptr [ESI + 0x28]      ; 00463aee
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 00463af1 | g_ReciprocalLookupTable[1]
    MOV ESI,dword ptr [ESI + 0x28]      ; 00463af8
    MOV EAX,ESI                         ; 00463afb
        ;   Label: LAB_00463afb
    SAR EAX,0x8                         ; 00463afd
    CMP word ptr [EBX],0x0              ; 00463b00
    JZ 0x00463b10                       ; 00463b04
        ;   XREF to: 00463b10 (CONDITIONAL_JUMP)  ; LAB_00463b10
    CMP EAX,0xffff                      ; 00463b06
    JA 0x00463b20                       ; 00463b0b
        ;   XREF to: 00463b20 (CONDITIONAL_JUMP)  ; LAB_00463b20
    MOV word ptr [EBX],AX               ; 00463b0d
    ADD ESI,EDX                         ; 00463b10
        ;   Label: LAB_00463b10
    ADD EBX,0x2                         ; 00463b12
    DEC ECX                             ; 00463b15
    JG 0x00463afb                       ; 00463b16
        ;   XREF to: 00463afb (CONDITIONAL_JUMP)  ; LAB_00463afb
    POP EDI                             ; 00463b18
        ;   Label: LAB_00463b18
    POP ESI                             ; 00463b19
    RET                                 ; 00463b1a
    MOV word ptr [EBX],0xffff           ; 00463b20
        ;   Label: LAB_00463b20
    JMP 0x00463b10                      ; 00463b25
        ;   XREF to: 00463b10 (UNCONDITIONAL_JUMP)  ; LAB_00463b10

