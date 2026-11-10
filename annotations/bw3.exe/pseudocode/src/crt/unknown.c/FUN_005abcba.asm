; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005abcba(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)
;
;
; XREF[1]:
;   crt_unknown.c_openFile_FUN_005a4e29 at 005a4e4f
;
; Called Functions:
;   crt_unknown.c_FUN_005af050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abcba
        ;   Label: crt_unknown.c_FUN_005abcba
    PUSH ESI                            ; 005abcbb
    PUSH EBP                            ; 005abcbc
    MOV EBX,dword ptr [ESP + 0x10]      ; 005abcbd
    CMP dword ptr [EBX + 0x2c],-0x1     ; 005abcc1
    JNZ 0x005abd59                      ; 005abcc5
        ;   XREF to: 005abd59 (CONDITIONAL_JUMP)  ; LAB_005abd59
    MOV AH,byte ptr [ESP + 0x18]        ; 005abccb
    TEST AH,0x8                         ; 005abccf
    JNZ 0x005abd5f                      ; 005abcd2
        ;   XREF to: 005abd5f (CONDITIONAL_JUMP)  ; LAB_005abd5f
    MOV DH,byte ptr [ESP + 0x18]        ; 005abcd8
        ;   Label: LAB_005abcd8
    TEST DH,0x2                         ; 005abcdc
    JZ 0x005abcef                       ; 005abcdf
        ;   XREF to: 005abcef (CONDITIONAL_JUMP)  ; LAB_005abcef
    TEST DH,0xd                         ; 005abce1
    JNZ 0x005abcef                      ; 005abce4
        ;   XREF to: 005abcef (CONDITIONAL_JUMP)  ; LAB_005abcef
    MOV CH,DH                           ; 005abce6
    OR CH,0x10                          ; 005abce8
    MOV byte ptr [ESP + 0x18],CH        ; 005abceb
    TEST byte ptr [ESP + 0x19],0x1      ; 005abcef
        ;   Label: LAB_005abcef
    JZ 0x005abcfd                       ; 005abcf4
        ;   XREF to: 005abcfd (CONDITIONAL_JUMP)  ; LAB_005abcfd
    TEST byte ptr [ESP + 0x18],0x80     ; 005abcf6
    JNZ 0x005abd59                      ; 005abcfb
        ;   XREF to: 005abd59 (CONDITIONAL_JUMP)  ; LAB_005abd59
    MOV DL,byte ptr [ESP + 0x18]        ; 005abcfd
        ;   Label: LAB_005abcfd
    TEST DL,0x40                        ; 005abd01
    JZ 0x005abd0b                       ; 005abd04
        ;   XREF to: 005abd0b (CONDITIONAL_JUMP)  ; LAB_005abd0b
    TEST DL,0x20                        ; 005abd06
    JNZ 0x005abd59                      ; 005abd09
        ;   XREF to: 005abd59 (CONDITIONAL_JUMP)  ; LAB_005abd59
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005abd0b
        ;   Label: LAB_005abd0b
    PUSH ECX                            ; 005abd0f
    LEA EAX,[ESP + 0x1c]                ; 005abd10
    PUSH EAX                            ; 005abd14
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005abd15
    PUSH ESI                            ; 005abd19
    CALL crt_unknown.c_FUN_005af050     ; 005abd1a
        ;   XREF to: 005af050 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af050()
    ADD ESP,0xc                         ; 005abd1f
    MOV dword ptr [EBX + 0x2c],EAX      ; 005abd22
    TEST EAX,EAX                        ; 005abd25
    JL 0x005abd6d                       ; 005abd27
        ;   XREF to: 005abd6d (CONDITIONAL_JUMP)  ; LAB_005abd6d
    MOV CL,byte ptr [EBX + 0x39]        ; 005abd29
    MOV EAX,dword ptr [ESP + 0x18]      ; 005abd2c
    AND CL,0xfe                         ; 005abd30
    MOV dword ptr [EBX + 0x30],EAX      ; 005abd33
    MOV byte ptr [EBX + 0x39],CL        ; 005abd36
    TEST byte ptr [ESP + 0x18],0x4      ; 005abd39
    JZ 0x005abd53                       ; 005abd3e
        ;   XREF to: 005abd53 (CONDITIONAL_JUMP)  ; LAB_005abd53
    MOV EBP,dword ptr [ESP + 0x18]      ; 005abd40
    PUSH EBP                            ; 005abd44
    PUSH 0x2                            ; 005abd45
    PUSH 0x0                            ; 005abd47
    MOV EAX,dword ptr [EBX + 0x28]      ; 005abd49
    PUSH EBX                            ; 005abd4c
    CALL dword ptr [EAX + 0x18]         ; 005abd4d
    ADD ESP,0x10                        ; 005abd50
    MOV EAX,EBX                         ; 005abd53
        ;   Label: LAB_005abd53
    POP EBP                             ; 005abd55
    POP ESI                             ; 005abd56
    POP EBX                             ; 005abd57
    RET                                 ; 005abd58
    XOR EAX,EAX                         ; 005abd59
        ;   Label: LAB_005abd59
    POP EBP                             ; 005abd5b
    POP ESI                             ; 005abd5c
    POP EBX                             ; 005abd5d
    RET                                 ; 005abd5e
    MOV DL,AH                           ; 005abd5f
        ;   Label: LAB_005abd5f
    OR DL,0x2                           ; 005abd61
    MOV byte ptr [ESP + 0x18],DL        ; 005abd64
    JMP 0x005abcd8                      ; 005abd68
        ;   XREF to: 005abcd8 (UNCONDITIONAL_JUMP)  ; LAB_005abcd8
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 005abd6d
        ;   Label: LAB_005abd6d
    JMP 0x005abd59                      ; 005abd74
        ;   XREF to: 005abd59 (UNCONDITIONAL_JUMP)  ; LAB_005abd59

