; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c4260(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   FUN_00496920 at 00496a5f
;   FUN_004cc2b0 at 004cc705
;   FUN_004d8700 at 004d89ef
;   FUN_004d8a90 at 004d8da0
;   FUN_004fae10 at 004fb188
;   FUN_005439b0 at 00543b0e
;
; Called Functions:
;   FUN_004c4030
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004c4260
        ;   Label: FUN_004c4260
    PUSH EBP                            ; 004c4261
    SUB ESP,0x4                         ; 004c4262
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c4265
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c4269
    IMUL EAX,dword ptr [ESP + 0x20]     ; 004c426d
    PUSH EAX                            ; 004c4272
    PUSH 0x0                            ; 004c4273
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c4275
    PUSH ECX                            ; 004c4279
    CALL FUN_005bfb70                   ; 004c427a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 004c427f
    TEST EDI,EDI                        ; 004c4282
    JZ 0x004c42e1                       ; 004c4284
        ;   XREF to: 004c42e1 (CONDITIONAL_JUMP)  ; LAB_004c42e1
    PUSH ESI                            ; 004c4286
    PUSH EBX                            ; 004c4287
    MOV ESI,0x2f                        ; 004c4288
    MOV EBP,dword ptr [ESP + 0x24]      ; 004c428d
    XOR EBX,EBX                         ; 004c4291
    TEST EBP,EBP                        ; 004c4293
    JLE 0x004c42d7                      ; 004c4295
        ;   XREF to: 004c42d7 (CONDITIONAL_JUMP)  ; LAB_004c42d7
    MOV EBP,dword ptr [ESP + 0x28]      ; 004c4297
        ;   Label: LAB_004c4297
    IMUL EBP,EBX                        ; 004c429b
    LEA EAX,[ESP + 0x8]                 ; 004c429e
    PUSH EAX                            ; 004c42a2
    PUSH ESI                            ; 004c42a3
    MOV ECX,dword ptr [ESP + 0x34]      ; 004c42a4
    PUSH ECX                            ; 004c42a8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c42a9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c42ad
    PUSH EAX                            ; 004c42b1
    ADD EBP,EDX                         ; 004c42b2
    PUSH EBP                            ; 004c42b4
    PUSH EDI                            ; 004c42b5
    MOV EDX,dword ptr [ESP + 0x30]      ; 004c42b6
    PUSH EDX                            ; 004c42ba
    CALL FUN_004c4030                   ; 004c42bb
        ;   XREF to: 004c4030 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4030()
    ADD ESP,0x1c                        ; 004c42c0
    ADD EDI,dword ptr [ESP + 0x8]       ; 004c42c3
    CMP EAX,0x3                         ; 004c42c7
    JNZ 0x004c42e5                      ; 004c42ca
        ;   XREF to: 004c42e5 (CONDITIONAL_JUMP)  ; LAB_004c42e5
    INC EBX                             ; 004c42cc
    AND SI,0xffef                       ; 004c42cd
    CMP EBX,dword ptr [ESP + 0x24]      ; 004c42d1
    JL 0x004c4297                       ; 004c42d5
        ;   XREF to: 004c4297 (CONDITIONAL_JUMP)  ; LAB_004c4297
    MOV EAX,EBX                         ; 004c42d7
        ;   Label: LAB_004c42d7
    POP EBX                             ; 004c42d9
    POP ESI                             ; 004c42da
    ADD ESP,0x4                         ; 004c42db
        ;   Label: LAB_004c42db
    POP EBP                             ; 004c42de
    POP EDI                             ; 004c42df
    RET                                 ; 004c42e0
    XOR EAX,EAX                         ; 004c42e1
        ;   Label: LAB_004c42e1
    JMP 0x004c42db                      ; 004c42e3
        ;   XREF to: 004c42db (UNCONDITIONAL_JUMP)  ; LAB_004c42db
    TEST EAX,EAX                        ; 004c42e5
        ;   Label: LAB_004c42e5
    JNZ 0x004c42fa                      ; 004c42e7
        ;   XREF to: 004c42fa (CONDITIONAL_JUMP)  ; LAB_004c42fa
    CMP byte ptr [EBP],0x0              ; 004c42e9
    JZ 0x004c42d7                       ; 004c42ed
        ;   XREF to: 004c42d7 (CONDITIONAL_JUMP)  ; LAB_004c42d7
    INC EBX                             ; 004c42ef
    MOV EAX,EBX                         ; 004c42f0
    POP EBX                             ; 004c42f2
    POP ESI                             ; 004c42f3
    ADD ESP,0x4                         ; 004c42f4
    POP EBP                             ; 004c42f7
    POP EDI                             ; 004c42f8
    RET                                 ; 004c42f9
    INC EBX                             ; 004c42fa
        ;   Label: LAB_004c42fa
    CMP EBX,dword ptr [ESP + 0x24]      ; 004c42fb
    JL 0x004c4297                       ; 004c42ff
        ;   XREF to: 004c4297 (CONDITIONAL_JUMP)  ; LAB_004c4297
    MOV EAX,EBX                         ; 004c4301
    POP EBX                             ; 004c4303
    POP ESI                             ; 004c4304
    ADD ESP,0x4                         ; 004c4305
    POP EBP                             ; 004c4308
    POP EDI                             ; 004c4309
    RET                                 ; 004c430a

