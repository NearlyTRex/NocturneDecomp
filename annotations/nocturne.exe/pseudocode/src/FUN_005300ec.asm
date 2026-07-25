; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_005300ec(void)
;
;
; XREF[51]:
;   FUN_00405340 at 00405368
;   FUN_00406920 at 0040697e
;   FUN_00406a00 at 00406a5e
;   FUN_00406ae0 at 00406b0c
;   FUN_00406b80 at 00406bde
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 004060f4
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407a6f
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405e4e
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 00408555
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 00408415
;   ... and 41 more
;
; Referenced Globals:
;   undefined4 DAT_005bf014
;   undefined4 DAT_005bf050
;   undefined4 DAT_005bf054
;   undefined4 DAT_005bf05c
;   undefined4 DAT_005bf078
;   undefined4 DAT_005bf07c
;   undefined4 DAT_005bf480
;   undefined4 DAT_005bf484
;   undefined4 DAT_005bf488
;   undefined1 DAT_005bf550
;   undefined1 DAT_005bf570
;   undefined4 DAT_005bf590
;   undefined4 DAT_005bf5b0
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd4260
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005300ec
        ;   Label: FUN_005300ec
    PUSH EDI                            ; 005300ed
    PUSH EBP                            ; 005300ee
    MOV EAX,dword ptr [ESI + 0x8]       ; 005300ef
    MOV ECX,dword ptr [EDI + 0x8]       ; 005300f2
    CMP EAX,ECX                         ; 005300f5
    JBE 0x005300fc                      ; 005300f7
        ;   XREF to: 005300fc (CONDITIONAL_JUMP)  ; LAB_005300fc
    XCHG EAX,ECX                        ; 005300f9
    XCHG EDI,ESI                        ; 005300fa
    SHR ECX,0x10                        ; 005300fc
        ;   Label: LAB_005300fc
    SHR EAX,0x10                        ; 005300ff
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 00530102 | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00530109 | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00530110
    JLE 0x005302d6                      ; 00530112
        ;   XREF to: 005302d6 (CONDITIONAL_JUMP)  ; LAB_005302d6
    LEA EBX,[EBX + EAX*0x4]             ; 00530118
    SHL ECX,0x2                         ; 0053011b
    LEA EBP,[EBP + EAX*0x4]             ; 0053011e
    MOV dword ptr [0x005bf014],ECX      ; 00530122 | DAT_005bf014
    MOV dword ptr [0x005bf078],EBX      ; 00530128 | DAT_005bf078
    MOV dword ptr [0x005bf07c],EBP      ; 0053012e | DAT_005bf07c
    CMP dword ptr [0x01c039a0],0x80     ; 00530134 | DAT_01c039a0
    JZ 0x005302e1                       ; 0053013e
        ;   XREF to: 005302e1 (CONDITIONAL_JUMP)  ; LAB_005302e1
    CMP dword ptr [0x01c039a4],0x5      ; 00530144 | DAT_01c039a4
    JNZ 0x005301bd                      ; 0053014b
        ;   XREF to: 005301bd (CONDITIONAL_JUMP)  ; LAB_005301bd
    MOV EAX,dword ptr [ESI + 0x18]      ; 0053014d
    MOV EBX,dword ptr [ESI + 0x28]      ; 00530150
    CDQ                                 ; 00530153
    SHLD EDX,EAX,0x18                   ; 00530154
    SHL EAX,0x18                        ; 00530158
    IDIV EBX                            ; 0053015b
    MOV [0x005bf050],EAX                ; 0053015d | DAT_005bf050
    MOV EAX,dword ptr [EDI + 0x18]      ; 00530162
    MOV EBX,dword ptr [EDI + 0x28]      ; 00530165
    CDQ                                 ; 00530168
    SHLD EDX,EAX,0x18                   ; 00530169
    SHL EAX,0x18                        ; 0053016d
    IDIV EBX                            ; 00530170
    SUB EAX,dword ptr [0x005bf050]      ; 00530172 | DAT_005bf050
    IMUL dword ptr [ECX + 0x1c00c84]    ; 00530178 | DAT_01c00c84
    MOV dword ptr [0x005bf480],EDX      ; 0053017e | DAT_005bf480
    MOV EAX,dword ptr [ESI + 0x20]      ; 00530184
    MOV EBX,dword ptr [ESI + 0x28]      ; 00530187
    CDQ                                 ; 0053018a
    SHLD EDX,EAX,0x18                   ; 0053018b
    SHL EAX,0x18                        ; 0053018f
    IDIV EBX                            ; 00530192
    MOV [0x005bf054],EAX                ; 00530194 | DAT_005bf054
    MOV EAX,dword ptr [EDI + 0x20]      ; 00530199
    MOV EBX,dword ptr [EDI + 0x28]      ; 0053019c
    CDQ                                 ; 0053019f
    SHLD EDX,EAX,0x18                   ; 005301a0
    SHL EAX,0x18                        ; 005301a4
    IDIV EBX                            ; 005301a7
    SUB EAX,dword ptr [0x005bf054]      ; 005301a9 | DAT_005bf054
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005301af | DAT_01c00c84
    MOV dword ptr [0x005bf484],EDX      ; 005301b5 | DAT_005bf484
    JMP 0x005301f1                      ; 005301bb
        ;   XREF to: 005301f1 (UNCONDITIONAL_JUMP)  ; LAB_005301f1
    MOV EAX,dword ptr [EDI + 0x18]      ; 005301bd
        ;   Label: LAB_005301bd
    MOV EBX,dword ptr [ESI + 0x18]      ; 005301c0
    SUB EAX,EBX                         ; 005301c3
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005301c5 | DAT_01c00c84
    MOV dword ptr [0x005bf050],EBX      ; 005301cb | DAT_005bf050
    MOV dword ptr [0x005bf480],EDX      ; 005301d1 | DAT_005bf480
    MOV EAX,dword ptr [EDI + 0x20]      ; 005301d7
    MOV EBX,dword ptr [ESI + 0x20]      ; 005301da
    SUB EAX,EBX                         ; 005301dd
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005301df | DAT_01c00c84
    MOV dword ptr [0x005bf054],EBX      ; 005301e5 | DAT_005bf054
    MOV dword ptr [0x005bf484],EDX      ; 005301eb | DAT_005bf484
    MOV EAX,dword ptr [EDI + 0x28]      ; 005301f1
        ;   Label: LAB_005301f1
    MOV EBX,dword ptr [ESI + 0x28]      ; 005301f4
    SUB EAX,EBX                         ; 005301f7
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005301f9 | DAT_01c00c84
    MOV dword ptr [0x005bf05c],EBX      ; 005301ff | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 00530205 | DAT_005bf488
    MOV EBP,dword ptr [0x005bf050]      ; 0053020b | DAT_005bf050
    MOV EDX,dword ptr [0x005bf054]      ; 00530211 | DAT_005bf054
    MOV ESI,dword ptr [0x005bf05c]      ; 00530217 | DAT_005bf05c
    MOV EDI,0x0                         ; 0053021d
    CMP dword ptr [0x01c02584],0x0      ; 00530222 | DAT_01c02584
    JNZ 0x005302d6                      ; 00530229
        ;   XREF to: 005302d6 (CONDITIONAL_JUMP)  ; LAB_005302d6
    TEST dword ptr [0x01c039a0],0x2     ; 0053022f | DAT_01c039a0
    JNZ 0x005302d6                      ; 00530239
        ;   XREF to: 005302d6 (CONDITIONAL_JUMP)  ; LAB_005302d6
    TEST dword ptr [0x01c039a0],0x40    ; 0053023f | DAT_01c039a0
        ;   Label: LAB_0053023f
    JZ 0x00530257                       ; 00530249
        ;   XREF to: 00530257 (CONDITIONAL_JUMP)  ; LAB_00530257
    LEA EAX,[EDI]                       ; 0053024b
    ADD EAX,dword ptr [0x005bf07c]      ; 0053024d | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 00530253
    JL 0x005302b4                       ; 00530255
        ;   XREF to: 005302b4 (CONDITIONAL_JUMP)  ; LAB_005302b4
    TEST dword ptr [0x01c039a0],0x1     ; 00530257 | DAT_01c039a0
        ;   Label: LAB_00530257
    JZ 0x005302da                       ; 00530261
        ;   XREF to: 005302da (CONDITIONAL_JUMP)  ; LAB_005302da
    MOV CL,byte ptr [0x005bf550]        ; 00530263 | DAT_005bf550
    MOV EAX,EBP                         ; 00530269
    SHR EAX,CL                          ; 0053026b
    AND EAX,dword ptr [0x005bf590]      ; 0053026d | DAT_005bf590
    MOV CL,byte ptr [0x005bf570]        ; 00530273 | DAT_005bf570
    MOV EBX,EDX                         ; 00530279
    SHR EBX,CL                          ; 0053027b
    AND EBX,dword ptr [0x005bf5b0]      ; 0053027d | DAT_005bf5b0
    ADD EAX,dword ptr [0x01c02580]      ; 00530283 | DAT_01c02580
    ADD EAX,EBX                         ; 00530289
    MOVZX EAX,byte ptr [EAX]            ; 0053028b
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0053028e | DAT_01c00024
    MOV EBX,dword ptr [0x005bf078]      ; 00530295 | DAT_005bf078
        ;   Label: LAB_00530295
    ADD EBX,EDI                         ; 0053029b
    MOV dword ptr [EBX],EAX             ; 0053029d
    TEST dword ptr [0x01c039a0],0x80    ; 0053029f | DAT_01c039a0
    JZ 0x005302b4                       ; 005302a9
        ;   XREF to: 005302b4 (CONDITIONAL_JUMP)  ; LAB_005302b4
    MOV EAX,[0x005bf07c]                ; 005302ab | DAT_005bf07c
    ADD EAX,EDI                         ; 005302b0
    MOV dword ptr [EAX],ESI             ; 005302b2
    ADD EDI,0x4                         ; 005302b4
        ;   Label: LAB_005302b4
    CMP EDI,dword ptr [0x005bf014]      ; 005302b7 | DAT_005bf014
    JNC 0x005302d6                      ; 005302bd
        ;   XREF to: 005302d6 (CONDITIONAL_JUMP)  ; LAB_005302d6
    ADD EBP,dword ptr [0x005bf480]      ; 005302bf | DAT_005bf480
    ADD EDX,dword ptr [0x005bf484]      ; 005302c5 | DAT_005bf484
    ADD ESI,dword ptr [0x005bf488]      ; 005302cb | DAT_005bf488
    JMP 0x0053023f                      ; 005302d1
        ;   XREF to: 0053023f (UNCONDITIONAL_JUMP)  ; LAB_0053023f
    POP EBP                             ; 005302d6
        ;   Label: LAB_005302d6
    POP EDI                             ; 005302d7
    POP ESI                             ; 005302d8
    RET                                 ; 005302d9
    MOV EAX,[0x01c00c70]                ; 005302da | DAT_01c00c70
        ;   Label: LAB_005302da
    JMP 0x00530295                      ; 005302df
        ;   XREF to: 00530295 (UNCONDITIONAL_JUMP)  ; LAB_00530295
    MOV EAX,dword ptr [EDI + 0x28]      ; 005302e1
        ;   Label: LAB_005302e1
    MOV EBX,dword ptr [ESI + 0x28]      ; 005302e4
    SUB EAX,EBX                         ; 005302e7
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005302e9 | DAT_01c00c84
    MOV dword ptr [0x005bf05c],EBX      ; 005302ef | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 005302f5 | DAT_005bf488
    MOV EAX,[0x005bf05c]                ; 005302fb | DAT_005bf05c
    MOV EBX,dword ptr [0x005bf488]      ; 00530300 | DAT_005bf488
    MOV ESI,dword ptr [0x005bf07c]      ; 00530306 | DAT_005bf07c
    MOV ECX,dword ptr [0x005bf014]      ; 0053030c | DAT_005bf014
    MOV dword ptr [ESI],EAX             ; 00530312
        ;   Label: LAB_00530312
    ADD EAX,EBX                         ; 00530314
    ADD ESI,0x4                         ; 00530316
    SUB ECX,0x4                         ; 00530319
    JG 0x00530312                       ; 0053031c
        ;   XREF to: 00530312 (CONDITIONAL_JUMP)  ; LAB_00530312
    POP EBP                             ; 0053031e
    POP EDI                             ; 0053031f
    POP ESI                             ; 00530320
    RET                                 ; 00530321

