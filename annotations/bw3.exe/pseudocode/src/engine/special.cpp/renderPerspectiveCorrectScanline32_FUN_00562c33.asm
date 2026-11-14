; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[47]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 004049c4
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 004062ef
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 0040471e
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406dd5
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406c95
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405519
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405639
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406af0 at 00406b1b
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 004057dc
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610 at 00406640
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_006048a4
;   undefined4 DAT_006048e0
;   undefined4 DAT_006048e4
;   undefined4 DAT_006048ec
;   undefined4 DAT_00604908
;   undefined4 DAT_0060490c
;   undefined4 DAT_00604d10
;   undefined4 DAT_00604d14
;   undefined4 DAT_00604d18
;   undefined1 DAT_00604df8
;   undefined1 DAT_00604e18
;   undefined4 DAT_00604e38
;   undefined4 DAT_00604e58
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00562c33
        ;   Label: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
    PUSH EDI                            ; 00562c34
    PUSH EBP                            ; 00562c35
    MOV EAX,dword ptr [ESI + 0x8]       ; 00562c36
    MOV ECX,dword ptr [EDI + 0x8]       ; 00562c39
    CMP EAX,ECX                         ; 00562c3c
    JBE 0x00562c43                      ; 00562c3e
        ;   XREF to: 00562c43 (CONDITIONAL_JUMP)  ; LAB_00562c43
    XCHG EAX,ECX                        ; 00562c40
    XCHG EDI,ESI                        ; 00562c41
    SHR ECX,0x10                        ; 00562c43
        ;   Label: LAB_00562c43
    SHR EAX,0x10                        ; 00562c46
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00562c49 | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 00562c50 | DAT_01c5faec
    SUB ECX,EAX                         ; 00562c57
    JLE 0x00562e1d                      ; 00562c59
        ;   XREF to: 00562e1d (CONDITIONAL_JUMP)  ; LAB_00562e1d
    LEA EBX,[EBX + EAX*0x4]             ; 00562c5f
    SHL ECX,0x2                         ; 00562c62
    LEA EBP,[EBP + EAX*0x4]             ; 00562c65
    MOV dword ptr [0x006048a4],ECX      ; 00562c69 | DAT_006048a4
    MOV dword ptr [0x00604908],EBX      ; 00562c6f | DAT_00604908
    MOV dword ptr [0x0060490c],EBP      ; 00562c75 | DAT_0060490c
    CMP dword ptr [0x01c6e2b4],0x80     ; 00562c7b | DAT_01c6e2b4
    JZ 0x00562e28                       ; 00562c85
        ;   XREF to: 00562e28 (CONDITIONAL_JUMP)  ; LAB_00562e28
    CMP dword ptr [0x01c6e2b8],0x5      ; 00562c8b | DAT_01c6e2b8
    JNZ 0x00562d04                      ; 00562c92
        ;   XREF to: 00562d04 (CONDITIONAL_JUMP)  ; LAB_00562d04
    MOV EAX,dword ptr [ESI + 0x18]      ; 00562c94
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562c97
    CDQ                                 ; 00562c9a
    SHLD EDX,EAX,0x18                   ; 00562c9b
    SHL EAX,0x18                        ; 00562c9f
    IDIV EBX                            ; 00562ca2
    MOV [0x006048e0],EAX                ; 00562ca4 | DAT_006048e0
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562ca9
    MOV EBX,dword ptr [EDI + 0x28]      ; 00562cac
    CDQ                                 ; 00562caf
    SHLD EDX,EAX,0x18                   ; 00562cb0
    SHL EAX,0x18                        ; 00562cb4
    IDIV EBX                            ; 00562cb7
    SUB EAX,dword ptr [0x006048e0]      ; 00562cb9 | DAT_006048e0
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562cbf
    MOV dword ptr [0x00604d10],EDX      ; 00562cc5 | DAT_00604d10
    MOV EAX,dword ptr [ESI + 0x20]      ; 00562ccb
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562cce
    CDQ                                 ; 00562cd1
    SHLD EDX,EAX,0x18                   ; 00562cd2
    SHL EAX,0x18                        ; 00562cd6
    IDIV EBX                            ; 00562cd9
    MOV [0x006048e4],EAX                ; 00562cdb | DAT_006048e4
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562ce0
    MOV EBX,dword ptr [EDI + 0x28]      ; 00562ce3
    CDQ                                 ; 00562ce6
    SHLD EDX,EAX,0x18                   ; 00562ce7
    SHL EAX,0x18                        ; 00562ceb
    IDIV EBX                            ; 00562cee
    SUB EAX,dword ptr [0x006048e4]      ; 00562cf0 | DAT_006048e4
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562cf6
    MOV dword ptr [0x00604d14],EDX      ; 00562cfc | DAT_00604d14
    JMP 0x00562d38                      ; 00562d02
        ;   XREF to: 00562d38 (UNCONDITIONAL_JUMP)  ; LAB_00562d38
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562d04
        ;   Label: LAB_00562d04
    MOV EBX,dword ptr [ESI + 0x18]      ; 00562d07
    SUB EAX,EBX                         ; 00562d0a
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562d0c
    MOV dword ptr [0x006048e0],EBX      ; 00562d12 | DAT_006048e0
    MOV dword ptr [0x00604d10],EDX      ; 00562d18 | DAT_00604d10
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562d1e
    MOV EBX,dword ptr [ESI + 0x20]      ; 00562d21
    SUB EAX,EBX                         ; 00562d24
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562d26
    MOV dword ptr [0x006048e4],EBX      ; 00562d2c | DAT_006048e4
    MOV dword ptr [0x00604d14],EDX      ; 00562d32 | DAT_00604d14
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562d38
        ;   Label: LAB_00562d38
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562d3b
    SUB EAX,EBX                         ; 00562d3e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562d40
    MOV dword ptr [0x006048ec],EBX      ; 00562d46 | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00562d4c | DAT_00604d18
    MOV EBP,dword ptr [0x006048e0]      ; 00562d52 | DAT_006048e0
    MOV EDX,dword ptr [0x006048e4]      ; 00562d58 | DAT_006048e4
    MOV ESI,dword ptr [0x006048ec]      ; 00562d5e | DAT_006048ec
    MOV EDI,0x0                         ; 00562d64
    CMP dword ptr [0x01c6ced4],0x0      ; 00562d69 | DAT_01c6ced4
    JNZ 0x00562e1d                      ; 00562d70
        ;   XREF to: 00562e1d (CONDITIONAL_JUMP)  ; LAB_00562e1d
    TEST dword ptr [0x01c6e2b4],0x2     ; 00562d76 | DAT_01c6e2b4
    JNZ 0x00562e1d                      ; 00562d80
        ;   XREF to: 00562e1d (CONDITIONAL_JUMP)  ; LAB_00562e1d
    TEST dword ptr [0x01c6e2b4],0x40    ; 00562d86 | DAT_01c6e2b4
        ;   Label: LAB_00562d86
    JZ 0x00562d9e                       ; 00562d90
        ;   XREF to: 00562d9e (CONDITIONAL_JUMP)  ; LAB_00562d9e
    LEA EAX,[EDI]                       ; 00562d92
    ADD EAX,dword ptr [0x0060490c]      ; 00562d94 | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 00562d9a
    JL 0x00562dfb                       ; 00562d9c
        ;   XREF to: 00562dfb (CONDITIONAL_JUMP)  ; LAB_00562dfb
    TEST dword ptr [0x01c6e2b4],0x1     ; 00562d9e | DAT_01c6e2b4
        ;   Label: LAB_00562d9e
    JZ 0x00562e21                       ; 00562da8
        ;   XREF to: 00562e21 (CONDITIONAL_JUMP)  ; LAB_00562e21
    MOV CL,byte ptr [0x00604df8]        ; 00562daa | DAT_00604df8
    MOV EAX,EBP                         ; 00562db0
    SHR EAX,CL                          ; 00562db2
    AND EAX,dword ptr [0x00604e38]      ; 00562db4 | DAT_00604e38
    MOV CL,byte ptr [0x00604e18]        ; 00562dba | DAT_00604e18
    MOV EBX,EDX                         ; 00562dc0
    SHR EBX,CL                          ; 00562dc2
    AND EBX,dword ptr [0x00604e58]      ; 00562dc4 | DAT_00604e58
    ADD EAX,dword ptr [0x01c6ced0]      ; 00562dca | DAT_01c6ced0
    ADD EAX,EBX                         ; 00562dd0
    MOVZX EAX,byte ptr [EAX]            ; 00562dd2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 00562dd5 | DAT_01c6a974
    MOV EBX,dword ptr [0x00604908]      ; 00562ddc | DAT_00604908
        ;   Label: LAB_00562ddc
    ADD EBX,EDI                         ; 00562de2
    MOV dword ptr [EBX],EAX             ; 00562de4
    TEST dword ptr [0x01c6e2b4],0x80    ; 00562de6 | DAT_01c6e2b4
    JZ 0x00562dfb                       ; 00562df0
        ;   XREF to: 00562dfb (CONDITIONAL_JUMP)  ; LAB_00562dfb
    MOV EAX,[0x0060490c]                ; 00562df2 | DAT_0060490c
    ADD EAX,EDI                         ; 00562df7
    MOV dword ptr [EAX],ESI             ; 00562df9
    ADD EDI,0x4                         ; 00562dfb
        ;   Label: LAB_00562dfb
    CMP EDI,dword ptr [0x006048a4]      ; 00562dfe | DAT_006048a4
    JNC 0x00562e1d                      ; 00562e04
        ;   XREF to: 00562e1d (CONDITIONAL_JUMP)  ; LAB_00562e1d
    ADD EBP,dword ptr [0x00604d10]      ; 00562e06 | DAT_00604d10
    ADD EDX,dword ptr [0x00604d14]      ; 00562e0c | DAT_00604d14
    ADD ESI,dword ptr [0x00604d18]      ; 00562e12 | DAT_00604d18
    JMP 0x00562d86                      ; 00562e18
        ;   XREF to: 00562d86 (UNCONDITIONAL_JUMP)  ; LAB_00562d86
    POP EBP                             ; 00562e1d
        ;   Label: LAB_00562e1d
    POP EDI                             ; 00562e1e
    POP ESI                             ; 00562e1f
    RET                                 ; 00562e20
    MOV EAX,[0x01c6b5c0]                ; 00562e21 | DAT_01c6b5c0
        ;   Label: LAB_00562e21
    JMP 0x00562ddc                      ; 00562e26
        ;   XREF to: 00562ddc (UNCONDITIONAL_JUMP)  ; LAB_00562ddc
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562e28
        ;   Label: LAB_00562e28
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562e2b
    SUB EAX,EBX                         ; 00562e2e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562e30
    MOV dword ptr [0x006048ec],EBX      ; 00562e36 | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00562e3c | DAT_00604d18
    MOV EAX,[0x006048ec]                ; 00562e42 | DAT_006048ec
    MOV EBX,dword ptr [0x00604d18]      ; 00562e47 | DAT_00604d18
    MOV ESI,dword ptr [0x0060490c]      ; 00562e4d | DAT_0060490c
    MOV ECX,dword ptr [0x006048a4]      ; 00562e53 | DAT_006048a4
    MOV dword ptr [ESI],EAX             ; 00562e59
        ;   Label: LAB_00562e59
    ADD EAX,EBX                         ; 00562e5b
    ADD ESI,0x4                         ; 00562e5d
    SUB ECX,0x4                         ; 00562e60
    JG 0x00562e59                       ; 00562e63
        ;   XREF to: 00562e59 (CONDITIONAL_JUMP)  ; LAB_00562e59
    POP EBP                             ; 00562e65
    POP EDI                             ; 00562e66
    POP ESI                             ; 00562e67
    RET                                 ; 00562e68

