; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052a630(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052a0d0 at 0052a3c7
;   FUN_0052a400 at 0052a60f
;
; Called Functions:
;   FUN_0040d180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a630
        ;   Label: FUN_0052a630
    PUSH ESI                            ; 0052a631
    PUSH EDI                            ; 0052a632
    PUSH EBP                            ; 0052a633
    SUB ESP,0x4                         ; 0052a634
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052a637
    XOR EDX,EDX                         ; 0052a63b
    MOV dword ptr [ESP],EDX             ; 0052a63d
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0052a640
    XOR EDI,EDI                         ; 0052a643
    TEST ECX,ECX                        ; 0052a645
    JLE 0x0052a67b                      ; 0052a647
        ;   XREF to: 0052a67b (CONDITIONAL_JUMP)  ; LAB_0052a67b
    XOR ESI,ESI                         ; 0052a649
    MOV EAX,dword ptr [EBP + 0x30]      ; 0052a64b
        ;   Label: LAB_0052a64b
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0052a64e
    CMP byte ptr [EBX],0x0              ; 0052a652
    JZ 0x0052a670                       ; 0052a655
        ;   XREF to: 0052a670 (CONDITIONAL_JUMP)  ; LAB_0052a670
    XOR EAX,EAX                         ; 0052a657
        ;   Label: LAB_0052a657
    MOV AL,byte ptr [EBX]               ; 0052a659
    PUSH EAX                            ; 0052a65b
    LEA EAX,[ESP + 0x4]                 ; 0052a65c
    PUSH EAX                            ; 0052a660
    INC EBX                             ; 0052a661
    CALL FUN_0040d180                   ; 0052a662
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d180()
    MOV DL,byte ptr [EBX]               ; 0052a667
    ADD ESP,0x8                         ; 0052a669
    TEST DL,DL                          ; 0052a66c
    JNZ 0x0052a657                      ; 0052a66e
        ;   XREF to: 0052a657 (CONDITIONAL_JUMP)  ; LAB_0052a657
    INC EDI                             ; 0052a670
        ;   Label: LAB_0052a670
    MOV EBX,dword ptr [EBP + 0x2c]      ; 0052a671
    ADD ESI,0x8                         ; 0052a674
    CMP EDI,EBX                         ; 0052a677
    JL 0x0052a64b                       ; 0052a679
        ;   XREF to: 0052a64b (CONDITIONAL_JUMP)  ; LAB_0052a64b
    MOV EAX,dword ptr [ESP]             ; 0052a67b
        ;   Label: LAB_0052a67b
    ADD ESP,0x4                         ; 0052a67e
    POP EBP                             ; 0052a681
    POP EDI                             ; 0052a682
    POP ESI                             ; 0052a683
    POP EBX                             ; 0052a684
    RET                                 ; 0052a685

