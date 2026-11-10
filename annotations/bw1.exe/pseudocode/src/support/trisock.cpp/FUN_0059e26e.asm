; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059e26e(int param_1,char *param_2)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   support_trisock.cpp_FUN_0059d9d0
;   support_trisock.cpp_FUN_0059ddc0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0059e26e
        ;   Label: support_trisock.cpp_FUN_0059e26e
    PUSH EBX                            ; 0059e270
    PUSH ESI                            ; 0059e271
    PUSH EDI                            ; 0059e272
    PUSH EBP                            ; 0059e273
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059e274
    MOV ESI,dword ptr [ESP + 0x18]      ; 0059e278
    LEA EBP,[EBX + 0x200]               ; 0059e27c
    MOV EDI,EBP                         ; 0059e282
    PUSH EDI                            ; 0059e284
    MOV AL,byte ptr [ESI]               ; 0059e285
        ;   Label: LAB_0059e285
    MOV byte ptr [EDI],AL               ; 0059e287
    CMP AL,0x0                          ; 0059e289
    JZ 0x0059e29d                       ; 0059e28b
        ;   XREF to: 0059e29d (CONDITIONAL_JUMP)  ; LAB_0059e29d
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e28d
    ADD ESI,0x2                         ; 0059e290
    MOV byte ptr [EDI + 0x1],AL         ; 0059e293
    ADD EDI,0x2                         ; 0059e296
    CMP AL,0x0                          ; 0059e299
    JNZ 0x0059e285                      ; 0059e29b
        ;   XREF to: 0059e285 (CONDITIONAL_JUMP)  ; LAB_0059e285
    POP EDI                             ; 0059e29d
        ;   Label: LAB_0059e29d
    PUSH 0x100                          ; 0059e29e
    LEA EAX,[EBX + 0x500]               ; 0059e2a3
    PUSH EAX                            ; 0059e2a9
    LEA EAX,[EBX + 0x604]               ; 0059e2aa
    PUSH EAX                            ; 0059e2b0
    LEA ESI,[EBX + 0x400]               ; 0059e2b1
    PUSH ESI                            ; 0059e2b7
    PUSH EBP                            ; 0059e2b8
    CALL support_trisock.cpp_FUN_0059d9d0 ; 0059e2b9
        ;   XREF to: 0059d9d0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059d9d0()
    ADD ESP,0x14                        ; 0059e2be
    TEST EAX,EAX                        ; 0059e2c1
    JZ 0x0059e2e1                       ; 0059e2c3
        ;   XREF to: 0059e2e1 (CONDITIONAL_JUMP)  ; LAB_0059e2e1
    PUSH ESI                            ; 0059e2c5
    ADD EBX,0xd30                       ; 0059e2c6
    PUSH EBX                            ; 0059e2cc
    MOV dword ptr [EBX + -0x8],0x1      ; 0059e2cd
    CALL support_trisock.cpp_FUN_0059ddc0 ; 0059e2d4
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059ddc0()
    ADD ESP,0x8                         ; 0059e2d9
    POP EBP                             ; 0059e2dc
    POP EDI                             ; 0059e2dd
    POP ESI                             ; 0059e2de
    POP EBX                             ; 0059e2df
    RET                                 ; 0059e2e0
    PUSH EBP                            ; 0059e2e1
        ;   Label: LAB_0059e2e1
    PUSH 0x5f8636                       ; 0059e2e2
    ADD EBX,0xa18                       ; 0059e2e7
    PUSH EBX                            ; 0059e2ed
    MOV dword ptr [EBX + 0x310],0xffffffff ; 0059e2ee
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e2f8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e2fd
    POP EBP                             ; 0059e300
    POP EDI                             ; 0059e301
    POP ESI                             ; 0059e302
    POP EBX                             ; 0059e303
    RET                                 ; 0059e304

