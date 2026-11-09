; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepth16BitConditional_FUN_0046f9f4(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370 at 0046b3ff
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6b5d4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046f9f4
        ;   Label: core_dstrendr.cpp_renderDepth16BitConditional_FUN_0046f9f4
    PUSH EDI                            ; 0046f9f5
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046f9f6
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046f9f9
    CMP EAX,ECX                         ; 0046f9fc
    JBE 0x0046fa03                      ; 0046f9fe
        ;   XREF to: 0046fa03 (CONDITIONAL_JUMP)  ; LAB_0046fa03
    XCHG EAX,ECX                        ; 0046fa00
    XCHG EDI,ESI                        ; 0046fa01
    SHR EAX,0x10                        ; 0046fa03
        ;   Label: LAB_0046fa03
    SHR ECX,0x10                        ; 0046fa06
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046fa09 | DAT_01c5faec
    SUB ECX,EAX                         ; 0046fa10
    JLE 0x0046fa45                      ; 0046fa12
        ;   XREF to: 0046fa45 (CONDITIONAL_JUMP)  ; LAB_0046fa45
    SHL EAX,0x1                         ; 0046fa14
    ADD EBX,EAX                         ; 0046fa16
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046fa18
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046fa1b
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d4] ; 0046fa1e | DAT_01c6b5d4
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046fa25
    MOV EAX,ESI                         ; 0046fa28
        ;   Label: LAB_0046fa28
    SAR EAX,0x8                         ; 0046fa2a
    CMP word ptr [EBX],0x0              ; 0046fa2d
    JZ 0x0046fa3d                       ; 0046fa31
        ;   XREF to: 0046fa3d (CONDITIONAL_JUMP)  ; LAB_0046fa3d
    CMP EAX,0xffff                      ; 0046fa33
    JA 0x0046fa50                       ; 0046fa38
        ;   XREF to: 0046fa50 (CONDITIONAL_JUMP)  ; LAB_0046fa50
    MOV word ptr [EBX],AX               ; 0046fa3a
    ADD ESI,EDX                         ; 0046fa3d
        ;   Label: LAB_0046fa3d
    ADD EBX,0x2                         ; 0046fa3f
    DEC ECX                             ; 0046fa42
    JG 0x0046fa28                       ; 0046fa43
        ;   XREF to: 0046fa28 (CONDITIONAL_JUMP)  ; LAB_0046fa28
    POP EDI                             ; 0046fa45
        ;   Label: LAB_0046fa45
    POP ESI                             ; 0046fa46
    RET                                 ; 0046fa47
    MOV word ptr [EBX],0xffff           ; 0046fa50
        ;   Label: LAB_0046fa50
    JMP 0x0046fa3d                      ; 0046fa55
        ;   XREF to: 0046fa3d (UNCONDITIONAL_JUMP)  ; LAB_0046fa3d

