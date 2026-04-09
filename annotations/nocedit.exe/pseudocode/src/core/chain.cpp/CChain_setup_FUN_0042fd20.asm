; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_setup_FUN_0042fd20(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3f        Stack[-0x3c]:12  CStack_3c
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fd20
        ;   Label: core_chain.cpp_CChain_setup_FUN_0042fd20
    PUSH ESI                            ; 0042fd21
    PUSH EDI                            ; 0042fd22
    PUSH EBP                            ; 0042fd23
    SUB ESP,0x2c                        ; 0042fd24
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042fd27
    PUSH EBP                            ; 0042fd2b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0042fd2c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBP + 0x164]     ; 0042fd31
    ADD ESP,0x4                         ; 0042fd37
    TEST EDX,EDX                        ; 0042fd3a
    JNZ 0x0042fd93                      ; 0042fd3c
        ;   XREF to: 0042fd93 (CONDITIONAL_JUMP)  ; LAB_0042fd93
    MOV EAX,dword ptr [EBP + 0x158]     ; 0042fd3e
        ;   Label: LAB_0042fd3e
    DEC EAX                             ; 0042fd44
    MOV dword ptr [ESP + 0x28],EAX      ; 0042fd45
    FILD dword ptr [ESP + 0x28]         ; 0042fd49
    FDIVR float ptr [EBP + 0x15c]       ; 0042fd4d
    MOV dword ptr [EBP + 0x218],0x0     ; 0042fd53
    MOV dword ptr [EBP + 0x280],0x0     ; 0042fd5d
    MOV dword ptr [EBP + 0x284],0x0     ; 0042fd67
    MOV dword ptr [EBP + 0x56c],0xc61c3f9a ; 0042fd71
    MOV dword ptr [EBP + 0x574],0x0     ; 0042fd7b
    FSTP float ptr [EBP + 0x160]        ; 0042fd85
    ADD ESP,0x2c                        ; 0042fd8b
    POP EBP                             ; 0042fd8e
    POP EDI                             ; 0042fd8f
    POP ESI                             ; 0042fd90
    POP EBX                             ; 0042fd91
    RET                                 ; 0042fd92
    MOV EAX,ESP                         ; 0042fd93
        ;   Label: LAB_0042fd93
    PUSH EAX                            ; 0042fd95
    PUSH EBP                            ; 0042fd96
    CALL core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0 ; 0042fd97
        ;   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0(CChain * this_ptr, CVector3f * out_point)
    LEA EDX,[EBP + 0x20]                ; 0042fd9c
    FLD float ptr [EAX]                 ; 0042fd9f
    FSUB float ptr [EDX]                ; 0042fda1
    ADD ESP,0x8                         ; 0042fda3
    FSTP float ptr [ESP + 0x18]         ; 0042fda6
    FLD float ptr [EAX + 0x4]           ; 0042fdaa
    FSUB float ptr [EDX + 0x4]          ; 0042fdad
    FSTP float ptr [ESP + 0x1c]         ; 0042fdb0
    FLD float ptr [EAX + 0x8]           ; 0042fdb4
    FSUB float ptr [EDX + 0x8]          ; 0042fdb7
    FSTP float ptr [ESP + 0x20]         ; 0042fdba
    MOV EAX,dword ptr [EDX]             ; 0042fdbe
    MOV dword ptr [ESP + 0xc],EAX       ; 0042fdc0
    LEA EAX,[EDX + 0x4]                 ; 0042fdc4
    MOV EAX,dword ptr [EAX]             ; 0042fdc7
    MOV dword ptr [ESP + 0x10],EAX      ; 0042fdc9
    LEA EAX,[EDX + 0x8]                 ; 0042fdcd
    MOV EAX,dword ptr [EAX]             ; 0042fdd0
    MOV dword ptr [ESP + 0x14],EAX      ; 0042fdd2
    MOV EAX,dword ptr [EBP + 0x158]     ; 0042fdd6
    DEC EAX                             ; 0042fddc
    FLD1                                ; 0042fddd
    MOV dword ptr [ESP + 0x28],EAX      ; 0042fddf
    FLD float ptr [ESP + 0x18]          ; 0042fde3
    FILD dword ptr [ESP + 0x28]         ; 0042fde7
    FSTP float ptr [ESP + 0x24]         ; 0042fdeb
    FXCH                                ; 0042fdef
    FDIV float ptr [ESP + 0x24]         ; 0042fdf1
    FXCH                                ; 0042fdf5
    FMUL ST1                            ; 0042fdf7
    FLD float ptr [ESP + 0x1c]          ; 0042fdf9
    FMUL ST2                            ; 0042fdfd
    FLD float ptr [ESP + 0x20]          ; 0042fdff
    FMULP ST3                           ; 0042fe03
    FXCH                                ; 0042fe05
    FSTP float ptr [ESP + 0x18]         ; 0042fe07
    FSTP float ptr [ESP + 0x1c]         ; 0042fe0b
    FSTP float ptr [ESP + 0x20]         ; 0042fe0f
    MOV EBX,dword ptr [EBP + 0x158]     ; 0042fe13
    XOR ECX,ECX                         ; 0042fe19
    TEST EBX,EBX                        ; 0042fe1b
    JLE 0x0042fd3e                      ; 0042fe1d
        ;   XREF to: 0042fd3e (CONDITIONAL_JUMP)  ; LAB_0042fd3e
    LEA EDI,[EBP + 0x28c]               ; 0042fe23
    LEA ESI,[EDI + 0x18]                ; 0042fe29
    LEA EDX,[EDI + 0xc]                 ; 0042fe2c
    IMUL EBX,ECX,0x24                   ; 0042fe2f
        ;   Label: LAB_0042fe2f
    LEA EAX,[ESP + 0xc]                 ; 0042fe32
    ADD EBX,EDI                         ; 0042fe36
    CMP EBX,EAX                         ; 0042fe38
    JNZ 0x0042fead                      ; 0042fe3a
        ;   XREF to: 0042fead (CONDITIONAL_JUMP)  ; LAB_0042fead
    IMUL EAX,ECX,0x24                   ; 0042fe3c
        ;   Label: LAB_0042fe3c
    FLD float ptr [ESP + 0xc]           ; 0042fe3f
    FLD float ptr [ESP + 0x10]          ; 0042fe43
    FLD float ptr [ESP + 0x14]          ; 0042fe47
    FXCH ST2                            ; 0042fe4b
    FADD float ptr [ESP + 0x18]         ; 0042fe4d
    FXCH                                ; 0042fe51
    FADD float ptr [ESP + 0x1c]         ; 0042fe53
    FXCH ST2                            ; 0042fe57
    FADD float ptr [ESP + 0x20]         ; 0042fe59
    FXCH                                ; 0042fe5d
    FSTP float ptr [ESP + 0xc]          ; 0042fe5f
    FXCH                                ; 0042fe63
    FSTP float ptr [ESP + 0x10]         ; 0042fe65
    FSTP float ptr [ESP + 0x14]         ; 0042fe69
    MOV dword ptr [EDX + 0x8],0x0       ; 0042fe6d
    MOV EBX,dword ptr [EDX + 0x8]       ; 0042fe74
    MOV dword ptr [EDX + 0x4],EBX       ; 0042fe77
    FLD float ptr [EDX + 0x4]           ; 0042fe7a
    ADD EAX,EDI                         ; 0042fe7d
    FSTP float ptr [EDX]                ; 0042fe7f
    CMP ESI,EAX                         ; 0042fe81
    JZ 0x0042fe96                       ; 0042fe83
        ;   XREF to: 0042fe96 (CONDITIONAL_JUMP)  ; LAB_0042fe96
    MOV EBX,dword ptr [EAX]             ; 0042fe85
    MOV dword ptr [EDX + 0xc],EBX       ; 0042fe87
    MOV EBX,dword ptr [EAX + 0x4]       ; 0042fe8a
    MOV dword ptr [EDX + 0x10],EBX      ; 0042fe8d
    MOV EBX,dword ptr [EAX + 0x8]       ; 0042fe90
    MOV dword ptr [EDX + 0x14],EBX      ; 0042fe93
    ADD ESI,0x24                        ; 0042fe96
        ;   Label: LAB_0042fe96
    INC ECX                             ; 0042fe99
    MOV EAX,dword ptr [EBP + 0x158]     ; 0042fe9a
    ADD EDX,0x24                        ; 0042fea0
    CMP ECX,EAX                         ; 0042fea3
    JGE 0x0042fd3e                      ; 0042fea5
        ;   XREF to: 0042fd3e (CONDITIONAL_JUMP)  ; LAB_0042fd3e
    JMP 0x0042fe2f                      ; 0042feab
        ;   XREF to: 0042fe2f (UNCONDITIONAL_JUMP)  ; LAB_0042fe2f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042fead
        ;   Label: LAB_0042fead
    MOV dword ptr [EBX],EAX             ; 0042feb1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042feb3
    MOV dword ptr [EBX + 0x4],EAX       ; 0042feb7
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042feba
    MOV dword ptr [EBX + 0x8],EAX       ; 0042febe
    JMP 0x0042fe3c                      ; 0042fec1
        ;   XREF to: 0042fe3c (UNCONDITIONAL_JUMP)  ; LAB_0042fe3c

