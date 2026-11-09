; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(void)
;
;
; XREF[47]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 004049c4
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280 at 004062cf
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 0040471e
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406db5
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406c75
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405519
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405639
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406afb
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 004057dc
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004065f0 at 00406620
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_00623964
;   undefined4 DAT_006239a0
;   undefined4 DAT_006239a4
;   undefined4 DAT_006239ac
;   undefined4 DAT_006239c8
;   undefined4 DAT_006239cc
;   undefined4 DAT_00623dd0
;   undefined4 DAT_00623dd4
;   undefined4 DAT_00623dd8
;   undefined1 DAT_00623eb8
;   undefined1 DAT_00623ed8
;   undefined4 DAT_00623ef8
;   undefined4 DAT_00623f18
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4480c
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057fb03
        ;   Label: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
    PUSH EDI                            ; 0057fb04
    PUSH EBP                            ; 0057fb05
    MOV EAX,dword ptr [ESI + 0x8]       ; 0057fb06
    MOV ECX,dword ptr [EDI + 0x8]       ; 0057fb09
    CMP EAX,ECX                         ; 0057fb0c
    JBE 0x0057fb13                      ; 0057fb0e
        ;   XREF to: 0057fb13 (CONDITIONAL_JUMP)  ; LAB_0057fb13
    XCHG EAX,ECX                        ; 0057fb10
    XCHG EDI,ESI                        ; 0057fb11
    SHR ECX,0x10                        ; 0057fb13
        ;   Label: LAB_0057fb13
    SHR EAX,0x10                        ; 0057fb16
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057fb19 | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057fb20 | DAT_01c4354c
    SUB ECX,EAX                         ; 0057fb27
    JLE 0x0057fced                      ; 0057fb29
        ;   XREF to: 0057fced (CONDITIONAL_JUMP)  ; LAB_0057fced
    LEA EBX,[EBX + EAX*0x4]             ; 0057fb2f
    SHL ECX,0x2                         ; 0057fb32
    LEA EBP,[EBP + EAX*0x4]             ; 0057fb35
    MOV dword ptr [0x00623964],ECX      ; 0057fb39 | DAT_00623964
    MOV dword ptr [0x006239c8],EBX      ; 0057fb3f | DAT_006239c8
    MOV dword ptr [0x006239cc],EBP      ; 0057fb45 | DAT_006239cc
    CMP dword ptr [0x01c51d14],0x80     ; 0057fb4b | DAT_01c51d14
    JZ 0x0057fcf8                       ; 0057fb55
        ;   XREF to: 0057fcf8 (CONDITIONAL_JUMP)  ; LAB_0057fcf8
    CMP dword ptr [0x01c51d18],0x5      ; 0057fb5b | DAT_01c51d18
    JNZ 0x0057fbd4                      ; 0057fb62
        ;   XREF to: 0057fbd4 (CONDITIONAL_JUMP)  ; LAB_0057fbd4
    MOV EAX,dword ptr [ESI + 0x18]      ; 0057fb64
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fb67
    CDQ                                 ; 0057fb6a
    SHLD EDX,EAX,0x18                   ; 0057fb6b
    SHL EAX,0x18                        ; 0057fb6f
    IDIV EBX                            ; 0057fb72
    MOV [0x006239a0],EAX                ; 0057fb74 | DAT_006239a0
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057fb79
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057fb7c
    CDQ                                 ; 0057fb7f
    SHLD EDX,EAX,0x18                   ; 0057fb80
    SHL EAX,0x18                        ; 0057fb84
    IDIV EBX                            ; 0057fb87
    SUB EAX,dword ptr [0x006239a0]      ; 0057fb89 | DAT_006239a0
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fb8f
    MOV dword ptr [0x00623dd0],EDX      ; 0057fb95 | DAT_00623dd0
    MOV EAX,dword ptr [ESI + 0x20]      ; 0057fb9b
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fb9e
    CDQ                                 ; 0057fba1
    SHLD EDX,EAX,0x18                   ; 0057fba2
    SHL EAX,0x18                        ; 0057fba6
    IDIV EBX                            ; 0057fba9
    MOV [0x006239a4],EAX                ; 0057fbab | DAT_006239a4
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057fbb0
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057fbb3
    CDQ                                 ; 0057fbb6
    SHLD EDX,EAX,0x18                   ; 0057fbb7
    SHL EAX,0x18                        ; 0057fbbb
    IDIV EBX                            ; 0057fbbe
    SUB EAX,dword ptr [0x006239a4]      ; 0057fbc0 | DAT_006239a4
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fbc6
    MOV dword ptr [0x00623dd4],EDX      ; 0057fbcc | DAT_00623dd4
    JMP 0x0057fc08                      ; 0057fbd2
        ;   XREF to: 0057fc08 (UNCONDITIONAL_JUMP)  ; LAB_0057fc08
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057fbd4
        ;   Label: LAB_0057fbd4
    MOV EBX,dword ptr [ESI + 0x18]      ; 0057fbd7
    SUB EAX,EBX                         ; 0057fbda
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fbdc
    MOV dword ptr [0x006239a0],EBX      ; 0057fbe2 | DAT_006239a0
    MOV dword ptr [0x00623dd0],EDX      ; 0057fbe8 | DAT_00623dd0
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057fbee
    MOV EBX,dword ptr [ESI + 0x20]      ; 0057fbf1
    SUB EAX,EBX                         ; 0057fbf4
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fbf6
    MOV dword ptr [0x006239a4],EBX      ; 0057fbfc | DAT_006239a4
    MOV dword ptr [0x00623dd4],EDX      ; 0057fc02 | DAT_00623dd4
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057fc08
        ;   Label: LAB_0057fc08
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fc0b
    SUB EAX,EBX                         ; 0057fc0e
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fc10
    MOV dword ptr [0x006239ac],EBX      ; 0057fc16 | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057fc1c | DAT_00623dd8
    MOV EBP,dword ptr [0x006239a0]      ; 0057fc22 | DAT_006239a0
    MOV EDX,dword ptr [0x006239a4]      ; 0057fc28 | DAT_006239a4
    MOV ESI,dword ptr [0x006239ac]      ; 0057fc2e | DAT_006239ac
    MOV EDI,0x0                         ; 0057fc34
    CMP dword ptr [0x01c50934],0x0      ; 0057fc39 | DAT_01c50934
    JNZ 0x0057fced                      ; 0057fc40
        ;   XREF to: 0057fced (CONDITIONAL_JUMP)  ; LAB_0057fced
    TEST dword ptr [0x01c51d14],0x2     ; 0057fc46 | DAT_01c51d14
    JNZ 0x0057fced                      ; 0057fc50
        ;   XREF to: 0057fced (CONDITIONAL_JUMP)  ; LAB_0057fced
    TEST dword ptr [0x01c51d14],0x40    ; 0057fc56 | DAT_01c51d14
        ;   Label: LAB_0057fc56
    JZ 0x0057fc6e                       ; 0057fc60
        ;   XREF to: 0057fc6e (CONDITIONAL_JUMP)  ; LAB_0057fc6e
    LEA EAX,[EDI]                       ; 0057fc62
    ADD EAX,dword ptr [0x006239cc]      ; 0057fc64 | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057fc6a
    JL 0x0057fccb                       ; 0057fc6c
        ;   XREF to: 0057fccb (CONDITIONAL_JUMP)  ; LAB_0057fccb
    TEST dword ptr [0x01c51d14],0x1     ; 0057fc6e | DAT_01c51d14
        ;   Label: LAB_0057fc6e
    JZ 0x0057fcf1                       ; 0057fc78
        ;   XREF to: 0057fcf1 (CONDITIONAL_JUMP)  ; LAB_0057fcf1
    MOV CL,byte ptr [0x00623eb8]        ; 0057fc7a | DAT_00623eb8
    MOV EAX,EBP                         ; 0057fc80
    SHR EAX,CL                          ; 0057fc82
    AND EAX,dword ptr [0x00623ef8]      ; 0057fc84 | DAT_00623ef8
    MOV CL,byte ptr [0x00623ed8]        ; 0057fc8a | DAT_00623ed8
    MOV EBX,EDX                         ; 0057fc90
    SHR EBX,CL                          ; 0057fc92
    AND EBX,dword ptr [0x00623f18]      ; 0057fc94 | DAT_00623f18
    ADD EAX,dword ptr [0x01c50930]      ; 0057fc9a | DAT_01c50930
    ADD EAX,EBX                         ; 0057fca0
    MOVZX EAX,byte ptr [EAX]            ; 0057fca2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057fca5 | DAT_01c4e3d4
    MOV EBX,dword ptr [0x006239c8]      ; 0057fcac | DAT_006239c8
        ;   Label: LAB_0057fcac
    ADD EBX,EDI                         ; 0057fcb2
    MOV dword ptr [EBX],EAX             ; 0057fcb4
    TEST dword ptr [0x01c51d14],0x80    ; 0057fcb6 | DAT_01c51d14
    JZ 0x0057fccb                       ; 0057fcc0
        ;   XREF to: 0057fccb (CONDITIONAL_JUMP)  ; LAB_0057fccb
    MOV EAX,[0x006239cc]                ; 0057fcc2 | DAT_006239cc
    ADD EAX,EDI                         ; 0057fcc7
    MOV dword ptr [EAX],ESI             ; 0057fcc9
    ADD EDI,0x4                         ; 0057fccb
        ;   Label: LAB_0057fccb
    CMP EDI,dword ptr [0x00623964]      ; 0057fcce | DAT_00623964
    JNC 0x0057fced                      ; 0057fcd4
        ;   XREF to: 0057fced (CONDITIONAL_JUMP)  ; LAB_0057fced
    ADD EBP,dword ptr [0x00623dd0]      ; 0057fcd6 | DAT_00623dd0
    ADD EDX,dword ptr [0x00623dd4]      ; 0057fcdc | DAT_00623dd4
    ADD ESI,dword ptr [0x00623dd8]      ; 0057fce2 | DAT_00623dd8
    JMP 0x0057fc56                      ; 0057fce8
        ;   XREF to: 0057fc56 (UNCONDITIONAL_JUMP)  ; LAB_0057fc56
    POP EBP                             ; 0057fced
        ;   Label: LAB_0057fced
    POP EDI                             ; 0057fcee
    POP ESI                             ; 0057fcef
    RET                                 ; 0057fcf0
    MOV EAX,[0x01c4f020]                ; 0057fcf1 | DAT_01c4f020
        ;   Label: LAB_0057fcf1
    JMP 0x0057fcac                      ; 0057fcf6
        ;   XREF to: 0057fcac (UNCONDITIONAL_JUMP)  ; LAB_0057fcac
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057fcf8
        ;   Label: LAB_0057fcf8
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fcfb
    SUB EAX,EBX                         ; 0057fcfe
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fd00
    MOV dword ptr [0x006239ac],EBX      ; 0057fd06 | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057fd0c | DAT_00623dd8
    MOV EAX,[0x006239ac]                ; 0057fd12 | DAT_006239ac
    MOV EBX,dword ptr [0x00623dd8]      ; 0057fd17 | DAT_00623dd8
    MOV ESI,dword ptr [0x006239cc]      ; 0057fd1d | DAT_006239cc
    MOV ECX,dword ptr [0x00623964]      ; 0057fd23 | DAT_00623964
    MOV dword ptr [ESI],EAX             ; 0057fd29
        ;   Label: LAB_0057fd29
    ADD EAX,EBX                         ; 0057fd2b
    ADD ESI,0x4                         ; 0057fd2d
    SUB ECX,0x4                         ; 0057fd30
    JG 0x0057fd29                       ; 0057fd33
        ;   XREF to: 0057fd29 (CONDITIONAL_JUMP)  ; LAB_0057fd29
    POP EBP                             ; 0057fd35
    POP EDI                             ; 0057fd36
    POP ESI                             ; 0057fd37
    RET                                 ; 0057fd38

