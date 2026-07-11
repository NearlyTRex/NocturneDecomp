; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3320(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e85b0 at 004e88e2
;
; Called Functions:
;   FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3320
        ;   Label: FUN_004e3320
    PUSH ESI                            ; 004e3321
    PUSH EDI                            ; 004e3322
    PUSH EBP                            ; 004e3323
    SUB ESP,0xc                         ; 004e3324
    MOV EBP,dword ptr [ESP + 0x20]      ; 004e3327
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e332b
    MOV EDI,dword ptr [EAX + 0x10]      ; 004e332f
    MOV EAX,dword ptr [EAX + 0x14]      ; 004e3332
    MOV dword ptr [ESP],EAX             ; 004e3335
    TEST EAX,EAX                        ; 004e3338
    JLE 0x004e3386                      ; 004e333a
        ;   XREF to: 004e3386 (CONDITIONAL_JUMP)  ; LAB_004e3386
    XOR EAX,EAX                         ; 004e333c
    MOV dword ptr [ESP + 0x8],EAX       ; 004e333e
    MOV EAX,dword ptr [ESP]             ; 004e3342
    SHL EAX,0x2                         ; 004e3345
    MOV dword ptr [ESP + 0x4],EAX       ; 004e3348
    XOR EBX,EBX                         ; 004e334c
        ;   Label: LAB_004e334c
    TEST EDI,EDI                        ; 004e334e
    JLE 0x004e3373                      ; 004e3350
        ;   XREF to: 004e3373 (CONDITIONAL_JUMP)  ; LAB_004e3373
    MOV ESI,dword ptr [ESP + 0x8]       ; 004e3352
    ADD ESI,dword ptr [ESP + 0x24]      ; 004e3356
    PUSH 0x4                            ; 004e335a
        ;   Label: LAB_004e335a
    PUSH EBP                            ; 004e335c
    ADD ESI,0x80                        ; 004e335d
    INC EBX                             ; 004e3363
    CALL FUN_004e2ac0                   ; 004e3364
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e3369
    MOV dword ptr [ESI + -0x80],EAX     ; 004e336c
    CMP EBX,EDI                         ; 004e336f
    JL 0x004e335a                       ; 004e3371
        ;   XREF to: 004e335a (CONDITIONAL_JUMP)  ; LAB_004e335a
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e3373
        ;   Label: LAB_004e3373
    ADD ECX,0x4                         ; 004e3377
    MOV EBX,dword ptr [ESP + 0x4]       ; 004e337a
    MOV dword ptr [ESP + 0x8],ECX       ; 004e337e
    CMP ECX,EBX                         ; 004e3382
    JL 0x004e334c                       ; 004e3384
        ;   XREF to: 004e334c (CONDITIONAL_JUMP)  ; LAB_004e334c
    MOV ESI,dword ptr [ESP]             ; 004e3386
        ;   Label: LAB_004e3386
    CMP ESI,0x20                        ; 004e3389
    JGE 0x004e33c3                      ; 004e338c
        ;   XREF to: 004e33c3 (CONDITIONAL_JUMP)  ; LAB_004e33c3
    SHL ESI,0x2                         ; 004e338e
    PUSH 0x4                            ; 004e3391
        ;   Label: LAB_004e3391
    PUSH EBP                            ; 004e3393
    CALL FUN_004e2ac0                   ; 004e3394
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e3399
    MOV EBX,EAX                         ; 004e339c
    XOR EAX,EAX                         ; 004e339e
    TEST EDI,EDI                        ; 004e33a0
    JLE 0x004e33b8                      ; 004e33a2
        ;   XREF to: 004e33b8 (CONDITIONAL_JUMP)  ; LAB_004e33b8
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e33a4
    ADD EDX,ESI                         ; 004e33a8
    ADD EDX,0x80                        ; 004e33aa
        ;   Label: LAB_004e33aa
    INC EAX                             ; 004e33b0
    MOV dword ptr [EDX + -0x80],EBX     ; 004e33b1
    CMP EAX,EDI                         ; 004e33b4
    JL 0x004e33aa                       ; 004e33b6
        ;   XREF to: 004e33aa (CONDITIONAL_JUMP)  ; LAB_004e33aa
    ADD ESI,0x4                         ; 004e33b8
        ;   Label: LAB_004e33b8
    CMP ESI,0x80                        ; 004e33bb
    JL 0x004e3391                       ; 004e33c1
        ;   XREF to: 004e3391 (CONDITIONAL_JUMP)  ; LAB_004e3391
    ADD ESP,0xc                         ; 004e33c3
        ;   Label: LAB_004e33c3
    POP EBP                             ; 004e33c6
    POP EDI                             ; 004e33c7
    POP ESI                             ; 004e33c8
    POP EBX                             ; 004e33c9
    RET                                 ; 004e33ca

