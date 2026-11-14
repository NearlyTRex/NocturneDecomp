; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bce2c(int param_1,undefined4 param_2,HMODULE param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bd078 at 005bd08a
;
; Referenced Globals:
;   void* PTR_ExitProcess_005c8534 = 001c8ce8
;   void* PTR_GetCommandLineA_005c8564 = 001c8db6
;   void* PTR_GetCommandLineW_005c8568 = 001c8dc8
;   void* PTR_GetEnvironmentStrings_005c8588 = 001c8e6c
;   void* PTR_GetModuleFileNameA_005c85a8 = 001c8ef8
;   void* PTR_GetVersion_005c85c4 = 001c8f80
;   undefined4 DAT_005f19e4
;   undefined4 DAT_0061ed94
;   undefined4 DAT_0061f244
;   undefined4 DAT_0061f248
;   undefined4 DAT_0061f24c
;   undefined4 DAT_0061f250
;   undefined4 DAT_0061f254
;   undefined4 DAT_0061f258
;   undefined4 DAT_0061f281
;   ... and 14 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c0a90
;   crt_unknown.c_FUN_005c293c
;   crt_unknown.c_FUN_005c2c60
;   crt_unknown.c_FUN_005c2d10
;   crt_unknown.c_FUN_005c2d60
;   ExitProcess
;   GetCommandLineA
;   GetCommandLineW
;   GetEnvironmentStrings
;   GetModuleFileNameA
;   GetVersion
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bce2c
        ;   Label: crt_unknown.c_FUN_005bce2c
    PUSH ESI                            ; 005bce2d
    PUSH EDI                            ; 005bce2e
    PUSH EBP                            ; 005bce2f
    MOV ESI,dword ptr [ESP + 0x14]      ; 005bce30
    MOV EDX,dword ptr [ESP + 0x18]      ; 005bce34
    PUSH EDX                            ; 005bce38
    MOV dword ptr [0x02680170],ESI      ; 005bce39 | DAT_02680170
    CALL crt_unknown.c_FUN_005c293c     ; 005bce3f
        ;   XREF to: 005c293c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c293c()
    ADD ESP,0x4                         ; 005bce44
    MOV [0x0268017c],EAX                ; 005bce47 | DAT_0268017c
    TEST EAX,EAX                        ; 005bce4c
    JNZ 0x005bce61                      ; 005bce4e
        ;   XREF to: 005bce61 (CONDITIONAL_JUMP)  ; LAB_005bce61
    TEST ESI,ESI                        ; 005bce50
    JNZ 0x005bd071                      ; 005bce52
        ;   XREF to: 005bd071 (CONDITIONAL_JUMP)  ; LAB_005bd071
    PUSH 0x1                            ; 005bce58
    CALL dword ptr CS:[0x5c8534]        ; 005bce5a | PTR_ExitProcess_005c8534
    CALL crt_unknown.c_FUN_005c0a90     ; 005bce61
        ;   XREF to: 005c0a90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0a90()
        ;   Label: LAB_005bce61
    CALL dword ptr CS:[0x5c8588]        ; 005bce66 | PTR_GetEnvironmentStrings_005c8588
    XOR EBX,EBX                         ; 005bce6d
    MOV [0x0061f281],EAX                ; 005bce6f | DAT_0061f281
    MOV dword ptr [0x026807e4],EBX      ; 005bce74 | DAT_026807e4
    CALL dword ptr CS:[0x5c85c4]        ; 005bce7a | PTR_GetVersion_005c85c4
    MOV EDX,EAX                         ; 005bce81
    MOV EBX,EAX                         ; 005bce83
    MOV [0x0061f287],AL                 ; 005bce85 | DAT_0061f287
    SHR EAX,0x10                        ; 005bce8a
    AND EAX,0xffff                      ; 005bce8d
    MOV [0x0061f289],AX                 ; 005bce92 | DAT_0061f289
    XOR EAX,EAX                         ; 005bce98
    MOV AX,[0x0061f289]                 ; 005bce9a | DAT_0061f289
    AND EDX,0xffff                      ; 005bcea0
    MOV [0x0061f28b],EAX                ; 005bcea6 | DAT_0061f28b
    XOR EAX,EAX                         ; 005bceab
    SAR EDX,0x8                         ; 005bcead
    MOV AL,BL                           ; 005bceb0
    AND EDX,0xff                        ; 005bceb2
    MOV [0x0061f28f],EAX                ; 005bceb8 | DAT_0061f28f
    XOR EAX,EAX                         ; 005bcebd
    PUSH 0x104                          ; 005bcebf
    MOV AL,DL                           ; 005bcec4
    MOV byte ptr [0x0061f288],DL        ; 005bcec6 | DAT_0061f288
    MOV [0x0061f293],EAX                ; 005bcecc | DAT_0061f293
    MOV EAX,[0x0061f28f]                ; 005bced1 | DAT_0061f28f
    MOV EDX,dword ptr [0x0061f293]      ; 005bced6 | DAT_0061f293
    SHL EAX,0x8                         ; 005bcedc
    PUSH 0x2680180                      ; 005bcedf | DAT_02680180
    OR EAX,EDX                          ; 005bcee4
    PUSH 0x0                            ; 005bcee6
    MOV [0x0061f297],EAX                ; 005bcee8 | DAT_0061f297
    CALL dword ptr CS:[0x5c85a8]        ; 005bceed | PTR_GetModuleFileNameA_005c85a8
    PUSH 0x208                          ; 005bcef4
    PUSH 0x2680284                      ; 005bcef9
    MOV ECX,0x2680180                   ; 005bcefe
    PUSH 0x0                            ; 005bcf03
    MOV EDI,0x2680284                   ; 005bcf05
    MOV dword ptr [0x0061f248],ECX      ; 005bcf0a | DAT_0061f248
    CALL crt_unknown.c_FUN_005c2c60     ; 005bcf10
        ;   XREF to: 005c2c60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2c60()
    ADD ESP,0xc                         ; 005bcf15
    MOV dword ptr [0x0061f254],EDI      ; 005bcf18 | DAT_0061f254
    CALL dword ptr CS:[0x5c8564]        ; 005bcf1e | PTR_GetCommandLineA_005c8564
    PUSH EAX                            ; 005bcf25
    CALL crt_unknown.c_FUN_005c2d10     ; 005bcf26
        ;   XREF to: 005c2d10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2d10()
    MOV EDX,EAX                         ; 005bcf2b
    ADD ESP,0x4                         ; 005bcf2d
    MOV BL,byte ptr [EAX]               ; 005bcf30
    MOV [0x02680174],EAX                ; 005bcf32 | DAT_02680174
    CMP BL,0x22                         ; 005bcf37
    JNZ 0x005bcf5a                      ; 005bcf3a
        ;   XREF to: 005bcf5a (CONDITIONAL_JUMP)  ; LAB_005bcf5a
    MOV BH,byte ptr [EAX + 0x1]         ; 005bcf3c
    INC EAX                             ; 005bcf3f
    CMP BH,BL                           ; 005bcf40
    JZ 0x005bcf52                       ; 005bcf42
        ;   XREF to: 005bcf52 (CONDITIONAL_JUMP)  ; LAB_005bcf52
    CMP byte ptr [EAX],0x0              ; 005bcf44
        ;   Label: LAB_005bcf44
    JZ 0x005bcf52                       ; 005bcf47
        ;   XREF to: 005bcf52 (CONDITIONAL_JUMP)  ; LAB_005bcf52
    MOV DL,byte ptr [EAX + 0x1]         ; 005bcf49
    INC EAX                             ; 005bcf4c
    CMP DL,0x22                         ; 005bcf4d
    JNZ 0x005bcf44                      ; 005bcf50
        ;   XREF to: 005bcf44 (CONDITIONAL_JUMP)  ; LAB_005bcf44
    CMP byte ptr [EAX],0x0              ; 005bcf52
        ;   Label: LAB_005bcf52
    JZ 0x005bcf75                       ; 005bcf55
        ;   XREF to: 005bcf75 (CONDITIONAL_JUMP)  ; LAB_005bcf75
    INC EAX                             ; 005bcf57
    JMP 0x005bcf75                      ; 005bcf58
        ;   XREF to: 005bcf75 (UNCONDITIONAL_JUMP)  ; LAB_005bcf75
    MOV DL,byte ptr [EAX]               ; 005bcf5a
        ;   Label: LAB_005bcf5a
    INC DL                              ; 005bcf5c
    AND EDX,0xff                        ; 005bcf5e
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 005bcf64 | DAT_0061ed94
    JNZ 0x005bcf75                      ; 005bcf6b
        ;   XREF to: 005bcf75 (CONDITIONAL_JUMP)  ; LAB_005bcf75
    CMP byte ptr [EAX],0x0              ; 005bcf6d
    JZ 0x005bcf75                       ; 005bcf70
        ;   XREF to: 005bcf75 (CONDITIONAL_JUMP)  ; LAB_005bcf75
    INC EAX                             ; 005bcf72
    JMP 0x005bcf5a                      ; 005bcf73
        ;   XREF to: 005bcf5a (UNCONDITIONAL_JUMP)  ; LAB_005bcf5a
    MOV DL,byte ptr [EAX]               ; 005bcf75
        ;   Label: LAB_005bcf75
    INC DL                              ; 005bcf77
    AND EDX,0xff                        ; 005bcf79
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 005bcf7f | DAT_0061ed94
    JZ 0x005bcf8b                       ; 005bcf86
        ;   XREF to: 005bcf8b (CONDITIONAL_JUMP)  ; LAB_005bcf8b
    INC EAX                             ; 005bcf88
    JMP 0x005bcf75                      ; 005bcf89
        ;   XREF to: 005bcf75 (UNCONDITIONAL_JUMP)  ; LAB_005bcf75
    MOV [0x0061f244],EAX                ; 005bcf8b | DAT_0061f244
        ;   Label: LAB_005bcf8b
    CALL dword ptr CS:[0x5c8568]        ; 005bcf90 | PTR_GetCommandLineW_005c8568
    TEST EAX,EAX                        ; 005bcf97
    JZ 0x005bd020                       ; 005bcf99
        ;   XREF to: 005bd020 (CONDITIONAL_JUMP)  ; LAB_005bd020
    PUSH EAX                            ; 005bcf9f
    CALL crt_unknown.c_FUN_005c2d60     ; 005bcfa0
        ;   XREF to: 005c2d60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2d60()
    MOV EDX,EAX                         ; 005bcfa5
    ADD ESP,0x4                         ; 005bcfa7
    MOV BX,word ptr [EAX]               ; 005bcfaa
    MOV [0x02680178],EAX                ; 005bcfad | DAT_02680178
    CMP BX,0x22                         ; 005bcfb2
    JNZ 0x005bcfe2                      ; 005bcfb6
        ;   XREF to: 005bcfe2 (CONDITIONAL_JUMP)  ; LAB_005bcfe2
    MOV CX,word ptr [EAX + 0x2]         ; 005bcfb8
    ADD EAX,0x2                         ; 005bcfbc
    CMP CX,BX                           ; 005bcfbf
    JZ 0x005bcfd7                       ; 005bcfc2
        ;   XREF to: 005bcfd7 (CONDITIONAL_JUMP)  ; LAB_005bcfd7
    CMP word ptr [EAX],0x0              ; 005bcfc4
        ;   Label: LAB_005bcfc4
    JZ 0x005bcfd7                       ; 005bcfc8
        ;   XREF to: 005bcfd7 (CONDITIONAL_JUMP)  ; LAB_005bcfd7
    MOV DX,word ptr [EAX + 0x2]         ; 005bcfca
    ADD EAX,0x2                         ; 005bcfce
    CMP DX,0x22                         ; 005bcfd1
    JNZ 0x005bcfc4                      ; 005bcfd5
        ;   XREF to: 005bcfc4 (CONDITIONAL_JUMP)  ; LAB_005bcfc4
    CMP word ptr [EAX],0x0              ; 005bcfd7
        ;   Label: LAB_005bcfd7
    JZ 0x005bd004                       ; 005bcfdb
        ;   XREF to: 005bd004 (CONDITIONAL_JUMP)  ; LAB_005bd004
    ADD EAX,0x2                         ; 005bcfdd
    JMP 0x005bd004                      ; 005bcfe0
        ;   XREF to: 005bd004 (UNCONDITIONAL_JUMP)  ; LAB_005bd004
    MOV EBX,0x2                         ; 005bcfe2
        ;   Label: LAB_005bcfe2
    MOV DL,byte ptr [EAX]               ; 005bcfe7
        ;   Label: LAB_005bcfe7
    INC DL                              ; 005bcfe9
    AND EDX,0xff                        ; 005bcfeb
    TEST byte ptr [EDX + 0x61ed94],BL   ; 005bcff1 | DAT_0061ed94
    JNZ 0x005bd004                      ; 005bcff7
        ;   XREF to: 005bd004 (CONDITIONAL_JUMP)  ; LAB_005bd004
    CMP word ptr [EAX],0x0              ; 005bcff9
    JZ 0x005bd004                       ; 005bcffd
        ;   XREF to: 005bd004 (CONDITIONAL_JUMP)  ; LAB_005bd004
    ADD EAX,0x2                         ; 005bcfff
    JMP 0x005bcfe7                      ; 005bd002
        ;   XREF to: 005bcfe7 (UNCONDITIONAL_JUMP)  ; LAB_005bcfe7
    MOV EBX,0x2                         ; 005bd004
        ;   Label: LAB_005bd004
    MOV DL,byte ptr [EAX]               ; 005bd009
        ;   Label: LAB_005bd009
    INC DL                              ; 005bd00b
    AND EDX,0xff                        ; 005bd00d
    TEST byte ptr [EDX + 0x61ed94],BL   ; 005bd013 | DAT_0061ed94
    JZ 0x005bd025                       ; 005bd019
        ;   XREF to: 005bd025 (CONDITIONAL_JUMP)  ; LAB_005bd025
    ADD EAX,0x2                         ; 005bd01b
    JMP 0x005bd009                      ; 005bd01e
        ;   XREF to: 005bd009 (UNCONDITIONAL_JUMP)  ; LAB_005bd009
    MOV EAX,0x5f19e4                    ; 005bd020 | DAT_005f19e4
        ;   Label: LAB_005bd020
    MOV [0x0061f250],EAX                ; 005bd025 | DAT_0061f250
        ;   Label: LAB_005bd025
    TEST ESI,ESI                        ; 005bd02a
    JZ 0x005bd06c                       ; 005bd02c
        ;   XREF to: 005bd06c (CONDITIONAL_JUMP)  ; LAB_005bd06c
    PUSH 0x104                          ; 005bd02e
    PUSH 0x268048c                      ; 005bd033 | DAT_0268048c
    MOV EBP,dword ptr [ESP + 0x24]      ; 005bd038
    PUSH EBP                            ; 005bd03c
    CALL dword ptr CS:[0x5c85a8]        ; 005bd03d | PTR_GetModuleFileNameA_005c85a8
    PUSH 0x208                          ; 005bd044
    PUSH 0x2680590                      ; 005bd049
    MOV EAX,0x268048c                   ; 005bd04e
    PUSH EBP                            ; 005bd053
    MOV EBX,0x2680590                   ; 005bd054
    MOV [0x0061f24c],EAX                ; 005bd059 | DAT_0061f24c
    CALL crt_unknown.c_FUN_005c2c60     ; 005bd05e
        ;   XREF to: 005c2c60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2c60()
    ADD ESP,0xc                         ; 005bd063
    MOV dword ptr [0x0061f258],EBX      ; 005bd066 | DAT_0061f258
    MOV EAX,0x1                         ; 005bd06c
        ;   Label: LAB_005bd06c
    POP EBP                             ; 005bd071
        ;   Label: LAB_005bd071
    POP EDI                             ; 005bd072
    POP ESI                             ; 005bd073
    POP EBX                             ; 005bd074
    RET                                 ; 005bd075

