; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a86c4(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
;
; XREF[1]:
;   crt_unknown.c_FUN_005a82c0 at 005a84e6
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; Called Functions:
;   crt_unknown.c_FUN_005a82a0
;   unkafter_asgaya.cpp_FUN_005ae560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a86c4
        ;   Label: crt_unknown.c_FUN_005a86c4
    PUSH ESI                            ; 005a86c5
    PUSH EDI                            ; 005a86c6
    PUSH ES                             ; 005a86c7
    PUSH EBP                            ; 005a86c8
    SUB ESP,0x8                         ; 005a86c9
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a86cc
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a86d0
    MOV DL,byte ptr [ESI + 0x10]        ; 005a86d4
    TEST DL,0x1                         ; 005a86d7
    JZ 0x005a8710                       ; 005a86da
        ;   XREF to: 005a8710 (CONDITIONAL_JUMP)  ; LAB_005a8710
    TEST DL,0x4                         ; 005a86dc
    JZ 0x005a86ed                       ; 005a86df
        ;   XREF to: 005a86ed (CONDITIONAL_JUMP)  ; LAB_005a86ed
    MOV ECX,dword ptr [EAX]             ; 005a86e1
    ADD ECX,0x8                         ; 005a86e3
    MOV dword ptr [EAX],ECX             ; 005a86e6
    LES EBX,[ECX + -0x8]                ; 005a86e8
    JMP 0x005a8710                      ; 005a86eb
        ;   XREF to: 005a8710 (UNCONDITIONAL_JUMP)  ; LAB_005a8710
    TEST DL,0x8                         ; 005a86ed
        ;   Label: LAB_005a86ed
    JZ 0x005a8702                       ; 005a86f0
        ;   XREF to: 005a8702 (CONDITIONAL_JUMP)  ; LAB_005a8702
    MOV EBX,dword ptr [EAX]             ; 005a86f2
    ADD EBX,0x4                         ; 005a86f4
    MOV dword ptr [EAX],EBX             ; 005a86f7
    MOV AX,DS                           ; 005a86f9
    MOV ES,AX                           ; 005a86fb
    MOV EBX,dword ptr [EBX + -0x4]      ; 005a86fd
    JMP 0x005a8710                      ; 005a8700
        ;   XREF to: 005a8710 (UNCONDITIONAL_JUMP)  ; LAB_005a8710
    MOV EDX,dword ptr [EAX]             ; 005a8702
        ;   Label: LAB_005a8702
    ADD EDX,0x4                         ; 005a8704
    MOV dword ptr [EAX],EDX             ; 005a8707
    MOV AX,DS                           ; 005a8709
    MOV ES,AX                           ; 005a870b
    MOV EBX,dword ptr [EDX + -0x4]      ; 005a870d
    MOV EDI,dword ptr [ESI + 0xc]       ; 005a8710
        ;   Label: LAB_005a8710
    XOR EBP,EBP                         ; 005a8713
    CMP EDI,-0x1                        ; 005a8715
    JNZ 0x005a871f                      ; 005a8718
        ;   XREF to: 005a871f (CONDITIONAL_JUMP)  ; LAB_005a871f
    MOV EDI,0x1                         ; 005a871a
    TEST EDI,EDI                        ; 005a871f
        ;   Label: LAB_005a871f
    JLE 0x005a87ae                      ; 005a8721
        ;   XREF to: 005a87ae (CONDITIONAL_JUMP)  ; LAB_005a87ae
    PUSH ESI                            ; 005a8727
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8728
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    MOV CL,byte ptr [ESI + 0x10]        ; 005a872d
    ADD ESP,0x4                         ; 005a8730
    TEST CL,0x2                         ; 005a8733
    JNZ 0x005a87ae                      ; 005a8736
        ;   XREF to: 005a87ae (CONDITIONAL_JUMP)  ; LAB_005a87ae
    INC EBP                             ; 005a873c
    DEC EDI                             ; 005a873d
    TEST CL,0x1                         ; 005a873e
    JZ 0x005a871f                       ; 005a8741
        ;   XREF to: 005a871f (CONDITIONAL_JUMP)  ; LAB_005a871f
    TEST CL,0x20                        ; 005a8743
    JZ 0x005a87a4                       ; 005a8746
        ;   XREF to: 005a87a4 (CONDITIONAL_JUMP)  ; LAB_005a87a4
    MOV EDX,dword ptr [0x02d25930]      ; 005a8748 | DAT_02d25930
    MOV byte ptr [ESP + 0x4],AL         ; 005a874e
    TEST EDX,EDX                        ; 005a8752
    JZ 0x005a8777                       ; 005a8754
        ;   XREF to: 005a8777 (CONDITIONAL_JUMP)  ; LAB_005a8777
    AND EAX,0xff                        ; 005a8756
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005a875b
    AND AL,0x1                          ; 005a8761
    AND EAX,0xff                        ; 005a8763
    JZ 0x005a8777                       ; 005a8768
        ;   XREF to: 005a8777 (CONDITIONAL_JUMP)  ; LAB_005a8777
    PUSH ESI                            ; 005a876a
    CALL crt_unknown.c_FUN_005a82a0     ; 005a876b
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8770
    MOV byte ptr [ESP + 0x5],AL         ; 005a8773
    PUSH 0x2                            ; 005a8777
        ;   Label: LAB_005a8777
    LEA EAX,[ESP + 0x8]                 ; 005a8779
    PUSH EAX                            ; 005a877d
    LEA EAX,[ESP + 0x8]                 ; 005a877e
    PUSH EAX                            ; 005a8782
    CALL unkafter_asgaya.cpp_FUN_005ae560 ; 005a8783
        ;   XREF to: 005ae560 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae560()
    ADD ESP,0xc                         ; 005a8788
    CMP EAX,-0x1                        ; 005a878b
    JNZ 0x005a8794                      ; 005a878e
        ;   XREF to: 005a8794 (CONDITIONAL_JUMP)  ; LAB_005a8794
    XOR EAX,EAX                         ; 005a8790
    JMP 0x005a87b0                      ; 005a8792
        ;   XREF to: 005a87b0 (UNCONDITIONAL_JUMP)  ; LAB_005a87b0
    ADD EBX,0x2                         ; 005a8794
        ;   Label: LAB_005a8794
    MOV EAX,dword ptr [ESP]             ; 005a8797
    MOV word ptr ES:[EBX + -0x2],AX     ; 005a879a
    JMP 0x005a871f                      ; 005a879f
        ;   XREF to: 005a871f (UNCONDITIONAL_JUMP)  ; LAB_005a871f
    INC EBX                             ; 005a87a4
        ;   Label: LAB_005a87a4
    MOV byte ptr ES:[EBX + -0x1],AL     ; 005a87a5
    JMP 0x005a871f                      ; 005a87a9
        ;   XREF to: 005a871f (UNCONDITIONAL_JUMP)  ; LAB_005a871f
    MOV EAX,EBP                         ; 005a87ae
        ;   Label: LAB_005a87ae
    ADD ESP,0x8                         ; 005a87b0
        ;   Label: LAB_005a87b0
    POP EBP                             ; 005a87b3
    POP ES                              ; 005a87b4
    POP EDI                             ; 005a87b5
    POP ESI                             ; 005a87b6
    POP EBX                             ; 005a87b7
    RET                                 ; 005a87b8

