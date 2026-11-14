; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_0041b030(CBox *param_1,CVector3f *param_2,CVector3f *param_3,int param_4,float *param_5,float param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_box.cpp_FUN_0041b1d0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b030
        ;   Label: core_box.cpp_FUN_0041b030
    PUSH ESI                            ; 0041b031
    PUSH EDI                            ; 0041b032
    PUSH EBP                            ; 0041b033
    SUB ESP,0x30                        ; 0041b034
    MOV EBP,dword ptr [ESP + 0x44]      ; 0041b037
    MOV EBX,dword ptr [ESP + 0x50]      ; 0041b03b
    CMP EBX,0x8                         ; 0041b03f
    JG 0x0041b199                       ; 0041b042
        ;   XREF to: 0041b199 (CONDITIONAL_JUMP)  ; LAB_0041b199
    MOV ESI,0x4479c000                  ; 0041b048
        ;   Label: LAB_0041b048
    MOV EDX,0xc479c000                  ; 0041b04d
    MOV dword ptr [ESP + 0x10],ESI      ; 0041b052
    MOV dword ptr [ESP + 0x14],ESI      ; 0041b056
    MOV dword ptr [ESP],EDX             ; 0041b05a
    MOV dword ptr [ESP + 0x4],EDX       ; 0041b05d
    MOV dword ptr [ESP + 0x8],EDX       ; 0041b061
    MOV dword ptr [ESP + 0xc],ESI       ; 0041b065
    XOR EDX,EDX                         ; 0041b069
    TEST EBX,EBX                        ; 0041b06b
    JLE 0x0041b0eb                      ; 0041b06d
        ;   XREF to: 0041b0eb (CONDITIONAL_JUMP)  ; LAB_0041b0eb
    MOV ESI,dword ptr [ESP + 0x54]      ; 0041b073
    FLD float ptr [ESI]                 ; 0041b077
        ;   Label: LAB_0041b077
    FCOMP float ptr [ESP + 0xc]         ; 0041b079
    FNSTSW AX                           ; 0041b07d
    SAHF                                ; 0041b07f
    JNC 0x0041b088                      ; 0041b080
        ;   XREF to: 0041b088 (CONDITIONAL_JUMP)  ; LAB_0041b088
    MOV EAX,dword ptr [ESI]             ; 0041b082
    MOV dword ptr [ESP + 0xc],EAX       ; 0041b084
    FLD float ptr [ESI + 0x4]           ; 0041b088
        ;   Label: LAB_0041b088
    FCOMP float ptr [ESP + 0x10]        ; 0041b08b
    FNSTSW AX                           ; 0041b08f
    SAHF                                ; 0041b091
    JNC 0x0041b09b                      ; 0041b092
        ;   XREF to: 0041b09b (CONDITIONAL_JUMP)  ; LAB_0041b09b
    MOV EAX,dword ptr [ESI + 0x4]       ; 0041b094
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b097
    FLD float ptr [ESI + 0x8]           ; 0041b09b
        ;   Label: LAB_0041b09b
    FCOMP float ptr [ESP + 0x14]        ; 0041b09e
    FNSTSW AX                           ; 0041b0a2
    SAHF                                ; 0041b0a4
    JNC 0x0041b0ae                      ; 0041b0a5
        ;   XREF to: 0041b0ae (CONDITIONAL_JUMP)  ; LAB_0041b0ae
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041b0a7
    MOV dword ptr [ESP + 0x14],EAX      ; 0041b0aa
    FLD float ptr [ESI]                 ; 0041b0ae
        ;   Label: LAB_0041b0ae
    FCOMP float ptr [ESP]               ; 0041b0b0
    FNSTSW AX                           ; 0041b0b3
    SAHF                                ; 0041b0b5
    JBE 0x0041b0bd                      ; 0041b0b6
        ;   XREF to: 0041b0bd (CONDITIONAL_JUMP)  ; LAB_0041b0bd
    MOV EAX,dword ptr [ESI]             ; 0041b0b8
    MOV dword ptr [ESP],EAX             ; 0041b0ba
    FLD float ptr [ESI + 0x4]           ; 0041b0bd
        ;   Label: LAB_0041b0bd
    FCOMP float ptr [ESP + 0x4]         ; 0041b0c0
    FNSTSW AX                           ; 0041b0c4
    SAHF                                ; 0041b0c6
    JBE 0x0041b0d0                      ; 0041b0c7
        ;   XREF to: 0041b0d0 (CONDITIONAL_JUMP)  ; LAB_0041b0d0
    MOV EAX,dword ptr [ESI + 0x4]       ; 0041b0c9
    MOV dword ptr [ESP + 0x4],EAX       ; 0041b0cc
    FLD float ptr [ESI + 0x8]           ; 0041b0d0
        ;   Label: LAB_0041b0d0
    FCOMP float ptr [ESP + 0x8]         ; 0041b0d3
    FNSTSW AX                           ; 0041b0d7
    SAHF                                ; 0041b0d9
    JBE 0x0041b0e3                      ; 0041b0da
        ;   XREF to: 0041b0e3 (CONDITIONAL_JUMP)  ; LAB_0041b0e3
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041b0dc
    MOV dword ptr [ESP + 0x8],EAX       ; 0041b0df
    INC EDX                             ; 0041b0e3
        ;   Label: LAB_0041b0e3
    ADD ESI,0xc                         ; 0041b0e4
    CMP EDX,EBX                         ; 0041b0e7
    JL 0x0041b077                       ; 0041b0e9
        ;   XREF to: 0041b077 (CONDITIONAL_JUMP)  ; LAB_0041b077
    FLD float ptr [ESP]                 ; 0041b0eb
        ;   Label: LAB_0041b0eb
    FLD float ptr [ESP + 0x4]           ; 0041b0ee
    FLD float ptr [ESP + 0x8]           ; 0041b0f2
    LEA EDI,[ESP + 0x24]                ; 0041b0f6
    LEA ESI,[ESP + 0x18]                ; 0041b0fa
    LEA EAX,[ESP + 0x24]                ; 0041b0fe
    LEA EDX,[EBP + 0xa4]                ; 0041b102
    FXCH ST2                            ; 0041b108
    FSUB float ptr [ESP + 0xc]          ; 0041b10a
    FXCH                                ; 0041b10e
    FSUB float ptr [ESP + 0x10]         ; 0041b110
    FXCH ST2                            ; 0041b114
    FSUB float ptr [ESP + 0x14]         ; 0041b116
    FXCH ST2                            ; 0041b11a
    FSTP float ptr [ESP + 0x1c]         ; 0041b11c
    FXCH                                ; 0041b120
    FSTP float ptr [ESP + 0x20]         ; 0041b122
    FSTP float ptr [ESP + 0x18]         ; 0041b126
    MOVSD ES:EDI,ESI                    ; 0041b12a
    MOVSD ES:EDI,ESI                    ; 0041b12b
    MOVSD ES:EDI,ESI                    ; 0041b12c
    CMP EDX,EAX                         ; 0041b12d
    JZ 0x0041b145                       ; 0041b12f
        ;   XREF to: 0041b145 (CONDITIONAL_JUMP)  ; LAB_0041b145
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041b131
    MOV dword ptr [EDX],EAX             ; 0041b135
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041b137
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b13b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041b13e
    MOV dword ptr [EDX + 0x8],EAX       ; 0041b142
    XOR EDX,EDX                         ; 0041b145
        ;   Label: LAB_0041b145
    MOV dword ptr [EBP + 0xb0],EBX      ; 0041b147
    TEST EBX,EBX                        ; 0041b14d
    JLE 0x0041b17a                      ; 0041b14f
        ;   XREF to: 0041b17a (CONDITIONAL_JUMP)  ; LAB_0041b17a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0041b151
    LEA EAX,[EBP + 0xb4]                ; 0041b155
    CMP EAX,ESI                         ; 0041b15b
        ;   Label: LAB_0041b15b
    JZ 0x0041b16f                       ; 0041b15d
        ;   XREF to: 0041b16f (CONDITIONAL_JUMP)  ; LAB_0041b16f
    MOV ECX,dword ptr [ESI]             ; 0041b15f
    MOV dword ptr [EAX],ECX             ; 0041b161
    MOV ECX,dword ptr [ESI + 0x4]       ; 0041b163
    MOV dword ptr [EAX + 0x4],ECX       ; 0041b166
    MOV ECX,dword ptr [ESI + 0x8]       ; 0041b169
    MOV dword ptr [EAX + 0x8],ECX       ; 0041b16c
    ADD EAX,0x34                        ; 0041b16f
        ;   Label: LAB_0041b16f
    INC EDX                             ; 0041b172
    ADD ESI,0xc                         ; 0041b173
    CMP EDX,EBX                         ; 0041b176
    JL 0x0041b15b                       ; 0041b178
        ;   XREF to: 0041b15b (CONDITIONAL_JUMP)  ; LAB_0041b15b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0041b17a
        ;   Label: LAB_0041b17a
    PUSH dword ptr [ESP + 0x58]         ; 0041b17e
    PUSH EDI                            ; 0041b182
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041b183
    PUSH EAX                            ; 0041b187
    PUSH EBP                            ; 0041b188
    CALL core_box.cpp_FUN_0041b1d0      ; 0041b189
        ;   XREF to: 0041b1d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_0041b1d0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 0041b18e
    ADD ESP,0x30                        ; 0041b191
    POP EBP                             ; 0041b194
    POP EDI                             ; 0041b195
    POP ESI                             ; 0041b196
    POP EBX                             ; 0041b197
    RET                                 ; 0041b198
    MOV EDX,0x5b7339                    ; 0041b199
        ;   Label: LAB_0041b199
    MOV ECX,0x80                        ; 0041b19e
    PUSH 0x5b7349                       ; 0041b1a3
    MOV dword ptr [0x01d71de0],EDX      ; 0041b1a8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0041b1ae | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0041b1b4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0041b1b9
    JMP 0x0041b048                      ; 0041b1bc
        ;   XREF to: 0041b048 (UNCONDITIONAL_JUMP)  ; LAB_0041b048

