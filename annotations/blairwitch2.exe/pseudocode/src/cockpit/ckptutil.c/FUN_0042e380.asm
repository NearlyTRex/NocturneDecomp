; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042e380(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e380
        ;   Label: cockpit_ckptutil.c_FUN_0042e380
    PUSH ESI                            ; 0042e381
    PUSH EDI                            ; 0042e382
    PUSH EBP                            ; 0042e383
    SUB ESP,0x104                       ; 0042e384
    CMP dword ptr [ESP + 0x118],0x0     ; 0042e38a
    JZ 0x0042e4ad                       ; 0042e392
        ;   XREF to: 0042e4ad (CONDITIONAL_JUMP)  ; LAB_0042e4ad
    MOV ECX,0xfb                        ; 0042e398
    MOV EBX,dword ptr [ESP + 0x120]     ; 0042e39d
    XOR EDI,EDI                         ; 0042e3a4
    MOV dword ptr [ESP + 0x100],ECX     ; 0042e3a6
    TEST EBX,EBX                        ; 0042e3ad
    JLE 0x0042e4ad                      ; 0042e3af
        ;   XREF to: 0042e4ad (CONDITIONAL_JUMP)  ; LAB_0042e4ad
    MOV EBP,dword ptr [ESP + 0x124]     ; 0042e3b5
    IMUL EBP,dword ptr [ESP + 0x128]    ; 0042e3bc
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0042e3c4
    DEC EBP                             ; 0042e3cb
    MOV AX,word ptr [ESI + 0x2]         ; 0042e3cc
        ;   Label: LAB_0042e3cc
    MOV EBX,dword ptr [ESP + 0x124]     ; 0042e3d0
    MOVSX EDX,AX                        ; 0042e3d7
    IMUL EDX,EBX                        ; 0042e3da
    MOV AX,word ptr [ESI]               ; 0042e3dd
    MOVSX EBX,AX                        ; 0042e3e0
    ADD EBX,EDX                         ; 0042e3e3
    TEST EBX,EBX                        ; 0042e3e5
    JL 0x0042e3ed                       ; 0042e3e7
        ;   XREF to: 0042e3ed (CONDITIONAL_JUMP)  ; LAB_0042e3ed
    CMP EBX,EBP                         ; 0042e3e9
    JLE 0x0042e420                      ; 0042e3eb
        ;   XREF to: 0042e420 (CONDITIONAL_JUMP)  ; LAB_0042e420
    PUSH EDI                            ; 0042e3ed
        ;   Label: LAB_0042e3ed
    PUSH 0x5cd69f                       ; 0042e3ee
    LEA EAX,[ESP + 0x8]                 ; 0042e3f3
    PUSH EAX                            ; 0042e3f7
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042e3f8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5cd6ba                    ; 0042e3fd
    ADD ESP,0xc                         ; 0042e402
    MOV [0x01d046a0],EAX                ; 0042e405 | DAT_01d046a0
    MOV EAX,ESP                         ; 0042e40a
    MOV EDX,0x578                       ; 0042e40c
    PUSH EAX                            ; 0042e411
    MOV dword ptr [0x01d046a4],EDX      ; 0042e412 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042e418
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e41d
    ADD EBX,dword ptr [ESP + 0x118]     ; 0042e420
        ;   Label: LAB_0042e420
    MOV AL,byte ptr [ESP + 0x100]       ; 0042e427
    MOV byte ptr [EBX],AL               ; 0042e42e
    MOV AX,word ptr [ESI + 0x6]         ; 0042e430
    ADD EAX,EAX                         ; 0042e434
    SAR AX,0x1                          ; 0042e436
    MOV EDX,dword ptr [ESP + 0x124]     ; 0042e439
    CWDE                                ; 0042e440
    IMUL EDX,EAX                        ; 0042e441
    MOV AX,word ptr [ESI + 0x4]         ; 0042e444
    MOVSX EBX,AX                        ; 0042e448
    ADD EBX,EDX                         ; 0042e44b
    TEST EBX,EBX                        ; 0042e44d
    JL 0x0042e455                       ; 0042e44f
        ;   XREF to: 0042e455 (CONDITIONAL_JUMP)  ; LAB_0042e455
    CMP EBX,EBP                         ; 0042e451
    JLE 0x0042e488                      ; 0042e453
        ;   XREF to: 0042e488 (CONDITIONAL_JUMP)  ; LAB_0042e488
    PUSH EDI                            ; 0042e455
        ;   Label: LAB_0042e455
    PUSH 0x5cd6d0                       ; 0042e456
    LEA EAX,[ESP + 0x8]                 ; 0042e45b
    PUSH EAX                            ; 0042e45f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042e460
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5cd6eb                    ; 0042e465
    ADD ESP,0xc                         ; 0042e46a
    MOV [0x01d046a0],EAX                ; 0042e46d | DAT_01d046a0
    MOV EAX,ESP                         ; 0042e472
    MOV EDX,0x581                       ; 0042e474
    PUSH EAX                            ; 0042e479
    MOV dword ptr [0x01d046a4],EDX      ; 0042e47a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042e480
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e485
    MOV EAX,dword ptr [ESP + 0x118]     ; 0042e488
        ;   Label: LAB_0042e488
    MOV EDX,dword ptr [ESP + 0x120]     ; 0042e48f
    ADD ESI,0x8                         ; 0042e496
    ADD EBX,EAX                         ; 0042e499
    MOV AL,byte ptr [ESP + 0x100]       ; 0042e49b
    INC EDI                             ; 0042e4a2
    MOV byte ptr [EBX],AL               ; 0042e4a3
    CMP EDI,EDX                         ; 0042e4a5
    JL 0x0042e3cc                       ; 0042e4a7
        ;   XREF to: 0042e3cc (CONDITIONAL_JUMP)  ; LAB_0042e3cc
    ADD ESP,0x104                       ; 0042e4ad
        ;   Label: LAB_0042e4ad
    POP EBP                             ; 0042e4b3
    POP EDI                             ; 0042e4b4
    POP ESI                             ; 0042e4b5
    POP EBX                             ; 0042e4b6
    RET                                 ; 0042e4b7

