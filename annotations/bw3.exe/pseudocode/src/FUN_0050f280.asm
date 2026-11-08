; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050f280(int param_1)
;
;
; XREF[1]:
;   FUN_00510f40 at 00510f66
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050f280
        ;   Label: FUN_0050f280
    MOV EDX,dword ptr [EAX + 0x20]      ; 0050f284
    TEST EDX,EDX                        ; 0050f287
    JNZ 0x0050f28e                      ; 0050f289
        ;   XREF to: 0050f28e (CONDITIONAL_JUMP)  ; LAB_0050f28e
    XOR EAX,EAX                         ; 0050f28b
    RET                                 ; 0050f28d
    PUSH EBX                            ; 0050f28e
        ;   Label: LAB_0050f28e
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0050f28f
    LEA EAX,[ECX + 0x1]                 ; 0050f292
    MOV EBX,dword ptr [EDX + ECX*0x4]   ; 0050f295
    SHL EAX,0x2                         ; 0050f298
    ADD EAX,EBX                         ; 0050f29b
    POP EBX                             ; 0050f29d
    RET                                 ; 0050f29e

