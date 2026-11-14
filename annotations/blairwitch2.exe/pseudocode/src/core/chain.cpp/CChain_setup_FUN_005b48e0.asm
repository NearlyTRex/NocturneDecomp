; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_setup_FUN_005b48e0(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_chain.cpp_FUN_005b4860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b48e0
        ;   Label: core_chain.cpp_CChain_setup_FUN_005b48e0
    PUSH ESI                            ; 005b48e1
    PUSH EDI                            ; 005b48e2
    PUSH EBP                            ; 005b48e3
    SUB ESP,0x48                        ; 005b48e4
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005b48e7
    PUSH EBP                            ; 005b48eb
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 005b48ec
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBP + 0x164]     ; 005b48f1
    ADD ESP,0x4                         ; 005b48f7
    TEST EDX,EDX                        ; 005b48fa
    JNZ 0x005b4953                      ; 005b48fc
        ;   XREF to: 005b4953 (CONDITIONAL_JUMP)  ; LAB_005b4953
    MOV EAX,dword ptr [EBP + 0x158]     ; 005b48fe
        ;   Label: LAB_005b48fe
    DEC EAX                             ; 005b4904
    MOV dword ptr [ESP + 0x44],EAX      ; 005b4905
    FILD dword ptr [ESP + 0x44]         ; 005b4909
    FDIVR float ptr [EBP + 0x15c]       ; 005b490d
    MOV dword ptr [EBP + 0x218],0x0     ; 005b4913
    MOV dword ptr [EBP + 0x280],0x0     ; 005b491d
    MOV dword ptr [EBP + 0x284],0x0     ; 005b4927
    MOV dword ptr [EBP + 0x56c],0xc61c3f9a ; 005b4931
    MOV dword ptr [EBP + 0x574],0x0     ; 005b493b
    FSTP float ptr [EBP + 0x160]        ; 005b4945
    ADD ESP,0x48                        ; 005b494b
    POP EBP                             ; 005b494e
    POP EDI                             ; 005b494f
    POP ESI                             ; 005b4950
    POP EBX                             ; 005b4951
    RET                                 ; 005b4952
    PUSH EBP                            ; 005b4953
        ;   Label: LAB_005b4953
    LEA ESI,[ESP + 0x4]                 ; 005b4954
    LEA EDI,[ESP + 0x1c]                ; 005b4958
    CALL core_chain.cpp_FUN_005b4860    ; 005b495c
        ;   XREF to: 005b4860 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_005b4860()
    LEA ESI,[ESP + 0x4]                 ; 005b4961
    ADD ESP,0x4                         ; 005b4965
    MOVSD ES:EDI,ESI                    ; 005b4968
    MOVSD ES:EDI,ESI                    ; 005b4969
    MOVSD ES:EDI,ESI                    ; 005b496a
    LEA EAX,[EBP + 0x20]                ; 005b496b
    FLD float ptr [ESP + 0x18]          ; 005b496e
    FLD float ptr [ESP + 0x1c]          ; 005b4972
    FLD float ptr [ESP + 0x20]          ; 005b4976
    LEA EDI,[ESP + 0xc]                 ; 005b497a
    LEA ESI,[ESP + 0x30]                ; 005b497e
    FXCH ST2                            ; 005b4982
    FSUB float ptr [EAX]                ; 005b4984
    FXCH                                ; 005b4986
    FSUB float ptr [EAX + 0x4]          ; 005b4988
    FXCH ST2                            ; 005b498b
    FSUB float ptr [EAX + 0x8]          ; 005b498d
    FXCH                                ; 005b4990
    FSTP float ptr [ESP + 0x30]         ; 005b4992
    FXCH                                ; 005b4996
    FSTP float ptr [ESP + 0x34]         ; 005b4998
    FSTP float ptr [ESP + 0x38]         ; 005b499c
    MOVSD ES:EDI,ESI                    ; 005b49a0
    MOVSD ES:EDI,ESI                    ; 005b49a1
    MOVSD ES:EDI,ESI                    ; 005b49a2
    LEA EDI,[ESP + 0x24]                ; 005b49a3
    LEA ESI,[EBP + 0x20]                ; 005b49a7
    MOVSD ES:EDI,ESI                    ; 005b49aa
    MOVSD ES:EDI,ESI                    ; 005b49ab
    MOVSD ES:EDI,ESI                    ; 005b49ac
    MOV EAX,dword ptr [EBP + 0x158]     ; 005b49ad
    DEC EAX                             ; 005b49b3
    FLD1                                ; 005b49b4
    MOV dword ptr [ESP + 0x44],EAX      ; 005b49b6
    FLD float ptr [ESP + 0xc]           ; 005b49ba
    FILD dword ptr [ESP + 0x44]         ; 005b49be
    FSTP float ptr [ESP + 0x40]         ; 005b49c2
    FXCH                                ; 005b49c6
    FDIV float ptr [ESP + 0x40]         ; 005b49c8
    FXCH                                ; 005b49cc
    FMUL ST1                            ; 005b49ce
    FLD float ptr [ESP + 0x10]          ; 005b49d0
    FMUL ST2                            ; 005b49d4
    FLD float ptr [ESP + 0x14]          ; 005b49d6
    FMULP ST3                           ; 005b49da
    XOR ECX,ECX                         ; 005b49dc
    MOV EBX,dword ptr [EBP + 0x158]     ; 005b49de
    FXCH                                ; 005b49e4
    FSTP float ptr [ESP + 0xc]          ; 005b49e6
    FSTP float ptr [ESP + 0x10]         ; 005b49ea
    FSTP float ptr [ESP + 0x14]         ; 005b49ee
    TEST EBX,EBX                        ; 005b49f2
    JLE 0x005b48fe                      ; 005b49f4
        ;   XREF to: 005b48fe (CONDITIONAL_JUMP)  ; LAB_005b48fe
    LEA EDI,[EBP + 0x28c]               ; 005b49fa
    LEA ESI,[EDI + 0x18]                ; 005b4a00
    LEA EDX,[EDI + 0xc]                 ; 005b4a03
    IMUL EBX,ECX,0x24                   ; 005b4a06
        ;   Label: LAB_005b4a06
    LEA EAX,[ESP + 0x24]                ; 005b4a09
    ADD EBX,EDI                         ; 005b4a0d
    CMP EBX,EAX                         ; 005b4a0f
    JNZ 0x005b4a84                      ; 005b4a11
        ;   XREF to: 005b4a84 (CONDITIONAL_JUMP)  ; LAB_005b4a84
    IMUL EAX,ECX,0x24                   ; 005b4a13
        ;   Label: LAB_005b4a13
    FLD float ptr [ESP + 0x24]          ; 005b4a16
    FLD float ptr [ESP + 0x28]          ; 005b4a1a
    FLD float ptr [ESP + 0x2c]          ; 005b4a1e
    FXCH ST2                            ; 005b4a22
    FADD float ptr [ESP + 0xc]          ; 005b4a24
    FXCH                                ; 005b4a28
    FADD float ptr [ESP + 0x10]         ; 005b4a2a
    FXCH ST2                            ; 005b4a2e
    FADD float ptr [ESP + 0x14]         ; 005b4a30
    FXCH                                ; 005b4a34
    FSTP float ptr [ESP + 0x24]         ; 005b4a36
    FXCH                                ; 005b4a3a
    FSTP float ptr [ESP + 0x28]         ; 005b4a3c
    FSTP float ptr [ESP + 0x2c]         ; 005b4a40
    MOV dword ptr [EDX + 0x8],0x0       ; 005b4a44
    MOV EBX,dword ptr [EDX + 0x8]       ; 005b4a4b
    MOV dword ptr [EDX + 0x4],EBX       ; 005b4a4e
    FLD float ptr [EDX + 0x4]           ; 005b4a51
    ADD EAX,EDI                         ; 005b4a54
    FSTP float ptr [EDX]                ; 005b4a56
    CMP ESI,EAX                         ; 005b4a58
    JZ 0x005b4a6d                       ; 005b4a5a
        ;   XREF to: 005b4a6d (CONDITIONAL_JUMP)  ; LAB_005b4a6d
    MOV EBX,dword ptr [EAX]             ; 005b4a5c
    MOV dword ptr [EDX + 0xc],EBX       ; 005b4a5e
    MOV EBX,dword ptr [EAX + 0x4]       ; 005b4a61
    MOV dword ptr [EDX + 0x10],EBX      ; 005b4a64
    MOV EBX,dword ptr [EAX + 0x8]       ; 005b4a67
    MOV dword ptr [EDX + 0x14],EBX      ; 005b4a6a
    ADD ESI,0x24                        ; 005b4a6d
        ;   Label: LAB_005b4a6d
    INC ECX                             ; 005b4a70
    MOV EAX,dword ptr [EBP + 0x158]     ; 005b4a71
    ADD EDX,0x24                        ; 005b4a77
    CMP ECX,EAX                         ; 005b4a7a
    JGE 0x005b48fe                      ; 005b4a7c
        ;   XREF to: 005b48fe (CONDITIONAL_JUMP)  ; LAB_005b48fe
    JMP 0x005b4a06                      ; 005b4a82
        ;   XREF to: 005b4a06 (UNCONDITIONAL_JUMP)  ; LAB_005b4a06
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b4a84
        ;   Label: LAB_005b4a84
    MOV dword ptr [EBX],EAX             ; 005b4a88
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b4a8a
    MOV dword ptr [EBX + 0x4],EAX       ; 005b4a8e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b4a91
    MOV dword ptr [EBX + 0x8],EAX       ; 005b4a95
    JMP 0x005b4a13                      ; 005b4a98
        ;   XREF to: 005b4a13 (UNCONDITIONAL_JUMP)  ; LAB_005b4a13

