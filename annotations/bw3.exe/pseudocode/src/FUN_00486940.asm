; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00486940(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5bb78
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486940
        ;   Label: FUN_00486940
    MOV ECX,dword ptr [0x01c5bb78]      ; 00486941 | DAT_01c5bb78
    MOV EAX,dword ptr [ESP + 0x8]       ; 00486947
    CMP dword ptr [EAX + 0x8],0x0       ; 0048694b
    JZ 0x004869a4                       ; 0048694f
        ;   XREF to: 004869a4 (CONDITIONAL_JUMP)  ; LAB_004869a4
    XOR EDX,EDX                         ; 00486951
        ;   Label: LAB_00486951
    CMP ECX,EAX                         ; 00486953
        ;   Label: LAB_00486953
    JNZ 0x00486a06                      ; 00486955
        ;   XREF to: 00486a06 (CONDITIONAL_JUMP)  ; LAB_00486a06
    MOV BH,byte ptr [0x01c5fae4]        ; 0048695b | DAT_01c5fae4
    MOV dword ptr [EAX + 0x20],EDX      ; 00486961
    TEST BH,0x1                         ; 00486964
    JNZ 0x004869fc                      ; 00486967
        ;   XREF to: 004869fc (CONDITIONAL_JUMP)  ; LAB_004869fc
    XOR ECX,EAX                         ; 0048696d
    TEST EDX,EDX                        ; 0048696f
    JZ 0x004869fc                       ; 00486971
        ;   XREF to: 004869fc (CONDITIONAL_JUMP)  ; LAB_004869fc
    PUSH EDI                            ; 00486977
    MOV EBX,dword ptr [EAX]             ; 00486978
    MOV dword ptr [EAX + 0x20],0x0      ; 0048697a
    CMP EBX,0x1                         ; 00486981
    JZ 0x004869da                       ; 00486984
        ;   XREF to: 004869da (CONDITIONAL_JUMP)  ; LAB_004869da
    CMP dword ptr [EAX + 0x4],0x0       ; 00486986
    SETZ DL                             ; 0048698a
    AND EDX,0xff                        ; 0048698d
    MOV dword ptr [EAX + 0x4],EDX       ; 00486993
    MOV EAX,0x1                         ; 00486996
        ;   Label: LAB_00486996
    POP EDI                             ; 0048699b
    MOV dword ptr [0x01c5bb78],ECX      ; 0048699c | DAT_01c5bb78
    POP EBX                             ; 004869a2
    RET                                 ; 004869a3
    MOV EDX,dword ptr [0x01c5fadc]      ; 004869a4 | DAT_01c5fadc
        ;   Label: LAB_004869a4
    CMP EDX,dword ptr [EAX + 0x10]      ; 004869aa
    JL 0x00486951                       ; 004869ad
        ;   XREF to: 00486951 (CONDITIONAL_JUMP)  ; LAB_00486951
    MOV EDX,dword ptr [0x01c5fae0]      ; 004869af | DAT_01c5fae0
    CMP EDX,dword ptr [EAX + 0x14]      ; 004869b5
    JL 0x00486951                       ; 004869b8
        ;   XREF to: 00486951 (CONDITIONAL_JUMP)  ; LAB_00486951
    MOV EDX,dword ptr [0x01c5fadc]      ; 004869ba | DAT_01c5fadc
    CMP EDX,dword ptr [EAX + 0x18]      ; 004869c0
    JGE 0x00486951                      ; 004869c3
        ;   XREF to: 00486951 (CONDITIONAL_JUMP)  ; LAB_00486951
    MOV EDX,dword ptr [0x01c5fae0]      ; 004869c5 | DAT_01c5fae0
    CMP EDX,dword ptr [EAX + 0x1c]      ; 004869cb
    JGE 0x00486951                      ; 004869ce
        ;   XREF to: 00486951 (CONDITIONAL_JUMP)  ; LAB_00486951
    MOV EDX,0x1                         ; 004869d0
    JMP 0x00486953                      ; 004869d5
        ;   XREF to: 00486953 (UNCONDITIONAL_JUMP)  ; LAB_00486953
    MOV EDI,dword ptr [EAX + 0x4]       ; 004869da
        ;   Label: LAB_004869da
    ADD EDI,EBX                         ; 004869dd
    MOV dword ptr [EAX + 0x4],EDI       ; 004869df
    CMP EDI,0x2                         ; 004869e2
    JLE 0x00486996                      ; 004869e5
        ;   XREF to: 00486996 (CONDITIONAL_JUMP)  ; LAB_00486996
    MOV dword ptr [EAX + 0x4],0x0       ; 004869e7
    MOV EAX,0x1                         ; 004869ee
    POP EDI                             ; 004869f3
    MOV dword ptr [0x01c5bb78],ECX      ; 004869f4 | DAT_01c5bb78
    POP EBX                             ; 004869fa
    RET                                 ; 004869fb
    XOR EAX,EAX                         ; 004869fc
        ;   Label: LAB_004869fc
    MOV dword ptr [0x01c5bb78],ECX      ; 004869fe | DAT_01c5bb78
    POP EBX                             ; 00486a04
    RET                                 ; 00486a05
    TEST ECX,ECX                        ; 00486a06
        ;   Label: LAB_00486a06
    JNZ 0x00486a17                      ; 00486a08
        ;   XREF to: 00486a17 (CONDITIONAL_JUMP)  ; LAB_00486a17
    TEST byte ptr [0x01c5fae4],0x1      ; 00486a0a | DAT_01c5fae4
    JZ 0x00486a17                       ; 00486a11
        ;   XREF to: 00486a17 (CONDITIONAL_JUMP)  ; LAB_00486a17
    TEST EDX,EDX                        ; 00486a13
    JNZ 0x00486a21                      ; 00486a15
        ;   XREF to: 00486a21 (CONDITIONAL_JUMP)  ; LAB_00486a21
    XOR EAX,EAX                         ; 00486a17
        ;   Label: LAB_00486a17
    MOV dword ptr [0x01c5bb78],ECX      ; 00486a19 | DAT_01c5bb78
    POP EBX                             ; 00486a1f
    RET                                 ; 00486a20
    MOV ECX,EAX                         ; 00486a21
        ;   Label: LAB_00486a21
    MOV dword ptr [EAX + 0x20],0x1      ; 00486a23
    XOR EAX,EAX                         ; 00486a2a
    MOV dword ptr [0x01c5bb78],ECX      ; 00486a2c | DAT_01c5bb78
    POP EBX                             ; 00486a32
    RET                                 ; 00486a33

