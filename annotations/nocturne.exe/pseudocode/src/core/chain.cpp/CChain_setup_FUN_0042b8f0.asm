; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_CChain_setup_FUN_0042b8f0(CChain *param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b8f0
        ;   Label: core_chain.cpp_CChain_setup_FUN_0042b8f0
    PUSH ESI                            ; 0042b8f1
    PUSH EDI                            ; 0042b8f2
    PUSH EBP                            ; 0042b8f3
    SUB ESP,0x2c                        ; 0042b8f4
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042b8f7
    PUSH EBP                            ; 0042b8fb
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0042b8fc
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBP + 0x15c]     ; 0042b901
    ADD ESP,0x4                         ; 0042b907
    TEST EDX,EDX                        ; 0042b90a
    JNZ 0x0042b963                      ; 0042b90c
        ;   XREF to: 0042b963 (CONDITIONAL_JUMP)  ; LAB_0042b963
    MOV EAX,dword ptr [EBP + 0x150]     ; 0042b90e
        ;   Label: LAB_0042b90e
    DEC EAX                             ; 0042b914
    MOV dword ptr [ESP + 0x28],EAX      ; 0042b915
    FILD dword ptr [ESP + 0x28]         ; 0042b919
    FDIVR float ptr [EBP + 0x154]       ; 0042b91d
    MOV dword ptr [EBP + 0x210],0x0     ; 0042b923
    MOV dword ptr [EBP + 0x278],0x0     ; 0042b92d
    MOV dword ptr [EBP + 0x27c],0x0     ; 0042b937
    MOV dword ptr [EBP + 0x564],0xc61c3f9a ; 0042b941
    MOV dword ptr [EBP + 0x56c],0x0     ; 0042b94b
    FSTP float ptr [EBP + 0x158]        ; 0042b955
    ADD ESP,0x2c                        ; 0042b95b
    POP EBP                             ; 0042b95e
    POP EDI                             ; 0042b95f
    POP ESI                             ; 0042b960
    POP EBX                             ; 0042b961
    RET                                 ; 0042b962
    MOV EAX,ESP                         ; 0042b963
        ;   Label: LAB_0042b963
    PUSH EAX                            ; 0042b965
    PUSH EBP                            ; 0042b966
    CALL core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890 ; 0042b967
        ;   XREF to: 0042b890 (UNCONDITIONAL_CALL)  ; CVector3f * core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain * this_ptr, CVector3f * out_point)
    LEA EDX,[EBP + 0x20]                ; 0042b96c
    FLD float ptr [EAX]                 ; 0042b96f
    FSUB float ptr [EDX]                ; 0042b971
    ADD ESP,0x8                         ; 0042b973
    FSTP float ptr [ESP + 0x18]         ; 0042b976
    FLD float ptr [EAX + 0x4]           ; 0042b97a
    FSUB float ptr [EDX + 0x4]          ; 0042b97d
    FSTP float ptr [ESP + 0x1c]         ; 0042b980
    FLD float ptr [EAX + 0x8]           ; 0042b984
    FSUB float ptr [EDX + 0x8]          ; 0042b987
    FSTP float ptr [ESP + 0x20]         ; 0042b98a
    MOV EAX,dword ptr [EDX]             ; 0042b98e
    MOV dword ptr [ESP + 0xc],EAX       ; 0042b990
    LEA EAX,[EDX + 0x4]                 ; 0042b994
    MOV EAX,dword ptr [EAX]             ; 0042b997
    MOV dword ptr [ESP + 0x10],EAX      ; 0042b999
    LEA EAX,[EDX + 0x8]                 ; 0042b99d
    MOV EAX,dword ptr [EAX]             ; 0042b9a0
    MOV dword ptr [ESP + 0x14],EAX      ; 0042b9a2
    MOV EAX,dword ptr [EBP + 0x150]     ; 0042b9a6
    DEC EAX                             ; 0042b9ac
    FLD1                                ; 0042b9ad
    MOV dword ptr [ESP + 0x28],EAX      ; 0042b9af
    FLD float ptr [ESP + 0x18]          ; 0042b9b3
    FILD dword ptr [ESP + 0x28]         ; 0042b9b7
    FSTP float ptr [ESP + 0x24]         ; 0042b9bb
    FXCH                                ; 0042b9bf
    FDIV float ptr [ESP + 0x24]         ; 0042b9c1
    FXCH                                ; 0042b9c5
    FMUL ST1                            ; 0042b9c7
    FLD float ptr [ESP + 0x1c]          ; 0042b9c9
    FMUL ST2                            ; 0042b9cd
    FLD float ptr [ESP + 0x20]          ; 0042b9cf
    FMULP ST3                           ; 0042b9d3
    FXCH                                ; 0042b9d5
    FSTP float ptr [ESP + 0x18]         ; 0042b9d7
    FSTP float ptr [ESP + 0x1c]         ; 0042b9db
    FSTP float ptr [ESP + 0x20]         ; 0042b9df
    MOV EBX,dword ptr [EBP + 0x150]     ; 0042b9e3
    XOR ECX,ECX                         ; 0042b9e9
    TEST EBX,EBX                        ; 0042b9eb
    JLE 0x0042b90e                      ; 0042b9ed
        ;   XREF to: 0042b90e (CONDITIONAL_JUMP)  ; LAB_0042b90e
    LEA EDI,[EBP + 0x284]               ; 0042b9f3
    LEA ESI,[EDI + 0x18]                ; 0042b9f9
    LEA EDX,[EDI + 0xc]                 ; 0042b9fc
    IMUL EBX,ECX,0x24                   ; 0042b9ff
        ;   Label: LAB_0042b9ff
    LEA EAX,[ESP + 0xc]                 ; 0042ba02
    ADD EBX,EDI                         ; 0042ba06
    CMP EBX,EAX                         ; 0042ba08
    JNZ 0x0042ba7d                      ; 0042ba0a
        ;   XREF to: 0042ba7d (CONDITIONAL_JUMP)  ; LAB_0042ba7d
    IMUL EAX,ECX,0x24                   ; 0042ba0c
        ;   Label: LAB_0042ba0c
    FLD float ptr [ESP + 0xc]           ; 0042ba0f
    FLD float ptr [ESP + 0x10]          ; 0042ba13
    FLD float ptr [ESP + 0x14]          ; 0042ba17
    FXCH ST2                            ; 0042ba1b
    FADD float ptr [ESP + 0x18]         ; 0042ba1d
    FXCH                                ; 0042ba21
    FADD float ptr [ESP + 0x1c]         ; 0042ba23
    FXCH ST2                            ; 0042ba27
    FADD float ptr [ESP + 0x20]         ; 0042ba29
    FXCH                                ; 0042ba2d
    FSTP float ptr [ESP + 0xc]          ; 0042ba2f
    FXCH                                ; 0042ba33
    FSTP float ptr [ESP + 0x10]         ; 0042ba35
    FSTP float ptr [ESP + 0x14]         ; 0042ba39
    MOV dword ptr [EDX + 0x8],0x0       ; 0042ba3d
    MOV EBX,dword ptr [EDX + 0x8]       ; 0042ba44
    MOV dword ptr [EDX + 0x4],EBX       ; 0042ba47
    FLD float ptr [EDX + 0x4]           ; 0042ba4a
    ADD EAX,EDI                         ; 0042ba4d
    FSTP float ptr [EDX]                ; 0042ba4f
    CMP ESI,EAX                         ; 0042ba51
    JZ 0x0042ba66                       ; 0042ba53
        ;   XREF to: 0042ba66 (CONDITIONAL_JUMP)  ; LAB_0042ba66
    MOV EBX,dword ptr [EAX]             ; 0042ba55
    MOV dword ptr [EDX + 0xc],EBX       ; 0042ba57
    MOV EBX,dword ptr [EAX + 0x4]       ; 0042ba5a
    MOV dword ptr [EDX + 0x10],EBX      ; 0042ba5d
    MOV EBX,dword ptr [EAX + 0x8]       ; 0042ba60
    MOV dword ptr [EDX + 0x14],EBX      ; 0042ba63
    ADD ESI,0x24                        ; 0042ba66
        ;   Label: LAB_0042ba66
    INC ECX                             ; 0042ba69
    MOV EAX,dword ptr [EBP + 0x150]     ; 0042ba6a
    ADD EDX,0x24                        ; 0042ba70
    CMP ECX,EAX                         ; 0042ba73
    JGE 0x0042b90e                      ; 0042ba75
        ;   XREF to: 0042b90e (CONDITIONAL_JUMP)  ; LAB_0042b90e
    JMP 0x0042b9ff                      ; 0042ba7b
        ;   XREF to: 0042b9ff (UNCONDITIONAL_JUMP)  ; LAB_0042b9ff
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042ba7d
        ;   Label: LAB_0042ba7d
    MOV dword ptr [EBX],EAX             ; 0042ba81
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042ba83
    MOV dword ptr [EBX + 0x4],EAX       ; 0042ba87
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042ba8a
    MOV dword ptr [EBX + 0x8],EAX       ; 0042ba8e
    JMP 0x0042ba0c                      ; 0042ba91
        ;   XREF to: 0042ba0c (UNCONDITIONAL_JUMP)  ; LAB_0042ba0c

