; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4a98
;   undefined4 DAT_005f4a9c
;   undefined4 DAT_005f4ab4
;   undefined4 DAT_005f4ab8
;   undefined4 DAT_005f4ac0
;   undefined4 DAT_005f4ac4
;   undefined1 DAT_00604df8
;   undefined1 DAT_00604e18
;   undefined4 DAT_00604e38
;   undefined4 DAT_00604e58
;   undefined4 DAT_01c6ced0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00473359
        ;   Label: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_00473359
    PUSH EDI                            ; 0047335a
    PUSH EBP                            ; 0047335b
    MOV EAX,dword ptr [ESI + 0x8]       ; 0047335c
    MOV ECX,dword ptr [EDI + 0x8]       ; 0047335f
    CMP EAX,ECX                         ; 00473362
    JBE 0x00473369                      ; 00473364
        ;   XREF to: 00473369 (CONDITIONAL_JUMP)  ; LAB_00473369
    XCHG EAX,ECX                        ; 00473366
    XCHG EDI,ESI                        ; 00473367
    SHR ECX,0x10                        ; 00473369
        ;   Label: LAB_00473369
    SHR EAX,0x10                        ; 0047336c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0047336f
    SUB ECX,EAX                         ; 00473376
    JLE 0x00473440                      ; 00473378
        ;   XREF to: 00473440 (CONDITIONAL_JUMP)  ; LAB_00473440
    LEA EBX,[EBX + EAX*0x4]             ; 0047337e
    SHL ECX,0x2                         ; 00473381
    MOV dword ptr [0x005f4ac4],ECX      ; 00473384 | DAT_005f4ac4
    MOV dword ptr [0x005f4ac0],EBX      ; 0047338a | DAT_005f4ac0
    MOV EAX,dword ptr [EDI + 0x18]      ; 00473390
    MOV EBX,dword ptr [ESI + 0x18]      ; 00473393
    SUB EAX,EBX                         ; 00473396
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00473398
    MOV dword ptr [0x005f4a98],EBX      ; 0047339e | DAT_005f4a98
    MOV dword ptr [0x005f4ab4],EDX      ; 004733a4 | DAT_005f4ab4
    MOV EAX,dword ptr [EDI + 0x20]      ; 004733aa
    MOV EBX,dword ptr [ESI + 0x20]      ; 004733ad
    SUB EAX,EBX                         ; 004733b0
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 004733b2
    MOV dword ptr [0x005f4a9c],EBX      ; 004733b8 | DAT_005f4a9c
    MOV dword ptr [0x005f4ab8],EDX      ; 004733be | DAT_005f4ab8
    MOV ECX,dword ptr [0x005f4a98]      ; 004733c4 | DAT_005f4a98
    MOV EDX,dword ptr [0x005f4a9c]      ; 004733ca | DAT_005f4a9c
    MOV EDI,0x0                         ; 004733d0
    MOVD MM0,ECX                        ; 004733d5
        ;   Label: LAB_004733d5
    MOVD MM2,EDX                        ; 004733d8
    PSRLQ MM0,qword ptr [0x00604df8]    ; 004733db | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 004733e2 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 004733e9 | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 004733f0 | DAT_00604e58
    PADDD MM0,MM2                       ; 004733f7
    MOVD EBX,MM0                        ; 004733fa
    SHL EBX,0x2                         ; 004733fd
    ADD EBX,dword ptr [0x01c6ced0]      ; 00473400 | DAT_01c6ced0
    MOVD MM0,dword ptr [EBX]            ; 00473406
    MOV EBX,dword ptr [0x005f4ac0]      ; 00473409 | DAT_005f4ac0
    ADD EBX,EDI                         ; 0047340f
    MOVD dword ptr [EBX],MM0            ; 00473411
    ADD EDI,0x4                         ; 00473414
    CMP EDI,dword ptr [0x005f4ac4]      ; 00473417 | DAT_005f4ac4
    JNC 0x00473440                      ; 0047341d
        ;   XREF to: 00473440 (CONDITIONAL_JUMP)  ; LAB_00473440
    ADD ECX,dword ptr [0x005f4ab4]      ; 0047341f | DAT_005f4ab4
    PADDW MM5,MM6                       ; 00473425
    ADD EDX,dword ptr [0x005f4ab8]      ; 00473428 | DAT_005f4ab8
    MOVQ MM0,MM5                        ; 0047342e
    JMP 0x004733d5                      ; 00473431
        ;   XREF to: 004733d5 (UNCONDITIONAL_JUMP)  ; LAB_004733d5
    POP EBP                             ; 00473440
        ;   Label: LAB_00473440
    EMMS                                ; 00473441
    POP EDI                             ; 00473443
    POP ESI                             ; 00473444
    RET                                 ; 00473445

