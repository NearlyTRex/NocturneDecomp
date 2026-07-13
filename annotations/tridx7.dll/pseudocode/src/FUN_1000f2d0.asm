; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000f2d0(int param_1,uint param_2,int *param_3,uint *param_4)
;
;
; XREF[1]:
;   FUN_1000ed30 at 1000edd4
;
; Referenced Globals:
;   undefined4 DAT_10018214
;
; Called Functions:
;   FUN_1000f360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000f2d0
        ;   Label: FUN_1000f2d0
    PUSH ESI                            ; 1000f2d1
    PUSH EDI                            ; 1000f2d2
    PUSH EBP                            ; 1000f2d3
    XOR EDI,EDI                         ; 1000f2d4
    CMP dword ptr [0x10018214],EDI      ; 1000f2d6 | DAT_10018214
    JZ 0x1000f2fa                       ; 1000f2dc
        ;   XREF to: 1000f2fa (CONDITIONAL_JUMP)  ; LAB_1000f2fa
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000f2de
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000f2e2
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000f2e6
    PUSH EAX                            ; 1000f2ea
    PUSH EBX                            ; 1000f2eb
    PUSH ECX                            ; 1000f2ec
    CALL FUN_1000f360                   ; 1000f2ed
        ;   XREF to: 1000f360 (UNCONDITIONAL_CALL)  ; undefined FUN_1000f360()
    ADD ESP,0xc                         ; 1000f2f2
    POP EBP                             ; 1000f2f5
    POP EDI                             ; 1000f2f6
    POP ESI                             ; 1000f2f7
    POP EBX                             ; 1000f2f8
    RET                                 ; 1000f2f9
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000f2fa
        ;   Label: LAB_1000f2fa
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000f2fe
    CMP dword ptr [EAX],ESI             ; 1000f302
    JBE 0x1000f349                      ; 1000f304
        ;   XREF to: 1000f349 (CONDITIONAL_JUMP)  ; LAB_1000f349
    DEC ESI                             ; 1000f306
    CMP ESI,-0x1                        ; 1000f307
    JZ 0x1000f338                       ; 1000f30a
        ;   XREF to: 1000f338 (CONDITIONAL_JUMP)  ; LAB_1000f338
    LEA EDI,[ESI + 0x1]                 ; 1000f30c
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000f30f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000f313
    MOV EBP,0xa                         ; 1000f317
        ;   Label: LAB_1000f317
    MOV EAX,ECX                         ; 1000f31c
    CDQ                                 ; 1000f31e
    IDIV EBP                            ; 1000f31f
    ADD DL,0x30                         ; 1000f321
    MOV EAX,dword ptr [EBX]             ; 1000f324
    MOV byte ptr [EAX + ESI*0x1],DL     ; 1000f326
    DEC ESI                             ; 1000f329
    MOV EAX,ECX                         ; 1000f32a
    CDQ                                 ; 1000f32c
    IDIV EBP                            ; 1000f32d
    MOV ECX,EAX                         ; 1000f32f
    CMP ESI,-0x1                        ; 1000f331
    JNZ 0x1000f317                      ; 1000f334
        ;   XREF to: 1000f317 (CONDITIONAL_JUMP)  ; LAB_1000f317
    JMP 0x1000f33c                      ; 1000f336
        ;   XREF to: 1000f33c (UNCONDITIONAL_JUMP)  ; LAB_1000f33c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000f338
        ;   Label: LAB_1000f338
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000f33c
        ;   Label: LAB_1000f33c
    ADD dword ptr [EBX],EDI             ; 1000f340
    POP EBP                             ; 1000f342
    SUB dword ptr [EAX],EDI             ; 1000f343
    POP EDI                             ; 1000f345
    POP ESI                             ; 1000f346
    POP EBX                             ; 1000f347
    RET                                 ; 1000f348
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000f349
        ;   Label: LAB_1000f349
    POP EBP                             ; 1000f34d
    POP EDI                             ; 1000f34e
    POP ESI                             ; 1000f34f
    POP EBX                             ; 1000f350
    MOV dword ptr [EAX],0x0             ; 1000f351
    RET                                 ; 1000f357

