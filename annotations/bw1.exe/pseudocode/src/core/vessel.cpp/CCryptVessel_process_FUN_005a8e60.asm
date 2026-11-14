; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005a8e60(CCryptVessel *this_ptr,float delta_time)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f913e
;   undefined4 DAT_005f9146
;   undefined4 DAT_005f914e
;   undefined4 DAT_005f9152
;   undefined4 DAT_005f9156
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60
;   core_flame.cpp_CFlame_process_FUN_004b7b90
;   core_vessel.cpp_isStartLocTriggered_FUN_005a8e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8e60
        ;   Label: core_vessel.cpp_CCryptVessel_process_FUN_005a8e60
    PUSH ESI                            ; 005a8e61
    PUSH EDI                            ; 005a8e62
    PUSH EBP                            ; 005a8e63
    MOV EBP,ESP                         ; 005a8e64
    SUB ESP,0x5c                        ; 005a8e66
    AND ESP,0xfffffff8                  ; 005a8e69
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a8e6c
    MOV EDX,dword ptr [EBX + 0x3b4]     ; 005a8e6f
    CMP EDX,0x1                         ; 005a8e75
    JZ 0x005a913f                       ; 005a8e78
        ;   XREF to: 005a913f (CONDITIONAL_JUMP)  ; LAB_005a913f
    TEST EDX,EDX                        ; 005a8e7e
    JNZ 0x005a91a4                      ; 005a8e80
        ;   XREF to: 005a91a4 (CONDITIONAL_JUMP)  ; LAB_005a91a4
    FLD float ptr [EBP + 0x18]          ; 005a8e86
    FMUL float ptr [0x005f9152]         ; 005a8e89 | DAT_005f9152
    FADD float ptr [EBX + 0x668]        ; 005a8e8f
    FSTP float ptr [EBX + 0x668]        ; 005a8e95
    MOV ESI,dword ptr [EBX + 0x2d4]     ; 005a8e9b
        ;   Label: LAB_005a8e9b
    TEST ESI,ESI                        ; 005a8ea1
    JNZ 0x005a9138                      ; 005a8ea3
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    CMP dword ptr [EBX + 0x3c0],0x0     ; 005a8ea9
    JNZ 0x005a91df                      ; 005a8eb0
        ;   XREF to: 005a91df (CONDITIONAL_JUMP)  ; LAB_005a91df
    LEA EDI,[EBX + 0x30]                ; 005a8eb6
    MOV EAX,dword ptr [EBX + 0x3b8]     ; 005a8eb9
    LEA ESI,[EBX + 0x20]                ; 005a8ebf
    CMP EAX,0x1                         ; 005a8ec2
    JNZ 0x005a92a4                      ; 005a8ec5
        ;   XREF to: 005a92a4 (CONDITIONAL_JUMP)  ; LAB_005a92a4
    FLD float ptr [EBX + 0x3bc]         ; 005a8ecb
    FADD float ptr [EBP + 0x18]         ; 005a8ed1
    FST float ptr [EBX + 0x3bc]         ; 005a8ed4
    FLD1                                ; 005a8eda
    FCOMPP                              ; 005a8edc
    FNSTSW AX                           ; 005a8ede
    SAHF                                ; 005a8ee0
    JNC 0x005a9138                      ; 005a8ee1
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 005a8ee7
    MOV dword ptr [EBX + 0x3bc],0x3f800000 ; 005a8eed
    TEST EDX,EDX                        ; 005a8ef7
    JNZ 0x005a91ec                      ; 005a8ef9
        ;   XREF to: 005a91ec (CONDITIONAL_JUMP)  ; LAB_005a91ec
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 005a8eff
    PUSH EDX                            ; 005a8f05
    CALL core_vessel.cpp_isStartLocTriggered_FUN_005a8e40 ; 005a8f06
        ;   XREF to: 005a8e40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005a8f0b
    TEST EAX,EAX                        ; 005a8f0e
    JZ 0x005a8f56                       ; 005a8f10
        ;   XREF to: 005a8f56 (CONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005a8f12
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005a8f18
    MOV EAX,dword ptr [EDX + 0x20]      ; 005a8f22
    MOV dword ptr [ESI],EAX             ; 005a8f25
    MOV EAX,dword ptr [EDX + 0x24]      ; 005a8f27
    MOV dword ptr [ESI + 0x4],EAX       ; 005a8f2a
    MOV EAX,dword ptr [EDX + 0x28]      ; 005a8f2d
    MOV dword ptr [ESI + 0x8],EAX       ; 005a8f30
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005a8f33
    MOV dword ptr [ESI + 0xc],EAX       ; 005a8f36
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005a8f39
    ADD EDX,0x30                        ; 005a8f3f
    CMP EDI,EDX                         ; 005a8f42
    JZ 0x005a8f56                       ; 005a8f44
        ;   XREF to: 005a8f56 (CONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EAX,dword ptr [EDX]             ; 005a8f46
    MOV dword ptr [EDI],EAX             ; 005a8f48
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a8f4a
    MOV dword ptr [EDI + 0x4],EAX       ; 005a8f4d
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a8f50
    MOV dword ptr [EDI + 0x8],EAX       ; 005a8f53
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005a8f56
        ;   Label: LAB_005a8f56
    CMP dword ptr [EAX + 0x184],0x0     ; 005a8f5c
    JZ 0x005a93ba                       ; 005a8f63
        ;   XREF to: 005a93ba (CONDITIONAL_JUMP)  ; LAB_005a93ba
    MOV dword ptr [ESP + 0x58],0x4479f99a ; 005a8f69
        ;   Label: LAB_005a8f69
    MOV EAX,[0x01d06ab4]                ; 005a8f71 | DAT_01d06ab4
    LEA EDI,[ESP + 0x30]                ; 005a8f76
    XOR EDX,EDX                         ; 005a8f7a
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a8f7c
    MOV dword ptr [ESP + 0x50],EDX      ; 005a8f83
    LEA EDX,[EBX + 0x20]                ; 005a8f87
    FLD float ptr [ESI + 0x24]          ; 005a8f8a
    FLD float ptr [ESI + 0x28]          ; 005a8f8d
    FLD float ptr [ESI + 0x20]          ; 005a8f90
    LEA ESI,[ESP + 0x24]                ; 005a8f93
    FSUB float ptr [EDX]                ; 005a8f97
    FXCH ST2                            ; 005a8f99
    FSUB float ptr [EDX + 0x4]          ; 005a8f9b
    FXCH                                ; 005a8f9e
    FSUB float ptr [EDX + 0x8]          ; 005a8fa0
    FXCH ST2                            ; 005a8fa3
    FSTP float ptr [ESP + 0x24]         ; 005a8fa5
    FSTP float ptr [ESP + 0x28]         ; 005a8fa9
    FSTP float ptr [ESP + 0x2c]         ; 005a8fad
    MOVSD ES:EDI,ESI                    ; 005a8fb1
    MOVSD ES:EDI,ESI                    ; 005a8fb2
    MOVSD ES:EDI,ESI                    ; 005a8fb3
    FLD float ptr [ESP + 0x34]          ; 005a8fb4
    FMUL ST0                            ; 005a8fb8
    FLD float ptr [ESP + 0x30]          ; 005a8fba
    FMUL ST0                            ; 005a8fbe
    FADDP                               ; 005a8fc0
    FLD float ptr [ESP + 0x38]          ; 005a8fc2
    FMUL ST0                            ; 005a8fc6
    FADDP                               ; 005a8fc8
    FSQRT                               ; 005a8fca
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 005a8fcc
    FSTP float ptr [ESP + 0x54]         ; 005a8fd2
    TEST ECX,ECX                        ; 005a8fd6
    JZ 0x005a9028                       ; 005a8fd8
        ;   XREF to: 005a9028 (CONDITIONAL_JUMP)  ; LAB_005a9028
    FLD float ptr [EDX]                 ; 005a8fda
    FLD float ptr [EDX + 0x4]           ; 005a8fdc
    FLD float ptr [EDX + 0x8]           ; 005a8fdf
    LEA EDI,[ESP + 0xc]                 ; 005a8fe2
    LEA ESI,[ESP + 0x3c]                ; 005a8fe6
    FXCH ST2                            ; 005a8fea
    FSUB float ptr [ECX + 0x20]         ; 005a8fec
    FXCH                                ; 005a8fef
    FSUB float ptr [ECX + 0x24]         ; 005a8ff1
    FXCH ST2                            ; 005a8ff4
    FSUB float ptr [ECX + 0x28]         ; 005a8ff6
    FXCH                                ; 005a8ff9
    FSTP float ptr [ESP + 0x3c]         ; 005a8ffb
    FXCH                                ; 005a8fff
    FSTP float ptr [ESP + 0x40]         ; 005a9001
    FSTP float ptr [ESP + 0x44]         ; 005a9005
    MOVSD ES:EDI,ESI                    ; 005a9009
    MOVSD ES:EDI,ESI                    ; 005a900a
    MOVSD ES:EDI,ESI                    ; 005a900b
    FLD float ptr [ESP + 0x10]          ; 005a900c
    FMUL ST0                            ; 005a9010
    FLD float ptr [ESP + 0xc]           ; 005a9012
    FMUL ST0                            ; 005a9016
    FADDP                               ; 005a9018
    FLD float ptr [ESP + 0x14]          ; 005a901a
    FMUL ST0                            ; 005a901e
    FADDP                               ; 005a9020
    FSQRT                               ; 005a9022
    FSTP float ptr [ESP + 0x58]         ; 005a9024
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 005a9028
        ;   Label: LAB_005a9028
    TEST ESI,ESI                        ; 005a902e
    JZ 0x005a907c                       ; 005a9030
        ;   XREF to: 005a907c (CONDITIONAL_JUMP)  ; LAB_005a907c
    FLD float ptr [ESI + 0x24]          ; 005a9032
    FLD float ptr [ESI + 0x28]          ; 005a9035
    FLD float ptr [ESI + 0x20]          ; 005a9038
    LEA EDX,[EBX + 0x20]                ; 005a903b
    MOV EDI,ESP                         ; 005a903e
    LEA ESI,[ESP + 0x18]                ; 005a9040
    FSUB float ptr [EDX]                ; 005a9044
    FXCH ST2                            ; 005a9046
    FSUB float ptr [EDX + 0x4]          ; 005a9048
    FXCH                                ; 005a904b
    FSUB float ptr [EDX + 0x8]          ; 005a904d
    FXCH ST2                            ; 005a9050
    FSTP float ptr [ESP + 0x18]         ; 005a9052
    FSTP float ptr [ESP + 0x1c]         ; 005a9056
    FSTP float ptr [ESP + 0x20]         ; 005a905a
    MOVSD ES:EDI,ESI                    ; 005a905e
    MOVSD ES:EDI,ESI                    ; 005a905f
    MOVSD ES:EDI,ESI                    ; 005a9060
    FLD float ptr [ESP + 0x4]           ; 005a9061
    FMUL ST0                            ; 005a9065
    FLD float ptr [ESP]                 ; 005a9067
    FMUL ST0                            ; 005a906a
    FADDP                               ; 005a906c
    FLD float ptr [ESP + 0x8]           ; 005a906e
    FMUL ST0                            ; 005a9072
    FADDP                               ; 005a9074
    FSQRT                               ; 005a9076
    FSTP float ptr [ESP + 0x50]         ; 005a9078
    FLD float ptr [ESP + 0x58]          ; 005a907c
        ;   Label: LAB_005a907c
    FCOMP float ptr [EBX + 0x3b0]       ; 005a9080
    FNSTSW AX                           ; 005a9086
    SAHF                                ; 005a9088
    JNC 0x005a90f3                      ; 005a9089
        ;   XREF to: 005a90f3 (CONDITIONAL_JUMP)  ; LAB_005a90f3
    FLD float ptr [ESP + 0x54]          ; 005a908b
    FCOMP float ptr [EBX + 0x3b0]       ; 005a908f
    FNSTSW AX                           ; 005a9095
    SAHF                                ; 005a9097
    JBE 0x005a90f3                      ; 005a9098
        ;   XREF to: 005a90f3 (CONDITIONAL_JUMP)  ; LAB_005a90f3
    FLD float ptr [ESP + 0x50]          ; 005a909a
    FCOMP float ptr [EBX + 0x3b0]       ; 005a909e
    FNSTSW AX                           ; 005a90a4
    SAHF                                ; 005a90a6
    JBE 0x005a90f3                      ; 005a90a7
        ;   XREF to: 005a90f3 (CONDITIONAL_JUMP)  ; LAB_005a90f3
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 005a90a9
    MOV EDI,dword ptr [EDX + 0x2d4]     ; 005a90af
    TEST EDI,EDI                        ; 005a90b5
    JNZ 0x005a90f3                      ; 005a90b7
        ;   XREF to: 005a90f3 (CONDITIONAL_JUMP)  ; LAB_005a90f3
    CMP dword ptr [EDX + 0x3b8],0x0     ; 005a90b9
    JNZ 0x005a90f3                      ; 005a90c0
        ;   XREF to: 005a90f3 (CONDITIONAL_JUMP)  ; LAB_005a90f3
    MOV dword ptr [EDX + 0x3b8],0x1     ; 005a90c2
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005a90cc
    MOV dword ptr [EAX + 0x3bc],EDI     ; 005a90d2
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005a90d8
    ADD EAX,0x2e0                       ; 005a90de
    PUSH EAX                            ; 005a90e3
    MOV EDX,dword ptr [0x0061b4d0]      ; 005a90e4 | DAT_0061b4d0
    PUSH EDX                            ; 005a90ea
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005a90eb
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005a90f0
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 005a90f3
        ;   Label: LAB_005a90f3
    TEST ECX,ECX                        ; 005a90f9
    JZ 0x005a9138                       ; 005a90fb
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 005a90fd
    TEST ESI,ESI                        ; 005a9103
    JZ 0x005a9138                       ; 005a9105
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 005a9107
    CMP dword ptr [EAX + 0x184],0x0     ; 005a910d
    JZ 0x005a9138                       ; 005a9114
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV EAX,dword ptr [ECX + 0x3ac]     ; 005a9116
    CMP dword ptr [EAX + 0x184],0x0     ; 005a911c
    JZ 0x005a9138                       ; 005a9123
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV EAX,dword ptr [ESI + 0x3ac]     ; 005a9125
    CMP dword ptr [EAX + 0x184],0x0     ; 005a912b
    JNZ 0x005a93f5                      ; 005a9132
        ;   XREF to: 005a93f5 (CONDITIONAL_JUMP)  ; LAB_005a93f5
    MOV ESP,EBP                         ; 005a9138
        ;   Label: LAB_005a9138
    POP EBP                             ; 005a913a
    POP EDI                             ; 005a913b
    POP ESI                             ; 005a913c
    POP EBX                             ; 005a913d
    RET                                 ; 005a913e
    LEA ESI,[EBX + 0x3e4]               ; 005a913f
        ;   Label: LAB_005a913f
    LEA EDX,[EBX + 0x20]                ; 005a9145
    MOV EAX,dword ptr [EDX]             ; 005a9148
    MOV dword ptr [ESI],EAX             ; 005a914a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a914c
    MOV dword ptr [ESI + 0x4],EAX       ; 005a914f
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a9152
    MOV dword ptr [ESI + 0x8],EAX       ; 005a9155
    MOV EAX,dword ptr [EDX + 0xc]       ; 005a9158
    MOV dword ptr [ESI + 0xc],EAX       ; 005a915b
    LEA EDX,[EBX + 0x3f4]               ; 005a915e
    FLD float ptr [EBX + 0x3e8]         ; 005a9164
    FADD float ptr [0x005f9156]         ; 005a916a | DAT_005f9156
    LEA ESI,[EBX + 0x30]                ; 005a9170
    FSTP float ptr [EBX + 0x3e8]        ; 005a9173
    CMP EDX,ESI                         ; 005a9179
    JZ 0x005a918d                       ; 005a917b
        ;   XREF to: 005a918d (CONDITIONAL_JUMP)  ; LAB_005a918d
    MOV EAX,dword ptr [ESI]             ; 005a917d
    MOV dword ptr [EDX],EAX             ; 005a917f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a9181
    MOV dword ptr [EDX + 0x4],EAX       ; 005a9184
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a9187
    MOV dword ptr [EDX + 0x8],EAX       ; 005a918a
    LEA EAX,[EBX + 0x3c4]               ; 005a918d
        ;   Label: LAB_005a918d
    PUSH dword ptr [EBP + 0x18]         ; 005a9193
    PUSH EAX                            ; 005a9196
    CALL core_flame.cpp_CFlame_process_FUN_004b7b90 ; 005a9197
        ;   XREF to: 004b7b90 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_004b7b90(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a919c
    JMP 0x005a8e9b                      ; 005a919f
        ;   XREF to: 005a8e9b (UNCONDITIONAL_JUMP)  ; LAB_005a8e9b
    FLD float ptr [EBP + 0x18]          ; 005a91a4
        ;   Label: LAB_005a91a4
    FMUL double ptr [0x005f913e]        ; 005a91a7 | DAT_005f913e
    FADD float ptr [EBX + 0x7ec]        ; 005a91ad
    FST float ptr [EBX + 0x7ec]         ; 005a91b3
    FCOMP double ptr [0x005f9146]       ; 005a91b9 | DAT_005f9146
    FNSTSW AX                           ; 005a91bf
    SAHF                                ; 005a91c1
    JC 0x005a8e9b                       ; 005a91c2
        ;   XREF to: 005a8e9b (CONDITIONAL_JUMP)  ; LAB_005a8e9b
    FLD float ptr [EBX + 0x7ec]         ; 005a91c8
    FADD float ptr [0x005f914e]         ; 005a91ce | DAT_005f914e
    FSTP float ptr [EBX + 0x7ec]        ; 005a91d4
    JMP 0x005a8e9b                      ; 005a91da
        ;   XREF to: 005a8e9b (UNCONDITIONAL_JUMP)  ; LAB_005a8e9b
    MOV dword ptr [EBX + 0x3c0],ESI     ; 005a91df
        ;   Label: LAB_005a91df
    MOV ESP,EBP                         ; 005a91e5
    POP EBP                             ; 005a91e7
    POP EDI                             ; 005a91e8
    POP ESI                             ; 005a91e9
    POP EBX                             ; 005a91ea
    RET                                 ; 005a91eb
    PUSH EDX                            ; 005a91ec
        ;   Label: LAB_005a91ec
    CALL core_vessel.cpp_isStartLocTriggered_FUN_005a8e40 ; 005a91ed
        ;   XREF to: 005a8e40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005a91f2
    TEST EAX,EAX                        ; 005a91f5
    JZ 0x005a925f                       ; 005a91f7
        ;   XREF to: 005a925f (CONDITIONAL_JUMP)  ; LAB_005a925f
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 005a91f9
    PUSH ESI                            ; 005a91ff
    CALL core_vessel.cpp_isStartLocTriggered_FUN_005a8e40 ; 005a9200
        ;   XREF to: 005a8e40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005a9205
    TEST EAX,EAX                        ; 005a9208
    JZ 0x005a925f                       ; 005a920a
        ;   XREF to: 005a925f (CONDITIONAL_JUMP)  ; LAB_005a925f
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005a920c
        ;   Label: LAB_005a920c
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005a9212
    LEA ESI,[EBX + 0x20]                ; 005a921c
    MOV EAX,dword ptr [EDX + 0x20]      ; 005a921f
    MOV dword ptr [ESI],EAX             ; 005a9222
    MOV EAX,dword ptr [EDX + 0x24]      ; 005a9224
    MOV dword ptr [ESI + 0x4],EAX       ; 005a9227
    MOV EAX,dword ptr [EDX + 0x28]      ; 005a922a
    MOV dword ptr [ESI + 0x8],EAX       ; 005a922d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005a9230
    MOV dword ptr [ESI + 0xc],EAX       ; 005a9233
    MOV ESI,dword ptr [EBX + 0x3a8]     ; 005a9236
    LEA EDX,[EBX + 0x30]                ; 005a923c
    ADD ESI,0x30                        ; 005a923f
    CMP EDX,ESI                         ; 005a9242
    JZ 0x005a8f56                       ; 005a9244
        ;   XREF to: 005a8f56 (CONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EAX,dword ptr [ESI]             ; 005a924a
    MOV dword ptr [EDX],EAX             ; 005a924c
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a924e
    MOV dword ptr [EDX + 0x4],EAX       ; 005a9251
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a9254
    MOV dword ptr [EDX + 0x8],EAX       ; 005a9257
    JMP 0x005a8f56                      ; 005a925a
        ;   XREF to: 005a8f56 (UNCONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 005a925f
        ;   Label: LAB_005a925f
    PUSH EDI                            ; 005a9265
    CALL core_vessel.cpp_isStartLocTriggered_FUN_005a8e40 ; 005a9266
        ;   XREF to: 005a8e40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005a926b
    TEST EAX,EAX                        ; 005a926e
    JZ 0x005a928c                       ; 005a9270
        ;   XREF to: 005a928c (CONDITIONAL_JUMP)  ; LAB_005a928c
    MOV dword ptr [EBX + 0x24],0x461c3f9a ; 005a9272
        ;   Label: LAB_005a9272
    MOV dword ptr [EBX + 0x28],0x461c3f9a ; 005a9279
    MOV dword ptr [EBX + 0x20],0x461c3f9a ; 005a9280
    JMP 0x005a8f56                      ; 005a9287
        ;   XREF to: 005a8f56 (UNCONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 005a928c
        ;   Label: LAB_005a928c
    PUSH EAX                            ; 005a9292
    CALL core_vessel.cpp_isStartLocTriggered_FUN_005a8e40 ; 005a9293
        ;   XREF to: 005a8e40 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_005a8e40(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005a9298
    TEST EAX,EAX                        ; 005a929b
    JNZ 0x005a9272                      ; 005a929d
        ;   XREF to: 005a9272 (CONDITIONAL_JUMP)  ; LAB_005a9272
    JMP 0x005a920c                      ; 005a929f
        ;   XREF to: 005a920c (UNCONDITIONAL_JUMP)  ; LAB_005a920c
    CMP EAX,0x2                         ; 005a92a4
        ;   Label: LAB_005a92a4
    JNZ 0x005a92de                      ; 005a92a7
        ;   XREF to: 005a92de (CONDITIONAL_JUMP)  ; LAB_005a92de
    FLD float ptr [EBX + 0x3bc]         ; 005a92a9
    FSUB float ptr [EBP + 0x18]         ; 005a92af
    FST float ptr [EBX + 0x3bc]         ; 005a92b2
    FLDZ                                ; 005a92b8
    FCOMPP                              ; 005a92ba
    FNSTSW AX                           ; 005a92bc
    SAHF                                ; 005a92be
    JBE 0x005a9138                      ; 005a92bf
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV dword ptr [EBX + 0x3b8],0x0     ; 005a92c5
    MOV dword ptr [EBX + 0x3bc],0x0     ; 005a92cf
    JMP 0x005a8f56                      ; 005a92d9
        ;   XREF to: 005a8f56 (UNCONDITIONAL_JUMP)  ; LAB_005a8f56
    CMP EAX,0x3                         ; 005a92de
        ;   Label: LAB_005a92de
    JNZ 0x005a8f56                      ; 005a92e1
        ;   XREF to: 005a8f56 (CONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005a92e7
    CMP dword ptr [EAX + 0x184],0x0     ; 005a92ed
    JNZ 0x005a9305                      ; 005a92f4
        ;   XREF to: 005a9305 (CONDITIONAL_JUMP)  ; LAB_005a9305
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 005a92f6
    CMP dword ptr [EAX + 0x184],0x0     ; 005a92fc
    JZ 0x005a931e                       ; 005a9303
        ;   XREF to: 005a931e (CONDITIONAL_JUMP)  ; LAB_005a931e
    MOV dword ptr [EBX + 0x3bc],0x0     ; 005a9305
        ;   Label: LAB_005a9305
    MOV dword ptr [EBX + 0x3b8],0x0     ; 005a930f
    JMP 0x005a8f56                      ; 005a9319
        ;   XREF to: 005a8f56 (UNCONDITIONAL_JUMP)  ; LAB_005a8f56
    FLD float ptr [EBX + 0x3bc]         ; 005a931e
        ;   Label: LAB_005a931e
    FSUB float ptr [EBP + 0x18]         ; 005a9324
    FST float ptr [EBX + 0x3bc]         ; 005a9327
    FLDZ                                ; 005a932d
    FCOMPP                              ; 005a932f
    FNSTSW AX                           ; 005a9331
    SAHF                                ; 005a9333
    JBE 0x005a9138                      ; 005a9334
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    PUSH 0x40800000                     ; 005a933a
    PUSH 0x44bb8000                     ; 005a933f
    PUSH 0x41000000                     ; 005a9344
    PUSH ESI                            ; 005a9349
    MOV EAX,[0x0061c010]                ; 005a934a | DAT_0061c010
    PUSH EAX                            ; 005a934f
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 ; 005a9350
        ;   XREF to: 004b6c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005a9355
    MOV dword ptr [EBX + 0x3bc],0x3f800000 ; 005a935b
    MOV EAX,dword ptr [EDX + 0x20]      ; 005a9365
    MOV dword ptr [ESI],EAX             ; 005a9368
    MOV EAX,dword ptr [EDX + 0x24]      ; 005a936a
    MOV dword ptr [ESI + 0x4],EAX       ; 005a936d
    MOV EAX,dword ptr [EDX + 0x28]      ; 005a9370
    MOV dword ptr [ESI + 0x8],EAX       ; 005a9373
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005a9376
    MOV dword ptr [ESI + 0xc],EAX       ; 005a9379
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005a937c
    ADD EDX,0x30                        ; 005a9382
    ADD ESP,0x14                        ; 005a9385
    CMP EDI,EDX                         ; 005a9388
    JNZ 0x005a939b                      ; 005a938a
        ;   XREF to: 005a939b (CONDITIONAL_JUMP)  ; LAB_005a939b
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005a938c
    JMP 0x005a8f56                      ; 005a9396
        ;   XREF to: 005a8f56 (UNCONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EAX,dword ptr [EDX]             ; 005a939b
        ;   Label: LAB_005a939b
    MOV dword ptr [EDI],EAX             ; 005a939d
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a939f
    MOV dword ptr [EDI + 0x4],EAX       ; 005a93a2
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a93a5
    MOV dword ptr [EDI + 0x8],EAX       ; 005a93a8
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005a93ab
    JMP 0x005a8f56                      ; 005a93b5
        ;   XREF to: 005a8f56 (UNCONDITIONAL_JUMP)  ; LAB_005a8f56
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 005a93ba
        ;   Label: LAB_005a93ba
    CMP dword ptr [EAX + 0x184],0x0     ; 005a93c0
    JNZ 0x005a8f69                      ; 005a93c7
        ;   XREF to: 005a8f69 (CONDITIONAL_JUMP)  ; LAB_005a8f69
    CMP dword ptr [EBX + 0x3b8],0x0     ; 005a93cd
    JNZ 0x005a9138                      ; 005a93d4
        ;   XREF to: 005a9138 (CONDITIONAL_JUMP)  ; LAB_005a9138
    MOV dword ptr [EBX + 0x3bc],0x40400000 ; 005a93da
    MOV dword ptr [EBX + 0x3b8],0x3     ; 005a93e4
    MOV ESP,EBP                         ; 005a93ee
    POP EBP                             ; 005a93f0
    POP EDI                             ; 005a93f1
    POP ESI                             ; 005a93f2
    POP EBX                             ; 005a93f3
    RET                                 ; 005a93f4
    LEA EAX,[EBX + 0x344]               ; 005a93f5
        ;   Label: LAB_005a93f5
    PUSH EAX                            ; 005a93fb
    MOV ESI,dword ptr [0x0061b4d0]      ; 005a93fc | DAT_0061b4d0
    PUSH ESI                            ; 005a9402
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005a9403
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005a9408
    MOV dword ptr [EAX + 0x7f0],0x1     ; 005a940e
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 005a9418
    MOV dword ptr [EAX + 0x7f0],0x1     ; 005a941e
    ADD ESP,0x8                         ; 005a9428
    MOV dword ptr [EBX + 0x7f0],0x1     ; 005a942b
    MOV ESP,EBP                         ; 005a9435
    POP EBP                             ; 005a9437
    POP EDI                             ; 005a9438
    POP ESI                             ; 005a9439
    POP EBX                             ; 005a943a
    RET                                 ; 005a943b

