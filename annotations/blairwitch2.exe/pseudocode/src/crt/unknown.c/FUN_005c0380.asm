; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0380(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c045c at 005c0513
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005bebb0
;   crt_unknown.c_FUN_005c045c
;   crt_unknown.c_FUN_005c0820
;   crt_unknown.c_FUN_005c0878
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0380
        ;   Label: crt_unknown.c_FUN_005c0380
    PUSH ESI                            ; 005c0381
    PUSH EDI                            ; 005c0382
    SUB ESP,0x200                       ; 005c0383
    MOV EDI,dword ptr [ESP + 0x210]     ; 005c0389
    PUSH 0x1                            ; 005c0390
    PUSH 0x0                            ; 005c0392
    PUSH EDI                            ; 005c0394
    CALL crt_unknown.c_FUN_005bebb0     ; 005c0395
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    MOV EBX,EAX                         ; 005c039a
    ADD ESP,0xc                         ; 005c039c
    CMP EAX,-0x1                        ; 005c039f
    JZ 0x005c044f                       ; 005c03a2
        ;   XREF to: 005c044f (CONDITIONAL_JUMP)  ; LAB_005c044f
    PUSH 0x2                            ; 005c03a8
    PUSH 0x0                            ; 005c03aa
    PUSH EDI                            ; 005c03ac
    CALL crt_unknown.c_FUN_005bebb0     ; 005c03ad
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    ADD ESP,0xc                         ; 005c03b2
    CMP EAX,-0x1                        ; 005c03b5
    JZ 0x005c044f                       ; 005c03b8
        ;   XREF to: 005c044f (CONDITIONAL_JUMP)  ; LAB_005c044f
    CMP EBX,EAX                         ; 005c03be
    JLE 0x005c0420                      ; 005c03c0
        ;   XREF to: 005c0420 (CONDITIONAL_JUMP)  ; LAB_005c0420
    PUSH EDI                            ; 005c03c2
    SUB EBX,EAX                         ; 005c03c3
    CALL crt_unknown.c_FUN_005c0820     ; 005c03c5
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0820()
    ADD ESP,0x4                         ; 005c03ca
    AND AH,0x7f                         ; 005c03cd
    PUSH EAX                            ; 005c03d0
    PUSH EDI                            ; 005c03d1
    CALL crt_unknown.c_FUN_005c0878     ; 005c03d2
        ;   XREF to: 005c0878 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0878()
    ADD ESP,0x8                         ; 005c03d7
    TEST EBX,EBX                        ; 005c03da
    JLE 0x005c044d                      ; 005c03dc
        ;   XREF to: 005c044d (CONDITIONAL_JUMP)  ; LAB_005c044d
    PUSH 0x200                          ; 005c03e2
    PUSH 0x0                            ; 005c03e7
    LEA EAX,[ESP + 0x8]                 ; 005c03e9
    PUSH EAX                            ; 005c03ed
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005c03ee
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c03f3
    CMP EBX,0x200                       ; 005c03f6
        ;   Label: LAB_005c03f6
    JLE 0x005c0405                      ; 005c03fc
        ;   XREF to: 005c0405 (CONDITIONAL_JUMP)  ; LAB_005c0405
    MOV ESI,0x200                       ; 005c03fe
    JMP 0x005c0407                      ; 005c0403
        ;   XREF to: 005c0407 (UNCONDITIONAL_JUMP)  ; LAB_005c0407
    MOV ESI,EBX                         ; 005c0405
        ;   Label: LAB_005c0405
    PUSH ESI                            ; 005c0407
        ;   Label: LAB_005c0407
    LEA EAX,[ESP + 0x4]                 ; 005c0408
    PUSH EAX                            ; 005c040c
    PUSH EDI                            ; 005c040d
    CALL crt_unknown.c_FUN_005c045c     ; 005c040e
        ;   XREF to: 005c045c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c045c()
    ADD ESP,0xc                         ; 005c0413
    TEST EAX,EAX                        ; 005c0416
    JL 0x005c044f                       ; 005c0418
        ;   XREF to: 005c044f (CONDITIONAL_JUMP)  ; LAB_005c044f
    SUB EBX,ESI                         ; 005c041a
    JNZ 0x005c03f6                      ; 005c041c
        ;   XREF to: 005c03f6 (CONDITIONAL_JUMP)  ; LAB_005c03f6
    JMP 0x005c044d                      ; 005c041e
        ;   XREF to: 005c044d (UNCONDITIONAL_JUMP)  ; LAB_005c044d
    PUSH 0x0                            ; 005c0420
        ;   Label: LAB_005c0420
    PUSH EBX                            ; 005c0422
    PUSH EDI                            ; 005c0423
    CALL crt_unknown.c_FUN_005bebb0     ; 005c0424
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bebb0()
    ADD ESP,0xc                         ; 005c0429
    PUSH EDI                            ; 005c042c
    MOV EBX,EAX                         ; 005c042d
    CALL crt_unknown.c_FUN_005c0820     ; 005c042f
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0820()
    ADD ESP,0x4                         ; 005c0434
    AND AH,0x7f                         ; 005c0437
    PUSH EAX                            ; 005c043a
    PUSH EDI                            ; 005c043b
    CALL crt_unknown.c_FUN_005c0878     ; 005c043c
        ;   XREF to: 005c0878 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0878()
    ADD ESP,0x8                         ; 005c0441
    CMP EBX,-0x1                        ; 005c0444
    JNZ 0x005c044d                      ; 005c0447
        ;   XREF to: 005c044d (CONDITIONAL_JUMP)  ; LAB_005c044d
    MOV EAX,EBX                         ; 005c0449
    JMP 0x005c044f                      ; 005c044b
        ;   XREF to: 005c044f (UNCONDITIONAL_JUMP)  ; LAB_005c044f
    XOR EAX,EAX                         ; 005c044d
        ;   Label: LAB_005c044d
    ADD ESP,0x200                       ; 005c044f
        ;   Label: LAB_005c044f
    POP EDI                             ; 005c0455
    POP ESI                             ; 005c0456
    POP EBX                             ; 005c0457
    RET                                 ; 005c0458

