; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; Referenced Globals:
;   undefined4 DAT_00614518
;   undefined4 DAT_0061451c
;   undefined4 DAT_00614534
;   undefined4 DAT_00614538
;   undefined4 DAT_00614540
;   undefined4 DAT_00614544
;   undefined1 DAT_00623eb8
;   undefined1 DAT_00623ed8
;   undefined4 DAT_00623ef8
;   undefined4 DAT_00623f18
;   undefined4 DAT_01c50930
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048a7d9
        ;   Label: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9
    PUSH EDI                            ; 0048a7da
    PUSH EBP                            ; 0048a7db
    MOV EAX,dword ptr [ESI + 0x8]       ; 0048a7dc
    MOV ECX,dword ptr [EDI + 0x8]       ; 0048a7df
    CMP EAX,ECX                         ; 0048a7e2
    JBE 0x0048a7e9                      ; 0048a7e4
        ;   XREF to: 0048a7e9 (CONDITIONAL_JUMP)  ; LAB_0048a7e9
    XCHG EAX,ECX                        ; 0048a7e6
    XCHG EDI,ESI                        ; 0048a7e7
    SHR ECX,0x10                        ; 0048a7e9
        ;   Label: LAB_0048a7e9
    SHR EAX,0x10                        ; 0048a7ec
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0048a7ef
    SUB ECX,EAX                         ; 0048a7f6
    JLE 0x0048a8c0                      ; 0048a7f8
        ;   XREF to: 0048a8c0 (CONDITIONAL_JUMP)  ; LAB_0048a8c0
    LEA EBX,[EBX + EAX*0x4]             ; 0048a7fe
    SHL ECX,0x2                         ; 0048a801
    MOV dword ptr [0x00614544],ECX      ; 0048a804 | DAT_00614544
    MOV dword ptr [0x00614540],EBX      ; 0048a80a | DAT_00614540
    MOV EAX,dword ptr [EDI + 0x18]      ; 0048a810
    MOV EBX,dword ptr [ESI + 0x18]      ; 0048a813
    SUB EAX,EBX                         ; 0048a816
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0048a818
    MOV dword ptr [0x00614518],EBX      ; 0048a81e | DAT_00614518
    MOV dword ptr [0x00614534],EDX      ; 0048a824 | DAT_00614534
    MOV EAX,dword ptr [EDI + 0x20]      ; 0048a82a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0048a82d
    SUB EAX,EBX                         ; 0048a830
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0048a832
    MOV dword ptr [0x0061451c],EBX      ; 0048a838 | DAT_0061451c
    MOV dword ptr [0x00614538],EDX      ; 0048a83e | DAT_00614538
    MOV ECX,dword ptr [0x00614518]      ; 0048a844 | DAT_00614518
    MOV EDX,dword ptr [0x0061451c]      ; 0048a84a | DAT_0061451c
    MOV EDI,0x0                         ; 0048a850
    MOVD MM0,ECX                        ; 0048a855
        ;   Label: LAB_0048a855
    MOVD MM2,EDX                        ; 0048a858
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0048a85b | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0048a862 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0048a869 | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0048a870 | DAT_00623f18
    PADDD MM0,MM2                       ; 0048a877
    MOVD EBX,MM0                        ; 0048a87a
    SHL EBX,0x2                         ; 0048a87d
    ADD EBX,dword ptr [0x01c50930]      ; 0048a880 | DAT_01c50930
    MOVD MM0,dword ptr [EBX]            ; 0048a886
    MOV EBX,dword ptr [0x00614540]      ; 0048a889 | DAT_00614540
    ADD EBX,EDI                         ; 0048a88f
    MOVD dword ptr [EBX],MM0            ; 0048a891
    ADD EDI,0x4                         ; 0048a894
    CMP EDI,dword ptr [0x00614544]      ; 0048a897 | DAT_00614544
    JNC 0x0048a8c0                      ; 0048a89d
        ;   XREF to: 0048a8c0 (CONDITIONAL_JUMP)  ; LAB_0048a8c0
    ADD ECX,dword ptr [0x00614534]      ; 0048a89f | DAT_00614534
    PADDW MM5,MM6                       ; 0048a8a5
    ADD EDX,dword ptr [0x00614538]      ; 0048a8a8 | DAT_00614538
    MOVQ MM0,MM5                        ; 0048a8ae
    JMP 0x0048a855                      ; 0048a8b1
        ;   XREF to: 0048a855 (UNCONDITIONAL_JUMP)  ; LAB_0048a855
    POP EBP                             ; 0048a8c0
        ;   Label: LAB_0048a8c0
    EMMS                                ; 0048a8c1
    POP EDI                             ; 0048a8c3
    POP ESI                             ; 0048a8c4
    RET                                 ; 0048a8c5

