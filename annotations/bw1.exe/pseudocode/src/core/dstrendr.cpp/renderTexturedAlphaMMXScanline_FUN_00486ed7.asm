; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0 at 00482d48
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0 at 00482924
;
; Referenced Globals:
;   undefined4 DAT_00614518
;   undefined4 DAT_0061451c
;   undefined4 DAT_00614524
;   undefined4 DAT_00614534
;   undefined4 DAT_00614538
;   undefined4 DAT_0061453c
;   undefined4 DAT_00614544
;   undefined4 DAT_00614548
;   undefined1 DAT_00623eb8
;   undefined1 DAT_00623ed8
;   undefined4 DAT_00623ef8
;   undefined4 DAT_00623f18
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4f034
;   undefined4 DAT_01c50930
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486ed7
        ;   Label: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7
    PUSH EDI                            ; 00486ed8
    PUSH EBP                            ; 00486ed9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486eda
    MOV ECX,dword ptr [EDI + 0x8]       ; 00486edd
    CMP EAX,ECX                         ; 00486ee0
    JBE 0x00486ee7                      ; 00486ee2
        ;   XREF to: 00486ee7 (CONDITIONAL_JUMP)  ; LAB_00486ee7
    XCHG EAX,ECX                        ; 00486ee4
    XCHG EDI,ESI                        ; 00486ee5
    SHR ECX,0x10                        ; 00486ee7
        ;   Label: LAB_00486ee7
    SHR EAX,0x10                        ; 00486eea
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4354c] ; 00486eed | DAT_01c4354c
    SUB ECX,EAX                         ; 00486ef4
    JLE 0x00486fec                      ; 00486ef6
        ;   XREF to: 00486fec (CONDITIONAL_JUMP)  ; LAB_00486fec
    SHL ECX,0x1                         ; 00486efc
    LEA EBP,[EBP + EAX*0x2]             ; 00486efe
    MOV dword ptr [0x00614544],ECX      ; 00486f02 | DAT_00614544
    MOV dword ptr [0x00614548],EBP      ; 00486f08 | DAT_00614548
    MOV EAX,dword ptr [EDI + 0x18]      ; 00486f0e
    MOV EBX,dword ptr [ESI + 0x18]      ; 00486f11
    SUB EAX,EBX                         ; 00486f14
    IMUL dword ptr [ECX*0x2 + 0x1c4f034] ; 00486f16 | DAT_01c4f034
    MOV dword ptr [0x00614518],EBX      ; 00486f1d | DAT_00614518
    MOV dword ptr [0x00614534],EDX      ; 00486f23 | DAT_00614534
    MOV EAX,dword ptr [EDI + 0x20]      ; 00486f29
    MOV EBX,dword ptr [ESI + 0x20]      ; 00486f2c
    SUB EAX,EBX                         ; 00486f2f
    IMUL dword ptr [ECX*0x2 + 0x1c4f034] ; 00486f31 | DAT_01c4f034
    MOV dword ptr [0x0061451c],EBX      ; 00486f38 | DAT_0061451c
    MOV dword ptr [0x00614538],EDX      ; 00486f3e | DAT_00614538
    MOV EAX,dword ptr [EDI + 0x28]      ; 00486f44
    MOV EBX,dword ptr [ESI + 0x28]      ; 00486f47
    SUB EAX,EBX                         ; 00486f4a
    IMUL dword ptr [ECX*0x2 + 0x1c4f034] ; 00486f4c | DAT_01c4f034
    MOV dword ptr [0x00614524],EBX      ; 00486f53 | DAT_00614524
    MOV dword ptr [0x0061453c],EDX      ; 00486f59 | DAT_0061453c
    MOV ECX,dword ptr [0x00614518]      ; 00486f5f | DAT_00614518
    MOV EDX,dword ptr [0x0061451c]      ; 00486f65 | DAT_0061451c
    MOV EDI,0x0                         ; 00486f6b
    MOV ESI,dword ptr [0x00614524]      ; 00486f70 | DAT_00614524
    MOV EBP,dword ptr [0x00614548]      ; 00486f76 | DAT_00614548
        ;   Label: LAB_00486f76
    ADD EBP,EDI                         ; 00486f7c
    MOVZX EAX,word ptr [EBP]            ; 00486f7e
    CMP ESI,EAX                         ; 00486f82
    JNC 0x00486fcd                      ; 00486f84
        ;   XREF to: 00486fcd (CONDITIONAL_JUMP)  ; LAB_00486fcd
    MOVD MM0,ECX                        ; 00486f86
    MOVD MM2,EDX                        ; 00486f89
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 00486f8c | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 00486f93 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 00486f9a | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 00486fa1 | DAT_00623f18
    PADDD MM0,MM2                       ; 00486fa8
    MOVD EBX,MM0                        ; 00486fab
    MOV EAX,[0x01c50934]                ; 00486fae | DAT_01c50934
    TEST EAX,0xffffffff                 ; 00486fb3
    JNZ 0x00486fbf                      ; 00486fb8
        ;   XREF to: 00486fbf (CONDITIONAL_JUMP)  ; LAB_00486fbf
    MOV EAX,[0x01c50930]                ; 00486fba | DAT_01c50930
    ADD EBX,EAX                         ; 00486fbf
        ;   Label: LAB_00486fbf
    MOVZX EAX,byte ptr [EBX]            ; 00486fc1
    CMP EAX,0x0                         ; 00486fc4
    JZ 0x00486fcd                       ; 00486fc7
        ;   XREF to: 00486fcd (CONDITIONAL_JUMP)  ; LAB_00486fcd
    MOV word ptr [EBP],SI               ; 00486fc9
    ADD EDI,0x2                         ; 00486fcd
        ;   Label: LAB_00486fcd
    CMP EDI,dword ptr [0x00614544]      ; 00486fd0 | DAT_00614544
    JA 0x00486fec                       ; 00486fd6
        ;   XREF to: 00486fec (CONDITIONAL_JUMP)  ; LAB_00486fec
    ADD ECX,dword ptr [0x00614534]      ; 00486fd8 | DAT_00614534
    ADD EDX,dword ptr [0x00614538]      ; 00486fde | DAT_00614538
    ADD ESI,dword ptr [0x0061453c]      ; 00486fe4 | DAT_0061453c
    JMP 0x00486f76                      ; 00486fea
        ;   XREF to: 00486f76 (UNCONDITIONAL_JUMP)  ; LAB_00486f76
    POP EBP                             ; 00486fec
        ;   Label: LAB_00486fec
    EMMS                                ; 00486fed
    POP EDI                             ; 00486fef
    POP ESI                             ; 00486ff0
    RET                                 ; 00486ff1

