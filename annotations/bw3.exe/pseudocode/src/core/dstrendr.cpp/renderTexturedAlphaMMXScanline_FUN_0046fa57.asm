; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0 at 0046c428
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90 at 0046c004
;
; Referenced Globals:
;   undefined4 DAT_005f4a98
;   undefined4 DAT_005f4a9c
;   undefined4 DAT_005f4aa4
;   undefined4 DAT_005f4ab4
;   undefined4 DAT_005f4ab8
;   undefined4 DAT_005f4abc
;   undefined4 DAT_005f4ac4
;   undefined4 DAT_005f4ac8
;   undefined1 DAT_00604df8
;   undefined1 DAT_00604e18
;   undefined4 DAT_00604e38
;   undefined4 DAT_00604e58
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6b5d4
;   undefined4 DAT_01c6ced0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046fa57
        ;   Label: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57
    PUSH EDI                            ; 0046fa58
    PUSH EBP                            ; 0046fa59
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046fa5a
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046fa5d
    CMP EAX,ECX                         ; 0046fa60
    JBE 0x0046fa67                      ; 0046fa62
        ;   XREF to: 0046fa67 (CONDITIONAL_JUMP)  ; LAB_0046fa67
    XCHG EAX,ECX                        ; 0046fa64
    XCHG EDI,ESI                        ; 0046fa65
    SHR ECX,0x10                        ; 0046fa67
        ;   Label: LAB_0046fa67
    SHR EAX,0x10                        ; 0046fa6a
    MOV EBP,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046fa6d | DAT_01c5faec
    SUB ECX,EAX                         ; 0046fa74
    JLE 0x0046fb6c                      ; 0046fa76
        ;   XREF to: 0046fb6c (CONDITIONAL_JUMP)  ; LAB_0046fb6c
    SHL ECX,0x1                         ; 0046fa7c
    LEA EBP,[EBP + EAX*0x2]             ; 0046fa7e
    MOV dword ptr [0x005f4ac4],ECX      ; 0046fa82 | DAT_005f4ac4
    MOV dword ptr [0x005f4ac8],EBP      ; 0046fa88 | DAT_005f4ac8
    MOV EAX,dword ptr [EDI + 0x18]      ; 0046fa8e
    MOV EBX,dword ptr [ESI + 0x18]      ; 0046fa91
    SUB EAX,EBX                         ; 0046fa94
    IMUL dword ptr [ECX*0x2 + 0x1c6b5d4] ; 0046fa96 | DAT_01c6b5d4
    MOV dword ptr [0x005f4a98],EBX      ; 0046fa9d | DAT_005f4a98
    MOV dword ptr [0x005f4ab4],EDX      ; 0046faa3 | DAT_005f4ab4
    MOV EAX,dword ptr [EDI + 0x20]      ; 0046faa9
    MOV EBX,dword ptr [ESI + 0x20]      ; 0046faac
    SUB EAX,EBX                         ; 0046faaf
    IMUL dword ptr [ECX*0x2 + 0x1c6b5d4] ; 0046fab1 | DAT_01c6b5d4
    MOV dword ptr [0x005f4a9c],EBX      ; 0046fab8 | DAT_005f4a9c
    MOV dword ptr [0x005f4ab8],EDX      ; 0046fabe | DAT_005f4ab8
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046fac4
    MOV EBX,dword ptr [ESI + 0x28]      ; 0046fac7
    SUB EAX,EBX                         ; 0046faca
    IMUL dword ptr [ECX*0x2 + 0x1c6b5d4] ; 0046facc | DAT_01c6b5d4
    MOV dword ptr [0x005f4aa4],EBX      ; 0046fad3 | DAT_005f4aa4
    MOV dword ptr [0x005f4abc],EDX      ; 0046fad9 | DAT_005f4abc
    MOV ECX,dword ptr [0x005f4a98]      ; 0046fadf | DAT_005f4a98
    MOV EDX,dword ptr [0x005f4a9c]      ; 0046fae5 | DAT_005f4a9c
    MOV EDI,0x0                         ; 0046faeb
    MOV ESI,dword ptr [0x005f4aa4]      ; 0046faf0 | DAT_005f4aa4
    MOV EBP,dword ptr [0x005f4ac8]      ; 0046faf6 | DAT_005f4ac8
        ;   Label: LAB_0046faf6
    ADD EBP,EDI                         ; 0046fafc
    MOVZX EAX,word ptr [EBP]            ; 0046fafe
    CMP ESI,EAX                         ; 0046fb02
    JNC 0x0046fb4d                      ; 0046fb04
        ;   XREF to: 0046fb4d (CONDITIONAL_JUMP)  ; LAB_0046fb4d
    MOVD MM0,ECX                        ; 0046fb06
    MOVD MM2,EDX                        ; 0046fb09
    PSRLQ MM0,qword ptr [0x00604df8]    ; 0046fb0c | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 0046fb13 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 0046fb1a | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 0046fb21 | DAT_00604e58
    PADDD MM0,MM2                       ; 0046fb28
    MOVD EBX,MM0                        ; 0046fb2b
    MOV EAX,[0x01c6ced4]                ; 0046fb2e | DAT_01c6ced4
    TEST EAX,0xffffffff                 ; 0046fb33
    JNZ 0x0046fb3f                      ; 0046fb38
        ;   XREF to: 0046fb3f (CONDITIONAL_JUMP)  ; LAB_0046fb3f
    MOV EAX,[0x01c6ced0]                ; 0046fb3a | DAT_01c6ced0
    ADD EBX,EAX                         ; 0046fb3f
        ;   Label: LAB_0046fb3f
    MOVZX EAX,byte ptr [EBX]            ; 0046fb41
    CMP EAX,0x0                         ; 0046fb44
    JZ 0x0046fb4d                       ; 0046fb47
        ;   XREF to: 0046fb4d (CONDITIONAL_JUMP)  ; LAB_0046fb4d
    MOV word ptr [EBP],SI               ; 0046fb49
    ADD EDI,0x2                         ; 0046fb4d
        ;   Label: LAB_0046fb4d
    CMP EDI,dword ptr [0x005f4ac4]      ; 0046fb50 | DAT_005f4ac4
    JA 0x0046fb6c                       ; 0046fb56
        ;   XREF to: 0046fb6c (CONDITIONAL_JUMP)  ; LAB_0046fb6c
    ADD ECX,dword ptr [0x005f4ab4]      ; 0046fb58 | DAT_005f4ab4
    ADD EDX,dword ptr [0x005f4ab8]      ; 0046fb5e | DAT_005f4ab8
    ADD ESI,dword ptr [0x005f4abc]      ; 0046fb64 | DAT_005f4abc
    JMP 0x0046faf6                      ; 0046fb6a
        ;   XREF to: 0046faf6 (UNCONDITIONAL_JUMP)  ; LAB_0046faf6
    POP EBP                             ; 0046fb6c
        ;   Label: LAB_0046fb6c
    EMMS                                ; 0046fb6d
    POP EDI                             ; 0046fb6f
    POP ESI                             ; 0046fb70
    RET                                 ; 0046fb71

