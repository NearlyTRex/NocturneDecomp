; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0055e310(undefined4 param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_WavInDevice_poll_queueWa_005d50ed
;   undefined4 DAT_02cf55f8
;   undefined4 DAT_02cf5648
;   undefined4 DAT_02cf564c
;   undefined4 DAT_02cf5650
;   undefined4 DAT_02cf5658
;   undefined4 DAT_02cf565c
;   undefined4 DAT_02cf5660
;   undefined4 DAT_02cf5664
;   undefined4 DAT_02cf5668
;   undefined4 DAT_02cf566c
;   undefined4 DAT_02cf5670
;   undefined4 DAT_02cf5674
;
; Called Functions:
;   FUN_00557950
;   FUN_0055a560
;   FUN_0055dcf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e310
        ;   Label: FUN_0055e310
    PUSH ESI                            ; 0055e311
    PUSH EDI                            ; 0055e312
    PUSH EBP                            ; 0055e313
    SUB ESP,0xc                         ; 0055e314
    MOV EDI,dword ptr [ESP + 0x24]      ; 0055e317
    MOV ESI,dword ptr [ESP + 0x28]      ; 0055e31b
    MOV EAX,[0x02cf5648]                ; 0055e31f | DAT_02cf5648
    MOV EDX,EAX                         ; 0055e324
    SAR EDX,0x1f                        ; 0055e326
    SHL EDX,0x3                         ; 0055e329
    SBB EAX,EDX                         ; 0055e32c
    SAR EAX,0x3                         ; 0055e32e
    MOV EDX,dword ptr [0x02cf564c]      ; 0055e331 | DAT_02cf564c
    IMUL EDX,EAX                        ; 0055e337
    MOV dword ptr [ESP + 0x8],EDX       ; 0055e33a
    MOV dword ptr [ESP],EDX             ; 0055e33e
    MOV EDX,dword ptr [0x02cf5648]      ; 0055e341 | DAT_02cf5648
    XOR EBP,EBP                         ; 0055e347
    CMP EDX,0x10                        ; 0055e349
    SETZ AL                             ; 0055e34c
    AND EAX,0xff                        ; 0055e34f
    MOV dword ptr [ESP + 0x4],EAX       ; 0055e354
    MOV EAX,[0x02cf5670]                ; 0055e358 | DAT_02cf5670
        ;   Label: LAB_0055e358
    CMP dword ptr [EAX*0x4 + 0x2cf55f8],0x0 ; 0055e35d | DAT_02cf55f8
    JZ 0x0055e45f                       ; 0055e365
        ;   XREF to: 0055e45f (CONDITIONAL_JUMP)  ; LAB_0055e45f
    MOV EBX,dword ptr [0x02cf5674]      ; 0055e36b | DAT_02cf5674
    MOV EDX,dword ptr [0x02cf5658]      ; 0055e371 | DAT_02cf5658
    MOV EAX,[0x02cf5668]                ; 0055e377 | DAT_02cf5668
    SUB EDX,EBX                         ; 0055e37c
    IMUL EDX,EAX                        ; 0055e37e
    MOV ECX,dword ptr [0x02cf5650]      ; 0055e381 | DAT_02cf5650
    MOV EAX,EDX                         ; 0055e387
    SAR EDX,0x1f                        ; 0055e389
    IDIV ECX                            ; 0055e38c
    MOV EBX,EAX                         ; 0055e38e
    CMP EAX,ESI                         ; 0055e390
    JLE 0x0055e396                      ; 0055e392
        ;   XREF to: 0055e396 (CONDITIONAL_JUMP)  ; LAB_0055e396
    MOV EBX,ESI                         ; 0055e394
    TEST EBX,EBX                        ; 0055e396
        ;   Label: LAB_0055e396
    JLE 0x0055e427                      ; 0055e398
        ;   XREF to: 0055e427 (CONDITIONAL_JUMP)  ; LAB_0055e427
    PUSH EBX                            ; 0055e39e
    PUSH EDI                            ; 0055e39f
    MOV EAX,[0x02cf566c]                ; 0055e3a0 | DAT_02cf566c
    PUSH EAX                            ; 0055e3a5
    MOV EDX,dword ptr [0x02cf5668]      ; 0055e3a6 | DAT_02cf5668
    PUSH EDX                            ; 0055e3ac
    MOV ECX,dword ptr [0x02cf5664]      ; 0055e3ad | DAT_02cf5664
    PUSH ECX                            ; 0055e3b3
    MOV EAX,[0x02cf5660]                ; 0055e3b4 | DAT_02cf5660
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0055e3b9
    PUSH EAX                            ; 0055e3bd
    MOV EAX,[0x02cf5674]                ; 0055e3be | DAT_02cf5674
    IMUL EAX,ECX                        ; 0055e3c3
    MOV EDX,dword ptr [0x02cf5670]      ; 0055e3c6 | DAT_02cf5670
    MOV EDX,dword ptr [EDX*0x4 + 0x2cf55f8] ; 0055e3cc
    ADD EAX,EDX                         ; 0055e3d3
    PUSH EAX                            ; 0055e3d5
    MOV EAX,dword ptr [ESP + 0x20]      ; 0055e3d6
    PUSH EAX                            ; 0055e3da
    MOV EDX,dword ptr [0x02cf5650]      ; 0055e3db | DAT_02cf5650
    PUSH EDX                            ; 0055e3e1
    MOV ECX,dword ptr [0x02cf564c]      ; 0055e3e2 | DAT_02cf564c
    PUSH ECX                            ; 0055e3e8
    MOV EAX,[0x02cf5648]                ; 0055e3e9 | DAT_02cf5648
    PUSH EAX                            ; 0055e3ee
    CALL FUN_00557950                   ; 0055e3ef
        ;   XREF to: 00557950 (UNCONDITIONAL_CALL)  ; undefined FUN_00557950()
    MOV EDX,dword ptr [0x02cf5650]      ; 0055e3f4 | DAT_02cf5650
    IMUL EDX,EBX                        ; 0055e3fa
    ADD ESP,0x2c                        ; 0055e3fd
    MOV EAX,dword ptr [ESP]             ; 0055e400
    IMUL EAX,EBX                        ; 0055e403
    MOV ECX,dword ptr [0x02cf5668]      ; 0055e406 | DAT_02cf5668
    ADD EDI,EAX                         ; 0055e40c
    MOV EAX,EDX                         ; 0055e40e
    SAR EDX,0x1f                        ; 0055e410
    IDIV ECX                            ; 0055e413
    MOV EDX,dword ptr [0x02cf5674]      ; 0055e415 | DAT_02cf5674
    SUB ESI,EBX                         ; 0055e41b
    ADD EDX,EAX                         ; 0055e41d
    ADD EBP,EBX                         ; 0055e41f
    MOV dword ptr [0x02cf5674],EDX      ; 0055e421 | DAT_02cf5674
    TEST ESI,ESI                        ; 0055e427
        ;   Label: LAB_0055e427
    JLE 0x0055e455                      ; 0055e429
        ;   XREF to: 0055e455 (CONDITIONAL_JUMP)  ; LAB_0055e455
    MOV EBX,dword ptr [0x02cf5670]      ; 0055e42b | DAT_02cf5670
    MOV ECX,dword ptr [0x02cf565c]      ; 0055e431 | DAT_02cf565c
    INC EBX                             ; 0055e437
    CMP EBX,ECX                         ; 0055e438
    JL 0x0055e43e                       ; 0055e43a
        ;   XREF to: 0055e43e (CONDITIONAL_JUMP)  ; LAB_0055e43e
    XOR EBX,EBX                         ; 0055e43c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0055e43e
        ;   Label: LAB_0055e43e
    MOV EDX,dword ptr [EAX + 0x2cf5558] ; 0055e445
    TEST EDX,EDX                        ; 0055e44b
    JZ 0x0055e45f                       ; 0055e44d
        ;   XREF to: 0055e45f (CONDITIONAL_JUMP)  ; LAB_0055e45f
    TEST byte ptr [EDX + 0x10],0x1      ; 0055e44f
    JNZ 0x0055e466                      ; 0055e453
        ;   XREF to: 0055e466 (CONDITIONAL_JUMP)  ; LAB_0055e466
    MOV EAX,EBP                         ; 0055e455
        ;   Label: LAB_0055e455
    ADD ESP,0xc                         ; 0055e457
        ;   Label: LAB_0055e457
    POP EBP                             ; 0055e45a
    POP EDI                             ; 0055e45b
    POP ESI                             ; 0055e45c
    POP EBX                             ; 0055e45d
    RET                                 ; 0055e45e
    MOV EAX,0xffffffff                  ; 0055e45f
        ;   Label: LAB_0055e45f
    JMP 0x0055e457                      ; 0055e464
        ;   XREF to: 0055e457 (UNCONDITIONAL_JUMP)  ; LAB_0055e457
    PUSH EBX                            ; 0055e466
        ;   Label: LAB_0055e466
    CALL FUN_0055dcf0                   ; 0055e467
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055dcf0()
    ADD ESP,0x4                         ; 0055e46c
    TEST EAX,EAX                        ; 0055e46f
    JZ 0x0055e486                       ; 0055e471
        ;   XREF to: 0055e486 (CONDITIONAL_JUMP)  ; LAB_0055e486
    XOR ECX,ECX                         ; 0055e473
    MOV dword ptr [0x02cf5670],EBX      ; 0055e475 | DAT_02cf5670
    MOV dword ptr [0x02cf5674],ECX      ; 0055e47b | DAT_02cf5674
    JMP 0x0055e358                      ; 0055e481
        ;   XREF to: 0055e358 (UNCONDITIONAL_JUMP)  ; LAB_0055e358
    PUSH 0x5d50ed                       ; 0055e486 | = "WavInDevice::poll - queueWavInBuffer ..."
        ;   Label: LAB_0055e486
    CALL FUN_0055a560                   ; 0055e48b
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    MOV EAX,0xffffffff                  ; 0055e490
    ADD ESP,0x4                         ; 0055e495
    ADD ESP,0xc                         ; 0055e498
    POP EBP                             ; 0055e49b
    POP EDI                             ; 0055e49c
    POP ESI                             ; 0055e49d
    POP EBX                             ; 0055e49e
    RET                                 ; 0055e49f

