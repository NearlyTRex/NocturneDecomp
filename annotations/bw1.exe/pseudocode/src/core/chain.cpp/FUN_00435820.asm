; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_FUN_00435820(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_chain.cpp_FUN_004357a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435820
        ;   Label: core_chain.cpp_FUN_00435820
    PUSH ESI                            ; 00435821
    PUSH EDI                            ; 00435822
    PUSH EBP                            ; 00435823
    SUB ESP,0x48                        ; 00435824
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00435827
    PUSH EBP                            ; 0043582b
    CALL core_actor.cpp_FUN_00408850    ; 0043582c
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBP + 0x164]     ; 00435831
    ADD ESP,0x4                         ; 00435837
    TEST EDX,EDX                        ; 0043583a
    JNZ 0x00435893                      ; 0043583c
        ;   XREF to: 00435893 (CONDITIONAL_JUMP)  ; LAB_00435893
    MOV EAX,dword ptr [EBP + 0x158]     ; 0043583e
        ;   Label: LAB_0043583e
    DEC EAX                             ; 00435844
    MOV dword ptr [ESP + 0x44],EAX      ; 00435845
    FILD dword ptr [ESP + 0x44]         ; 00435849
    FDIVR float ptr [EBP + 0x15c]       ; 0043584d
    MOV dword ptr [EBP + 0x218],0x0     ; 00435853
    MOV dword ptr [EBP + 0x280],0x0     ; 0043585d
    MOV dword ptr [EBP + 0x284],0x0     ; 00435867
    MOV dword ptr [EBP + 0x56c],0xc61c3f9a ; 00435871
    MOV dword ptr [EBP + 0x574],0x0     ; 0043587b
    FSTP float ptr [EBP + 0x160]        ; 00435885
    ADD ESP,0x48                        ; 0043588b
    POP EBP                             ; 0043588e
    POP EDI                             ; 0043588f
    POP ESI                             ; 00435890
    POP EBX                             ; 00435891
    RET                                 ; 00435892
    PUSH EBP                            ; 00435893
        ;   Label: LAB_00435893
    LEA ESI,[ESP + 0x4]                 ; 00435894
    LEA EDI,[ESP + 0x1c]                ; 00435898
    CALL core_chain.cpp_FUN_004357a0    ; 0043589c
        ;   XREF to: 004357a0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_004357a0()
    LEA ESI,[ESP + 0x4]                 ; 004358a1
    ADD ESP,0x4                         ; 004358a5
    MOVSD ES:EDI,ESI                    ; 004358a8
    MOVSD ES:EDI,ESI                    ; 004358a9
    MOVSD ES:EDI,ESI                    ; 004358aa
    LEA EAX,[EBP + 0x20]                ; 004358ab
    FLD float ptr [ESP + 0x18]          ; 004358ae
    FLD float ptr [ESP + 0x1c]          ; 004358b2
    FLD float ptr [ESP + 0x20]          ; 004358b6
    LEA EDI,[ESP + 0xc]                 ; 004358ba
    LEA ESI,[ESP + 0x30]                ; 004358be
    FXCH ST2                            ; 004358c2
    FSUB float ptr [EAX]                ; 004358c4
    FXCH                                ; 004358c6
    FSUB float ptr [EAX + 0x4]          ; 004358c8
    FXCH ST2                            ; 004358cb
    FSUB float ptr [EAX + 0x8]          ; 004358cd
    FXCH                                ; 004358d0
    FSTP float ptr [ESP + 0x30]         ; 004358d2
    FXCH                                ; 004358d6
    FSTP float ptr [ESP + 0x34]         ; 004358d8
    FSTP float ptr [ESP + 0x38]         ; 004358dc
    MOVSD ES:EDI,ESI                    ; 004358e0
    MOVSD ES:EDI,ESI                    ; 004358e1
    MOVSD ES:EDI,ESI                    ; 004358e2
    LEA EDI,[ESP + 0x24]                ; 004358e3
    LEA ESI,[EBP + 0x20]                ; 004358e7
    MOVSD ES:EDI,ESI                    ; 004358ea
    MOVSD ES:EDI,ESI                    ; 004358eb
    MOVSD ES:EDI,ESI                    ; 004358ec
    MOV EAX,dword ptr [EBP + 0x158]     ; 004358ed
    DEC EAX                             ; 004358f3
    FLD1                                ; 004358f4
    MOV dword ptr [ESP + 0x44],EAX      ; 004358f6
    FLD float ptr [ESP + 0xc]           ; 004358fa
    FILD dword ptr [ESP + 0x44]         ; 004358fe
    FSTP float ptr [ESP + 0x40]         ; 00435902
    FXCH                                ; 00435906
    FDIV float ptr [ESP + 0x40]         ; 00435908
    FXCH                                ; 0043590c
    FMUL ST1                            ; 0043590e
    FLD float ptr [ESP + 0x10]          ; 00435910
    FMUL ST2                            ; 00435914
    FLD float ptr [ESP + 0x14]          ; 00435916
    FMULP ST3                           ; 0043591a
    XOR ECX,ECX                         ; 0043591c
    MOV EBX,dword ptr [EBP + 0x158]     ; 0043591e
    FXCH                                ; 00435924
    FSTP float ptr [ESP + 0xc]          ; 00435926
    FSTP float ptr [ESP + 0x10]         ; 0043592a
    FSTP float ptr [ESP + 0x14]         ; 0043592e
    TEST EBX,EBX                        ; 00435932
    JLE 0x0043583e                      ; 00435934
        ;   XREF to: 0043583e (CONDITIONAL_JUMP)  ; LAB_0043583e
    LEA EDI,[EBP + 0x28c]               ; 0043593a
    LEA ESI,[EDI + 0x18]                ; 00435940
    LEA EDX,[EDI + 0xc]                 ; 00435943
    IMUL EBX,ECX,0x24                   ; 00435946
        ;   Label: LAB_00435946
    LEA EAX,[ESP + 0x24]                ; 00435949
    ADD EBX,EDI                         ; 0043594d
    CMP EBX,EAX                         ; 0043594f
    JNZ 0x004359c4                      ; 00435951
        ;   XREF to: 004359c4 (CONDITIONAL_JUMP)  ; LAB_004359c4
    IMUL EAX,ECX,0x24                   ; 00435953
        ;   Label: LAB_00435953
    FLD float ptr [ESP + 0x24]          ; 00435956
    FLD float ptr [ESP + 0x28]          ; 0043595a
    FLD float ptr [ESP + 0x2c]          ; 0043595e
    FXCH ST2                            ; 00435962
    FADD float ptr [ESP + 0xc]          ; 00435964
    FXCH                                ; 00435968
    FADD float ptr [ESP + 0x10]         ; 0043596a
    FXCH ST2                            ; 0043596e
    FADD float ptr [ESP + 0x14]         ; 00435970
    FXCH                                ; 00435974
    FSTP float ptr [ESP + 0x24]         ; 00435976
    FXCH                                ; 0043597a
    FSTP float ptr [ESP + 0x28]         ; 0043597c
    FSTP float ptr [ESP + 0x2c]         ; 00435980
    MOV dword ptr [EDX + 0x8],0x0       ; 00435984
    MOV EBX,dword ptr [EDX + 0x8]       ; 0043598b
    MOV dword ptr [EDX + 0x4],EBX       ; 0043598e
    FLD float ptr [EDX + 0x4]           ; 00435991
    ADD EAX,EDI                         ; 00435994
    FSTP float ptr [EDX]                ; 00435996
    CMP ESI,EAX                         ; 00435998
    JZ 0x004359ad                       ; 0043599a
        ;   XREF to: 004359ad (CONDITIONAL_JUMP)  ; LAB_004359ad
    MOV EBX,dword ptr [EAX]             ; 0043599c
    MOV dword ptr [EDX + 0xc],EBX       ; 0043599e
    MOV EBX,dword ptr [EAX + 0x4]       ; 004359a1
    MOV dword ptr [EDX + 0x10],EBX      ; 004359a4
    MOV EBX,dword ptr [EAX + 0x8]       ; 004359a7
    MOV dword ptr [EDX + 0x14],EBX      ; 004359aa
    ADD ESI,0x24                        ; 004359ad
        ;   Label: LAB_004359ad
    INC ECX                             ; 004359b0
    MOV EAX,dword ptr [EBP + 0x158]     ; 004359b1
    ADD EDX,0x24                        ; 004359b7
    CMP ECX,EAX                         ; 004359ba
    JGE 0x0043583e                      ; 004359bc
        ;   XREF to: 0043583e (CONDITIONAL_JUMP)  ; LAB_0043583e
    JMP 0x00435946                      ; 004359c2
        ;   XREF to: 00435946 (UNCONDITIONAL_JUMP)  ; LAB_00435946
    MOV EAX,dword ptr [ESP + 0x24]      ; 004359c4
        ;   Label: LAB_004359c4
    MOV dword ptr [EBX],EAX             ; 004359c8
    MOV EAX,dword ptr [ESP + 0x28]      ; 004359ca
    MOV dword ptr [EBX + 0x4],EAX       ; 004359ce
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004359d1
    MOV dword ptr [EBX + 0x8],EAX       ; 004359d5
    JMP 0x00435953                      ; 004359d8
        ;   XREF to: 00435953 (UNCONDITIONAL_JUMP)  ; LAB_00435953

