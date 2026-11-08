; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00579690(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   DirectDrawCreate
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579690
        ;   Label: FUN_00579690
    PUSH EDI                            ; 00579691
    PUSH EBP                            ; 00579692
    MOV EDX,dword ptr [0x02d0bcec]      ; 00579693 | DAT_02d0bcec
    TEST EDX,EDX                        ; 00579699
    JNZ 0x00579709                      ; 0057969b
        ;   XREF to: 00579709 (CONDITIONAL_JUMP)  ; LAB_00579709
    MOV EBX,dword ptr [0x02d0bce8]      ; 0057969d | DAT_02d0bce8
        ;   Label: LAB_0057969d
    TEST EBX,EBX                        ; 005796a3
    JZ 0x005796b7                       ; 005796a5
        ;   XREF to: 005796b7 (CONDITIONAL_JUMP)  ; LAB_005796b7
    PUSH ESI                            ; 005796a7
    PUSH EBX                            ; 005796a8
    MOV EDX,dword ptr [EBX]             ; 005796a9
    XOR ESI,ESI                         ; 005796ab
    CALL dword ptr [EDX + 0x8]          ; 005796ad
    MOV dword ptr [0x02d0bce8],ESI      ; 005796b0 | DAT_02d0bce8
    POP ESI                             ; 005796b6
    MOV EDI,dword ptr [0x02d0bce4]      ; 005796b7 | DAT_02d0bce4
        ;   Label: LAB_005796b7
    TEST EDI,EDI                        ; 005796bd
    JZ 0x005796cf                       ; 005796bf
        ;   XREF to: 005796cf (CONDITIONAL_JUMP)  ; LAB_005796cf
    PUSH EDI                            ; 005796c1
    MOV EDX,dword ptr [EDI]             ; 005796c2
    XOR EBP,EBP                         ; 005796c4
    CALL dword ptr [EDX + 0x8]          ; 005796c6
    MOV dword ptr [0x02d0bce4],EBP      ; 005796c9 | DAT_02d0bce4
    MOV EAX,[0x02d0bce0]                ; 005796cf | DAT_02d0bce0
        ;   Label: LAB_005796cf
    TEST EAX,EAX                        ; 005796d4
    JZ 0x005796f1                       ; 005796d6
        ;   XREF to: 005796f1 (CONDITIONAL_JUMP)  ; LAB_005796f1
    PUSH EAX                            ; 005796d8
    MOV EDX,dword ptr [EAX]             ; 005796d9
    CALL dword ptr [EDX + 0x4c]         ; 005796db
    MOV EAX,[0x02d0bce0]                ; 005796de | DAT_02d0bce0
    PUSH EAX                            ; 005796e3
    MOV EDX,dword ptr [EAX]             ; 005796e4
    CALL dword ptr [EDX + 0x8]          ; 005796e6
    XOR EDX,EDX                         ; 005796e9
    MOV dword ptr [0x02d0bce0],EDX      ; 005796eb | DAT_02d0bce0
    PUSH 0x0                            ; 005796f1
        ;   Label: LAB_005796f1
    PUSH 0x2d0bce0                      ; 005796f3
    PUSH 0x0                            ; 005796f8
    CALL DirectDrawCreate               ; 005796fa
        ;   XREF to: 005b254a (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 005796ff
    JZ 0x0057971b                       ; 00579701
        ;   XREF to: 0057971b (CONDITIONAL_JUMP)  ; LAB_0057971b
    XOR EAX,EAX                         ; 00579703
        ;   Label: LAB_00579703
    POP EBP                             ; 00579705
    POP EDI                             ; 00579706
    POP EBX                             ; 00579707
    RET                                 ; 00579708
    MOV EAX,EDX                         ; 00579709
        ;   Label: LAB_00579709
    PUSH EAX                            ; 0057970b
    MOV EDX,dword ptr [EDX]             ; 0057970c
    CALL dword ptr [EDX + 0x8]          ; 0057970e
    XOR ECX,ECX                         ; 00579711
    MOV dword ptr [0x02d0bcec],ECX      ; 00579713 | DAT_02d0bcec
    JMP 0x0057969d                      ; 00579719
        ;   XREF to: 0057969d (UNCONDITIONAL_JUMP)  ; LAB_0057969d
    PUSH 0x11                           ; 0057971b
        ;   Label: LAB_0057971b
    MOV ECX,dword ptr [0x02d21b78]      ; 0057971d | DAT_02d21b78
    MOV EAX,[0x02d0bce0]                ; 00579723 | DAT_02d0bce0
    PUSH ECX                            ; 00579728
    MOV EDX,dword ptr [EAX]             ; 00579729
    PUSH EAX                            ; 0057972b
    CALL dword ptr [EDX + 0x50]         ; 0057972c
    TEST EAX,EAX                        ; 0057972f
    JNZ 0x00579703                      ; 00579731
        ;   XREF to: 00579703 (CONDITIONAL_JUMP)  ; LAB_00579703
    MOV EAX,0x1                         ; 00579733
    POP EBP                             ; 00579738
    POP EDI                             ; 00579739
    POP EBX                             ; 0057973a
    RET                                 ; 0057973b

