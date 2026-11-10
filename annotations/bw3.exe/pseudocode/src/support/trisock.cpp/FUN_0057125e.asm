; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057125e(int param_1,char *param_2)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trisock.cpp_FUN_005709c0
;   support_trisock.cpp_FUN_00570db0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0057125e
        ;   Label: support_trisock.cpp_FUN_0057125e
    PUSH EBX                            ; 00571260
    PUSH ESI                            ; 00571261
    PUSH EDI                            ; 00571262
    PUSH EBP                            ; 00571263
    MOV EBX,dword ptr [ESP + 0x14]      ; 00571264
    MOV ESI,dword ptr [ESP + 0x18]      ; 00571268
    LEA EBP,[EBX + 0x200]               ; 0057126c
    MOV EDI,EBP                         ; 00571272
    PUSH EDI                            ; 00571274
    MOV AL,byte ptr [ESI]               ; 00571275
        ;   Label: LAB_00571275
    MOV byte ptr [EDI],AL               ; 00571277
    CMP AL,0x0                          ; 00571279
    JZ 0x0057128d                       ; 0057127b
        ;   XREF to: 0057128d (CONDITIONAL_JUMP)  ; LAB_0057128d
    MOV AL,byte ptr [ESI + 0x1]         ; 0057127d
    ADD ESI,0x2                         ; 00571280
    MOV byte ptr [EDI + 0x1],AL         ; 00571283
    ADD EDI,0x2                         ; 00571286
    CMP AL,0x0                          ; 00571289
    JNZ 0x00571275                      ; 0057128b
        ;   XREF to: 00571275 (CONDITIONAL_JUMP)  ; LAB_00571275
    POP EDI                             ; 0057128d
        ;   Label: LAB_0057128d
    PUSH 0x100                          ; 0057128e
    LEA EAX,[EBX + 0x500]               ; 00571293
    PUSH EAX                            ; 00571299
    LEA EAX,[EBX + 0x604]               ; 0057129a
    PUSH EAX                            ; 005712a0
    LEA ESI,[EBX + 0x400]               ; 005712a1
    PUSH ESI                            ; 005712a7
    PUSH EBP                            ; 005712a8
    CALL support_trisock.cpp_FUN_005709c0 ; 005712a9
        ;   XREF to: 005709c0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_005709c0()
    ADD ESP,0x14                        ; 005712ae
    TEST EAX,EAX                        ; 005712b1
    JZ 0x005712d1                       ; 005712b3
        ;   XREF to: 005712d1 (CONDITIONAL_JUMP)  ; LAB_005712d1
    PUSH ESI                            ; 005712b5
    ADD EBX,0xd30                       ; 005712b6
    PUSH EBX                            ; 005712bc
    MOV dword ptr [EBX + -0x8],0x1      ; 005712bd
    CALL support_trisock.cpp_FUN_00570db0 ; 005712c4
        ;   XREF to: 00570db0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570db0()
    ADD ESP,0x8                         ; 005712c9
    POP EBP                             ; 005712cc
    POP EDI                             ; 005712cd
    POP ESI                             ; 005712ce
    POP EBX                             ; 005712cf
    RET                                 ; 005712d0
    PUSH EBP                            ; 005712d1
        ;   Label: LAB_005712d1
    PUSH 0x5d6ba5                       ; 005712d2
    ADD EBX,0xa18                       ; 005712d7
    PUSH EBX                            ; 005712dd
    MOV dword ptr [EBX + 0x310],0xffffffff ; 005712de
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005712e8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005712ed
    POP EBP                             ; 005712f0
    POP EDI                             ; 005712f1
    POP ESI                             ; 005712f2
    POP EBX                             ; 005712f3
    RET                                 ; 005712f4

