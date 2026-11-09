; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ab480(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ab55c at 005ab613
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a9cf0
;   crt_unknown.c_FUN_005ab55c
;   crt_unknown.c_FUN_005ab920
;   crt_unknown.c_FUN_005ab978
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab480
        ;   Label: crt_unknown.c_FUN_005ab480
    PUSH ESI                            ; 005ab481
    PUSH EDI                            ; 005ab482
    SUB ESP,0x200                       ; 005ab483
    MOV EDI,dword ptr [ESP + 0x210]     ; 005ab489
    PUSH 0x1                            ; 005ab490
    PUSH 0x0                            ; 005ab492
    PUSH EDI                            ; 005ab494
    CALL crt_unknown.c_FUN_005a9cf0     ; 005ab495
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9cf0()
    MOV EBX,EAX                         ; 005ab49a
    ADD ESP,0xc                         ; 005ab49c
    CMP EAX,-0x1                        ; 005ab49f
    JZ 0x005ab54f                       ; 005ab4a2
        ;   XREF to: 005ab54f (CONDITIONAL_JUMP)  ; LAB_005ab54f
    PUSH 0x2                            ; 005ab4a8
    PUSH 0x0                            ; 005ab4aa
    PUSH EDI                            ; 005ab4ac
    CALL crt_unknown.c_FUN_005a9cf0     ; 005ab4ad
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9cf0()
    ADD ESP,0xc                         ; 005ab4b2
    CMP EAX,-0x1                        ; 005ab4b5
    JZ 0x005ab54f                       ; 005ab4b8
        ;   XREF to: 005ab54f (CONDITIONAL_JUMP)  ; LAB_005ab54f
    CMP EBX,EAX                         ; 005ab4be
    JLE 0x005ab520                      ; 005ab4c0
        ;   XREF to: 005ab520 (CONDITIONAL_JUMP)  ; LAB_005ab520
    PUSH EDI                            ; 005ab4c2
    SUB EBX,EAX                         ; 005ab4c3
    CALL crt_unknown.c_FUN_005ab920     ; 005ab4c5
        ;   XREF to: 005ab920 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab920()
    ADD ESP,0x4                         ; 005ab4ca
    AND AH,0x7f                         ; 005ab4cd
    PUSH EAX                            ; 005ab4d0
    PUSH EDI                            ; 005ab4d1
    CALL crt_unknown.c_FUN_005ab978     ; 005ab4d2
        ;   XREF to: 005ab978 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab978()
    ADD ESP,0x8                         ; 005ab4d7
    TEST EBX,EBX                        ; 005ab4da
    JLE 0x005ab54d                      ; 005ab4dc
        ;   XREF to: 005ab54d (CONDITIONAL_JUMP)  ; LAB_005ab54d
    PUSH 0x200                          ; 005ab4e2
    PUSH 0x0                            ; 005ab4e7
    LEA EAX,[ESP + 0x8]                 ; 005ab4e9
    PUSH EAX                            ; 005ab4ed
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005ab4ee
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ab4f3
    CMP EBX,0x200                       ; 005ab4f6
        ;   Label: LAB_005ab4f6
    JLE 0x005ab505                      ; 005ab4fc
        ;   XREF to: 005ab505 (CONDITIONAL_JUMP)  ; LAB_005ab505
    MOV ESI,0x200                       ; 005ab4fe
    JMP 0x005ab507                      ; 005ab503
        ;   XREF to: 005ab507 (UNCONDITIONAL_JUMP)  ; LAB_005ab507
    MOV ESI,EBX                         ; 005ab505
        ;   Label: LAB_005ab505
    PUSH ESI                            ; 005ab507
        ;   Label: LAB_005ab507
    LEA EAX,[ESP + 0x4]                 ; 005ab508
    PUSH EAX                            ; 005ab50c
    PUSH EDI                            ; 005ab50d
    CALL crt_unknown.c_FUN_005ab55c     ; 005ab50e
        ;   XREF to: 005ab55c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab55c()
    ADD ESP,0xc                         ; 005ab513
    TEST EAX,EAX                        ; 005ab516
    JL 0x005ab54f                       ; 005ab518
        ;   XREF to: 005ab54f (CONDITIONAL_JUMP)  ; LAB_005ab54f
    SUB EBX,ESI                         ; 005ab51a
    JNZ 0x005ab4f6                      ; 005ab51c
        ;   XREF to: 005ab4f6 (CONDITIONAL_JUMP)  ; LAB_005ab4f6
    JMP 0x005ab54d                      ; 005ab51e
        ;   XREF to: 005ab54d (UNCONDITIONAL_JUMP)  ; LAB_005ab54d
    PUSH 0x0                            ; 005ab520
        ;   Label: LAB_005ab520
    PUSH EBX                            ; 005ab522
    PUSH EDI                            ; 005ab523
    CALL crt_unknown.c_FUN_005a9cf0     ; 005ab524
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9cf0()
    ADD ESP,0xc                         ; 005ab529
    PUSH EDI                            ; 005ab52c
    MOV EBX,EAX                         ; 005ab52d
    CALL crt_unknown.c_FUN_005ab920     ; 005ab52f
        ;   XREF to: 005ab920 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab920()
    ADD ESP,0x4                         ; 005ab534
    AND AH,0x7f                         ; 005ab537
    PUSH EAX                            ; 005ab53a
    PUSH EDI                            ; 005ab53b
    CALL crt_unknown.c_FUN_005ab978     ; 005ab53c
        ;   XREF to: 005ab978 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab978()
    ADD ESP,0x8                         ; 005ab541
    CMP EBX,-0x1                        ; 005ab544
    JNZ 0x005ab54d                      ; 005ab547
        ;   XREF to: 005ab54d (CONDITIONAL_JUMP)  ; LAB_005ab54d
    MOV EAX,EBX                         ; 005ab549
    JMP 0x005ab54f                      ; 005ab54b
        ;   XREF to: 005ab54f (UNCONDITIONAL_JUMP)  ; LAB_005ab54f
    XOR EAX,EAX                         ; 005ab54d
        ;   Label: LAB_005ab54d
    ADD ESP,0x200                       ; 005ab54f
        ;   Label: LAB_005ab54f
    POP EDI                             ; 005ab555
    POP ESI                             ; 005ab556
    POP EBX                             ; 005ab557
    RET                                 ; 005ab558

