; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004cd380(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 at 00460a6d
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 at 00460b0e
;   shape_edittool.cpp_FUN_00472fd0 at 0047304a
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005881eb
;   TerminatedCString s_Matrix_unbalance_005881fe
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_matrix.c_interpolatedCos_FUN_004ccaa0
;   engine_matrix.c_interpolatedSin_FUN_004cca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd380
        ;   Label: engine_matrix.c_matrixPushAndTransform_FUN_004cd380
    PUSH ESI                            ; 004cd381
    PUSH EDI                            ; 004cd382
    PUSH EBP                            ; 004cd383
    SUB ESP,0x30                        ; 004cd384
    MOV EDI,dword ptr [ESP + 0x44]      ; 004cd387
    MOV EBX,dword ptr [ESP + 0x48]      ; 004cd38b
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004cd38f
    MOV EAX,[0x01cc5174]                ; 004cd393 | DAT_01cc5174
    MOV EDX,dword ptr [0x01c039b8]      ; 004cd398 | DAT_01c039b8
    MOV dword ptr [EAX*0x4 + 0x1cc52e0],EDX ; 004cd39e
    MOV EDX,dword ptr [0x01c039bc]      ; 004cd3a5 | DAT_01c039bc
    MOV dword ptr [EAX*0x4 + 0x1cc5308],EDX ; 004cd3ab
    MOV EDX,dword ptr [0x01c039c0]      ; 004cd3b2 | DAT_01c039c0
    MOV dword ptr [EAX*0x4 + 0x1cc5330],EDX ; 004cd3b8
    MOV EDX,dword ptr [0x01c039dc]      ; 004cd3bf | DAT_01c039dc
    MOV dword ptr [EAX*0x4 + 0x1cc5358],EDX ; 004cd3c5
    MOV EDX,dword ptr [0x01c039e0]      ; 004cd3cc | DAT_01c039e0
    MOV dword ptr [EAX*0x4 + 0x1cc5380],EDX ; 004cd3d2
    MOV EDX,dword ptr [0x01c039e4]      ; 004cd3d9 | DAT_01c039e4
    MOV dword ptr [EAX*0x4 + 0x1cc53a8],EDX ; 004cd3df
    MOV EDX,dword ptr [0x01c039e8]      ; 004cd3e6 | DAT_01c039e8
    MOV dword ptr [EAX*0x4 + 0x1cc5178],EDX ; 004cd3ec
    MOV EDX,dword ptr [0x01c039ec]      ; 004cd3f3 | DAT_01c039ec
    MOV dword ptr [EAX*0x4 + 0x1cc51a0],EDX ; 004cd3f9
    MOV EDX,dword ptr [0x01c039f0]      ; 004cd400 | DAT_01c039f0
    MOV dword ptr [EAX*0x4 + 0x1cc51c8],EDX ; 004cd406
    MOV EDX,dword ptr [0x01c039f4]      ; 004cd40d | DAT_01c039f4
    MOV dword ptr [EAX*0x4 + 0x1cc51f0],EDX ; 004cd413
    MOV EDX,dword ptr [0x01c039f8]      ; 004cd41a | DAT_01c039f8
    MOV dword ptr [EAX*0x4 + 0x1cc5218],EDX ; 004cd420
    MOV EDX,dword ptr [0x01c039fc]      ; 004cd427 | DAT_01c039fc
    MOV dword ptr [EAX*0x4 + 0x1cc5240],EDX ; 004cd42d
    MOV EDX,dword ptr [0x01c03a00]      ; 004cd434 | DAT_01c03a00
    MOV dword ptr [EAX*0x4 + 0x1cc5268],EDX ; 004cd43a
    MOV EDX,dword ptr [0x01c03a04]      ; 004cd441 | DAT_01c03a04
    MOV dword ptr [EAX*0x4 + 0x1cc5290],EDX ; 004cd447
    MOV EDX,dword ptr [0x01c03a08]      ; 004cd44e | DAT_01c03a08
    MOV dword ptr [EAX*0x4 + 0x1cc52b8],EDX ; 004cd454
    MOV EDX,dword ptr [ESP + 0x50]      ; 004cd45b
    MOV EAX,[0x01c039b8]                ; 004cd45f | DAT_01c039b8
    SUB EAX,EDX                         ; 004cd464
    MOV ECX,dword ptr [ESP + 0x54]      ; 004cd466
    MOV dword ptr [ESP + 0x8],EAX       ; 004cd46a
    MOV EAX,[0x01c039bc]                ; 004cd46e | DAT_01c039bc
    SUB EAX,ECX                         ; 004cd473
    MOV EBP,dword ptr [ESP + 0x58]      ; 004cd475
    MOV dword ptr [ESP + 0x4],EAX       ; 004cd479
    MOV EAX,[0x01c039c0]                ; 004cd47d | DAT_01c039c0
    SUB EAX,EBP                         ; 004cd482
    MOV dword ptr [0x01cc5168],EBX      ; 004cd484 | DAT_01cc5168
    MOV dword ptr [ESP + 0x10],EAX      ; 004cd48a
    MOV EAX,EDI                         ; 004cd48e
    MOV dword ptr [0x01cc516c],ESI      ; 004cd490 | DAT_01cc516c
    OR EAX,EBX                          ; 004cd496
    MOV dword ptr [0x01cc5164],EDI      ; 004cd498 | DAT_01cc5164
    OR EAX,ESI                          ; 004cd49e
    JNZ 0x004cd4db                      ; 004cd4a0
        ;   XREF to: 004cd4db (CONDITIONAL_JUMP)  ; LAB_004cd4db
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cd4a2
    MOV [0x01c039b8],EAX                ; 004cd4a6 | DAT_01c039b8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cd4ab
    MOV [0x01c039bc],EAX                ; 004cd4af | DAT_01c039bc
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cd4b4
    MOV [0x01c039c0],EAX                ; 004cd4b8 | DAT_01c039c0
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd4bd | DAT_01cc5174
        ;   Label: LAB_004cd4bd
    INC EDX                             ; 004cd4c3
    MOV dword ptr [0x01cc5174],EDX      ; 004cd4c4 | DAT_01cc5174
    CMP EDX,0x9                         ; 004cd4ca
    JG 0x004cda95                       ; 004cd4cd
        ;   XREF to: 004cda95 (CONDITIONAL_JUMP)  ; LAB_004cda95
    ADD ESP,0x30                        ; 004cd4d3
    POP EBP                             ; 004cd4d6
    POP EDI                             ; 004cd4d7
    POP ESI                             ; 004cd4d8
    POP EBX                             ; 004cd4d9
    RET                                 ; 004cd4da
    PUSH EDI                            ; 004cd4db
        ;   Label: LAB_004cd4db
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004cd4dc
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_interpolatedSin_FUN_004cca60()
    MOV dword ptr [ESP + 0x20],EAX      ; 004cd4e1
    ADD ESP,0x4                         ; 004cd4e5
    PUSH EDI                            ; 004cd4e8
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004cd4e9
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_interpolatedCos_FUN_004ccaa0()
    MOV dword ptr [ESP + 0x10],EAX      ; 004cd4ee
    ADD ESP,0x4                         ; 004cd4f2
    PUSH EBX                            ; 004cd4f5
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004cd4f6
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_interpolatedSin_FUN_004cca60()
    ADD ESP,0x4                         ; 004cd4fb
    PUSH EBX                            ; 004cd4fe
    MOV EBP,EAX                         ; 004cd4ff
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004cd501
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_interpolatedCos_FUN_004ccaa0()
    ADD ESP,0x4                         ; 004cd506
    PUSH ESI                            ; 004cd509
    MOV EBX,EAX                         ; 004cd50a
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004cd50c
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_interpolatedSin_FUN_004cca60()
    MOV dword ptr [ESP + 0x28],EAX      ; 004cd511
    ADD ESP,0x4                         ; 004cd515
    PUSH ESI                            ; 004cd518
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004cd519
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_interpolatedCos_FUN_004ccaa0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cd51e
    ADD ESP,0x4                         ; 004cd522
    MOV EAX,EBX                         ; 004cd525
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cd527
    IMUL EDX                            ; 004cd52b
    SHRD EAX,EDX,0x10                   ; 004cd52d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004cd531
    MOV ECX,EAX                         ; 004cd535
    MOV EAX,EBP                         ; 004cd537
    IMUL EDX                            ; 004cd539
    SHRD EAX,EDX,0x10                   ; 004cd53b
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cd53f
    IMUL EDX                            ; 004cd543
    SHRD EAX,EDX,0x10                   ; 004cd545
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cd549
    ADD ECX,EAX                         ; 004cd54d
    NEG EDX                             ; 004cd54f
    MOV EAX,EBP                         ; 004cd551
    MOV dword ptr [ESP + 0x18],ECX      ; 004cd553
    IMUL EDX                            ; 004cd557
    SHRD EAX,EDX,0x10                   ; 004cd559
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004cd55d
    MOV ECX,EAX                         ; 004cd561
    MOV EAX,EBX                         ; 004cd563
    IMUL EDX                            ; 004cd565
    SHRD EAX,EDX,0x10                   ; 004cd567
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cd56b
    IMUL EDX                            ; 004cd56f
    SHRD EAX,EDX,0x10                   ; 004cd571
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cd575
    ADD ECX,EAX                         ; 004cd579
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cd57b
    MOV dword ptr [ESP + 0x20],ECX      ; 004cd57f
    IMUL EDX                            ; 004cd583
    SHRD EAX,EDX,0x10                   ; 004cd585
    MOV ECX,EAX                         ; 004cd589
    MOV EDX,EBP                         ; 004cd58b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cd58d
    IMUL EDX                            ; 004cd591
    SHRD EAX,EDX,0x10                   ; 004cd593
    MOV ESI,EAX                         ; 004cd597
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cd599
    MOV EDX,EBX                         ; 004cd59d
    IMUL EDX                            ; 004cd59f
    SHRD EAX,EDX,0x10                   ; 004cd5a1
    MOV EDI,EAX                         ; 004cd5a5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004cd5a7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cd5ab
    MOV dword ptr [ESP + 0x14],EAX      ; 004cd5af
    NEG EAX                             ; 004cd5b3
    NEG EDX                             ; 004cd5b5
    MOV dword ptr [ESP + 0x14],EAX      ; 004cd5b7
    MOV EAX,EBX                         ; 004cd5bb
    IMUL EDX                            ; 004cd5bd
    SHRD EAX,EDX,0x10                   ; 004cd5bf
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004cd5c3
    MOV dword ptr [ESP],EAX             ; 004cd5c7
    MOV EAX,EBP                         ; 004cd5ca
    IMUL EDX                            ; 004cd5cc
    SHRD EAX,EDX,0x10                   ; 004cd5ce
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cd5d2
    IMUL EDX                            ; 004cd5d6
    SHRD EAX,EDX,0x10                   ; 004cd5d8
    MOV EDX,dword ptr [ESP]             ; 004cd5dc
    ADD EDX,EAX                         ; 004cd5df
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cd5e1
    MOV dword ptr [ESP + 0x2c],EDX      ; 004cd5e5
    MOV EDX,EBP                         ; 004cd5e9
    IMUL EDX                            ; 004cd5eb
    SHRD EAX,EDX,0x10                   ; 004cd5ed
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004cd5f1
    MOV EBP,EAX                         ; 004cd5f5
    MOV EAX,EBX                         ; 004cd5f7
    IMUL EDX                            ; 004cd5f9
    SHRD EAX,EDX,0x10                   ; 004cd5fb
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cd5ff
    IMUL EDX                            ; 004cd603
    SHRD EAX,EDX,0x10                   ; 004cd605
    MOV EDX,dword ptr [ESP + 0x28]      ; 004cd609
    ADD EBP,EAX                         ; 004cd60d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cd60f
    IMUL EDX                            ; 004cd613
    SHRD EAX,EDX,0x10                   ; 004cd615
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cd619
    MOV EBX,EAX                         ; 004cd61d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cd61f
    IMUL EDX                            ; 004cd623
    SHRD EAX,EDX,0x10                   ; 004cd625
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd629
    MOV dword ptr [ESP],EAX             ; 004cd62d
    MOV EAX,ESI                         ; 004cd630
    IMUL EDX                            ; 004cd632
    SHRD EAX,EDX,0x10                   ; 004cd634
    MOV EDX,dword ptr [ESP]             ; 004cd638
    ADD EDX,EAX                         ; 004cd63b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cd63d
    MOV dword ptr [ESP],EDX             ; 004cd641
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cd644
    IMUL EDX                            ; 004cd648
    SHRD EAX,EDX,0x10                   ; 004cd64a
    MOV EDX,dword ptr [ESP]             ; 004cd64e
    ADD EDX,EAX                         ; 004cd651
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cd653
    MOV dword ptr [0x01c039b8],EDX      ; 004cd657 | DAT_01c039b8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cd65d
    IMUL EDX                            ; 004cd661
    SHRD EAX,EDX,0x10                   ; 004cd663
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd667
    MOV dword ptr [ESP],EAX             ; 004cd66b
    MOV EAX,EDI                         ; 004cd66e
    IMUL EDX                            ; 004cd670
    SHRD EAX,EDX,0x10                   ; 004cd672
    MOV EDX,dword ptr [ESP]             ; 004cd676
    ADD EDX,EAX                         ; 004cd679
    MOV dword ptr [ESP],EDX             ; 004cd67b
    MOV EAX,EBP                         ; 004cd67e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cd680
    IMUL EDX                            ; 004cd684
    SHRD EAX,EDX,0x10                   ; 004cd686
    MOV EDX,dword ptr [ESP]             ; 004cd68a
    ADD EDX,EAX                         ; 004cd68d
    MOV dword ptr [0x01c039bc],EDX      ; 004cd68f | DAT_01c039bc
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cd695
    MOV EAX,ECX                         ; 004cd699
    IMUL EDX                            ; 004cd69b
    SHRD EAX,EDX,0x10                   ; 004cd69d
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd6a1
    MOV dword ptr [ESP],EAX             ; 004cd6a5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cd6a8
    IMUL EDX                            ; 004cd6ac
    SHRD EAX,EDX,0x10                   ; 004cd6ae
    MOV EDX,dword ptr [ESP]             ; 004cd6b2
    ADD EDX,EAX                         ; 004cd6b5
    MOV dword ptr [ESP],EDX             ; 004cd6b7
    MOV EAX,EBX                         ; 004cd6ba
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cd6bc
    IMUL EDX                            ; 004cd6c0
    SHRD EAX,EDX,0x10                   ; 004cd6c2
    MOV EDX,dword ptr [ESP]             ; 004cd6c6
    ADD EDX,EAX                         ; 004cd6c9
    MOV dword ptr [0x01c039c0],EDX      ; 004cd6cb | DAT_01c039c0
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd6d1 | DAT_01cc5174
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cd6d7
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5358] ; 004cd6db
    IMUL EDX                            ; 004cd6e2
    SHRD EAX,EDX,0x10                   ; 004cd6e4
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd6e8 | DAT_01cc5174
    MOV dword ptr [ESP],EAX             ; 004cd6ee
    MOV EAX,ESI                         ; 004cd6f1
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5380] ; 004cd6f3
    IMUL EDX                            ; 004cd6fa
    SHRD EAX,EDX,0x10                   ; 004cd6fc
    MOV EDX,dword ptr [ESP]             ; 004cd700
    ADD EDX,EAX                         ; 004cd703
    MOV dword ptr [ESP],EDX             ; 004cd705
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd708 | DAT_01cc5174
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cd70e
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc53a8] ; 004cd712
    IMUL EDX                            ; 004cd719
    SHRD EAX,EDX,0x10                   ; 004cd71b
    MOV EDX,dword ptr [ESP]             ; 004cd71f
    ADD EDX,EAX                         ; 004cd722
    MOV dword ptr [0x01c039dc],EDX      ; 004cd724 | DAT_01c039dc
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd72a | DAT_01cc5174
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cd730
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5358] ; 004cd734
    IMUL EDX                            ; 004cd73b
    SHRD EAX,EDX,0x10                   ; 004cd73d
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd741 | DAT_01cc5174
    MOV dword ptr [ESP],EAX             ; 004cd747
    MOV EAX,EDI                         ; 004cd74a
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5380] ; 004cd74c
    IMUL EDX                            ; 004cd753
    SHRD EAX,EDX,0x10                   ; 004cd755
    MOV EDX,dword ptr [ESP]             ; 004cd759
    ADD EDX,EAX                         ; 004cd75c
    MOV dword ptr [ESP],EDX             ; 004cd75e
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd761 | DAT_01cc5174
    MOV EAX,EBP                         ; 004cd767
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc53a8] ; 004cd769
    IMUL EDX                            ; 004cd770
    SHRD EAX,EDX,0x10                   ; 004cd772
    MOV EDX,dword ptr [ESP]             ; 004cd776
    ADD EDX,EAX                         ; 004cd779
    MOV dword ptr [0x01c039e0],EDX      ; 004cd77b | DAT_01c039e0
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd781 | DAT_01cc5174
    MOV EAX,ECX                         ; 004cd787
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5358] ; 004cd789
    IMUL EDX                            ; 004cd790
    SHRD EAX,EDX,0x10                   ; 004cd792
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd796 | DAT_01cc5174
    MOV dword ptr [ESP],EAX             ; 004cd79c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cd79f
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5380] ; 004cd7a3
    IMUL EDX                            ; 004cd7aa
    SHRD EAX,EDX,0x10                   ; 004cd7ac
    MOV EDX,dword ptr [ESP]             ; 004cd7b0
    ADD EDX,EAX                         ; 004cd7b3
    MOV dword ptr [ESP],EDX             ; 004cd7b5
    MOV EDX,dword ptr [0x01cc5174]      ; 004cd7b8 | DAT_01cc5174
    MOV EAX,EBX                         ; 004cd7be
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc53a8] ; 004cd7c0
    IMUL EDX                            ; 004cd7c7
    SHRD EAX,EDX,0x10                   ; 004cd7c9
    MOV EDX,dword ptr [ESP]             ; 004cd7cd
    ADD EDX,EAX                         ; 004cd7d0
    MOV dword ptr [0x01c039e4],EDX      ; 004cd7d2 | DAT_01c039e4
    MOV EAX,[0x01cc5174]                ; 004cd7d8 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x18]      ; 004cd7dd
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004cd7e1
    IMUL EDX                            ; 004cd7e8
    SHRD EAX,EDX,0x10                   ; 004cd7ea
    MOV dword ptr [ESP],EAX             ; 004cd7ee
    MOV EAX,[0x01cc5174]                ; 004cd7f1 | DAT_01cc5174
    MOV EDX,ESI                         ; 004cd7f6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004cd7f8
    IMUL EDX                            ; 004cd7ff
    SHRD EAX,EDX,0x10                   ; 004cd801
    MOV EDX,dword ptr [ESP]             ; 004cd805
    ADD EDX,EAX                         ; 004cd808
    MOV EAX,[0x01cc5174]                ; 004cd80a | DAT_01cc5174
    MOV dword ptr [ESP],EDX             ; 004cd80f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004cd812
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004cd816
    IMUL EDX                            ; 004cd81d
    SHRD EAX,EDX,0x10                   ; 004cd81f
    MOV EDX,dword ptr [ESP]             ; 004cd823
    ADD EDX,EAX                         ; 004cd826
    MOV EAX,[0x01cc5174]                ; 004cd828 | DAT_01cc5174
    MOV dword ptr [0x01c039e8],EDX      ; 004cd82d | DAT_01c039e8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004cd833
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004cd837
    IMUL EDX                            ; 004cd83e
    SHRD EAX,EDX,0x10                   ; 004cd840
    MOV dword ptr [ESP],EAX             ; 004cd844
    MOV EAX,[0x01cc5174]                ; 004cd847 | DAT_01cc5174
    MOV EDX,ESI                         ; 004cd84c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004cd84e
    IMUL EDX                            ; 004cd855
    SHRD EAX,EDX,0x10                   ; 004cd857
    MOV EDX,dword ptr [ESP]             ; 004cd85b
    ADD EDX,EAX                         ; 004cd85e
    MOV EAX,[0x01cc5174]                ; 004cd860 | DAT_01cc5174
    MOV dword ptr [ESP],EDX             ; 004cd865
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004cd868
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004cd86c
    IMUL EDX                            ; 004cd873
    SHRD EAX,EDX,0x10                   ; 004cd875
    MOV EDX,dword ptr [ESP]             ; 004cd879
    ADD EDX,EAX                         ; 004cd87c
    MOV EAX,[0x01cc5174]                ; 004cd87e | DAT_01cc5174
    MOV dword ptr [0x01c039ec],EDX      ; 004cd883 | DAT_01c039ec
    MOV EDX,dword ptr [ESP + 0x18]      ; 004cd889
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004cd88d
    IMUL EDX                            ; 004cd894
    SHRD EAX,EDX,0x10                   ; 004cd896
    MOV dword ptr [ESP],EAX             ; 004cd89a
    MOV EAX,[0x01cc5174]                ; 004cd89d | DAT_01cc5174
    MOV EDX,ESI                         ; 004cd8a2
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004cd8a4
    MOV ESI,dword ptr [ESP]             ; 004cd8ab
    IMUL EDX                            ; 004cd8ae
    SHRD EAX,EDX,0x10                   ; 004cd8b0
    ADD ESI,EAX                         ; 004cd8b4
    MOV EAX,[0x01cc5174]                ; 004cd8b6 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004cd8bb
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004cd8bf
    IMUL EDX                            ; 004cd8c6
    SHRD EAX,EDX,0x10                   ; 004cd8c8
    ADD ESI,EAX                         ; 004cd8cc
    MOV EAX,[0x01cc5174]                ; 004cd8ce | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cd8d3
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004cd8d7
    MOV dword ptr [0x01c039f0],ESI      ; 004cd8de | DAT_01c039f0
    IMUL EDX                            ; 004cd8e4
    SHRD EAX,EDX,0x10                   ; 004cd8e6
    MOV ESI,EAX                         ; 004cd8ea
    MOV EAX,[0x01cc5174]                ; 004cd8ec | DAT_01cc5174
    MOV EDX,EDI                         ; 004cd8f1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004cd8f3
    IMUL EDX                            ; 004cd8fa
    SHRD EAX,EDX,0x10                   ; 004cd8fc
    ADD ESI,EAX                         ; 004cd900
    MOV EAX,[0x01cc5174]                ; 004cd902 | DAT_01cc5174
    MOV EDX,EBP                         ; 004cd907
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004cd909
    IMUL EDX                            ; 004cd910
    SHRD EAX,EDX,0x10                   ; 004cd912
    ADD ESI,EAX                         ; 004cd916
    MOV dword ptr [0x01c039f4],ESI      ; 004cd918 | DAT_01c039f4
    MOV EAX,[0x01cc5174]                ; 004cd91e | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cd923
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004cd927
    IMUL EDX                            ; 004cd92e
    SHRD EAX,EDX,0x10                   ; 004cd930
    MOV ESI,EAX                         ; 004cd934
    MOV EAX,[0x01cc5174]                ; 004cd936 | DAT_01cc5174
    MOV EDX,EDI                         ; 004cd93b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004cd93d
    IMUL EDX                            ; 004cd944
    SHRD EAX,EDX,0x10                   ; 004cd946
    ADD ESI,EAX                         ; 004cd94a
    MOV EAX,[0x01cc5174]                ; 004cd94c | DAT_01cc5174
    MOV EDX,EBP                         ; 004cd951
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004cd953
    IMUL EDX                            ; 004cd95a
    SHRD EAX,EDX,0x10                   ; 004cd95c
    ADD ESI,EAX                         ; 004cd960
    MOV EAX,[0x01cc5174]                ; 004cd962 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cd967
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004cd96b
    MOV dword ptr [0x01c039f8],ESI      ; 004cd972 | DAT_01c039f8
    IMUL EDX                            ; 004cd978
    SHRD EAX,EDX,0x10                   ; 004cd97a
    MOV ESI,EAX                         ; 004cd97e
    MOV EAX,[0x01cc5174]                ; 004cd980 | DAT_01cc5174
    MOV EDX,EDI                         ; 004cd985
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004cd987
    IMUL EDX                            ; 004cd98e
    SHRD EAX,EDX,0x10                   ; 004cd990
    ADD ESI,EAX                         ; 004cd994
    MOV EAX,[0x01cc5174]                ; 004cd996 | DAT_01cc5174
    MOV EDX,EBP                         ; 004cd99b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004cd99d
    IMUL EDX                            ; 004cd9a4
    SHRD EAX,EDX,0x10                   ; 004cd9a6
    ADD ESI,EAX                         ; 004cd9aa
    MOV EAX,[0x01cc5174]                ; 004cd9ac | DAT_01cc5174
    MOV EDX,ECX                         ; 004cd9b1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004cd9b3
    MOV dword ptr [0x01c039fc],ESI      ; 004cd9ba | DAT_01c039fc
    IMUL EDX                            ; 004cd9c0
    SHRD EAX,EDX,0x10                   ; 004cd9c2
    MOV ESI,EAX                         ; 004cd9c6
    MOV EAX,[0x01cc5174]                ; 004cd9c8 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x14]      ; 004cd9cd
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004cd9d1
    IMUL EDX                            ; 004cd9d8
    SHRD EAX,EDX,0x10                   ; 004cd9da
    ADD ESI,EAX                         ; 004cd9de
    MOV EAX,[0x01cc5174]                ; 004cd9e0 | DAT_01cc5174
    MOV EDX,EBX                         ; 004cd9e5
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004cd9e7
    IMUL EDX                            ; 004cd9ee
    SHRD EAX,EDX,0x10                   ; 004cd9f0
    ADD ESI,EAX                         ; 004cd9f4
    MOV EAX,[0x01cc5174]                ; 004cd9f6 | DAT_01cc5174
    MOV EDX,ECX                         ; 004cd9fb
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004cd9fd
    MOV dword ptr [0x01c03a00],ESI      ; 004cda04 | DAT_01c03a00
    IMUL EDX                            ; 004cda0a
    SHRD EAX,EDX,0x10                   ; 004cda0c
    MOV ESI,EAX                         ; 004cda10
    MOV EAX,[0x01cc5174]                ; 004cda12 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x14]      ; 004cda17
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004cda1b
    IMUL EDX                            ; 004cda22
    SHRD EAX,EDX,0x10                   ; 004cda24
    ADD ESI,EAX                         ; 004cda28
    MOV EAX,[0x01cc5174]                ; 004cda2a | DAT_01cc5174
    MOV EDX,EBX                         ; 004cda2f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004cda31
    IMUL EDX                            ; 004cda38
    SHRD EAX,EDX,0x10                   ; 004cda3a
    ADD ESI,EAX                         ; 004cda3e
    MOV dword ptr [0x01c03a04],ESI      ; 004cda40 | DAT_01c03a04
    MOV EAX,[0x01cc5174]                ; 004cda46 | DAT_01cc5174
    MOV EDX,ECX                         ; 004cda4b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004cda4d
    IMUL EDX                            ; 004cda54
    SHRD EAX,EDX,0x10                   ; 004cda56
    MOV ECX,EAX                         ; 004cda5a
    MOV EAX,[0x01cc5174]                ; 004cda5c | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x14]      ; 004cda61
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004cda65
    IMUL EDX                            ; 004cda6c
    SHRD EAX,EDX,0x10                   ; 004cda6e
    ADD ECX,EAX                         ; 004cda72
    MOV EAX,[0x01cc5174]                ; 004cda74 | DAT_01cc5174
    MOV EDX,EBX                         ; 004cda79
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004cda7b
    IMUL EDX                            ; 004cda82
    SHRD EAX,EDX,0x10                   ; 004cda84
    ADD ECX,EAX                         ; 004cda88
    MOV dword ptr [0x01c03a08],ECX      ; 004cda8a | DAT_01c03a08
    JMP 0x004cd4bd                      ; 004cda90
        ;   XREF to: 004cd4bd (UNCONDITIONAL_JUMP)  ; LAB_004cd4bd
    MOV EBX,0x5881eb                    ; 004cda95 | = "..\\engine\\matrix.c"
        ;   Label: LAB_004cda95
    MOV ESI,0x31c                       ; 004cda9a
    PUSH 0x5881fe                       ; 004cda9f | = "Matrix unbalance"
    MOV dword ptr [0x01cc4800],EBX      ; 004cdaa4 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004cdaaa | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004cdab0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004cdab5
    ADD ESP,0x30                        ; 004cdab8
    POP EBP                             ; 004cdabb
    POP EDI                             ; 004cdabc
    POP ESI                             ; 004cdabd
    POP EBX                             ; 004cdabe
    RET                                 ; 004cdabf

