; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc210(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005e138c
;   undefined4 DAT_005e1394
;
; Called Functions:
;   FUN_004031c0
;   FUN_00403250
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc210
        ;   Label: FUN_004cc210
    PUSH ESI                            ; 004cc211
    PUSH EDI                            ; 004cc212
    PUSH EBP                            ; 004cc213
    SUB ESP,0x8                         ; 004cc214
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004cc217
    FLD float ptr [ESP + 0x2c]          ; 004cc21b
    MOV EBX,0x2                         ; 004cc21f
    FCOMP double ptr [0x005e138c]       ; 004cc224 | DAT_005e138c
    FNSTSW AX                           ; 004cc22a
    SAHF                                ; 004cc22c
    JNC 0x004cc234                      ; 004cc22d
        ;   XREF to: 004cc234 (CONDITIONAL_JUMP)  ; LAB_004cc234
    MOV EBX,0xfb                        ; 004cc22f
    FLD float ptr [ESP + 0x2c]          ; 004cc234
        ;   Label: LAB_004cc234
    FCOMP double ptr [0x005e1394]       ; 004cc238 | DAT_005e1394
    FNSTSW AX                           ; 004cc23e
    SAHF                                ; 004cc240
    JNC 0x004cc248                      ; 004cc241
        ;   XREF to: 004cc248 (CONDITIONAL_JUMP)  ; LAB_004cc248
    MOV EBX,0x1                         ; 004cc243
    PUSH 0x0                            ; 004cc248
        ;   Label: LAB_004cc248
    PUSH 0x0                            ; 004cc24a
    MOV EDX,dword ptr [ESP + 0x30]      ; 004cc24c
    PUSH EDX                            ; 004cc250
    MOV ECX,dword ptr [ESP + 0x30]      ; 004cc251
    PUSH ECX                            ; 004cc255
    MOV EDI,dword ptr [ESP + 0x30]      ; 004cc256
    PUSH EDI                            ; 004cc25a
    PUSH ESI                            ; 004cc25b
    CALL FUN_00403250                   ; 004cc25c
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; undefined FUN_00403250()
    ADD ESP,0x18                        ; 004cc261
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cc264
    SUB EAX,ESI                         ; 004cc268
    INC EAX                             ; 004cc26a
    MOV dword ptr [ESP + 0x4],EAX       ; 004cc26b
    FILD dword ptr [ESP + 0x4]          ; 004cc26f
    FMUL float ptr [ESP + 0x2c]         ; 004cc273
    CALL FUN_005c03a0                   ; 004cc277
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 004cc27c
    MOV EBP,dword ptr [ESP]             ; 004cc27f
    TEST EBP,EBP                        ; 004cc282
    JG 0x004cc28e                       ; 004cc284
        ;   XREF to: 004cc28e (CONDITIONAL_JUMP)  ; LAB_004cc28e
    ADD ESP,0x8                         ; 004cc286
    POP EBP                             ; 004cc289
    POP EDI                             ; 004cc28a
    POP ESI                             ; 004cc28b
    POP EBX                             ; 004cc28c
    RET                                 ; 004cc28d
    PUSH EBX                            ; 004cc28e
        ;   Label: LAB_004cc28e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cc28f
    PUSH EAX                            ; 004cc293
    LEA EAX,[ESI + EBP*0x1]             ; 004cc294
    PUSH EAX                            ; 004cc297
    PUSH EDI                            ; 004cc298
    PUSH ESI                            ; 004cc299
    CALL FUN_004031c0                   ; 004cc29a
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004cc29f
    ADD ESP,0x8                         ; 004cc2a2
    POP EBP                             ; 004cc2a5
    POP EDI                             ; 004cc2a6
    POP ESI                             ; 004cc2a7
    POP EBX                             ; 004cc2a8
    RET                                 ; 004cc2a9

