; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005bb938(byte *param_1,uint *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005bb050 at 005bb28b
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; Called Functions:
;   crt_unknown.c_FUN_005bb64c
;   crt_unknown.c_FUN_005bb67c
;   crt_unknown.c_FUN_005bb6f8
;   crt_unknown.c_FUN_005bb75c
;   crt_unknown.c_FUN_005bb860
;   crt_unknown.c_FUN_005bb87c
;   crt_unknown.c_FUN_005bbf9c
;   unkafter_morph.cpp_FUN_005c21b0
;   unkafter_morph.cpp_FUN_005c2200
;   unkafter_morph.cpp_FUN_005c2310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb938
        ;   Label: crt_unknown.c_FUN_005bb938
    PUSH ESI                            ; 005bb939
    PUSH EDI                            ; 005bb93a
    PUSH ES                             ; 005bb93b
    PUSH EBP                            ; 005bb93c
    SUB ESP,0x10                        ; 005bb93d
    MOV ESI,dword ptr [ESP + 0x28]      ; 005bb940
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005bb944
    MOV EBX,dword ptr [ESP + 0x30]      ; 005bb948
    MOV dword ptr [EBX + 0x20],0x0      ; 005bb94c
    MOV dword ptr [EBX + 0x24],0x0      ; 005bb953
    MOV dword ptr [EBX + 0x28],0x0      ; 005bb95a
    MOV dword ptr [EBX + 0x2c],0x0      ; 005bb961
    MOV word ptr [ESP + 0xc],DS         ; 005bb968
    MOV dword ptr [EBX + 0x30],0x0      ; 005bb96c
    MOV EDI,ESI                         ; 005bb973
    MOV AL,byte ptr [EBX + 0x15]        ; 005bb975
    MOV dword ptr [EBX + 0x34],0x0      ; 005bb978
    CMP AL,0x69                         ; 005bb97f
    JC 0x005bb9a1                       ; 005bb981
        ;   XREF to: 005bb9a1 (CONDITIONAL_JUMP)  ; LAB_005bb9a1
    JBE 0x005bba0e                      ; 005bb983
        ;   XREF to: 005bba0e (CONDITIONAL_JUMP)  ; LAB_005bba0e
    CMP AL,0x75                         ; 005bb989
    JC 0x005bb998                       ; 005bb98b
        ;   XREF to: 005bb998 (CONDITIONAL_JUMP)  ; LAB_005bb998
    JBE 0x005bb9b4                      ; 005bb98d
        ;   XREF to: 005bb9b4 (CONDITIONAL_JUMP)  ; LAB_005bb9b4
    CMP AL,0x78                         ; 005bb98f
    JZ 0x005bb9b4                       ; 005bb991
        ;   XREF to: 005bb9b4 (CONDITIONAL_JUMP)  ; LAB_005bb9b4
    JMP 0x005bbad5                      ; 005bb993
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    CMP AL,0x6f                         ; 005bb998
        ;   Label: LAB_005bb998
    JZ 0x005bb9b4                       ; 005bb99a
        ;   XREF to: 005bb9b4 (CONDITIONAL_JUMP)  ; LAB_005bb9b4
    JMP 0x005bbad5                      ; 005bb99c
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    CMP AL,0x58                         ; 005bb9a1
        ;   Label: LAB_005bb9a1
    JC 0x005bbad5                       ; 005bb9a3
        ;   XREF to: 005bbad5 (CONDITIONAL_JUMP)  ; LAB_005bbad5
    JBE 0x005bb9b4                      ; 005bb9a9
        ;   XREF to: 005bb9b4 (CONDITIONAL_JUMP)  ; LAB_005bb9b4
    CMP AL,0x64                         ; 005bb9ab
    JZ 0x005bba0e                       ; 005bb9ad
        ;   XREF to: 005bba0e (CONDITIONAL_JUMP)  ; LAB_005bba0e
    JMP 0x005bbad5                      ; 005bb9af
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    TEST byte ptr [EBX + 0x1f],0x1      ; 005bb9b4
        ;   Label: LAB_005bb9b4
    JZ 0x005bb9da                       ; 005bb9b8
        ;   XREF to: 005bb9da (CONDITIONAL_JUMP)  ; LAB_005bb9da
    MOV EBP,dword ptr [EDX]             ; 005bb9ba
    ADD EBP,0x4                         ; 005bb9bc
    MOV dword ptr [EDX],EBP             ; 005bb9bf
    MOV EAX,dword ptr [EBP + -0x4]      ; 005bb9c1
    MOV dword ptr [ESP],EAX             ; 005bb9c4
    MOV EAX,dword ptr [EDX]             ; 005bb9c7
    ADD EAX,0x4                         ; 005bb9c9
    MOV dword ptr [EDX],EAX             ; 005bb9cc
    MOV EAX,dword ptr [EAX + -0x4]      ; 005bb9ce
    MOV dword ptr [ESP + 0x4],EAX       ; 005bb9d1
    JMP 0x005bbad5                      ; 005bb9d5
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    TEST byte ptr [EBX + 0x1e],0x20     ; 005bb9da
        ;   Label: LAB_005bb9da
    JZ 0x005bb9ef                       ; 005bb9de
        ;   XREF to: 005bb9ef (CONDITIONAL_JUMP)  ; LAB_005bb9ef
    MOV ECX,dword ptr [EDX]             ; 005bb9e0
    ADD ECX,0x4                         ; 005bb9e2
    MOV dword ptr [EDX],ECX             ; 005bb9e5
    MOV ECX,dword ptr [ECX + -0x4]      ; 005bb9e7
    JMP 0x005bbad5                      ; 005bb9ea
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    MOV EAX,dword ptr [EDX]             ; 005bb9ef
        ;   Label: LAB_005bb9ef
    ADD EAX,0x4                         ; 005bb9f1
    MOV dword ptr [EDX],EAX             ; 005bb9f4
    MOV ECX,dword ptr [EAX + -0x4]      ; 005bb9f6
    TEST byte ptr [EBX + 0x1e],0x10     ; 005bb9f9
    JZ 0x005bbad5                       ; 005bb9fd
        ;   XREF to: 005bbad5 (CONDITIONAL_JUMP)  ; LAB_005bbad5
    AND ECX,0xffff                      ; 005bba03
    JMP 0x005bbad5                      ; 005bba09
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    TEST byte ptr [EBX + 0x1f],0x1      ; 005bba0e
        ;   Label: LAB_005bba0e
    JZ 0x005bba31                       ; 005bba12
        ;   XREF to: 005bba31 (CONDITIONAL_JUMP)  ; LAB_005bba31
    MOV EAX,dword ptr [EDX]             ; 005bba14
    ADD EAX,0x4                         ; 005bba16
    MOV dword ptr [EDX],EAX             ; 005bba19
    MOV EAX,dword ptr [EAX + -0x4]      ; 005bba1b
    MOV dword ptr [ESP],EAX             ; 005bba1e
    MOV EBP,dword ptr [EDX]             ; 005bba21
    ADD EBP,0x4                         ; 005bba23
    MOV dword ptr [EDX],EBP             ; 005bba26
    MOV EAX,dword ptr [EBP + -0x4]      ; 005bba28
    MOV dword ptr [ESP + 0x4],EAX       ; 005bba2b
    JMP 0x005bba57                      ; 005bba2f
        ;   XREF to: 005bba57 (UNCONDITIONAL_JUMP)  ; LAB_005bba57
    TEST byte ptr [EBX + 0x1e],0x20     ; 005bba31
        ;   Label: LAB_005bba31
    JZ 0x005bba43                       ; 005bba35
        ;   XREF to: 005bba43 (CONDITIONAL_JUMP)  ; LAB_005bba43
    MOV EBP,dword ptr [EDX]             ; 005bba37
    ADD EBP,0x4                         ; 005bba39
    MOV dword ptr [EDX],EBP             ; 005bba3c
    MOV ECX,dword ptr [EBP + -0x4]      ; 005bba3e
    JMP 0x005bba57                      ; 005bba41
        ;   XREF to: 005bba57 (UNCONDITIONAL_JUMP)  ; LAB_005bba57
    MOV ECX,dword ptr [EDX]             ; 005bba43
        ;   Label: LAB_005bba43
    ADD ECX,0x4                         ; 005bba45
    MOV dword ptr [EDX],ECX             ; 005bba48
    MOV AL,byte ptr [EBX + 0x1e]        ; 005bba4a
    MOV ECX,dword ptr [ECX + -0x4]      ; 005bba4d
    TEST AL,0x10                        ; 005bba50
    JZ 0x005bba57                       ; 005bba52
        ;   XREF to: 005bba57 (CONDITIONAL_JUMP)  ; LAB_005bba57
    MOVSX ECX,CX                        ; 005bba54
    XOR EAX,EAX                         ; 005bba57
        ;   Label: LAB_005bba57
    TEST byte ptr [EBX + 0x1f],0x1      ; 005bba59
    JZ 0x005bba68                       ; 005bba5d
        ;   XREF to: 005bba68 (CONDITIONAL_JUMP)  ; LAB_005bba68
    TEST byte ptr [ESP + 0x7],0x80      ; 005bba5f
    JZ 0x005bba6c                       ; 005bba64
        ;   XREF to: 005bba6c (CONDITIONAL_JUMP)  ; LAB_005bba6c
    JMP 0x005bba70                      ; 005bba66
        ;   XREF to: 005bba70 (UNCONDITIONAL_JUMP)  ; LAB_005bba70
    TEST ECX,ECX                        ; 005bba68
        ;   Label: LAB_005bba68
    JL 0x005bba70                       ; 005bba6a
        ;   XREF to: 005bba70 (CONDITIONAL_JUMP)  ; LAB_005bba70
    TEST EAX,EAX                        ; 005bba6c
        ;   Label: LAB_005bba6c
    JZ 0x005bbaac                       ; 005bba6e
        ;   XREF to: 005bbaac (CONDITIONAL_JUMP)  ; LAB_005bbaac
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bba70
        ;   Label: LAB_005bba70
    LEA EBP,[EAX + 0x1]                 ; 005bba73
    MOV dword ptr [EBX + 0x20],EBP      ; 005bba76
    MOV byte ptr [ESI + EAX*0x1],0x2d   ; 005bba79
    TEST byte ptr [EBX + 0x1f],0x1      ; 005bba7d
    JZ 0x005bbaa8                       ; 005bba81
        ;   XREF to: 005bbaa8 (CONDITIONAL_JUMP)  ; LAB_005bbaa8
    MOV EAX,dword ptr [ESP]             ; 005bba83
    MOV EBP,dword ptr [ESP + 0x4]       ; 005bba86
    NOT EAX                             ; 005bba8a
    NOT EBP                             ; 005bba8c
    MOV dword ptr [ESP],EAX             ; 005bba8e
    MOV dword ptr [ESP + 0x4],EBP       ; 005bba91
    INC EAX                             ; 005bba95
    MOV dword ptr [ESP],EAX             ; 005bba96
    JNZ 0x005bbaa0                      ; 005bba99
        ;   XREF to: 005bbaa0 (CONDITIONAL_JUMP)  ; LAB_005bbaa0
    LEA EAX,[EBP + 0x1]                 ; 005bba9b
    JMP 0x005bbaa2                      ; 005bba9e
        ;   XREF to: 005bbaa2 (UNCONDITIONAL_JUMP)  ; LAB_005bbaa2
    MOV EAX,EBP                         ; 005bbaa0
        ;   Label: LAB_005bbaa0
    MOV dword ptr [ESP + 0x4],EAX       ; 005bbaa2
        ;   Label: LAB_005bbaa2
    JMP 0x005bbad5                      ; 005bbaa6
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    NEG ECX                             ; 005bbaa8
        ;   Label: LAB_005bbaa8
    JMP 0x005bbad5                      ; 005bbaaa
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    MOV AH,byte ptr [EBX + 0x1e]        ; 005bbaac
        ;   Label: LAB_005bbaac
    TEST AH,0x4                         ; 005bbaaf
    JZ 0x005bbac3                       ; 005bbab2
        ;   XREF to: 005bbac3 (CONDITIONAL_JUMP)  ; LAB_005bbac3
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbab4
    LEA EBP,[EAX + 0x1]                 ; 005bbab7
    MOV dword ptr [EBX + 0x20],EBP      ; 005bbaba
    MOV byte ptr [ESI + EAX*0x1],0x2b   ; 005bbabd
    JMP 0x005bbad5                      ; 005bbac1
        ;   XREF to: 005bbad5 (UNCONDITIONAL_JUMP)  ; LAB_005bbad5
    TEST AH,0x2                         ; 005bbac3
        ;   Label: LAB_005bbac3
    JZ 0x005bbad5                       ; 005bbac6
        ;   XREF to: 005bbad5 (CONDITIONAL_JUMP)  ; LAB_005bbad5
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbac8
    LEA EBP,[EAX + 0x1]                 ; 005bbacb
    MOV dword ptr [EBX + 0x20],EBP      ; 005bbace
    MOV byte ptr [ESI + EAX*0x1],0x20   ; 005bbad1
    MOV AL,byte ptr [EBX + 0x15]        ; 005bbad5
        ;   Label: LAB_005bbad5
    MOV EBP,0xa                         ; 005bbad8
    CMP AL,0x64                         ; 005bbadd
    JC 0x005bbb42                       ; 005bbadf
        ;   XREF to: 005bbb42 (CONDITIONAL_JUMP)  ; LAB_005bbb42
    JBE 0x005bbd27                      ; 005bbae1
        ;   XREF to: 005bbd27 (CONDITIONAL_JUMP)  ; LAB_005bbd27
    CMP AL,0x6f                         ; 005bbae7
    JC 0x005bbb23                       ; 005bbae9
        ;   XREF to: 005bbb23 (CONDITIONAL_JUMP)  ; LAB_005bbb23
    JBE 0x005bbd07                      ; 005bbaeb
        ;   XREF to: 005bbd07 (CONDITIONAL_JUMP)  ; LAB_005bbd07
    CMP AL,0x73                         ; 005bbaf1
    JC 0x005bbb16                       ; 005bbaf3
        ;   XREF to: 005bbb16 (CONDITIONAL_JUMP)  ; LAB_005bbb16
    JBE 0x005bbbf3                      ; 005bbaf5
        ;   XREF to: 005bbbf3 (CONDITIONAL_JUMP)  ; LAB_005bbbf3
    CMP AL,0x75                         ; 005bbafb
    JC 0x005bbf7a                       ; 005bbafd
        ;   XREF to: 005bbf7a (CONDITIONAL_JUMP)  ; LAB_005bbf7a
    JBE 0x005bbd27                      ; 005bbb03
        ;   XREF to: 005bbd27 (CONDITIONAL_JUMP)  ; LAB_005bbd27
    CMP AL,0x78                         ; 005bbb09
    JZ 0x005bbcc5                       ; 005bbb0b
        ;   XREF to: 005bbcc5 (CONDITIONAL_JUMP)  ; LAB_005bbcc5
    JMP 0x005bbf7a                      ; 005bbb11
        ;   XREF to: 005bbf7a (UNCONDITIONAL_JUMP)  ; LAB_005bbf7a
    CMP AL,0x70                         ; 005bbb16
        ;   Label: LAB_005bbb16
    JZ 0x005bbe02                       ; 005bbb18
        ;   XREF to: 005bbe02 (CONDITIONAL_JUMP)  ; LAB_005bbe02
    JMP 0x005bbf7a                      ; 005bbb1e
        ;   XREF to: 005bbf7a (UNCONDITIONAL_JUMP)  ; LAB_005bbf7a
    CMP AL,0x66                         ; 005bbb23
        ;   Label: LAB_005bbb23
    JC 0x005bbbc9                       ; 005bbb25
        ;   XREF to: 005bbbc9 (CONDITIONAL_JUMP)  ; LAB_005bbbc9
    JBE 0x005bbb93                      ; 005bbb2b
        ;   XREF to: 005bbb93 (CONDITIONAL_JUMP)  ; LAB_005bbb93
    CMP AL,0x67                         ; 005bbb2d
    JBE 0x005bbbc9                      ; 005bbb2f
        ;   XREF to: 005bbbc9 (CONDITIONAL_JUMP)  ; LAB_005bbbc9
    CMP AL,0x69                         ; 005bbb35
    JZ 0x005bbd27                       ; 005bbb37
        ;   XREF to: 005bbd27 (CONDITIONAL_JUMP)  ; LAB_005bbd27
    JMP 0x005bbf7a                      ; 005bbb3d
        ;   XREF to: 005bbf7a (UNCONDITIONAL_JUMP)  ; LAB_005bbf7a
    CMP AL,0x47                         ; 005bbb42
        ;   Label: LAB_005bbb42
    JC 0x005bbb7e                       ; 005bbb44
        ;   XREF to: 005bbb7e (CONDITIONAL_JUMP)  ; LAB_005bbb7e
    JBE 0x005bbbc9                      ; 005bbb46
        ;   XREF to: 005bbbc9 (CONDITIONAL_JUMP)  ; LAB_005bbbc9
    CMP AL,0x53                         ; 005bbb4c
    JC 0x005bbb71                       ; 005bbb4e
        ;   XREF to: 005bbb71 (CONDITIONAL_JUMP)  ; LAB_005bbb71
    JBE 0x005bbbf3                      ; 005bbb50
        ;   XREF to: 005bbbf3 (CONDITIONAL_JUMP)  ; LAB_005bbbf3
    CMP AL,0x58                         ; 005bbb56
    JC 0x005bbf7a                       ; 005bbb58
        ;   XREF to: 005bbf7a (CONDITIONAL_JUMP)  ; LAB_005bbf7a
    JBE 0x005bbcc5                      ; 005bbb5e
        ;   XREF to: 005bbcc5 (CONDITIONAL_JUMP)  ; LAB_005bbcc5
    CMP AL,0x63                         ; 005bbb64
    JZ 0x005bbe9a                       ; 005bbb66
        ;   XREF to: 005bbe9a (CONDITIONAL_JUMP)  ; LAB_005bbe9a
    JMP 0x005bbf7a                      ; 005bbb6c
        ;   XREF to: 005bbf7a (UNCONDITIONAL_JUMP)  ; LAB_005bbf7a
    CMP AL,0x50                         ; 005bbb71
        ;   Label: LAB_005bbb71
    JZ 0x005bbe02                       ; 005bbb73
        ;   XREF to: 005bbe02 (CONDITIONAL_JUMP)  ; LAB_005bbe02
    JMP 0x005bbf7a                      ; 005bbb79
        ;   XREF to: 005bbf7a (UNCONDITIONAL_JUMP)  ; LAB_005bbf7a
    CMP AL,0x45                         ; 005bbb7e
        ;   Label: LAB_005bbb7e
    JC 0x005bbb86                       ; 005bbb80
        ;   XREF to: 005bbb86 (CONDITIONAL_JUMP)  ; LAB_005bbb86
    JBE 0x005bbbc9                      ; 005bbb82
        ;   XREF to: 005bbbc9 (CONDITIONAL_JUMP)  ; LAB_005bbbc9
    JMP 0x005bbb93                      ; 005bbb84
        ;   XREF to: 005bbb93 (UNCONDITIONAL_JUMP)  ; LAB_005bbb93
    CMP AL,0x43                         ; 005bbb86
        ;   Label: LAB_005bbb86
    JZ 0x005bbf31                       ; 005bbb88
        ;   XREF to: 005bbf31 (CONDITIONAL_JUMP)  ; LAB_005bbf31
    JMP 0x005bbf7a                      ; 005bbb8e
        ;   XREF to: 005bbf7a (UNCONDITIONAL_JUMP)  ; LAB_005bbf7a
    TEST byte ptr [EBX + 0x1e],0x10     ; 005bbb93
        ;   Label: LAB_005bbb93
    JZ 0x005bbbc9                       ; 005bbb97
        ;   XREF to: 005bbbc9 (CONDITIONAL_JUMP)  ; LAB_005bbbc9
    MOV EBP,dword ptr [EDX]             ; 005bbb99
    ADD EBP,0x4                         ; 005bbb9b
    MOV dword ptr [EDX],EBP             ; 005bbb9e
    PUSH EBX                            ; 005bbba0
    MOV ECX,dword ptr [EBP + -0x4]      ; 005bbba1
    PUSH ECX                            ; 005bbba4
    PUSH ESI                            ; 005bbba5
    CALL crt_unknown.c_FUN_005bb75c     ; 005bbba6
        ;   XREF to: 005bb75c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb75c()
    ADD ESP,0xc                         ; 005bbbab
    MOV AX,DS                           ; 005bbbae
    PUSH -0x1                           ; 005bbbb0
    AND EAX,0xffff                      ; 005bbbb2
    PUSH EAX                            ; 005bbbb7
    PUSH ESI                            ; 005bbbb8
    CALL crt_unknown.c_FUN_005bb64c     ; 005bbbb9
        ;   XREF to: 005bb64c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb64c()
    ADD ESP,0xc                         ; 005bbbbe
    MOV dword ptr [EBX + 0x28],EAX      ; 005bbbc1
    JMP 0x005bbf8d                      ; 005bbbc4
        ;   XREF to: 005bbf8d (UNCONDITIONAL_JUMP)  ; LAB_005bbf8d
    PUSH EBX                            ; 005bbbc9
        ;   Label: LAB_005bbbc9
    PUSH EDX                            ; 005bbbca
    PUSH ESI                            ; 005bbbcb
    CALL crt_unknown.c_FUN_005bb860     ; 005bbbcc
        ;   XREF to: 005bb860 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb860()
    ADD ESP,0xc                         ; 005bbbd1
    PUSH EBX                            ; 005bbbd4
    CALL crt_unknown.c_FUN_005bb87c     ; 005bbbd5
        ;   XREF to: 005bb87c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb87c()
    ADD ESP,0x4                         ; 005bbbda
    LEA EDI,[ESI + 0x1]                 ; 005bbbdd
    MOV word ptr [ESP + 0xc],DS         ; 005bbbe0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbbe4
    MOV EAX,EDI                         ; 005bbbe8
    ADD ESP,0x10                        ; 005bbbea
    POP EBP                             ; 005bbbed
    POP ES                              ; 005bbbee
    POP EDI                             ; 005bbbef
    POP ESI                             ; 005bbbf0
    POP EBX                             ; 005bbbf1
    RET                                 ; 005bbbf2
    MOV byte ptr [ESI],0x0              ; 005bbbf3
        ;   Label: LAB_005bbbf3
    MOV CH,byte ptr [EBX + 0x1e]        ; 005bbbf6
    TEST CH,0x80                        ; 005bbbf9
    JZ 0x005bbc1d                       ; 005bbbfc
        ;   XREF to: 005bbc1d (CONDITIONAL_JUMP)  ; LAB_005bbc1d
    MOV ESI,dword ptr [EDX]             ; 005bbbfe
    ADD ESI,0x8                         ; 005bbc00
    MOV dword ptr [EDX],ESI             ; 005bbc03
    MOV EDX,dword ptr [ESI + -0x8]      ; 005bbc05
    MOV AX,word ptr [ESI + -0x4]        ; 005bbc08
    TEST EDX,EDX                        ; 005bbc0c
    JNZ 0x005bbc15                      ; 005bbc0e
        ;   XREF to: 005bbc15 (CONDITIONAL_JUMP)  ; LAB_005bbc15
    TEST AX,AX                          ; 005bbc10
    JZ 0x005bbc46                       ; 005bbc13
        ;   XREF to: 005bbc46 (CONDITIONAL_JUMP)  ; LAB_005bbc46
    MOV dword ptr [ESP + 0xc],EAX       ; 005bbc15
        ;   Label: LAB_005bbc15
    MOV EDI,EDX                         ; 005bbc19
    JMP 0x005bbc46                      ; 005bbc1b
        ;   XREF to: 005bbc46 (UNCONDITIONAL_JUMP)  ; LAB_005bbc46
    TEST CH,0x40                        ; 005bbc1d
        ;   Label: LAB_005bbc1d
    JZ 0x005bbc32                       ; 005bbc20
        ;   XREF to: 005bbc32 (CONDITIONAL_JUMP)  ; LAB_005bbc32
    MOV ECX,dword ptr [EDX]             ; 005bbc22
    ADD ECX,0x4                         ; 005bbc24
    MOV dword ptr [EDX],ECX             ; 005bbc27
    MOV EAX,dword ptr [ECX + -0x4]      ; 005bbc29
    TEST EAX,EAX                        ; 005bbc2c
    JZ 0x005bbc46                       ; 005bbc2e
        ;   XREF to: 005bbc46 (CONDITIONAL_JUMP)  ; LAB_005bbc46
    JMP 0x005bbc40                      ; 005bbc30
        ;   XREF to: 005bbc40 (UNCONDITIONAL_JUMP)  ; LAB_005bbc40
    MOV EAX,dword ptr [EDX]             ; 005bbc32
        ;   Label: LAB_005bbc32
    ADD EAX,0x4                         ; 005bbc34
    MOV dword ptr [EDX],EAX             ; 005bbc37
    MOV EAX,dword ptr [EAX + -0x4]      ; 005bbc39
    TEST EAX,EAX                        ; 005bbc3c
    JZ 0x005bbc46                       ; 005bbc3e
        ;   XREF to: 005bbc46 (CONDITIONAL_JUMP)  ; LAB_005bbc46
    MOV word ptr [ESP + 0xc],DS         ; 005bbc40
        ;   Label: LAB_005bbc40
    MOV EDI,EAX                         ; 005bbc44
    CMP byte ptr [EBX + 0x15],0x53      ; 005bbc46
        ;   Label: LAB_005bbc46
    JNZ 0x005bbc6e                      ; 005bbc4a
        ;   XREF to: 005bbc6e (CONDITIONAL_JUMP)  ; LAB_005bbc6e
    TEST byte ptr [EBX + 0x1e],0x10     ; 005bbc4c
    JZ 0x005bbc5a                       ; 005bbc50
        ;   XREF to: 005bbc5a (CONDITIONAL_JUMP)  ; LAB_005bbc5a
    MOV ECX,dword ptr [EBX + 0x8]       ; 005bbc52
    XOR EAX,EAX                         ; 005bbc55
    PUSH ECX                            ; 005bbc57
    JMP 0x005bbc8e                      ; 005bbc58
        ;   XREF to: 005bbc8e (UNCONDITIONAL_JUMP)  ; LAB_005bbc8e
    MOV EDX,dword ptr [EBX + 0x8]       ; 005bbc5a
        ;   Label: LAB_005bbc5a
    XOR EAX,EAX                         ; 005bbc5d
    PUSH EDX                            ; 005bbc5f
    MOV AX,word ptr [ESP + 0x10]        ; 005bbc60
    PUSH EAX                            ; 005bbc65
    PUSH EDI                            ; 005bbc66
    CALL crt_unknown.c_FUN_005bb67c     ; 005bbc67
        ;   XREF to: 005bb67c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb67c()
    JMP 0x005bbc9a                      ; 005bbc6c
        ;   XREF to: 005bbc9a (UNCONDITIONAL_JUMP)  ; LAB_005bbc9a
    TEST byte ptr [EBX + 0x1e],0x20     ; 005bbc6e
        ;   Label: LAB_005bbc6e
    JZ 0x005bbc88                       ; 005bbc72
        ;   XREF to: 005bbc88 (CONDITIONAL_JUMP)  ; LAB_005bbc88
    MOV EAX,dword ptr [EBX + 0x8]       ; 005bbc74
    PUSH EAX                            ; 005bbc77
    XOR EAX,EAX                         ; 005bbc78
    MOV AX,word ptr [ESP + 0x10]        ; 005bbc7a
    PUSH EAX                            ; 005bbc7f
    PUSH EDI                            ; 005bbc80
    CALL crt_unknown.c_FUN_005bb67c     ; 005bbc81
        ;   XREF to: 005bb67c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb67c()
    JMP 0x005bbc9a                      ; 005bbc86
        ;   XREF to: 005bbc9a (UNCONDITIONAL_JUMP)  ; LAB_005bbc9a
    MOV EBP,dword ptr [EBX + 0x8]       ; 005bbc88
        ;   Label: LAB_005bbc88
    XOR EAX,EAX                         ; 005bbc8b
    PUSH EBP                            ; 005bbc8d
    MOV AX,word ptr [ESP + 0x10]        ; 005bbc8e
        ;   Label: LAB_005bbc8e
    PUSH EAX                            ; 005bbc93
    PUSH EDI                            ; 005bbc94
    CALL crt_unknown.c_FUN_005bb64c     ; 005bbc95
        ;   XREF to: 005bb64c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb64c()
    ADD ESP,0xc                         ; 005bbc9a
        ;   Label: LAB_005bbc9a
    MOV ESI,dword ptr [EBX + 0x8]       ; 005bbc9d
    MOV dword ptr [EBX + 0x28],EAX      ; 005bbca0
    TEST ESI,ESI                        ; 005bbca3
    JL 0x005bbf8d                       ; 005bbca5
        ;   XREF to: 005bbf8d (CONDITIONAL_JUMP)  ; LAB_005bbf8d
    CMP EAX,ESI                         ; 005bbcab
    JLE 0x005bbf8d                      ; 005bbcad
        ;   XREF to: 005bbf8d (CONDITIONAL_JUMP)  ; LAB_005bbf8d
    MOV dword ptr [EBX + 0x28],ESI      ; 005bbcb3
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbcb6
    MOV EAX,EDI                         ; 005bbcba
    ADD ESP,0x10                        ; 005bbcbc
    POP EBP                             ; 005bbcbf
    POP ES                              ; 005bbcc0
    POP EDI                             ; 005bbcc1
    POP ESI                             ; 005bbcc2
    POP EBX                             ; 005bbcc3
    RET                                 ; 005bbcc4
    TEST byte ptr [EBX + 0x1e],0x1      ; 005bbcc5
        ;   Label: LAB_005bbcc5
    JZ 0x005bbd02                       ; 005bbcc9
        ;   XREF to: 005bbd02 (CONDITIONAL_JUMP)  ; LAB_005bbd02
    TEST byte ptr [EBX + 0x1f],0x1      ; 005bbccb
    JZ 0x005bbce0                       ; 005bbccf
        ;   XREF to: 005bbce0 (CONDITIONAL_JUMP)  ; LAB_005bbce0
    CMP dword ptr [ESP],0x0             ; 005bbcd1
    JNZ 0x005bbce4                      ; 005bbcd5
        ;   XREF to: 005bbce4 (CONDITIONAL_JUMP)  ; LAB_005bbce4
    CMP dword ptr [ESP + 0x4],0x0       ; 005bbcd7
    JZ 0x005bbd02                       ; 005bbcdc
        ;   XREF to: 005bbd02 (CONDITIONAL_JUMP)  ; LAB_005bbd02
    JMP 0x005bbce4                      ; 005bbcde
        ;   XREF to: 005bbce4 (UNCONDITIONAL_JUMP)  ; LAB_005bbce4
    TEST ECX,ECX                        ; 005bbce0
        ;   Label: LAB_005bbce0
    JZ 0x005bbd02                       ; 005bbce2
        ;   XREF to: 005bbd02 (CONDITIONAL_JUMP)  ; LAB_005bbd02
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbce4
        ;   Label: LAB_005bbce4
    LEA EDX,[EAX + 0x1]                 ; 005bbce7
    MOV dword ptr [EBX + 0x20],EDX      ; 005bbcea
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 005bbced
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbcf1
    LEA EDX,[EAX + 0x1]                 ; 005bbcf4
    MOV dword ptr [EBX + 0x20],EDX      ; 005bbcf7
    LEA EDX,[ESI + EAX*0x1]             ; 005bbcfa
    MOV AL,byte ptr [EBX + 0x15]        ; 005bbcfd
    MOV byte ptr [EDX],AL               ; 005bbd00
    MOV EBP,0x10                        ; 005bbd02
        ;   Label: LAB_005bbd02
    CMP byte ptr [EBX + 0x15],0x6f      ; 005bbd07
        ;   Label: LAB_005bbd07
    JNZ 0x005bbd27                      ; 005bbd0b
        ;   XREF to: 005bbd27 (CONDITIONAL_JUMP)  ; LAB_005bbd27
    MOV AH,byte ptr [EBX + 0x1e]        ; 005bbd0d
    MOV EBP,0x8                         ; 005bbd10
    TEST AH,0x1                         ; 005bbd15
    JZ 0x005bbd27                       ; 005bbd18
        ;   XREF to: 005bbd27 (CONDITIONAL_JUMP)  ; LAB_005bbd27
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbd1a
    LEA EDX,[EAX + 0x1]                 ; 005bbd1d
    MOV dword ptr [EBX + 0x20],EDX      ; 005bbd20
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 005bbd23
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbd27
        ;   Label: LAB_005bbd27
    MOV word ptr [ESP + 0xc],DS         ; 005bbd2a
    ADD EAX,ESI                         ; 005bbd2e
    MOV DL,byte ptr [EBX + 0x1f]        ; 005bbd30
    MOV EDI,EAX                         ; 005bbd33
    TEST DL,0x1                         ; 005bbd35
    JZ 0x005bbd83                       ; 005bbd38
        ;   XREF to: 005bbd83 (CONDITIONAL_JUMP)  ; LAB_005bbd83
    CMP dword ptr [EBX + 0x8],0x0       ; 005bbd3a
    JNZ 0x005bbd5c                      ; 005bbd3e
        ;   XREF to: 005bbd5c (CONDITIONAL_JUMP)  ; LAB_005bbd5c
    CMP dword ptr [ESP],0x0             ; 005bbd40
    JNZ 0x005bbd5c                      ; 005bbd44
        ;   XREF to: 005bbd5c (CONDITIONAL_JUMP)  ; LAB_005bbd5c
    CMP dword ptr [ESP + 0x4],0x0       ; 005bbd46
    JNZ 0x005bbd5c                      ; 005bbd4b
        ;   XREF to: 005bbd5c (CONDITIONAL_JUMP)  ; LAB_005bbd5c
    MOV ES,word ptr [ESP + 0xc]         ; 005bbd4d
    MOV byte ptr ES:[EAX],0x0           ; 005bbd51
    XOR EAX,EAX                         ; 005bbd55
    JMP 0x005bbdcd                      ; 005bbd57
        ;   XREF to: 005bbdcd (UNCONDITIONAL_JUMP)  ; LAB_005bbdcd
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbd5c
        ;   Label: LAB_005bbd5c
    PUSH EBP                            ; 005bbd5f
    ADD EAX,ESI                         ; 005bbd60
    PUSH EAX                            ; 005bbd62
    LEA EAX,[ESP + 0x8]                 ; 005bbd63
    PUSH EAX                            ; 005bbd67
    CALL unkafter_morph.cpp_FUN_005c2200 ; 005bbd68
        ;   XREF to: 005c2200 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c2200()
    MOV CL,byte ptr [EBX + 0x15]        ; 005bbd6d
    ADD ESP,0xc                         ; 005bbd70
    CMP CL,0x58                         ; 005bbd73
    JNZ 0x005bbdba                      ; 005bbd76
        ;   XREF to: 005bbdba (CONDITIONAL_JUMP)  ; LAB_005bbdba
    PUSH ESI                            ; 005bbd78
    CALL crt_unknown.c_FUN_005bbf9c     ; 005bbd79
        ;   XREF to: 005bbf9c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bbf9c()
    ADD ESP,0x4                         ; 005bbd7e
    JMP 0x005bbdba                      ; 005bbd81
        ;   XREF to: 005bbdba (UNCONDITIONAL_JUMP)  ; LAB_005bbdba
    CMP dword ptr [EBX + 0x8],0x0       ; 005bbd83
        ;   Label: LAB_005bbd83
    JNZ 0x005bbd99                      ; 005bbd87
        ;   XREF to: 005bbd99 (CONDITIONAL_JUMP)  ; LAB_005bbd99
    TEST ECX,ECX                        ; 005bbd89
    JNZ 0x005bbd99                      ; 005bbd8b
        ;   XREF to: 005bbd99 (CONDITIONAL_JUMP)  ; LAB_005bbd99
    MOV ES,word ptr [ESP + 0xc]         ; 005bbd8d
    MOV byte ptr ES:[EAX],0x0           ; 005bbd91
    XOR EAX,EAX                         ; 005bbd95
    JMP 0x005bbdcd                      ; 005bbd97
        ;   XREF to: 005bbdcd (UNCONDITIONAL_JUMP)  ; LAB_005bbdcd
    MOV EAX,dword ptr [EBX + 0x20]      ; 005bbd99
        ;   Label: LAB_005bbd99
    PUSH EBP                            ; 005bbd9c
    ADD EAX,ESI                         ; 005bbd9d
    PUSH EAX                            ; 005bbd9f
    PUSH ECX                            ; 005bbda0
    CALL unkafter_morph.cpp_FUN_005c2310 ; 005bbda1
        ;   XREF to: 005c2310 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c2310()
    MOV DH,byte ptr [EBX + 0x15]        ; 005bbda6
    ADD ESP,0xc                         ; 005bbda9
    CMP DH,0x58                         ; 005bbdac
    JNZ 0x005bbdba                      ; 005bbdaf
        ;   XREF to: 005bbdba (CONDITIONAL_JUMP)  ; LAB_005bbdba
    PUSH ESI                            ; 005bbdb1
    CALL crt_unknown.c_FUN_005bbf9c     ; 005bbdb2
        ;   XREF to: 005bbf9c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bbf9c()
    ADD ESP,0x4                         ; 005bbdb7
    XOR EAX,EAX                         ; 005bbdba
        ;   Label: LAB_005bbdba
    PUSH -0x1                           ; 005bbdbc
    MOV AX,word ptr [ESP + 0x10]        ; 005bbdbe
    PUSH EAX                            ; 005bbdc3
    PUSH EDI                            ; 005bbdc4
    CALL crt_unknown.c_FUN_005bb64c     ; 005bbdc5
        ;   XREF to: 005bb64c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb64c()
    ADD ESP,0xc                         ; 005bbdca
    MOV EDX,EAX                         ; 005bbdcd
        ;   Label: LAB_005bbdcd
    MOV ESI,dword ptr [EBX + 0x8]       ; 005bbdcf
    MOV dword ptr [EBX + 0x28],EAX      ; 005bbdd2
    CMP EAX,ESI                         ; 005bbdd5
    JGE 0x005bbde0                      ; 005bbdd7
        ;   XREF to: 005bbde0 (CONDITIONAL_JUMP)  ; LAB_005bbde0
    MOV EAX,ESI                         ; 005bbdd9
    SUB EAX,EDX                         ; 005bbddb
    MOV dword ptr [EBX + 0x24],EAX      ; 005bbddd
    CMP dword ptr [EBX + 0x8],-0x1      ; 005bbde0
        ;   Label: LAB_005bbde0
    JNZ 0x005bbf8d                      ; 005bbde4
        ;   XREF to: 005bbf8d (CONDITIONAL_JUMP)  ; LAB_005bbf8d
    PUSH EBX                            ; 005bbdea
    CALL crt_unknown.c_FUN_005bb87c     ; 005bbdeb
        ;   XREF to: 005bb87c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb87c()
    ADD ESP,0x4                         ; 005bbdf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbdf3
    MOV EAX,EDI                         ; 005bbdf7
    ADD ESP,0x10                        ; 005bbdf9
    POP EBP                             ; 005bbdfc
    POP ES                              ; 005bbdfd
    POP EDI                             ; 005bbdfe
    POP ESI                             ; 005bbdff
    POP EBX                             ; 005bbe00
    RET                                 ; 005bbe01
    CMP dword ptr [EBX + 0x4],0x0       ; 005bbe02
        ;   Label: LAB_005bbe02
    JNZ 0x005bbe1e                      ; 005bbe06
        ;   XREF to: 005bbe1e (CONDITIONAL_JUMP)  ; LAB_005bbe1e
    TEST byte ptr [EBX + 0x1e],0x80     ; 005bbe08
    JZ 0x005bbe17                       ; 005bbe0c
        ;   XREF to: 005bbe17 (CONDITIONAL_JUMP)  ; LAB_005bbe17
    MOV dword ptr [EBX + 0x4],0xd       ; 005bbe0e
    JMP 0x005bbe1e                      ; 005bbe15
        ;   XREF to: 005bbe1e (UNCONDITIONAL_JUMP)  ; LAB_005bbe1e
    MOV dword ptr [EBX + 0x4],0x8       ; 005bbe17
        ;   Label: LAB_005bbe17
    AND byte ptr [EBX + 0x1e],0xf9      ; 005bbe1e
        ;   Label: LAB_005bbe1e
    MOV ECX,dword ptr [EDX]             ; 005bbe22
    ADD ECX,0x4                         ; 005bbe24
    MOV dword ptr [EDX],ECX             ; 005bbe27
    MOV EAX,ECX                         ; 005bbe29
    MOV EBP,dword ptr [ECX + -0x4]      ; 005bbe2b
    TEST byte ptr [EBX + 0x1e],0x80     ; 005bbe2e
    JZ 0x005bbe5a                       ; 005bbe32
        ;   XREF to: 005bbe5a (CONDITIONAL_JUMP)  ; LAB_005bbe5a
    ADD EAX,0x4                         ; 005bbe34
    MOV dword ptr [EDX],EAX             ; 005bbe37
    PUSH 0x4                            ; 005bbe39
    MOV EAX,dword ptr [EAX + -0x4]      ; 005bbe3b
    PUSH ESI                            ; 005bbe3e
    AND EAX,0xffff                      ; 005bbe3f
    PUSH EAX                            ; 005bbe44
    CALL crt_unknown.c_FUN_005bb6f8     ; 005bbe45
        ;   XREF to: 005bb6f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb6f8()
    ADD ESP,0xc                         ; 005bbe4a
    PUSH 0x8                            ; 005bbe4d
    LEA EAX,[ESI + 0x5]                 ; 005bbe4f
    PUSH EAX                            ; 005bbe52
    PUSH EBP                            ; 005bbe53
    MOV byte ptr [ESI + 0x4],0x3a       ; 005bbe54
    JMP 0x005bbe5e                      ; 005bbe58
        ;   XREF to: 005bbe5e (UNCONDITIONAL_JUMP)  ; LAB_005bbe5e
    PUSH 0x8                            ; 005bbe5a
        ;   Label: LAB_005bbe5a
    PUSH ESI                            ; 005bbe5c
    PUSH EBP                            ; 005bbe5d
    CALL crt_unknown.c_FUN_005bb6f8     ; 005bbe5e
        ;   XREF to: 005bb6f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb6f8()
        ;   Label: LAB_005bbe5e
    ADD ESP,0xc                         ; 005bbe63
    CMP byte ptr [EBX + 0x15],0x50      ; 005bbe66
    JNZ 0x005bbe75                      ; 005bbe6a
        ;   XREF to: 005bbe75 (CONDITIONAL_JUMP)  ; LAB_005bbe75
    PUSH ESI                            ; 005bbe6c
    CALL crt_unknown.c_FUN_005bbf9c     ; 005bbe6d
        ;   XREF to: 005bbf9c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bbf9c()
    ADD ESP,0x4                         ; 005bbe72
    XOR EAX,EAX                         ; 005bbe75
        ;   Label: LAB_005bbe75
    PUSH -0x1                           ; 005bbe77
    MOV AX,word ptr [ESP + 0x10]        ; 005bbe79
    PUSH EAX                            ; 005bbe7e
    PUSH EDI                            ; 005bbe7f
    CALL crt_unknown.c_FUN_005bb64c     ; 005bbe80
        ;   XREF to: 005bb64c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb64c()
    ADD ESP,0xc                         ; 005bbe85
    MOV dword ptr [EBX + 0x20],EAX      ; 005bbe88
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbe8b
    MOV EAX,EDI                         ; 005bbe8f
    ADD ESP,0x10                        ; 005bbe91
    POP EBP                             ; 005bbe94
    POP ES                              ; 005bbe95
    POP EDI                             ; 005bbe96
    POP ESI                             ; 005bbe97
    POP EBX                             ; 005bbe98
    RET                                 ; 005bbe99
    MOV AH,byte ptr [EBX + 0x1e]        ; 005bbe9a
        ;   Label: LAB_005bbe9a
    MOV dword ptr [EBX + 0x20],0x1      ; 005bbe9d
    TEST AH,0x20                        ; 005bbea4
    JZ 0x005bbf16                       ; 005bbea7
        ;   XREF to: 005bbf16 (CONDITIONAL_JUMP)  ; LAB_005bbf16
    MOV ECX,dword ptr [EDX]             ; 005bbea9
    ADD ECX,0x4                         ; 005bbeab
    MOV dword ptr [EDX],ECX             ; 005bbeae
    MOV AX,word ptr [ECX + -0x4]        ; 005bbeb0
    AND EAX,0xffff                      ; 005bbeb4
    PUSH EAX                            ; 005bbeb9
    LEA EAX,[ESP + 0xc]                 ; 005bbeba
    PUSH EAX                            ; 005bbebe
    CALL unkafter_morph.cpp_FUN_005c21b0 ; 005bbebf
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c21b0()
    ADD ESP,0x8                         ; 005bbec4
    CMP EAX,-0x1                        ; 005bbec7
    JZ 0x005bbf8d                       ; 005bbeca
        ;   XREF to: 005bbf8d (CONDITIONAL_JUMP)  ; LAB_005bbf8d
    MOV AL,byte ptr [ESP + 0x8]         ; 005bbed0
    MOV EBP,dword ptr [0x026807f0]      ; 005bbed4 | DAT_026807f0
    MOV byte ptr [ESI],AL               ; 005bbeda
    TEST EBP,EBP                        ; 005bbedc
    JZ 0x005bbf8d                       ; 005bbede
        ;   XREF to: 005bbf8d (CONDITIONAL_JUMP)  ; LAB_005bbf8d
    XOR EAX,EAX                         ; 005bbee4
    MOV AL,byte ptr [ESP + 0x8]         ; 005bbee6
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005bbeea
    AND AL,0x1                          ; 005bbef0
    AND EAX,0xff                        ; 005bbef2
    JZ 0x005bbf8d                       ; 005bbef7
        ;   XREF to: 005bbf8d (CONDITIONAL_JUMP)  ; LAB_005bbf8d
    MOV AL,byte ptr [ESP + 0x9]         ; 005bbefd
    MOV byte ptr [ESI + 0x1],AL         ; 005bbf01
    INC dword ptr [EBX + 0x20]          ; 005bbf04
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbf07
    MOV EAX,EDI                         ; 005bbf0b
    ADD ESP,0x10                        ; 005bbf0d
    POP EBP                             ; 005bbf10
    POP ES                              ; 005bbf11
    POP EDI                             ; 005bbf12
    POP ESI                             ; 005bbf13
    POP EBX                             ; 005bbf14
    RET                                 ; 005bbf15
    MOV EBX,dword ptr [EDX]             ; 005bbf16
        ;   Label: LAB_005bbf16
    ADD EBX,0x4                         ; 005bbf18
    MOV dword ptr [EDX],EBX             ; 005bbf1b
    MOV AL,byte ptr [EBX + -0x4]        ; 005bbf1d
    MOV byte ptr [ESI],AL               ; 005bbf20
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbf22
    MOV EAX,EDI                         ; 005bbf26
    ADD ESP,0x10                        ; 005bbf28
    POP EBP                             ; 005bbf2b
    POP ES                              ; 005bbf2c
    POP EDI                             ; 005bbf2d
    POP ESI                             ; 005bbf2e
    POP EBX                             ; 005bbf2f
    RET                                 ; 005bbf30
    MOV EAX,dword ptr [EDX]             ; 005bbf31
        ;   Label: LAB_005bbf31
    ADD EAX,0x4                         ; 005bbf33
    MOV dword ptr [EDX],EAX             ; 005bbf36
    MOV AX,word ptr [EAX + -0x4]        ; 005bbf38
    AND EAX,0xffff                      ; 005bbf3c
    PUSH EAX                            ; 005bbf41
    PUSH ESI                            ; 005bbf42
    CALL unkafter_morph.cpp_FUN_005c21b0 ; 005bbf43
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c21b0()
    ADD ESP,0x8                         ; 005bbf48
    MOV EDX,EAX                         ; 005bbf4b
    CMP EAX,-0x1                        ; 005bbf4d
    JZ 0x005bbf64                       ; 005bbf50
        ;   XREF to: 005bbf64 (CONDITIONAL_JUMP)  ; LAB_005bbf64
    MOV dword ptr [EBX + 0x20],EAX      ; 005bbf52
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbf55
    MOV EAX,EDI                         ; 005bbf59
    ADD ESP,0x10                        ; 005bbf5b
    POP EBP                             ; 005bbf5e
    POP ES                              ; 005bbf5f
    POP EDI                             ; 005bbf60
    POP ESI                             ; 005bbf61
    POP EBX                             ; 005bbf62
    RET                                 ; 005bbf63
    MOV dword ptr [EBX + 0x20],0x0      ; 005bbf64
        ;   Label: LAB_005bbf64
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbf6b
    MOV EAX,EDI                         ; 005bbf6f
    ADD ESP,0x10                        ; 005bbf71
    POP EBP                             ; 005bbf74
    POP ES                              ; 005bbf75
    POP EDI                             ; 005bbf76
    POP ESI                             ; 005bbf77
    POP EBX                             ; 005bbf78
    RET                                 ; 005bbf79
    MOV dword ptr [EBX + 0x4],0x0       ; 005bbf7a
        ;   Label: LAB_005bbf7a
    MOV AL,byte ptr [EBX + 0x15]        ; 005bbf81
    MOV byte ptr [ESI],AL               ; 005bbf84
    MOV dword ptr [EBX + 0x20],0x1      ; 005bbf86
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bbf8d
        ;   Label: LAB_005bbf8d
    MOV EAX,EDI                         ; 005bbf91
    ADD ESP,0x10                        ; 005bbf93
    POP EBP                             ; 005bbf96
    POP ES                              ; 005bbf97
    POP EDI                             ; 005bbf98
    POP ESI                             ; 005bbf99
    POP EBX                             ; 005bbf9a
    RET                                 ; 005bbf9b

