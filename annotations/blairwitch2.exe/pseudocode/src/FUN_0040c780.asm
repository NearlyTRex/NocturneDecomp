; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040c780(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_0040c660 at 0040c6bf
;   FUN_0040c8a0 at 0040c8aa
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   FUN_0040c660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c780
        ;   Label: FUN_0040c780
    PUSH ESI                            ; 0040c781
    PUSH EDI                            ; 0040c782
    PUSH EBP                            ; 0040c783
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c784
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c788
    XOR EDI,EDI                         ; 0040c78c
    MOV BH,0x2                          ; 0040c78e
    MOV EDX,ESI                         ; 0040c790
        ;   Label: LAB_0040c790
    MOV EAX,dword ptr [EDX]             ; 0040c792
        ;   Label: LAB_0040c792
    MOV BL,byte ptr [EAX]               ; 0040c794
    XOR ECX,ECX                         ; 0040c796
    INC BL                              ; 0040c798
    MOV CL,BL                           ; 0040c79a
    TEST byte ptr [ECX + 0x61ed94],BH   ; 0040c79c | DAT_0061ed94
    JNZ 0x0040c7d8                      ; 0040c7a2
        ;   XREF to: 0040c7d8 (CONDITIONAL_JUMP)  ; LAB_0040c7d8
    MOV EAX,dword ptr [ESI]             ; 0040c7a4
    MOV CL,byte ptr [EAX]               ; 0040c7a6
    TEST CL,CL                          ; 0040c7a8
    JZ 0x0040c7dd                       ; 0040c7aa
        ;   XREF to: 0040c7dd (CONDITIONAL_JUMP)  ; LAB_0040c7dd
    CMP CL,0x29                         ; 0040c7ac
    JZ 0x0040c7dd                       ; 0040c7af
        ;   XREF to: 0040c7dd (CONDITIONAL_JUMP)  ; LAB_0040c7dd
    CMP CL,0x7c                         ; 0040c7b1
    JNZ 0x0040c7ee                      ; 0040c7b4
        ;   XREF to: 0040c7ee (CONDITIONAL_JUMP)  ; LAB_0040c7ee
    INC EAX                             ; 0040c7b6
    MOV dword ptr [ESI],EAX             ; 0040c7b7
    CMP byte ptr [EAX],0x7c             ; 0040c7b9
    JNZ 0x0040c7c1                      ; 0040c7bc
        ;   XREF to: 0040c7c1 (CONDITIONAL_JUMP)  ; LAB_0040c7c1
    INC EAX                             ; 0040c7be
    MOV dword ptr [ESI],EAX             ; 0040c7bf
    PUSH ESI                            ; 0040c7c1
        ;   Label: LAB_0040c7c1
    PUSH EBP                            ; 0040c7c2
    CALL FUN_0040c660                   ; 0040c7c3
        ;   XREF to: 0040c660 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c660()
    ADD ESP,0x8                         ; 0040c7c8
    TEST EAX,EAX                        ; 0040c7cb
    JL 0x0040c7e4                       ; 0040c7cd
        ;   XREF to: 0040c7e4 (CONDITIONAL_JUMP)  ; LAB_0040c7e4
    JLE 0x0040c790                      ; 0040c7cf
        ;   XREF to: 0040c790 (CONDITIONAL_JUMP)  ; LAB_0040c790
    MOV EDI,0x1                         ; 0040c7d1
    JMP 0x0040c790                      ; 0040c7d6
        ;   XREF to: 0040c790 (UNCONDITIONAL_JUMP)  ; LAB_0040c790
    INC EAX                             ; 0040c7d8
        ;   Label: LAB_0040c7d8
    MOV dword ptr [EDX],EAX             ; 0040c7d9
    JMP 0x0040c792                      ; 0040c7db
        ;   XREF to: 0040c792 (UNCONDITIONAL_JUMP)  ; LAB_0040c792
    MOV EAX,EDI                         ; 0040c7dd
        ;   Label: LAB_0040c7dd
    POP EBP                             ; 0040c7df
    POP EDI                             ; 0040c7e0
    POP ESI                             ; 0040c7e1
    POP EBX                             ; 0040c7e2
    RET                                 ; 0040c7e3
    MOV EAX,0xffffffff                  ; 0040c7e4
        ;   Label: LAB_0040c7e4
    POP EBP                             ; 0040c7e9
    POP EDI                             ; 0040c7ea
    POP ESI                             ; 0040c7eb
    POP EBX                             ; 0040c7ec
    RET                                 ; 0040c7ed
    CMP CL,0x26                         ; 0040c7ee
        ;   Label: LAB_0040c7ee
    JNZ 0x0040c814                      ; 0040c7f1
        ;   XREF to: 0040c814 (CONDITIONAL_JUMP)  ; LAB_0040c814
    INC EAX                             ; 0040c7f3
    MOV dword ptr [ESI],EAX             ; 0040c7f4
    CMP CL,byte ptr [EAX]               ; 0040c7f6
    JNZ 0x0040c7fd                      ; 0040c7f8
        ;   XREF to: 0040c7fd (CONDITIONAL_JUMP)  ; LAB_0040c7fd
    INC EAX                             ; 0040c7fa
    MOV dword ptr [ESI],EAX             ; 0040c7fb
    PUSH ESI                            ; 0040c7fd
        ;   Label: LAB_0040c7fd
    PUSH EBP                            ; 0040c7fe
    CALL FUN_0040c660                   ; 0040c7ff
        ;   XREF to: 0040c660 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c660()
    ADD ESP,0x8                         ; 0040c804
    TEST EAX,EAX                        ; 0040c807
    JL 0x0040c7e4                       ; 0040c809
        ;   XREF to: 0040c7e4 (CONDITIONAL_JUMP)  ; LAB_0040c7e4
    JNZ 0x0040c790                      ; 0040c80b
        ;   XREF to: 0040c790 (CONDITIONAL_JUMP)  ; LAB_0040c790
    XOR EDI,EDI                         ; 0040c80d
    JMP 0x0040c790                      ; 0040c80f
        ;   XREF to: 0040c790 (UNCONDITIONAL_JUMP)  ; LAB_0040c790
    PUSH ESI                            ; 0040c814
        ;   Label: LAB_0040c814
    PUSH EBP                            ; 0040c815
    CALL FUN_0040c660                   ; 0040c816
        ;   XREF to: 0040c660 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c660()
    ADD ESP,0x8                         ; 0040c81b
    TEST EAX,EAX                        ; 0040c81e
    JL 0x0040c7e4                       ; 0040c820
        ;   XREF to: 0040c7e4 (CONDITIONAL_JUMP)  ; LAB_0040c7e4
    JLE 0x0040c790                      ; 0040c822
        ;   XREF to: 0040c790 (CONDITIONAL_JUMP)  ; LAB_0040c790
    MOV EDI,0x1                         ; 0040c828
    JMP 0x0040c790                      ; 0040c82d
        ;   XREF to: 0040c790 (UNCONDITIONAL_JUMP)  ; LAB_0040c790

