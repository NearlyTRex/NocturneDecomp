; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_FUN_0042f750(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f750
        ;   Label: cockpit_ckptutil.c_FUN_0042f750
    PUSH ESI                            ; 0042f751
    PUSH EDI                            ; 0042f752
    PUSH EBP                            ; 0042f753
    SUB ESP,0x1e4                       ; 0042f754
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 0042f75a
    XOR EBX,EBX                         ; 0042f761
    TEST EDX,EDX                        ; 0042f763
    JZ 0x0042fa7e                       ; 0042f765
        ;   XREF to: 0042fa7e (CONDITIONAL_JUMP)  ; LAB_0042fa7e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0042f76b
    DEC EAX                             ; 0042f772
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0042f773
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0042f77a
    DEC EAX                             ; 0042f781
    XOR EBP,EBP                         ; 0042f782
    MOV dword ptr [ESP + 0x108],EAX     ; 0042f784
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0042f78b
    MOV ECX,dword ptr [ESP + 0x108]     ; 0042f792
    MOV dword ptr [ESP + 0x10c],EAX     ; 0042f799
    TEST ECX,ECX                        ; 0042f7a0
    JLE 0x0042fab1                      ; 0042f7a2
        ;   XREF to: 0042fab1 (CONDITIONAL_JUMP)  ; LAB_0042fab1
    LEA EAX,[EBP + 0x1]                 ; 0042f7a8
        ;   Label: LAB_0042f7a8
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0042f7ab
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042f7b2
    IMUL EAX,EBP,0x84                   ; 0042f7b9
    MOV dword ptr [ESP + 0x128],EAX     ; 0042f7bf
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0042f7c6
    MOV dword ptr [ESP + 0x184],EAX     ; 0042f7cd
    MOV dword ptr [ESP + 0x174],EAX     ; 0042f7d4
    MOV EDI,EAX                         ; 0042f7db
    IMUL EAX,EAX,0x84                   ; 0042f7dd
    XOR ESI,ESI                         ; 0042f7e3
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0042f7e5
    MOV dword ptr [ESP + 0x114],ESI     ; 0042f7ec
    ADD EDX,EAX                         ; 0042f7f3
    MOV EAX,EDI                         ; 0042f7f5
    MOV dword ptr [ESP + 0x1d4],ESI     ; 0042f7f7
    MOV dword ptr [ESP + 0x118],EAX     ; 0042f7fe
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0042f805
    MOV dword ptr [ESP + 0x1c0],EDX     ; 0042f80c
    MOV dword ptr [ESP + 0x110],EAX     ; 0042f813
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0042f81a
        ;   Label: LAB_0042f81a
    ADD EAX,dword ptr [ESP + 0x128]     ; 0042f821
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 0042f828
    CMP EDX,dword ptr [EAX]             ; 0042f82f
    JGE 0x0042fa8d                      ; 0042f831
        ;   XREF to: 0042fa8d (CONDITIONAL_JUMP)  ; LAB_0042fa8d
    ADD EAX,dword ptr [ESP + 0x114]     ; 0042f837
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042f83e
    MOV EDI,dword ptr [EAX + 0x44]      ; 0042f841
    ADD EDI,ESI                         ; 0042f844
    DEC EDI                             ; 0042f846
    CMP EBX,0x200                       ; 0042f847
    JL 0x0042f883                       ; 0042f84d
        ;   XREF to: 0042f883 (CONDITIONAL_JUMP)  ; LAB_0042f883
    PUSH EBP                            ; 0042f84f
    PUSH EBX                            ; 0042f850
    PUSH 0x5cd816                       ; 0042f851
    LEA EAX,[ESP + 0xc]                 ; 0042f856
    PUSH EAX                            ; 0042f85a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042f85b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5cd845                    ; 0042f860
    ADD ESP,0x10                        ; 0042f865
    MOV [0x01d046a0],EAX                ; 0042f868 | DAT_01d046a0
    MOV EAX,ESP                         ; 0042f86d
    MOV EDX,0x8ab                       ; 0042f86f
    PUSH EAX                            ; 0042f874
    MOV dword ptr [0x01d046a4],EDX      ; 0042f875 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042f87b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042f880
    TEST ESI,ESI                        ; 0042f883
        ;   Label: LAB_0042f883
    JLE 0x0042fdfb                      ; 0042f885
        ;   XREF to: 0042fdfb (CONDITIONAL_JUMP)  ; LAB_0042fdfb
    LEA EAX,[ESI + 0x1]                 ; 0042f88b
    MOV dword ptr [ESP + 0x120],EAX     ; 0042f88e
    LEA EAX,[ESI + -0x1]                ; 0042f895
    XOR ECX,ECX                         ; 0042f898
    MOV dword ptr [ESP + 0x11c],EAX     ; 0042f89a
    MOV EAX,dword ptr [ESP + 0x110]     ; 0042f8a1
    MOV dword ptr [ESP + 0x130],ECX     ; 0042f8a8
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0042f8af
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0042f8b6
    MOV dword ptr [ESP + 0x148],ECX     ; 0042f8bd
        ;   Label: LAB_0042f8bd
    MOV dword ptr [ESP + 0x14c],EAX     ; 0042f8c4
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 0042f8cb
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 0042f8d6
    MOV EDX,dword ptr [ESP + 0x148]     ; 0042f8dd
    CMP EDX,dword ptr [EAX]             ; 0042f8e4
    JGE 0x0042fdfb                      ; 0042f8e6
        ;   XREF to: 0042fdfb (CONDITIONAL_JUMP)  ; LAB_0042fdfb
    ADD EAX,dword ptr [ESP + 0x130]     ; 0042f8ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042f8f3
    MOV EAX,dword ptr [EAX + 0x44]      ; 0042f8f6
    ADD EAX,EDX                         ; 0042f8f9
    DEC EAX                             ; 0042f8fb
    XOR ECX,ECX                         ; 0042f8fc
    MOV dword ptr [ESP + 0x180],EAX     ; 0042f8fe
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0042f905
    MOV dword ptr [ESP + 0x1bc],ECX     ; 0042f90c
    TEST EAX,EAX                        ; 0042f913
    JLE 0x0042f953                      ; 0042f915
        ;   XREF to: 0042f953 (CONDITIONAL_JUMP)  ; LAB_0042f953
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0042f917
    MOV EAX,dword ptr [EAX]             ; 0042f91e
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0042f920
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0042f927
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0042f92e
    MOV EAX,dword ptr [EAX + 0x40]      ; 0042f935
    ADD ECX,EAX                         ; 0042f938
    LEA EAX,[ECX + -0x1]                ; 0042f93a
    MOV dword ptr [ESP + 0x19c],EAX     ; 0042f93d
    CMP EDX,EAX                         ; 0042f944
    JGE 0x0042f953                      ; 0042f946
        ;   XREF to: 0042f953 (CONDITIONAL_JUMP)  ; LAB_0042f953
    MOV dword ptr [ESP + 0x1bc],0x1     ; 0042f948
    CMP EDX,dword ptr [ESP + 0x11c]     ; 0042f953
        ;   Label: LAB_0042f953
    JGE 0x0042fbc0                      ; 0042f95a
        ;   XREF to: 0042fbc0 (CONDITIONAL_JUMP)  ; LAB_0042fbc0
    CMP ESI,dword ptr [ESP + 0x180]     ; 0042f960
    JG 0x0042fbc0                       ; 0042f967
        ;   XREF to: 0042fbc0 (CONDITIONAL_JUMP)  ; LAB_0042fbc0
    LEA EAX,[EBX*0x8 + 0x0]             ; 0042f96d
    LEA ECX,[EBX + 0x1]                 ; 0042f974
    MOV dword ptr [ESP + 0x1d8],ECX     ; 0042f977
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 0042f97e
    ADD EAX,0x7bde2c                    ; 0042f985
    TEST ECX,ECX                        ; 0042f98a
    JZ 0x0042fb16                       ; 0042f98c
        ;   XREF to: 0042fb16 (CONDITIONAL_JUMP)  ; LAB_0042fb16
    MOV ECX,ESI                         ; 0042f992
    SUB ECX,dword ptr [ESP + 0x19c]     ; 0042f994
    DEC ECX                             ; 0042f99b
    CMP ECX,dword ptr [ESP + 0x210]     ; 0042f99c
    JG 0x0042fbc0                       ; 0042f9a3
        ;   XREF to: 0042fbc0 (CONDITIONAL_JUMP)  ; LAB_0042fbc0
    XOR EBX,EBX                         ; 0042f9a9
    MOV EDX,dword ptr [ESP + 0x19c]     ; 0042f9ab
    MOV dword ptr [ESP + 0x15c],EBX     ; 0042f9b2
    MOV BX,word ptr [EAX]               ; 0042f9b9
    MOV ECX,EBP                         ; 0042f9bc
    AND EBX,0xffff0000                  ; 0042f9be
    MOV dword ptr [ESP + 0x154],ESI     ; 0042f9c4
    MOV word ptr [EAX],BX               ; 0042f9cb
    OR EBX,EDX                          ; 0042f9ce
    MOV DX,word ptr [EAX + 0x2]         ; 0042f9d0
    MOV dword ptr [ESP + 0x158],EBP     ; 0042f9d4
    AND EDX,0xffff0000                  ; 0042f9db
    MOV word ptr [EAX],BX               ; 0042f9e1
    MOV EBX,EDX                         ; 0042f9e4
    MOV word ptr [EAX + 0x2],DX         ; 0042f9e6
    OR EBX,ECX                          ; 0042f9ea
    MOV CX,word ptr [EAX + 0x4]         ; 0042f9ec
    MOV word ptr [EAX + 0x2],BX         ; 0042f9f0
    AND ECX,0xffff0000                  ; 0042f9f4
    MOV EDX,dword ptr [ESP + 0x154]     ; 0042f9fa
    MOV word ptr [EAX + 0x4],CX         ; 0042fa01
    MOV EBX,ECX                         ; 0042fa05
    MOV CX,word ptr [EAX + 0x6]         ; 0042fa07
    OR EBX,EDX                          ; 0042fa0b
    MOV EDX,dword ptr [ESP + 0x158]     ; 0042fa0d
    AND ECX,0xffff8000                  ; 0042fa14
    MOV word ptr [EAX + 0x4],BX         ; 0042fa1a
    AND DH,0x7f                         ; 0042fa1e
    MOV EBX,ECX                         ; 0042fa21
    MOV word ptr [EAX + 0x6],CX         ; 0042fa23
    OR EBX,EDX                          ; 0042fa27
    MOV word ptr [EAX + 0x6],BX         ; 0042fa29
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0042fa2d
    MOV BL,byte ptr [EAX + 0x7]         ; 0042fa34
    XOR DH,DH                           ; 0042fa37
    AND BL,0x7f                         ; 0042fa39
    AND DL,0x1                          ; 0042fa3c
    MOV byte ptr [EAX + 0x7],BL         ; 0042fa3f
    SHL EDX,0xf                         ; 0042fa42
    MOV CX,word ptr [EAX + 0x6]         ; 0042fa45
    OR ECX,EDX                          ; 0042fa49
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 0042fa4b
    MOV word ptr [EAX + 0x6],CX         ; 0042fa52
        ;   Label: LAB_0042fa52
    MOV EDX,dword ptr [ESP + 0x130]     ; 0042fa56
        ;   Label: LAB_0042fa56
    MOV ECX,dword ptr [ESP + 0x148]     ; 0042fa5d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0042fa64
    ADD EDX,0x4                         ; 0042fa6b
    INC ECX                             ; 0042fa6e
    ADD EAX,0x4                         ; 0042fa6f
    MOV dword ptr [ESP + 0x130],EDX     ; 0042fa72
    JMP 0x0042f8bd                      ; 0042fa79
        ;   XREF to: 0042f8bd (UNCONDITIONAL_JUMP)  ; LAB_0042f8bd
    XOR ESI,ESI                         ; 0042fa7e
        ;   Label: LAB_0042fa7e
    MOV EAX,ESI                         ; 0042fa80
    ADD ESP,0x1e4                       ; 0042fa82
    POP EBP                             ; 0042fa88
    POP EDI                             ; 0042fa89
    POP ESI                             ; 0042fa8a
    POP EBX                             ; 0042fa8b
    RET                                 ; 0042fa8c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0042fa8d
        ;   Label: LAB_0042fa8d
    MOV EDI,dword ptr [ESP + 0x108]     ; 0042fa94
    ADD ESI,0x84                        ; 0042fa9b
    INC EBP                             ; 0042faa1
    MOV dword ptr [ESP + 0x10c],ESI     ; 0042faa2
    CMP EBP,EDI                         ; 0042faa9
    JL 0x0042f7a8                       ; 0042faab
        ;   XREF to: 0042f7a8 (CONDITIONAL_JUMP)  ; LAB_0042f7a8
    TEST EBX,EBX                        ; 0042fab1
        ;   Label: LAB_0042fab1
    JNZ 0x0043014d                      ; 0042fab3
        ;   XREF to: 0043014d (CONDITIONAL_JUMP)  ; LAB_0043014d
    CMP dword ptr [ESP + 0x200],0x0     ; 0042fab9
    JNZ 0x0042facc                      ; 0042fac1
        ;   XREF to: 0042facc (CONDITIONAL_JUMP)  ; LAB_0042facc
    MOV EAX,dword ptr [ESP + 0x204]     ; 0042fac3
    MOV dword ptr [EAX],EBX             ; 0042faca
    MOV ESI,dword ptr [ESP + 0x200]     ; 0042facc
        ;   Label: LAB_0042facc
    MOV EAX,ESI                         ; 0042fad3
    ADD ESP,0x1e4                       ; 0042fad5
    POP EBP                             ; 0042fadb
    POP EDI                             ; 0042fadc
    POP ESI                             ; 0042fadd
    POP EBX                             ; 0042fade
    RET                                 ; 0042fadf
    MOV EDI,dword ptr [ESP + 0x114]     ; 0042fae0
        ;   Label: LAB_0042fae0
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0042fae7
    MOV ESI,dword ptr [ESP + 0x110]     ; 0042faee
    ADD EDI,0x4                         ; 0042faf5
    INC EAX                             ; 0042faf8
    ADD ESI,0x4                         ; 0042faf9
    MOV dword ptr [ESP + 0x114],EDI     ; 0042fafc
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0042fb03
    MOV dword ptr [ESP + 0x110],ESI     ; 0042fb0a
    JMP 0x0042f81a                      ; 0042fb11
        ;   XREF to: 0042f81a (UNCONDITIONAL_JUMP)  ; LAB_0042f81a
    MOV dword ptr [ESP + 0x134],EDX     ; 0042fb16
        ;   Label: LAB_0042fb16
    MOV EDX,dword ptr [ESP + 0x118]     ; 0042fb1d
    MOV EBX,EBP                         ; 0042fb24
    MOV dword ptr [ESP + 0x13c],EDX     ; 0042fb26
    MOV DX,word ptr [EAX]               ; 0042fb2d
    MOV dword ptr [ESP + 0x144],ECX     ; 0042fb30
    AND EDX,0xffff0000                  ; 0042fb37
    MOV CX,word ptr [EAX + 0x2]         ; 0042fb3d
    MOV word ptr [EAX],DX               ; 0042fb41
    OR EDX,ESI                          ; 0042fb44
    AND ECX,0xffff0000                  ; 0042fb46
    MOV word ptr [EAX],DX               ; 0042fb4c
    MOV EDX,ECX                         ; 0042fb4f
    MOV word ptr [EAX + 0x2],CX         ; 0042fb51
    OR EDX,EBX                          ; 0042fb55
    MOV BX,word ptr [EAX + 0x4]         ; 0042fb57
    MOV word ptr [EAX + 0x2],DX         ; 0042fb5b
    AND EBX,0xffff0000                  ; 0042fb5f
    MOV EDX,dword ptr [ESP + 0x134]     ; 0042fb65
    MOV word ptr [EAX + 0x4],BX         ; 0042fb6c
    MOV ECX,EBX                         ; 0042fb70
    MOV BX,word ptr [EAX + 0x6]         ; 0042fb72
    OR ECX,EDX                          ; 0042fb76
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0042fb78
    AND EBX,0xffff8000                  ; 0042fb7f
    MOV word ptr [EAX + 0x4],CX         ; 0042fb85
    AND DH,0x7f                         ; 0042fb89
    MOV ECX,EBX                         ; 0042fb8c
    MOV word ptr [EAX + 0x6],BX         ; 0042fb8e
    OR ECX,EDX                          ; 0042fb92
    MOV word ptr [EAX + 0x6],CX         ; 0042fb94
    MOV EDX,dword ptr [ESP + 0x144]     ; 0042fb98
    MOV BL,byte ptr [EAX + 0x7]         ; 0042fb9f
    XOR DH,DH                           ; 0042fba2
    AND BL,0x7f                         ; 0042fba4
    AND DL,0x1                          ; 0042fba7
    MOV byte ptr [EAX + 0x7],BL         ; 0042fbaa
    SHL EDX,0xf                         ; 0042fbad
    OR word ptr [EAX + 0x6],DX          ; 0042fbb0
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 0042fbb4
    JMP 0x0042fa56                      ; 0042fbbb
        ;   XREF to: 0042fa56 (UNCONDITIONAL_JUMP)  ; LAB_0042fa56
    XOR ECX,ECX                         ; 0042fbc0
        ;   Label: LAB_0042fbc0
    MOV EAX,dword ptr [ESP + 0x148]     ; 0042fbc2
    MOV dword ptr [ESP + 0x138],ECX     ; 0042fbc9
    TEST EAX,EAX                        ; 0042fbd0
    JLE 0x0042fc10                      ; 0042fbd2
        ;   XREF to: 0042fc10 (CONDITIONAL_JUMP)  ; LAB_0042fc10
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0042fbd4
    MOV EAX,dword ptr [EAX]             ; 0042fbdb
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0042fbdd
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0042fbe4
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0042fbeb
    MOV EAX,dword ptr [EAX + 0x40]      ; 0042fbf2
    ADD ECX,EAX                         ; 0042fbf5
    LEA EAX,[ECX + -0x1]                ; 0042fbf7
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0042fbfa
    CMP ESI,EAX                         ; 0042fc01
    JGE 0x0042fc10                      ; 0042fc03
        ;   XREF to: 0042fc10 (CONDITIONAL_JUMP)  ; LAB_0042fc10
    MOV dword ptr [ESP + 0x138],0x1     ; 0042fc05
    CMP EDX,dword ptr [ESP + 0x120]     ; 0042fc10
        ;   Label: LAB_0042fc10
    JLE 0x0042fa56                      ; 0042fc17
        ;   XREF to: 0042fa56 (CONDITIONAL_JUMP)  ; LAB_0042fa56
    CMP EDX,EDI                         ; 0042fc1d
    JG 0x0042fa56                       ; 0042fc1f
        ;   XREF to: 0042fa56 (CONDITIONAL_JUMP)  ; LAB_0042fa56
    CMP dword ptr [ESP + 0x138],0x0     ; 0042fc25
    JZ 0x0042fd2b                       ; 0042fc2d
        ;   XREF to: 0042fd2b (CONDITIONAL_JUMP)  ; LAB_0042fd2b
    CMP dword ptr [ESP + 0x138],0x0     ; 0042fc33
        ;   Label: LAB_0042fc33
    JZ 0x0042fa56                       ; 0042fc3b
        ;   XREF to: 0042fa56 (CONDITIONAL_JUMP)  ; LAB_0042fa56
    MOV ECX,dword ptr [ESP + 0x1dc]     ; 0042fc41
    MOV EAX,EDX                         ; 0042fc48
    SUB EAX,ECX                         ; 0042fc4a
    MOV ECX,dword ptr [ESP + 0x214]     ; 0042fc4c
    DEC EAX                             ; 0042fc53
    CMP EAX,ECX                         ; 0042fc54
    JG 0x0042fa56                       ; 0042fc56
        ;   XREF to: 0042fa56 (CONDITIONAL_JUMP)  ; LAB_0042fa56
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0042fc5c
    MOV dword ptr [ESP + 0x170],EAX     ; 0042fc63
    MOV EAX,dword ptr [ESP + 0x184]     ; 0042fc6a
    MOV dword ptr [ESP + 0x178],EDX     ; 0042fc71
    MOV dword ptr [ESP + 0x150],EAX     ; 0042fc78
    MOV EDX,EAX                         ; 0042fc7f
    MOV dword ptr [ESP + 0x17c],0x1     ; 0042fc81
    LEA EAX,[EBX*0x8 + 0x0]             ; 0042fc8c
    MOV ECX,dword ptr [ESP + 0x170]     ; 0042fc93
    ADD EAX,0x7bde2c                    ; 0042fc9a
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0042fc9f
    AND word ptr [EAX],0x0              ; 0042fca6
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0042fcaa
    OR word ptr [EAX],CX                ; 0042fcb1
    MOV ECX,dword ptr [ESP + 0x150]     ; 0042fcb4
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0042fcbb
    AND word ptr [EAX + 0x2],0x0        ; 0042fcc2
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0042fcc7
    OR word ptr [EAX + 0x2],CX          ; 0042fcce
    MOV ECX,dword ptr [ESP + 0x178]     ; 0042fcd2
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0042fcd9
    AND word ptr [EAX + 0x4],0x0        ; 0042fce0
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0042fce5
    OR word ptr [EAX + 0x4],CX          ; 0042fcec
    MOV CX,word ptr [EAX + 0x6]         ; 0042fcf0
    AND ECX,0xffff8000                  ; 0042fcf4
    AND DH,0x7f                         ; 0042fcfa
    MOV word ptr [EAX + 0x6],CX         ; 0042fcfd
    OR ECX,EDX                          ; 0042fd01
    MOV word ptr [EAX + 0x6],CX         ; 0042fd03
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0042fd07
    MOV CH,byte ptr [EAX + 0x7]         ; 0042fd0e
    XOR DH,DH                           ; 0042fd11
    AND CH,0x7f                         ; 0042fd13
    AND DL,0x1                          ; 0042fd16
    MOV byte ptr [EAX + 0x7],CH         ; 0042fd19
    SHL EDX,0xf                         ; 0042fd1c
    MOV CX,word ptr [EAX + 0x6]         ; 0042fd1f
    OR ECX,EDX                          ; 0042fd23
    INC EBX                             ; 0042fd25
    JMP 0x0042fa52                      ; 0042fd26
        ;   XREF to: 0042fa52 (UNCONDITIONAL_JUMP)  ; LAB_0042fa52
    MOV EAX,EDX                         ; 0042fd2b
        ;   Label: LAB_0042fd2b
    SUB EAX,ESI                         ; 0042fd2d
    MOV ECX,dword ptr [ESP + 0x218]     ; 0042fd2f
    INC EAX                             ; 0042fd36
    CMP EAX,ECX                         ; 0042fd37
    JG 0x0042fc33                       ; 0042fd39
        ;   XREF to: 0042fc33 (CONDITIONAL_JUMP)  ; LAB_0042fc33
    MOV EAX,dword ptr [ESP + 0x174]     ; 0042fd3f
    MOV dword ptr [ESP + 0x168],EAX     ; 0042fd46
    MOV dword ptr [ESP + 0x16c],0x1     ; 0042fd4d
    LEA EAX,[EBX*0x8 + 0x0]             ; 0042fd58
    ADD EAX,0x7bde2c                    ; 0042fd5f
    MOV dword ptr [ESP + 0x164],EDX     ; 0042fd64
    MOV DX,word ptr [EAX]               ; 0042fd6b
    MOV dword ptr [ESP + 0x160],EBP     ; 0042fd6e
    AND EDX,0xffff0000                  ; 0042fd75
    MOV CX,word ptr [EAX + 0x2]         ; 0042fd7b
    MOV word ptr [EAX],DX               ; 0042fd7f
    OR EDX,ESI                          ; 0042fd82
    AND ECX,0xffff0000                  ; 0042fd84
    MOV word ptr [EAX],DX               ; 0042fd8a
    MOV EDX,dword ptr [ESP + 0x160]     ; 0042fd8d
    MOV word ptr [EAX + 0x2],CX         ; 0042fd94
    OR ECX,EDX                          ; 0042fd98
    MOV word ptr [EAX + 0x2],CX         ; 0042fd9a
    MOV CX,word ptr [EAX + 0x4]         ; 0042fd9e
    AND ECX,0xffff0000                  ; 0042fda2
    MOV EDX,dword ptr [ESP + 0x164]     ; 0042fda8
    MOV word ptr [EAX + 0x4],CX         ; 0042fdaf
    OR ECX,EDX                          ; 0042fdb3
    MOV word ptr [EAX + 0x4],CX         ; 0042fdb5
    MOV CX,word ptr [EAX + 0x6]         ; 0042fdb9
    MOV EDX,dword ptr [ESP + 0x168]     ; 0042fdbd
    AND ECX,0xffff8000                  ; 0042fdc4
    AND DH,0x7f                         ; 0042fdca
    MOV word ptr [EAX + 0x6],CX         ; 0042fdcd
    OR ECX,EDX                          ; 0042fdd1
    MOV word ptr [EAX + 0x6],CX         ; 0042fdd3
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0042fdd7
    MOV CL,byte ptr [EAX + 0x7]         ; 0042fdde
    XOR DH,DH                           ; 0042fde1
    AND CL,0x7f                         ; 0042fde3
    AND DL,0x1                          ; 0042fde6
    MOV byte ptr [EAX + 0x7],CL         ; 0042fde9
    SHL EDX,0xf                         ; 0042fdec
    MOV CX,word ptr [EAX + 0x6]         ; 0042fdef
    OR ECX,EDX                          ; 0042fdf3
    INC EBX                             ; 0042fdf5
    JMP 0x0042fa52                      ; 0042fdf6
        ;   XREF to: 0042fa52 (UNCONDITIONAL_JUMP)  ; LAB_0042fa52
    CMP EBX,0x200                       ; 0042fdfb
        ;   Label: LAB_0042fdfb
    JL 0x0042fe37                       ; 0042fe01
        ;   XREF to: 0042fe37 (CONDITIONAL_JUMP)  ; LAB_0042fe37
    PUSH EBP                            ; 0042fe03
    PUSH EBX                            ; 0042fe04
    PUSH 0x5cd85b                       ; 0042fe05
    LEA EAX,[ESP + 0xc]                 ; 0042fe0a
    PUSH EAX                            ; 0042fe0e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042fe0f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5cd88a                    ; 0042fe14
    ADD ESP,0x10                        ; 0042fe19
    MOV [0x01d046a0],EAX                ; 0042fe1c | DAT_01d046a0
    MOV EAX,ESP                         ; 0042fe21
    MOV EDX,0x8e5                       ; 0042fe23
    PUSH EAX                            ; 0042fe28
    MOV dword ptr [0x01d046a4],EDX      ; 0042fe29 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042fe2f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042fe34
    CMP EDI,dword ptr [ESP + 0x1ac]     ; 0042fe37
        ;   Label: LAB_0042fe37
    JGE 0x0042fae0                      ; 0042fe3e
        ;   XREF to: 0042fae0 (CONDITIONAL_JUMP)  ; LAB_0042fae0
    XOR EAX,EAX                         ; 0042fe44
    MOV dword ptr [ESP + 0x140],EAX     ; 0042fe46
    LEA EAX,[EDI + -0x1]                ; 0042fe4d
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0042fe50
    LEA EAX,[EDI + 0x1]                 ; 0042fe57
    XOR EDX,EDX                         ; 0042fe5a
    MOV dword ptr [ESP + 0x124],EAX     ; 0042fe5c
    MOV EAX,dword ptr [ESP + 0x114]     ; 0042fe63
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0042fe6a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0042fe71
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 0042fe78
        ;   Label: LAB_0042fe78
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 0042fe83
    MOV EDX,dword ptr [ESP + 0x140]     ; 0042fe8a
    CMP EDX,dword ptr [EAX]             ; 0042fe91
    JGE 0x0042fae0                      ; 0042fe93
        ;   XREF to: 0042fae0 (CONDITIONAL_JUMP)  ; LAB_0042fae0
    ADD EAX,dword ptr [ESP + 0x1a4]     ; 0042fe99
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042fea0
    MOV ECX,dword ptr [EAX + 0x44]      ; 0042fea3
    MOV dword ptr [ESP + 0x1b4],EDX     ; 0042fea6
    LEA EAX,[EDX + ECX*0x1]             ; 0042fead
    XOR EDX,EDX                         ; 0042feb0
    MOV ECX,dword ptr [ESP + 0x128]     ; 0042feb2
    MOV dword ptr [ESP + 0x194],EDX     ; 0042feb9
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0042fec0
    ADD EDX,ECX                         ; 0042fec7
    MOV ECX,dword ptr [EDX]             ; 0042fec9
    DEC ECX                             ; 0042fecb
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0042fecc
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 0042fed3
    DEC EAX                             ; 0042feda
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 0042fedb
    JGE 0x0042fefb                      ; 0042fee2
        ;   XREF to: 0042fefb (CONDITIONAL_JUMP)  ; LAB_0042fefb
    ADD EDX,dword ptr [ESP + 0x1cc]     ; 0042fee4
    CMP EAX,dword ptr [EDX + 0x8]       ; 0042feeb
    JLE 0x0042fefb                      ; 0042feee
        ;   XREF to: 0042fefb (CONDITIONAL_JUMP)  ; LAB_0042fefb
    MOV dword ptr [ESP + 0x194],0x1     ; 0042fef0
    CMP EAX,dword ptr [ESP + 0x124]     ; 0042fefb
        ;   Label: LAB_0042fefb
    JLE 0x0042ff1c                      ; 0042ff02
        ;   XREF to: 0042ff1c (CONDITIONAL_JUMP)  ; LAB_0042ff1c
    CMP EDI,dword ptr [ESP + 0x1b4]     ; 0042ff04
    JL 0x0042ff1c                       ; 0042ff0b
        ;   XREF to: 0042ff1c (CONDITIONAL_JUMP)  ; LAB_0042ff1c
    MOV ECX,dword ptr [ESP + 0x194]     ; 0042ff0d
    TEST ECX,ECX                        ; 0042ff14
    JZ 0x0042ff9c                       ; 0042ff16
        ;   XREF to: 0042ff9c (CONDITIONAL_JUMP)  ; LAB_0042ff9c
    XOR EDX,EDX                         ; 0042ff1c
        ;   Label: LAB_0042ff1c
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 0042ff1e
    MOV dword ptr [ESP + 0x12c],EDX     ; 0042ff25
    IMUL EDX,ECX,0x84                   ; 0042ff2c
    ADD EDX,dword ptr [ESP + 0x1fc]     ; 0042ff32
    MOV ECX,dword ptr [EDX]             ; 0042ff39
    DEC ECX                             ; 0042ff3b
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0042ff3c
    MOV ECX,dword ptr [ESP + 0x140]     ; 0042ff43
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 0042ff4a
    JGE 0x0042ff6a                      ; 0042ff51
        ;   XREF to: 0042ff6a (CONDITIONAL_JUMP)  ; LAB_0042ff6a
    ADD EDX,dword ptr [ESP + 0x1a4]     ; 0042ff53
    CMP EDI,dword ptr [EDX + 0x8]       ; 0042ff5a
    JLE 0x0042ff6a                      ; 0042ff5d
        ;   XREF to: 0042ff6a (CONDITIONAL_JUMP)  ; LAB_0042ff6a
    MOV dword ptr [ESP + 0x12c],0x1     ; 0042ff5f
    CMP EAX,dword ptr [ESP + 0x1c4]     ; 0042ff6a
        ;   Label: LAB_0042ff6a
    JL 0x00430058                       ; 0042ff71
        ;   XREF to: 00430058 (CONDITIONAL_JUMP)  ; LAB_00430058
    MOV ECX,dword ptr [ESP + 0x140]     ; 0042ff77
        ;   Label: LAB_0042ff77
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0042ff7e
    INC ECX                             ; 0042ff85
    ADD EDX,0x4                         ; 0042ff86
    MOV dword ptr [ESP + 0x140],ECX     ; 0042ff89
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0042ff90
    JMP 0x0042fe78                      ; 0042ff97
        ;   XREF to: 0042fe78 (UNCONDITIONAL_JUMP)  ; LAB_0042fe78
    MOV dword ptr [ESP + 0x190],EAX     ; 0042ff9c
        ;   Label: LAB_0042ff9c
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0042ffa3
    MOV dword ptr [ESP + 0x198],EAX     ; 0042ffaa
    LEA EAX,[EBX*0x8 + 0x0]             ; 0042ffb1
    ADD EAX,0x7bde2c                    ; 0042ffb8
    MOV dword ptr [ESP + 0x1a0],ECX     ; 0042ffbd
    MOV CX,word ptr [EAX]               ; 0042ffc4
    AND ECX,0xffff0000                  ; 0042ffc7
    MOV word ptr [EAX],CX               ; 0042ffcd
    OR ECX,EDI                          ; 0042ffd0
    MOV word ptr [EAX],CX               ; 0042ffd2
    MOV CX,word ptr [EAX + 0x2]         ; 0042ffd5
    MOV dword ptr [ESP + 0x188],EBP     ; 0042ffd9
    AND ECX,0xffff0000                  ; 0042ffe0
    MOV EDX,dword ptr [ESP + 0x188]     ; 0042ffe6
    MOV word ptr [EAX + 0x2],CX         ; 0042ffed
    OR ECX,EDX                          ; 0042fff1
    MOV word ptr [EAX + 0x2],CX         ; 0042fff3
    MOV CX,word ptr [EAX + 0x4]         ; 0042fff7
    AND ECX,0xffff0000                  ; 0042fffb
    MOV EDX,dword ptr [ESP + 0x190]     ; 00430001
    MOV word ptr [EAX + 0x4],CX         ; 00430008
    OR ECX,EDX                          ; 0043000c
    MOV word ptr [EAX + 0x4],CX         ; 0043000e
    MOV CX,word ptr [EAX + 0x6]         ; 00430012
    MOV EDX,dword ptr [ESP + 0x198]     ; 00430016
    AND ECX,0xffff8000                  ; 0043001d
    AND DH,0x7f                         ; 00430023
    MOV word ptr [EAX + 0x6],CX         ; 00430026
    OR ECX,EDX                          ; 0043002a
    MOV word ptr [EAX + 0x6],CX         ; 0043002c
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 00430030
    MOV CL,byte ptr [EAX + 0x7]         ; 00430037
    XOR DH,DH                           ; 0043003a
    AND CL,0x7f                         ; 0043003c
    AND DL,0x1                          ; 0043003f
    MOV byte ptr [EAX + 0x7],CL         ; 00430042
    SHL EDX,0xf                         ; 00430045
    MOV CX,word ptr [EAX + 0x6]         ; 00430048
    OR ECX,EDX                          ; 0043004c
    INC EBX                             ; 0043004e
    MOV word ptr [EAX + 0x6],CX         ; 0043004f
    JMP 0x0042ff77                      ; 00430053
        ;   XREF to: 0042ff77 (UNCONDITIONAL_JUMP)  ; LAB_0042ff77
    CMP EAX,ESI                         ; 00430058
        ;   Label: LAB_00430058
    JL 0x0042ff77                       ; 0043005a
        ;   XREF to: 0042ff77 (CONDITIONAL_JUMP)  ; LAB_0042ff77
    CMP dword ptr [ESP + 0x12c],0x0     ; 00430060
    JNZ 0x0042ff77                      ; 00430068
        ;   XREF to: 0042ff77 (CONDITIONAL_JUMP)  ; LAB_0042ff77
    MOV EDX,EDI                         ; 0043006e
    SUB EDX,EAX                         ; 00430070
    MOV ECX,dword ptr [ESP + 0x218]     ; 00430072
    INC EDX                             ; 00430079
    CMP EDX,ECX                         ; 0043007a
    JG 0x0042ff77                       ; 0043007c
        ;   XREF to: 0042ff77 (CONDITIONAL_JUMP)  ; LAB_0042ff77
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00430082
    MOV EAX,0x1                         ; 00430089
    MOV dword ptr [ESP + 0x100],EDI     ; 0043008e
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00430095
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043009c
    MOV ECX,dword ptr [ESP + 0x100]     ; 004300a3
    ADD EAX,0x7bde2c                    ; 004300aa
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004300af
    AND word ptr [EAX],0x0              ; 004300b6
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004300ba
    MOV dword ptr [ESP + 0x104],EBP     ; 004300c1
    OR word ptr [EAX],CX                ; 004300c8
    MOV ECX,dword ptr [ESP + 0x104]     ; 004300cb
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004300d2
    AND word ptr [EAX + 0x2],0x0        ; 004300d9
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004300de
    OR word ptr [EAX + 0x2],CX          ; 004300e5
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 004300e9
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004300f0
    AND word ptr [EAX + 0x4],0x0        ; 004300f7
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004300fc
    OR word ptr [EAX + 0x4],CX          ; 00430103
    MOV CX,word ptr [EAX + 0x6]         ; 00430107
    MOV EDX,dword ptr [ESP + 0x1c8]     ; 0043010b
    AND ECX,0xffff8000                  ; 00430112
    AND DH,0x7f                         ; 00430118
    MOV word ptr [EAX + 0x6],CX         ; 0043011b
    OR ECX,EDX                          ; 0043011f
    MOV word ptr [EAX + 0x6],CX         ; 00430121
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 00430125
    MOV CH,byte ptr [EAX + 0x7]         ; 0043012c
    XOR DH,DH                           ; 0043012f
    AND CH,0x7f                         ; 00430131
    AND DL,0x1                          ; 00430134
    MOV byte ptr [EAX + 0x7],CH         ; 00430137
    SHL EDX,0xf                         ; 0043013a
    MOV CX,word ptr [EAX + 0x6]         ; 0043013d
    OR ECX,EDX                          ; 00430141
    INC EBX                             ; 00430143
    MOV word ptr [EAX + 0x6],CX         ; 00430144
    JMP 0x0042ff77                      ; 00430148
        ;   XREF to: 0042ff77 (UNCONDITIONAL_JUMP)  ; LAB_0042ff77
    MOV EBP,dword ptr [ESP + 0x200]     ; 0043014d
        ;   Label: LAB_0043014d
    TEST EBP,EBP                        ; 00430154
    JNZ 0x00430161                      ; 00430156
        ;   XREF to: 00430161 (CONDITIONAL_JUMP)  ; LAB_00430161
    MOV EAX,dword ptr [ESP + 0x204]     ; 00430158
    MOV dword ptr [EAX],EBP             ; 0043015f
    MOV EDI,dword ptr [ESP + 0x204]     ; 00430161
        ;   Label: LAB_00430161
    MOV EDI,dword ptr [EDI]             ; 00430168
    LEA ESI,[EBX*0x8 + 0x0]             ; 0043016a
    SHL EDI,0x3                         ; 00430171
    ADD EDI,ESI                         ; 00430174
    PUSH EDI                            ; 00430176
    MOV EAX,dword ptr [ESP + 0x204]     ; 00430177
    PUSH EAX                            ; 0043017e
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0043017f
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00430184
    MOV dword ptr [ESP + 0x200],EAX     ; 00430187
    TEST EAX,EAX                        ; 0043018e
    JNZ 0x004301c6                      ; 00430190
        ;   XREF to: 004301c6 (CONDITIONAL_JUMP)  ; LAB_004301c6
    PUSH EDI                            ; 00430192
    PUSH 0x5cd8a0                       ; 00430193
    LEA EAX,[ESP + 0x8]                 ; 00430198
    PUSH EAX                            ; 0043019c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0043019d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5cd8cb                    ; 004301a2
    ADD ESP,0xc                         ; 004301a7
    MOV EAX,ESP                         ; 004301aa
    MOV ECX,0x924                       ; 004301ac
    PUSH EAX                            ; 004301b1
    MOV dword ptr [0x01d046a0],EDX      ; 004301b2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004301b8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004301be
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004301c3
    MOV EDI,dword ptr [ESP + 0x204]     ; 004301c6
        ;   Label: LAB_004301c6
    MOV EBP,dword ptr [ESP + 0x200]     ; 004301cd
    MOV EDI,dword ptr [EDI]             ; 004301d4
    MOV ECX,ESI                         ; 004301d6
    SHL EDI,0x3                         ; 004301d8
    MOV ESI,0x7bde2c                    ; 004301db
    ADD EDI,EBP                         ; 004301e0
    PUSH EDI                            ; 004301e2
    MOV EAX,ECX                         ; 004301e3
    SHR ECX,0x2                         ; 004301e5
    MOVSD.REP ES:EDI,ESI                ; 004301e8
    MOV CL,AL                           ; 004301ea
    AND CL,0x3                          ; 004301ec
    MOVSB.REP ES:EDI,ESI                ; 004301ef
    POP EDI                             ; 004301f1
    MOV EAX,dword ptr [ESP + 0x204]     ; 004301f2
    MOV EDX,dword ptr [EAX]             ; 004301f9
    ADD EDX,EBX                         ; 004301fb
    MOV ESI,EBP                         ; 004301fd
    MOV dword ptr [EAX],EDX             ; 004301ff
    MOV EAX,ESI                         ; 00430201
    ADD ESP,0x1e4                       ; 00430203
    POP EBP                             ; 00430209
    POP EDI                             ; 0043020a
    POP ESI                             ; 0043020b
    POP EBX                             ; 0043020c
    RET                                 ; 0043020d

