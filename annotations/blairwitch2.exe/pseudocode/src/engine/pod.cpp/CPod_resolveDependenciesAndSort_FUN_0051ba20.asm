; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_0051ba20(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_pod.cpp_CPod_dismountPod_FUN_0051bf10
;   engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70
;   engine_pod.cpp_FUN_0051ae70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ba20
        ;   Label: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0051ba20
    PUSH ESI                            ; 0051ba21
    PUSH EDI                            ; 0051ba22
    PUSH EBP                            ; 0051ba23
    SUB ESP,0xaa0                       ; 0051ba24
    MOV EBP,dword ptr [ESP + 0xab4]     ; 0051ba2a
    XOR EDX,EDX                         ; 0051ba31
        ;   Label: LAB_0051ba31
    MOV EBX,dword ptr [EBP]             ; 0051ba33
    MOV dword ptr [ESP + 0xa88],EDX     ; 0051ba36
    MOV dword ptr [ESP + 0xa6c],EDX     ; 0051ba3d
    TEST EBX,EBX                        ; 0051ba44
    JLE 0x0051bab7                      ; 0051ba46
        ;   XREF to: 0051bab7 (CONDITIONAL_JUMP)  ; LAB_0051bab7
    MOV dword ptr [ESP + 0xa74],EBP     ; 0051ba48
    MOV EAX,dword ptr [ESP + 0xa74]     ; 0051ba4f
        ;   Label: LAB_0051ba4f
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051ba56
    MOV dword ptr [ESP + 0xa98],EAX     ; 0051ba59
    XOR EAX,EAX                         ; 0051ba60
    XOR EBX,EBX                         ; 0051ba62
    MOV dword ptr [ESP + 0xa70],EAX     ; 0051ba64
    MOV EAX,dword ptr [ESP + 0xa98]     ; 0051ba6b
        ;   Label: LAB_0051ba6b
    MOV EAX,dword ptr [EAX + 0x424]     ; 0051ba72
    CMP EBX,EAX                         ; 0051ba78
    JL 0x0051bba6                       ; 0051ba7a
        ;   XREF to: 0051bba6 (CONDITIONAL_JUMP)  ; LAB_0051bba6
    CMP dword ptr [ESP + 0xa70],0x0     ; 0051ba80
    JZ 0x0051bbf7                       ; 0051ba88
        ;   XREF to: 0051bbf7 (CONDITIONAL_JUMP)  ; LAB_0051bbf7
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0051ba8e
        ;   Label: LAB_0051ba8e
    PUSH EAX                            ; 0051ba95
    PUSH EBP                            ; 0051ba96
    CALL engine_pod.cpp_CPod_dismountPod_FUN_0051bf10 ; 0051ba97
        ;   XREF to: 0051bf10 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_dismountPod_FUN_0051bf10(CPod * this_ptr, int index)
    MOV EDX,0x1                         ; 0051ba9c
    ADD ESP,0x8                         ; 0051baa1
    MOV dword ptr [ESP + 0xa6c],EDX     ; 0051baa4
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0051baab
        ;   Label: LAB_0051baab
    CMP EAX,dword ptr [EBP]             ; 0051bab2
    JL 0x0051ba4f                       ; 0051bab5
        ;   XREF to: 0051ba4f (CONDITIONAL_JUMP)  ; LAB_0051ba4f
    CMP dword ptr [ESP + 0xa6c],0x0     ; 0051bab7
        ;   Label: LAB_0051bab7
    JNZ 0x0051ba31                      ; 0051babf
        ;   XREF to: 0051ba31 (CONDITIONAL_JUMP)  ; LAB_0051ba31
    MOV EDI,dword ptr [EBP]             ; 0051bac5
    DEC EDI                             ; 0051bac8
    TEST EDI,EDI                        ; 0051bac9
    JLE 0x0051bafc                      ; 0051bacb
        ;   XREF to: 0051bafc (CONDITIONAL_JUMP)  ; LAB_0051bafc
    XOR EDX,EDX                         ; 0051bacd
        ;   Label: LAB_0051bacd
    TEST EDI,EDI                        ; 0051bacf
    JLE 0x0051baf7                      ; 0051bad1
        ;   XREF to: 0051baf7 (CONDITIONAL_JUMP)  ; LAB_0051baf7
    MOV EAX,EBP                         ; 0051bad3
    MOV EBX,dword ptr [EAX + 0x4]       ; 0051bad5
        ;   Label: LAB_0051bad5
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051bad8
    MOV ESI,dword ptr [EBX + 0x408]     ; 0051badb
    CMP ESI,dword ptr [ECX + 0x408]     ; 0051bae1
    JLE 0x0051baef                      ; 0051bae7
        ;   XREF to: 0051baef (CONDITIONAL_JUMP)  ; LAB_0051baef
    MOV dword ptr [EAX + 0x8],EBX       ; 0051bae9
    MOV dword ptr [EAX + 0x4],ECX       ; 0051baec
    INC EDX                             ; 0051baef
        ;   Label: LAB_0051baef
    ADD EAX,0x4                         ; 0051baf0
    CMP EDX,EDI                         ; 0051baf3
    JL 0x0051bad5                       ; 0051baf5
        ;   XREF to: 0051bad5 (CONDITIONAL_JUMP)  ; LAB_0051bad5
    DEC EDI                             ; 0051baf7
        ;   Label: LAB_0051baf7
    TEST EDI,EDI                        ; 0051baf8
    JG 0x0051bacd                       ; 0051bafa
        ;   XREF to: 0051bacd (CONDITIONAL_JUMP)  ; LAB_0051bacd
    XOR ECX,ECX                         ; 0051bafc
        ;   Label: LAB_0051bafc
    MOV ESI,dword ptr [EBP]             ; 0051bafe
    MOV dword ptr [ESP + 0xa68],ECX     ; 0051bb01
    MOV dword ptr [ESP + 0xa8c],ECX     ; 0051bb08
    TEST ESI,ESI                        ; 0051bb0f
    JLE 0x0051bc47                      ; 0051bb11
        ;   XREF to: 0051bc47 (CONDITIONAL_JUMP)  ; LAB_0051bc47
    MOV dword ptr [ESP + 0xa64],EBP     ; 0051bb17
    XOR EBX,EBX                         ; 0051bb1e
        ;   Label: LAB_0051bb1e
    MOV EAX,dword ptr [ESP + 0xa64]     ; 0051bb20
    MOV dword ptr [ESP + 0xa80],EBX     ; 0051bb27
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051bb2e
    MOV EBX,dword ptr [ESP + 0xa8c]     ; 0051bb31
    MOV dword ptr [ESP + 0xa84],EAX     ; 0051bb38
    SHL EBX,0x3                         ; 0051bb3f
    MOV EAX,dword ptr [ESP + 0xa84]     ; 0051bb42
        ;   Label: LAB_0051bb42
    MOV ESI,dword ptr [ESP + 0xa80]     ; 0051bb49
    CMP ESI,dword ptr [EAX + 0x424]     ; 0051bb50
    JGE 0x0051bc1c                      ; 0051bb56
        ;   XREF to: 0051bc1c (CONDITIONAL_JUMP)  ; LAB_0051bc1c
    PUSH ESI                            ; 0051bb5c
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0051bb5d
    PUSH EAX                            ; 0051bb64
    LEA ESI,[ESP + 0x648]               ; 0051bb65
    LEA EDI,[ESP + 0x960]               ; 0051bb6c
    CALL engine_pod.cpp_FUN_0051ae70    ; 0051bb73
        ;   XREF to: 0051ae70 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0051ae70()
    MOV ECX,0x42                        ; 0051bb78
    LEA ESI,[ESP + 0x648]               ; 0051bb7d
    ADD ESP,0x8                         ; 0051bb84
    MOVSD.REP ES:EDI,ESI                ; 0051bb87
    CMP dword ptr [ESP + 0xa58],0x0     ; 0051bb89
    JNZ 0x0051bcee                      ; 0051bb91
        ;   XREF to: 0051bcee (CONDITIONAL_JUMP)  ; LAB_0051bcee
    INC dword ptr [ESP + 0xa80]         ; 0051bb97
        ;   Label: LAB_0051bb97
    JMP 0x0051bb42                      ; 0051bb9e
        ;   XREF to: 0051bb42 (UNCONDITIONAL_JUMP)  ; LAB_0051bb42
    INC EBX                             ; 0051bba0
        ;   Label: LAB_0051bba0
    JMP 0x0051ba6b                      ; 0051bba1
        ;   XREF to: 0051ba6b (UNCONDITIONAL_JUMP)  ; LAB_0051ba6b
    PUSH EBX                            ; 0051bba6
        ;   Label: LAB_0051bba6
    MOV ESI,dword ptr [ESP + 0xa9c]     ; 0051bba7
    PUSH ESI                            ; 0051bbae
    LEA ESI,[ESP + 0x858]               ; 0051bbaf
    LEA EDI,[ESP + 0x750]               ; 0051bbb6
    CALL engine_pod.cpp_FUN_0051ae70    ; 0051bbbd
        ;   XREF to: 0051ae70 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0051ae70()
    MOV ECX,0x42                        ; 0051bbc2
    LEA ESI,[ESP + 0x858]               ; 0051bbc7
    ADD ESP,0x8                         ; 0051bbce
    MOVSD.REP ES:EDI,ESI                ; 0051bbd1
    CMP dword ptr [ESP + 0x84c],0x0     ; 0051bbd3
    JZ 0x0051bba0                       ; 0051bbdb
        ;   XREF to: 0051bba0 (CONDITIONAL_JUMP)  ; LAB_0051bba0
    LEA EAX,[ESP + 0x748]               ; 0051bbdd
    PUSH EAX                            ; 0051bbe4
    PUSH EBP                            ; 0051bbe5
    CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70 ; 0051bbe6
        ;   XREF to: 0051be70 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70(CPod * this_ptr, char * target_filename)
    ADD ESP,0x8                         ; 0051bbeb
    TEST EAX,EAX                        ; 0051bbee
    JGE 0x0051bba0                      ; 0051bbf0
        ;   XREF to: 0051bba0 (CONDITIONAL_JUMP)  ; LAB_0051bba0
    JMP 0x0051ba8e                      ; 0051bbf2
        ;   XREF to: 0051ba8e (UNCONDITIONAL_JUMP)  ; LAB_0051ba8e
    MOV EBX,dword ptr [ESP + 0xa88]     ; 0051bbf7
        ;   Label: LAB_0051bbf7
    MOV ECX,dword ptr [ESP + 0xa74]     ; 0051bbfe
    INC EBX                             ; 0051bc05
    ADD ECX,0x4                         ; 0051bc06
    MOV dword ptr [ESP + 0xa88],EBX     ; 0051bc09
    MOV dword ptr [ESP + 0xa74],ECX     ; 0051bc10
    JMP 0x0051baab                      ; 0051bc17
        ;   XREF to: 0051baab (UNCONDITIONAL_JUMP)  ; LAB_0051baab
    MOV EDI,dword ptr [ESP + 0xa64]     ; 0051bc1c
        ;   Label: LAB_0051bc1c
    MOV EAX,dword ptr [ESP + 0xa68]     ; 0051bc23
    MOV EDX,dword ptr [EBP]             ; 0051bc2a
    ADD EDI,0x4                         ; 0051bc2d
    INC EAX                             ; 0051bc30
    MOV dword ptr [ESP + 0xa64],EDI     ; 0051bc31
    MOV dword ptr [ESP + 0xa68],EAX     ; 0051bc38
    CMP EAX,EDX                         ; 0051bc3f
    JL 0x0051bb1e                       ; 0051bc41
        ;   XREF to: 0051bb1e (CONDITIONAL_JUMP)  ; LAB_0051bb1e
    MOV ECX,dword ptr [EBP]             ; 0051bc47
        ;   Label: LAB_0051bc47
    XOR ESI,ESI                         ; 0051bc4a
    TEST ECX,ECX                        ; 0051bc4c
    JLE 0x0051bce3                      ; 0051bc4e
        ;   XREF to: 0051bce3 (CONDITIONAL_JUMP)  ; LAB_0051bce3
    MOV dword ptr [ESP + 0xa60],EBP     ; 0051bc54
    MOV EDX,dword ptr [EBP]             ; 0051bc5b
        ;   Label: LAB_0051bc5b
    MOV dword ptr [ESP + 0xa7c],ESI     ; 0051bc5e
    CMP ESI,EDX                         ; 0051bc65
    JL 0x0051be2f                       ; 0051bc67
        ;   XREF to: 0051be2f (CONDITIONAL_JUMP)  ; LAB_0051be2f
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 0051bc6d
        ;   Label: LAB_0051bc6d
    CMP EAX,dword ptr [EBP]             ; 0051bc74
    JL 0x0051bc9b                       ; 0051bc77
        ;   XREF to: 0051bc9b (CONDITIONAL_JUMP)  ; LAB_0051bc9b
    MOV EAX,0x5e291e                    ; 0051bc79
    MOV EDX,0x615                       ; 0051bc7e
    PUSH 0x5e2930                       ; 0051bc83
    MOV [0x01d046a0],EAX                ; 0051bc88 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0051bc8d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051bc93
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051bc98
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 0051bc9b
        ;   Label: LAB_0051bc9b
    SHL EAX,0x2                         ; 0051bca2
    ADD EAX,EBP                         ; 0051bca5
    MOV EDX,dword ptr [ESP + 0xa7c]     ; 0051bca7
    MOV EDI,dword ptr [EAX + 0x4]       ; 0051bcae
    CMP ESI,EDX                         ; 0051bcb1
    JGE 0x0051bcc3                      ; 0051bcb3
        ;   XREF to: 0051bcc3 (CONDITIONAL_JUMP)  ; LAB_0051bcc3
    SUB EAX,0x4                         ; 0051bcb5
        ;   Label: LAB_0051bcb5
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051bcb8
    DEC EDX                             ; 0051bcbb
    MOV dword ptr [EAX + 0x8],ECX       ; 0051bcbc
    CMP EDX,ESI                         ; 0051bcbf
    JG 0x0051bcb5                       ; 0051bcc1
        ;   XREF to: 0051bcb5 (CONDITIONAL_JUMP)  ; LAB_0051bcb5
    MOV EAX,dword ptr [ESP + 0xa60]     ; 0051bcc3
        ;   Label: LAB_0051bcc3
    MOV dword ptr [EAX + 0x4],EDI       ; 0051bcca
    LEA EDI,[EAX + 0x4]                 ; 0051bccd
    INC ESI                             ; 0051bcd0
    MOV EAX,dword ptr [EBP]             ; 0051bcd1
    MOV dword ptr [ESP + 0xa60],EDI     ; 0051bcd4
    CMP ESI,EAX                         ; 0051bcdb
    JL 0x0051bc5b                       ; 0051bcdd
        ;   XREF to: 0051bc5b (CONDITIONAL_JUMP)  ; LAB_0051bc5b
    ADD ESP,0xaa0                       ; 0051bce3
        ;   Label: LAB_0051bce3
    POP EBP                             ; 0051bce9
    POP EDI                             ; 0051bcea
    POP ESI                             ; 0051bceb
    POP EBX                             ; 0051bcec
    RET                                 ; 0051bced
    LEA EAX,[ESP + 0x958]               ; 0051bcee
        ;   Label: LAB_0051bcee
    PUSH EAX                            ; 0051bcf5
    PUSH EBP                            ; 0051bcf6
    CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70 ; 0051bcf7
        ;   XREF to: 0051be70 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70(CPod * this_ptr, char * target_filename)
    ADD ESP,0x8                         ; 0051bcfc
    MOV ESI,EAX                         ; 0051bcff
    TEST EAX,EAX                        ; 0051bd01
    JL 0x0051bb97                       ; 0051bd03
        ;   XREF to: 0051bb97 (CONDITIONAL_JUMP)  ; LAB_0051bb97
    CMP dword ptr [ESP + 0xa8c],0xc8    ; 0051bd09
    JL 0x0051bd38                       ; 0051bd14
        ;   XREF to: 0051bd38 (CONDITIONAL_JUMP)  ; LAB_0051bd38
    MOV EDI,0x5e28e5                    ; 0051bd16
    MOV EAX,0x5c3                       ; 0051bd1b
    PUSH 0x5e28f7                       ; 0051bd20
    MOV dword ptr [0x01d046a0],EDI      ; 0051bd25 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051bd2b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051bd30
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051bd35
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051bd38
        ;   Label: LAB_0051bd38
    MOV EDX,dword ptr [ESP + 0xa58]     ; 0051bd3f
    ADD EAX,EBP                         ; 0051bd46
    TEST EDX,EDX                        ; 0051bd48
    JL 0x0051bd7b                       ; 0051bd4a
        ;   XREF to: 0051bd7b (CONDITIONAL_JUMP)  ; LAB_0051bd7b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051bd4c
    MOV dword ptr [ESP + EBX*0x1],EAX   ; 0051bd4f
    MOV EAX,dword ptr [ESP + 0xa84]     ; 0051bd52
    MOV dword ptr [ESP + EBX*0x1 + 0x4],EAX ; 0051bd59
        ;   Label: LAB_0051bd59
    MOV ECX,dword ptr [ESP + 0xa8c]     ; 0051bd5d
    INC ECX                             ; 0051bd64
    ADD EBX,0x8                         ; 0051bd65
    MOV dword ptr [ESP + 0xa8c],ECX     ; 0051bd68
    INC dword ptr [ESP + 0xa80]         ; 0051bd6f
    JMP 0x0051bb42                      ; 0051bd76
        ;   XREF to: 0051bb42 (UNCONDITIONAL_JUMP)  ; LAB_0051bb42
    MOV EDX,dword ptr [ESP + 0xa84]     ; 0051bd7b
        ;   Label: LAB_0051bd7b
    MOV dword ptr [ESP + EBX*0x1],EDX   ; 0051bd82
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051bd85
    JMP 0x0051bd59                      ; 0051bd88
        ;   XREF to: 0051bd59 (UNCONDITIONAL_JUMP)  ; LAB_0051bd59
    MOV ECX,dword ptr [ESP + 0xa78]     ; 0051bd8a
        ;   Label: LAB_0051bd8a
    MOV EBX,dword ptr [ESP + 0xa7c]     ; 0051bd91
    MOV EDI,dword ptr [EBP]             ; 0051bd98
    ADD ECX,0x4                         ; 0051bd9b
    INC EBX                             ; 0051bd9e
    MOV dword ptr [ESP + 0xa78],ECX     ; 0051bd9f
    MOV dword ptr [ESP + 0xa7c],EBX     ; 0051bda6
    CMP EBX,EDI                         ; 0051bdad
    JGE 0x0051bc6d                      ; 0051bdaf
        ;   XREF to: 0051bc6d (CONDITIONAL_JUMP)  ; LAB_0051bc6d
    XOR EAX,EAX                         ; 0051bdb5
        ;   Label: LAB_0051bdb5
    MOV EDX,dword ptr [ESP + 0xa8c]     ; 0051bdb7
    MOV dword ptr [ESP + 0xa9c],EAX     ; 0051bdbe
    TEST EDX,EDX                        ; 0051bdc5
    JLE 0x0051be16                      ; 0051bdc7
        ;   XREF to: 0051be16 (CONDITIONAL_JUMP)  ; LAB_0051be16
    MOV EAX,dword ptr [ESP + 0xa78]     ; 0051bdc9
    MOV dword ptr [ESP + 0xa90],EAX     ; 0051bdd0
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051bdd7
    XOR EDI,EDI                         ; 0051bdde
    MOV dword ptr [ESP + 0xa94],EAX     ; 0051bde0
    MOV EDX,dword ptr [ESP + 0xa90]     ; 0051bde7
        ;   Label: LAB_0051bde7
    MOV EAX,dword ptr [ESP + EDI*0x1 + 0x4] ; 0051bdee
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051bdf2
    CMP EAX,ECX                         ; 0051bdf5
    JZ 0x0051be44                       ; 0051bdf7
        ;   XREF to: 0051be44 (CONDITIONAL_JUMP)  ; LAB_0051be44
    MOV ECX,dword ptr [ESP + 0xa9c]     ; 0051bdf9
        ;   Label: LAB_0051bdf9
    MOV EBX,dword ptr [ESP + 0xa94]     ; 0051be00
    INC ECX                             ; 0051be07
    ADD EDI,0x8                         ; 0051be08
    MOV dword ptr [ESP + 0xa9c],ECX     ; 0051be0b
    CMP EDI,EBX                         ; 0051be12
    JL 0x0051bde7                       ; 0051be14
        ;   XREF to: 0051bde7 (CONDITIONAL_JUMP)  ; LAB_0051bde7
    MOV EAX,dword ptr [ESP + 0xa9c]     ; 0051be16
        ;   Label: LAB_0051be16
    CMP EAX,dword ptr [ESP + 0xa8c]     ; 0051be1d
    JGE 0x0051bc6d                      ; 0051be24
        ;   XREF to: 0051bc6d (CONDITIONAL_JUMP)  ; LAB_0051bc6d
    JMP 0x0051bd8a                      ; 0051be2a
        ;   XREF to: 0051bd8a (UNCONDITIONAL_JUMP)  ; LAB_0051bd8a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051be2f
        ;   Label: LAB_0051be2f
    ADD EAX,EBP                         ; 0051be36
    MOV dword ptr [ESP + 0xa78],EAX     ; 0051be38
    JMP 0x0051bdb5                      ; 0051be3f
        ;   XREF to: 0051bdb5 (UNCONDITIONAL_JUMP)  ; LAB_0051bdb5
    XOR EAX,ECX                         ; 0051be44
        ;   Label: LAB_0051be44
    TEST ESI,ESI                        ; 0051be46
    JLE 0x0051be56                      ; 0051be48
        ;   XREF to: 0051be56 (CONDITIONAL_JUMP)  ; LAB_0051be56
    MOV EDX,EBP                         ; 0051be4a
    MOV EBX,EDI                         ; 0051be4c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051be4e
        ;   Label: LAB_0051be4e
    CMP ECX,dword ptr [ESP + EBX*0x1]   ; 0051be51
    JNZ 0x0051be5c                      ; 0051be54
        ;   XREF to: 0051be5c (CONDITIONAL_JUMP)  ; LAB_0051be5c
    CMP EAX,ESI                         ; 0051be56
        ;   Label: LAB_0051be56
    JGE 0x0051be16                      ; 0051be58
        ;   XREF to: 0051be16 (CONDITIONAL_JUMP)  ; LAB_0051be16
    JMP 0x0051bdf9                      ; 0051be5a
        ;   XREF to: 0051bdf9 (UNCONDITIONAL_JUMP)  ; LAB_0051bdf9
    INC EAX                             ; 0051be5c
        ;   Label: LAB_0051be5c
    ADD EDX,0x4                         ; 0051be5d
    CMP EAX,ESI                         ; 0051be60
    JL 0x0051be4e                       ; 0051be62
        ;   XREF to: 0051be4e (CONDITIONAL_JUMP)  ; LAB_0051be4e
    CMP EAX,ESI                         ; 0051be64
    JGE 0x0051be16                      ; 0051be66
        ;   XREF to: 0051be16 (CONDITIONAL_JUMP)  ; LAB_0051be16
    JMP 0x0051bdf9                      ; 0051be68
        ;   XREF to: 0051bdf9 (UNCONDITIONAL_JUMP)  ; LAB_0051bdf9

