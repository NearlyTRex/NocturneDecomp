; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00550010(int param_1)
;
;
; XREF[4]:
;   FUN_0054ddf0 at 0054deb5
;   FUN_0054f8a0 at 0054f8fb
;   FUN_0054f9c0 at 0054fb79
;   FUN_0054ff30 at 0054ff66
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550010
        ;   Label: FUN_00550010
    MOV EAX,dword ptr [ESP + 0x8]       ; 00550011
    CMP dword ptr [EAX + 0x124],0x1     ; 00550015
    JG 0x00550036                       ; 0055001c
        ;   XREF to: 00550036 (CONDITIONAL_JUMP)  ; LAB_00550036
    MOV ECX,dword ptr [EAX + 0x110]     ; 0055001e
    CMP ECX,dword ptr [EAX + 0x128]     ; 00550024
    JNZ 0x00550036                      ; 0055002a
        ;   XREF to: 00550036 (CONDITIONAL_JUMP)  ; LAB_00550036
    MOV EBX,dword ptr [EAX + 0x13c]     ; 0055002c
    TEST EBX,EBX                        ; 00550032
    JLE 0x0055003d                      ; 00550034
        ;   XREF to: 0055003d (CONDITIONAL_JUMP)  ; LAB_0055003d
    MOV EAX,0x2                         ; 00550036
        ;   Label: LAB_00550036
    POP EBX                             ; 0055003b
    RET                                 ; 0055003c
    JNZ 0x00550046                      ; 0055003d
        ;   XREF to: 00550046 (CONDITIONAL_JUMP)  ; LAB_00550046
        ;   Label: LAB_0055003d
    MOV EAX,0x1                         ; 0055003f
    POP EBX                             ; 00550044
    RET                                 ; 00550045
    XOR EAX,EAX                         ; 00550046
        ;   Label: LAB_00550046
    POP EBX                             ; 00550048
    RET                                 ; 00550049

