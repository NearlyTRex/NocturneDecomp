; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00460630(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004cf030 at 004cf19b
;
; Referenced Globals:
;   void* switchdataD_0046061c = 00460679
;   TerminatedCString s_You_cannot_enter_here_005d0bda
;   TerminatedCString s_core_door_cpp_005d0bf1
;   TerminatedCString s_CDoor_getMoveType_invali_005d0c02
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00408de0
;   FUN_00460800
;   FUN_004b31a0
;   FUN_004e4500
;   FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460630
        ;   Label: FUN_00460630
    PUSH ESI                            ; 00460631
    PUSH EDI                            ; 00460632
    PUSH EBP                            ; 00460633
    MOV EBP,ESP                         ; 00460634
    SUB ESP,0x18                        ; 00460636
    AND ESP,0xfffffff8                  ; 00460639
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046063c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046063f
    ADD EAX,0x20                        ; 00460642
    PUSH EAX                            ; 00460645
    PUSH EBX                            ; 00460646
    LEA ESI,[ESP + 0x8]                 ; 00460647
    LEA EDI,[ESP + 0x14]                ; 0046064b
    CALL FUN_00408de0                   ; 0046064f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 00460654
    MOV ESI,ESP                         ; 00460657
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00460659
    MOVSD ES:EDI,ESI                    ; 0046065c
    MOVSD ES:EDI,ESI                    ; 0046065d
    MOVSD ES:EDI,ESI                    ; 0046065e
    TEST EDX,EDX                        ; 0046065f
    JZ 0x004606b1                       ; 00460661
        ;   XREF to: 004606b1 (CONDITIONAL_JUMP)  ; LAB_004606b1
    MOV EAX,dword ptr [EBX + 0x434]     ; 00460663
        ;   Label: LAB_00460663
    CMP EAX,0x3                         ; 00460669
    JA 0x004607d3                       ; 0046066c
        ;   XREF to: 004607d3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x46061c]  ; 00460672 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0x440],0x0     ; 00460679
        ;   Label: caseD_0
    JNZ 0x0046074d                      ; 00460680
        ;   XREF to: 0046074d (CONDITIONAL_JUMP)  ; LAB_0046074d
    CMP dword ptr [EBX + 0x43c],0x0     ; 00460686
        ;   Label: LAB_00460686
    JZ 0x00460694                       ; 0046068d
        ;   XREF to: 00460694 (CONDITIONAL_JUMP)  ; LAB_00460694
    XOR byte ptr [ESP + 0x17],0x80      ; 0046068f
    FLD float ptr [ESP + 0x14]          ; 00460694
        ;   Label: LAB_00460694
    FLDZ                                ; 00460698
    FCOMPP                              ; 0046069a
    FNSTSW AX                           ; 0046069c
    SAHF                                ; 0046069e
    JBE 0x00460757                      ; 0046069f
        ;   XREF to: 00460757 (CONDITIONAL_JUMP)  ; LAB_00460757
    MOV EAX,0x3                         ; 004606a5
    MOV ESP,EBP                         ; 004606aa
    POP EBP                             ; 004606ac
    POP EDI                             ; 004606ad
    POP ESI                             ; 004606ae
    POP EBX                             ; 004606af
    RET                                 ; 004606b0
    PUSH 0x5d0bda                       ; 004606b1 | = "You cannot enter here."
        ;   Label: LAB_004606b1
    CALL FUN_0050fe80                   ; 004606b6
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004606bb
    MOV ESI,EAX                         ; 004606be
    FLD float ptr [ESP + 0x14]          ; 004606c0
    FLDZ                                ; 004606c4
    FCOMPP                              ; 004606c6
    FNSTSW AX                           ; 004606c8
    SAHF                                ; 004606ca
    JNC 0x00460707                      ; 004606cb
        ;   XREF to: 00460707 (CONDITIONAL_JUMP)  ; LAB_00460707
    TEST byte ptr [EBX + 0xb34],0x1     ; 004606cd
    JNZ 0x00460663                      ; 004606d4
        ;   XREF to: 00460663 (CONDITIONAL_JUMP)  ; LAB_00460663
    CMP dword ptr [EBX + 0xb34],0x0     ; 004606d6
    JNZ 0x004606e8                      ; 004606dd
        ;   XREF to: 004606e8 (CONDITIONAL_JUMP)  ; LAB_004606e8
    XOR EAX,EAX                         ; 004606df
        ;   Label: LAB_004606df
    MOV ESP,EBP                         ; 004606e1
    POP EBP                             ; 004606e3
    POP EDI                             ; 004606e4
    POP ESI                             ; 004606e5
    POP EBX                             ; 004606e6
    RET                                 ; 004606e7
    PUSH EBX                            ; 004606e8
        ;   Label: LAB_004606e8
    CALL FUN_00460800                   ; 004606e9
        ;   XREF to: 00460800 (UNCONDITIONAL_CALL)  ; undefined FUN_00460800()
    ADD ESP,0x4                         ; 004606ee
    PUSH 0x40a00000                     ; 004606f1
    PUSH ESI                            ; 004606f6
    MOV EAX,[0x00616494]                ; 004606f7 | DAT_00616494
    PUSH EAX                            ; 004606fc | DAT_01cb6900
    CALL FUN_004b31a0                   ; 004606fd
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 00460702
    JMP 0x004606df                      ; 00460705
        ;   XREF to: 004606df (UNCONDITIONAL_JUMP)  ; LAB_004606df
    TEST byte ptr [EBX + 0xb34],0x2     ; 00460707
        ;   Label: LAB_00460707
    JNZ 0x00460663                      ; 0046070e
        ;   XREF to: 00460663 (CONDITIONAL_JUMP)  ; LAB_00460663
    CMP dword ptr [EBX + 0xb34],0x0     ; 00460714
    JNZ 0x00460726                      ; 0046071b
        ;   XREF to: 00460726 (CONDITIONAL_JUMP)  ; LAB_00460726
    XOR EAX,EAX                         ; 0046071d
    MOV ESP,EBP                         ; 0046071f
    POP EBP                             ; 00460721
    POP EDI                             ; 00460722
    POP ESI                             ; 00460723
    POP EBX                             ; 00460724
    RET                                 ; 00460725
    PUSH EBX                            ; 00460726
        ;   Label: LAB_00460726
    CALL FUN_00460800                   ; 00460727
        ;   XREF to: 00460800 (UNCONDITIONAL_CALL)  ; undefined FUN_00460800()
    ADD ESP,0x4                         ; 0046072c
    PUSH 0x40a00000                     ; 0046072f
    PUSH ESI                            ; 00460734
    MOV EBX,dword ptr [0x00616494]      ; 00460735 | DAT_00616494
    PUSH EBX                            ; 0046073b | DAT_01cb6900
    CALL FUN_004b31a0                   ; 0046073c
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 00460741
    XOR EAX,EAX                         ; 00460744
    MOV ESP,EBP                         ; 00460746
    POP EBP                             ; 00460748
    POP EDI                             ; 00460749
    POP ESI                             ; 0046074a
    POP EBX                             ; 0046074b
    RET                                 ; 0046074c
    XOR byte ptr [ESP + 0x17],0x80      ; 0046074d
        ;   Label: LAB_0046074d
    JMP 0x00460686                      ; 00460752
        ;   XREF to: 00460686 (UNCONDITIONAL_JUMP)  ; LAB_00460686
    MOV EAX,0x2                         ; 00460757
        ;   Label: LAB_00460757
    MOV ESP,EBP                         ; 0046075c
    POP EBP                             ; 0046075e
    POP EDI                             ; 0046075f
    POP ESI                             ; 00460760
    POP EBX                             ; 00460761
    RET                                 ; 00460762
    CMP dword ptr [EBX + 0x43c],0x0     ; 00460763
        ;   Label: caseD_1
    JZ 0x00460778                       ; 0046076a
        ;   XREF to: 00460778 (CONDITIONAL_JUMP)  ; LAB_00460778
    MOV EAX,0x7                         ; 0046076c
    MOV ESP,EBP                         ; 00460771
    POP EBP                             ; 00460773
    POP EDI                             ; 00460774
    POP ESI                             ; 00460775
    POP EBX                             ; 00460776
    RET                                 ; 00460777
    MOV EAX,0x6                         ; 00460778
        ;   Label: LAB_00460778
    MOV ESP,EBP                         ; 0046077d
    POP EBP                             ; 0046077f
    POP EDI                             ; 00460780
    POP ESI                             ; 00460781
    POP EBX                             ; 00460782
    RET                                 ; 00460783
    CMP dword ptr [EBX + 0x438],0x1     ; 00460784
        ;   Label: caseD_2
    JNZ 0x004607b4                      ; 0046078b
        ;   XREF to: 004607b4 (CONDITIONAL_JUMP)  ; LAB_004607b4
    CMP dword ptr [EBX + 0x43c],0x0     ; 0046078d
        ;   Label: LAB_0046078d
    JZ 0x0046079b                       ; 00460794
        ;   XREF to: 0046079b (CONDITIONAL_JUMP)  ; LAB_0046079b
    XOR byte ptr [ESP + 0x17],0x80      ; 00460796
    FLD float ptr [ESP + 0x14]          ; 0046079b
        ;   Label: LAB_0046079b
    FLDZ                                ; 0046079f
    FCOMPP                              ; 004607a1
    FNSTSW AX                           ; 004607a3
    SAHF                                ; 004607a5
    JBE 0x004607bb                      ; 004607a6
        ;   XREF to: 004607bb (CONDITIONAL_JUMP)  ; LAB_004607bb
    MOV EAX,0x5                         ; 004607a8
    MOV ESP,EBP                         ; 004607ad
    POP EBP                             ; 004607af
    POP EDI                             ; 004607b0
    POP ESI                             ; 004607b1
    POP EBX                             ; 004607b2
    RET                                 ; 004607b3
    XOR byte ptr [ESP + 0x17],0x80      ; 004607b4
        ;   Label: LAB_004607b4
    JMP 0x0046078d                      ; 004607b9
        ;   XREF to: 0046078d (UNCONDITIONAL_JUMP)  ; LAB_0046078d
    MOV EAX,0x4                         ; 004607bb
        ;   Label: LAB_004607bb
    MOV ESP,EBP                         ; 004607c0
    POP EBP                             ; 004607c2
    POP EDI                             ; 004607c3
    POP ESI                             ; 004607c4
    POP EBX                             ; 004607c5
    RET                                 ; 004607c6
    MOV EAX,0x1                         ; 004607c7
        ;   Label: caseD_3
    MOV ESP,EBP                         ; 004607cc
    POP EBP                             ; 004607ce
    POP EDI                             ; 004607cf
    POP ESI                             ; 004607d0
    POP EBX                             ; 004607d1
    RET                                 ; 004607d2
    MOV EDX,0x5d0bf1                    ; 004607d3 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x3de                       ; 004607d8
    PUSH 0x5d0c02                       ; 004607dd | = "CDoor::getMoveType - invalid door!"
    MOV dword ptr [0x01d046a0],EDX      ; 004607e2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004607e8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004607ee
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004607f3
    XOR EAX,EAX                         ; 004607f6
    MOV ESP,EBP                         ; 004607f8
    POP EBP                             ; 004607fa
    POP EDI                             ; 004607fb
    POP ESI                             ; 004607fc
    POP EBX                             ; 004607fd
    RET                                 ; 004607fe

