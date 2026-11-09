; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_FUN_004662b0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dpart.cpp_FUN_00466540 at 00466580
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dpart.cpp_FUN_004663b0
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a4b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004662b0
        ;   Label: core_dpart.cpp_FUN_004662b0
    PUSH EDI                            ; 004662b1
    PUSH EBP                            ; 004662b2
    SUB ESP,0x100                       ; 004662b3
    MOV EBX,dword ptr [ESP + 0x110]     ; 004662b9
    PUSH EBX                            ; 004662c0
    CALL core_dpart.cpp_FUN_004663b0    ; 004662c1
        ;   XREF to: 004663b0 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_FUN_004663b0()
    MOV EDX,dword ptr [EBX + 0x20]      ; 004662c6
    ADD ESP,0x4                         ; 004662c9
    TEST EDX,EDX                        ; 004662cc
    JNZ 0x004662e5                      ; 004662ce
        ;   XREF to: 004662e5 (CONDITIONAL_JUMP)  ; LAB_004662e5
    MOV EBP,dword ptr [EBX + 0x24]      ; 004662d0
        ;   Label: LAB_004662d0
    TEST EBP,EBP                        ; 004662d3
    JNZ 0x0046636c                      ; 004662d5
        ;   XREF to: 0046636c (CONDITIONAL_JUMP)  ; LAB_0046636c
    ADD ESP,0x100                       ; 004662db
        ;   Label: LAB_004662db
    POP EBP                             ; 004662e1
    POP EDI                             ; 004662e2
    POP EBX                             ; 004662e3
    RET                                 ; 004662e4
    PUSH 0xc                            ; 004662e5
        ;   Label: LAB_004662e5
    PUSH EDX                            ; 004662e7
    CALL crt_unknown.c_FUN_005a4b20     ; 004662e8
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 004662ed
    MOV dword ptr [EBX + 0x2c],EAX      ; 004662f0
    TEST EAX,EAX                        ; 004662f3
    JNZ 0x0046632d                      ; 004662f5
        ;   XREF to: 0046632d (CONDITIONAL_JUMP)  ; LAB_0046632d
    MOV EDI,dword ptr [EBX + 0x20]      ; 004662f7
    PUSH EDI                            ; 004662fa
    PUSH 0x5bc044                       ; 004662fb
    LEA EAX,[ESP + 0x8]                 ; 00466300
    PUSH EAX                            ; 00466304
    CALL crt_unknown.c_FUN_005a28c0     ; 00466305
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0x8b                        ; 0046630a
    ADD ESP,0xc                         ; 0046630f
    MOV [0x01d71de4],EAX                ; 00466312 | DAT_01d71de4
    MOV EAX,ESP                         ; 00466317
    MOV EBP,0x5bc071                    ; 00466319
    PUSH EAX                            ; 0046631e
    MOV dword ptr [0x01d71de0],EBP      ; 0046631f | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00466325
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046632a
    PUSH 0xc                            ; 0046632d
        ;   Label: LAB_0046632d
    MOV EDX,dword ptr [EBX + 0x20]      ; 0046632f
    PUSH EDX                            ; 00466332
    CALL crt_unknown.c_FUN_005a4b20     ; 00466333
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 00466338
    MOV dword ptr [EBX + 0x30],EAX      ; 0046633b
    TEST EAX,EAX                        ; 0046633e
    JNZ 0x004662d0                      ; 00466340
        ;   XREF to: 004662d0 (CONDITIONAL_JUMP)  ; LAB_004662d0
    PUSH ESI                            ; 00466342
    MOV ESI,0x5bc083                    ; 00466343
    MOV EDI,0x91                        ; 00466348
    PUSH 0x5bc095                       ; 0046634d
    MOV dword ptr [0x01d71de0],ESI      ; 00466352 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00466358 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046635e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00466363
    POP ESI                             ; 00466366
    JMP 0x004662d0                      ; 00466367
        ;   XREF to: 004662d0 (UNCONDITIONAL_JUMP)  ; LAB_004662d0
    PUSH 0x20                           ; 0046636c
        ;   Label: LAB_0046636c
    PUSH EBP                            ; 0046636e
    CALL crt_unknown.c_FUN_005a4b20     ; 0046636f
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 00466374
    MOV dword ptr [EBX + 0x34],EAX      ; 00466377
    TEST EAX,EAX                        ; 0046637a
    JNZ 0x004662db                      ; 0046637c
        ;   XREF to: 004662db (CONDITIONAL_JUMP)  ; LAB_004662db
    MOV ECX,0x5bc0bf                    ; 00466382
    MOV EBX,0x99                        ; 00466387
    PUSH 0x5bc0d1                       ; 0046638c
    MOV dword ptr [0x01d71de0],ECX      ; 00466391 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00466397 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046639d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004663a2
    ADD ESP,0x100                       ; 004663a5
    POP EBP                             ; 004663ab
    POP EDI                             ; 004663ac
    POP EBX                             ; 004663ad
    RET                                 ; 004663ae

