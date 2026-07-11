; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044d1f0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_0050aee0 at 0050b1de
;
; Called Functions:
;   FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d1f0
        ;   Label: FUN_0044d1f0
    PUSH ESI                            ; 0044d1f1
    PUSH EDI                            ; 0044d1f2
    SUB ESP,0x18                        ; 0044d1f3
    MOV EBX,dword ptr [ESP + 0x28]      ; 0044d1f6
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044d1fa
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044d1fe
    MOV EDI,dword ptr [ESP + 0x38]      ; 0044d202
    LEA EAX,[EBX + 0x24]                ; 0044d206
    FLD float ptr [EAX]                 ; 0044d209
    FSUB float ptr [EDX]                ; 0044d20b
    FSTP float ptr [ESP]                ; 0044d20d
    FLD float ptr [EAX + 0x4]           ; 0044d210
    FSUB float ptr [EDX + 0x4]          ; 0044d213
    FSTP float ptr [ESP + 0x4]          ; 0044d216
    FLD float ptr [EAX + 0x8]           ; 0044d21a
    MOV EAX,ESP                         ; 0044d21d
    PUSH EAX                            ; 0044d21f
    LEA EAX,[ESP + 0x10]                ; 0044d220
    PUSH EAX                            ; 0044d224
    FSUB float ptr [EDX + 0x8]          ; 0044d225
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044d228
    PUSH EDX                            ; 0044d22c
    FSTP float ptr [ESP + 0x14]         ; 0044d22d
    CALL FUN_0044daa0                   ; 0044d231
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044daa0()
    MOV EDX,EAX                         ; 0044d236
    LEA EAX,[ESP + 0xc]                 ; 0044d238
    ADD ESP,0xc                         ; 0044d23c
    CMP EAX,EDX                         ; 0044d23f
    JNZ 0x0044d2a2                      ; 0044d241
        ;   XREF to: 0044d2a2 (CONDITIONAL_JUMP)  ; LAB_0044d2a2
    FLD float ptr [ESP]                 ; 0044d243
        ;   Label: LAB_0044d243
    FADD float ptr [EBX + 0x30]         ; 0044d246
    FCOMP float ptr [ESI]               ; 0044d249
    FNSTSW AX                           ; 0044d24b
    SAHF                                ; 0044d24d
    JC 0x0044d299                       ; 0044d24e
        ;   XREF to: 0044d299 (CONDITIONAL_JUMP)  ; LAB_0044d299
    FLD float ptr [ESP + 0x4]           ; 0044d250
    FADD float ptr [EBX + 0x30]         ; 0044d254
    FCOMP float ptr [ESI + 0x4]         ; 0044d257
    FNSTSW AX                           ; 0044d25a
    SAHF                                ; 0044d25c
    JC 0x0044d299                       ; 0044d25d
        ;   XREF to: 0044d299 (CONDITIONAL_JUMP)  ; LAB_0044d299
    FLD float ptr [ESP + 0x8]           ; 0044d25f
    FADD float ptr [EBX + 0x30]         ; 0044d263
    FCOMP float ptr [ESI + 0x8]         ; 0044d266
    FNSTSW AX                           ; 0044d269
    SAHF                                ; 0044d26b
    JC 0x0044d299                       ; 0044d26c
        ;   XREF to: 0044d299 (CONDITIONAL_JUMP)  ; LAB_0044d299
    FLD float ptr [ESP]                 ; 0044d26e
    FSUB float ptr [EBX + 0x30]         ; 0044d271
    FCOMP float ptr [EDI]               ; 0044d274
    FNSTSW AX                           ; 0044d276
    SAHF                                ; 0044d278
    JA 0x0044d299                       ; 0044d279
        ;   XREF to: 0044d299 (CONDITIONAL_JUMP)  ; LAB_0044d299
    FLD float ptr [ESP + 0x4]           ; 0044d27b
    FSUB float ptr [EBX + 0x30]         ; 0044d27f
    FCOMP float ptr [EDI + 0x4]         ; 0044d282
    FNSTSW AX                           ; 0044d285
    SAHF                                ; 0044d287
    JA 0x0044d299                       ; 0044d288
        ;   XREF to: 0044d299 (CONDITIONAL_JUMP)  ; LAB_0044d299
    FLD float ptr [ESP + 0x8]           ; 0044d28a
    FSUB float ptr [EBX + 0x30]         ; 0044d28e
    FCOMP float ptr [EDI + 0x8]         ; 0044d291
    FNSTSW AX                           ; 0044d294
    SAHF                                ; 0044d296
    JBE 0x0044d2b7                      ; 0044d297
        ;   XREF to: 0044d2b7 (CONDITIONAL_JUMP)  ; LAB_0044d2b7
    XOR EAX,EAX                         ; 0044d299
        ;   Label: LAB_0044d299
    ADD ESP,0x18                        ; 0044d29b
    POP EDI                             ; 0044d29e
    POP ESI                             ; 0044d29f
    POP EBX                             ; 0044d2a0
    RET                                 ; 0044d2a1
    MOV EAX,dword ptr [EDX]             ; 0044d2a2
        ;   Label: LAB_0044d2a2
    MOV dword ptr [ESP],EAX             ; 0044d2a4
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044d2a7
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d2aa
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044d2ae
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d2b1
    JMP 0x0044d243                      ; 0044d2b5
        ;   XREF to: 0044d243 (UNCONDITIONAL_JUMP)  ; LAB_0044d243
    MOV EAX,0x1                         ; 0044d2b7
        ;   Label: LAB_0044d2b7
    ADD ESP,0x18                        ; 0044d2bc
    POP EDI                             ; 0044d2bf
    POP ESI                             ; 0044d2c0
    POP EBX                             ; 0044d2c1
    RET                                 ; 0044d2c2

