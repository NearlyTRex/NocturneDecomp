; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c5854(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5450 at 005c5676
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_unknown.c_FUN_005c5430
;   crt_unknown.c_FUN_005cb6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5854
        ;   Label: crt_unknown.c_FUN_005c5854
    PUSH ESI                            ; 005c5855
    PUSH EDI                            ; 005c5856
    PUSH ES                             ; 005c5857
    PUSH EBP                            ; 005c5858
    SUB ESP,0x8                         ; 005c5859
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c585c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c5860
    MOV DL,byte ptr [ESI + 0x10]        ; 005c5864
    TEST DL,0x1                         ; 005c5867
    JZ 0x005c58a0                       ; 005c586a
        ;   XREF to: 005c58a0 (CONDITIONAL_JUMP)  ; LAB_005c58a0
    TEST DL,0x4                         ; 005c586c
    JZ 0x005c587d                       ; 005c586f
        ;   XREF to: 005c587d (CONDITIONAL_JUMP)  ; LAB_005c587d
    MOV ECX,dword ptr [EAX]             ; 005c5871
    ADD ECX,0x8                         ; 005c5873
    MOV dword ptr [EAX],ECX             ; 005c5876
    LES EBX,[ECX + -0x8]                ; 005c5878
    JMP 0x005c58a0                      ; 005c587b
        ;   XREF to: 005c58a0 (UNCONDITIONAL_JUMP)  ; LAB_005c58a0
    TEST DL,0x8                         ; 005c587d
        ;   Label: LAB_005c587d
    JZ 0x005c5892                       ; 005c5880
        ;   XREF to: 005c5892 (CONDITIONAL_JUMP)  ; LAB_005c5892
    MOV EBX,dword ptr [EAX]             ; 005c5882
    ADD EBX,0x4                         ; 005c5884
    MOV dword ptr [EAX],EBX             ; 005c5887
    MOV AX,DS                           ; 005c5889
    MOV ES,AX                           ; 005c588b
    MOV EBX,dword ptr [EBX + -0x4]      ; 005c588d
    JMP 0x005c58a0                      ; 005c5890
        ;   XREF to: 005c58a0 (UNCONDITIONAL_JUMP)  ; LAB_005c58a0
    MOV EDX,dword ptr [EAX]             ; 005c5892
        ;   Label: LAB_005c5892
    ADD EDX,0x4                         ; 005c5894
    MOV dword ptr [EAX],EDX             ; 005c5897
    MOV AX,DS                           ; 005c5899
    MOV ES,AX                           ; 005c589b
    MOV EBX,dword ptr [EDX + -0x4]      ; 005c589d
    MOV EDI,dword ptr [ESI + 0xc]       ; 005c58a0
        ;   Label: LAB_005c58a0
    XOR EBP,EBP                         ; 005c58a3
    CMP EDI,-0x1                        ; 005c58a5
    JNZ 0x005c58af                      ; 005c58a8
        ;   XREF to: 005c58af (CONDITIONAL_JUMP)  ; LAB_005c58af
    MOV EDI,0x1                         ; 005c58aa
    TEST EDI,EDI                        ; 005c58af
        ;   Label: LAB_005c58af
    JLE 0x005c593e                      ; 005c58b1
        ;   XREF to: 005c593e (CONDITIONAL_JUMP)  ; LAB_005c593e
    PUSH ESI                            ; 005c58b7
    CALL crt_unknown.c_FUN_005c5430     ; 005c58b8
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5430()
    MOV CL,byte ptr [ESI + 0x10]        ; 005c58bd
    ADD ESP,0x4                         ; 005c58c0
    TEST CL,0x2                         ; 005c58c3
    JNZ 0x005c593e                      ; 005c58c6
        ;   XREF to: 005c593e (CONDITIONAL_JUMP)  ; LAB_005c593e
    INC EBP                             ; 005c58cc
    DEC EDI                             ; 005c58cd
    TEST CL,0x1                         ; 005c58ce
    JZ 0x005c58af                       ; 005c58d1
        ;   XREF to: 005c58af (CONDITIONAL_JUMP)  ; LAB_005c58af
    TEST CL,0x20                        ; 005c58d3
    JZ 0x005c5934                       ; 005c58d6
        ;   XREF to: 005c5934 (CONDITIONAL_JUMP)  ; LAB_005c5934
    MOV EDX,dword ptr [0x02c9f6e0]      ; 005c58d8 | DAT_02c9f6e0
    MOV byte ptr [ESP + 0x4],AL         ; 005c58de
    TEST EDX,EDX                        ; 005c58e2
    JZ 0x005c5907                       ; 005c58e4
        ;   XREF to: 005c5907 (CONDITIONAL_JUMP)  ; LAB_005c5907
    AND EAX,0xff                        ; 005c58e6
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005c58eb
    AND AL,0x1                          ; 005c58f1
    AND EAX,0xff                        ; 005c58f3
    JZ 0x005c5907                       ; 005c58f8
        ;   XREF to: 005c5907 (CONDITIONAL_JUMP)  ; LAB_005c5907
    PUSH ESI                            ; 005c58fa
    CALL crt_unknown.c_FUN_005c5430     ; 005c58fb
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5430()
    ADD ESP,0x4                         ; 005c5900
    MOV byte ptr [ESP + 0x5],AL         ; 005c5903
    PUSH 0x2                            ; 005c5907
        ;   Label: LAB_005c5907
    LEA EAX,[ESP + 0x8]                 ; 005c5909
    PUSH EAX                            ; 005c590d
    LEA EAX,[ESP + 0x8]                 ; 005c590e
    PUSH EAX                            ; 005c5912
    CALL crt_unknown.c_FUN_005cb6f0     ; 005c5913
        ;   XREF to: 005cb6f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb6f0()
    ADD ESP,0xc                         ; 005c5918
    CMP EAX,-0x1                        ; 005c591b
    JNZ 0x005c5924                      ; 005c591e
        ;   XREF to: 005c5924 (CONDITIONAL_JUMP)  ; LAB_005c5924
    XOR EAX,EAX                         ; 005c5920
    JMP 0x005c5940                      ; 005c5922
        ;   XREF to: 005c5940 (UNCONDITIONAL_JUMP)  ; LAB_005c5940
    ADD EBX,0x2                         ; 005c5924
        ;   Label: LAB_005c5924
    MOV EAX,dword ptr [ESP]             ; 005c5927
    MOV word ptr ES:[EBX + -0x2],AX     ; 005c592a
    JMP 0x005c58af                      ; 005c592f
        ;   XREF to: 005c58af (UNCONDITIONAL_JUMP)  ; LAB_005c58af
    INC EBX                             ; 005c5934
        ;   Label: LAB_005c5934
    MOV byte ptr ES:[EBX + -0x1],AL     ; 005c5935
    JMP 0x005c58af                      ; 005c5939
        ;   XREF to: 005c58af (UNCONDITIONAL_JUMP)  ; LAB_005c58af
    MOV EAX,EBP                         ; 005c593e
        ;   Label: LAB_005c593e
    ADD ESP,0x8                         ; 005c5940
        ;   Label: LAB_005c5940
    POP EBP                             ; 005c5943
    POP ES                              ; 005c5944
    POP EDI                             ; 005c5945
    POP ESI                             ; 005c5946
    POP EBX                             ; 005c5947
    RET                                 ; 005c5948

