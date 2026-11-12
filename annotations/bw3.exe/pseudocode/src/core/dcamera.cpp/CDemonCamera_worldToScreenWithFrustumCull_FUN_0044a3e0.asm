; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044a3e0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044aa20 at 0044ae75
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690 at 0044e6de
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_0044d800 at 0044da56
;   core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_0044d4e0 at 0044d5d0
;   core_game.cpp_FUN_004bd620 at 004bd577
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_014a02f0
;   undefined4 DAT_014a02f4
;   undefined4 DAT_014a02f8
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a3e0
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044a3e0
    PUSH EDI                            ; 0044a3e1
    PUSH EBP                            ; 0044a3e2
    SUB ESP,0x24                        ; 0044a3e3
    MOV EDI,dword ptr [ESP + 0x38]      ; 0044a3e6
    MOV EBP,ESI                         ; 0044a3ea
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044a3ec
    MOV EDX,dword ptr [0x005f2afc]      ; 0044a3f0 | DAT_005f2afc
    PUSH EDX                            ; 0044a3f6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860 ; 0044a3f7
        ;   XREF to: 0046d860 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer * this_ptr)
    MOV ECX,EAX                         ; 0044a3fc
    ADD ESP,0x4                         ; 0044a3fe
    TEST EAX,EAX                        ; 0044a401
    JNZ 0x0044a524                      ; 0044a403
        ;   XREF to: 0044a524 (CONDITIONAL_JUMP)  ; LAB_0044a524
    MOV EAX,dword ptr [EDI]             ; 0044a409
    SUB EAX,dword ptr [ESI + 0x16c]     ; 0044a40b
    MOV EDX,dword ptr [ESI + 0x170]     ; 0044a411
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a417
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044a41b
    SUB EAX,EDX                         ; 0044a41e
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044a420
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a426
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044a42a
    SUB EAX,ECX                         ; 0044a42d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a42f
    MOV dword ptr [ESP + 0x14],EAX      ; 0044a433
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044a437
    IMUL EDX                            ; 0044a43d
    SHRD EAX,EDX,0x10                   ; 0044a43f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044a443
    MOV ECX,EAX                         ; 0044a447
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044a449
    IMUL EDX                            ; 0044a44f
    SHRD EAX,EDX,0x10                   ; 0044a451
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a455
    ADD ECX,EAX                         ; 0044a459
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044a45b
    IMUL EDX                            ; 0044a461
    SHRD EAX,EDX,0x10                   ; 0044a463
    ADD ECX,EAX                         ; 0044a467
    MOV dword ptr [ESP + 0x20],ECX      ; 0044a469
    TEST ECX,ECX                        ; 0044a46d
    JG 0x0044a48b                       ; 0044a46f
        ;   XREF to: 0044a48b (CONDITIONAL_JUMP)  ; LAB_0044a48b
    MOV EDI,ESP                         ; 0044a471
        ;   Label: LAB_0044a471
    MOV ESI,0x14a02f0                   ; 0044a473
    MOVSD ES:EDI,ESI                    ; 0044a478 | DAT_014a02f0
    MOVSD ES:EDI,ESI                    ; 0044a479 | DAT_014a02f4
    MOVSD ES:EDI,ESI                    ; 0044a47a | DAT_014a02f8
    MOV ESI,ESP                         ; 0044a47b
    MOV EDI,EBP                         ; 0044a47d
    MOVSD ES:EDI,ESI                    ; 0044a47f
    MOVSD ES:EDI,ESI                    ; 0044a480
    MOVSD ES:EDI,ESI                    ; 0044a481
    MOV EAX,EBP                         ; 0044a482
    ADD ESP,0x24                        ; 0044a484
    POP EBP                             ; 0044a487
    POP EDI                             ; 0044a488
    POP EBX                             ; 0044a489
    RET                                 ; 0044a48a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a48b
        ;   Label: LAB_0044a48b
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044a48f
    IMUL EDX                            ; 0044a495
    SHRD EAX,EDX,0x10                   ; 0044a497
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044a49b
    MOV ECX,EAX                         ; 0044a49f
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044a4a1
    IMUL EDX                            ; 0044a4a7
    SHRD EAX,EDX,0x10                   ; 0044a4a9
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a4ad
    ADD ECX,EAX                         ; 0044a4b1
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044a4b3
    IMUL EDX                            ; 0044a4b9
    SHRD EAX,EDX,0x10                   ; 0044a4bb
    ADD ECX,EAX                         ; 0044a4bf
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044a4c1
    MOV dword ptr [ESP + 0x18],ECX      ; 0044a4c5
    CMP ECX,EDI                         ; 0044a4c9
    JGE 0x0044a471                      ; 0044a4cb
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    MOV EBX,EDI                         ; 0044a4cd
    NEG EBX                             ; 0044a4cf
    CMP EBX,ECX                         ; 0044a4d1
    JGE 0x0044a471                      ; 0044a4d3
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a4d5
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044a4d9
    IMUL EDX                            ; 0044a4df
    SHRD EAX,EDX,0x10                   ; 0044a4e1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044a4e5
    MOV ECX,EAX                         ; 0044a4e9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044a4eb
    IMUL EDX                            ; 0044a4f1
    SHRD EAX,EDX,0x10                   ; 0044a4f3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a4f7
    ADD ECX,EAX                         ; 0044a4fb
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044a4fd
    IMUL EDX                            ; 0044a503
    SHRD EAX,EDX,0x10                   ; 0044a505
    ADD ECX,EAX                         ; 0044a509
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044a50b
    CMP ECX,EDI                         ; 0044a50f
    JGE 0x0044a471                      ; 0044a511
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    CMP EBX,ECX                         ; 0044a517
    JL 0x0044a642                       ; 0044a519
        ;   XREF to: 0044a642 (CONDITIONAL_JUMP)  ; LAB_0044a642
    JMP 0x0044a471                      ; 0044a51f
        ;   XREF to: 0044a471 (UNCONDITIONAL_JUMP)  ; LAB_0044a471
    SHL EAX,0x2                         ; 0044a524
        ;   Label: LAB_0044a524
    SUB EAX,ECX                         ; 0044a527
    SHL EAX,0x2                         ; 0044a529
    LEA EDX,[ESI + EAX*0x1]             ; 0044a52c
    MOV EAX,dword ptr [EDI]             ; 0044a52f
    MOV EBX,dword ptr [EDX + 0x11ec]    ; 0044a531
    SUB EAX,EBX                         ; 0044a537
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a539
    MOV EBX,dword ptr [EDX + 0x11f0]    ; 0044a53d
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044a543
    SUB EAX,EBX                         ; 0044a546
    SHL ECX,0x2                         ; 0044a548
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a54b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044a54f
    MOV EDI,dword ptr [EDX + 0x11f4]    ; 0044a552
    ADD ECX,ESI                         ; 0044a558
    SUB EAX,EDI                         ; 0044a55a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a55c
    MOV dword ptr [ESP + 0x14],EAX      ; 0044a560
    MOV EAX,dword ptr [ECX + 0x128c]    ; 0044a564
    IMUL EDX                            ; 0044a56a
    SHRD EAX,EDX,0x10                   ; 0044a56c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044a570
    MOV EDI,EAX                         ; 0044a574
    MOV EAX,dword ptr [ECX + 0x12ec]    ; 0044a576
    IMUL EDX                            ; 0044a57c
    SHRD EAX,EDX,0x10                   ; 0044a57e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a582
    ADD EDI,EAX                         ; 0044a586
    MOV EAX,dword ptr [ECX + 0x134c]    ; 0044a588
    IMUL EDX                            ; 0044a58e
    SHRD EAX,EDX,0x10                   ; 0044a590
    ADD EDI,EAX                         ; 0044a594
    MOV dword ptr [ESP + 0x20],EDI      ; 0044a596
    TEST EDI,EDI                        ; 0044a59a
    JLE 0x0044a471                      ; 0044a59c
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a5a2
    MOV EAX,dword ptr [ECX + 0x124c]    ; 0044a5a6
    IMUL EDX                            ; 0044a5ac
    SHRD EAX,EDX,0x10                   ; 0044a5ae
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044a5b2
    MOV EDI,EAX                         ; 0044a5b6
    MOV EAX,dword ptr [ECX + 0x12ac]    ; 0044a5b8
    IMUL EDX                            ; 0044a5be
    SHRD EAX,EDX,0x10                   ; 0044a5c0
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a5c4
    ADD EDI,EAX                         ; 0044a5c8
    MOV EAX,dword ptr [ECX + 0x130c]    ; 0044a5ca
    IMUL EDX                            ; 0044a5d0
    SHRD EAX,EDX,0x10                   ; 0044a5d2
    ADD EDI,EAX                         ; 0044a5d6
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044a5d8
    MOV dword ptr [ESP + 0x18],EDI      ; 0044a5dc
    CMP EDI,EDX                         ; 0044a5e0
    JGE 0x0044a471                      ; 0044a5e2
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    MOV EBX,EDX                         ; 0044a5e8
    NEG EBX                             ; 0044a5ea
    CMP EBX,EDI                         ; 0044a5ec
    JGE 0x0044a471                      ; 0044a5ee
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a5f4
    MOV EAX,dword ptr [ECX + 0x126c]    ; 0044a5f8
    IMUL EDX                            ; 0044a5fe
    SHRD EAX,EDX,0x10                   ; 0044a600
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044a604
    MOV EDI,EAX                         ; 0044a608
    MOV EAX,dword ptr [ECX + 0x12cc]    ; 0044a60a
    IMUL EDX                            ; 0044a610
    SHRD EAX,EDX,0x10                   ; 0044a612
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a616
    ADD EDI,EAX                         ; 0044a61a
    MOV EAX,dword ptr [ECX + 0x132c]    ; 0044a61c
    IMUL EDX                            ; 0044a622
    SHRD EAX,EDX,0x10                   ; 0044a624
    ADD EDI,EAX                         ; 0044a628
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044a62a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0044a62e
    CMP EDI,EDX                         ; 0044a632
    JGE 0x0044a471                      ; 0044a634
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    CMP EBX,EDI                         ; 0044a63a
    JGE 0x0044a471                      ; 0044a63c
        ;   XREF to: 0044a471 (CONDITIONAL_JUMP)  ; LAB_0044a471
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044a642
        ;   Label: LAB_0044a642
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044a646
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044a64a
    IMUL EDX                            ; 0044a650
    IDIV EBX                            ; 0044a652
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044a654
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044a65a
    ADD EDX,EAX                         ; 0044a65e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044a660
    MOV dword ptr [ESP + 0x18],EDX      ; 0044a664
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044a668
    IMUL EDX                            ; 0044a66e
    IDIV EBX                            ; 0044a670
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044a672
    MOV EDI,ESP                         ; 0044a678
    ADD EDX,EAX                         ; 0044a67a
    LEA ESI,[ESP + 0x18]                ; 0044a67c
    MOV dword ptr [ESP + 0x1c],EDX      ; 0044a680
    MOVSD ES:EDI,ESI                    ; 0044a684
    MOVSD ES:EDI,ESI                    ; 0044a685
    MOVSD ES:EDI,ESI                    ; 0044a686
    MOV ESI,ESP                         ; 0044a687
    MOV EDI,EBP                         ; 0044a689
    MOVSD ES:EDI,ESI                    ; 0044a68b
    MOVSD ES:EDI,ESI                    ; 0044a68c
    MOVSD ES:EDI,ESI                    ; 0044a68d
    MOV EAX,EBP                         ; 0044a68e
    ADD ESP,0x24                        ; 0044a690
    POP EBP                             ; 0044a693
    POP EDI                             ; 0044a694
    POP EBX                             ; 0044a695
    RET                                 ; 0044a696

