; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_004873a5(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 at 00481ee1
;
; Referenced Globals:
;   undefined4 DAT_00612564
;   undefined4 DAT_01bc1238
;   undefined4 DAT_01bc123c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4f030
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004873a5
        ;   Label: core_dstrendr.cpp_renderScreenDepthTestInterlacedProfiled_FUN_004873a5
    PUSH EDI                            ; 004873a6
    TEST EBX,0x1                        ; 004873a7
    JZ 0x004873b2                       ; 004873ad
        ;   XREF to: 004873b2 (CONDITIONAL_JUMP)  ; LAB_004873b2
    POP EDI                             ; 004873af
    POP ESI                             ; 004873b0
    RET                                 ; 004873b1
    PUSH EBP                            ; 004873b2
        ;   Label: LAB_004873b2
    MOV EAX,dword ptr [ESI + 0x8]       ; 004873b3
    MOV ECX,dword ptr [EDI + 0x8]       ; 004873b6
    CMP EAX,ECX                         ; 004873b9
    JBE 0x004873c0                      ; 004873bb
        ;   XREF to: 004873c0 (CONDITIONAL_JUMP)  ; LAB_004873c0
    XCHG EAX,ECX                        ; 004873bd
    XCHG EDI,ESI                        ; 004873be
    SHR EAX,0x10                        ; 004873c0
        ;   Label: LAB_004873c0
    SHR ECX,0x10                        ; 004873c3
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4354c] ; 004873c6 | DAT_01c4354c
    SUB ECX,EAX                         ; 004873cd
    JLE 0x00487400                      ; 004873cf
        ;   XREF to: 00487400 (CONDITIONAL_JUMP)  ; LAB_00487400
    SHL EAX,0x1                         ; 004873d1
    ADD EBP,EAX                         ; 004873d3
    INC ECX                             ; 004873d5
    MOV EAX,dword ptr [EDI + 0x28]      ; 004873d6
    SUB EAX,dword ptr [ESI + 0x28]      ; 004873d9
    IMUL dword ptr [ECX*0x4 + 0x1c4f030] ; 004873dc | DAT_01c4f030
    MOV EBX,EBP                         ; 004873e3
    DEC ECX                             ; 004873e5
    MOV ESI,dword ptr [ESI + 0x28]      ; 004873e6
    MOV EAX,ESI                         ; 004873e9
        ;   Label: LAB_004873e9
    SHR EAX,0x8                         ; 004873eb
    MOVZX EDI,word ptr [EBX]            ; 004873ee
    CMP EAX,EDI                         ; 004873f1
    JC 0x00487404                       ; 004873f3
        ;   XREF to: 00487404 (CONDITIONAL_JUMP)  ; LAB_00487404
    LEA ESI,[ESI + EDX*0x2]             ; 004873f5
        ;   Label: LAB_004873f5
    ADD EBX,0x4                         ; 004873f8
    SUB ECX,0x2                         ; 004873fb
    JG 0x004873e9                       ; 004873fe
        ;   XREF to: 004873e9 (CONDITIONAL_JUMP)  ; LAB_004873e9
    POP EBP                             ; 00487400
        ;   Label: LAB_00487400
    POP EDI                             ; 00487401
    POP ESI                             ; 00487402
    RET                                 ; 00487403
    MOV EAX,[0x01bc1238]                ; 00487404 | DAT_01bc1238
        ;   Label: LAB_00487404
    INC EAX                             ; 00487409
    MOV [0x01bc1238],EAX                ; 0048740a | DAT_01bc1238
    CMP EAX,dword ptr [0x00612564]      ; 0048740f | DAT_00612564
    JC 0x004873f5                       ; 00487415
        ;   XREF to: 004873f5 (CONDITIONAL_JUMP)  ; LAB_004873f5
    MOV dword ptr [0x01bc123c],0x1      ; 00487417 | DAT_01bc123c
    POP EBP                             ; 00487421
    POP EDI                             ; 00487422
    POP ESI                             ; 00487423
    RET                                 ; 00487424

