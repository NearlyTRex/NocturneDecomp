; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a33b0(undefined4 *param_1)
;
;
; XREF[2]:
;   crt_stdio.c_fread_FUN_005a3890 at 005a39e3
;   crt_unknown.c_FUN_005a3380 at 005a3386
;
; Called Functions:
;   crt_unknown.c_FUN_005a9310
;   crt_unknown.c_FUN_005a93bc
;   crt_unknown.c_FUN_005a9410
;   crt_unknown.c_FUN_005a9440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a33b0
        ;   Label: crt_unknown.c_FUN_005a33b0
    PUSH ESI                            ; 005a33b1
    PUSH EDI                            ; 005a33b2
    PUSH EBP                            ; 005a33b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a33b4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a33b8
    CMP dword ptr [EAX + 0x8],0x0       ; 005a33bb
    JNZ 0x005a33ca                      ; 005a33bf
        ;   XREF to: 005a33ca (CONDITIONAL_JUMP)  ; LAB_005a33ca
    PUSH EBX                            ; 005a33c1
    CALL crt_unknown.c_FUN_005a9310     ; 005a33c2
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9310()
    ADD ESP,0x4                         ; 005a33c7
    MOV AH,byte ptr [EBX + 0xd]         ; 005a33ca
        ;   Label: LAB_005a33ca
    TEST AH,0x20                        ; 005a33cd
    JZ 0x005a33e4                       ; 005a33d0
        ;   XREF to: 005a33e4 (CONDITIONAL_JUMP)  ; LAB_005a33e4
    TEST AH,0x6                         ; 005a33d2
    JZ 0x005a33e4                       ; 005a33d5
        ;   XREF to: 005a33e4 (CONDITIONAL_JUMP)  ; LAB_005a33e4
    PUSH 0x2000                         ; 005a33d7
    CALL crt_unknown.c_FUN_005a93bc     ; 005a33dc
        ;   XREF to: 005a93bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a93bc()
    ADD ESP,0x4                         ; 005a33e1
    MOV DH,byte ptr [EBX + 0xc]         ; 005a33e4
        ;   Label: LAB_005a33e4
    AND DH,0xfb                         ; 005a33e7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a33ea
    MOV byte ptr [EBX + 0xc],DH         ; 005a33ed
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a33f0
    MOV dword ptr [EBX],EAX             ; 005a33f3
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a33f5
    AND EAX,0x2400                      ; 005a33f8
    CMP EAX,0x2400                      ; 005a33fd
    JNZ 0x005a3427                      ; 005a3402
        ;   XREF to: 005a3427 (CONDITIONAL_JUMP)  ; LAB_005a3427
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a3404
    TEST ECX,ECX                        ; 005a3407
    JNZ 0x005a3427                      ; 005a3409
        ;   XREF to: 005a3427 (CONDITIONAL_JUMP)  ; LAB_005a3427
    MOV dword ptr [EBX + 0x4],ECX       ; 005a340b
    CALL crt_unknown.c_FUN_005a9410     ; 005a340e
        ;   XREF to: 005a9410 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9410()
    MOV EDX,EAX                         ; 005a3413
    CMP EAX,-0x1                        ; 005a3415
    JZ 0x005a344a                       ; 005a3418
        ;   XREF to: 005a344a (CONDITIONAL_JUMP)  ; LAB_005a344a
    MOV EAX,dword ptr [EBX]             ; 005a341a
    MOV byte ptr [EAX],DL               ; 005a341c
    MOV dword ptr [EBX + 0x4],0x1       ; 005a341e
    JMP 0x005a346f                      ; 005a3425
        ;   XREF to: 005a346f (UNCONDITIONAL_JUMP)  ; LAB_005a346f
    TEST byte ptr [EBX + 0xd],0x4       ; 005a3427
        ;   Label: LAB_005a3427
    JZ 0x005a3434                       ; 005a342b
        ;   XREF to: 005a3434 (CONDITIONAL_JUMP)  ; LAB_005a3434
    MOV EAX,0x1                         ; 005a342d
    JMP 0x005a3437                      ; 005a3432
        ;   XREF to: 005a3437 (UNCONDITIONAL_JUMP)  ; LAB_005a3437
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a3434
        ;   Label: LAB_005a3434
    PUSH EAX                            ; 005a3437
        ;   Label: LAB_005a3437
    MOV ESI,dword ptr [EBX]             ; 005a3438
    PUSH ESI                            ; 005a343a
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a343b
    PUSH EDI                            ; 005a343e
    CALL crt_unknown.c_FUN_005a9440     ; 005a343f
        ;   XREF to: 005a9440 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9440()
    ADD ESP,0xc                         ; 005a3444
    MOV dword ptr [EBX + 0x4],EAX       ; 005a3447
    MOV EBP,dword ptr [EBX + 0x4]       ; 005a344a
        ;   Label: LAB_005a344a
    TEST EBP,EBP                        ; 005a344d
    JG 0x005a346f                       ; 005a344f
        ;   XREF to: 005a346f (CONDITIONAL_JUMP)  ; LAB_005a346f
    JNZ 0x005a345f                      ; 005a3451
        ;   XREF to: 005a345f (CONDITIONAL_JUMP)  ; LAB_005a345f
    OR byte ptr [EBX + 0xc],0x10        ; 005a3453
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a3457
    POP EBP                             ; 005a345a
    POP EDI                             ; 005a345b
    POP ESI                             ; 005a345c
    POP EBX                             ; 005a345d
    RET                                 ; 005a345e
    MOV CH,byte ptr [EBX + 0xc]         ; 005a345f
        ;   Label: LAB_005a345f
    MOV dword ptr [EBX + 0x4],0x0       ; 005a3462
    OR CH,0x20                          ; 005a3469
    MOV byte ptr [EBX + 0xc],CH         ; 005a346c
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a346f
        ;   Label: LAB_005a346f
    POP EBP                             ; 005a3472
    POP EDI                             ; 005a3473
    POP ESI                             ; 005a3474
    POP EBX                             ; 005a3475
    RET                                 ; 005a3476

