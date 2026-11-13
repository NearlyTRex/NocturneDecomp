; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_0058043c(SProjectedVertex *output,CVector3i *input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[18]:
;   core_chain.cpp_CChain_renderTransparent_FUN_00436600 at 00436783
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004551a0 at 004551df
;   core_fire.cpp_CCrater_render_FUN_004b23a0 at 004b2410
;   core_fire.cpp_CFirefly_render_FUN_004adaf0 at 004adb49
;   core_fire.cpp_CLightningBolt_render_FUN_004b3570 at 004b396b
;   core_fire.cpp_CPopcorn_render_FUN_004b4370 at 004b43b6
;   core_fire.cpp_CRainDrop_render_FUN_004b46e0 at 004b4726
;   core_fire.cpp_CShell_render_FUN_004b4090 at 004b40e1
;   core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0 at 004ac0f2
;   core_fire.cpp_CSpark_render_FUN_004ad140 at 004ad192
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_00623e28
;   undefined4 DAT_00623e2c
;   undefined4 DAT_00623e30
;   undefined4 DAT_00623e38
;   undefined4 DAT_00623e3c
;   undefined4 DAT_00623e40
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;   undefined4 DAT_01c51d5c
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c51d00],0xffffffff ; 0058043c | DAT_01c51d00
        ;   Label: engine_special.cpp_FUN_0058043c
    JZ 0x0058058a                       ; 00580446
        ;   XREF to: 0058058a (CONDITIONAL_JUMP)  ; LAB_0058058a
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058044c
    MOV EAX,dword ptr [EBX]             ; 00580450
    MOV ECX,dword ptr [EBX + 0x4]       ; 00580452
    MOV EDX,dword ptr [EBX + 0x8]       ; 00580455
    SUB EAX,dword ptr [0x01c51d38]      ; 00580458 | DAT_01c51d38
    SUB ECX,dword ptr [0x01c51d3c]      ; 0058045e | DAT_01c51d3c
    SUB EDX,dword ptr [0x01c51d40]      ; 00580464 | DAT_01c51d40
    MOVD MM0,EAX                        ; 0058046a
    MOVD MM1,ECX                        ; 0058046d
    MOVD MM2,EDX                        ; 00580470
    IMUL dword ptr [0x01c51d5c]         ; 00580473 | DAT_01c51d5c
    MOV EBX,EAX                         ; 00580479
    MOV ECX,EDX                         ; 0058047b
    MOVD EAX,MM1                        ; 0058047d
    IMUL dword ptr [0x01c51d68]         ; 00580480 | DAT_01c51d68
    ADD EBX,EAX                         ; 00580486
    ADC ECX,EDX                         ; 00580488
    MOVD EAX,MM2                        ; 0058048a
    IMUL dword ptr [0x01c51d74]         ; 0058048d | DAT_01c51d74
    ADD EAX,EBX                         ; 00580493
    ADC EDX,ECX                         ; 00580495
    SHRD EAX,EDX,0x10                   ; 00580497
    MOVD MM4,EAX                        ; 0058049b
    MOVD EAX,MM0                        ; 0058049e
    IMUL dword ptr [0x01c51d60]         ; 005804a1 | DAT_01c51d60
    MOV EBX,EAX                         ; 005804a7
    MOV ECX,EDX                         ; 005804a9
    MOVD EAX,MM1                        ; 005804ab
    IMUL dword ptr [0x01c51d6c]         ; 005804ae | DAT_01c51d6c
    ADD EBX,EAX                         ; 005804b4
    ADC ECX,EDX                         ; 005804b6
    MOVD EAX,MM2                        ; 005804b8
    IMUL dword ptr [0x01c51d78]         ; 005804bb | DAT_01c51d78
    ADD EAX,EBX                         ; 005804c1
    ADC EDX,ECX                         ; 005804c3
    SHRD EAX,EDX,0x10                   ; 005804c5
    MOVD MM5,EAX                        ; 005804c9
    MOVD EAX,MM0                        ; 005804cc
    IMUL dword ptr [0x01c51d64]         ; 005804cf | DAT_01c51d64
    MOV EBX,EAX                         ; 005804d5
    MOV ECX,EDX                         ; 005804d7
    MOVD EAX,MM1                        ; 005804d9
    IMUL dword ptr [0x01c51d70]         ; 005804dc | DAT_01c51d70
    ADD EBX,EAX                         ; 005804e2
    ADC ECX,EDX                         ; 005804e4
    MOVD EAX,MM2                        ; 005804e6
    IMUL dword ptr [0x01c51d7c]         ; 005804e9 | DAT_01c51d7c
    ADD EAX,EBX                         ; 005804ef
    ADC EDX,ECX                         ; 005804f1
    SHRD EAX,EDX,0x10                   ; 005804f3
    MOVD MM6,EAX                        ; 005804f7
    NEG EAX                             ; 005804fa
    MOV EDX,EAX                         ; 005804fc
    XOR EAX,EAX                         ; 005804fe
    MOVD EBX,MM4                        ; 00580500
    MOVD ECX,MM6                        ; 00580503
    CMP EBX,ECX                         ; 00580506
    JLE 0x0058050f                      ; 00580508
        ;   XREF to: 0058050f (CONDITIONAL_JUMP)  ; LAB_0058050f
    OR EAX,0x80000001                   ; 0058050a
    CMP EBX,EDX                         ; 0058050f
        ;   Label: LAB_0058050f
    JGE 0x00580518                      ; 00580511
        ;   XREF to: 00580518 (CONDITIONAL_JUMP)  ; LAB_00580518
    OR EAX,0x80000002                   ; 00580513
    MOVD EBX,MM5                        ; 00580518
        ;   Label: LAB_00580518
    CMP EBX,ECX                         ; 0058051b
    JLE 0x00580524                      ; 0058051d
        ;   XREF to: 00580524 (CONDITIONAL_JUMP)  ; LAB_00580524
    OR EAX,0x80000004                   ; 0058051f
    CMP EBX,EDX                         ; 00580524
        ;   Label: LAB_00580524
    JGE 0x0058052d                      ; 00580526
        ;   XREF to: 0058052d (CONDITIONAL_JUMP)  ; LAB_0058052d
    OR EAX,0x80000008                   ; 00580528
    CMP ECX,0x0                         ; 0058052d
        ;   Label: LAB_0058052d
    JG 0x00580537                       ; 00580530
        ;   XREF to: 00580537 (CONDITIONAL_JUMP)  ; LAB_00580537
    OR EAX,0x80000010                   ; 00580532
    MOV EBX,dword ptr [ESP + 0x4]       ; 00580537
        ;   Label: LAB_00580537
    MOVD dword ptr [EBX],MM4            ; 0058053b
    MOVD dword ptr [EBX + 0x4],MM5      ; 0058053e
    MOVD dword ptr [EBX + 0x8],MM6      ; 00580542
    TEST EAX,0xffffffff                 ; 00580546
    JNZ 0x00580584                      ; 0058054b
        ;   XREF to: 00580584 (CONDITIONAL_JUMP)  ; LAB_00580584
    MOV EAX,0x7fffffff                  ; 0058054d
    XOR EDX,EDX                         ; 00580552
    IDIV ECX                            ; 00580554
    MOV dword ptr [EBX + 0xc],EAX       ; 00580556
    MOVD EAX,MM4                        ; 00580559
    IMUL dword ptr [0x01c4eff8]         ; 0058055c | DAT_01c4eff8
    IDIV ECX                            ; 00580562
    ADD EAX,dword ptr [0x01c4f000]      ; 00580564 | DAT_01c4f000
    MOV dword ptr [EBX + 0x10],EAX      ; 0058056a
    MOVD EAX,MM5                        ; 0058056d
    IMUL dword ptr [0x01c4effc]         ; 00580570 | DAT_01c4effc
    IDIV ECX                            ; 00580576
    ADD EAX,dword ptr [0x01c4f004]      ; 00580578 | DAT_01c4f004
    MOV dword ptr [EBX + 0x14],EAX      ; 0058057e
    EMMS                                ; 00580581
    RET                                 ; 00580583
    MOV dword ptr [EBX + 0x10],EAX      ; 00580584
        ;   Label: LAB_00580584
    EMMS                                ; 00580587
    RET                                 ; 00580589
    PUSH ESI                            ; 0058058a
        ;   Label: LAB_0058058a
    PUSH EDI                            ; 0058058b
    MOV ESI,dword ptr [ESP + 0x10]      ; 0058058c
    MOV EDI,dword ptr [ESP + 0xc]       ; 00580590
    MOV EAX,dword ptr [ESI]             ; 00580594
    MOV EBX,dword ptr [ESI + 0x4]       ; 00580596
    MOV ECX,dword ptr [ESI + 0x8]       ; 00580599
    SUB EAX,dword ptr [0x01c51d38]      ; 0058059c | DAT_01c51d38
    SUB EBX,dword ptr [0x01c51d3c]      ; 005805a2 | DAT_01c51d3c
    SUB ECX,dword ptr [0x01c51d40]      ; 005805a8 | DAT_01c51d40
    MOV [0x00623e28],EAX                ; 005805ae | DAT_00623e28
    MOV dword ptr [0x00623e2c],EBX      ; 005805b3 | DAT_00623e2c
    MOV dword ptr [0x00623e30],ECX      ; 005805b9 | DAT_00623e30
    IMUL dword ptr [0x01c51d5c]         ; 005805bf | DAT_01c51d5c
    MOV EBX,EAX                         ; 005805c5
    MOV ECX,EDX                         ; 005805c7
    MOV EAX,[0x00623e2c]                ; 005805c9 | DAT_00623e2c
    IMUL dword ptr [0x01c51d68]         ; 005805ce | DAT_01c51d68
    ADD EBX,EAX                         ; 005805d4
    ADC ECX,EDX                         ; 005805d6
    MOV EAX,[0x00623e30]                ; 005805d8 | DAT_00623e30
    IMUL dword ptr [0x01c51d74]         ; 005805dd | DAT_01c51d74
    ADD EAX,EBX                         ; 005805e3
    ADC EDX,ECX                         ; 005805e5
    SHRD EAX,EDX,0x10                   ; 005805e7
    MOV [0x00623e38],EAX                ; 005805eb | DAT_00623e38
    MOV EAX,[0x00623e28]                ; 005805f0 | DAT_00623e28
    IMUL dword ptr [0x01c51d60]         ; 005805f5 | DAT_01c51d60
    MOV EBX,EAX                         ; 005805fb
    MOV ECX,EDX                         ; 005805fd
    MOV EAX,[0x00623e2c]                ; 005805ff | DAT_00623e2c
    IMUL dword ptr [0x01c51d6c]         ; 00580604 | DAT_01c51d6c
    ADD EBX,EAX                         ; 0058060a
    ADC ECX,EDX                         ; 0058060c
    MOV EAX,[0x00623e30]                ; 0058060e | DAT_00623e30
    IMUL dword ptr [0x01c51d78]         ; 00580613 | DAT_01c51d78
    ADD EAX,EBX                         ; 00580619
    ADC EDX,ECX                         ; 0058061b
    SHRD EAX,EDX,0x10                   ; 0058061d
    MOV [0x00623e3c],EAX                ; 00580621 | DAT_00623e3c
    MOV EAX,[0x00623e28]                ; 00580626 | DAT_00623e28
    IMUL dword ptr [0x01c51d64]         ; 0058062b | DAT_01c51d64
    MOV EBX,EAX                         ; 00580631
    MOV ECX,EDX                         ; 00580633
    MOV EAX,[0x00623e2c]                ; 00580635 | DAT_00623e2c
    IMUL dword ptr [0x01c51d70]         ; 0058063a | DAT_01c51d70
    ADD EBX,EAX                         ; 00580640
    ADC ECX,EDX                         ; 00580642
    MOV EAX,[0x00623e30]                ; 00580644 | DAT_00623e30
    IMUL dword ptr [0x01c51d7c]         ; 00580649 | DAT_01c51d7c
    ADD EAX,EBX                         ; 0058064f
    ADC EDX,ECX                         ; 00580651
    SHRD EAX,EDX,0x10                   ; 00580653
    MOV [0x00623e40],EAX                ; 00580657 | DAT_00623e40
    NEG EAX                             ; 0058065c
    MOV EDX,EAX                         ; 0058065e
    XOR EAX,EAX                         ; 00580660
    MOV EBX,dword ptr [0x00623e38]      ; 00580662 | DAT_00623e38
    MOV ECX,dword ptr [0x00623e40]      ; 00580668 | DAT_00623e40
    CMP EBX,ECX                         ; 0058066e
    JLE 0x00580677                      ; 00580670
        ;   XREF to: 00580677 (CONDITIONAL_JUMP)  ; LAB_00580677
    OR EAX,0x80000001                   ; 00580672
    CMP EBX,EDX                         ; 00580677
        ;   Label: LAB_00580677
    JGE 0x00580680                      ; 00580679
        ;   XREF to: 00580680 (CONDITIONAL_JUMP)  ; LAB_00580680
    OR EAX,0x80000002                   ; 0058067b
    MOV EBX,dword ptr [0x00623e3c]      ; 00580680 | DAT_00623e3c
        ;   Label: LAB_00580680
    CMP EBX,ECX                         ; 00580686
    JLE 0x0058068f                      ; 00580688
        ;   XREF to: 0058068f (CONDITIONAL_JUMP)  ; LAB_0058068f
    OR EAX,0x80000004                   ; 0058068a
    CMP EBX,EDX                         ; 0058068f
        ;   Label: LAB_0058068f
    JGE 0x00580698                      ; 00580691
        ;   XREF to: 00580698 (CONDITIONAL_JUMP)  ; LAB_00580698
    OR EAX,0x80000008                   ; 00580693
    CMP ECX,0x0                         ; 00580698
        ;   Label: LAB_00580698
    JG 0x005806a2                       ; 0058069b
        ;   XREF to: 005806a2 (CONDITIONAL_JUMP)  ; LAB_005806a2
    OR EAX,0x80000010                   ; 0058069d
    TEST EAX,0xffffffff                 ; 005806a2
        ;   Label: LAB_005806a2
    JNZ 0x005806f1                      ; 005806a7
        ;   XREF to: 005806f1 (CONDITIONAL_JUMP)  ; LAB_005806f1
    MOV EAX,[0x00623e38]                ; 005806a9 | DAT_00623e38
    MOV dword ptr [EDI],EAX             ; 005806ae
    MOV dword ptr [EDI + 0x4],EBX       ; 005806b0
    MOV dword ptr [EDI + 0x8],ECX       ; 005806b3
    MOV EAX,0x7fffffff                  ; 005806b6
    XOR EDX,EDX                         ; 005806bb
    IDIV ECX                            ; 005806bd
    MOV dword ptr [EDI + 0xc],EAX       ; 005806bf
    MOV EAX,[0x00623e38]                ; 005806c2 | DAT_00623e38
    IMUL dword ptr [0x01c4eff8]         ; 005806c7 | DAT_01c4eff8
    IDIV ECX                            ; 005806cd
    ADD EAX,dword ptr [0x01c4f000]      ; 005806cf | DAT_01c4f000
    MOV dword ptr [EDI + 0x10],EAX      ; 005806d5
    MOV EAX,[0x00623e3c]                ; 005806d8 | DAT_00623e3c
    IMUL dword ptr [0x01c4effc]         ; 005806dd | DAT_01c4effc
    IDIV ECX                            ; 005806e3
    ADD EAX,dword ptr [0x01c4f004]      ; 005806e5 | DAT_01c4f004
    MOV dword ptr [EDI + 0x14],EAX      ; 005806eb
    POP EDI                             ; 005806ee
    POP ESI                             ; 005806ef
    RET                                 ; 005806f0
    MOV EDX,dword ptr [0x00623e38]      ; 005806f1 | DAT_00623e38
        ;   Label: LAB_005806f1
    MOV dword ptr [EDI],EDX             ; 005806f7
    MOV dword ptr [EDI + 0x4],EBX       ; 005806f9
    MOV dword ptr [EDI + 0x8],ECX       ; 005806fc
    MOV dword ptr [EDI + 0x10],EAX      ; 005806ff
    POP EDI                             ; 00580702
    POP ESI                             ; 00580703
    RET                                 ; 00580704

