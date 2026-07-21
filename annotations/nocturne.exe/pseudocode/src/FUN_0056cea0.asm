; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056cea0(uint param_1)
;
;
; XREF[4]:
;   FUN_0056ced8 at 0056cef9
;   FUN_0056d034 at 0056d094
;   FUN_0056d340 at 0056d3f8
;   crt_time.c__mktime_FUN_00565fb0 at 0056601b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cea0
        ;   Label: FUN_0056cea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056cea1
    TEST BL,0x3                         ; 0056cea5
    JNZ 0x0056ced4                      ; 0056cea8
        ;   XREF to: 0056ced4 (CONDITIONAL_JUMP)  ; LAB_0056ced4
    MOV ECX,0x64                        ; 0056ceaa
    MOV EAX,EBX                         ; 0056ceaf
    XOR EDX,EDX                         ; 0056ceb1
    DIV ECX                             ; 0056ceb3
    TEST EDX,EDX                        ; 0056ceb5
    JZ 0x0056cec0                       ; 0056ceb7
        ;   XREF to: 0056cec0 (CONDITIONAL_JUMP)  ; LAB_0056cec0
    MOV EAX,0x1                         ; 0056ceb9
    POP EBX                             ; 0056cebe
    RET                                 ; 0056cebf
    MOV ECX,0x190                       ; 0056cec0
        ;   Label: LAB_0056cec0
    MOV EAX,EBX                         ; 0056cec5
    DIV ECX                             ; 0056cec7
    TEST EDX,EDX                        ; 0056cec9
    JNZ 0x0056ced4                      ; 0056cecb
        ;   XREF to: 0056ced4 (CONDITIONAL_JUMP)  ; LAB_0056ced4
    MOV EAX,0x1                         ; 0056cecd
    POP EBX                             ; 0056ced2
    RET                                 ; 0056ced3
    XOR EAX,EAX                         ; 0056ced4
        ;   Label: LAB_0056ced4
    POP EBX                             ; 0056ced6
    RET                                 ; 0056ced7

