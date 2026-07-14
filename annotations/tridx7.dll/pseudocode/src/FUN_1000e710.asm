; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short FUN_1000e710(ushort param_1)
;
;
; XREF[1]:
;   FUN_1000e350 at 1000e48a
;
; Referenced Globals:
;   undefined4 DAT_10017f38
;
; Called Functions:
;   FUN_1000e760
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000e710
        ;   Label: FUN_1000e710
    MOV SI,word ptr [ESP + 0x8]         ; 1000e711
    CMP SI,0x64                         ; 1000e716
    JBE 0x1000e72a                      ; 1000e71a
        ;   XREF to: 1000e72a (CONDITIONAL_JUMP)  ; LAB_1000e72a
    PUSH ESI                            ; 1000e71c
    CALL FUN_1000e760                   ; 1000e71d
        ;   XREF to: 1000e760 (UNCONDITIONAL_CALL)  ; undefined FUN_1000e760()
    ADD ESP,0x4                         ; 1000e722
    TEST AX,AX                          ; 1000e725
    JNZ 0x1000e750                      ; 1000e728
        ;   XREF to: 1000e750 (CONDITIONAL_JUMP)  ; LAB_1000e750
    MOV CX,0x64                         ; 1000e72a
        ;   Label: LAB_1000e72a
    MOV AX,SI                           ; 1000e72e
    SUB DX,DX                           ; 1000e731
    DIV CX                              ; 1000e734
    CMP DX,0x5a                         ; 1000e737
    JBE 0x1000e742                      ; 1000e73b
        ;   XREF to: 1000e742 (CONDITIONAL_JUMP)  ; LAB_1000e742
    XOR AX,AX                           ; 1000e73d
    POP ESI                             ; 1000e740
    RET                                 ; 1000e741
    MOVZX EAX,DX                        ; 1000e742
        ;   Label: LAB_1000e742
    LEA ECX,[EAX + EAX*0x2]             ; 1000e745
    MOV AX,word ptr [ECX*0x2 + 0x10017f38] ; 1000e748 | DAT_10017f38
    POP ESI                             ; 1000e750
        ;   Label: LAB_1000e750
    RET                                 ; 1000e751

