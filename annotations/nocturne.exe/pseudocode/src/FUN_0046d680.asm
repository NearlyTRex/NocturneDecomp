; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d680(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0046d674 = 0046d72c
;   undefined1* PTR_caseD_3_0046d67c = 0046d711
;   undefined4 DAT_01bc996c
;   undefined4 DAT_01bc9a30
;
; Called Functions:
;   FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d680
        ;   Label: FUN_0046d680
    PUSH ESI                            ; 0046d681
    PUSH EDI                            ; 0046d682
    PUSH EBP                            ; 0046d683
    MOV EBP,ESP                         ; 0046d684
    SUB ESP,0x4                         ; 0046d686
    AND ESP,0xfffffff8                  ; 0046d689
    MOV EBX,dword ptr [0x01bc9a30]      ; 0046d68c | DAT_01bc9a30
    MOV EDX,dword ptr [0x01bc996c]      ; 0046d692 | DAT_01bc996c
    XOR ESI,ESI                         ; 0046d698
    TEST EDX,EDX                        ; 0046d69a
    JLE 0x0046d71f                      ; 0046d69c
        ;   XREF to: 0046d71f (CONDITIONAL_JUMP)  ; LAB_0046d71f
    MOV EDI,0x1bc9970                   ; 0046d6a2
    MOV EAX,[0x01bc996c]                ; 0046d6a7 | DAT_01bc996c
        ;   Label: LAB_0046d6a7
    LEA ECX,[ESI + 0x1]                 ; 0046d6ac
    CMP ECX,EAX                         ; 0046d6af
    JNZ 0x0046d6b5                      ; 0046d6b1
        ;   XREF to: 0046d6b5 (CONDITIONAL_JUMP)  ; LAB_0046d6b5
    XOR ECX,EAX                         ; 0046d6b3
    IMUL ECX,ECX,0xc                    ; 0046d6b5
        ;   Label: LAB_0046d6b5
    MOV EAX,0x1bc9970                   ; 0046d6b8
    FLD float ptr [EDI + 0x4]           ; 0046d6bd
    ADD EAX,ECX                         ; 0046d6c0
    MOV EDX,EDI                         ; 0046d6c2
    MOV dword ptr [ESP],EAX             ; 0046d6c4
    XOR ECX,ECX                         ; 0046d6c7
    FCOMP float ptr [EBP + 0x14]        ; 0046d6c9
    FNSTSW AX                           ; 0046d6cc
    SAHF                                ; 0046d6ce
    JBE 0x0046d6d6                      ; 0046d6cf
        ;   XREF to: 0046d6d6 (CONDITIONAL_JUMP)  ; LAB_0046d6d6
    MOV ECX,0x1                         ; 0046d6d1
    MOV EAX,dword ptr [ESP]             ; 0046d6d6
        ;   Label: LAB_0046d6d6
    FLD float ptr [EAX + 0x4]           ; 0046d6d9
    FCOMP float ptr [EBP + 0x14]        ; 0046d6dc
    FNSTSW AX                           ; 0046d6df
    SAHF                                ; 0046d6e1
    JBE 0x0046d6e7                      ; 0046d6e2
        ;   XREF to: 0046d6e7 (CONDITIONAL_JUMP)  ; LAB_0046d6e7
    OR CL,0x2                           ; 0046d6e4
    CMP ECX,0x3                         ; 0046d6e7
        ;   Label: LAB_0046d6e7
    JA 0x0046d711                       ; 0046d6ea
        ;   XREF to: 0046d711 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46d670]  ; 0046d6ec | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0046d6f3
        ;   Label: caseD_0
    ADD ECX,0x1bc9a34                   ; 0046d6f6
    CMP ECX,EDX                         ; 0046d6fc
    JZ 0x0046d710                       ; 0046d6fe
        ;   XREF to: 0046d710 (CONDITIONAL_JUMP)  ; LAB_0046d710
    MOV EAX,dword ptr [EDX]             ; 0046d700
    MOV dword ptr [ECX],EAX             ; 0046d702
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046d704
    MOV dword ptr [ECX + 0x4],EAX       ; 0046d707
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046d70a
    MOV dword ptr [ECX + 0x8],EAX       ; 0046d70d
    INC EBX                             ; 0046d710
        ;   Label: LAB_0046d710
    MOV ECX,dword ptr [0x01bc996c]      ; 0046d711 | DAT_01bc996c
        ;   Label: caseD_3
    INC ESI                             ; 0046d717
    ADD EDI,0xc                         ; 0046d718
    CMP ESI,ECX                         ; 0046d71b
    JL 0x0046d6a7                       ; 0046d71d
        ;   XREF to: 0046d6a7 (CONDITIONAL_JUMP)  ; LAB_0046d6a7
    MOV dword ptr [0x01bc9a30],EBX      ; 0046d71f | DAT_01bc9a30
        ;   Label: LAB_0046d71f
    MOV ESP,EBP                         ; 0046d725
    POP EBP                             ; 0046d727
    POP EDI                             ; 0046d728
    POP ESI                             ; 0046d729
    POP EBX                             ; 0046d72a
    RET                                 ; 0046d72b
    IMUL ECX,EBX,0xc                    ; 0046d72c
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0046d72f
    SUB ESP,0x8                         ; 0046d732
    FCHS                                ; 0046d735
    FSTP double ptr [ESP]               ; 0046d737
    PUSH 0x0                            ; 0046d73a
    PUSH 0x0                            ; 0046d73c
    PUSH 0x3ff00000                     ; 0046d73e
    PUSH 0x0                            ; 0046d743
    PUSH 0x0                            ; 0046d745
    PUSH 0x0                            ; 0046d747
    ADD ECX,0x1bc9a34                   ; 0046d749
    PUSH ECX                            ; 0046d74f
    PUSH EDX                            ; 0046d750
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046d751
    PUSH EAX                            ; 0046d755
    MOV dword ptr [0x01bc9a30],EBX      ; 0046d756 | DAT_01bc9a30
    CALL FUN_0046d4e0                   ; 0046d75c
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4e0()
    MOV EBX,dword ptr [0x01bc9a30]      ; 0046d761 | DAT_01bc9a30
    ADD ESP,0x2c                        ; 0046d767
    JMP 0x0046d710                      ; 0046d76a
        ;   XREF to: 0046d710 (UNCONDITIONAL_JUMP)  ; LAB_0046d710
    IMUL ECX,EBX,0xc                    ; 0046d76c
        ;   Label: caseD_2
    ADD ECX,0x1bc9a34                   ; 0046d76f
    CMP ECX,EDX                         ; 0046d775
    JZ 0x0046d789                       ; 0046d777
        ;   XREF to: 0046d789 (CONDITIONAL_JUMP)  ; LAB_0046d789
    MOV EAX,dword ptr [EDX]             ; 0046d779
    MOV dword ptr [ECX],EAX             ; 0046d77b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046d77d
    MOV dword ptr [ECX + 0x4],EAX       ; 0046d780
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046d783
    MOV dword ptr [ECX + 0x8],EAX       ; 0046d786
    INC EBX                             ; 0046d789
        ;   Label: LAB_0046d789
    IMUL ECX,EBX,0xc                    ; 0046d78a
    FLD float ptr [EBP + 0x14]          ; 0046d78d
    SUB ESP,0x8                         ; 0046d790
    FCHS                                ; 0046d793
    FSTP double ptr [ESP]               ; 0046d795
    PUSH 0x0                            ; 0046d798
    PUSH 0x0                            ; 0046d79a
    PUSH 0x3ff00000                     ; 0046d79c
    PUSH 0x0                            ; 0046d7a1
    PUSH 0x0                            ; 0046d7a3
    PUSH 0x0                            ; 0046d7a5
    ADD ECX,0x1bc9a34                   ; 0046d7a7
    PUSH ECX                            ; 0046d7ad
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046d7ae
    PUSH ECX                            ; 0046d7b2
    PUSH EDX                            ; 0046d7b3
    MOV dword ptr [0x01bc9a30],EBX      ; 0046d7b4 | DAT_01bc9a30
    CALL FUN_0046d4e0                   ; 0046d7ba
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4e0()
    MOV EBX,dword ptr [0x01bc9a30]      ; 0046d7bf | DAT_01bc9a30
    ADD ESP,0x2c                        ; 0046d7c5
    JMP 0x0046d710                      ; 0046d7c8
        ;   XREF to: 0046d710 (UNCONDITIONAL_JUMP)  ; LAB_0046d710

