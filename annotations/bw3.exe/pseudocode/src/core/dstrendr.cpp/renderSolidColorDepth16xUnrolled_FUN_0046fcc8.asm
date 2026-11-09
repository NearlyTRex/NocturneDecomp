; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_0046fcc8(void)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 at 0046b2a2
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 at 0046b352
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046fcc8
        ;   Label: core_dstrendr.cpp_renderSolidColorDepth16xUnrolled_FUN_0046fcc8
    PUSH EDI                            ; 0046fcc9
    PUSH EBP                            ; 0046fcca
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046fccb
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046fcce
    CMP EAX,ECX                         ; 0046fcd1
    JBE 0x0046fcd8                      ; 0046fcd3
        ;   XREF to: 0046fcd8 (CONDITIONAL_JUMP)  ; LAB_0046fcd8
    XCHG EAX,ECX                        ; 0046fcd5
    XCHG EDI,ESI                        ; 0046fcd6
    SHR EAX,0x10                        ; 0046fcd8
        ;   Label: LAB_0046fcd8
    SHR ECX,0x10                        ; 0046fcdb
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 0046fcde | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046fce5 | DAT_01c5faec
    SUB ECX,EAX                         ; 0046fcec
    JLE 0x0046fea3                      ; 0046fcee
        ;   XREF to: 0046fea3 (CONDITIONAL_JUMP)  ; LAB_0046fea3
    SHL EAX,0x2                         ; 0046fcf4
    ADD EBX,EAX                         ; 0046fcf7
    ADD EBP,EAX                         ; 0046fcf9
    INC ECX                             ; 0046fcfb
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046fcfc
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046fcff
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d0] ; 0046fd02 | DAT_01c6b5d0
    MOV EDI,EBX                         ; 0046fd09
    MOV EBX,EBP                         ; 0046fd0b
    DEC ECX                             ; 0046fd0d
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046fd0e
    MOV EAX,[0x01c6b5c0]                ; 0046fd11 | DAT_01c6b5c0
    SUB ECX,0x4                         ; 0046fd16
        ;   Label: LAB_0046fd16
    JL 0x0046fe67                       ; 0046fd19
        ;   XREF to: 0046fe67 (CONDITIONAL_JUMP)  ; LAB_0046fe67
    MOV EBP,ESI                         ; 0046fd1f
    SHR EBP,0x8                         ; 0046fd21
    CMP EBP,dword ptr [EBX]             ; 0046fd24
    JL 0x0046fd2c                       ; 0046fd26
        ;   XREF to: 0046fd2c (CONDITIONAL_JUMP)  ; LAB_0046fd2c
    MOV dword ptr [EBX],EBP             ; 0046fd28
    MOV dword ptr [EDI],EAX             ; 0046fd2a
    ADD ESI,EDX                         ; 0046fd2c
        ;   Label: LAB_0046fd2c
    MOV EBP,ESI                         ; 0046fd2e
    SHR EBP,0x8                         ; 0046fd30
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046fd33
    JL 0x0046fd3e                       ; 0046fd36
        ;   XREF to: 0046fd3e (CONDITIONAL_JUMP)  ; LAB_0046fd3e
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fd38
    MOV dword ptr [EDI + 0x4],EAX       ; 0046fd3b
    ADD ESI,EDX                         ; 0046fd3e
        ;   Label: LAB_0046fd3e
    MOV EBP,ESI                         ; 0046fd40
    SHR EBP,0x8                         ; 0046fd42
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046fd45
    JL 0x0046fd50                       ; 0046fd48
        ;   XREF to: 0046fd50 (CONDITIONAL_JUMP)  ; LAB_0046fd50
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fd4a
    MOV dword ptr [EDI + 0x8],EAX       ; 0046fd4d
    ADD ESI,EDX                         ; 0046fd50
        ;   Label: LAB_0046fd50
    MOV EBP,ESI                         ; 0046fd52
    SHR EBP,0x8                         ; 0046fd54
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046fd57
    JL 0x0046fd62                       ; 0046fd5a
        ;   XREF to: 0046fd62 (CONDITIONAL_JUMP)  ; LAB_0046fd62
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fd5c
    MOV dword ptr [EDI + 0xc],EAX       ; 0046fd5f
    ADD ESI,EDX                         ; 0046fd62
        ;   Label: LAB_0046fd62
    ADD EBX,0x10                        ; 0046fd64
    ADD EDI,0x10                        ; 0046fd67
    SUB ECX,0x4                         ; 0046fd6a
    JL 0x0046fe67                       ; 0046fd6d
        ;   XREF to: 0046fe67 (CONDITIONAL_JUMP)  ; LAB_0046fe67
    MOV EBP,ESI                         ; 0046fd73
    SHR EBP,0x8                         ; 0046fd75
    CMP EBP,dword ptr [EBX]             ; 0046fd78
    JL 0x0046fd80                       ; 0046fd7a
        ;   XREF to: 0046fd80 (CONDITIONAL_JUMP)  ; LAB_0046fd80
    MOV dword ptr [EBX],EBP             ; 0046fd7c
    MOV dword ptr [EDI],EAX             ; 0046fd7e
    ADD ESI,EDX                         ; 0046fd80
        ;   Label: LAB_0046fd80
    MOV EBP,ESI                         ; 0046fd82
    SHR EBP,0x8                         ; 0046fd84
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046fd87
    JL 0x0046fd92                       ; 0046fd8a
        ;   XREF to: 0046fd92 (CONDITIONAL_JUMP)  ; LAB_0046fd92
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fd8c
    MOV dword ptr [EDI + 0x4],EAX       ; 0046fd8f
    ADD ESI,EDX                         ; 0046fd92
        ;   Label: LAB_0046fd92
    MOV EBP,ESI                         ; 0046fd94
    SHR EBP,0x8                         ; 0046fd96
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046fd99
    JL 0x0046fda4                       ; 0046fd9c
        ;   XREF to: 0046fda4 (CONDITIONAL_JUMP)  ; LAB_0046fda4
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fd9e
    MOV dword ptr [EDI + 0x8],EAX       ; 0046fda1
    ADD ESI,EDX                         ; 0046fda4
        ;   Label: LAB_0046fda4
    MOV EBP,ESI                         ; 0046fda6
    SHR EBP,0x8                         ; 0046fda8
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046fdab
    JL 0x0046fdb6                       ; 0046fdae
        ;   XREF to: 0046fdb6 (CONDITIONAL_JUMP)  ; LAB_0046fdb6
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fdb0
    MOV dword ptr [EDI + 0xc],EAX       ; 0046fdb3
    ADD ESI,EDX                         ; 0046fdb6
        ;   Label: LAB_0046fdb6
    ADD EBX,0x10                        ; 0046fdb8
    ADD EDI,0x10                        ; 0046fdbb
    SUB ECX,0x4                         ; 0046fdbe
    JL 0x0046fe67                       ; 0046fdc1
        ;   XREF to: 0046fe67 (CONDITIONAL_JUMP)  ; LAB_0046fe67
    MOV EBP,ESI                         ; 0046fdc7
    SHR EBP,0x8                         ; 0046fdc9
    CMP EBP,dword ptr [EBX]             ; 0046fdcc
    JL 0x0046fdd4                       ; 0046fdce
        ;   XREF to: 0046fdd4 (CONDITIONAL_JUMP)  ; LAB_0046fdd4
    MOV dword ptr [EBX],EBP             ; 0046fdd0
    MOV dword ptr [EDI],EAX             ; 0046fdd2
    ADD ESI,EDX                         ; 0046fdd4
        ;   Label: LAB_0046fdd4
    MOV EBP,ESI                         ; 0046fdd6
    SHR EBP,0x8                         ; 0046fdd8
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046fddb
    JL 0x0046fde6                       ; 0046fdde
        ;   XREF to: 0046fde6 (CONDITIONAL_JUMP)  ; LAB_0046fde6
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fde0
    MOV dword ptr [EDI + 0x4],EAX       ; 0046fde3
    ADD ESI,EDX                         ; 0046fde6
        ;   Label: LAB_0046fde6
    MOV EBP,ESI                         ; 0046fde8
    SHR EBP,0x8                         ; 0046fdea
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046fded
    JL 0x0046fdf8                       ; 0046fdf0
        ;   XREF to: 0046fdf8 (CONDITIONAL_JUMP)  ; LAB_0046fdf8
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fdf2
    MOV dword ptr [EDI + 0x8],EAX       ; 0046fdf5
    ADD ESI,EDX                         ; 0046fdf8
        ;   Label: LAB_0046fdf8
    MOV EBP,ESI                         ; 0046fdfa
    SHR EBP,0x8                         ; 0046fdfc
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046fdff
    JL 0x0046fe0a                       ; 0046fe02
        ;   XREF to: 0046fe0a (CONDITIONAL_JUMP)  ; LAB_0046fe0a
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fe04
    MOV dword ptr [EDI + 0xc],EAX       ; 0046fe07
    ADD ESI,EDX                         ; 0046fe0a
        ;   Label: LAB_0046fe0a
    ADD EBX,0x10                        ; 0046fe0c
    ADD EDI,0x10                        ; 0046fe0f
    SUB ECX,0x4                         ; 0046fe12
    JL 0x0046fe67                       ; 0046fe15
        ;   XREF to: 0046fe67 (CONDITIONAL_JUMP)  ; LAB_0046fe67
    MOV EBP,ESI                         ; 0046fe17
    SHR EBP,0x8                         ; 0046fe19
    CMP EBP,dword ptr [EBX]             ; 0046fe1c
    JL 0x0046fe24                       ; 0046fe1e
        ;   XREF to: 0046fe24 (CONDITIONAL_JUMP)  ; LAB_0046fe24
    MOV dword ptr [EBX],EBP             ; 0046fe20
    MOV dword ptr [EDI],EAX             ; 0046fe22
    ADD ESI,EDX                         ; 0046fe24
        ;   Label: LAB_0046fe24
    MOV EBP,ESI                         ; 0046fe26
    SHR EBP,0x8                         ; 0046fe28
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046fe2b
    JL 0x0046fe36                       ; 0046fe2e
        ;   XREF to: 0046fe36 (CONDITIONAL_JUMP)  ; LAB_0046fe36
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fe30
    MOV dword ptr [EDI + 0x4],EAX       ; 0046fe33
    ADD ESI,EDX                         ; 0046fe36
        ;   Label: LAB_0046fe36
    MOV EBP,ESI                         ; 0046fe38
    SHR EBP,0x8                         ; 0046fe3a
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046fe3d
    JL 0x0046fe48                       ; 0046fe40
        ;   XREF to: 0046fe48 (CONDITIONAL_JUMP)  ; LAB_0046fe48
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fe42
    MOV dword ptr [EDI + 0x8],EAX       ; 0046fe45
    ADD ESI,EDX                         ; 0046fe48
        ;   Label: LAB_0046fe48
    MOV EBP,ESI                         ; 0046fe4a
    SHR EBP,0x8                         ; 0046fe4c
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046fe4f
    JL 0x0046fe5a                       ; 0046fe52
        ;   XREF to: 0046fe5a (CONDITIONAL_JUMP)  ; LAB_0046fe5a
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fe54
    MOV dword ptr [EDI + 0xc],EAX       ; 0046fe57
    ADD ESI,EDX                         ; 0046fe5a
        ;   Label: LAB_0046fe5a
    ADD EBX,0x10                        ; 0046fe5c
    ADD EDI,0x10                        ; 0046fe5f
    JMP 0x0046fd16                      ; 0046fe62
        ;   XREF to: 0046fd16 (UNCONDITIONAL_JUMP)  ; LAB_0046fd16
    ADD ECX,0x4                         ; 0046fe67
        ;   Label: LAB_0046fe67
    JLE 0x0046fea3                      ; 0046fe6a
        ;   XREF to: 0046fea3 (CONDITIONAL_JUMP)  ; LAB_0046fea3
    MOV EBP,ESI                         ; 0046fe6c
    SHR EBP,0x8                         ; 0046fe6e
    CMP EBP,dword ptr [EBX]             ; 0046fe71
    JL 0x0046fe79                       ; 0046fe73
        ;   XREF to: 0046fe79 (CONDITIONAL_JUMP)  ; LAB_0046fe79
    MOV dword ptr [EBX],EBP             ; 0046fe75
    MOV dword ptr [EDI],EAX             ; 0046fe77
    ADD ESI,EDX                         ; 0046fe79
        ;   Label: LAB_0046fe79
    DEC ECX                             ; 0046fe7b
    JLE 0x0046fea3                      ; 0046fe7c
        ;   XREF to: 0046fea3 (CONDITIONAL_JUMP)  ; LAB_0046fea3
    MOV EBP,ESI                         ; 0046fe7e
    SHR EBP,0x8                         ; 0046fe80
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046fe83
    JL 0x0046fe8e                       ; 0046fe86
        ;   XREF to: 0046fe8e (CONDITIONAL_JUMP)  ; LAB_0046fe8e
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fe88
    MOV dword ptr [EDI + 0x4],EAX       ; 0046fe8b
    ADD ESI,EDX                         ; 0046fe8e
        ;   Label: LAB_0046fe8e
    DEC ECX                             ; 0046fe90
    JLE 0x0046fea3                      ; 0046fe91
        ;   XREF to: 0046fea3 (CONDITIONAL_JUMP)  ; LAB_0046fea3
    MOV EBP,ESI                         ; 0046fe93
    SHR EBP,0x8                         ; 0046fe95
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046fe98
    JL 0x0046fea3                       ; 0046fe9b
        ;   XREF to: 0046fea3 (CONDITIONAL_JUMP)  ; LAB_0046fea3
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fe9d
    MOV dword ptr [EDI + 0x8],EAX       ; 0046fea0
    POP EBP                             ; 0046fea3
        ;   Label: LAB_0046fea3
    POP EDI                             ; 0046fea4
    POP ESI                             ; 0046fea5
    RET                                 ; 0046fea6

