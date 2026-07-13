; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void ___dtold(uint *param_1,uint *param_2)
;
;
; XREF[1]:
;   __fltout2 at 1000a360
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a3e0
        ;   Label: ___dtold
    PUSH EBX                            ; 1000a3e4
    MOV DX,word ptr [EAX + 0x6]         ; 1000a3e5
    PUSH ESI                            ; 1000a3e9
    MOV SI,DX                           ; 1000a3ea
    PUSH EDI                            ; 1000a3ed
    AND SI,0x7ff0                       ; 1000a3ee
    PUSH EBP                            ; 1000a3f3
    SHR SI,0x4                          ; 1000a3f4
    MOV EBX,0x80000000                  ; 1000a3f8
    AND DX,0x8000                       ; 1000a3fd
    MOV ECX,dword ptr [EAX + 0x4]       ; 1000a402
    AND ECX,0xfffff                     ; 1000a405
    MOV EBP,dword ptr [EAX]             ; 1000a40b
    MOVZX EAX,SI                        ; 1000a40d
    TEST EAX,EAX                        ; 1000a410
    JZ 0x1000a422                       ; 1000a412
        ;   XREF to: 1000a422 (CONDITIONAL_JUMP)  ; LAB_1000a422
    CMP EAX,0x7ff                       ; 1000a414
    JZ 0x1000a447                       ; 1000a419
        ;   XREF to: 1000a447 (CONDITIONAL_JUMP)  ; LAB_1000a447
    ADD SI,0x3c00                       ; 1000a41b
    JMP 0x1000a44b                      ; 1000a420
        ;   XREF to: 1000a44b (UNCONDITIONAL_JUMP)  ; LAB_1000a44b
    XOR EAX,EAX                         ; 1000a422
        ;   Label: LAB_1000a422
    TEST ECX,ECX                        ; 1000a424
    JNZ 0x1000a43e                      ; 1000a426
        ;   XREF to: 1000a43e (CONDITIONAL_JUMP)  ; LAB_1000a43e
    TEST EBP,EBP                        ; 1000a428
    JNZ 0x1000a43e                      ; 1000a42a
        ;   XREF to: 1000a43e (CONDITIONAL_JUMP)  ; LAB_1000a43e
    MOV EDI,dword ptr [ESP + 0x14]      ; 1000a42c
    POP EBP                             ; 1000a430
    MOV word ptr [EDI + 0x8],AX         ; 1000a431
    MOV dword ptr [EDI + 0x4],EAX       ; 1000a435
    MOV dword ptr [EDI],EAX             ; 1000a438
    POP EDI                             ; 1000a43a
    POP ESI                             ; 1000a43b
    POP EBX                             ; 1000a43c
    RET                                 ; 1000a43d
    ADD SI,0x3c01                       ; 1000a43e
        ;   Label: LAB_1000a43e
    XOR EBX,EBX                         ; 1000a443
    JMP 0x1000a44b                      ; 1000a445
        ;   XREF to: 1000a44b (UNCONDITIONAL_JUMP)  ; LAB_1000a44b
    MOV SI,0x7fff                       ; 1000a447
        ;   Label: LAB_1000a447
    SHL ECX,0xb                         ; 1000a44b
        ;   Label: LAB_1000a44b
    MOV EDI,dword ptr [ESP + 0x14]      ; 1000a44e
    MOV EAX,EBP                         ; 1000a452
    SHR EAX,0x15                        ; 1000a454
    SHL EBP,0xb                         ; 1000a457
    OR ECX,EAX                          ; 1000a45a
    OR ECX,EBX                          ; 1000a45c
    MOV dword ptr [EDI],EBP             ; 1000a45e
    TEST ECX,0x80000000                 ; 1000a460
    MOV dword ptr [EDI + 0x4],ECX       ; 1000a466
    JNZ 0x1000a490                      ; 1000a469
        ;   XREF to: 1000a490 (CONDITIONAL_JUMP)  ; LAB_1000a490
    DEC SI                              ; 1000a46b
        ;   Label: LAB_1000a46b
    MOV EAX,dword ptr [EDI]             ; 1000a46d
    MOV EBX,EAX                         ; 1000a46f
    MOV ECX,dword ptr [EDI + 0x4]       ; 1000a471
    AND EBX,0x80000000                  ; 1000a474
    ADD ECX,ECX                         ; 1000a47a
    SHR EBX,0x1f                        ; 1000a47c
    ADD EAX,EAX                         ; 1000a47f
    OR EBX,ECX                          ; 1000a481
    MOV dword ptr [EDI],EAX             ; 1000a483
    TEST EBX,0x80000000                 ; 1000a485
    MOV dword ptr [EDI + 0x4],EBX       ; 1000a48b
    JZ 0x1000a46b                       ; 1000a48e
        ;   XREF to: 1000a46b (CONDITIONAL_JUMP)  ; LAB_1000a46b
    OR SI,DX                            ; 1000a490
        ;   Label: LAB_1000a490
    POP EBP                             ; 1000a493
    MOV word ptr [EDI + 0x8],SI         ; 1000a494
    POP EDI                             ; 1000a498
    POP ESI                             ; 1000a499
    POP EBX                             ; 1000a49a
    RET                                 ; 1000a49b

