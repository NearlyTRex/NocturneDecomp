; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005a65b8(undefined4 param_1,int *param_2,int param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a6190 at 005a6210
;
; Called Functions:
;   crt_unknown.c_FUN_005a671c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a65b8
        ;   Label: crt_unknown.c_FUN_005a65b8
    PUSH ESI                            ; 005a65b9
    PUSH EDI                            ; 005a65ba
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a65bb
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a65bf
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a65c3
    PUSH EBX                            ; 005a65c7
    PUSH EAX                            ; 005a65c8
    MOV byte ptr [EBX + 0x16],0x20      ; 005a65c9
    CALL crt_unknown.c_FUN_005a671c     ; 005a65cd
        ;   XREF to: 005a671c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a671c()
    MOV dword ptr [EBX + 0x4],0x0       ; 005a65d2
    MOV CL,byte ptr [EAX]               ; 005a65d9
    ADD ESP,0x8                         ; 005a65db
    CMP CL,0x2a                         ; 005a65de
    JNZ 0x005a6607                      ; 005a65e1
        ;   XREF to: 005a6607 (CONDITIONAL_JUMP)  ; LAB_005a6607
    MOV EDX,dword ptr [ESI]             ; 005a65e3
    ADD EDX,0x4                         ; 005a65e5
    MOV dword ptr [ESI],EDX             ; 005a65e8
    MOV EDX,dword ptr [EDX + -0x4]      ; 005a65ea
    MOV dword ptr [EBX + 0x4],EDX       ; 005a65ed
    TEST EDX,EDX                        ; 005a65f0
    JGE 0x005a6604                      ; 005a65f2
        ;   XREF to: 005a6604 (CONDITIONAL_JUMP)  ; LAB_005a6604
    MOV EDI,EDX                         ; 005a65f4
    MOV CH,byte ptr [EBX + 0x1e]        ; 005a65f6
    NEG EDI                             ; 005a65f9
    OR CH,0x8                           ; 005a65fb
    MOV dword ptr [EBX + 0x4],EDI       ; 005a65fe
    MOV byte ptr [EBX + 0x1e],CH        ; 005a6601
    INC EAX                             ; 005a6604
        ;   Label: LAB_005a6604
    JMP 0x005a6626                      ; 005a6605
        ;   XREF to: 005a6626 (UNCONDITIONAL_JUMP)  ; LAB_005a6626
    MOV DL,byte ptr [EAX]               ; 005a6607
        ;   Label: LAB_005a6607
    CMP DL,0x30                         ; 005a6609
    JC 0x005a6626                       ; 005a660c
        ;   XREF to: 005a6626 (CONDITIONAL_JUMP)  ; LAB_005a6626
    CMP DL,0x39                         ; 005a660e
    JA 0x005a6626                       ; 005a6611
        ;   XREF to: 005a6626 (CONDITIONAL_JUMP)  ; LAB_005a6626
    IMUL ECX,dword ptr [EBX + 0x4],0xa  ; 005a6613
    XOR EDX,EDX                         ; 005a6617
    MOV DL,byte ptr [EAX]               ; 005a6619
    SUB EDX,0x30                        ; 005a661b
    ADD ECX,EDX                         ; 005a661e
    INC EAX                             ; 005a6620
    MOV dword ptr [EBX + 0x4],ECX       ; 005a6621
    JMP 0x005a6607                      ; 005a6624
        ;   XREF to: 005a6607 (UNCONDITIONAL_JUMP)  ; LAB_005a6607
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005a6626
        ;   Label: LAB_005a6626
    CMP byte ptr [EAX],0x2e             ; 005a662d
    JNZ 0x005a6686                      ; 005a6630
        ;   XREF to: 005a6686 (CONDITIONAL_JUMP)  ; LAB_005a6686
    MOV dword ptr [EBX + 0x8],0x0       ; 005a6632
    MOV CH,byte ptr [EAX + 0x1]         ; 005a6639
    INC EAX                             ; 005a663c
    CMP CH,0x2a                         ; 005a663d
    JNZ 0x005a665d                      ; 005a6640
        ;   XREF to: 005a665d (CONDITIONAL_JUMP)  ; LAB_005a665d
    MOV EDX,dword ptr [ESI]             ; 005a6642
    ADD EDX,0x4                         ; 005a6644
    MOV dword ptr [ESI],EDX             ; 005a6647
    MOV EDX,dword ptr [EDX + -0x4]      ; 005a6649
    MOV dword ptr [EBX + 0x8],EDX       ; 005a664c
    TEST EDX,EDX                        ; 005a664f
    JGE 0x005a665a                      ; 005a6651
        ;   XREF to: 005a665a (CONDITIONAL_JUMP)  ; LAB_005a665a
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005a6653
    INC EAX                             ; 005a665a
        ;   Label: LAB_005a665a
    JMP 0x005a667c                      ; 005a665b
        ;   XREF to: 005a667c (UNCONDITIONAL_JUMP)  ; LAB_005a667c
    MOV DL,byte ptr [EAX]               ; 005a665d
        ;   Label: LAB_005a665d
    CMP DL,0x30                         ; 005a665f
    JC 0x005a667c                       ; 005a6662
        ;   XREF to: 005a667c (CONDITIONAL_JUMP)  ; LAB_005a667c
    CMP DL,0x39                         ; 005a6664
    JA 0x005a667c                       ; 005a6667
        ;   XREF to: 005a667c (CONDITIONAL_JUMP)  ; LAB_005a667c
    IMUL ECX,dword ptr [EBX + 0x8],0xa  ; 005a6669
    XOR EDX,EDX                         ; 005a666d
    MOV DL,byte ptr [EAX]               ; 005a666f
    SUB EDX,0x30                        ; 005a6671
    ADD ECX,EDX                         ; 005a6674
    INC EAX                             ; 005a6676
    MOV dword ptr [EBX + 0x8],ECX       ; 005a6677
    JMP 0x005a665d                      ; 005a667a
        ;   XREF to: 005a665d (UNCONDITIONAL_JUMP)  ; LAB_005a665d
    CMP dword ptr [EBX + 0x8],-0x1      ; 005a667c
        ;   Label: LAB_005a667c
    JZ 0x005a6686                       ; 005a6680
        ;   XREF to: 005a6686 (CONDITIONAL_JUMP)  ; LAB_005a6686
    MOV byte ptr [EBX + 0x16],0x20      ; 005a6682
    MOV DL,byte ptr [EAX]               ; 005a6686
        ;   Label: LAB_005a6686
    LEA ECX,[EAX + 0x1]                 ; 005a6688
    CMP DL,0x4e                         ; 005a668b
    JC 0x005a66af                       ; 005a668e
        ;   XREF to: 005a66af (CONDITIONAL_JUMP)  ; LAB_005a66af
    JBE 0x005a6711                      ; 005a6690
        ;   XREF to: 005a6711 (CONDITIONAL_JUMP)  ; LAB_005a6711
    CMP DL,0x6c                         ; 005a6696
    JC 0x005a66a6                       ; 005a6699
        ;   XREF to: 005a66a6 (CONDITIONAL_JUMP)  ; LAB_005a66a6
    JBE 0x005a66c8                      ; 005a669b
        ;   XREF to: 005a66c8 (CONDITIONAL_JUMP)  ; LAB_005a66c8
    CMP DL,0x77                         ; 005a669d
    JZ 0x005a66c8                       ; 005a66a0
        ;   XREF to: 005a66c8 (CONDITIONAL_JUMP)  ; LAB_005a66c8
    POP EDI                             ; 005a66a2
    POP ESI                             ; 005a66a3
    POP EBX                             ; 005a66a4
    RET                                 ; 005a66a5
    CMP DL,0x68                         ; 005a66a6
        ;   Label: LAB_005a66a6
    JZ 0x005a66d6                       ; 005a66a9
        ;   XREF to: 005a66d6 (CONDITIONAL_JUMP)  ; LAB_005a66d6
    POP EDI                             ; 005a66ab
    POP ESI                             ; 005a66ac
    POP EBX                             ; 005a66ad
    RET                                 ; 005a66ae
    CMP DL,0x49                         ; 005a66af
        ;   Label: LAB_005a66af
    JC 0x005a66bf                       ; 005a66b2
        ;   XREF to: 005a66bf (CONDITIONAL_JUMP)  ; LAB_005a66bf
    JBE 0x005a66dc                      ; 005a66b4
        ;   XREF to: 005a66dc (CONDITIONAL_JUMP)  ; LAB_005a66dc
    CMP DL,0x4c                         ; 005a66b6
    JZ 0x005a66f8                       ; 005a66b9
        ;   XREF to: 005a66f8 (CONDITIONAL_JUMP)  ; LAB_005a66f8
    POP EDI                             ; 005a66bb
    POP ESI                             ; 005a66bc
    POP EBX                             ; 005a66bd
    RET                                 ; 005a66be
    CMP DL,0x46                         ; 005a66bf
        ;   Label: LAB_005a66bf
    JZ 0x005a6707                       ; 005a66c2
        ;   XREF to: 005a6707 (CONDITIONAL_JUMP)  ; LAB_005a6707
    POP EDI                             ; 005a66c4
    POP ESI                             ; 005a66c5
    POP EBX                             ; 005a66c6
    RET                                 ; 005a66c7
    MOV CL,byte ptr [EBX + 0x1e]        ; 005a66c8
        ;   Label: LAB_005a66c8
    OR CL,0x20                          ; 005a66cb
    INC EAX                             ; 005a66ce
    MOV byte ptr [EBX + 0x1e],CL        ; 005a66cf
    POP EDI                             ; 005a66d2
    POP ESI                             ; 005a66d3
    POP EBX                             ; 005a66d4
    RET                                 ; 005a66d5
    OR byte ptr [EBX + 0x1e],0x10       ; 005a66d6
        ;   Label: LAB_005a66d6
    JMP 0x005a6715                      ; 005a66da
        ;   XREF to: 005a6715 (UNCONDITIONAL_JUMP)  ; LAB_005a6715
    CMP byte ptr [EAX + 0x1],0x36       ; 005a66dc
        ;   Label: LAB_005a66dc
    JNZ 0x005a6717                      ; 005a66e0
        ;   XREF to: 005a6717 (CONDITIONAL_JUMP)  ; LAB_005a6717
    CMP byte ptr [EAX + 0x2],0x34       ; 005a66e2
    JNZ 0x005a6717                      ; 005a66e6
        ;   XREF to: 005a6717 (CONDITIONAL_JUMP)  ; LAB_005a6717
    MOV CH,byte ptr [EBX + 0x1f]        ; 005a66e8
    OR CH,0x1                           ; 005a66eb
    ADD EAX,0x3                         ; 005a66ee
    MOV byte ptr [EBX + 0x1f],CH        ; 005a66f1
    POP EDI                             ; 005a66f4
    POP ESI                             ; 005a66f5
    POP EBX                             ; 005a66f6
    RET                                 ; 005a66f7
    MOV DL,byte ptr [EBX + 0x1f]        ; 005a66f8
        ;   Label: LAB_005a66f8
    OR DL,0x1                           ; 005a66fb
    MOV EAX,ECX                         ; 005a66fe
    MOV byte ptr [EBX + 0x1f],DL        ; 005a6700
    POP EDI                             ; 005a6703
    POP ESI                             ; 005a6704
    POP EBX                             ; 005a6705
    RET                                 ; 005a6706
    OR byte ptr [EBX + 0x1e],0x80       ; 005a6707
        ;   Label: LAB_005a6707
    MOV EAX,ECX                         ; 005a670b
    POP EDI                             ; 005a670d
    POP ESI                             ; 005a670e
    POP EBX                             ; 005a670f
    RET                                 ; 005a6710
    OR byte ptr [EBX + 0x1e],0x40       ; 005a6711
        ;   Label: LAB_005a6711
    MOV EAX,ECX                         ; 005a6715
        ;   Label: LAB_005a6715
    POP EDI                             ; 005a6717
        ;   Label: LAB_005a6717
    POP ESI                             ; 005a6718
    POP EBX                             ; 005a6719
    RET                                 ; 005a671a

