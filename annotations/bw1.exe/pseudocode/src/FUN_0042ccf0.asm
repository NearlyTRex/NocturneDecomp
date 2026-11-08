; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042ccf0(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)
;
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined        Stack[-0x188]:1  local_188
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[35]:
;   FUN_004115b0 at 00411e3f
;   FUN_00412ba0 at 004137b2
;   FUN_0041bb40 at 0041c640
;   FUN_0041c9a0 at 0041cc94
;   FUN_00423b70 at 00423f90
;   FUN_00428ae0 at 00429bcc
;   FUN_0042a930 at 0042ad8a
;   FUN_00431cc0 at 00431fec
;   FUN_00432240 at 00432377
;   FUN_00433f10 at 0043406f
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_CCharacter_walkToPoint_g_005d589d
;   undefined4 DAT_005d58cf
;   undefined4 DAT_005d58d7
;   undefined4 DAT_005d58df
;   undefined4 DAT_005d58e7
;   undefined4 DAT_005d58ef
;   undefined4 DAT_005d58f7
;   undefined4 DAT_005d58ff
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_00408bb0
;   FUN_0040cd60
;   FUN_00445430
;   FUN_005349a0
;   FUN_005351f0
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ccf0
        ;   Label: FUN_0042ccf0
    PUSH ESI                            ; 0042ccf1
    PUSH EDI                            ; 0042ccf2
    PUSH EBP                            ; 0042ccf3
    MOV EBP,ESP                         ; 0042ccf4
    SUB ESP,0x18c                       ; 0042ccf6
    AND ESP,0xfffffff8                  ; 0042ccfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ccff
    MOV EAX,dword ptr [EBX + 0x2524]    ; 0042cd02
    MOV dword ptr [ESP + 0x14],EAX      ; 0042cd08
    MOV EAX,dword ptr [EBX + 0x2528]    ; 0042cd0c
    MOV dword ptr [ESP + 0x184],EAX     ; 0042cd12
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042cd19
    FLD float ptr [EAX + 0x8]           ; 0042cd1c
    FMUL ST0                            ; 0042cd1f
    FLD float ptr [EAX]                 ; 0042cd21
    FMUL ST0                            ; 0042cd23
    FADDP                               ; 0042cd25
    FSQRT                               ; 0042cd27
    MOV EDX,dword ptr [EBP + 0x20]      ; 0042cd29
    LEA ESI,[ESP + 0x108]               ; 0042cd2c
    LEA EDI,[ESP + 0xcc]                ; 0042cd33
    PUSH EDX                            ; 0042cd3a
    FSTP float ptr [ESP + 0x10]         ; 0042cd3b
    CALL FUN_005a7520                   ; 0042cd3f
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    ADD ESP,0x4                         ; 0042cd44
    LEA ESI,[ESP + 0x108]               ; 0042cd47
    MOV ECX,dword ptr [EBP + 0x18]      ; 0042cd4e
    MOVSD ES:EDI,ESI                    ; 0042cd51
    MOVSD ES:EDI,ESI                    ; 0042cd52
    MOVSD ES:EDI,ESI                    ; 0042cd53
    PUSH ECX                            ; 0042cd54
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0042cd55
    LEA ESI,[ESP + 0x58]                ; 0042cd5c
    PUSH EBX                            ; 0042cd60
    LEA EDI,[ESP + 0xc8]                ; 0042cd61
    MOV dword ptr [ESP + 0x10],EAX      ; 0042cd68
    CALL FUN_00408bb0                   ; 0042cd6c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x5c]                ; 0042cd71
    ADD ESP,0x8                         ; 0042cd75
    MOVSD ES:EDI,ESI                    ; 0042cd78
    MOVSD ES:EDI,ESI                    ; 0042cd79
    MOVSD ES:EDI,ESI                    ; 0042cd7a
    FLD float ptr [ESP + 0xc8]          ; 0042cd7b
    FMUL ST0                            ; 0042cd82
    FLD float ptr [ESP + 0xc0]          ; 0042cd84
    FMUL ST0                            ; 0042cd8b
    FADDP                               ; 0042cd8d
    FSQRT                               ; 0042cd8f
    LEA EAX,[ESP + 0xc0]                ; 0042cd91
    LEA ESI,[ESP + 0x30]                ; 0042cd98
    PUSH EAX                            ; 0042cd9c
    FSTP float ptr [ESP + 0x14]         ; 0042cd9d
    CALL FUN_005a7520                   ; 0042cda1
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    ADD ESP,0x4                         ; 0042cda6
    FLD float ptr [ESP + 0x10]          ; 0042cda9
    FSUB float ptr [ESP + 0xc]          ; 0042cdad
    FABS                                ; 0042cdb1
    LEA EDI,[ESP + 0xe4]                ; 0042cdb3
    LEA ESI,[ESP + 0x30]                ; 0042cdba
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042cdbe
    MOVSD ES:EDI,ESI                    ; 0042cdc1
    MOVSD ES:EDI,ESI                    ; 0042cdc2
    MOVSD ES:EDI,ESI                    ; 0042cdc3
    FLD float ptr [EAX + 0x4]           ; 0042cdc4
    FMUL ST0                            ; 0042cdc7
    FLD float ptr [EAX]                 ; 0042cdc9
    FMUL ST0                            ; 0042cdcb
    FADDP                               ; 0042cdcd
    FLD float ptr [EAX + 0x8]           ; 0042cdcf
    FMUL ST0                            ; 0042cdd2
    FADDP                               ; 0042cdd4
    FSQRT                               ; 0042cdd6
    XOR ESI,ESI                         ; 0042cdd8
    MOV dword ptr [ESP + 0x164],ESI     ; 0042cdda
    MOV dword ptr [ESP],ESI             ; 0042cde1
    FXCH                                ; 0042cde4
    FSTP float ptr [ESP + 0x4]          ; 0042cde6
    FLDZ                                ; 0042cdea
    FCOMPP                              ; 0042cdec
    FNSTSW AX                           ; 0042cdee
    SAHF                                ; 0042cdf0
    JC 0x0042d0e5                       ; 0042cdf1
        ;   XREF to: 0042d0e5 (CONDITIONAL_JUMP)  ; LAB_0042d0e5
    FLD float ptr [EBP + 0x24]          ; 0042cdf7
        ;   Label: LAB_0042cdf7
    FADD double ptr [0x005d58cf]        ; 0042cdfa | DAT_005d58cf
    FLD float ptr [ESP + 0x4]           ; 0042ce00
    FCOMPP                              ; 0042ce04
    FNSTSW AX                           ; 0042ce06
    SAHF                                ; 0042ce08
    JNC 0x0042ce3d                      ; 0042ce09
        ;   XREF to: 0042ce3d (CONDITIONAL_JUMP)  ; LAB_0042ce3d
    FLD float ptr [EBP + 0x28]          ; 0042ce0b
    FADD double ptr [0x005d58cf]        ; 0042ce0e | DAT_005d58cf
    FLD float ptr [ESP]                 ; 0042ce14
    FCOMPP                              ; 0042ce17
    FNSTSW AX                           ; 0042ce19
    SAHF                                ; 0042ce1b
    JNC 0x0042ce3d                      ; 0042ce1c
        ;   XREF to: 0042ce3d (CONDITIONAL_JUMP)  ; LAB_0042ce3d
    FLD float ptr [ESP + 0xc4]          ; 0042ce1e
    FABS                                ; 0042ce25
    FCOMP double ptr [0x005d58d7]       ; 0042ce27 | DAT_005d58d7
    FNSTSW AX                           ; 0042ce2d
    SAHF                                ; 0042ce2f
    JNC 0x0042ce3d                      ; 0042ce30
        ;   XREF to: 0042ce3d (CONDITIONAL_JUMP)  ; LAB_0042ce3d
    MOV dword ptr [ESP + 0x164],0x1     ; 0042ce32
    LEA EAX,[EBX + 0x249c]              ; 0042ce3d
        ;   Label: LAB_0042ce3d
    MOV dword ptr [EAX + 0x8],0x0       ; 0042ce43
    FLD float ptr [ESP + 0x8]           ; 0042ce4a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042ce4e
    MOV dword ptr [EAX + 0x4],EDX       ; 0042ce51
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042ce54
    MOV dword ptr [EAX],EDX             ; 0042ce57
    FABS                                ; 0042ce59
    FMUL double ptr [0x005d58df]        ; 0042ce5b | DAT_005d58df
    FMUL double ptr [0x005d58e7]        ; 0042ce61 | DAT_005d58e7
    FLD float ptr [ESP + 0xc]           ; 0042ce67
    FMUL double ptr [0x005d58ef]        ; 0042ce6b | DAT_005d58ef
    FADD double ptr [0x005d58f7]        ; 0042ce71 | DAT_005d58f7
    FADDP                               ; 0042ce77
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0042ce79
    FSTP float ptr [ESP + 0x12c]        ; 0042ce7f
    TEST EDX,EDX                        ; 0042ce86
    JZ 0x0042d119                       ; 0042ce88
        ;   XREF to: 0042d119 (CONDITIONAL_JUMP)  ; LAB_0042d119
    FLD float ptr [ESP + 0x14]          ; 0042ce8e
        ;   Label: LAB_0042ce8e
    FMUL double ptr [0x005d58ff]        ; 0042ce92 | DAT_005d58ff
    FADD float ptr [ESP + 0xc]          ; 0042ce98
    FLD float ptr [ESP + 0x10]          ; 0042ce9c
    FCOMPP                              ; 0042cea0
    FNSTSW AX                           ; 0042cea2
    SAHF                                ; 0042cea4
    JNC 0x0042d2e6                      ; 0042cea5
        ;   XREF to: 0042d2e6 (CONDITIONAL_JUMP)  ; LAB_0042d2e6
    FLD float ptr [ESP + 0xc0]          ; 0042ceab
    FLD float ptr [ESP + 0xc4]          ; 0042ceb2
    FLD float ptr [ESP + 0xc8]          ; 0042ceb9
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042cec0
    LEA EDI,[ESP + 0xfc]                ; 0042cec3
    LEA ESI,[ESP + 0x24]                ; 0042ceca
    FXCH ST2                            ; 0042cece
    FSUB float ptr [EAX]                ; 0042ced0
    FXCH                                ; 0042ced2
    FSUB float ptr [EAX + 0x4]          ; 0042ced4
    FXCH ST2                            ; 0042ced7
    FSUB float ptr [EAX + 0x8]          ; 0042ced9
    FXCH                                ; 0042cedc
    FSTP float ptr [ESP + 0x24]         ; 0042cede
    FXCH                                ; 0042cee2
    FSTP float ptr [ESP + 0x28]         ; 0042cee4
    FSTP float ptr [ESP + 0x2c]         ; 0042cee8
    MOVSD ES:EDI,ESI                    ; 0042ceec
    MOVSD ES:EDI,ESI                    ; 0042ceed
    MOVSD ES:EDI,ESI                    ; 0042ceee
    FLD float ptr [ESP + 0xfc]          ; 0042ceef
    FMUL ST0                            ; 0042cef6
    FLD float ptr [ESP + 0x104]         ; 0042cef8
    FMUL ST0                            ; 0042ceff
    FADDP                               ; 0042cf01
    FSQRT                               ; 0042cf03
    XOR EDI,EDI                         ; 0042cf05
    MOV dword ptr [ESP + 0x100],EDI     ; 0042cf07
    FST float ptr [ESP + 0x138]         ; 0042cf0e
    FCOMP float ptr [ESP + 0x14]        ; 0042cf15
    FNSTSW AX                           ; 0042cf19
    SAHF                                ; 0042cf1b
    JBE 0x0042cf6e                      ; 0042cf1c
        ;   XREF to: 0042cf6e (CONDITIONAL_JUMP)  ; LAB_0042cf6e
    FLD float ptr [ESP + 0x14]          ; 0042cf1e
    FDIV float ptr [ESP + 0x138]        ; 0042cf22
    FLD float ptr [ESP + 0xfc]          ; 0042cf29
    FXCH                                ; 0042cf30
    FSTP float ptr [ESP + 0x16c]        ; 0042cf32
    FMUL float ptr [ESP + 0x16c]        ; 0042cf39
    FLDZ                                ; 0042cf40
    FMUL float ptr [ESP + 0x16c]        ; 0042cf42
    FLD float ptr [ESP + 0x104]         ; 0042cf49
    FMUL float ptr [ESP + 0x16c]        ; 0042cf50
    FXCH ST2                            ; 0042cf57
    FSTP float ptr [ESP + 0xfc]         ; 0042cf59
    FSTP float ptr [ESP + 0x100]        ; 0042cf60
    FSTP float ptr [ESP + 0x104]        ; 0042cf67
    LEA EAX,[EBX + 0x250c]              ; 0042cf6e
        ;   Label: LAB_0042cf6e
    LEA EDI,[ESP + 0x18]                ; 0042cf74
    LEA ESI,[ESP + 0x78]                ; 0042cf78
    FLD float ptr [EAX]                 ; 0042cf7c
    FLD float ptr [EAX + 0x4]           ; 0042cf7e
    FLD float ptr [EAX + 0x8]           ; 0042cf81
    FXCH ST2                            ; 0042cf84
    FADD float ptr [ESP + 0xfc]         ; 0042cf86
    FXCH                                ; 0042cf8d
    FADD float ptr [ESP + 0x100]        ; 0042cf8f
    FXCH ST2                            ; 0042cf96
    FADD float ptr [ESP + 0x104]        ; 0042cf98
    FXCH                                ; 0042cf9f
    FSTP float ptr [EAX]                ; 0042cfa1
    FXCH                                ; 0042cfa3
    FSTP float ptr [EAX + 0x4]          ; 0042cfa5
    FSTP float ptr [EAX + 0x8]          ; 0042cfa8
    FLD float ptr [ESP + 0xc0]          ; 0042cfab
    FLD float ptr [ESP + 0xc4]          ; 0042cfb2
    FLD float ptr [ESP + 0xc8]          ; 0042cfb9
    FXCH ST2                            ; 0042cfc0
    FSUB float ptr [EAX]                ; 0042cfc2
    FXCH                                ; 0042cfc4
    FSUB float ptr [EAX + 0x4]          ; 0042cfc6
    FXCH ST2                            ; 0042cfc9
    FSUB float ptr [EAX + 0x8]          ; 0042cfcb
    FXCH                                ; 0042cfce
    FSTP float ptr [ESP + 0x78]         ; 0042cfd0
    FXCH                                ; 0042cfd4
    FSTP float ptr [ESP + 0x7c]         ; 0042cfd6
    FSTP float ptr [ESP + 0x80]         ; 0042cfda
    LEA EAX,[ESP + 0x18]                ; 0042cfe1
    MOVSD ES:EDI,ESI                    ; 0042cfe5
    MOVSD ES:EDI,ESI                    ; 0042cfe6
    MOVSD ES:EDI,ESI                    ; 0042cfe7
    PUSH EAX                            ; 0042cfe8
    LEA ESI,[ESP + 0xb8]                ; 0042cfe9
    LEA EDI,[ESP + 0x70]                ; 0042cff0
    CALL FUN_005a7520                   ; 0042cff4
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0xb8]                ; 0042cff9
    ADD ESP,0x4                         ; 0042d000
    MOVSD ES:EDI,ESI                    ; 0042d003
    MOVSD ES:EDI,ESI                    ; 0042d004
    MOVSD ES:EDI,ESI                    ; 0042d005
    FLD float ptr [ESP + 0x70]          ; 0042d006
    FSUB float ptr [ESP + 0x8]          ; 0042d00a
    SUB ESP,0x4                         ; 0042d00e
    FSTP float ptr [ESP]                ; 0042d011
    CALL FUN_0040cd60                   ; 0042d014
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042d019
    FLD float ptr [ESP + 0x18c]         ; 0042d020
    ADD ESP,0x4                         ; 0042d027
    FLD float ptr [ESP + 0x184]         ; 0042d02a
    FXCH                                ; 0042d031
    FST float ptr [ESP + 0x180]         ; 0042d033
    FXCH                                ; 0042d03a
    FCHS                                ; 0042d03c
    FSTP float ptr [ESP + 0x130]        ; 0042d03e
    FCOMP float ptr [ESP + 0x130]       ; 0042d045
    FNSTSW AX                           ; 0042d04c
    SAHF                                ; 0042d04e
    JNC 0x0042d2bb                      ; 0042d04f
        ;   XREF to: 0042d2bb (CONDITIONAL_JUMP)  ; LAB_0042d2bb
    MOV EAX,dword ptr [ESP + 0x130]     ; 0042d055
    MOV dword ptr [ESP + 0x15c],EAX     ; 0042d05c
        ;   Label: LAB_0042d05c
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0042d063
    MOV dword ptr [EBX + 0x2508],EAX    ; 0042d06a
        ;   Label: LAB_0042d06a
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0042d070
    JZ 0x0042d0c9                       ; 0042d077
        ;   XREF to: 0042d0c9 (CONDITIONAL_JUMP)  ; LAB_0042d0c9
    FLD float ptr [ESP + 0xc4]          ; 0042d079
    FLD float ptr [ESP + 0x14]          ; 0042d080
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042d084
    FCHS                                ; 0042d087
    FXCH                                ; 0042d089
    FSUB float ptr [EAX + 0x4]          ; 0042d08b
    FXCH                                ; 0042d08e
    FSTP float ptr [ESP + 0x148]        ; 0042d090
    FST float ptr [ESP + 0x170]         ; 0042d097
    FCOMP float ptr [ESP + 0x148]       ; 0042d09e
    FNSTSW AX                           ; 0042d0a5
    SAHF                                ; 0042d0a7
    JNC 0x0042d50f                      ; 0042d0a8
        ;   XREF to: 0042d50f (CONDITIONAL_JUMP)  ; LAB_0042d50f
    MOV EAX,dword ptr [ESP + 0x148]     ; 0042d0ae
    MOV dword ptr [ESP + 0x158],EAX     ; 0042d0b5
        ;   Label: LAB_0042d0b5
    MOV EAX,dword ptr [ESP + 0x158]     ; 0042d0bc
    MOV dword ptr [EBX + 0x2510],EAX    ; 0042d0c3
    CMP dword ptr [ESP + 0x164],0x0     ; 0042d0c9
        ;   Label: LAB_0042d0c9
    JZ 0x0042d534                       ; 0042d0d1
        ;   XREF to: 0042d534 (CONDITIONAL_JUMP)  ; LAB_0042d534
    MOV ESI,0x1                         ; 0042d0d7
    MOV EAX,ESI                         ; 0042d0dc
    MOV ESP,EBP                         ; 0042d0de
    POP EBP                             ; 0042d0e0
    POP EDI                             ; 0042d0e1
    POP ESI                             ; 0042d0e2
    POP EBX                             ; 0042d0e3
    RET                                 ; 0042d0e4
    FLD float ptr [ESP + 0xe8]          ; 0042d0e5
        ;   Label: LAB_0042d0e5
    FSUB float ptr [ESP + 0xd0]         ; 0042d0ec
    SUB ESP,0x4                         ; 0042d0f3
    FSTP float ptr [ESP]                ; 0042d0f6
    CALL FUN_0040cd60                   ; 0042d0f9
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042d0fe
    FLD float ptr [ESP + 0x18c]         ; 0042d105
    FABS                                ; 0042d10c
    ADD ESP,0x4                         ; 0042d10e
    FSTP float ptr [ESP]                ; 0042d111
    JMP 0x0042cdf7                      ; 0042d114
        ;   XREF to: 0042cdf7 (UNCONDITIONAL_JUMP)  ; LAB_0042cdf7
    FLD float ptr [ESP + 0x10]          ; 0042d119
        ;   Label: LAB_0042d119
    FCOMP float ptr [ESP + 0x12c]       ; 0042d11d
    FNSTSW AX                           ; 0042d124
    SAHF                                ; 0042d126
    JC 0x0042d173                       ; 0042d127
        ;   XREF to: 0042d173 (CONDITIONAL_JUMP)  ; LAB_0042d173
    CMP dword ptr [EBP + 0x1c],0x0      ; 0042d129
        ;   Label: LAB_0042d129
    JNZ 0x0042d13e                      ; 0042d12d
        ;   XREF to: 0042d13e (CONDITIONAL_JUMP)  ; LAB_0042d13e
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042d12f
    PUSH ESI                            ; 0042d132
    CALL FUN_005351f0                   ; 0042d133
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005351f0()
    ADD ESP,0x4                         ; 0042d138
    MOV dword ptr [EBP + 0x1c],EAX      ; 0042d13b
    MOV EDI,dword ptr [EBX + 0x6c]      ; 0042d13e
        ;   Label: LAB_0042d13e
    PUSH EDI                            ; 0042d141
    LEA EAX,[ESP + 0x40]                ; 0042d142
    PUSH EAX                            ; 0042d146
    LEA EAX,[EBX + 0x20]                ; 0042d147
    PUSH EAX                            ; 0042d14a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042d14b
    PUSH EAX                            ; 0042d14e
    CALL FUN_005349a0                   ; 0042d14f
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005349a0()
    ADD ESP,0x10                        ; 0042d154
    TEST EAX,EAX                        ; 0042d157
    JNZ 0x0042d1ac                      ; 0042d159
        ;   XREF to: 0042d1ac (CONDITIONAL_JUMP)  ; LAB_0042d1ac
    CMP dword ptr [ESP + 0x164],0x0     ; 0042d15b
    JZ 0x0042d18a                       ; 0042d163
        ;   XREF to: 0042d18a (CONDITIONAL_JUMP)  ; LAB_0042d18a
    MOV ESI,0x1                         ; 0042d165
    MOV EAX,ESI                         ; 0042d16a
    MOV ESP,EBP                         ; 0042d16c
    POP EBP                             ; 0042d16e
    POP EDI                             ; 0042d16f
    POP ESI                             ; 0042d170
    POP EBX                             ; 0042d171
    RET                                 ; 0042d172
    FLD float ptr [ESP + 0xc4]          ; 0042d173
        ;   Label: LAB_0042d173
    FABS                                ; 0042d17a
    FLD1                                ; 0042d17c
    FCOMPP                              ; 0042d17e
    FNSTSW AX                           ; 0042d180
    SAHF                                ; 0042d182
    JC 0x0042d129                       ; 0042d183
        ;   XREF to: 0042d129 (CONDITIONAL_JUMP)  ; LAB_0042d129
    JMP 0x0042ce8e                      ; 0042d185
        ;   XREF to: 0042ce8e (UNCONDITIONAL_JUMP)  ; LAB_0042ce8e
    PUSH 0x5d589d                       ; 0042d18a | = "CCharacter::walkToPoint - go somewher..."
        ;   Label: LAB_0042d18a
    MOV ECX,dword ptr [0x00611100]      ; 0042d18f | PTR_DAT_00611100
    PUSH ECX                            ; 0042d195 | DAT_007db5f0
    MOV ESI,0xffffffff                  ; 0042d196
    CALL FUN_00445430                   ; 0042d19b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x8                         ; 0042d1a0
    MOV EAX,ESI                         ; 0042d1a3
    MOV ESP,EBP                         ; 0042d1a5
    POP EBP                             ; 0042d1a7
    POP EDI                             ; 0042d1a8
    POP ESI                             ; 0042d1a9
    POP EBX                             ; 0042d1aa
    RET                                 ; 0042d1ab
    FLD float ptr [ESP + 0x10]          ; 0042d1ac
        ;   Label: LAB_0042d1ac
    FLD float ptr [ESP + 0x14]          ; 0042d1b0
    LEA ESI,[EBX + 0x2514]              ; 0042d1b4
    FCHS                                ; 0042d1ba
    FXCH                                ; 0042d1bc
    FSUB float ptr [ESP + 0xc]          ; 0042d1be
    FXCH                                ; 0042d1c2
    FSTP float ptr [ESP + 0x140]        ; 0042d1c4
    FST float ptr [ESP + 0x160]         ; 0042d1cb
    FCOMP float ptr [ESP + 0x140]       ; 0042d1d2
    FNSTSW AX                           ; 0042d1d9
    SAHF                                ; 0042d1db
    JNC 0x0042d271                      ; 0042d1dc
        ;   XREF to: 0042d271 (CONDITIONAL_JUMP)  ; LAB_0042d271
    MOV EAX,dword ptr [ESP + 0x140]     ; 0042d1e2
    MOV dword ptr [ESP + 0x174],EAX     ; 0042d1e9
        ;   Label: LAB_0042d1e9
    FLD float ptr [ESI]                 ; 0042d1f0
    FADD float ptr [ESP + 0x174]        ; 0042d1f2
    FSTP float ptr [ESI]                ; 0042d1f9
    FLD float ptr [ESP + 0x40]          ; 0042d1fb
    FSUB float ptr [EBX + 0x34]         ; 0042d1ff
    FSTP float ptr [ESP + 0x188]        ; 0042d202
    PUSH dword ptr [ESP + 0x188]        ; 0042d209
    CALL FUN_0040cd60                   ; 0042d210
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042d215
    FLD float ptr [ESP + 0x18c]         ; 0042d21c
    ADD ESP,0x4                         ; 0042d223
    ADD EBX,0x2508                      ; 0042d226
    FLD float ptr [ESP + 0x184]         ; 0042d22c
    FXCH                                ; 0042d233
    FST float ptr [ESP + 0x17c]         ; 0042d235
    FXCH                                ; 0042d23c
    FCHS                                ; 0042d23e
    FSTP float ptr [ESP + 0x13c]        ; 0042d240
    FCOMP float ptr [ESP + 0x13c]       ; 0042d247
    FNSTSW AX                           ; 0042d24e
    SAHF                                ; 0042d250
    JNC 0x0042d296                      ; 0042d251
        ;   XREF to: 0042d296 (CONDITIONAL_JUMP)  ; LAB_0042d296
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0042d253
    MOV dword ptr [ESP + 0x14c],EAX     ; 0042d25a
        ;   Label: LAB_0042d25a
    FLD float ptr [EBX]                 ; 0042d261
    FADD float ptr [ESP + 0x14c]        ; 0042d263
    FSTP float ptr [EBX]                ; 0042d26a
    JMP 0x0042d0c9                      ; 0042d26c
        ;   XREF to: 0042d0c9 (UNCONDITIONAL_JUMP)  ; LAB_0042d0c9
    FLD float ptr [ESP + 0x160]         ; 0042d271
        ;   Label: LAB_0042d271
    FCOMP float ptr [ESP + 0x14]        ; 0042d278
    FNSTSW AX                           ; 0042d27c
    SAHF                                ; 0042d27e
    JBE 0x0042d28a                      ; 0042d27f
        ;   XREF to: 0042d28a (CONDITIONAL_JUMP)  ; LAB_0042d28a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d281
    JMP 0x0042d1e9                      ; 0042d285
        ;   XREF to: 0042d1e9 (UNCONDITIONAL_JUMP)  ; LAB_0042d1e9
    MOV EAX,dword ptr [ESP + 0x160]     ; 0042d28a
        ;   Label: LAB_0042d28a
    JMP 0x0042d1e9                      ; 0042d291
        ;   XREF to: 0042d1e9 (UNCONDITIONAL_JUMP)  ; LAB_0042d1e9
    FLD float ptr [ESP + 0x17c]         ; 0042d296
        ;   Label: LAB_0042d296
    FCOMP float ptr [ESP + 0x184]       ; 0042d29d
    FNSTSW AX                           ; 0042d2a4
    SAHF                                ; 0042d2a6
    JBE 0x0042d2b2                      ; 0042d2a7
        ;   XREF to: 0042d2b2 (CONDITIONAL_JUMP)  ; LAB_0042d2b2
    MOV EAX,dword ptr [ESP + 0x184]     ; 0042d2a9
    JMP 0x0042d25a                      ; 0042d2b0
        ;   XREF to: 0042d25a (UNCONDITIONAL_JUMP)  ; LAB_0042d25a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0042d2b2
        ;   Label: LAB_0042d2b2
    JMP 0x0042d25a                      ; 0042d2b9
        ;   XREF to: 0042d25a (UNCONDITIONAL_JUMP)  ; LAB_0042d25a
    FLD float ptr [ESP + 0x180]         ; 0042d2bb
        ;   Label: LAB_0042d2bb
    FCOMP float ptr [ESP + 0x184]       ; 0042d2c2
    FNSTSW AX                           ; 0042d2c9
    SAHF                                ; 0042d2cb
    JBE 0x0042d2da                      ; 0042d2cc
        ;   XREF to: 0042d2da (CONDITIONAL_JUMP)  ; LAB_0042d2da
    MOV EAX,dword ptr [ESP + 0x184]     ; 0042d2ce
    JMP 0x0042d05c                      ; 0042d2d5
        ;   XREF to: 0042d05c (UNCONDITIONAL_JUMP)  ; LAB_0042d05c
    MOV EAX,dword ptr [ESP + 0x180]     ; 0042d2da
        ;   Label: LAB_0042d2da
    JMP 0x0042d05c                      ; 0042d2e1
        ;   XREF to: 0042d05c (UNCONDITIONAL_JUMP)  ; LAB_0042d05c
    FLD float ptr [ESP + 0x10]          ; 0042d2e6
        ;   Label: LAB_0042d2e6
    FLD float ptr [ESP + 0x14]          ; 0042d2ea
    LEA ESI,[EBX + 0x2514]              ; 0042d2ee
    FCHS                                ; 0042d2f4
    FXCH                                ; 0042d2f6
    FSUB float ptr [ESP + 0xc]          ; 0042d2f8
    FXCH                                ; 0042d2fc
    FSTP float ptr [ESP + 0x134]        ; 0042d2fe
    FST float ptr [ESP + 0x168]         ; 0042d305
    FCOMP float ptr [ESP + 0x134]       ; 0042d30c
    FNSTSW AX                           ; 0042d313
    SAHF                                ; 0042d315
    JNC 0x0042d4a3                      ; 0042d316
        ;   XREF to: 0042d4a3 (CONDITIONAL_JUMP)  ; LAB_0042d4a3
    MOV EAX,dword ptr [ESP + 0x134]     ; 0042d31c
    MOV dword ptr [ESP + 0x150],EAX     ; 0042d323
        ;   Label: LAB_0042d323
    FLD float ptr [ESI]                 ; 0042d32a
    LEA EAX,[EBX + 0x250c]              ; 0042d32c
    FADD float ptr [ESP + 0x150]        ; 0042d332
    PUSH EAX                            ; 0042d339
    FSTP float ptr [ESI]                ; 0042d33a
    PUSH EBX                            ; 0042d33c
    LEA ESI,[ESP + 0xe0]                ; 0042d33d
    LEA EDI,[ESP + 0x8c]                ; 0042d344
    CALL FUN_00408b40                   ; 0042d34b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xe0]                ; 0042d350
    ADD ESP,0x8                         ; 0042d357
    MOVSD ES:EDI,ESI                    ; 0042d35a
    MOVSD ES:EDI,ESI                    ; 0042d35b
    MOVSD ES:EDI,ESI                    ; 0042d35c
    MOV ESI,dword ptr [EBP + 0x20]      ; 0042d35d
    PUSH ESI                            ; 0042d360
    PUSH EBX                            ; 0042d361
    LEA ESI,[ESP + 0x11c]               ; 0042d362
    LEA EDI,[ESP + 0x50]                ; 0042d369
    CALL FUN_00408ac0                   ; 0042d36d
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    ADD ESP,0x8                         ; 0042d372
    LEA ESI,[ESP + 0x114]               ; 0042d375
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042d37c
    MOVSD ES:EDI,ESI                    ; 0042d37f
    MOVSD ES:EDI,ESI                    ; 0042d380
    MOVSD ES:EDI,ESI                    ; 0042d381
    FLD float ptr [EAX]                 ; 0042d382
    FLD float ptr [EAX + 0x4]           ; 0042d384
    FLD float ptr [EAX + 0x8]           ; 0042d387
    LEA EDI,[ESP + 0x9c]                ; 0042d38a
    LEA ESI,[ESP + 0xa8]                ; 0042d391
    FXCH ST2                            ; 0042d398
    FSUB float ptr [ESP + 0x48]         ; 0042d39a
    FXCH                                ; 0042d39e
    FSUB float ptr [ESP + 0x4c]         ; 0042d3a0
    FXCH ST2                            ; 0042d3a4
    FSUB float ptr [ESP + 0x50]         ; 0042d3a6
    FXCH                                ; 0042d3aa
    FSTP float ptr [ESP + 0xa8]         ; 0042d3ac
    FXCH                                ; 0042d3b3
    FSTP float ptr [ESP + 0xac]         ; 0042d3b5
    FSTP float ptr [ESP + 0xb0]         ; 0042d3bc
    MOVSD ES:EDI,ESI                    ; 0042d3c3
    MOVSD ES:EDI,ESI                    ; 0042d3c4
    MOVSD ES:EDI,ESI                    ; 0042d3c5
    LEA EAX,[ESP + 0x120]               ; 0042d3c6
    FLD float ptr [ESP + 0x9c]          ; 0042d3cd
    FLD float ptr [ESP + 0xa0]          ; 0042d3d4
    FLD float ptr [ESP + 0xa4]          ; 0042d3db
    LEA EDI,[ESP + 0x120]               ; 0042d3e2
    LEA ESI,[ESP + 0x60]                ; 0042d3e9
    FXCH ST2                            ; 0042d3ed
    FSUB float ptr [ESP + 0x84]         ; 0042d3ef
    FXCH                                ; 0042d3f6
    FSUB float ptr [ESP + 0x88]         ; 0042d3f8
    FXCH ST2                            ; 0042d3ff
    FSUB float ptr [ESP + 0x8c]         ; 0042d401
    FXCH                                ; 0042d408
    FSTP float ptr [ESP + 0x60]         ; 0042d40a
    FXCH                                ; 0042d40e
    FSTP float ptr [ESP + 0x64]         ; 0042d410
    FSTP float ptr [ESP + 0x68]         ; 0042d414
    MOVSD ES:EDI,ESI                    ; 0042d418
    MOVSD ES:EDI,ESI                    ; 0042d419
    MOVSD ES:EDI,ESI                    ; 0042d41a
    PUSH EAX                            ; 0042d41b
    LEA ESI,[ESP + 0x94]                ; 0042d41c
    LEA EDI,[ESP + 0xf4]                ; 0042d423
    CALL FUN_005a7520                   ; 0042d42a
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x94]                ; 0042d42f
    ADD ESP,0x4                         ; 0042d436
    MOVSD ES:EDI,ESI                    ; 0042d439
    MOVSD ES:EDI,ESI                    ; 0042d43a
    MOVSD ES:EDI,ESI                    ; 0042d43b
    FLD float ptr [ESP + 0xf4]          ; 0042d43c
    FSUB float ptr [EBX + 0x34]         ; 0042d443
    SUB ESP,0x4                         ; 0042d446
    FSTP float ptr [ESP]                ; 0042d449
    CALL FUN_0040cd60                   ; 0042d44c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042d451
    FLD float ptr [ESP + 0x18c]         ; 0042d458
    ADD ESP,0x4                         ; 0042d45f
    FLD float ptr [ESP + 0x184]         ; 0042d462
    FXCH                                ; 0042d469
    FST float ptr [ESP + 0x178]         ; 0042d46b
    FXCH                                ; 0042d472
    FCHS                                ; 0042d474
    FSTP float ptr [ESP + 0x144]        ; 0042d476
    FCOMP float ptr [ESP + 0x144]       ; 0042d47d
    FNSTSW AX                           ; 0042d484
    SAHF                                ; 0042d486
    JNC 0x0042d4c8                      ; 0042d487
        ;   XREF to: 0042d4c8 (CONDITIONAL_JUMP)  ; LAB_0042d4c8
    MOV EAX,dword ptr [ESP + 0x144]     ; 0042d489
    MOV dword ptr [ESP + 0x154],EAX     ; 0042d490
    MOV EAX,dword ptr [ESP + 0x154]     ; 0042d497
    JMP 0x0042d06a                      ; 0042d49e
        ;   XREF to: 0042d06a (UNCONDITIONAL_JUMP)  ; LAB_0042d06a
    FLD float ptr [ESP + 0x168]         ; 0042d4a3
        ;   Label: LAB_0042d4a3
    FCOMP float ptr [ESP + 0x14]        ; 0042d4aa
    FNSTSW AX                           ; 0042d4ae
    SAHF                                ; 0042d4b0
    JBE 0x0042d4bc                      ; 0042d4b1
        ;   XREF to: 0042d4bc (CONDITIONAL_JUMP)  ; LAB_0042d4bc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d4b3
    JMP 0x0042d323                      ; 0042d4b7
        ;   XREF to: 0042d323 (UNCONDITIONAL_JUMP)  ; LAB_0042d323
    MOV EAX,dword ptr [ESP + 0x168]     ; 0042d4bc
        ;   Label: LAB_0042d4bc
    JMP 0x0042d323                      ; 0042d4c3
        ;   XREF to: 0042d323 (UNCONDITIONAL_JUMP)  ; LAB_0042d323
    FLD float ptr [ESP + 0x178]         ; 0042d4c8
        ;   Label: LAB_0042d4c8
    FCOMP float ptr [ESP + 0x184]       ; 0042d4cf
    FNSTSW AX                           ; 0042d4d6
    SAHF                                ; 0042d4d8
    JBE 0x0042d4f5                      ; 0042d4d9
        ;   XREF to: 0042d4f5 (CONDITIONAL_JUMP)  ; LAB_0042d4f5
    MOV EAX,dword ptr [ESP + 0x184]     ; 0042d4db
    MOV dword ptr [ESP + 0x154],EAX     ; 0042d4e2
    MOV EAX,dword ptr [ESP + 0x154]     ; 0042d4e9
    JMP 0x0042d06a                      ; 0042d4f0
        ;   XREF to: 0042d06a (UNCONDITIONAL_JUMP)  ; LAB_0042d06a
    MOV EAX,dword ptr [ESP + 0x178]     ; 0042d4f5
        ;   Label: LAB_0042d4f5
    MOV dword ptr [ESP + 0x154],EAX     ; 0042d4fc
    MOV EAX,dword ptr [ESP + 0x154]     ; 0042d503
    JMP 0x0042d06a                      ; 0042d50a
        ;   XREF to: 0042d06a (UNCONDITIONAL_JUMP)  ; LAB_0042d06a
    FLD float ptr [ESP + 0x170]         ; 0042d50f
        ;   Label: LAB_0042d50f
    FCOMP float ptr [ESP + 0x14]        ; 0042d516
    FNSTSW AX                           ; 0042d51a
    SAHF                                ; 0042d51c
    JBE 0x0042d528                      ; 0042d51d
        ;   XREF to: 0042d528 (CONDITIONAL_JUMP)  ; LAB_0042d528
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d51f
    JMP 0x0042d0b5                      ; 0042d523
        ;   XREF to: 0042d0b5 (UNCONDITIONAL_JUMP)  ; LAB_0042d0b5
    MOV EAX,dword ptr [ESP + 0x170]     ; 0042d528
        ;   Label: LAB_0042d528
    JMP 0x0042d0b5                      ; 0042d52f
        ;   XREF to: 0042d0b5 (UNCONDITIONAL_JUMP)  ; LAB_0042d0b5
    XOR ESI,ESI                         ; 0042d534
        ;   Label: LAB_0042d534
    MOV EAX,ESI                         ; 0042d536
    MOV ESP,EBP                         ; 0042d538
    POP EBP                             ; 0042d53a
    POP EDI                             ; 0042d53b
    POP ESI                             ; 0042d53c
    POP EBX                             ; 0042d53d
    RET                                 ; 0042d53e

