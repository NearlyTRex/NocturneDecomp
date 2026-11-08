; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056a8f0(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_004308a0 at 004308e8
;
; Called Functions:
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a8f0
        ;   Label: FUN_0056a8f0
    PUSH ESI                            ; 0056a8f1
    PUSH EDI                            ; 0056a8f2
    PUSH EBP                            ; 0056a8f3
    MOV EBP,ESP                         ; 0056a8f4
    SUB ESP,0xf8                        ; 0056a8f6
    AND ESP,0xfffffff8                  ; 0056a8fc
    MOV EBX,dword ptr [EBP + 0x18]      ; 0056a8ff
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056a902
    PUSH EDX                            ; 0056a905
    XOR ESI,ESI                         ; 0056a906
    CALL FUN_00569f30                   ; 0056a908
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    MOV ECX,0x7149f2ca                  ; 0056a90d
    ADD ESP,0x4                         ; 0056a912
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056a915
    MOV dword ptr [ESP + 0xc4],EAX      ; 0056a91b
    MOV dword ptr [ESP + 0xd4],ECX      ; 0056a922
    MOV dword ptr [ESP + 0xc8],ESI      ; 0056a929
    MOV dword ptr [ESP + 0xd8],ESI      ; 0056a930
    TEST EDX,EDX                        ; 0056a937
    JLE 0x0056ab61                      ; 0056a939
        ;   XREF to: 0056ab61 (CONDITIONAL_JUMP)  ; LAB_0056ab61
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056a93f
    ADD EDX,0xe80                       ; 0056a942
    MOV dword ptr [ESP + 0xdc],EAX      ; 0056a948
    MOV dword ptr [ESP + 0xcc],EDX      ; 0056a94f
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0056a956
        ;   Label: LAB_0056a956
    MOV ECX,dword ptr [ECX + 0x1de9c]   ; 0056a95d
    TEST ECX,ECX                        ; 0056a963
    JL 0x0056ab29                       ; 0056a965
        ;   XREF to: 0056ab29 (CONDITIONAL_JUMP)  ; LAB_0056ab29
    MOV EAX,dword ptr [EDX + 0xc]       ; 0056a96b
    MOV dword ptr [ESP + 0xa0],EAX      ; 0056a96e
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0056a975
    MOV dword ptr [ESP + 0xac],EAX      ; 0056a978
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0056a97f
    MOV dword ptr [ESP + 0x8c],EAX      ; 0056a982
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0056a989
    MOV dword ptr [ESP + 0x4c],EAX      ; 0056a990
    MOV EAX,dword ptr [ESP + 0xac]      ; 0056a994
    MOV dword ptr [ESP + 0x50],EAX      ; 0056a99b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056a99f
    MOV dword ptr [ESP + 0x54],EAX      ; 0056a9a6
    IMUL EAX,ECX,0x30                   ; 0056a9aa
    LEA EDI,[ESP + 0x70]                ; 0056a9ad
    LEA ESI,[ESP + 0x4c]                ; 0056a9b1
    MOVSD ES:EDI,ESI                    ; 0056a9b5
    MOVSD ES:EDI,ESI                    ; 0056a9b6
    MOVSD ES:EDI,ESI                    ; 0056a9b7
    ADD EAX,dword ptr [ESP + 0xcc]      ; 0056a9b8
    MOV ESI,dword ptr [EAX + 0xc]       ; 0056a9bf
    LEA EDI,[ESP + 0x34]                ; 0056a9c2
    MOV dword ptr [ESP + 0x90],ESI      ; 0056a9c6
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0056a9cd
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0056a9d0
    MOV dword ptr [ESP + 0xe0],EAX      ; 0056a9d3
    MOV EAX,dword ptr [ESP + 0x90]      ; 0056a9da
    MOV dword ptr [ESP + 0x68],ESI      ; 0056a9e1
    MOV dword ptr [ESP + 0x64],EAX      ; 0056a9e5
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0056a9e9
    LEA ESI,[ESP + 0x64]                ; 0056a9f0
    MOV dword ptr [ESP + 0x6c],EAX      ; 0056a9f4
    MOVSD ES:EDI,ESI                    ; 0056a9f8
    MOVSD ES:EDI,ESI                    ; 0056a9f9
    MOVSD ES:EDI,ESI                    ; 0056a9fa
    FLD float ptr [ESP + 0x34]          ; 0056a9fb
    FLD float ptr [ESP + 0x38]          ; 0056a9ff
    FLD float ptr [ESP + 0x3c]          ; 0056aa03
    LEA EDI,[ESP + 0x1c]                ; 0056aa07
    LEA ESI,[ESP + 0x10]                ; 0056aa0b
    FXCH ST2                            ; 0056aa0f
    FSUB float ptr [ESP + 0x70]         ; 0056aa11
    FXCH                                ; 0056aa15
    FSUB float ptr [ESP + 0x74]         ; 0056aa17
    FXCH ST2                            ; 0056aa1b
    FSUB float ptr [ESP + 0x78]         ; 0056aa1d
    FXCH                                ; 0056aa21
    FSTP float ptr [ESP + 0x10]         ; 0056aa23
    FXCH                                ; 0056aa27
    FSTP float ptr [ESP + 0x14]         ; 0056aa29
    FSTP float ptr [ESP + 0x18]         ; 0056aa2d
    MOVSD ES:EDI,ESI                    ; 0056aa31
    MOVSD ES:EDI,ESI                    ; 0056aa32
    MOVSD ES:EDI,ESI                    ; 0056aa33
    FLD float ptr [ESP + 0x20]          ; 0056aa34
    FMUL ST0                            ; 0056aa38
    FLD float ptr [ESP + 0x1c]          ; 0056aa3a
    FMUL ST0                            ; 0056aa3e
    FADDP                               ; 0056aa40
    FLD float ptr [ESP + 0x24]          ; 0056aa42
    FMUL ST0                            ; 0056aa46
    FADDP                               ; 0056aa48
    FSQRT                               ; 0056aa4a
    FLDZ                                ; 0056aa4c
    FXCH                                ; 0056aa4e
    FSTP double ptr [ESP]               ; 0056aa50
    FCOMP double ptr [ESP]              ; 0056aa53
    FNSTSW AX                           ; 0056aa56
    SAHF                                ; 0056aa58
    JNC 0x0056aae9                      ; 0056aa59
        ;   XREF to: 0056aae9 (CONDITIONAL_JUMP)  ; LAB_0056aae9
    FLD double ptr [ESP]                ; 0056aa5f
    FLD1                                ; 0056aa62
    FLD float ptr [ESP + 0x1c]          ; 0056aa64
    FXCH ST2                            ; 0056aa68
    FSTP float ptr [ESP + 0xd0]         ; 0056aa6a
    FDIV float ptr [ESP + 0xd0]         ; 0056aa71
    FXCH                                ; 0056aa78
    FMUL ST1                            ; 0056aa7a
    FLD float ptr [ESP + 0x20]          ; 0056aa7c
    FMUL ST2                            ; 0056aa80
    FLD float ptr [ESP + 0x24]          ; 0056aa82
    FMULP ST3                           ; 0056aa86
    FLD float ptr [EBX + 0x4]           ; 0056aa88
    FXCH                                ; 0056aa8b
    FSTP float ptr [ESP + 0x20]         ; 0056aa8d
    FMUL float ptr [ESP + 0x20]         ; 0056aa91
    FLD float ptr [ESP + 0x74]          ; 0056aa95
    FMUL float ptr [ESP + 0x20]         ; 0056aa99
    FXCH ST2                            ; 0056aa9d
    FSTP float ptr [ESP + 0x1c]         ; 0056aa9f
    FLD float ptr [EBX]                 ; 0056aaa3
    FMUL float ptr [ESP + 0x1c]         ; 0056aaa5
    FLD float ptr [ESP + 0x70]          ; 0056aaa9
    FMUL float ptr [ESP + 0x1c]         ; 0056aaad
    FXCH ST4                            ; 0056aab1
    FSTP float ptr [ESP + 0x24]         ; 0056aab3
    FXCH ST3                            ; 0056aab7
    FADDP ST2,ST0                       ; 0056aab9
    FADDP ST2,ST0                       ; 0056aabb
    FLD float ptr [ESP + 0x78]          ; 0056aabd
    FMUL float ptr [ESP + 0x24]         ; 0056aac1
    FLD float ptr [EBX + 0x8]           ; 0056aac5
    FMUL float ptr [ESP + 0x24]         ; 0056aac8
    FXCH                                ; 0056aacc
    FADDP ST2,ST0                       ; 0056aace
    FADDP ST2,ST0                       ; 0056aad0
    FSUBP                               ; 0056aad2
    FLDZ                                ; 0056aad4
    FXCH                                ; 0056aad6
    FSTP double ptr [ESP + 0x8]         ; 0056aad8
    FCOMP double ptr [ESP + 0x8]        ; 0056aadc
    FNSTSW AX                           ; 0056aae0
    SAHF                                ; 0056aae2
    JC 0x0056ab6f                       ; 0056aae3
        ;   XREF to: 0056ab6f (CONDITIONAL_JUMP)  ; LAB_0056ab6f
    FLD float ptr [EBX]                 ; 0056aae9
        ;   Label: LAB_0056aae9
    FSUB float ptr [ESP + 0x70]         ; 0056aaeb
    FMUL ST0                            ; 0056aaef
    FLD float ptr [EBX + 0x4]           ; 0056aaf1
    FSUB float ptr [ESP + 0x74]         ; 0056aaf4
    FMUL ST0                            ; 0056aaf8
    FLD float ptr [EBX + 0x8]           ; 0056aafa
    FXCH                                ; 0056aafd
    FADDP ST2,ST0                       ; 0056aaff
    FSUB float ptr [ESP + 0x78]         ; 0056ab01
    FMUL ST0                            ; 0056ab05
        ;   Label: LAB_0056ab05
    FADDP                               ; 0056ab07
    FSQRT                               ; 0056ab09
    FSTP float ptr [ESP + 0xec]         ; 0056ab0b
    FLD float ptr [ESP + 0xec]          ; 0056ab12
    FCOMP float ptr [ESP + 0xd4]        ; 0056ab19
    FNSTSW AX                           ; 0056ab20
    SAHF                                ; 0056ab22
    JC 0x0056ac41                       ; 0056ab23
        ;   XREF to: 0056ac41 (CONDITIONAL_JUMP)  ; LAB_0056ac41
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0056ab29
        ;   Label: LAB_0056ab29
    ADD ECX,0x24                        ; 0056ab30
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0056ab33
    MOV dword ptr [ESP + 0xdc],ECX      ; 0056ab3a
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0056ab41
    ADD EDX,0x30                        ; 0056ab48
    INC ESI                             ; 0056ab4b
    MOV EDI,dword ptr [ECX + 0x1de78]   ; 0056ab4c
    MOV dword ptr [ESP + 0xd8],ESI      ; 0056ab52
    CMP ESI,EDI                         ; 0056ab59
    JL 0x0056a956                       ; 0056ab5b
        ;   XREF to: 0056a956 (CONDITIONAL_JUMP)  ; LAB_0056a956
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0056ab61
        ;   Label: LAB_0056ab61
    MOV ESP,EBP                         ; 0056ab68
    POP EBP                             ; 0056ab6a
    POP EDI                             ; 0056ab6b
    POP ESI                             ; 0056ab6c
    POP EBX                             ; 0056ab6d
    RET                                 ; 0056ab6e
    FLD double ptr [ESP + 0x8]          ; 0056ab6f
        ;   Label: LAB_0056ab6f
    FCOMP double ptr [ESP]              ; 0056ab73
    FNSTSW AX                           ; 0056ab76
    SAHF                                ; 0056ab78
    JC 0x0056ab9c                       ; 0056ab79
        ;   XREF to: 0056ab9c (CONDITIONAL_JUMP)  ; LAB_0056ab9c
    FLD float ptr [EBX]                 ; 0056ab7b
    FSUB float ptr [ESP + 0x34]         ; 0056ab7d
    FMUL ST0                            ; 0056ab81
    FLD float ptr [EBX + 0x4]           ; 0056ab83
    FSUB float ptr [ESP + 0x38]         ; 0056ab86
    FMUL ST0                            ; 0056ab8a
    FLD float ptr [EBX + 0x8]           ; 0056ab8c
    FXCH                                ; 0056ab8f
    FADDP ST2,ST0                       ; 0056ab91
    FSUB float ptr [ESP + 0x3c]         ; 0056ab93
    JMP 0x0056ab05                      ; 0056ab97
        ;   XREF to: 0056ab05 (UNCONDITIONAL_JUMP)  ; LAB_0056ab05
    FLD float ptr [ESP + 0x1c]          ; 0056ab9c
        ;   Label: LAB_0056ab9c
    FLD double ptr [ESP + 0x8]          ; 0056aba0
    FSTP float ptr [ESP + 0xe4]         ; 0056aba4
    FMUL float ptr [ESP + 0xe4]         ; 0056abab
    FLD float ptr [ESP + 0x20]          ; 0056abb2
    FMUL float ptr [ESP + 0xe4]         ; 0056abb6
    FLD float ptr [ESP + 0x24]          ; 0056abbd
    FMUL float ptr [ESP + 0xe4]         ; 0056abc1
    FLD float ptr [ESP + 0x70]          ; 0056abc8
    FLD float ptr [ESP + 0x74]          ; 0056abcc
    LEA EDI,[ESP + 0x28]                ; 0056abd0
    LEA ESI,[ESP + 0x7c]                ; 0056abd4
    FXCH ST4                            ; 0056abd8
    FSTP float ptr [ESP + 0x7c]         ; 0056abda
    FXCH ST2                            ; 0056abde
    FSTP float ptr [ESP + 0x80]         ; 0056abe0
    FSTP float ptr [ESP + 0x84]         ; 0056abe7
    MOVSD ES:EDI,ESI                    ; 0056abee
    MOVSD ES:EDI,ESI                    ; 0056abef
    MOVSD ES:EDI,ESI                    ; 0056abf0
    FLD float ptr [ESP + 0x78]          ; 0056abf1
    LEA EDI,[ESP + 0x40]                ; 0056abf5
    LEA ESI,[ESP + 0x58]                ; 0056abf9
    FXCH                                ; 0056abfd
    FADD float ptr [ESP + 0x28]         ; 0056abff
    FXCH ST2                            ; 0056ac03
    FADD float ptr [ESP + 0x2c]         ; 0056ac05
    FXCH                                ; 0056ac09
    FADD float ptr [ESP + 0x30]         ; 0056ac0b
    FXCH ST2                            ; 0056ac0f
    FSTP float ptr [ESP + 0x58]         ; 0056ac11
    FSTP float ptr [ESP + 0x5c]         ; 0056ac15
    FSTP float ptr [ESP + 0x60]         ; 0056ac19
    MOVSD ES:EDI,ESI                    ; 0056ac1d
    MOVSD ES:EDI,ESI                    ; 0056ac1e
    MOVSD ES:EDI,ESI                    ; 0056ac1f
    FLD float ptr [EBX]                 ; 0056ac20
    FSUB float ptr [ESP + 0x40]         ; 0056ac22
    FMUL ST0                            ; 0056ac26
    FLD float ptr [EBX + 0x4]           ; 0056ac28
    FSUB float ptr [ESP + 0x44]         ; 0056ac2b
    FMUL ST0                            ; 0056ac2f
    FLD float ptr [EBX + 0x8]           ; 0056ac31
    FXCH                                ; 0056ac34
    FADDP ST2,ST0                       ; 0056ac36
    FSUB float ptr [ESP + 0x48]         ; 0056ac38
    JMP 0x0056ab05                      ; 0056ac3c
        ;   XREF to: 0056ab05 (UNCONDITIONAL_JUMP)  ; LAB_0056ab05
    MOV EAX,dword ptr [ESP + 0xec]      ; 0056ac41
        ;   Label: LAB_0056ac41
    MOV dword ptr [ESP + 0xc8],ECX      ; 0056ac48
    MOV dword ptr [ESP + 0xd4],EAX      ; 0056ac4f
    JMP 0x0056ab29                      ; 0056ac56
        ;   XREF to: 0056ab29 (UNCONDITIONAL_JUMP)  ; LAB_0056ab29

