; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c530(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_00534420 at 0053457b
;   FUN_00534890 at 00535184
;   FUN_00535a80 at 00535b82
;   FUN_005365c0 at 00536725
;   FUN_00536990 at 00536aea
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb2d4
;   TerminatedCString s_CDemonLight_beginScene_S_005bb2e7
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd520
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00448fa0
;   FUN_00449dd0
;   FUN_0046cb90
;   FUN_0046cc40
;   FUN_0046d090
;   FUN_0046d2f0
;   FUN_0046d520
;   FUN_00495ec0
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c530
        ;   Label: FUN_0045c530
    PUSH ESI                            ; 0045c531
    PUSH EDI                            ; 0045c532
    PUSH EBP                            ; 0045c533
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045c534
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0045c538
    JNZ 0x0045c6c1                      ; 0045c53f
        ;   XREF to: 0045c6c1 (CONDITIONAL_JUMP)  ; LAB_0045c6c1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045c545
        ;   Label: LAB_0045c545
    PUSH EDI                            ; 0045c549
    PUSH EBX                            ; 0045c54a
    MOV dword ptr [EBX + 0x11e4],0x1    ; 0045c54b
    CALL FUN_00448fa0                   ; 0045c555
        ;   XREF to: 00448fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00448fa0()
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0045c55a
    ADD ESP,0x8                         ; 0045c560
    DEC EAX                             ; 0045c563
    PUSH EAX                            ; 0045c564
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045c565
    DEC EAX                             ; 0045c56b
    PUSH EAX                            ; 0045c56c
    PUSH 0x0                            ; 0045c56d
    PUSH 0x0                            ; 0045c56f
    MOV EBP,dword ptr [0x005f2afc]      ; 0045c571 | DAT_005f2afc
    PUSH EBP                            ; 0045c577 | DAT_01bdd7e4
    CALL FUN_0046d2f0                   ; 0045c578
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d2f0()
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045c57d
    DEC EAX                             ; 0045c583
    MOV dword ptr [EBX + 0x11dc],EAX    ; 0045c584
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0045c58a
    MOV dword ptr [EBX + 0x11d4],0x0    ; 0045c590
    DEC EAX                             ; 0045c59a
    ADD ESP,0x14                        ; 0045c59b
    MOV dword ptr [EBX + 0x11e0],EAX    ; 0045c59e
    LEA EAX,[EBX + 0x4]                 ; 0045c5a4
    MOV dword ptr [EBX + 0x11d8],0x0    ; 0045c5a7
    PUSH EAX                            ; 0045c5b1
    MOV EAX,[0x005f2afc]                ; 0045c5b2 | DAT_005f2afc
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0045c5b7
    PUSH EAX                            ; 0045c5c1 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x168],EDI     ; 0045c5c2
    CALL FUN_0046cb90                   ; 0045c5c8
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cb90()
    ADD ESP,0x8                         ; 0045c5cd
    MOV EDX,dword ptr [0x005f2afc]      ; 0045c5d0 | DAT_005f2afc
    PUSH dword ptr [EBX + 0x38]         ; 0045c5d6
    PUSH EDX                            ; 0045c5d9 | DAT_01bdd7e4
    CALL FUN_0046d090                   ; 0045c5da
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d090()
    ADD ESP,0x8                         ; 0045c5df
    LEA EAX,[EBX + 0x10]                ; 0045c5e2
    PUSH EAX                            ; 0045c5e5
    MOV ECX,dword ptr [0x005f2afc]      ; 0045c5e6 | DAT_005f2afc
    PUSH ECX                            ; 0045c5ec | DAT_01bdd7e4
    CALL FUN_0046cc40                   ; 0045c5ed
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cc40()
    ADD ESP,0x8                         ; 0045c5f2
    MOV EDX,dword ptr [0x01c6e300]      ; 0045c5f5 | DAT_01c6e300
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0045c5fb
    IMUL EDX                            ; 0045c601
    SHRD EAX,EDX,0x10                   ; 0045c603
    MOV EDX,dword ptr [0x01c6e30c]      ; 0045c607 | DAT_01c6e30c
    MOV [0x01c6e300],EAX                ; 0045c60d | DAT_01c6e300
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0045c612
    IMUL EDX                            ; 0045c618
    SHRD EAX,EDX,0x10                   ; 0045c61a
    MOV EDX,dword ptr [0x01c6e318]      ; 0045c61e | DAT_01c6e318
    MOV [0x01c6e30c],EAX                ; 0045c624 | DAT_01c6e30c
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0045c629
    IMUL EDX                            ; 0045c62f
    SHRD EAX,EDX,0x10                   ; 0045c631
    MOV [0x01c6e318],EAX                ; 0045c635 | DAT_01c6e318
    TEST EDI,EDI                        ; 0045c63a
    JZ 0x0045c6e9                       ; 0045c63c
        ;   XREF to: 0045c6e9 (CONDITIONAL_JUMP)  ; LAB_0045c6e9
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 0045c642
        ;   Label: LAB_0045c642
    XOR EAX,EAX                         ; 0045c648
    TEST EBP,EBP                        ; 0045c64a
    JLE 0x0045c690                      ; 0045c64c
        ;   XREF to: 0045c690 (CONDITIONAL_JUMP)  ; LAB_0045c690
    MOV EDX,EBX                         ; 0045c64e
    MOV ESI,dword ptr [EAX*0x4 + 0x1c5faec] ; 0045c650 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_0045c650
    MOV dword ptr [EDX + 0x1cd4],ESI    ; 0045c657
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0045c65d
    IMUL ESI,EAX                        ; 0045c663
    MOV EDI,dword ptr [EBX + 0x2f94]    ; 0045c666
    ADD ESI,ESI                         ; 0045c66c
    ADD ESI,EDI                         ; 0045c66e
    MOV dword ptr [EAX*0x4 + 0x1c5faec],ESI ; 0045c670 | DAT_01c5faec | DAT_01c5faf0
    INC EAX                             ; 0045c677
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 0045c678
    ADD EDX,0x4                         ; 0045c67e
    CMP EAX,ECX                         ; 0045c681
    JL 0x0045c650                       ; 0045c683
        ;   XREF to: 0045c650 (CONDITIONAL_JUMP)  ; LAB_0045c650
    LEA EAX,[EAX]                       ; 0045c685
    LEA EDX,[EDX]                       ; 0045c68b
    MOV EBX,EBX                         ; 0045c68e
    PUSH EBX                            ; 0045c690
        ;   Label: LAB_0045c690
    CALL FUN_00449dd0                   ; 0045c691
        ;   XREF to: 00449dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00449dd0()
    ADD ESP,0x4                         ; 0045c696
    PUSH 0x1                            ; 0045c699
    MOV EBX,dword ptr [0x005f2afc]      ; 0045c69b | DAT_005f2afc
    PUSH EBX                            ; 0045c6a1 | DAT_01bdd7e4
    CALL FUN_0046d520                   ; 0045c6a2
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d520()
    ADD ESP,0x8                         ; 0045c6a7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045c6aa
    TEST ESI,ESI                        ; 0045c6ae
    JZ 0x0045c70e                       ; 0045c6b0
        ;   XREF to: 0045c70e (CONDITIONAL_JUMP)  ; LAB_0045c70e
    MOV dword ptr [0x01bdd520],0x8000   ; 0045c6b2 | DAT_01bdd520
    POP EBP                             ; 0045c6bc
    POP EDI                             ; 0045c6bd
    POP ESI                             ; 0045c6be
    POP EBX                             ; 0045c6bf
    RET                                 ; 0045c6c0
    MOV ECX,0x5bb2d4                    ; 0045c6c1 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0045c6c1
    MOV ESI,0xf3                        ; 0045c6c6
    PUSH 0x5bb2e7                       ; 0045c6cb | = "CDemonLight::beginScene - Scene alrea..."
    MOV dword ptr [0x01d71de0],ECX      ; 0045c6d0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045c6d6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0045c6dc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0045c6e1
    JMP 0x0045c545                      ; 0045c6e4
        ;   XREF to: 0045c545 (UNCONDITIONAL_JUMP)  ; LAB_0045c545
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045c6e9
        ;   Label: LAB_0045c6e9
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 0045c6ef
    ADD EAX,EAX                         ; 0045c6f6
    PUSH EAX                            ; 0045c6f8
    MOV EDX,0xff                        ; 0045c6f9
    MOV ECX,dword ptr [EBX + 0x2f94]    ; 0045c6fe
    CALL FUN_00495ec0                   ; 0045c704
        ;   XREF to: 00495ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00495ec0()
    JMP 0x0045c642                      ; 0045c709
        ;   XREF to: 0045c642 (UNCONDITIONAL_JUMP)  ; LAB_0045c642
    MOV dword ptr [0x01bdd520],ESI      ; 0045c70e | DAT_01bdd520
        ;   Label: LAB_0045c70e
    POP EBP                             ; 0045c714
    POP EDI                             ; 0045c715
    POP ESI                             ; 0045c716
    POP EBX                             ; 0045c717
    RET                                 ; 0045c718

