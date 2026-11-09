; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005664de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf608c
;   undefined4 DAT_02cf6130
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005664de
        ;   Label: engine_special.cpp_FUN_005664de
    PUSH EBX                            ; 005664e0
    PUSH ESI                            ; 005664e1
    PUSH EDI                            ; 005664e2
    PUSH EBP                            ; 005664e3
    XOR EDX,EDX                         ; 005664e4
    MOV ECX,dword ptr [0x02cf608c]      ; 005664e6 | DAT_02cf608c
    MOV dword ptr [0x02cf6130],EDX      ; 005664ec | DAT_02cf6130
    TEST ECX,ECX                        ; 005664f2
    JNZ 0x005664fd                      ; 005664f4
        ;   XREF to: 005664fd (CONDITIONAL_JUMP)  ; LAB_005664fd
    XOR EAX,EAX                         ; 005664f6
    POP EBP                             ; 005664f8
        ;   Label: LAB_005664f8
    POP EDI                             ; 005664f9
    POP ESI                             ; 005664fa
    POP EBX                             ; 005664fb
    RET                                 ; 005664fc
    MOV EBX,dword ptr [ESP + 0x20]      ; 005664fd
        ;   Label: LAB_005664fd
    PUSH EBX                            ; 00566501
    MOV ESI,dword ptr [ESP + 0x20]      ; 00566502
    PUSH ESI                            ; 00566506
    MOV EDI,dword ptr [ESP + 0x20]      ; 00566507
    PUSH EDI                            ; 0056650b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056650c
    PUSH EBP                            ; 00566510
    CALL dword ptr [0x02cf608c]         ; 00566511 | DAT_02cf608c
    ADD ESP,0x10                        ; 00566517
    TEST EAX,EAX                        ; 0056651a
    JZ 0x005664f8                       ; 0056651c
        ;   XREF to: 005664f8 (CONDITIONAL_JUMP)  ; LAB_005664f8
    MOV EAX,0x1                         ; 0056651e
    MOV dword ptr [0x02cf6130],ESI      ; 00566523 | DAT_02cf6130
    POP EBP                             ; 00566529
    POP EDI                             ; 0056652a
    POP ESI                             ; 0056652b
    POP EBX                             ; 0056652c
    RET                                 ; 0056652d

