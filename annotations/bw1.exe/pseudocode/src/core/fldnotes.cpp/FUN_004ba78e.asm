; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004ba78e(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004ba78e
        ;   Label: core_fldnotes.cpp_FUN_004ba78e
    PUSH EBX                            ; 004ba790
    PUSH ESI                            ; 004ba791
    PUSH EBP                            ; 004ba792
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ba793
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ba797
    MOV EDX,dword ptr [EBX + 0x10]      ; 004ba79b
    TEST EDX,EDX                        ; 004ba79e
    JNZ 0x004ba7aa                      ; 004ba7a0
        ;   XREF to: 004ba7aa (CONDITIONAL_JUMP)  ; LAB_004ba7aa
    TEST ESI,ESI                        ; 004ba7a2
    JNZ 0x004ba7c2                      ; 004ba7a4
        ;   XREF to: 004ba7c2 (CONDITIONAL_JUMP)  ; LAB_004ba7c2
    POP EBP                             ; 004ba7a6
    POP ESI                             ; 004ba7a7
    POP EBX                             ; 004ba7a8
    RET                                 ; 004ba7a9
    PUSH EDX                            ; 004ba7aa
        ;   Label: LAB_004ba7aa
    CALL crt_unknown.c_FUN_005c09f0     ; 004ba7ab
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004ba7b0
    MOV dword ptr [EBX + 0x10],0x0      ; 004ba7b3
    TEST ESI,ESI                        ; 004ba7ba
    JNZ 0x004ba7c2                      ; 004ba7bc
        ;   XREF to: 004ba7c2 (CONDITIONAL_JUMP)  ; LAB_004ba7c2
    POP EBP                             ; 004ba7be
    POP ESI                             ; 004ba7bf
    POP EBX                             ; 004ba7c0
    RET                                 ; 004ba7c1
    PUSH EDI                            ; 004ba7c2
        ;   Label: LAB_004ba7c2
    MOV EDI,ESI                         ; 004ba7c3
    SUB ECX,ECX                         ; 004ba7c5
    DEC ECX                             ; 004ba7c7
    XOR EAX,EAX                         ; 004ba7c8
    SCASB.REPNE ES:EDI                  ; 004ba7ca
    NOT ECX                             ; 004ba7cc
    DEC ECX                             ; 004ba7ce
    INC ECX                             ; 004ba7cf
    PUSH ECX                            ; 004ba7d0
    CALL crt_unknown.c_FUN_005c08d0     ; 004ba7d1
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004ba7d6
    MOV dword ptr [EBX + 0x10],EAX      ; 004ba7d9
    TEST EAX,EAX                        ; 004ba7dc
    JNZ 0x004ba802                      ; 004ba7de
        ;   XREF to: 004ba802 (CONDITIONAL_JUMP)  ; LAB_004ba802
    MOV EBP,0x5df88a                    ; 004ba7e0
    MOV EAX,0x370                       ; 004ba7e5
    PUSH 0x5df89f                       ; 004ba7ea
    MOV dword ptr [0x01d1d400],EBP      ; 004ba7ef | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004ba7f5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004ba7fa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004ba7ff
    MOV EDI,dword ptr [EBX + 0x10]      ; 004ba802
        ;   Label: LAB_004ba802
    PUSH EDI                            ; 004ba805
    MOV AL,byte ptr [ESI]               ; 004ba806
        ;   Label: LAB_004ba806
    MOV byte ptr [EDI],AL               ; 004ba808
    CMP AL,0x0                          ; 004ba80a
    JZ 0x004ba81e                       ; 004ba80c
        ;   XREF to: 004ba81e (CONDITIONAL_JUMP)  ; LAB_004ba81e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ba80e
    ADD ESI,0x2                         ; 004ba811
    MOV byte ptr [EDI + 0x1],AL         ; 004ba814
    ADD EDI,0x2                         ; 004ba817
    CMP AL,0x0                          ; 004ba81a
    JNZ 0x004ba806                      ; 004ba81c
        ;   XREF to: 004ba806 (CONDITIONAL_JUMP)  ; LAB_004ba806
    POP EDI                             ; 004ba81e
        ;   Label: LAB_004ba81e
    POP EDI                             ; 004ba81f
    POP EBP                             ; 004ba820
    POP ESI                             ; 004ba821
    POP EBX                             ; 004ba822
    RET                                 ; 004ba823

