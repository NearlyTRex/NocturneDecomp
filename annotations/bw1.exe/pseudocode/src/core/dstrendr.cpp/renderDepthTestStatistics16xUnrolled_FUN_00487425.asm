; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_00487425(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0 at 00481e89
;
; Referenced Globals:
;   undefined4 DAT_01bc1238
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c4f030
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00487425
        ;   Label: core_dstrendr.cpp_renderDepthTestStatistics16xUnrolled_FUN_00487425
    PUSH EDI                            ; 00487426
    PUSH EBP                            ; 00487427
    MOV EAX,dword ptr [ESI + 0x8]       ; 00487428
    MOV ECX,dword ptr [EDI + 0x8]       ; 0048742b
    CMP EAX,ECX                         ; 0048742e
    JBE 0x00487435                      ; 00487430
        ;   XREF to: 00487435 (CONDITIONAL_JUMP)  ; LAB_00487435
    XCHG EAX,ECX                        ; 00487432
    XCHG EDI,ESI                        ; 00487433
    SHR EAX,0x10                        ; 00487435
        ;   Label: LAB_00487435
    SHR ECX,0x10                        ; 00487438
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0048743b | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 00487442 | DAT_01c4354c
    SUB ECX,EAX                         ; 00487449
    JLE 0x004875ac                      ; 0048744b
        ;   XREF to: 004875ac (CONDITIONAL_JUMP)  ; LAB_004875ac
    ADD EBX,EAX                         ; 00487451
    SHL EAX,0x2                         ; 00487453
    ADD EBP,EAX                         ; 00487456
    INC ECX                             ; 00487458
    MOV EAX,dword ptr [EDI + 0x28]      ; 00487459
    SUB EAX,dword ptr [ESI + 0x28]      ; 0048745c
    IMUL dword ptr [ECX*0x4 + 0x1c4f030] ; 0048745f | DAT_01c4f030
    MOV EDI,EBX                         ; 00487466
    MOV EBX,EBP                         ; 00487468
    DEC ECX                             ; 0048746a
    MOV ESI,dword ptr [ESI + 0x28]      ; 0048746b
    MOV EAX,[0x01bc1238]                ; 0048746e | DAT_01bc1238
    SUB ECX,0x4                         ; 00487473
        ;   Label: LAB_00487473
    JL 0x00487578                       ; 00487476
        ;   XREF to: 00487578 (CONDITIONAL_JUMP)  ; LAB_00487578
    MOV EBP,ESI                         ; 0048747c
    SHR EBP,0x8                         ; 0048747e
    CMP EBP,dword ptr [EBX]             ; 00487481
    SBB EAX,-0x1                        ; 00487483
    ADD ESI,EDX                         ; 00487486
    MOV EBP,ESI                         ; 00487488
    SHR EBP,0x8                         ; 0048748a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0048748d
    SBB EAX,-0x1                        ; 00487490
    ADD ESI,EDX                         ; 00487493
    MOV EBP,ESI                         ; 00487495
    SHR EBP,0x8                         ; 00487497
    CMP EBP,dword ptr [EBX + 0x8]       ; 0048749a
    SBB EAX,-0x1                        ; 0048749d
    ADD ESI,EDX                         ; 004874a0
    MOV EBP,ESI                         ; 004874a2
    SHR EBP,0x8                         ; 004874a4
    CMP EBP,dword ptr [EBX + 0xc]       ; 004874a7
    SBB EAX,-0x1                        ; 004874aa
    ADD ESI,EDX                         ; 004874ad
    ADD EBX,0x10                        ; 004874af
    ADD EDI,0x4                         ; 004874b2
    SUB ECX,0x4                         ; 004874b5
    JL 0x00487578                       ; 004874b8
        ;   XREF to: 00487578 (CONDITIONAL_JUMP)  ; LAB_00487578
    MOV EBP,ESI                         ; 004874be
    SHR EBP,0x8                         ; 004874c0
    CMP EBP,dword ptr [EBX]             ; 004874c3
    SBB EAX,-0x1                        ; 004874c5
    ADD ESI,EDX                         ; 004874c8
    MOV EBP,ESI                         ; 004874ca
    SHR EBP,0x8                         ; 004874cc
    CMP EBP,dword ptr [EBX + 0x4]       ; 004874cf
    SBB EAX,-0x1                        ; 004874d2
    ADD ESI,EDX                         ; 004874d5
    MOV EBP,ESI                         ; 004874d7
    SHR EBP,0x8                         ; 004874d9
    CMP EBP,dword ptr [EBX + 0x8]       ; 004874dc
    SBB EAX,-0x1                        ; 004874df
    ADD ESI,EDX                         ; 004874e2
    MOV EBP,ESI                         ; 004874e4
    SHR EBP,0x8                         ; 004874e6
    CMP EBP,dword ptr [EBX + 0xc]       ; 004874e9
    SBB EAX,-0x1                        ; 004874ec
    ADD ESI,EDX                         ; 004874ef
    ADD EBX,0x10                        ; 004874f1
    ADD EDI,0x4                         ; 004874f4
    SUB ECX,0x4                         ; 004874f7
    JL 0x00487578                       ; 004874fa
        ;   XREF to: 00487578 (CONDITIONAL_JUMP)  ; LAB_00487578
    MOV EBP,ESI                         ; 004874fc
    SHR EBP,0x8                         ; 004874fe
    CMP EBP,dword ptr [EBX]             ; 00487501
    SBB EAX,-0x1                        ; 00487503
    ADD ESI,EDX                         ; 00487506
    MOV EBP,ESI                         ; 00487508
    SHR EBP,0x8                         ; 0048750a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0048750d
    SBB EAX,-0x1                        ; 00487510
    ADD ESI,EDX                         ; 00487513
    MOV EBP,ESI                         ; 00487515
    SHR EBP,0x8                         ; 00487517
    CMP EBP,dword ptr [EBX + 0x8]       ; 0048751a
    SBB EAX,-0x1                        ; 0048751d
    ADD ESI,EDX                         ; 00487520
    MOV EBP,ESI                         ; 00487522
    SHR EBP,0x8                         ; 00487524
    CMP EBP,dword ptr [EBX + 0xc]       ; 00487527
    SBB EAX,-0x1                        ; 0048752a
    ADD ESI,EDX                         ; 0048752d
    ADD EBX,0x10                        ; 0048752f
    ADD EDI,0x4                         ; 00487532
    SUB ECX,0x4                         ; 00487535
    JL 0x00487578                       ; 00487538
        ;   XREF to: 00487578 (CONDITIONAL_JUMP)  ; LAB_00487578
    MOV EBP,ESI                         ; 0048753a
    SHR EBP,0x8                         ; 0048753c
    CMP EBP,dword ptr [EBX]             ; 0048753f
    SBB EAX,-0x1                        ; 00487541
    ADD ESI,EDX                         ; 00487544
    MOV EBP,ESI                         ; 00487546
    SHR EBP,0x8                         ; 00487548
    CMP EBP,dword ptr [EBX + 0x4]       ; 0048754b
    SBB EAX,-0x1                        ; 0048754e
    ADD ESI,EDX                         ; 00487551
    MOV EBP,ESI                         ; 00487553
    SHR EBP,0x8                         ; 00487555
    CMP EBP,dword ptr [EBX + 0x8]       ; 00487558
    SBB EAX,-0x1                        ; 0048755b
    ADD ESI,EDX                         ; 0048755e
    MOV EBP,ESI                         ; 00487560
    SHR EBP,0x8                         ; 00487562
    CMP EBP,dword ptr [EBX + 0xc]       ; 00487565
    SBB EAX,-0x1                        ; 00487568
    ADD ESI,EDX                         ; 0048756b
    ADD EBX,0x10                        ; 0048756d
    ADD EDI,0x4                         ; 00487570
    JMP 0x00487473                      ; 00487573
        ;   XREF to: 00487473 (UNCONDITIONAL_JUMP)  ; LAB_00487473
    ADD ECX,0x4                         ; 00487578
        ;   Label: LAB_00487578
    JLE 0x004875a7                      ; 0048757b
        ;   XREF to: 004875a7 (CONDITIONAL_JUMP)  ; LAB_004875a7
    MOV EBP,ESI                         ; 0048757d
    SHR EBP,0x8                         ; 0048757f
    CMP EBP,dword ptr [EBX]             ; 00487582
    SBB EAX,-0x1                        ; 00487584
    ADD ESI,EDX                         ; 00487587
    DEC ECX                             ; 00487589
    JLE 0x004875a7                      ; 0048758a
        ;   XREF to: 004875a7 (CONDITIONAL_JUMP)  ; LAB_004875a7
    MOV EBP,ESI                         ; 0048758c
    SHR EBP,0x8                         ; 0048758e
    CMP EBP,dword ptr [EBX + 0x4]       ; 00487591
    SBB EAX,-0x1                        ; 00487594
    ADD ESI,EDX                         ; 00487597
    DEC ECX                             ; 00487599
    JLE 0x004875a7                      ; 0048759a
        ;   XREF to: 004875a7 (CONDITIONAL_JUMP)  ; LAB_004875a7
    MOV EBP,ESI                         ; 0048759c
    SHR EBP,0x8                         ; 0048759e
    CMP EBP,dword ptr [EBX + 0x8]       ; 004875a1
    SBB EAX,-0x1                        ; 004875a4
    MOV [0x01bc1238],EAX                ; 004875a7 | DAT_01bc1238
        ;   Label: LAB_004875a7
    POP EBP                             ; 004875ac
        ;   Label: LAB_004875ac
    POP EDI                             ; 004875ad
    POP ESI                             ; 004875ae
    RET                                 ; 004875af

