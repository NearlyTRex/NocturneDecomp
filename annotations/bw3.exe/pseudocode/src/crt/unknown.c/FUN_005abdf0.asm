; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005abdf0(uint param_1)
;
;
; XREF[4]:
;   crt_time.c__mktime_FUN_005a4f20 at 005a4f8b
;   crt_unknown.c_FUN_005abe28 at 005abe49
;   crt_unknown.c_FUN_005abf84 at 005abfe4
;   crt_unknown.c_FUN_005ac290 at 005ac348
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abdf0
        ;   Label: crt_unknown.c_FUN_005abdf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005abdf1
    TEST BL,0x3                         ; 005abdf5
    JNZ 0x005abe24                      ; 005abdf8
        ;   XREF to: 005abe24 (CONDITIONAL_JUMP)  ; LAB_005abe24
    MOV ECX,0x64                        ; 005abdfa
    MOV EAX,EBX                         ; 005abdff
    XOR EDX,EDX                         ; 005abe01
    DIV ECX                             ; 005abe03
    TEST EDX,EDX                        ; 005abe05
    JZ 0x005abe10                       ; 005abe07
        ;   XREF to: 005abe10 (CONDITIONAL_JUMP)  ; LAB_005abe10
    MOV EAX,0x1                         ; 005abe09
    POP EBX                             ; 005abe0e
    RET                                 ; 005abe0f
    MOV ECX,0x190                       ; 005abe10
        ;   Label: LAB_005abe10
    MOV EAX,EBX                         ; 005abe15
    DIV ECX                             ; 005abe17
    TEST EDX,EDX                        ; 005abe19
    JNZ 0x005abe24                      ; 005abe1b
        ;   XREF to: 005abe24 (CONDITIONAL_JUMP)  ; LAB_005abe24
    MOV EAX,0x1                         ; 005abe1d
    POP EBX                             ; 005abe22
    RET                                 ; 005abe23
    XOR EAX,EAX                         ; 005abe24
        ;   Label: LAB_005abe24
    POP EBX                             ; 005abe26
    RET                                 ; 005abe27

