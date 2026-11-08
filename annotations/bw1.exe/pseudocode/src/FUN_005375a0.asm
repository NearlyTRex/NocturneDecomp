; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005375a0(int param_1)
;
;
; XREF[1]:
;   FUN_00539260 at 00539286
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005375a0
        ;   Label: FUN_005375a0
    MOV EDX,dword ptr [EAX + 0x20]      ; 005375a4
    TEST EDX,EDX                        ; 005375a7
    JNZ 0x005375ae                      ; 005375a9
        ;   XREF to: 005375ae (CONDITIONAL_JUMP)  ; LAB_005375ae
    XOR EAX,EAX                         ; 005375ab
    RET                                 ; 005375ad
    PUSH EBX                            ; 005375ae
        ;   Label: LAB_005375ae
    MOV ECX,dword ptr [EAX + 0x1c]      ; 005375af
    LEA EAX,[ECX + 0x1]                 ; 005375b2
    MOV EBX,dword ptr [EDX + ECX*0x4]   ; 005375b5
    SHL EAX,0x2                         ; 005375b8
    ADD EAX,EBX                         ; 005375bb
    POP EBX                             ; 005375bd
    RET                                 ; 005375be

