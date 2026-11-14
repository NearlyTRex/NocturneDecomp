; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780 at 0048288d
;
; Referenced Globals:
;   undefined4 DAT_00614518
;   undefined4 DAT_0061451c
;   undefined4 DAT_00614524
;   undefined4 DAT_00614534
;   undefined4 DAT_00614538
;   undefined4 DAT_0061453c
;   undefined4 DAT_00614540
;   undefined4 DAT_00614544
;   undefined4 DAT_00614548
;   undefined1 DAT_00623eb8
;   undefined1 DAT_00623ed8
;   undefined4 DAT_00623ef8
;   undefined4 DAT_00623f18
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4480c
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00487d8d
        ;   Label: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_00487d8d
    PUSH EDI                            ; 00487d8e
    PUSH EBP                            ; 00487d8f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00487d90
    MOV ECX,dword ptr [EDI + 0x8]       ; 00487d93
    CMP EAX,ECX                         ; 00487d96
    JBE 0x00487d9d                      ; 00487d98
        ;   XREF to: 00487d9d (CONDITIONAL_JUMP)  ; LAB_00487d9d
    XCHG EAX,ECX                        ; 00487d9a
    XCHG EDI,ESI                        ; 00487d9b
    SHR ECX,0x10                        ; 00487d9d
        ;   Label: LAB_00487d9d
    SHR EAX,0x10                        ; 00487da0
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 00487da3 | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 00487daa | DAT_01c4354c
    SUB ECX,EAX                         ; 00487db1
    JLE 0x00487ea6                      ; 00487db3
        ;   XREF to: 00487ea6 (CONDITIONAL_JUMP)  ; LAB_00487ea6
    LEA EBX,[EBX + EAX*0x4]             ; 00487db9
    SHL ECX,0x2                         ; 00487dbc
    LEA EBP,[EBP + EAX*0x4]             ; 00487dbf
    MOV dword ptr [0x00614544],ECX      ; 00487dc3 | DAT_00614544
    MOV dword ptr [0x00614540],EBX      ; 00487dc9 | DAT_00614540
    MOV dword ptr [0x00614548],EBP      ; 00487dcf | DAT_00614548
    MOV EAX,dword ptr [EDI + 0x18]      ; 00487dd5
    MOV EBX,dword ptr [ESI + 0x18]      ; 00487dd8
    SUB EAX,EBX                         ; 00487ddb
    IMUL dword ptr [ECX + 0x1c4f034]    ; 00487ddd | DAT_01c4f034
    MOV dword ptr [0x00614518],EBX      ; 00487de3 | DAT_00614518
    MOV dword ptr [0x00614534],EDX      ; 00487de9 | DAT_00614534
    MOV EAX,dword ptr [EDI + 0x20]      ; 00487def
    MOV EBX,dword ptr [ESI + 0x20]      ; 00487df2
    SUB EAX,EBX                         ; 00487df5
    IMUL dword ptr [ECX + 0x1c4f034]    ; 00487df7 | DAT_01c4f034
    MOV dword ptr [0x0061451c],EBX      ; 00487dfd | DAT_0061451c
    MOV dword ptr [0x00614538],EDX      ; 00487e03 | DAT_00614538
    MOV EAX,dword ptr [EDI + 0x28]      ; 00487e09
    MOV EBX,dword ptr [ESI + 0x28]      ; 00487e0c
    SUB EAX,EBX                         ; 00487e0f
    IMUL dword ptr [ECX + 0x1c4f034]    ; 00487e11 | DAT_01c4f034
    MOV dword ptr [0x00614524],EBX      ; 00487e17 | DAT_00614524
    MOV dword ptr [0x0061453c],EDX      ; 00487e1d | DAT_0061453c
    MOV ECX,dword ptr [0x00614518]      ; 00487e23 | DAT_00614518
    MOV EDX,dword ptr [0x0061451c]      ; 00487e29 | DAT_0061451c
    MOV EDI,0x0                         ; 00487e2f
    MOV ESI,dword ptr [0x00614524]      ; 00487e34 | DAT_00614524
    MOV EAX,[0x00614548]                ; 00487e3a | DAT_00614548
        ;   Label: LAB_00487e3a
    ADD EAX,EDI                         ; 00487e3f
    CMP ESI,dword ptr [EAX]             ; 00487e41
    JL 0x00487e87                       ; 00487e43
        ;   XREF to: 00487e87 (CONDITIONAL_JUMP)  ; LAB_00487e87
    MOVD MM0,ECX                        ; 00487e45
    MOVD MM2,EDX                        ; 00487e48
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 00487e4b | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 00487e52 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 00487e59 | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 00487e60 | DAT_00623f18
    PADDD MM0,MM2                       ; 00487e67
    MOVD EBX,MM0                        ; 00487e6a
    ADD EBX,dword ptr [0x01c50930]      ; 00487e6d | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 00487e73
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 00487e76 | DAT_01c4e3d4
    MOV EBX,dword ptr [0x00614540]      ; 00487e7d | DAT_00614540
    ADD EBX,EDI                         ; 00487e83
    MOV dword ptr [EBX],EAX             ; 00487e85
    ADD EDI,0x4                         ; 00487e87
        ;   Label: LAB_00487e87
    CMP EDI,dword ptr [0x00614544]      ; 00487e8a | DAT_00614544
    JA 0x00487ea6                       ; 00487e90
        ;   XREF to: 00487ea6 (CONDITIONAL_JUMP)  ; LAB_00487ea6
    ADD ECX,dword ptr [0x00614534]      ; 00487e92 | DAT_00614534
    ADD EDX,dword ptr [0x00614538]      ; 00487e98 | DAT_00614538
    ADD ESI,dword ptr [0x0061453c]      ; 00487e9e | DAT_0061453c
    JMP 0x00487e3a                      ; 00487ea4
        ;   XREF to: 00487e3a (UNCONDITIONAL_JUMP)  ; LAB_00487e3a
    POP EBP                             ; 00487ea6
        ;   Label: LAB_00487ea6
    EMMS                                ; 00487ea7
    POP EDI                             ; 00487ea9
    POP ESI                             ; 00487eaa
    RET                                 ; 00487eab

