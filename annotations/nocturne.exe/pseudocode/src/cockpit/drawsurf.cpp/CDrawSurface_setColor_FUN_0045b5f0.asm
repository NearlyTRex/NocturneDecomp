; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_0045b5f0(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0045e370 at 0045e431
;   FUN_004fe9d0 at 004fea18
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_0057d886
;   TerminatedCString s_Invalid_bitsPerPixel_in_0057d89e
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d710
;   undefined4 DAT_01b4d714
;   undefined4 DAT_01b4d71c
;   undefined4 DAT_01b4d720
;   undefined4 DAT_01b4d724
;   undefined4 DAT_01b4d728
;   undefined4 DAT_01b4d72c
;   undefined4 DAT_01b4d730
;   undefined4 DAT_01b4d734
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   ... and 6 more
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b5f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0
    PUSH ESI                            ; 0045b5f1
    PUSH EDI                            ; 0045b5f2
    PUSH EBP                            ; 0045b5f3
    SUB ESP,0x4                         ; 0045b5f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045b5f7
    TEST EAX,EAX                        ; 0045b5fb
    JL 0x0045b636                       ; 0045b5fd
        ;   XREF to: 0045b636 (CONDITIONAL_JUMP)  ; LAB_0045b636
    XOR EDX,EDX                         ; 0045b5ff
    MOV dword ptr [0x01b4d71c],EDX      ; 0045b601 | DAT_01b4d71c
    AND EAX,0xff                        ; 0045b607
        ;   Label: LAB_0045b607
    MOV EDX,dword ptr [0x005b7624]      ; 0045b60c | DAT_005b7624
    MOV [0x01b4d714],EAX                ; 0045b612 | DAT_01b4d714
    CMP EDX,0x10                        ; 0045b617
    JNC 0x0045b7b8                      ; 0045b61a
        ;   XREF to: 0045b7b8 (CONDITIONAL_JUMP)  ; LAB_0045b7b8
    CMP EDX,0x8                         ; 0045b620
    JNZ 0x0045b7cf                      ; 0045b623
        ;   XREF to: 0045b7cf (CONDITIONAL_JUMP)  ; LAB_0045b7cf
    MOV [0x01b4d710],EAX                ; 0045b629 | DAT_01b4d710
    ADD ESP,0x4                         ; 0045b62e
    POP EBP                             ; 0045b631
    POP EDI                             ; 0045b632
    POP ESI                             ; 0045b633
    POP EBX                             ; 0045b634
    RET                                 ; 0045b635
    MOV ESI,dword ptr [0x01c00628]      ; 0045b636 | DAT_01c00628
        ;   Label: LAB_0045b636
    MOV [0x01b4d720],EAX                ; 0045b63c | DAT_01b4d720
    MOV EBX,EAX                         ; 0045b641
    XOR EDX,EDX                         ; 0045b643
    MOV EAX,0xff                        ; 0045b645
    DIV ESI                             ; 0045b64a
    MOV ECX,0x1                         ; 0045b64c
    NEG EBX                             ; 0045b651
    MOV dword ptr [0x01b4d71c],ECX      ; 0045b653 | DAT_01b4d71c
    MOV ECX,EBX                         ; 0045b659
    MOV EDI,dword ptr [0x01c00634]      ; 0045b65b | DAT_01c00634
    SHR EAX,CL                          ; 0045b661
    XOR EDX,EDX                         ; 0045b663
    MOV [0x01b4d724],EAX                ; 0045b665 | DAT_01b4d724
    MOV EAX,0xff                        ; 0045b66a
    DIV EDI                             ; 0045b66f
    MOV EBP,dword ptr [0x01c00640]      ; 0045b671 | DAT_01c00640
    SHR EAX,CL                          ; 0045b677
    XOR EDX,EDX                         ; 0045b679
    MOV [0x01b4d728],EAX                ; 0045b67b | DAT_01b4d728
    MOV EAX,0xff                        ; 0045b680
    DIV EBP                             ; 0045b685
    MOV EDX,dword ptr [0x01b4d724]      ; 0045b687 | DAT_01b4d724
    SHR EAX,CL                          ; 0045b68d
    MOV CL,byte ptr [0x01c00624]        ; 0045b68f | DAT_01c00624
    MOV [0x01b4d72c],EAX                ; 0045b695 | DAT_01b4d72c
    MOV EAX,[0x01b4d728]                ; 0045b69a | DAT_01b4d728
    SHL EDX,CL                          ; 0045b69f
    MOV CL,byte ptr [0x01c00630]        ; 0045b6a1 | DAT_01c00630
    SHL EAX,CL                          ; 0045b6a7
    MOV CL,byte ptr [0x01c0063c]        ; 0045b6a9 | DAT_01c0063c
    OR EDX,EAX                          ; 0045b6af
    MOV EAX,[0x01b4d72c]                ; 0045b6b1 | DAT_01b4d72c
    SHL EAX,CL                          ; 0045b6b6
    OR EDX,EAX                          ; 0045b6b8
    MOV dword ptr [0x01b4d730],EDX      ; 0045b6ba | DAT_01b4d730
    MOV EAX,[0x01b4d730]                ; 0045b6c0 | DAT_01b4d730
    SHL EDX,0x10                        ; 0045b6c5
    OR EAX,EDX                          ; 0045b6c8
    MOV dword ptr [0x01b4d720],EBX      ; 0045b6ca | DAT_01b4d720
    MOV [0x01b4d734],EAX                ; 0045b6d0 | DAT_01b4d734
    XOR EAX,EAX                         ; 0045b6d5
    JMP 0x0045b607                      ; 0045b6d7
        ;   XREF to: 0045b607 (UNCONDITIONAL_JUMP)  ; LAB_0045b607
    XOR EBX,EBX                         ; 0045b6dc
        ;   Label: LAB_0045b6dc
    XOR EAX,EAX                         ; 0045b6de
    MOV BL,byte ptr [ECX + 0x1c00649]   ; 0045b6e0
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 0045b6e6 | DAT_01c00648
    MOV CL,byte ptr [ECX + 0x1c0064a]   ; 0045b6ec
    MOV ESI,dword ptr [0x01c00628]      ; 0045b6f2 | DAT_01c00628
    XOR EDX,EDX                         ; 0045b6f8
    DIV ESI                             ; 0045b6fa
    MOV EDI,dword ptr [0x01c00634]      ; 0045b6fc | DAT_01c00634
    MOV ESI,EAX                         ; 0045b702
    XOR EDX,EDX                         ; 0045b704
    MOV EAX,EBX                         ; 0045b706
    DIV EDI                             ; 0045b708
    MOV EBP,dword ptr [0x01c00640]      ; 0045b70a | DAT_01c00640
    AND ECX,0xff                        ; 0045b710
    MOV EDI,EAX                         ; 0045b716
    XOR EDX,EDX                         ; 0045b718
    MOV EAX,ECX                         ; 0045b71a
    DIV EBP                             ; 0045b71c
    MOV dword ptr [ESP],ECX             ; 0045b71e
    MOV CL,byte ptr [0x01c00624]        ; 0045b721 | DAT_01c00624
    MOV dword ptr [ESP],EAX             ; 0045b727
    MOV EAX,ESI                         ; 0045b72a
    SHL EAX,CL                          ; 0045b72c
    MOV CL,byte ptr [0x01c00630]        ; 0045b72e | DAT_01c00630
    MOV EDX,dword ptr [ESP]             ; 0045b734
    SHL EDI,CL                          ; 0045b737
    MOV CL,byte ptr [0x01c0063c]        ; 0045b739 | DAT_01c0063c
    OR EAX,EDI                          ; 0045b73f
    SHL EDX,CL                          ; 0045b741
    OR EAX,EDX                          ; 0045b743
    AND EAX,0xffff                      ; 0045b745
    MOV [0x01b4d710],EAX                ; 0045b74a | DAT_01b4d710
    ADD ESP,0x4                         ; 0045b74f
    POP EBP                             ; 0045b752
    POP EDI                             ; 0045b753
    POP ESI                             ; 0045b754
    POP EBX                             ; 0045b755
    RET                                 ; 0045b756
    MOVZX ESI,byte ptr [ECX + 0x1c00648] ; 0045b757 | DAT_01c00648
        ;   Label: LAB_0045b757
    XOR EAX,EAX                         ; 0045b75e
    XOR EBX,EBX                         ; 0045b760
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 0045b762
    MOV BL,byte ptr [ECX + 0x1c0064a]   ; 0045b768
    CMP EDX,EDX                         ; 0045b76e
    JNZ 0x0045b79e                      ; 0045b770
        ;   XREF to: 0045b79e (CONDITIONAL_JUMP)  ; LAB_0045b79e
    MOV CL,byte ptr [0x01c00624]        ; 0045b772 | DAT_01c00624
    SHL ESI,CL                          ; 0045b778
    MOV CL,byte ptr [0x01c00630]        ; 0045b77a | DAT_01c00630
    SHL EAX,CL                          ; 0045b780
    MOV CL,byte ptr [0x01c0063c]        ; 0045b782 | DAT_01c0063c
    SHL EBX,CL                          ; 0045b788
    OR EAX,ESI                          ; 0045b78a
    MOV ECX,EBX                         ; 0045b78c
    OR ECX,EAX                          ; 0045b78e
    MOV dword ptr [0x01b4d710],ECX      ; 0045b790 | DAT_01b4d710
    ADD ESP,0x4                         ; 0045b796
    POP EBP                             ; 0045b799
    POP EDI                             ; 0045b79a
    POP ESI                             ; 0045b79b
    POP EBX                             ; 0045b79c
    RET                                 ; 0045b79d
    MOV ECX,EAX                         ; 0045b79e
        ;   Label: LAB_0045b79e
    SHL ESI,0x10                        ; 0045b7a0
    SHL ECX,0x8                         ; 0045b7a3
    OR ECX,ESI                          ; 0045b7a6
    OR ECX,EBX                          ; 0045b7a8
    MOV dword ptr [0x01b4d710],ECX      ; 0045b7aa | DAT_01b4d710
    ADD ESP,0x4                         ; 0045b7b0
    POP EBP                             ; 0045b7b3
    POP EDI                             ; 0045b7b4
    POP ESI                             ; 0045b7b5
    POP EBX                             ; 0045b7b6
    RET                                 ; 0045b7b7
    LEA ECX,[EAX*0x4 + 0x0]             ; 0045b7b8
        ;   Label: LAB_0045b7b8
    SUB ECX,EAX                         ; 0045b7bf
    CMP EDX,0x10                        ; 0045b7c1
    JBE 0x0045b6dc                      ; 0045b7c4
        ;   XREF to: 0045b6dc (CONDITIONAL_JUMP)  ; LAB_0045b6dc
    CMP EDX,0x20                        ; 0045b7ca
    JZ 0x0045b757                       ; 0045b7cd
        ;   XREF to: 0045b757 (CONDITIONAL_JUMP)  ; LAB_0045b757
    MOV EAX,0x57d886                    ; 0045b7cf | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0045b7cf
    MOV EDX,0xf6                        ; 0045b7d4
    PUSH 0x57d89e                       ; 0045b7d9 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x01cc4800],EAX                ; 0045b7de | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0045b7e3 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0045b7e9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0045b7ee
    ADD ESP,0x4                         ; 0045b7f1
    POP EBP                             ; 0045b7f4
    POP EDI                             ; 0045b7f5
    POP ESI                             ; 0045b7f6
    POP EBX                             ; 0045b7f7
    RET                                 ; 0045b7f8

