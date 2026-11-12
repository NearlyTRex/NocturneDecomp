; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f033e(int param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d7a694
;   undefined4 DAT_01d7f580
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004ed020
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004f033e
        ;   Label: engine_mini3d.cpp_FUN_004f033e
    PUSH EBX                            ; 004f0340
    PUSH EDI                            ; 004f0341
    SUB ESP,0x4                         ; 004f0342
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f0345
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f0349
    CMP dword ptr [ESP + 0x1c],0x0      ; 004f034d
    SETNZ AL                            ; 004f0352
    AND EAX,0xff                        ; 004f0355
    INC EAX                             ; 004f035a
    MOV [0x01d7a694],EAX                ; 004f035b | DAT_01d7a694
    LEA EAX,[EBX + -0x1]                ; 004f0360
    MOV dword ptr [ESP],EAX             ; 004f0363
    FILD dword ptr [ESP]                ; 004f0366
    LEA EAX,[EDI + -0x1]                ; 004f0369
    SUB ESP,0x4                         ; 004f036c
    MOV dword ptr [ESP + 0x4],EAX       ; 004f036f
    FSTP float ptr [ESP]                ; 004f0373
    FILD dword ptr [ESP + 0x4]          ; 004f0376
    SUB ESP,0x4                         ; 004f037a
    FSTP float ptr [ESP]                ; 004f037d
    PUSH 0x0                            ; 004f0380
    PUSH 0x0                            ; 004f0382
    CALL engine_mini3d.cpp_FUN_004ed020 ; 004f0384
        ;   XREF to: 004ed020 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed020()
    ADD ESP,0x10                        ; 004f0389
    MOV dword ptr [0x01d7f580],EBX      ; 004f038c | DAT_01d7f580
    TEST EBX,EBX                        ; 004f0392
    JLE 0x004f03c8                      ; 004f0394
        ;   XREF to: 004f03c8 (CONDITIONAL_JUMP)  ; LAB_004f03c8
    PUSH ESI                            ; 004f0396
    LEA ESI,[EDI*0x4 + 0x0]             ; 004f0397
    IMUL EDX,EDI,0x0                    ; 004f039e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f03a1
    SHL EBX,0x2                         ; 004f03a5
    XOR EAX,EAX                         ; 004f03a8
    ADD EDX,ECX                         ; 004f03aa
    ADD EAX,0x4                         ; 004f03ac
        ;   Label: LAB_004f03ac
    MOV ECX,dword ptr [EAX + 0x1c5fae8] ; 004f03af
    MOV dword ptr [EAX + 0x1d7f580],ECX ; 004f03b5
    MOV dword ptr [EAX + 0x1c5fae8],EDX ; 004f03bb
    ADD EDX,ESI                         ; 004f03c1
    CMP EAX,EBX                         ; 004f03c3
    JL 0x004f03ac                       ; 004f03c5
        ;   XREF to: 004f03ac (CONDITIONAL_JUMP)  ; LAB_004f03ac
    POP ESI                             ; 004f03c7
    ADD ESP,0x4                         ; 004f03c8
        ;   Label: LAB_004f03c8
    POP EDI                             ; 004f03cb
    POP EBX                             ; 004f03cc
    RET                                 ; 004f03cd

