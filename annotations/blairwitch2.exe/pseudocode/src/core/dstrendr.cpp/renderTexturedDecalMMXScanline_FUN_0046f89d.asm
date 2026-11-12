; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0046f89d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046a270 at 0046a37d
;
; Referenced Globals:
;   undefined4 DAT_0060d238
;   undefined4 DAT_0060d23c
;   undefined4 DAT_0060d244
;   undefined4 DAT_0060d254
;   undefined4 DAT_0060d258
;   undefined4 DAT_0060d25c
;   undefined4 DAT_0060d260
;   undefined4 DAT_0060d264
;   undefined4 DAT_0060d268
;   undefined1 DAT_0061c868
;   undefined1 DAT_0061c888
;   undefined4 DAT_0061c8a8
;   undefined4 DAT_0061c8c8
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2b64c
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046f89d
        ;   Label: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0046f89d
    PUSH EDI                            ; 0046f89e
    PUSH EBP                            ; 0046f89f
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046f8a0
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046f8a3
    CMP EAX,ECX                         ; 0046f8a6
    JBE 0x0046f8ad                      ; 0046f8a8
        ;   XREF to: 0046f8ad (CONDITIONAL_JUMP)  ; LAB_0046f8ad
    XCHG EAX,ECX                        ; 0046f8aa
    XCHG EDI,ESI                        ; 0046f8ab
    SHR ECX,0x10                        ; 0046f8ad
        ;   Label: LAB_0046f8ad
    SHR EAX,0x10                        ; 0046f8b0
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0046f8b3 | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046f8ba | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046f8c1
    JLE 0x0046f9b6                      ; 0046f8c3
        ;   XREF to: 0046f9b6 (CONDITIONAL_JUMP)  ; LAB_0046f9b6
    LEA EBX,[EBX + EAX*0x4]             ; 0046f8c9
    SHL ECX,0x2                         ; 0046f8cc
    LEA EBP,[EBP + EAX*0x4]             ; 0046f8cf
    MOV dword ptr [0x0060d264],ECX      ; 0046f8d3 | DAT_0060d264
    MOV dword ptr [0x0060d260],EBX      ; 0046f8d9 | DAT_0060d260
    MOV dword ptr [0x0060d268],EBP      ; 0046f8df | DAT_0060d268
    MOV EAX,dword ptr [EDI + 0x18]      ; 0046f8e5
    MOV EBX,dword ptr [ESI + 0x18]      ; 0046f8e8
    SUB EAX,EBX                         ; 0046f8eb
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0046f8ed | DAT_01c35e74
    MOV dword ptr [0x0060d238],EBX      ; 0046f8f3 | DAT_0060d238
    MOV dword ptr [0x0060d254],EDX      ; 0046f8f9 | DAT_0060d254
    MOV EAX,dword ptr [EDI + 0x20]      ; 0046f8ff
    MOV EBX,dword ptr [ESI + 0x20]      ; 0046f902
    SUB EAX,EBX                         ; 0046f905
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0046f907 | DAT_01c35e74
    MOV dword ptr [0x0060d23c],EBX      ; 0046f90d | DAT_0060d23c
    MOV dword ptr [0x0060d258],EDX      ; 0046f913 | DAT_0060d258
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046f919
    MOV EBX,dword ptr [ESI + 0x28]      ; 0046f91c
    SUB EAX,EBX                         ; 0046f91f
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0046f921 | DAT_01c35e74
    MOV dword ptr [0x0060d244],EBX      ; 0046f927 | DAT_0060d244
    MOV dword ptr [0x0060d25c],EDX      ; 0046f92d | DAT_0060d25c
    MOV ECX,dword ptr [0x0060d238]      ; 0046f933 | DAT_0060d238
    MOV EDX,dword ptr [0x0060d23c]      ; 0046f939 | DAT_0060d23c
    MOV EDI,0x0                         ; 0046f93f
    MOV ESI,dword ptr [0x0060d244]      ; 0046f944 | DAT_0060d244
    MOV EAX,[0x0060d268]                ; 0046f94a | DAT_0060d268
        ;   Label: LAB_0046f94a
    ADD EAX,EDI                         ; 0046f94f
    CMP ESI,dword ptr [EAX]             ; 0046f951
    JL 0x0046f997                       ; 0046f953
        ;   XREF to: 0046f997 (CONDITIONAL_JUMP)  ; LAB_0046f997
    MOVD MM0,ECX                        ; 0046f955
    MOVD MM2,EDX                        ; 0046f958
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0046f95b | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0046f962 | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0046f969 | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0046f970 | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0046f977
    MOVD EBX,MM0                        ; 0046f97a
    ADD EBX,dword ptr [0x01c37770]      ; 0046f97d | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0046f983
    MOV EAX,dword ptr [EAX*0x4 + 0x1c35214] ; 0046f986 | DAT_01c35214
    MOV EBX,dword ptr [0x0060d260]      ; 0046f98d | DAT_0060d260
    ADD EBX,EDI                         ; 0046f993
    MOV dword ptr [EBX],EAX             ; 0046f995
    ADD EDI,0x4                         ; 0046f997
        ;   Label: LAB_0046f997
    CMP EDI,dword ptr [0x0060d264]      ; 0046f99a | DAT_0060d264
    JA 0x0046f9b6                       ; 0046f9a0
        ;   XREF to: 0046f9b6 (CONDITIONAL_JUMP)  ; LAB_0046f9b6
    ADD ECX,dword ptr [0x0060d254]      ; 0046f9a2 | DAT_0060d254
    ADD EDX,dword ptr [0x0060d258]      ; 0046f9a8 | DAT_0060d258
    ADD ESI,dword ptr [0x0060d25c]      ; 0046f9ae | DAT_0060d25c
    JMP 0x0046f94a                      ; 0046f9b4
        ;   XREF to: 0046f94a (UNCONDITIONAL_JUMP)  ; LAB_0046f94a
    POP EBP                             ; 0046f9b6
        ;   Label: LAB_0046f9b6
    EMMS                                ; 0046f9b7
    POP EDI                             ; 0046f9b9
    POP ESI                             ; 0046f9ba
    RET                                 ; 0046f9bb

