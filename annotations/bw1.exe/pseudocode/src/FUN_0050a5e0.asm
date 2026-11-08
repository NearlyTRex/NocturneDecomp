; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050a5e0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0050b470 at 0050b98e
;
; Referenced Globals:
;   TerminatedCString s_s_4_2f_005e7aff
;   undefined4 DAT_005e7b0a
;   undefined4 DAT_0061abc0
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01d1bca0
;
; Called Functions:
;   FUN_004031c0
;   FUN_00403250
;   FUN_004032b0
;   FUN_00496840
;   FUN_00496dd0
;   FUN_00496ee0
;   FUN_004c23a0
;   FUN_004c4510
;   FUN_005acff0
;   FUN_005b2750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a5e0
        ;   Label: FUN_0050a5e0
    PUSH ESI                            ; 0050a5e1
    PUSH EDI                            ; 0050a5e2
    PUSH EBP                            ; 0050a5e3
    MOV EBP,ESP                         ; 0050a5e4
    SUB ESP,0x10                        ; 0050a5e6
    AND ESP,0xfffffff8                  ; 0050a5e9
    PUSH 0x0                            ; 0050a5ec
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050a5ee
    PUSH EDX                            ; 0050a5f1
    MOV EDX,dword ptr [0x0061b498]      ; 0050a5f2 | DAT_0061b498
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050a5f8
    SUB EAX,EDX                         ; 0050a5ff
    MOV EDX,EAX                         ; 0050a601
    SAR EDX,0x1f                        ; 0050a603
    SHL EDX,0x2                         ; 0050a606
    SBB EAX,EDX                         ; 0050a609
    SAR EAX,0x2                         ; 0050a60b
    PUSH 0x2c                           ; 0050a60e
    PUSH EAX                            ; 0050a610
    MOV ECX,dword ptr [0x0061abc0]      ; 0050a611 | DAT_0061abc0
    PUSH ECX                            ; 0050a617
    CALL FUN_00496840                   ; 0050a618
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; undefined FUN_00496840()
    ADD ESP,0x14                        ; 0050a61d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050a620
    MOV EBX,dword ptr [EAX]             ; 0050a623
    CMP EBX,0x4000                      ; 0050a625
    JL 0x0050a82b                       ; 0050a62b
        ;   XREF to: 0050a82b (CONDITIONAL_JUMP)  ; LAB_0050a82b
    CMP EBX,0x40000                     ; 0050a631
    JLE 0x0050a836                      ; 0050a637
        ;   XREF to: 0050a836 (CONDITIONAL_JUMP)  ; LAB_0050a836
    MOV dword ptr [EAX],0x40000         ; 0050a63d
        ;   Label: LAB_0050a63d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050a643
        ;   Label: LAB_0050a643
    MOV EBX,0x3c000                     ; 0050a646
    MOV ESI,dword ptr [ESI]             ; 0050a64b
    CALL FUN_004032b0                   ; 0050a64d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV ECX,dword ptr [0x01c43540]      ; 0050a652 | DAT_01c43540
    MOV EAX,[0x0061b498]                ; 0050a658 | DAT_0061b498
    PUSH ECX                            ; 0050a65d
    LEA EDX,[ESI + 0xffffc000]          ; 0050a65e
    DEC EAX                             ; 0050a664
    IMUL EDX                            ; 0050a665
    IDIV EBX                            ; 0050a667
    PUSH EAX                            ; 0050a669
    CALL FUN_005b2750                   ; 0050a66a
        ;   XREF to: 005b2750 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2750()
    XOR EBX,EBX                         ; 0050a66f
    ADD ESP,0x8                         ; 0050a671
    MOV dword ptr [ESP + 0x8],EBX       ; 0050a674
    MOV EDI,dword ptr [0x0061abc0]      ; 0050a678 | DAT_0061abc0
        ;   Label: LAB_0050a678
    PUSH EDI                            ; 0050a67e
    CALL FUN_00496ee0                   ; 0050a67f
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00496ee0()
    ADD ESP,0x4                         ; 0050a684
    MOV EDX,dword ptr [0x01c4353c]      ; 0050a687 | DAT_01c4353c
    CMP EDX,dword ptr [ESP + 0x8]       ; 0050a68d
    JZ 0x0050a6b4                       ; 0050a691
        ;   XREF to: 0050a6b4 (CONDITIONAL_JUMP)  ; LAB_0050a6b4
    MOV EBX,dword ptr [0x0061b498]      ; 0050a693 | DAT_0061b498
    MOV EAX,EDX                         ; 0050a699
    MOV EDX,0x3c000                     ; 0050a69b
    DEC EBX                             ; 0050a6a0
    IMUL EDX                            ; 0050a6a1
    IDIV EBX                            ; 0050a6a3
    LEA ESI,[EAX + 0x4000]              ; 0050a6a5
    MOV EAX,[0x01c4353c]                ; 0050a6ab | DAT_01c4353c
    MOV dword ptr [ESP + 0x8],EAX       ; 0050a6b0
    PUSH 0x4b                           ; 0050a6b4
        ;   Label: LAB_0050a6b4
    MOV EAX,[0x0061f2a4]                ; 0050a6b6 | DAT_0061f2a4
    PUSH EAX                            ; 0050a6bb | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a6bc | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a6be
    ADD ESP,0x8                         ; 0050a6c1
    TEST EAX,EAX                        ; 0050a6c4
    JZ 0x0050a6ce                       ; 0050a6c6
        ;   XREF to: 0050a6ce (CONDITIONAL_JUMP)  ; LAB_0050a6ce
    SUB ESI,0x2bc                       ; 0050a6c8
    PUSH 0x4d                           ; 0050a6ce
        ;   Label: LAB_0050a6ce
    MOV EAX,[0x0061f2a4]                ; 0050a6d0 | DAT_0061f2a4
    PUSH EAX                            ; 0050a6d5 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a6d6 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a6d8
    ADD ESP,0x8                         ; 0050a6db
    TEST EAX,EAX                        ; 0050a6de
    JZ 0x0050a6e8                       ; 0050a6e0
        ;   XREF to: 0050a6e8 (CONDITIONAL_JUMP)  ; LAB_0050a6e8
    ADD ESI,0x2bc                       ; 0050a6e2
    CMP ESI,0x4000                      ; 0050a6e8
        ;   Label: LAB_0050a6e8
    JGE 0x0050a85a                      ; 0050a6ee
        ;   XREF to: 0050a85a (CONDITIONAL_JUMP)  ; LAB_0050a85a
    MOV ESI,0x4000                      ; 0050a6f4
    MOV EAX,[0x01c4f00c]                ; 0050a6f9 | DAT_01c4f00c
        ;   Label: LAB_0050a6f9
    INC EAX                             ; 0050a6fe
    PUSH 0xff                           ; 0050a6ff
    MOV dword ptr [ESP + 0x4],EAX       ; 0050a704
    MOV EAX,[0x01c4f014]                ; 0050a708 | DAT_01c4f014
    PUSH 0x0                            ; 0050a70d
    DEC EAX                             ; 0050a70f
    MOV EBX,dword ptr [0x01c4f010]      ; 0050a710 | DAT_01c4f010
    PUSH EAX                            ; 0050a716
    DEC EBX                             ; 0050a717
    MOV dword ptr [ESP + 0x10],EAX      ; 0050a718
    PUSH EBX                            ; 0050a71c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050a71d
    MOV EDI,dword ptr [0x01c4f008]      ; 0050a721 | DAT_01c4f008
    PUSH EAX                            ; 0050a727
    INC EDI                             ; 0050a728
    PUSH EDI                            ; 0050a729
    CALL FUN_00403250                   ; 0050a72a
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; undefined FUN_00403250()
    ADD ESP,0x18                        ; 0050a72f
    LEA EDX,[ESI + 0xffffc000]          ; 0050a732
    MOV EAX,EBX                         ; 0050a738
    MOV EBX,0x3c000                     ; 0050a73a
    SUB EAX,EDI                         ; 0050a73f
    IMUL EDX                            ; 0050a741
    IDIV EBX                            ; 0050a743
    PUSH 0x4                            ; 0050a745
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050a747
    PUSH EDX                            ; 0050a74b
    ADD EAX,EDI                         ; 0050a74c
    PUSH EAX                            ; 0050a74e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050a74f
    PUSH ECX                            ; 0050a753
    PUSH EDI                            ; 0050a754
    CALL FUN_004031c0                   ; 0050a755
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 0050a75a
    MOV dword ptr [ESP + 0xc],ESI       ; 0050a75d
    FILD dword ptr [ESP + 0xc]          ; 0050a761
    FMUL double ptr [0x005e7b0a]        ; 0050a765 | DAT_005e7b0a
    SUB ESP,0x8                         ; 0050a76b
    FSTP double ptr [ESP]               ; 0050a76e
    PUSH 0x5e7aff                       ; 0050a771 | = "%4.2f"
    PUSH 0x0                            ; 0050a776
    PUSH 0xff                           ; 0050a778
    MOV EDX,dword ptr [0x01c4f00c]      ; 0050a77d | DAT_01c4f00c
    PUSH 0x41                           ; 0050a783
    MOV EDI,dword ptr [0x01c3eb50]      ; 0050a785 | DAT_01c3eb50
    MOV EBX,dword ptr [0x01c4f014]      ; 0050a78b | DAT_01c4f014
    PUSH EDI                            ; 0050a791
    ADD EBX,EDX                         ; 0050a792
    CALL FUN_004c4510                   ; 0050a794
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    MOV EDX,EBX                         ; 0050a799
    SUB EDX,EAX                         ; 0050a79b
    MOV EAX,EDX                         ; 0050a79d
    SAR EDX,0x1f                        ; 0050a79f
    SUB EAX,EDX                         ; 0050a7a2
    SAR EAX,0x1                         ; 0050a7a4
    ADD ESP,0x8                         ; 0050a7a6
    PUSH EAX                            ; 0050a7a9
    MOV EAX,[0x01c4f010]                ; 0050a7aa | DAT_01c4f010
    PUSH EAX                            ; 0050a7af
    MOV EDX,dword ptr [0x01c4f008]      ; 0050a7b0 | DAT_01c4f008
    PUSH EDX                            ; 0050a7b6
    MOV ECX,dword ptr [0x01c3eb50]      ; 0050a7b7 | DAT_01c3eb50
    PUSH ECX                            ; 0050a7bd
    CALL FUN_004c23a0                   ; 0050a7be
        ;   XREF to: 004c23a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c23a0()
    ADD ESP,0x24                        ; 0050a7c3
    CALL FUN_005acff0                   ; 0050a7c6
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    PUSH 0x1                            ; 0050a7cb
    MOV EAX,[0x0061f2a4]                ; 0050a7cd | DAT_0061f2a4
    PUSH EAX                            ; 0050a7d2 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a7d3 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a7d5
    ADD ESP,0x8                         ; 0050a7d8
    TEST EAX,EAX                        ; 0050a7db
    JNZ 0x0050a815                      ; 0050a7dd
        ;   XREF to: 0050a815 (CONDITIONAL_JUMP)  ; LAB_0050a815
    PUSH 0x1c                           ; 0050a7df
    MOV EDX,dword ptr [0x0061f2a4]      ; 0050a7e1 | DAT_0061f2a4
    PUSH EDX                            ; 0050a7e7 | DAT_01d1bca0
    MOV EAX,dword ptr [EDX]             ; 0050a7e8 | DAT_01d1bca0
    CALL dword ptr [EAX + 0x4]          ; 0050a7ea
    ADD ESP,0x8                         ; 0050a7ed
    TEST EAX,EAX                        ; 0050a7f0
    JNZ 0x0050a810                      ; 0050a7f2
        ;   XREF to: 0050a810 (CONDITIONAL_JUMP)  ; LAB_0050a810
    PUSH 0x200                          ; 0050a7f4
    MOV EDX,dword ptr [0x0061f2a4]      ; 0050a7f9 | DAT_0061f2a4
    PUSH EDX                            ; 0050a7ff | DAT_01d1bca0
    MOV EAX,dword ptr [EDX]             ; 0050a800 | DAT_01d1bca0
    CALL dword ptr [EAX + 0x4]          ; 0050a802
    ADD ESP,0x8                         ; 0050a805
    TEST EAX,EAX                        ; 0050a808
    JZ 0x0050a678                       ; 0050a80a
        ;   XREF to: 0050a678 (CONDITIONAL_JUMP)  ; LAB_0050a678
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050a810
        ;   Label: LAB_0050a810
    MOV dword ptr [EAX],ESI             ; 0050a813
    MOV EBX,dword ptr [0x0061abc0]      ; 0050a815 | DAT_0061abc0
        ;   Label: LAB_0050a815
    PUSH EBX                            ; 0050a81b
    CALL FUN_00496dd0                   ; 0050a81c
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00496dd0()
    ADD ESP,0x4                         ; 0050a821
    MOV ESP,EBP                         ; 0050a824
    POP EBP                             ; 0050a826
    POP EDI                             ; 0050a827
    POP ESI                             ; 0050a828
    POP EBX                             ; 0050a829
    RET                                 ; 0050a82a
    MOV dword ptr [EAX],0x4000          ; 0050a82b
        ;   Label: LAB_0050a82b
    JMP 0x0050a643                      ; 0050a831
        ;   XREF to: 0050a643 (UNCONDITIONAL_JUMP)  ; LAB_0050a643
    CMP EBX,0x4000                      ; 0050a836
        ;   Label: LAB_0050a836
    JGE 0x0050a849                      ; 0050a83c
        ;   XREF to: 0050a849 (CONDITIONAL_JUMP)  ; LAB_0050a849
    MOV dword ptr [EAX],0x4000          ; 0050a83e
    JMP 0x0050a643                      ; 0050a844
        ;   XREF to: 0050a643 (UNCONDITIONAL_JUMP)  ; LAB_0050a643
    CMP EBX,0x40000                     ; 0050a849
        ;   Label: LAB_0050a849
    JLE 0x0050a643                      ; 0050a84f
        ;   XREF to: 0050a643 (CONDITIONAL_JUMP)  ; LAB_0050a643
    JMP 0x0050a63d                      ; 0050a855
        ;   XREF to: 0050a63d (UNCONDITIONAL_JUMP)  ; LAB_0050a63d
    CMP ESI,0x40000                     ; 0050a85a
        ;   Label: LAB_0050a85a
    JLE 0x0050a6f9                      ; 0050a860
        ;   XREF to: 0050a6f9 (CONDITIONAL_JUMP)  ; LAB_0050a6f9
    MOV ESI,0x40000                     ; 0050a866
    JMP 0x0050a6f9                      ; 0050a86b
        ;   XREF to: 0050a6f9 (UNCONDITIONAL_JUMP)  ; LAB_0050a6f9

