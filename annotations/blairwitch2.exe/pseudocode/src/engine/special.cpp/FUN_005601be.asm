; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005601be(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bc60
;   undefined4 DAT_0264bd04
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005601be
        ;   Label: engine_special.cpp_FUN_005601be
    PUSH EBX                            ; 005601c0
    PUSH ESI                            ; 005601c1
    PUSH EDI                            ; 005601c2
    PUSH EBP                            ; 005601c3
    XOR EDX,EDX                         ; 005601c4
    MOV ECX,dword ptr [0x0264bc60]      ; 005601c6 | DAT_0264bc60
    MOV dword ptr [0x0264bd04],EDX      ; 005601cc | DAT_0264bd04
    TEST ECX,ECX                        ; 005601d2
    JNZ 0x005601dd                      ; 005601d4
        ;   XREF to: 005601dd (CONDITIONAL_JUMP)  ; LAB_005601dd
    XOR EAX,EAX                         ; 005601d6
    POP EBP                             ; 005601d8
        ;   Label: LAB_005601d8
    POP EDI                             ; 005601d9
    POP ESI                             ; 005601da
    POP EBX                             ; 005601db
    RET                                 ; 005601dc
    MOV EBX,dword ptr [ESP + 0x20]      ; 005601dd
        ;   Label: LAB_005601dd
    PUSH EBX                            ; 005601e1
    MOV ESI,dword ptr [ESP + 0x20]      ; 005601e2
    PUSH ESI                            ; 005601e6
    MOV EDI,dword ptr [ESP + 0x20]      ; 005601e7
    PUSH EDI                            ; 005601eb
    MOV EBP,dword ptr [ESP + 0x20]      ; 005601ec
    PUSH EBP                            ; 005601f0
    CALL dword ptr [0x0264bc60]         ; 005601f1 | DAT_0264bc60
    ADD ESP,0x10                        ; 005601f7
    TEST EAX,EAX                        ; 005601fa
    JZ 0x005601d8                       ; 005601fc
        ;   XREF to: 005601d8 (CONDITIONAL_JUMP)  ; LAB_005601d8
    MOV EAX,0x1                         ; 005601fe
    MOV dword ptr [0x0264bd04],ESI      ; 00560203 | DAT_0264bd04
    POP EBP                             ; 00560209
    POP EDI                             ; 0056020a
    POP ESI                             ; 0056020b
    POP EBX                             ; 0056020c
    RET                                 ; 0056020d

