; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0630(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_005c0600 at 005c0606
;   FUN_005c0b10 at 005c0c63
;
; Called Functions:
;   FUN_005c64a0
;   FUN_005c654c
;   FUN_005c65a0
;   FUN_005c65d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0630
        ;   Label: FUN_005c0630
    PUSH ESI                            ; 005c0631
    PUSH EDI                            ; 005c0632
    PUSH EBP                            ; 005c0633
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c0634
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0638
    CMP dword ptr [EAX + 0x8],0x0       ; 005c063b
    JNZ 0x005c064a                      ; 005c063f
        ;   XREF to: 005c064a (CONDITIONAL_JUMP)  ; LAB_005c064a
    PUSH EBX                            ; 005c0641
    CALL FUN_005c64a0                   ; 005c0642
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c64a0()
    ADD ESP,0x4                         ; 005c0647
    MOV AH,byte ptr [EBX + 0xd]         ; 005c064a
        ;   Label: LAB_005c064a
    TEST AH,0x20                        ; 005c064d
    JZ 0x005c0664                       ; 005c0650
        ;   XREF to: 005c0664 (CONDITIONAL_JUMP)  ; LAB_005c0664
    TEST AH,0x6                         ; 005c0652
    JZ 0x005c0664                       ; 005c0655
        ;   XREF to: 005c0664 (CONDITIONAL_JUMP)  ; LAB_005c0664
    PUSH 0x2000                         ; 005c0657
    CALL FUN_005c654c                   ; 005c065c
        ;   XREF to: 005c654c (UNCONDITIONAL_CALL)  ; undefined FUN_005c654c()
    ADD ESP,0x4                         ; 005c0661
    MOV DH,byte ptr [EBX + 0xc]         ; 005c0664
        ;   Label: LAB_005c0664
    AND DH,0xfb                         ; 005c0667
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c066a
    MOV byte ptr [EBX + 0xc],DH         ; 005c066d
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c0670
    MOV dword ptr [EBX],EAX             ; 005c0673
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c0675
    AND EAX,0x2400                      ; 005c0678
    CMP EAX,0x2400                      ; 005c067d
    JNZ 0x005c06a7                      ; 005c0682
        ;   XREF to: 005c06a7 (CONDITIONAL_JUMP)  ; LAB_005c06a7
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c0684
    TEST ECX,ECX                        ; 005c0687
    JNZ 0x005c06a7                      ; 005c0689
        ;   XREF to: 005c06a7 (CONDITIONAL_JUMP)  ; LAB_005c06a7
    MOV dword ptr [EBX + 0x4],ECX       ; 005c068b
    CALL FUN_005c65a0                   ; 005c068e
        ;   XREF to: 005c65a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c65a0()
    MOV EDX,EAX                         ; 005c0693
    CMP EAX,-0x1                        ; 005c0695
    JZ 0x005c06ca                       ; 005c0698
        ;   XREF to: 005c06ca (CONDITIONAL_JUMP)  ; LAB_005c06ca
    MOV EAX,dword ptr [EBX]             ; 005c069a
    MOV byte ptr [EAX],DL               ; 005c069c
    MOV dword ptr [EBX + 0x4],0x1       ; 005c069e
    JMP 0x005c06ef                      ; 005c06a5
        ;   XREF to: 005c06ef (UNCONDITIONAL_JUMP)  ; LAB_005c06ef
    TEST byte ptr [EBX + 0xd],0x4       ; 005c06a7
        ;   Label: LAB_005c06a7
    JZ 0x005c06b4                       ; 005c06ab
        ;   XREF to: 005c06b4 (CONDITIONAL_JUMP)  ; LAB_005c06b4
    MOV EAX,0x1                         ; 005c06ad
    JMP 0x005c06b7                      ; 005c06b2
        ;   XREF to: 005c06b7 (UNCONDITIONAL_JUMP)  ; LAB_005c06b7
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c06b4
        ;   Label: LAB_005c06b4
    PUSH EAX                            ; 005c06b7
        ;   Label: LAB_005c06b7
    MOV ESI,dword ptr [EBX]             ; 005c06b8
    PUSH ESI                            ; 005c06ba
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c06bb
    PUSH EDI                            ; 005c06be
    CALL FUN_005c65d0                   ; 005c06bf
        ;   XREF to: 005c65d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c65d0()
    ADD ESP,0xc                         ; 005c06c4
    MOV dword ptr [EBX + 0x4],EAX       ; 005c06c7
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c06ca
        ;   Label: LAB_005c06ca
    TEST EBP,EBP                        ; 005c06cd
    JG 0x005c06ef                       ; 005c06cf
        ;   XREF to: 005c06ef (CONDITIONAL_JUMP)  ; LAB_005c06ef
    JNZ 0x005c06df                      ; 005c06d1
        ;   XREF to: 005c06df (CONDITIONAL_JUMP)  ; LAB_005c06df
    OR byte ptr [EBX + 0xc],0x10        ; 005c06d3
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c06d7
    POP EBP                             ; 005c06da
    POP EDI                             ; 005c06db
    POP ESI                             ; 005c06dc
    POP EBX                             ; 005c06dd
    RET                                 ; 005c06de
    MOV CH,byte ptr [EBX + 0xc]         ; 005c06df
        ;   Label: LAB_005c06df
    MOV dword ptr [EBX + 0x4],0x0       ; 005c06e2
    OR CH,0x20                          ; 005c06e9
    MOV byte ptr [EBX + 0xc],CH         ; 005c06ec
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c06ef
        ;   Label: LAB_005c06ef
    POP EBP                             ; 005c06f2
    POP EDI                             ; 005c06f3
    POP ESI                             ; 005c06f4
    POP EBX                             ; 005c06f5
    RET                                 ; 005c06f6

