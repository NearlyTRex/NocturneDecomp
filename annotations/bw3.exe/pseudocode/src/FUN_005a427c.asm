; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a427c(undefined4 param_1,undefined1 param_2,uint param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[2]:
;   FUN_005a4390 at 005a43d6
;   FUN_005a4484 at 005a44f8
;
; Called Functions:
;   FUN_005a35a0
;   FUN_005a457c
;   FUN_005a9950
;   FUN_005aa0c4
;   FUN_005aa340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a427c
        ;   Label: FUN_005a427c
    PUSH ESI                            ; 005a427d
    PUSH EDI                            ; 005a427e
    PUSH EBP                            ; 005a427f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a4280
    AND byte ptr [EBX + 0xc],0xfc       ; 005a4284
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a4288
    MOV EDX,dword ptr [EBX + 0xc]       ; 005a428c
    OR EDX,EAX                          ; 005a428f
    XOR EAX,EAX                         ; 005a4291
    MOV AL,byte ptr [ESP + 0x18]        ; 005a4293
    PUSH EAX                            ; 005a4297
    MOV dword ptr [EBX + 0xc],EDX       ; 005a4298
    CALL FUN_005a35a0                   ; 005a429b
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a35a0()
    ADD ESP,0x4                         ; 005a42a0
    CMP AL,0x72                         ; 005a42a3
    JNZ 0x005a42d5                      ; 005a42a5
        ;   XREF to: 005a42d5 (CONDITIONAL_JUMP)  ; LAB_005a42d5
    MOV CH,byte ptr [ESP + 0x1c]        ; 005a42a7
    XOR EAX,EAX                         ; 005a42ab
    TEST CH,0x2                         ; 005a42ad
    JZ 0x005a42b7                       ; 005a42b0
        ;   XREF to: 005a42b7 (CONDITIONAL_JUMP)  ; LAB_005a42b7
    MOV EAX,0x2                         ; 005a42b2
    TEST byte ptr [ESP + 0x1c],0x40     ; 005a42b7
        ;   Label: LAB_005a42b7
    JZ 0x005a42c3                       ; 005a42bc
        ;   XREF to: 005a42c3 (CONDITIONAL_JUMP)  ; LAB_005a42c3
    OR AH,0x2                           ; 005a42be
    JMP 0x005a42c6                      ; 005a42c1
        ;   XREF to: 005a42c6 (UNCONDITIONAL_JUMP)  ; LAB_005a42c6
    OR AH,0x1                           ; 005a42c3
        ;   Label: LAB_005a42c3
    PUSH 0x0                            ; 005a42c6
        ;   Label: LAB_005a42c6
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a42c8
    PUSH EDI                            ; 005a42cc
    PUSH EAX                            ; 005a42cd
    MOV EBP,dword ptr [ESP + 0x20]      ; 005a42ce
    PUSH EBP                            ; 005a42d2
    JMP 0x005a4311                      ; 005a42d3
        ;   XREF to: 005a4311 (UNCONDITIONAL_JUMP)  ; LAB_005a4311
    MOV DL,byte ptr [ESP + 0x1c]        ; 005a42d5
        ;   Label: LAB_005a42d5
    TEST DL,0x1                         ; 005a42d9
    SETNZ AL                            ; 005a42dc
    AND EAX,0xff                        ; 005a42df
    ADD EAX,0x21                        ; 005a42e4
    TEST DL,0x80                        ; 005a42e7
    JZ 0x005a42f0                       ; 005a42ea
        ;   XREF to: 005a42f0 (CONDITIONAL_JUMP)  ; LAB_005a42f0
    OR AL,0x10                          ; 005a42ec
    JMP 0x005a42f2                      ; 005a42ee
        ;   XREF to: 005a42f2 (UNCONDITIONAL_JUMP)  ; LAB_005a42f2
    OR AL,0x40                          ; 005a42f0
        ;   Label: LAB_005a42f0
    TEST byte ptr [ESP + 0x1c],0x40     ; 005a42f2
        ;   Label: LAB_005a42f2
    JZ 0x005a42fe                       ; 005a42f7
        ;   XREF to: 005a42fe (CONDITIONAL_JUMP)  ; LAB_005a42fe
    OR AH,0x2                           ; 005a42f9
    JMP 0x005a4301                      ; 005a42fc
        ;   XREF to: 005a4301 (UNCONDITIONAL_JUMP)  ; LAB_005a4301
    OR AH,0x1                           ; 005a42fe
        ;   Label: LAB_005a42fe
    PUSH 0x180                          ; 005a4301
        ;   Label: LAB_005a4301
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a4306
    PUSH ECX                            ; 005a430a
    PUSH EAX                            ; 005a430b
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a430c
    PUSH ESI                            ; 005a4310
    CALL FUN_005aa0c4                   ; 005a4311
        ;   XREF to: 005aa0c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa0c4()
        ;   Label: LAB_005a4311
    ADD ESP,0x10                        ; 005a4316
    MOV dword ptr [EBX + 0x10],EAX      ; 005a4319
    CMP dword ptr [EBX + 0x10],-0x1     ; 005a431c
    JNZ 0x005a4332                      ; 005a4320
        ;   XREF to: 005a4332 (CONDITIONAL_JUMP)  ; LAB_005a4332
    PUSH EBX                            ; 005a4322
    CALL FUN_005a9950                   ; 005a4323
        ;   XREF to: 005a9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9950()
    ADD ESP,0x4                         ; 005a4328
    XOR EAX,EAX                         ; 005a432b
    POP EBP                             ; 005a432d
    POP EDI                             ; 005a432e
    POP ESI                             ; 005a432f
    POP EBX                             ; 005a4330
    RET                                 ; 005a4331
    MOV dword ptr [EBX + 0x4],0x0       ; 005a4332
        ;   Label: LAB_005a4332
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a4339
    MOV dword ptr [EBX + 0x14],0x0      ; 005a433c
    MOV dword ptr [EAX + 0xc],0x0       ; 005a4343
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a434a
    MOV EDX,dword ptr [ESP + 0x20]      ; 005a434d
    MOV dword ptr [EAX + 0x10],EDX      ; 005a4351
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a4354
    MOV dword ptr [EAX + 0x15],0x0      ; 005a4357
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a435e
    MOV DH,byte ptr [ESP + 0x1c]        ; 005a4361
    MOV dword ptr [EAX + 0x8],0x0       ; 005a4365
    TEST DH,0x80                        ; 005a436c
    JZ 0x005a437e                       ; 005a436f
        ;   XREF to: 005a437e (CONDITIONAL_JUMP)  ; LAB_005a437e
    PUSH 0x2                            ; 005a4371
    PUSH 0x0                            ; 005a4373
    PUSH EBX                            ; 005a4375
    CALL FUN_005a457c                   ; 005a4376
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined FUN_005a457c()
    ADD ESP,0xc                         ; 005a437b
    PUSH EBX                            ; 005a437e
        ;   Label: LAB_005a437e
    CALL FUN_005aa340                   ; 005a437f
        ;   XREF to: 005aa340 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa340()
    ADD ESP,0x4                         ; 005a4384
    MOV EAX,EBX                         ; 005a4387
    POP EBP                             ; 005a4389
    POP EDI                             ; 005a438a
    POP ESI                             ; 005a438b
    POP EBX                             ; 005a438c
    RET                                 ; 005a438d

