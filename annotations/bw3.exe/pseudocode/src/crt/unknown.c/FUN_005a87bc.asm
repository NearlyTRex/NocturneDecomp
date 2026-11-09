; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a87bc(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005a82c0 at 005a84c2
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;   undefined4 DAT_02d25930
;
; Called Functions:
;   crt_unknown.c_FUN_005a82a0
;   crt_unknown.c_FUN_005a82ac
;   crt_unknown.c_FUN_005a9288
;   unkafter_asgaya.cpp_FUN_005ae560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a87bc
        ;   Label: crt_unknown.c_FUN_005a87bc
    PUSH ESI                            ; 005a87bd
    PUSH EDI                            ; 005a87be
    PUSH ES                             ; 005a87bf
    PUSH EBP                            ; 005a87c0
    SUB ESP,0xc                         ; 005a87c1
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a87c4
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a87c8
    MOV DL,byte ptr [ESI + 0x10]        ; 005a87cc
    TEST DL,0x20                        ; 005a87cf
    JZ 0x005a87db                       ; 005a87d2
        ;   XREF to: 005a87db (CONDITIONAL_JUMP)  ; LAB_005a87db
    MOV byte ptr [ESP + 0x8],0x2        ; 005a87d4
    JMP 0x005a87e3                      ; 005a87d9
        ;   XREF to: 005a87e3 (UNCONDITIONAL_JUMP)  ; LAB_005a87e3
    TEST DL,0x10                        ; 005a87db
        ;   Label: LAB_005a87db
    MOV byte ptr [ESP + 0x8],0x1        ; 005a87de
    MOV CH,byte ptr [ESI + 0x10]        ; 005a87e3
        ;   Label: LAB_005a87e3
    TEST CH,0x1                         ; 005a87e6
    JZ 0x005a881f                       ; 005a87e9
        ;   XREF to: 005a881f (CONDITIONAL_JUMP)  ; LAB_005a881f
    TEST CH,0x4                         ; 005a87eb
    JZ 0x005a87fc                       ; 005a87ee
        ;   XREF to: 005a87fc (CONDITIONAL_JUMP)  ; LAB_005a87fc
    MOV ECX,dword ptr [EAX]             ; 005a87f0
    ADD ECX,0x8                         ; 005a87f2
    MOV dword ptr [EAX],ECX             ; 005a87f5
    LES EDI,[ECX + -0x8]                ; 005a87f7
    JMP 0x005a881f                      ; 005a87fa
        ;   XREF to: 005a881f (UNCONDITIONAL_JUMP)  ; LAB_005a881f
    TEST CH,0x8                         ; 005a87fc
        ;   Label: LAB_005a87fc
    JZ 0x005a8811                       ; 005a87ff
        ;   XREF to: 005a8811 (CONDITIONAL_JUMP)  ; LAB_005a8811
    MOV EBX,dword ptr [EAX]             ; 005a8801
    ADD EBX,0x4                         ; 005a8803
    MOV dword ptr [EAX],EBX             ; 005a8806
    MOV AX,DS                           ; 005a8808
    MOV ES,AX                           ; 005a880a
    MOV EDI,dword ptr [EBX + -0x4]      ; 005a880c
    JMP 0x005a881f                      ; 005a880f
        ;   XREF to: 005a881f (UNCONDITIONAL_JUMP)  ; LAB_005a881f
    MOV EDX,dword ptr [EAX]             ; 005a8811
        ;   Label: LAB_005a8811
    ADD EDX,0x4                         ; 005a8813
    MOV dword ptr [EAX],EDX             ; 005a8816
    MOV AX,DS                           ; 005a8818
    MOV ES,AX                           ; 005a881a
    MOV EDI,dword ptr [EDX + -0x4]      ; 005a881c
    XOR EBP,EBP                         ; 005a881f
        ;   Label: LAB_005a881f
    PUSH ESI                            ; 005a8821
        ;   Label: LAB_005a8821
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8822
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8827
    MOV EBX,EAX                         ; 005a882a
    INC AL                              ; 005a882c
    AND EAX,0xff                        ; 005a882e
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005a8833 | DAT_006074b8
    JZ 0x005a883f                       ; 005a883a
        ;   XREF to: 005a883f (CONDITIONAL_JUMP)  ; LAB_005a883f
    INC EBP                             ; 005a883c
    JMP 0x005a8821                      ; 005a883d
        ;   XREF to: 005a8821 (UNCONDITIONAL_JUMP)  ; LAB_005a8821
    TEST byte ptr [ESI + 0x10],0x2      ; 005a883f
        ;   Label: LAB_005a883f
    JZ 0x005a884c                       ; 005a8843
        ;   XREF to: 005a884c (CONDITIONAL_JUMP)  ; LAB_005a884c
    XOR EBP,EBP                         ; 005a8845
    JMP 0x005a88f8                      ; 005a8847
        ;   XREF to: 005a88f8 (UNCONDITIONAL_JUMP)  ; LAB_005a88f8
    MOV EAX,dword ptr [ESI + 0xc]       ; 005a884c
        ;   Label: LAB_005a884c
    LEA EDX,[EAX + -0x1]                ; 005a884f
    MOV dword ptr [ESI + 0xc],EDX       ; 005a8852
    TEST EAX,EAX                        ; 005a8855
    JZ 0x005a88ee                       ; 005a8857
        ;   XREF to: 005a88ee (CONDITIONAL_JUMP)  ; LAB_005a88ee
    MOV AL,byte ptr [ESI + 0x10]        ; 005a885d
        ;   Label: LAB_005a885d
    INC EBP                             ; 005a8860
    TEST AL,0x1                         ; 005a8861
    JZ 0x005a88ca                       ; 005a8863
        ;   XREF to: 005a88ca (CONDITIONAL_JUMP)  ; LAB_005a88ca
    CMP byte ptr [ESP + 0x8],0x1        ; 005a8865
    JNZ 0x005a8871                      ; 005a886a
        ;   XREF to: 005a8871 (CONDITIONAL_JUMP)  ; LAB_005a8871
    MOV byte ptr ES:[EDI],BL            ; 005a886c
    JMP 0x005a88c2                      ; 005a886f
        ;   XREF to: 005a88c2 (UNCONDITIONAL_JUMP)  ; LAB_005a88c2
    MOV EAX,[0x02d25930]                ; 005a8871 | DAT_02d25930
        ;   Label: LAB_005a8871
    MOV byte ptr [ESP + 0x4],BL         ; 005a8876
    TEST EAX,EAX                        ; 005a887a
    JZ 0x005a889e                       ; 005a887c
        ;   XREF to: 005a889e (CONDITIONAL_JUMP)  ; LAB_005a889e
    XOR EAX,EAX                         ; 005a887e
    MOV AL,BL                           ; 005a8880
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005a8882
    AND AL,0x1                          ; 005a8888
    AND EAX,0xff                        ; 005a888a
    JZ 0x005a889e                       ; 005a888f
        ;   XREF to: 005a889e (CONDITIONAL_JUMP)  ; LAB_005a889e
    PUSH ESI                            ; 005a8891
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8892
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8897
    MOV byte ptr [ESP + 0x5],AL         ; 005a889a
    PUSH 0x2                            ; 005a889e
        ;   Label: LAB_005a889e
    LEA EAX,[ESP + 0x8]                 ; 005a88a0
    PUSH EAX                            ; 005a88a4
    LEA EAX,[ESP + 0x8]                 ; 005a88a5
    PUSH EAX                            ; 005a88a9
    CALL unkafter_asgaya.cpp_FUN_005ae560 ; 005a88aa
        ;   XREF to: 005ae560 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae560()
    ADD ESP,0xc                         ; 005a88af
    CMP EAX,-0x1                        ; 005a88b2
    JNZ 0x005a88bb                      ; 005a88b5
        ;   XREF to: 005a88bb (CONDITIONAL_JUMP)  ; LAB_005a88bb
    XOR EAX,EAX                         ; 005a88b7
    JMP 0x005a8917                      ; 005a88b9
        ;   XREF to: 005a8917 (UNCONDITIONAL_JUMP)  ; LAB_005a8917
    MOV EAX,dword ptr [ESP]             ; 005a88bb
        ;   Label: LAB_005a88bb
    MOV word ptr ES:[EDI],AX            ; 005a88be
    XOR EAX,EAX                         ; 005a88c2
        ;   Label: LAB_005a88c2
    MOV AL,byte ptr [ESP + 0x8]         ; 005a88c4
    ADD EDI,EAX                         ; 005a88c8
    PUSH ESI                            ; 005a88ca
        ;   Label: LAB_005a88ca
    CALL crt_unknown.c_FUN_005a9288     ; 005a88cb
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a88d0
    MOV EBX,EAX                         ; 005a88d3
    CMP EAX,-0x1                        ; 005a88d5
    JZ 0x005a88f8                       ; 005a88d8
        ;   XREF to: 005a88f8 (CONDITIONAL_JUMP)  ; LAB_005a88f8
    INC AL                              ; 005a88da
    AND EAX,0xff                        ; 005a88dc
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005a88e1 | DAT_006074b8
    JZ 0x005a885d                       ; 005a88e8
        ;   XREF to: 005a885d (CONDITIONAL_JUMP)  ; LAB_005a885d
    PUSH ESI                            ; 005a88ee
        ;   Label: LAB_005a88ee
    PUSH EBX                            ; 005a88ef
    CALL crt_unknown.c_FUN_005a82ac     ; 005a88f0
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82ac()
    ADD ESP,0x8                         ; 005a88f5
    TEST byte ptr [ESI + 0x10],0x1      ; 005a88f8
        ;   Label: LAB_005a88f8
    JZ 0x005a8915                       ; 005a88fc
        ;   XREF to: 005a8915 (CONDITIONAL_JUMP)  ; LAB_005a8915
    TEST EBP,EBP                        ; 005a88fe
    JLE 0x005a8915                      ; 005a8900
        ;   XREF to: 005a8915 (CONDITIONAL_JUMP)  ; LAB_005a8915
    CMP byte ptr [ESP + 0x8],0x1        ; 005a8902
    JNZ 0x005a890f                      ; 005a8907
        ;   XREF to: 005a890f (CONDITIONAL_JUMP)  ; LAB_005a890f
    MOV byte ptr ES:[EDI],0x0           ; 005a8909
    JMP 0x005a8915                      ; 005a890d
        ;   XREF to: 005a8915 (UNCONDITIONAL_JUMP)  ; LAB_005a8915
    MOV word ptr ES:[EDI],0x0           ; 005a890f
        ;   Label: LAB_005a890f
    MOV EAX,EBP                         ; 005a8915
        ;   Label: LAB_005a8915
    ADD ESP,0xc                         ; 005a8917
        ;   Label: LAB_005a8917
    POP EBP                             ; 005a891a
    POP ES                              ; 005a891b
    POP EDI                             ; 005a891c
    POP ESI                             ; 005a891d
    POP EBX                             ; 005a891e
    RET                                 ; 005a891f

