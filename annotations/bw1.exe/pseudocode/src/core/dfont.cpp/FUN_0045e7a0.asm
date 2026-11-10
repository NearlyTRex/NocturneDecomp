; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_FUN_0045e7a0(void)
;
;
; XREF[1]:
;   core_main.c_FUN_00503a30 at 00503a97
;
; Referenced Globals:
;   undefined4 DAT_0152d23c
;   undefined4 DAT_0152d240
;   undefined4 DAT_0152d244
;   undefined4 DAT_0152d248
;   undefined4 DAT_0152d24c
;   undefined4 DAT_0152d250
;   undefined4 DAT_0152d254
;   undefined4 DAT_0152d258
;   undefined4 DAT_0152d25c
;   undefined4 DAT_0152d260
;   undefined4 DAT_0152d264
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01d7f1b8
;
; Called Functions:
;   crt_unknown.c_FUN_005c0344
;   engine_font.cpp_CBitFont_dtor_FUN_004c0b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e7a0
        ;   Label: core_dfont.cpp_FUN_0045e7a0
    PUSH ESI                            ; 0045e7a1
    PUSH EDI                            ; 0045e7a2
    PUSH EBP                            ; 0045e7a3
    MOV EDX,dword ptr [0x0152d23c]      ; 0045e7a4 | DAT_0152d23c
    TEST EDX,EDX                        ; 0045e7aa
    JNZ 0x0045e925                      ; 0045e7ac
        ;   XREF to: 0045e925 (CONDITIONAL_JUMP)  ; LAB_0045e925
    XOR EBX,EBX                         ; 0045e7b2
        ;   Label: LAB_0045e7b2
    MOV ESI,dword ptr [0x0152d240]      ; 0045e7b4 | DAT_0152d240
    MOV dword ptr [0x0152d23c],EBX      ; 0045e7ba | DAT_0152d23c
    TEST ESI,ESI                        ; 0045e7c0
    JZ 0x0045e7d7                       ; 0045e7c2
        ;   XREF to: 0045e7d7 (CONDITIONAL_JUMP)  ; LAB_0045e7d7
    PUSH EBX                            ; 0045e7c4
    PUSH ESI                            ; 0045e7c5
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e7c6
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e7cb
    PUSH EAX                            ; 0045e7ce
    CALL crt_unknown.c_FUN_005c0344     ; 0045e7cf
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e7d4
    XOR EBP,EBP                         ; 0045e7d7
        ;   Label: LAB_0045e7d7
    MOV EAX,[0x0152d244]                ; 0045e7d9 | DAT_0152d244
    MOV dword ptr [0x0152d240],EBP      ; 0045e7de | DAT_0152d240
    TEST EAX,EAX                        ; 0045e7e4
    JZ 0x0045e7fb                       ; 0045e7e6
        ;   XREF to: 0045e7fb (CONDITIONAL_JUMP)  ; LAB_0045e7fb
    PUSH EBP                            ; 0045e7e8
    PUSH EAX                            ; 0045e7e9
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e7ea
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e7ef
    PUSH EAX                            ; 0045e7f2
    CALL crt_unknown.c_FUN_005c0344     ; 0045e7f3
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e7f8
    XOR ECX,ECX                         ; 0045e7fb
        ;   Label: LAB_0045e7fb
    MOV EBX,dword ptr [0x0152d248]      ; 0045e7fd | DAT_0152d248
    MOV dword ptr [0x0152d244],ECX      ; 0045e803 | DAT_0152d244
    TEST EBX,EBX                        ; 0045e809
    JZ 0x0045e820                       ; 0045e80b
        ;   XREF to: 0045e820 (CONDITIONAL_JUMP)  ; LAB_0045e820
    PUSH ECX                            ; 0045e80d
    PUSH EBX                            ; 0045e80e
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e80f
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e814
    PUSH EAX                            ; 0045e817
    CALL crt_unknown.c_FUN_005c0344     ; 0045e818
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e81d
    XOR EDI,EDI                         ; 0045e820
        ;   Label: LAB_0045e820
    MOV EBP,dword ptr [0x0152d24c]      ; 0045e822 | DAT_0152d24c
    MOV dword ptr [0x0152d248],EDI      ; 0045e828 | DAT_0152d248
    TEST EBP,EBP                        ; 0045e82e
    JZ 0x0045e845                       ; 0045e830
        ;   XREF to: 0045e845 (CONDITIONAL_JUMP)  ; LAB_0045e845
    PUSH EDI                            ; 0045e832
    PUSH EBP                            ; 0045e833
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e834
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e839
    PUSH EAX                            ; 0045e83c
    CALL crt_unknown.c_FUN_005c0344     ; 0045e83d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e842
    XOR EDX,EDX                         ; 0045e845
        ;   Label: LAB_0045e845
    MOV EBX,dword ptr [0x0152d250]      ; 0045e847 | DAT_0152d250
    MOV dword ptr [0x01c3eb50],EDX      ; 0045e84d | DAT_01c3eb50
    MOV dword ptr [0x0152d24c],EDX      ; 0045e853 | DAT_0152d24c
    TEST EBX,EBX                        ; 0045e859
    JZ 0x0045e870                       ; 0045e85b
        ;   XREF to: 0045e870 (CONDITIONAL_JUMP)  ; LAB_0045e870
    PUSH EDX                            ; 0045e85d
    PUSH EBX                            ; 0045e85e
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e85f
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e864
    PUSH EAX                            ; 0045e867
    CALL crt_unknown.c_FUN_005c0344     ; 0045e868
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e86d
    XOR EDI,EDI                         ; 0045e870
        ;   Label: LAB_0045e870
    MOV EBP,dword ptr [0x0152d254]      ; 0045e872 | DAT_0152d254
    MOV dword ptr [0x0152d250],EDI      ; 0045e878 | DAT_0152d250
    TEST EBP,EBP                        ; 0045e87e
    JZ 0x0045e895                       ; 0045e880
        ;   XREF to: 0045e895 (CONDITIONAL_JUMP)  ; LAB_0045e895
    PUSH EDI                            ; 0045e882
    PUSH EBP                            ; 0045e883
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e884
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e889
    PUSH EAX                            ; 0045e88c
    CALL crt_unknown.c_FUN_005c0344     ; 0045e88d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e892
    XOR EDX,EDX                         ; 0045e895
        ;   Label: LAB_0045e895
    MOV ECX,dword ptr [0x01d7f1b8]      ; 0045e897 | DAT_01d7f1b8
    MOV dword ptr [0x0152d254],EDX      ; 0045e89d | DAT_0152d254
    TEST ECX,ECX                        ; 0045e8a3
    JZ 0x0045e920                       ; 0045e8a5
        ;   XREF to: 0045e920 (CONDITIONAL_JUMP)  ; LAB_0045e920
    MOV EBX,dword ptr [0x0152d258]      ; 0045e8ab | DAT_0152d258
    TEST EBX,EBX                        ; 0045e8b1
    JNZ 0x0045e93e                      ; 0045e8b3
        ;   XREF to: 0045e93e (CONDITIONAL_JUMP)  ; LAB_0045e93e
    XOR ESI,ESI                         ; 0045e8b9
        ;   Label: LAB_0045e8b9
    MOV EDI,dword ptr [0x0152d25c]      ; 0045e8bb | DAT_0152d25c
    MOV dword ptr [0x0152d258],ESI      ; 0045e8c1 | DAT_0152d258
    TEST EDI,EDI                        ; 0045e8c7
    JZ 0x0045e8d9                       ; 0045e8c9
        ;   XREF to: 0045e8d9 (CONDITIONAL_JUMP)  ; LAB_0045e8d9
    PUSH 0x2                            ; 0045e8cb
    MOV EDX,dword ptr [EDI + 0x6a44]    ; 0045e8cd
    PUSH EDI                            ; 0045e8d3
    CALL dword ptr [EDX]                ; 0045e8d4
    ADD ESP,0x8                         ; 0045e8d6
    XOR EBP,EBP                         ; 0045e8d9
        ;   Label: LAB_0045e8d9
    MOV EAX,[0x0152d260]                ; 0045e8db | DAT_0152d260
    MOV dword ptr [0x0152d25c],EBP      ; 0045e8e0 | DAT_0152d25c
    TEST EAX,EAX                        ; 0045e8e6
    JZ 0x0045e8f8                       ; 0045e8e8
        ;   XREF to: 0045e8f8 (CONDITIONAL_JUMP)  ; LAB_0045e8f8
    PUSH 0x2                            ; 0045e8ea
    MOV EDX,dword ptr [EAX + 0x6a44]    ; 0045e8ec
    PUSH EAX                            ; 0045e8f2
    CALL dword ptr [EDX]                ; 0045e8f3
    ADD ESP,0x8                         ; 0045e8f5
    XOR EDX,EDX                         ; 0045e8f8
        ;   Label: LAB_0045e8f8
    MOV ECX,dword ptr [0x0152d264]      ; 0045e8fa | DAT_0152d264
    MOV dword ptr [0x0152d260],EDX      ; 0045e900 | DAT_0152d260
    TEST ECX,ECX                        ; 0045e906
    JZ 0x0045e918                       ; 0045e908
        ;   XREF to: 0045e918 (CONDITIONAL_JUMP)  ; LAB_0045e918
    PUSH 0x2                            ; 0045e90a
    MOV EDX,dword ptr [ECX + 0x6a44]    ; 0045e90c
    PUSH ECX                            ; 0045e912
    CALL dword ptr [EDX]                ; 0045e913
    ADD ESP,0x8                         ; 0045e915
    XOR EBX,EBX                         ; 0045e918
        ;   Label: LAB_0045e918
    MOV dword ptr [0x0152d264],EBX      ; 0045e91a | DAT_0152d264
    POP EBP                             ; 0045e920
        ;   Label: LAB_0045e920
    POP EDI                             ; 0045e921
    POP ESI                             ; 0045e922
    POP EBX                             ; 0045e923
    RET                                 ; 0045e924
    PUSH 0x0                            ; 0045e925
        ;   Label: LAB_0045e925
    PUSH EDX                            ; 0045e927
    CALL engine_font.cpp_CBitFont_dtor_FUN_004c0b60 ; 0045e928
        ;   XREF to: 004c0b60 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004c0b60(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045e92d
    PUSH EAX                            ; 0045e930
    CALL crt_unknown.c_FUN_005c0344     ; 0045e931
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045e936
    JMP 0x0045e7b2                      ; 0045e939
        ;   XREF to: 0045e7b2 (UNCONDITIONAL_JUMP)  ; LAB_0045e7b2
    PUSH 0x2                            ; 0045e93e
        ;   Label: LAB_0045e93e
    MOV EDX,dword ptr [EBX + 0x6a44]    ; 0045e940
    PUSH EBX                            ; 0045e946
    CALL dword ptr [EDX]                ; 0045e947
    ADD ESP,0x8                         ; 0045e949
    JMP 0x0045e8b9                      ; 0045e94c
        ;   XREF to: 0045e8b9 (UNCONDITIONAL_JUMP)  ; LAB_0045e8b9

