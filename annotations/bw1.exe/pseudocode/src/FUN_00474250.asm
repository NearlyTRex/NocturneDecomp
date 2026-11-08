; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00474250(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0046f740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474250
        ;   Label: FUN_00474250
    PUSH EDI                            ; 00474251
    SUB ESP,0x30                        ; 00474252
    MOV EDX,dword ptr [ESP + 0x40]      ; 00474255
    MOV EBX,ESI                         ; 00474259
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0047425b
    PUSH EDX                            ; 0047425f
    SHL EDX,0x3                         ; 00474260
    MOV EAX,EDX                         ; 00474263
    SHL EAX,0x4                         ; 00474265
    SUB EAX,EDX                         ; 00474268
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x25b0] ; 0047426a
    PUSH EDX                            ; 00474271
    PUSH ESI                            ; 00474272
    LEA ESI,[ESP + 0xc]                 ; 00474273
    MOV EDI,EBX                         ; 00474277
    CALL FUN_0046f740                   ; 00474279
        ;   XREF to: 0046f740 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f740()
    MOV ECX,0xc                         ; 0047427e
    LEA ESI,[ESP + 0xc]                 ; 00474283
    ADD ESP,0xc                         ; 00474287
    MOVSD.REP ES:EDI,ESI                ; 0047428a
    MOV EAX,EBX                         ; 0047428c
    ADD ESP,0x30                        ; 0047428e
    POP EDI                             ; 00474291
    POP EBX                             ; 00474292
    RET                                 ; 00474293

