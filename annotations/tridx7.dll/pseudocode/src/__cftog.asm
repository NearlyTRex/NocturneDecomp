; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cftog(double *param_1,int param_2,size_t param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   __cftoe2
;   __cftof2
;   __fltout2
;   __fptostr
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 100072d0
        ;   Label: __cftog
    LEA EAX,[ESP + 0x10]                ; 100072d3
    PUSH EBX                            ; 100072d7
    LEA ECX,[ESP + 0x4]                 ; 100072d8
    PUSH ESI                            ; 100072dc
    PUSH EDI                            ; 100072dd
    PUSH EBP                            ; 100072de
    PUSH EAX                            ; 100072df
    PUSH ECX                            ; 100072e0
    MOV EAX,dword ptr [ESP + 0x44]      ; 100072e1
    MOV EDX,dword ptr [EAX + 0x4]       ; 100072e5
    MOV ECX,dword ptr [EAX]             ; 100072e8
    PUSH EDX                            ; 100072ea
    PUSH ECX                            ; 100072eb
    CALL __fltout2                      ; 100072ec
        ;   XREF to: 1000a350 (UNCONDITIONAL_CALL)  ; STRFLT __fltout2(_CRT_DOUBLE _Dbl, STRFLT _Flt, char * _ResultStr, size_t _SizeInBytes)
    MOV EBX,dword ptr [ESP + 0x24]      ; 100072f1
    MOV EAX,dword ptr [ESP + 0x20]      ; 100072f5
    MOV ESI,dword ptr [ESP + 0x50]      ; 100072f9
    ADD ESP,0x10                        ; 100072fd
    DEC EBX                             ; 10007300
    SUB EAX,0x2d                        ; 10007301
    MOV EDI,dword ptr [ESP + 0x44]      ; 10007304
    CMP EAX,0x1                         ; 10007308
    SBB EAX,EAX                         ; 1000730b
    NEG EAX                             ; 1000730d
    LEA EBP,[EAX + ESI*0x1]             ; 1000730f
    LEA EAX,[ESP + 0x10]                ; 10007312
    PUSH EAX                            ; 10007316
    PUSH EDI                            ; 10007317
    PUSH EBP                            ; 10007318
    CALL __fptostr                      ; 10007319
        ;   XREF to: 1000a2c0 (UNCONDITIONAL_CALL)  ; errno_t __fptostr(char * _Buf, size_t _SizeInBytes, int _Digits, STRFLT _PtFlt)
    MOV ECX,dword ptr [ESP + 0x20]      ; 1000731e
    ADD ESP,0xc                         ; 10007322
    DEC ECX                             ; 10007325
    CMP EBX,ECX                         ; 10007326
    SETL AL                             ; 10007328
    CMP ECX,-0x4                        ; 1000732b
    JL 0x1000735d                       ; 1000732e
        ;   XREF to: 1000735d (CONDITIONAL_JUMP)  ; LAB_1000735d
    CMP EDI,ECX                         ; 10007330
    JLE 0x1000735d                      ; 10007332
        ;   XREF to: 1000735d (CONDITIONAL_JUMP)  ; LAB_1000735d
    TEST AL,AL                          ; 10007334
    JZ 0x10007344                       ; 10007336
        ;   XREF to: 10007344 (CONDITIONAL_JUMP)  ; LAB_10007344
    MOV EAX,EBP                         ; 10007338
        ;   Label: LAB_10007338
    INC EBP                             ; 1000733a
    CMP byte ptr [EAX],0x0              ; 1000733b
    JNZ 0x10007338                      ; 1000733e
        ;   XREF to: 10007338 (CONDITIONAL_JUMP)  ; LAB_10007338
    MOV byte ptr [EBP + -0x2],0x0       ; 10007340
    LEA EAX,[ESP + 0x10]                ; 10007344
        ;   Label: LAB_10007344
    PUSH 0x1                            ; 10007348
    PUSH EAX                            ; 1000734a
    PUSH EDI                            ; 1000734b
    PUSH ESI                            ; 1000734c
    CALL __cftof2                       ; 1000734d
        ;   XREF to: 10007210 (UNCONDITIONAL_CALL)  ; undefined __cftof2()
    ADD ESP,0x10                        ; 10007352
    POP EBP                             ; 10007355
    POP EDI                             ; 10007356
    POP ESI                             ; 10007357
    POP EBX                             ; 10007358
    ADD ESP,0x28                        ; 10007359
    RET                                 ; 1000735c
    LEA EAX,[ESP + 0x10]                ; 1000735d
        ;   Label: LAB_1000735d
    PUSH 0x1                            ; 10007361
    MOV ECX,dword ptr [ESP + 0x4c]      ; 10007363
    PUSH EAX                            ; 10007367
    PUSH ECX                            ; 10007368
    PUSH EDI                            ; 10007369
    PUSH ESI                            ; 1000736a
    CALL __cftoe2                       ; 1000736b
        ;   XREF to: 100070b0 (UNCONDITIONAL_CALL)  ; undefined __cftoe2()
    ADD ESP,0x14                        ; 10007370
    POP EBP                             ; 10007373
    POP EDI                             ; 10007374
    POP ESI                             ; 10007375
    POP EBX                             ; 10007376
    ADD ESP,0x28                        ; 10007377
    RET                                 ; 1000737a

