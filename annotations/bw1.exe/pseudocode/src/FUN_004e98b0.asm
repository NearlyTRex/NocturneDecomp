; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e98b0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xec]:4  local_ec
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd8]:1  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb4]:1  local_b4
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
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x74]:4  local_74
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
; XREF[1]:
;   FUN_004e9250 at 004e957c
;
; Referenced Globals:
;   undefined4 DAT_005e4543
;   undefined4 DAT_005e4547
;   undefined4 DAT_005e454f
;   undefined4 DAT_005e4557
;   undefined4 DAT_005e455f
;   undefined4 DAT_005e4567
;   undefined4 DAT_005e456f
;   undefined4 DAT_005e4577
;   undefined4 DAT_005e457f
;   undefined4 DAT_005e4583
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_0040cd60
;   FUN_004ec350
;   FUN_00524770
;   FUN_005349a0
;   FUN_005351f0
;   FUN_005a7520
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e98b0
        ;   Label: FUN_004e98b0
    PUSH ESI                            ; 004e98b1
    PUSH EDI                            ; 004e98b2
    PUSH EBP                            ; 004e98b3
    MOV EBP,ESP                         ; 004e98b4
    SUB ESP,0xd4                        ; 004e98b6
    AND ESP,0xfffffff8                  ; 004e98bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e98bf
    MOV ECX,0x3e800000                  ; 004e98c2
    MOV ESI,0x3f490fdb                  ; 004e98c7
    MOV EAX,[0x01d06ab4]                ; 004e98cc | DAT_01d06ab4
    PUSH 0x30                           ; 004e98d1
    XOR EDX,EDX                         ; 004e98d3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004e98d5
    PUSH EDX                            ; 004e98dc
    MOV dword ptr [ESP + 0xc4],EAX      ; 004e98dd
    LEA EAX,[EBX + 0xc1d8]              ; 004e98e4
    MOV dword ptr [ESP + 0xcc],EDX      ; 004e98ea
    PUSH EAX                            ; 004e98f1
    MOV dword ptr [ESP + 0xd4],ECX      ; 004e98f2
    MOV dword ptr [ESP + 0xc4],ESI      ; 004e98f9
    CALL FUN_005bfb70                   ; 004e9900
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EDI,dword ptr [EBX + 0x1ffa8]   ; 004e9905
    ADD ESP,0xc                         ; 004e990b
    TEST EDI,EDI                        ; 004e990e
    JZ 0x004e9d34                       ; 004e9910
        ;   XREF to: 004e9d34 (CONDITIONAL_JUMP)  ; LAB_004e9d34
    LEA EDI,[ESP + 0x4c]                ; 004e9916
    LEA EDX,[EBX + 0x20]                ; 004e991a
    LEA ESI,[ESP + 0x88]                ; 004e991d
    MOV EAX,[0x01d06ab4]                ; 004e9924 | DAT_01d06ab4
    FLD float ptr [EDX]                 ; 004e9929
    FLD float ptr [EDX + 0x4]           ; 004e992b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004e992e
    FLD float ptr [EDX + 0x8]           ; 004e9935
    FXCH ST2                            ; 004e9938
    FSUB float ptr [EAX + 0x20]         ; 004e993a
    FXCH                                ; 004e993d
    FSUB float ptr [EAX + 0x24]         ; 004e993f
    FXCH ST2                            ; 004e9942
    FSUB float ptr [EAX + 0x28]         ; 004e9944
    FXCH                                ; 004e9947
    FSTP float ptr [ESP + 0x88]         ; 004e9949
    FXCH                                ; 004e9950
    FSTP float ptr [ESP + 0x8c]         ; 004e9952
    FSTP float ptr [ESP + 0x90]         ; 004e9959
    MOVSD ES:EDI,ESI                    ; 004e9960
    MOVSD ES:EDI,ESI                    ; 004e9961
    MOVSD ES:EDI,ESI                    ; 004e9962
    FLD float ptr [ESP + 0x50]          ; 004e9963
    FMUL ST0                            ; 004e9967
    FLD float ptr [ESP + 0x4c]          ; 004e9969
    FMUL ST0                            ; 004e996d
    FADDP                               ; 004e996f
    FLD float ptr [ESP + 0x54]          ; 004e9971
    FMUL ST0                            ; 004e9975
    FADDP                               ; 004e9977
    FSQRT                               ; 004e9979
    MOV EAX,dword ptr [EBX + 0x1ffa8]   ; 004e997b
    FSTP float ptr [ESP + 0xa0]         ; 004e9981
    CMP EAX,0x3                         ; 004e9988
    JNZ 0x004e9d3b                      ; 004e998b
        ;   XREF to: 004e9d3b (CONDITIONAL_JUMP)  ; LAB_004e9d3b
    MOV EDX,dword ptr [EBX + 0x1ffa8]   ; 004e9991
        ;   Label: LAB_004e9991
    CMP EDX,0x2                         ; 004e9997
    JNZ 0x004e9d56                      ; 004e999a
        ;   XREF to: 004e9d56 (CONDITIONAL_JUMP)  ; LAB_004e9d56
    LEA EAX,[ESP + 0xc]                 ; 004e99a0
        ;   Label: LAB_004e99a0
    PUSH EAX                            ; 004e99a4
    MOV ESI,0x461c3f9a                  ; 004e99a5
    PUSH EBX                            ; 004e99aa
    MOV dword ptr [ESP + 0x14],ESI      ; 004e99ab
    CALL FUN_004ec350                   ; 004e99af
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec350()
    MOV EDX,EAX                         ; 004e99b4
    ADD ESP,0x8                         ; 004e99b6
    TEST EAX,EAX                        ; 004e99b9
    JZ 0x004e9d64                       ; 004e99bb
        ;   XREF to: 004e9d64 (CONDITIONAL_JUMP)  ; LAB_004e9d64
    FLD float ptr [ESP + 0xc]           ; 004e99c1
    FCOMP double ptr [0x005e4547]       ; 004e99c5 | DAT_005e4547
    FNSTSW AX                           ; 004e99cb
    SAHF                                ; 004e99cd
    JNC 0x004e9d64                      ; 004e99ce
        ;   XREF to: 004e9d64 (CONDITIONAL_JUMP)  ; LAB_004e9d64
    MOV EAX,0x1                         ; 004e99d4
    MOV dword ptr [ESP + 0xbc],EDX      ; 004e99d9
    MOV dword ptr [ESP + 0xc4],EAX      ; 004e99e0
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004e99e7
        ;   Label: LAB_004e99e7
    LEA EDI,[ESP + 0x94]                ; 004e99ee
    LEA ESI,[ESP + 0x64]                ; 004e99f5
    LEA EDX,[EBX + 0x20]                ; 004e99f9
    FLD float ptr [EAX + 0x24]          ; 004e99fc
    FLD float ptr [EAX + 0x28]          ; 004e99ff
    FLD float ptr [EAX + 0x20]          ; 004e9a02
    LEA EAX,[ESP + 0x4c]                ; 004e9a05
    FSUB float ptr [EDX]                ; 004e9a09
    FXCH ST2                            ; 004e9a0b
    FSUB float ptr [EDX + 0x4]          ; 004e9a0d
    FXCH                                ; 004e9a10
    FSUB float ptr [EDX + 0x8]          ; 004e9a12
    FXCH ST2                            ; 004e9a15
    FSTP float ptr [ESP + 0x64]         ; 004e9a17
    FSTP float ptr [ESP + 0x68]         ; 004e9a1b
    FSTP float ptr [ESP + 0x6c]         ; 004e9a1f
    LEA EDX,[ESP + 0x94]                ; 004e9a23
    MOVSD ES:EDI,ESI                    ; 004e9a2a
    MOVSD ES:EDI,ESI                    ; 004e9a2b
    MOVSD ES:EDI,ESI                    ; 004e9a2c
    CMP EAX,EDX                         ; 004e9a2d
    JZ 0x004e9a52                       ; 004e9a2f
        ;   XREF to: 004e9a52 (CONDITIONAL_JUMP)  ; LAB_004e9a52
    MOV EAX,dword ptr [ESP + 0x94]      ; 004e9a31
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e9a38
    MOV EAX,dword ptr [ESP + 0x98]      ; 004e9a3c
    MOV dword ptr [ESP + 0x50],EAX      ; 004e9a43
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004e9a47
    MOV dword ptr [ESP + 0x54],EAX      ; 004e9a4e
    FLD float ptr [ESP + 0x50]          ; 004e9a52
        ;   Label: LAB_004e9a52
    FMUL ST0                            ; 004e9a56
    FLD float ptr [ESP + 0x4c]          ; 004e9a58
    FMUL ST0                            ; 004e9a5c
    FADDP                               ; 004e9a5e
    FLD float ptr [ESP + 0x54]          ; 004e9a60
    FMUL ST0                            ; 004e9a64
    FADDP                               ; 004e9a66
    FSQRT                               ; 004e9a68
    FSTP float ptr [ESP + 0xcc]         ; 004e9a6a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e9a71
    FLD float ptr [ESP + 0xcc]          ; 004e9a78
    MOV dword ptr [ESP + 0x8],EAX       ; 004e9a7f
    FCOMP double ptr [0x005e454f]       ; 004e9a83 | DAT_005e454f
    FNSTSW AX                           ; 004e9a89
    SAHF                                ; 004e9a8b
    JNC 0x004e9dd9                      ; 004e9a8c
        ;   XREF to: 004e9dd9 (CONDITIONAL_JUMP)  ; LAB_004e9dd9
    MOV EDI,dword ptr [ESP + 0xc4]      ; 004e9a92
    LEA EAX,[EBX + 0x158]               ; 004e9a99
    CMP EDI,0x1                         ; 004e9a9f
    JNZ 0x004e9da8                      ; 004e9aa2
        ;   XREF to: 004e9da8 (CONDITIONAL_JUMP)  ; LAB_004e9da8
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004e9aa8
    JNZ 0x004e9d80                      ; 004e9aaf
        ;   XREF to: 004e9d80 (CONDITIONAL_JUMP)  ; LAB_004e9d80
    MOV dword ptr [EBX + 0xc1f0],EDI    ; 004e9ab5
    CMP dword ptr [ESP + 0xc4],0x1      ; 004e9abb
        ;   Label: LAB_004e9abb
    JNZ 0x004e9b97                      ; 004e9ac3
        ;   XREF to: 004e9b97 (CONDITIONAL_JUMP)  ; LAB_004e9b97
    LEA EAX,[ESP + 0x4c]                ; 004e9ac9
    PUSH EAX                            ; 004e9acd
    LEA ESI,[ESP + 0x38]                ; 004e9ace
    LEA EDI,[ESP + 0x74]                ; 004e9ad2
    CALL FUN_005a7520                   ; 004e9ad6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x38]                ; 004e9adb
    ADD ESP,0x4                         ; 004e9adf
    MOVSD ES:EDI,ESI                    ; 004e9ae2
    MOVSD ES:EDI,ESI                    ; 004e9ae3
    MOVSD ES:EDI,ESI                    ; 004e9ae4
    FLD float ptr [ESP + 0x74]          ; 004e9ae5
    FSUB float ptr [EBX + 0x34]         ; 004e9ae9
    SUB ESP,0x4                         ; 004e9aec
    FSTP float ptr [ESP]                ; 004e9aef
    CALL FUN_0040cd60                   ; 004e9af2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 004e9af7
    FLD float ptr [ESP + 0xd4]          ; 004e9afe
    FMUL float ptr [0x005e4557]         ; 004e9b05 | DAT_005e4557
    ADD ESP,0x4                         ; 004e9b0b
    FMUL double ptr [0x005e455f]        ; 004e9b0e | DAT_005e455f
    FLD float ptr [ESP + 0xc8]          ; 004e9b14
    FCHS                                ; 004e9b1b
    FSTP float ptr [ESP + 0xa8]         ; 004e9b1d
    FST float ptr [EBX + 0xc200]        ; 004e9b24
    FCOMP float ptr [ESP + 0xa8]        ; 004e9b2a
    FNSTSW AX                           ; 004e9b31
    SAHF                                ; 004e9b33
    JNC 0x004e9b43                      ; 004e9b34
        ;   XREF to: 004e9b43 (CONDITIONAL_JUMP)  ; LAB_004e9b43
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004e9b36
    MOV dword ptr [EBX + 0xc200],EAX    ; 004e9b3d
    FLD float ptr [EBX + 0xc200]        ; 004e9b43
        ;   Label: LAB_004e9b43
    FCOMP float ptr [ESP + 0xc8]        ; 004e9b49
    FNSTSW AX                           ; 004e9b50
    SAHF                                ; 004e9b52
    JBE 0x004e9b62                      ; 004e9b53
        ;   XREF to: 004e9b62 (CONDITIONAL_JUMP)  ; LAB_004e9b62
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004e9b55
    MOV dword ptr [EBX + 0xc200],EAX    ; 004e9b5c
    FLD float ptr [EBX + 0xc200]        ; 004e9b62
        ;   Label: LAB_004e9b62
    FST double ptr [ESP]                ; 004e9b68
    FCOMP double ptr [0x005e456f]       ; 004e9b6b | DAT_005e456f
    FNSTSW AX                           ; 004e9b71
    SAHF                                ; 004e9b73
    JBE 0x004e9b97                      ; 004e9b74
        ;   XREF to: 004e9b97 (CONDITIONAL_JUMP)  ; LAB_004e9b97
    FLD double ptr [ESP]                ; 004e9b76
    FCOMP double ptr [0x005e4577]       ; 004e9b79 | DAT_005e4577
    FNSTSW AX                           ; 004e9b7f
    SAHF                                ; 004e9b81
    JNC 0x004e9b97                      ; 004e9b82
        ;   XREF to: 004e9b97 (CONDITIONAL_JUMP)  ; LAB_004e9b97
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004e9b84
    JZ 0x004e9b97                       ; 004e9b8b
        ;   XREF to: 004e9b97 (CONDITIONAL_JUMP)  ; LAB_004e9b97
    MOV dword ptr [EBX + 0xc200],0x0    ; 004e9b8d
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004e9b97
        ;   Label: LAB_004e9b97
    LEA EDI,[ESP + 0x40]                ; 004e9b9e
    LEA ESI,[ESP + 0x58]                ; 004e9ba2
    LEA EAX,[EBX + 0x20]                ; 004e9ba6
    FLD float ptr [EDX + 0x24]          ; 004e9ba9
    FLD float ptr [EDX + 0x28]          ; 004e9bac
    FLD float ptr [EDX + 0x20]          ; 004e9baf
    LEA EDX,[ESP + 0x4c]                ; 004e9bb2
    FSUB float ptr [EAX]                ; 004e9bb6
    FXCH ST2                            ; 004e9bb8
    FSUB float ptr [EAX + 0x4]          ; 004e9bba
    FXCH                                ; 004e9bbd
    FSUB float ptr [EAX + 0x8]          ; 004e9bbf
    FXCH ST2                            ; 004e9bc2
    FSTP float ptr [ESP + 0x58]         ; 004e9bc4
    FSTP float ptr [ESP + 0x5c]         ; 004e9bc8
    FSTP float ptr [ESP + 0x60]         ; 004e9bcc
    LEA EAX,[ESP + 0x40]                ; 004e9bd0
    MOVSD ES:EDI,ESI                    ; 004e9bd4
    MOVSD ES:EDI,ESI                    ; 004e9bd5
    MOVSD ES:EDI,ESI                    ; 004e9bd6
    CMP EDX,EAX                         ; 004e9bd7
    JZ 0x004e9bf3                       ; 004e9bd9
        ;   XREF to: 004e9bf3 (CONDITIONAL_JUMP)  ; LAB_004e9bf3
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e9bdb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e9bdf
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e9be3
    MOV dword ptr [ESP + 0x50],EAX      ; 004e9be7
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e9beb
    MOV dword ptr [ESP + 0x54],EAX      ; 004e9bef
    LEA EAX,[ESP + 0x4c]                ; 004e9bf3
        ;   Label: LAB_004e9bf3
    PUSH EAX                            ; 004e9bf7
    LEA ESI,[ESP + 0x20]                ; 004e9bf8
    LEA EDI,[ESP + 0x80]                ; 004e9bfc
    CALL FUN_005a7520                   ; 004e9c03
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x20]                ; 004e9c08
    LEA EDX,[ESP + 0x80]                ; 004e9c0c
    ADD ESP,0x4                         ; 004e9c13
    LEA EAX,[ESP + 0x4c]                ; 004e9c16
    MOVSD ES:EDI,ESI                    ; 004e9c1a
    MOVSD ES:EDI,ESI                    ; 004e9c1b
    MOVSD ES:EDI,ESI                    ; 004e9c1c
    CMP EAX,EDX                         ; 004e9c1d
    JZ 0x004e9c3f                       ; 004e9c1f
        ;   XREF to: 004e9c3f (CONDITIONAL_JUMP)  ; LAB_004e9c3f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e9c21
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e9c25
    MOV EAX,dword ptr [ESP + 0x80]      ; 004e9c29
    MOV dword ptr [ESP + 0x50],EAX      ; 004e9c30
    MOV EAX,dword ptr [ESP + 0x84]      ; 004e9c34
    MOV dword ptr [ESP + 0x54],EAX      ; 004e9c3b
    FLD float ptr [ESP + 0x50]          ; 004e9c3f
        ;   Label: LAB_004e9c3f
    FSUB float ptr [EBX + 0x34]         ; 004e9c43
    SUB ESP,0x4                         ; 004e9c46
    FSTP float ptr [ESP]                ; 004e9c49
    CALL FUN_0040cd60                   ; 004e9c4c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 004e9c51
    FLD float ptr [ESP + 0xd4]          ; 004e9c58
    ADD ESP,0x4                         ; 004e9c5f
    FST float ptr [ESP + 0x2c]          ; 004e9c62
    FCOMP float ptr [ESP + 0xb8]        ; 004e9c66
    FNSTSW AX                           ; 004e9c6d
    SAHF                                ; 004e9c6f
    JBE 0x004e9c7d                      ; 004e9c70
        ;   XREF to: 004e9c7d (CONDITIONAL_JUMP)  ; LAB_004e9c7d
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004e9c72
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e9c79
    FLD float ptr [ESP + 0x2c]          ; 004e9c7d
        ;   Label: LAB_004e9c7d
    FLD float ptr [ESP + 0xb8]          ; 004e9c81
    FCHS                                ; 004e9c88
    FSTP float ptr [ESP + 0xb0]         ; 004e9c8a
    FCOMP float ptr [ESP + 0xb0]        ; 004e9c91
    FNSTSW AX                           ; 004e9c98
    SAHF                                ; 004e9c9a
    JNC 0x004e9ca8                      ; 004e9c9b
        ;   XREF to: 004e9ca8 (CONDITIONAL_JUMP)  ; LAB_004e9ca8
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004e9c9d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e9ca4
    FLD float ptr [EBP + 0x18]          ; 004e9ca8
        ;   Label: LAB_004e9ca8
    FLD float ptr [ESP + 0x2c]          ; 004e9cab
    FSUB float ptr [EBX + 0x1ffb8]      ; 004e9caf
    FXCH                                ; 004e9cb5
    FMUL float ptr [0x005e457f]         ; 004e9cb7 | DAT_005e457f
    FXCH                                ; 004e9cbd
    FSTP float ptr [ESP + 0xc0]         ; 004e9cbf
    FSTP float ptr [ESP + 0xa4]         ; 004e9cc6
    FLD float ptr [ESP + 0xc0]          ; 004e9ccd
    FCOMP float ptr [ESP + 0xa4]        ; 004e9cd4
    FNSTSW AX                           ; 004e9cdb
    SAHF                                ; 004e9cdd
    JBE 0x004e9cee                      ; 004e9cde
        ;   XREF to: 004e9cee (CONDITIONAL_JUMP)  ; LAB_004e9cee
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004e9ce0
    MOV dword ptr [ESP + 0xc0],EAX      ; 004e9ce7
    FLD float ptr [EBP + 0x18]          ; 004e9cee
        ;   Label: LAB_004e9cee
    FMUL float ptr [0x005e4583]         ; 004e9cf1 | DAT_005e4583
    FLD float ptr [ESP + 0xc0]          ; 004e9cf7
    FXCH                                ; 004e9cfe
    FSTP float ptr [ESP + 0xb4]         ; 004e9d00
    FCOMP float ptr [ESP + 0xb4]        ; 004e9d07
    FNSTSW AX                           ; 004e9d0e
    SAHF                                ; 004e9d10
    JNC 0x004e9d21                      ; 004e9d11
        ;   XREF to: 004e9d21 (CONDITIONAL_JUMP)  ; LAB_004e9d21
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004e9d13
    MOV dword ptr [ESP + 0xc0],EAX      ; 004e9d1a
    FLD float ptr [EBX + 0x1ffb8]       ; 004e9d21
        ;   Label: LAB_004e9d21
    FADD float ptr [ESP + 0xc0]         ; 004e9d27
    FSTP float ptr [EBX + 0x1ffb8]      ; 004e9d2e
    MOV ESP,EBP                         ; 004e9d34
        ;   Label: LAB_004e9d34
    POP EBP                             ; 004e9d36
    POP EDI                             ; 004e9d37
    POP ESI                             ; 004e9d38
    POP EBX                             ; 004e9d39
    RET                                 ; 004e9d3a
    FLD float ptr [ESP + 0xa0]          ; 004e9d3b
        ;   Label: LAB_004e9d3b
    FCOMP float ptr [0x005e4543]        ; 004e9d42 | DAT_005e4543
    FNSTSW AX                           ; 004e9d48
    SAHF                                ; 004e9d4a
    JC 0x004e9991                       ; 004e9d4b
        ;   XREF to: 004e9991 (CONDITIONAL_JUMP)  ; LAB_004e9991
    JMP 0x004e99e7                      ; 004e9d51
        ;   XREF to: 004e99e7 (UNCONDITIONAL_JUMP)  ; LAB_004e99e7
    CMP EDX,0x3                         ; 004e9d56
        ;   Label: LAB_004e9d56
    JZ 0x004e99a0                       ; 004e9d59
        ;   XREF to: 004e99a0 (CONDITIONAL_JUMP)  ; LAB_004e99a0
    JMP 0x004e99e7                      ; 004e9d5f
        ;   XREF to: 004e99e7 (UNCONDITIONAL_JUMP)  ; LAB_004e99e7
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004e9d64
        ;   Label: LAB_004e9d64
    JZ 0x004e99e7                       ; 004e9d6b
        ;   XREF to: 004e99e7 (CONDITIONAL_JUMP)  ; LAB_004e99e7
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 004e9d71
    JMP 0x004e99e7                      ; 004e9d7b
        ;   XREF to: 004e99e7 (UNCONDITIONAL_JUMP)  ; LAB_004e99e7
    PUSH EAX                            ; 004e9d80
        ;   Label: LAB_004e9d80
    CALL FUN_00524770                   ; 004e9d81
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e9d86
    ADD ESP,0x4                         ; 004e9d89
    CMP EAX,0x2                         ; 004e9d8c
    JZ 0x004e9abb                       ; 004e9d8f
        ;   XREF to: 004e9abb (CONDITIONAL_JUMP)  ; LAB_004e9abb
    CMP EAX,EDI                         ; 004e9d95
    JZ 0x004e9abb                       ; 004e9d97
        ;   XREF to: 004e9abb (CONDITIONAL_JUMP)  ; LAB_004e9abb
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 004e9d9d
    JMP 0x004e9abb                      ; 004e9da3
        ;   XREF to: 004e9abb (UNCONDITIONAL_JUMP)  ; LAB_004e9abb
    PUSH EAX                            ; 004e9da8
        ;   Label: LAB_004e9da8
    CALL FUN_00524770                   ; 004e9da9
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e9dae
    ADD ESP,0x4                         ; 004e9db1
    CMP EAX,0xa                         ; 004e9db4
    JNZ 0x004e9abb                      ; 004e9db7
        ;   XREF to: 004e9abb (CONDITIONAL_JUMP)  ; LAB_004e9abb
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004e9dbd
    JZ 0x004e9abb                       ; 004e9dc4
        ;   XREF to: 004e9abb (CONDITIONAL_JUMP)  ; LAB_004e9abb
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 004e9dca
    JMP 0x004e9abb                      ; 004e9dd4
        ;   XREF to: 004e9abb (UNCONDITIONAL_JUMP)  ; LAB_004e9abb
    MOV EDX,dword ptr [ESP + 0xc4]      ; 004e9dd9
        ;   Label: LAB_004e9dd9
    XOR EAX,EAX                         ; 004e9de0
    TEST EDX,EDX                        ; 004e9de2
    JNZ 0x004e9e02                      ; 004e9de4
        ;   XREF to: 004e9e02 (CONDITIONAL_JUMP)  ; LAB_004e9e02
    MOV EAX,[0x01d06ab4]                ; 004e9de6 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004e9deb
    PUSH EAX                            ; 004e9df2
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e9df3
    CALL dword ptr [EDX + 0xc4]         ; 004e9df9
    ADD ESP,0x4                         ; 004e9dff
    TEST EAX,EAX                        ; 004e9e02
        ;   Label: LAB_004e9e02
    JNZ 0x004e9e19                      ; 004e9e04
        ;   XREF to: 004e9e19 (CONDITIONAL_JUMP)  ; LAB_004e9e19
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004e9e06
    ADD EAX,0x20                        ; 004e9e0d
    PUSH EAX                            ; 004e9e10
    CALL FUN_005351f0                   ; 004e9e11
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005351f0()
    ADD ESP,0x4                         ; 004e9e16
    MOV ECX,dword ptr [EBX + 0x6c]      ; 004e9e19
        ;   Label: LAB_004e9e19
    PUSH ECX                            ; 004e9e1c
    LEA EDX,[ESP + 0x14]                ; 004e9e1d
    PUSH EDX                            ; 004e9e21
    LEA EDX,[EBX + 0x20]                ; 004e9e22
    PUSH EDX                            ; 004e9e25
    PUSH EAX                            ; 004e9e26
    CALL FUN_005349a0                   ; 004e9e27
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005349a0()
    ADD ESP,0x10                        ; 004e9e2c
    TEST EAX,EAX                        ; 004e9e2f
    JZ 0x004e9b97                       ; 004e9e31
        ;   XREF to: 004e9b97 (CONDITIONAL_JUMP)  ; LAB_004e9b97
    FLD float ptr [ESP + 0x14]          ; 004e9e37
    FSUB float ptr [EBX + 0x34]         ; 004e9e3b
    SUB ESP,0x4                         ; 004e9e3e
    FSTP float ptr [ESP]                ; 004e9e41
    CALL FUN_0040cd60                   ; 004e9e44
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 004e9e49
    FLD float ptr [ESP + 0xd4]          ; 004e9e50
    FMUL float ptr [0x005e4557]         ; 004e9e57 | DAT_005e4557
    ADD ESP,0x4                         ; 004e9e5d
    FMUL double ptr [0x005e455f]        ; 004e9e60 | DAT_005e455f
    FLD float ptr [ESP + 0xc8]          ; 004e9e66
    FCHS                                ; 004e9e6d
    FSTP float ptr [ESP + 0xac]         ; 004e9e6f
    FST float ptr [EBX + 0xc200]        ; 004e9e76
    FCOMP float ptr [ESP + 0xac]        ; 004e9e7c
    FNSTSW AX                           ; 004e9e83
    SAHF                                ; 004e9e85
    JC 0x004e9ecf                       ; 004e9e86
        ;   XREF to: 004e9ecf (CONDITIONAL_JUMP)  ; LAB_004e9ecf
    FLD float ptr [EBX + 0xc200]        ; 004e9e88
        ;   Label: LAB_004e9e88
    FCOMP float ptr [ESP + 0xc8]        ; 004e9e8e
    FNSTSW AX                           ; 004e9e95
    SAHF                                ; 004e9e97
    JBE 0x004e9ea7                      ; 004e9e98
        ;   XREF to: 004e9ea7 (CONDITIONAL_JUMP)  ; LAB_004e9ea7
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004e9e9a
    MOV dword ptr [EBX + 0xc200],EAX    ; 004e9ea1
    FLD float ptr [ESP + 0x8]           ; 004e9ea7
        ;   Label: LAB_004e9ea7
    FCOMP double ptr [0x005e4567]       ; 004e9eab | DAT_005e4567
    FNSTSW AX                           ; 004e9eb1
    SAHF                                ; 004e9eb3
    JNC 0x004e9ede                      ; 004e9eb4
        ;   XREF to: 004e9ede (CONDITIONAL_JUMP)  ; LAB_004e9ede
    CMP dword ptr [ESP + 0xc4],0x1      ; 004e9eb6
    JZ 0x004e9ede                       ; 004e9ebe
        ;   XREF to: 004e9ede (CONDITIONAL_JUMP)  ; LAB_004e9ede
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004e9ec0
    JMP 0x004e9b97                      ; 004e9eca
        ;   XREF to: 004e9b97 (UNCONDITIONAL_JUMP)  ; LAB_004e9b97
    MOV EAX,dword ptr [ESP + 0xac]      ; 004e9ecf
        ;   Label: LAB_004e9ecf
    MOV dword ptr [EBX + 0xc200],EAX    ; 004e9ed6
    JMP 0x004e9e88                      ; 004e9edc
        ;   XREF to: 004e9e88 (UNCONDITIONAL_JUMP)  ; LAB_004e9e88
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 004e9ede
        ;   Label: LAB_004e9ede
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004e9ee8
    JMP 0x004e9b97                      ; 004e9ef2
        ;   XREF to: 004e9b97 (UNCONDITIONAL_JUMP)  ; LAB_004e9b97

