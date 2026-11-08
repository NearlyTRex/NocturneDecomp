; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c5810(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005c3e70 at 005c3e92
;   FUN_005c6210 at 005c6230
;
; Called Functions:
;   FUN_005c0e00
;   FUN_005c0e30
;   FUN_005c0e50
;   FUN_005c4260
;   FUN_005c5c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5810
        ;   Label: FUN_005c5810
    SUB ESP,0x4                         ; 005c5811
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c5814
    MOV EAX,ESP                         ; 005c5818
    PUSH EAX                            ; 005c581a
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c581b
    PUSH EDX                            ; 005c581f
    CALL FUN_005c0e30                   ; 005c5820
        ;   XREF to: 005c0e30 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e30()
    ADD ESP,0x8                         ; 005c5825
    MOV EAX,ESP                         ; 005c5828
    PUSH EAX                            ; 005c582a
    CALL FUN_005c0e50                   ; 005c582b
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e50()
    ADD ESP,0x4                         ; 005c5830
    XOR DL,DL                           ; 005c5833
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005c5835
    PUSH EBX                            ; 005c5838
        ;   Label: LAB_005c5838
    CALL FUN_005c4260                   ; 005c5839
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4260()
    ADD ESP,0x4                         ; 005c583e
    TEST EAX,EAX                        ; 005c5841
    JNZ 0x005c5862                      ; 005c5843
        ;   XREF to: 005c5862 (CONDITIONAL_JUMP)  ; LAB_005c5862
    MOV EAX,ESP                         ; 005c5845
    PUSH EAX                            ; 005c5847
    PUSH EBX                            ; 005c5848
    CALL FUN_005c5c70                   ; 005c5849
        ;   XREF to: 005c5c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5c70()
    ADD ESP,0x8                         ; 005c584e
    TEST EAX,EAX                        ; 005c5851
    JZ 0x005c5862                       ; 005c5853
        ;   XREF to: 005c5862 (CONDITIONAL_JUMP)  ; LAB_005c5862
    PUSH EBX                            ; 005c5855
    CALL FUN_005c0e00                   ; 005c5856
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0e00()
    MOV EBX,EAX                         ; 005c585b
    ADD ESP,0x4                         ; 005c585d
    JMP 0x005c5838                      ; 005c5860
        ;   XREF to: 005c5838 (UNCONDITIONAL_JUMP)  ; LAB_005c5838
    PUSH EBX                            ; 005c5862
        ;   Label: LAB_005c5862
    CALL FUN_005c4260                   ; 005c5863
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4260()
    ADD ESP,0x4                         ; 005c5868
    TEST EAX,EAX                        ; 005c586b
    JZ 0x005c5878                       ; 005c586d
        ;   XREF to: 005c5878 (CONDITIONAL_JUMP)  ; LAB_005c5878
    CMP dword ptr [ESP + 0x10],0x0      ; 005c586f
    JZ 0x005c5878                       ; 005c5874
        ;   XREF to: 005c5878 (CONDITIONAL_JUMP)  ; LAB_005c5878
    XOR EBX,EBX                         ; 005c5876
    MOV EAX,EBX                         ; 005c5878
        ;   Label: LAB_005c5878
    ADD ESP,0x4                         ; 005c587a
    POP EBX                             ; 005c587d
    RET                                 ; 005c587e

