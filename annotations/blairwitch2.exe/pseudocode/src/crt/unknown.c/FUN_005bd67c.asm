; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005bd67c(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005bd180 at 005bd382
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;   undefined4 DAT_026807f0
;
; Called Functions:
;   crt_unknown.c_FUN_005bd160
;   crt_unknown.c_FUN_005bd16c
;   crt_unknown.c_FUN_005be148
;   unkafter_morph.cpp_FUN_005c33f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd67c
        ;   Label: crt_unknown.c_FUN_005bd67c
    PUSH ESI                            ; 005bd67d
    PUSH EDI                            ; 005bd67e
    PUSH ES                             ; 005bd67f
    PUSH EBP                            ; 005bd680
    SUB ESP,0xc                         ; 005bd681
    MOV ESI,dword ptr [ESP + 0x24]      ; 005bd684
    MOV EAX,dword ptr [ESP + 0x28]      ; 005bd688
    MOV DL,byte ptr [ESI + 0x10]        ; 005bd68c
    TEST DL,0x20                        ; 005bd68f
    JZ 0x005bd69b                       ; 005bd692
        ;   XREF to: 005bd69b (CONDITIONAL_JUMP)  ; LAB_005bd69b
    MOV byte ptr [ESP + 0x8],0x2        ; 005bd694
    JMP 0x005bd6a3                      ; 005bd699
        ;   XREF to: 005bd6a3 (UNCONDITIONAL_JUMP)  ; LAB_005bd6a3
    TEST DL,0x10                        ; 005bd69b
        ;   Label: LAB_005bd69b
    MOV byte ptr [ESP + 0x8],0x1        ; 005bd69e
    MOV CH,byte ptr [ESI + 0x10]        ; 005bd6a3
        ;   Label: LAB_005bd6a3
    TEST CH,0x1                         ; 005bd6a6
    JZ 0x005bd6df                       ; 005bd6a9
        ;   XREF to: 005bd6df (CONDITIONAL_JUMP)  ; LAB_005bd6df
    TEST CH,0x4                         ; 005bd6ab
    JZ 0x005bd6bc                       ; 005bd6ae
        ;   XREF to: 005bd6bc (CONDITIONAL_JUMP)  ; LAB_005bd6bc
    MOV ECX,dword ptr [EAX]             ; 005bd6b0
    ADD ECX,0x8                         ; 005bd6b2
    MOV dword ptr [EAX],ECX             ; 005bd6b5
    LES EDI,[ECX + -0x8]                ; 005bd6b7
    JMP 0x005bd6df                      ; 005bd6ba
        ;   XREF to: 005bd6df (UNCONDITIONAL_JUMP)  ; LAB_005bd6df
    TEST CH,0x8                         ; 005bd6bc
        ;   Label: LAB_005bd6bc
    JZ 0x005bd6d1                       ; 005bd6bf
        ;   XREF to: 005bd6d1 (CONDITIONAL_JUMP)  ; LAB_005bd6d1
    MOV EBX,dword ptr [EAX]             ; 005bd6c1
    ADD EBX,0x4                         ; 005bd6c3
    MOV dword ptr [EAX],EBX             ; 005bd6c6
    MOV AX,DS                           ; 005bd6c8
    MOV ES,AX                           ; 005bd6ca
    MOV EDI,dword ptr [EBX + -0x4]      ; 005bd6cc
    JMP 0x005bd6df                      ; 005bd6cf
        ;   XREF to: 005bd6df (UNCONDITIONAL_JUMP)  ; LAB_005bd6df
    MOV EDX,dword ptr [EAX]             ; 005bd6d1
        ;   Label: LAB_005bd6d1
    ADD EDX,0x4                         ; 005bd6d3
    MOV dword ptr [EAX],EDX             ; 005bd6d6
    MOV AX,DS                           ; 005bd6d8
    MOV ES,AX                           ; 005bd6da
    MOV EDI,dword ptr [EDX + -0x4]      ; 005bd6dc
    XOR EBP,EBP                         ; 005bd6df
        ;   Label: LAB_005bd6df
    PUSH ESI                            ; 005bd6e1
        ;   Label: LAB_005bd6e1
    CALL crt_unknown.c_FUN_005bd160     ; 005bd6e2
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd160()
    ADD ESP,0x4                         ; 005bd6e7
    MOV EBX,EAX                         ; 005bd6ea
    INC AL                              ; 005bd6ec
    AND EAX,0xff                        ; 005bd6ee
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 005bd6f3 | DAT_0061ed94
    JZ 0x005bd6ff                       ; 005bd6fa
        ;   XREF to: 005bd6ff (CONDITIONAL_JUMP)  ; LAB_005bd6ff
    INC EBP                             ; 005bd6fc
    JMP 0x005bd6e1                      ; 005bd6fd
        ;   XREF to: 005bd6e1 (UNCONDITIONAL_JUMP)  ; LAB_005bd6e1
    TEST byte ptr [ESI + 0x10],0x2      ; 005bd6ff
        ;   Label: LAB_005bd6ff
    JZ 0x005bd70c                       ; 005bd703
        ;   XREF to: 005bd70c (CONDITIONAL_JUMP)  ; LAB_005bd70c
    XOR EBP,EBP                         ; 005bd705
    JMP 0x005bd7b8                      ; 005bd707
        ;   XREF to: 005bd7b8 (UNCONDITIONAL_JUMP)  ; LAB_005bd7b8
    MOV EAX,dword ptr [ESI + 0xc]       ; 005bd70c
        ;   Label: LAB_005bd70c
    LEA EDX,[EAX + -0x1]                ; 005bd70f
    MOV dword ptr [ESI + 0xc],EDX       ; 005bd712
    TEST EAX,EAX                        ; 005bd715
    JZ 0x005bd7ae                       ; 005bd717
        ;   XREF to: 005bd7ae (CONDITIONAL_JUMP)  ; LAB_005bd7ae
    MOV AL,byte ptr [ESI + 0x10]        ; 005bd71d
        ;   Label: LAB_005bd71d
    INC EBP                             ; 005bd720
    TEST AL,0x1                         ; 005bd721
    JZ 0x005bd78a                       ; 005bd723
        ;   XREF to: 005bd78a (CONDITIONAL_JUMP)  ; LAB_005bd78a
    CMP byte ptr [ESP + 0x8],0x1        ; 005bd725
    JNZ 0x005bd731                      ; 005bd72a
        ;   XREF to: 005bd731 (CONDITIONAL_JUMP)  ; LAB_005bd731
    MOV byte ptr ES:[EDI],BL            ; 005bd72c
    JMP 0x005bd782                      ; 005bd72f
        ;   XREF to: 005bd782 (UNCONDITIONAL_JUMP)  ; LAB_005bd782
    MOV EAX,[0x026807f0]                ; 005bd731 | DAT_026807f0
        ;   Label: LAB_005bd731
    MOV byte ptr [ESP + 0x4],BL         ; 005bd736
    TEST EAX,EAX                        ; 005bd73a
    JZ 0x005bd75e                       ; 005bd73c
        ;   XREF to: 005bd75e (CONDITIONAL_JUMP)  ; LAB_005bd75e
    XOR EAX,EAX                         ; 005bd73e
    MOV AL,BL                           ; 005bd740
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005bd742
    AND AL,0x1                          ; 005bd748
    AND EAX,0xff                        ; 005bd74a
    JZ 0x005bd75e                       ; 005bd74f
        ;   XREF to: 005bd75e (CONDITIONAL_JUMP)  ; LAB_005bd75e
    PUSH ESI                            ; 005bd751
    CALL crt_unknown.c_FUN_005bd160     ; 005bd752
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd160()
    ADD ESP,0x4                         ; 005bd757
    MOV byte ptr [ESP + 0x5],AL         ; 005bd75a
    PUSH 0x2                            ; 005bd75e
        ;   Label: LAB_005bd75e
    LEA EAX,[ESP + 0x8]                 ; 005bd760
    PUSH EAX                            ; 005bd764
    LEA EAX,[ESP + 0x8]                 ; 005bd765
    PUSH EAX                            ; 005bd769
    CALL unkafter_morph.cpp_FUN_005c33f0 ; 005bd76a
        ;   XREF to: 005c33f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c33f0()
    ADD ESP,0xc                         ; 005bd76f
    CMP EAX,-0x1                        ; 005bd772
    JNZ 0x005bd77b                      ; 005bd775
        ;   XREF to: 005bd77b (CONDITIONAL_JUMP)  ; LAB_005bd77b
    XOR EAX,EAX                         ; 005bd777
    JMP 0x005bd7d7                      ; 005bd779
        ;   XREF to: 005bd7d7 (UNCONDITIONAL_JUMP)  ; LAB_005bd7d7
    MOV EAX,dword ptr [ESP]             ; 005bd77b
        ;   Label: LAB_005bd77b
    MOV word ptr ES:[EDI],AX            ; 005bd77e
    XOR EAX,EAX                         ; 005bd782
        ;   Label: LAB_005bd782
    MOV AL,byte ptr [ESP + 0x8]         ; 005bd784
    ADD EDI,EAX                         ; 005bd788
    PUSH ESI                            ; 005bd78a
        ;   Label: LAB_005bd78a
    CALL crt_unknown.c_FUN_005be148     ; 005bd78b
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bd790
    MOV EBX,EAX                         ; 005bd793
    CMP EAX,-0x1                        ; 005bd795
    JZ 0x005bd7b8                       ; 005bd798
        ;   XREF to: 005bd7b8 (CONDITIONAL_JUMP)  ; LAB_005bd7b8
    INC AL                              ; 005bd79a
    AND EAX,0xff                        ; 005bd79c
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 005bd7a1 | DAT_0061ed94
    JZ 0x005bd71d                       ; 005bd7a8
        ;   XREF to: 005bd71d (CONDITIONAL_JUMP)  ; LAB_005bd71d
    PUSH ESI                            ; 005bd7ae
        ;   Label: LAB_005bd7ae
    PUSH EBX                            ; 005bd7af
    CALL crt_unknown.c_FUN_005bd16c     ; 005bd7b0
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd16c()
    ADD ESP,0x8                         ; 005bd7b5
    TEST byte ptr [ESI + 0x10],0x1      ; 005bd7b8
        ;   Label: LAB_005bd7b8
    JZ 0x005bd7d5                       ; 005bd7bc
        ;   XREF to: 005bd7d5 (CONDITIONAL_JUMP)  ; LAB_005bd7d5
    TEST EBP,EBP                        ; 005bd7be
    JLE 0x005bd7d5                      ; 005bd7c0
        ;   XREF to: 005bd7d5 (CONDITIONAL_JUMP)  ; LAB_005bd7d5
    CMP byte ptr [ESP + 0x8],0x1        ; 005bd7c2
    JNZ 0x005bd7cf                      ; 005bd7c7
        ;   XREF to: 005bd7cf (CONDITIONAL_JUMP)  ; LAB_005bd7cf
    MOV byte ptr ES:[EDI],0x0           ; 005bd7c9
    JMP 0x005bd7d5                      ; 005bd7cd
        ;   XREF to: 005bd7d5 (UNCONDITIONAL_JUMP)  ; LAB_005bd7d5
    MOV word ptr ES:[EDI],0x0           ; 005bd7cf
        ;   Label: LAB_005bd7cf
    MOV EAX,EBP                         ; 005bd7d5
        ;   Label: LAB_005bd7d5
    ADD ESP,0xc                         ; 005bd7d7
        ;   Label: LAB_005bd7d7
    POP EBP                             ; 005bd7da
    POP ES                              ; 005bd7db
    POP EDI                             ; 005bd7dc
    POP ESI                             ; 005bd7dd
    POP EBX                             ; 005bd7de
    RET                                 ; 005bd7df

