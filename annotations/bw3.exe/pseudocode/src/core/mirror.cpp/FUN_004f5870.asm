; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_FUN_004f5870(undefined4 param_1,int *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
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
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 at 00538077
;
; Referenced Globals:
;   undefined4 DAT_005e29c4
;   undefined4 DAT_005e29c8
;   undefined4 DAT_005e29cc
;
; Called Functions:
;   core_mirror.cpp_FUN_004f50f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5870
        ;   Label: core_mirror.cpp_FUN_004f5870
    PUSH EDI                            ; 004f5871
    PUSH EBP                            ; 004f5872
    SUB ESP,0x84                        ; 004f5873
    MOV EAX,dword ptr [ESP + 0x98]      ; 004f5879
    MOV EBP,ESI                         ; 004f5880
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004f5882
    LEA EBX,[ESP + 0x54]                ; 004f5889
    FILD dword ptr [EAX]                ; 004f588d
    FMUL float ptr [0x005e29c8]         ; 004f588f | DAT_005e29c8
    FSTP float ptr [EBX]                ; 004f5895
    FILD dword ptr [EAX + 0x4]          ; 004f5897
    FMUL float ptr [0x005e29c8]         ; 004f589a | DAT_005e29c8
    FSTP float ptr [EBX + 0x4]          ; 004f58a0
    FILD dword ptr [EAX + 0x8]          ; 004f58a3
    FMUL float ptr [0x005e29c8]         ; 004f58a6 | DAT_005e29c8
    FSTP float ptr [EBX + 0x8]          ; 004f58ac
    LEA EBX,[ESP + 0x6c]                ; 004f58af
    MOV EAX,ESI                         ; 004f58b3
    LEA EDI,[ESP + 0x3c]                ; 004f58b5
    FILD dword ptr [EAX]                ; 004f58b9
    FMUL float ptr [0x005e29cc]         ; 004f58bb | DAT_005e29cc
    FSTP float ptr [EBX]                ; 004f58c1
    FILD dword ptr [EAX + 0x4]          ; 004f58c3
    FMUL float ptr [0x005e29cc]         ; 004f58c6 | DAT_005e29cc
    FSTP float ptr [EBX + 0x4]          ; 004f58cc
    FILD dword ptr [EAX + 0x8]          ; 004f58cf
    FMUL float ptr [0x005e29cc]         ; 004f58d2 | DAT_005e29cc
    FSTP float ptr [EBX + 0x8]          ; 004f58d8
    FLD float ptr [ESP + 0x6c]          ; 004f58db
    FLD float ptr [ESP + 0x70]          ; 004f58df
    FLD float ptr [ESP + 0x74]          ; 004f58e3
    LEA ESI,[ESP + 0xc]                 ; 004f58e7
    LEA EAX,[ESP + 0x3c]                ; 004f58eb
    LEA EBX,[ESP + 0x6c]                ; 004f58ef
    FXCH ST2                            ; 004f58f3
    FADD float ptr [ESP + 0x54]         ; 004f58f5
    FXCH                                ; 004f58f9
    FADD float ptr [ESP + 0x58]         ; 004f58fb
    FXCH ST2                            ; 004f58ff
    FADD float ptr [ESP + 0x5c]         ; 004f5901
    FXCH                                ; 004f5905
    FSTP float ptr [ESP + 0xc]          ; 004f5907
    FXCH                                ; 004f590b
    FSTP float ptr [ESP + 0x10]         ; 004f590d
    FSTP float ptr [ESP + 0x14]         ; 004f5911
    MOVSD ES:EDI,ESI                    ; 004f5915
    MOVSD ES:EDI,ESI                    ; 004f5916
    MOVSD ES:EDI,ESI                    ; 004f5917
    CMP EBX,EAX                         ; 004f5918
    JZ 0x004f5934                       ; 004f591a
        ;   XREF to: 004f5934 (CONDITIONAL_JUMP)  ; LAB_004f5934
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f591c
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f5920
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f5924
    MOV dword ptr [ESP + 0x70],EAX      ; 004f5928
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f592c
    MOV dword ptr [ESP + 0x74],EAX      ; 004f5930
    LEA EAX,[ESP + 0x54]                ; 004f5934
        ;   Label: LAB_004f5934
    PUSH EAX                            ; 004f5938
    MOV EDX,dword ptr [ESP + 0x98]      ; 004f5939
    LEA ESI,[ESP + 0x7c]                ; 004f5940
    PUSH EDX                            ; 004f5944
    LEA EDI,[ESP + 0x8]                 ; 004f5945
    LEA EBX,[ESP + 0x5c]                ; 004f5949
    CALL core_mirror.cpp_FUN_004f50f0   ; 004f594d
        ;   XREF to: 004f50f0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004f50f0()
    LEA ESI,[ESP + 0x80]                ; 004f5952
    ADD ESP,0x8                         ; 004f5959
    MOV EAX,ESP                         ; 004f595c
    MOVSD ES:EDI,ESI                    ; 004f595e
    MOVSD ES:EDI,ESI                    ; 004f595f
    MOVSD ES:EDI,ESI                    ; 004f5960
    CMP EBX,EAX                         ; 004f5961
    JZ 0x004f597c                       ; 004f5963
        ;   XREF to: 004f597c (CONDITIONAL_JUMP)  ; LAB_004f597c
    MOV EAX,dword ptr [ESP]             ; 004f5965
    MOV dword ptr [ESP + 0x54],EAX      ; 004f5968
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f596c
    MOV dword ptr [ESP + 0x58],EAX      ; 004f5970
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f5974
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f5978
    LEA EAX,[ESP + 0x6c]                ; 004f597c
        ;   Label: LAB_004f597c
    PUSH EAX                            ; 004f5980
    MOV ECX,dword ptr [ESP + 0x98]      ; 004f5981
    LEA ESI,[ESP + 0x4c]                ; 004f5988
    PUSH ECX                            ; 004f598c
    LEA EDI,[ESP + 0x38]                ; 004f598d
    LEA EBX,[ESP + 0x74]                ; 004f5991
    CALL core_mirror.cpp_FUN_004f50f0   ; 004f5995
        ;   XREF to: 004f50f0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004f50f0()
    LEA ESI,[ESP + 0x50]                ; 004f599a
    ADD ESP,0x8                         ; 004f599e
    LEA EAX,[ESP + 0x30]                ; 004f59a1
    MOVSD ES:EDI,ESI                    ; 004f59a5
    MOVSD ES:EDI,ESI                    ; 004f59a6
    MOVSD ES:EDI,ESI                    ; 004f59a7
    CMP EBX,EAX                         ; 004f59a8
    JZ 0x004f59c4                       ; 004f59aa
        ;   XREF to: 004f59c4 (CONDITIONAL_JUMP)  ; LAB_004f59c4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f59ac
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f59b0
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f59b4
    MOV dword ptr [ESP + 0x70],EAX      ; 004f59b8
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f59bc
    MOV dword ptr [ESP + 0x74],EAX      ; 004f59c0
    FLD float ptr [ESP + 0x6c]          ; 004f59c4
        ;   Label: LAB_004f59c4
    FLD float ptr [ESP + 0x70]          ; 004f59c8
    FLD float ptr [ESP + 0x74]          ; 004f59cc
    LEA EDI,[ESP + 0x60]                ; 004f59d0
    LEA ESI,[ESP + 0x18]                ; 004f59d4
    LEA EAX,[ESP + 0x60]                ; 004f59d8
    LEA EBX,[ESP + 0x6c]                ; 004f59dc
    FXCH ST2                            ; 004f59e0
    FSUB float ptr [ESP + 0x54]         ; 004f59e2
    FXCH                                ; 004f59e6
    FSUB float ptr [ESP + 0x58]         ; 004f59e8
    FXCH ST2                            ; 004f59ec
    FSUB float ptr [ESP + 0x5c]         ; 004f59ee
    FXCH ST2                            ; 004f59f2
    FSTP float ptr [ESP + 0x1c]         ; 004f59f4
    FXCH                                ; 004f59f8
    FSTP float ptr [ESP + 0x20]         ; 004f59fa
    FSTP float ptr [ESP + 0x18]         ; 004f59fe
    MOVSD ES:EDI,ESI                    ; 004f5a02
    MOVSD ES:EDI,ESI                    ; 004f5a03
    MOVSD ES:EDI,ESI                    ; 004f5a04
    CMP EBX,EAX                         ; 004f5a05
    JZ 0x004f5a21                       ; 004f5a07
        ;   XREF to: 004f5a21 (CONDITIONAL_JUMP)  ; LAB_004f5a21
    MOV EAX,dword ptr [ESP + 0x60]      ; 004f5a09
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f5a0d
    MOV EAX,dword ptr [ESP + 0x64]      ; 004f5a11
    MOV dword ptr [ESP + 0x70],EAX      ; 004f5a15
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f5a19
    MOV dword ptr [ESP + 0x74],EAX      ; 004f5a1d
    LEA EBX,[ESP + 0x24]                ; 004f5a21
        ;   Label: LAB_004f5a21
    LEA EAX,[ESP + 0x6c]                ; 004f5a25
    LEA ESI,[ESP + 0x24]                ; 004f5a29
    MOV EDI,EBP                         ; 004f5a2d
    FLD float ptr [EAX]                 ; 004f5a2f
    FMUL float ptr [0x005e29c4]         ; 004f5a31 | DAT_005e29c4
    FISTP dword ptr [EBX]               ; 004f5a37
    FLD float ptr [EAX + 0x4]           ; 004f5a39
    FMUL float ptr [0x005e29c4]         ; 004f5a3c | DAT_005e29c4
    FISTP dword ptr [EBX + 0x4]         ; 004f5a42
    FLD float ptr [EAX + 0x8]           ; 004f5a45
    FMUL float ptr [0x005e29c4]         ; 004f5a48 | DAT_005e29c4
    FISTP dword ptr [EBX + 0x8]         ; 004f5a4e
    MOVSD ES:EDI,ESI                    ; 004f5a51
    MOVSD ES:EDI,ESI                    ; 004f5a52
    MOVSD ES:EDI,ESI                    ; 004f5a53
    MOV EAX,EBP                         ; 004f5a54
    ADD ESP,0x84                        ; 004f5a56
    POP EBP                             ; 004f5a5c
    POP EDI                             ; 004f5a5d
    POP EBX                             ; 004f5a5e
    RET                                 ; 004f5a5f

