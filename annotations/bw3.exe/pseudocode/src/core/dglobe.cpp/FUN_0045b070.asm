; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dglobe_cpp_FUN_0045b070(int param_1,int *param_2,int *param_3)
;
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 at 00537eff
;
; Referenced Globals:
;   undefined4 DAT_005de388
;   undefined4 DAT_005de38c
;   undefined4 DAT_01d1a0a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b070
        ;   Label: core_dglobe.cpp_FUN_0045b070
    PUSH ESI                            ; 0045b071
    PUSH EDI                            ; 0045b072
    PUSH EBP                            ; 0045b073
    MOV EBP,ESP                         ; 0045b074
    SUB ESP,0x44                        ; 0045b076
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045b079
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045b07c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0045b07f
    LEA EBX,[EBP + -0x20]               ; 0045b082
    LEA EDI,[EBP + -0x2c]               ; 0045b085
    LEA ESI,[EBP + -0x44]               ; 0045b088
    FILD dword ptr [EAX]                ; 0045b08b
    FMUL float ptr [0x005de388]         ; 0045b08d | DAT_005de388
    FSTP float ptr [EBX]                ; 0045b093
    FILD dword ptr [EAX + 0x4]          ; 0045b095
    FMUL float ptr [0x005de388]         ; 0045b098 | DAT_005de388
    FSTP float ptr [EBX + 0x4]          ; 0045b09e
    FILD dword ptr [EAX + 0x8]          ; 0045b0a1
    FMUL float ptr [0x005de388]         ; 0045b0a4 | DAT_005de388
    FSTP float ptr [EBX + 0x8]          ; 0045b0aa
    FLD float ptr [EBP + -0x20]         ; 0045b0ad
    FLD float ptr [EBP + -0x1c]         ; 0045b0b0
    LEA EAX,[EDX + 0x24]                ; 0045b0b3
    FLD float ptr [EBP + -0x18]         ; 0045b0b6
    LEA EBX,[EBP + -0x20]               ; 0045b0b9
    FXCH ST2                            ; 0045b0bc
    FSUB float ptr [EAX]                ; 0045b0be
    FXCH                                ; 0045b0c0
    FSUB float ptr [EAX + 0x4]          ; 0045b0c2
    FXCH ST2                            ; 0045b0c5
    FSUB float ptr [EAX + 0x8]          ; 0045b0c7
    FXCH                                ; 0045b0ca
    FSTP float ptr [EBP + -0x44]        ; 0045b0cc
    FXCH                                ; 0045b0cf
    FSTP float ptr [EBP + -0x40]        ; 0045b0d1
    FSTP float ptr [EBP + -0x3c]        ; 0045b0d4
    LEA EAX,[EBP + -0x2c]               ; 0045b0d7
    MOVSD ES:EDI,ESI                    ; 0045b0da
    MOVSD ES:EDI,ESI                    ; 0045b0db
    MOVSD ES:EDI,ESI                    ; 0045b0dc
    CMP EBX,EAX                         ; 0045b0dd
    JNZ 0x0045b1b7                      ; 0045b0df
        ;   XREF to: 0045b1b7 (CONDITIONAL_JUMP)  ; LAB_0045b1b7
    FLD float ptr [EBP + -0x1c]         ; 0045b0e5
        ;   Label: LAB_0045b0e5
    FMUL ST0                            ; 0045b0e8
    FLD float ptr [EBP + -0x20]         ; 0045b0ea
    FMUL ST0                            ; 0045b0ed
    FADDP                               ; 0045b0ef
    FLD float ptr [EBP + -0x18]         ; 0045b0f1
    FMUL ST0                            ; 0045b0f4
    FADDP                               ; 0045b0f6
    FST float ptr [EBP + -0x4]          ; 0045b0f8
    FCOMP float ptr [EDX + 0x18]        ; 0045b0fb
    FNSTSW AX                           ; 0045b0fe
    SAHF                                ; 0045b100
    JA 0x0045b1ce                       ; 0045b101
        ;   XREF to: 0045b1ce (CONDITIONAL_JUMP)  ; LAB_0045b1ce
    FLD float ptr [EDX + 0x18]          ; 0045b107
    FSUB float ptr [EBP + -0x4]         ; 0045b10a
    FMUL float ptr [EDX + 0x38]         ; 0045b10d
    FILD dword ptr [EDX + 0x3c]         ; 0045b110
    FMULP                               ; 0045b113
    FSTP float ptr [EBP + -0x10]        ; 0045b115
    TEST ECX,ECX                        ; 0045b118
    JZ 0x0045b1a1                       ; 0045b11a
        ;   XREF to: 0045b1a1 (CONDITIONAL_JUMP)  ; LAB_0045b1a1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045b120
    MOV EDX,dword ptr [0x01d1a0a8]      ; 0045b123 | DAT_01d1a0a8
    SAR EAX,0x1                         ; 0045b129
    SUB EDX,EAX                         ; 0045b12b
    MOV dword ptr [EBP + -0xc],EDX      ; 0045b12d
    FLD float ptr [EBP + -0x20]         ; 0045b130
    FMUL float ptr [EBP + -0xc]         ; 0045b133
    FLD float ptr [EBP + -0x1c]         ; 0045b136
    FMUL float ptr [EBP + -0xc]         ; 0045b139
    FLD float ptr [EBP + -0x18]         ; 0045b13c
    FMUL float ptr [EBP + -0xc]         ; 0045b13f
    LEA EBX,[EBP + -0x38]               ; 0045b142
    MOV EAX,ECX                         ; 0045b145
    FXCH ST2                            ; 0045b147
    FSTP float ptr [EBP + -0x20]        ; 0045b149
    FSTP float ptr [EBP + -0x1c]        ; 0045b14c
    FSTP float ptr [EBP + -0x18]        ; 0045b14f
    FILD dword ptr [EAX]                ; 0045b152
    FMUL float ptr [0x005de38c]         ; 0045b154 | DAT_005de38c
    FSTP float ptr [EBX]                ; 0045b15a
    FILD dword ptr [EAX + 0x4]          ; 0045b15c
    FMUL float ptr [0x005de38c]         ; 0045b15f | DAT_005de38c
    FSTP float ptr [EBX + 0x4]          ; 0045b165
    FILD dword ptr [EAX + 0x8]          ; 0045b168
    FMUL float ptr [0x005de38c]         ; 0045b16b | DAT_005de38c
    FSTP float ptr [EBX + 0x8]          ; 0045b171
    FLD float ptr [EBP + -0x1c]         ; 0045b174
    FMUL float ptr [EBP + -0x34]        ; 0045b177
    FLD float ptr [EBP + -0x20]         ; 0045b17a
    FMUL float ptr [EBP + -0x38]        ; 0045b17d
    FADDP                               ; 0045b180
    FLD float ptr [EBP + -0x18]         ; 0045b182
    FMUL float ptr [EBP + -0x30]        ; 0045b185
    FADDP                               ; 0045b188
    FST float ptr [EBP + -0x8]          ; 0045b18a
    FLDZ                                ; 0045b18d
    FCOMPP                              ; 0045b18f
    FNSTSW AX                           ; 0045b191
    SAHF                                ; 0045b193
    JC 0x0045b1ce                       ; 0045b194
        ;   XREF to: 0045b1ce (CONDITIONAL_JUMP)  ; LAB_0045b1ce
    FLD float ptr [EBP + -0x8]          ; 0045b196
    FCHS                                ; 0045b199
    FMUL float ptr [EBP + -0x10]        ; 0045b19b
    FSTP float ptr [EBP + -0x10]        ; 0045b19e
    FLD float ptr [EBP + 0xfffffff0]    ; 0045b1a1
        ;   Label: LAB_0045b1a1
    FISTP dword ptr [EBP + 0xffffffec]  ; 0045b1a7
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b1ad
    MOV ESP,EBP                         ; 0045b1b0
    POP EBP                             ; 0045b1b2
    POP EDI                             ; 0045b1b3
    POP ESI                             ; 0045b1b4
    POP EBX                             ; 0045b1b5
    RET                                 ; 0045b1b6
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045b1b7
        ;   Label: LAB_0045b1b7
    MOV dword ptr [EBP + -0x20],EAX     ; 0045b1ba
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045b1bd
    MOV dword ptr [EBP + -0x1c],EAX     ; 0045b1c0
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045b1c3
    MOV dword ptr [EBP + -0x18],EAX     ; 0045b1c6
    JMP 0x0045b0e5                      ; 0045b1c9
        ;   XREF to: 0045b0e5 (UNCONDITIONAL_JUMP)  ; LAB_0045b0e5
    XOR EAX,EAX                         ; 0045b1ce
        ;   Label: LAB_0045b1ce
    MOV ESP,EBP                         ; 0045b1d0
    POP EBP                             ; 0045b1d2
    POP EDI                             ; 0045b1d3
    POP ESI                             ; 0045b1d4
    POP EBX                             ; 0045b1d5
    RET                                 ; 0045b1d6

