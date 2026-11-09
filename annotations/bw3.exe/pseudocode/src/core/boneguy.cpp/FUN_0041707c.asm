; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_0041707c(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b6d42
;   undefined4 DAT_005b6d4a
;   undefined4 DAT_005b6d52
;   undefined4 DAT_005b6d5a
;   undefined4 DAT_005b6d62
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0041707c
        ;   Label: core_boneguy.cpp_FUN_0041707c
    PUSH EBX                            ; 00417080
    PUSH EDI                            ; 00417081
    PUSH EBP                            ; 00417082
    MOV EBP,ESP                         ; 00417083
    SUB ESP,0x40                        ; 00417085
    AND ESP,0xfffffff8                  ; 00417088
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041708b
    MOV EDX,ESI                         ; 0041708e
    MOV ECX,dword ptr [EAX]             ; 00417090
    MOV dword ptr [ESP + 0x3c],ECX      ; 00417092
    MOV ECX,dword ptr [EAX + 0x4]       ; 00417096
    MOV EAX,dword ptr [EAX + 0x8]       ; 00417099
    MOV dword ptr [ESP + 0x38],ECX      ; 0041709c
    MOV dword ptr [ESP + 0x34],EAX      ; 004170a0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004170a4
    FLD float ptr [ESP + 0x38]          ; 004170a8
    MOV dword ptr [ESP + 0x30],EAX      ; 004170ac
    FCOMP float ptr [ESP + 0x3c]        ; 004170b0
    FNSTSW AX                           ; 004170b4
    SAHF                                ; 004170b6
    JC 0x004171d9                       ; 004170b7
        ;   XREF to: 004171d9 (CONDITIONAL_JUMP)  ; LAB_004171d9
    FLD float ptr [ESP + 0x34]          ; 004170bd
        ;   Label: LAB_004170bd
    FCOMP float ptr [ESP + 0x30]        ; 004170c1
    FNSTSW AX                           ; 004170c5
    SAHF                                ; 004170c7
    JNC 0x004170d2                      ; 004170c8
        ;   XREF to: 004170d2 (CONDITIONAL_JUMP)  ; LAB_004170d2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004170ca
    MOV dword ptr [ESP + 0x30],EAX      ; 004170ce
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004170d2
        ;   Label: LAB_004170d2
    FLD float ptr [ESP + 0x38]          ; 004170d6
    MOV dword ptr [ESP + 0x10],EAX      ; 004170da
    FCOMP float ptr [ESP + 0x3c]        ; 004170de
    FNSTSW AX                           ; 004170e2
    SAHF                                ; 004170e4
    JBE 0x004170ef                      ; 004170e5
        ;   XREF to: 004170ef (CONDITIONAL_JUMP)  ; LAB_004170ef
    MOV EAX,dword ptr [ESP + 0x38]      ; 004170e7
    MOV dword ptr [ESP + 0x10],EAX      ; 004170eb
    FLD float ptr [ESP + 0x34]          ; 004170ef
        ;   Label: LAB_004170ef
    FCOMP float ptr [ESP + 0x10]        ; 004170f3
    FNSTSW AX                           ; 004170f7
    SAHF                                ; 004170f9
    JBE 0x00417104                      ; 004170fa
        ;   XREF to: 00417104 (CONDITIONAL_JUMP)  ; LAB_00417104
    MOV EAX,dword ptr [ESP + 0x34]      ; 004170fc
    MOV dword ptr [ESP + 0x10],EAX      ; 00417100
    FLD float ptr [ESP + 0x10]          ; 00417104
        ;   Label: LAB_00417104
    FLD ST0                             ; 00417108
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041710a
    FLDZ                                ; 0041710e
    FXCH ST2                            ; 00417110
    FSUB float ptr [ESP + 0x30]         ; 00417112
    MOV dword ptr [ESP + 0x28],EAX      ; 00417116
    FSTP float ptr [ESP + 0x2c]         ; 0041711a
    FXCH                                ; 0041711e
    FCOMPP                              ; 00417120
    FNSTSW AX                           ; 00417122
    SAHF                                ; 00417124
    JNC 0x004171e2                      ; 00417125
        ;   XREF to: 004171e2 (CONDITIONAL_JUMP)  ; LAB_004171e2
    FLD float ptr [ESP + 0x2c]          ; 0041712b
    FDIV float ptr [ESP + 0x10]         ; 0041712f
    FSTP float ptr [ESP + 0x8]          ; 00417133
    FLD float ptr [ESP + 0x8]           ; 00417137
        ;   Label: LAB_00417137
    FLDZ                                ; 0041713b
    FXCH                                ; 0041713d
    FSTP double ptr [ESP]               ; 0041713f
    FCOMP double ptr [ESP]              ; 00417142
    FNSTSW AX                           ; 00417145
    SAHF                                ; 00417147
    JNC 0x0041721f                      ; 00417148
        ;   XREF to: 0041721f (CONDITIONAL_JUMP)  ; LAB_0041721f
    FLD double ptr [ESP]                ; 0041714e
    FMUL double ptr [0x005b6d42]        ; 00417151 | DAT_005b6d42
    FLD float ptr [ESP + 0x3c]          ; 00417157
    FXCH                                ; 0041715b
    FSTP float ptr [ESP + 0x8]          ; 0041715d
    FCOMP float ptr [ESP + 0x10]        ; 00417161
    FNSTSW AX                           ; 00417165
    SAHF                                ; 00417167
    JZ 0x004171ed                       ; 00417168
        ;   XREF to: 004171ed (CONDITIONAL_JUMP)  ; LAB_004171ed
    FLD float ptr [ESP + 0x38]          ; 0041716e
    FCOMP float ptr [ESP + 0x10]        ; 00417172
    FNSTSW AX                           ; 00417176
    SAHF                                ; 00417178
    JZ 0x004171fb                       ; 00417179
        ;   XREF to: 004171fb (CONDITIONAL_JUMP)  ; LAB_004171fb
    FLD float ptr [ESP + 0x3c]          ; 0041717f
    FSUB float ptr [ESP + 0x38]         ; 00417183
    FDIV float ptr [ESP + 0x2c]         ; 00417187
    FADD double ptr [0x005b6d4a]        ; 0041718b | DAT_005b6d4a
    FSTP float ptr [ESP + 0xc]          ; 00417191
        ;   Label: LAB_00417191
    FLD float ptr [ESP + 0xc]           ; 00417195
    FLD ST0                             ; 00417199
    FMUL double ptr [0x005b6d5a]        ; 0041719b | DAT_005b6d5a
    FSTP ST1                            ; 004171a1
    FST float ptr [ESP + 0xc]           ; 004171a3
    FLDZ                                ; 004171a7
    FCOMPP                              ; 004171a9
    FNSTSW AX                           ; 004171ab
    SAHF                                ; 004171ad
    JA 0x0041720f                       ; 004171ae
        ;   XREF to: 0041720f (CONDITIONAL_JUMP)  ; LAB_0041720f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004171b0
        ;   Label: LAB_004171b0
    MOV dword ptr [ESP + 0x14],EAX      ; 004171b4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004171b8
    LEA ESI,[ESP + 0x14]                ; 004171bc
    MOV dword ptr [ESP + 0x18],EAX      ; 004171c0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004171c4
    MOV EDI,EDX                         ; 004171c8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004171ca
    MOVSD ES:EDI,ESI                    ; 004171ce
    MOVSD ES:EDI,ESI                    ; 004171cf
    MOVSD ES:EDI,ESI                    ; 004171d0
    MOV EAX,EDX                         ; 004171d1
    MOV ESP,EBP                         ; 004171d3
    POP EBP                             ; 004171d5
    POP EDI                             ; 004171d6
    POP EBX                             ; 004171d7
    RET                                 ; 004171d8
    MOV dword ptr [ESP + 0x30],ECX      ; 004171d9
        ;   Label: LAB_004171d9
    JMP 0x004170bd                      ; 004171dd
        ;   XREF to: 004170bd (UNCONDITIONAL_JUMP)  ; LAB_004170bd
    XOR ECX,ECX                         ; 004171e2
        ;   Label: LAB_004171e2
    MOV dword ptr [ESP + 0x8],ECX       ; 004171e4
    JMP 0x00417137                      ; 004171e8
        ;   XREF to: 00417137 (UNCONDITIONAL_JUMP)  ; LAB_00417137
    FLD float ptr [ESP + 0x38]          ; 004171ed
        ;   Label: LAB_004171ed
    FSUB float ptr [ESP + 0x34]         ; 004171f1
    FDIV float ptr [ESP + 0x2c]         ; 004171f5
    JMP 0x00417191                      ; 004171f9
        ;   XREF to: 00417191 (UNCONDITIONAL_JUMP)  ; LAB_00417191
    FLD float ptr [ESP + 0x34]          ; 004171fb
        ;   Label: LAB_004171fb
    FSUB float ptr [ESP + 0x3c]         ; 004171ff
    FDIV float ptr [ESP + 0x2c]         ; 00417203
    FSUBR double ptr [0x005b6d52]       ; 00417207 | DAT_005b6d52
    JMP 0x00417191                      ; 0041720d
        ;   XREF to: 00417191 (UNCONDITIONAL_JUMP)  ; LAB_00417191
    FLD float ptr [ESP + 0xc]           ; 0041720f
        ;   Label: LAB_0041720f
    FADD float ptr [0x005b6d62]         ; 00417213 | DAT_005b6d62
    FSTP float ptr [ESP + 0xc]          ; 00417219
    JMP 0x004171b0                      ; 0041721d
        ;   XREF to: 004171b0 (UNCONDITIONAL_JUMP)  ; LAB_004171b0
    XOR EBX,EBX                         ; 0041721f
        ;   Label: LAB_0041721f
    MOV dword ptr [ESP + 0xc],EBX       ; 00417221
    JMP 0x004171b0                      ; 00417225
        ;   XREF to: 004171b0 (UNCONDITIONAL_JUMP)  ; LAB_004171b0

