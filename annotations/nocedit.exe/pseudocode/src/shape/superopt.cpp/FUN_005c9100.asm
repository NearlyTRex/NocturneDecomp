; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown double shape_superopt_cpp_FUN_005c9100(void)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   shape_superopt.cpp_FUN_005c8b50 at 005c8e2b
;   shape_superopt.cpp_FUN_005c8e70 at 005c9064
;
; Referenced Globals:
;   double DOUBLE_00654222 = 0.5
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c9100
        ;   Label: shape_superopt.cpp_FUN_005c9100
    MOV EBP,ESP                         ; 005c9101
    SUB ESP,0x20                        ; 005c9103
    AND ESP,0xfffffff8                  ; 005c9106
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c9109
    XOR EDX,EDX                         ; 005c910c
    MOV dword ptr [ESP],EDX             ; 005c910e
    MOV dword ptr [ESP + 0x4],EDX       ; 005c9111
    MOV dword ptr [ESP + 0x10],EDX      ; 005c9115
    MOV dword ptr [ESP + 0x14],EDX      ; 005c9119
    MOV dword ptr [ESP + 0x8],EDX       ; 005c911d
    MOV dword ptr [ESP + 0xc],EDX       ; 005c9121
    TEST ECX,ECX                        ; 005c9125
    JBE 0x005c91b2                      ; 005c9127
        ;   XREF to: 005c91b2 (CONDITIONAL_JUMP)  ; LAB_005c91b2
    FLD double ptr [0x00654222]         ; 005c912d | DOUBLE_00654222
    LEA EDX,[ECX*0x4 + 0x0]             ; 005c9133
    MOV EAX,dword ptr [EBP + 0xc]       ; 005c913a
    SUB EDX,ECX                         ; 005c913d
    FLD double ptr [ESP + 0x10]         ; 005c913f
    SHL EDX,0x5                         ; 005c9143
    MOV ECX,dword ptr [EBP + 0xc]       ; 005c9146
    ADD EDX,0x10                        ; 005c9149
    ADD EAX,0x10                        ; 005c914c
    ADD EDX,ECX                         ; 005c914f
    FLD double ptr [EAX + 0x8]          ; 005c9151
        ;   Label: LAB_005c9151
    FADD double ptr [EAX + 0x20]        ; 005c9154
    FLD double ptr [EAX + 0x18]         ; 005c9157
    FSUB double ptr [EAX]               ; 005c915a
    FMULP                               ; 005c915c
    FLD double ptr [EAX + 0x28]         ; 005c915e
    FLD double ptr [EAX + 0x10]         ; 005c9161
    FADD double ptr [EAX + 0x28]        ; 005c9164
    FXCH                                ; 005c9167
    FSUB double ptr [EAX + 0x10]        ; 005c9169
    FLD double ptr [EAX]                ; 005c916c
    FLD double ptr [EAX + 0x20]         ; 005c916e
    FSUB double ptr [EAX + 0x8]         ; 005c9171
    FXCH                                ; 005c9174
    FADD double ptr [EAX + 0x18]        ; 005c9176
    FXCH                                ; 005c9179
    FMULP ST3                           ; 005c917b
    FMULP                               ; 005c917d
    FXCH ST2                            ; 005c917f
    FMUL ST4                            ; 005c9181
    FXCH                                ; 005c9183
    FMUL ST4                            ; 005c9185
    FXCH ST2                            ; 005c9187
    FMUL ST4                            ; 005c9189
    ADD EAX,0x60                        ; 005c918b
    FXCH                                ; 005c918e
    FADD double ptr [ESP + 0x8]         ; 005c9190
    FXCH ST2                            ; 005c9194
    FADD double ptr [ESP]               ; 005c9196
    FXCH                                ; 005c9199
    FADD ST0,ST3                        ; 005c919b
    FXCH ST2                            ; 005c919d
    FSTP double ptr [ESP + 0x8]         ; 005c919f
    FSTP double ptr [ESP]               ; 005c91a3
    FSTP ST1                            ; 005c91a6
    CMP EAX,EDX                         ; 005c91a8
    JC 0x005c9151                       ; 005c91aa
        ;   XREF to: 005c9151 (CONDITIONAL_JUMP)  ; LAB_005c9151
    FSTP double ptr [ESP + 0x10]        ; 005c91ac
    FSTP ST0                            ; 005c91b0
    FLD double ptr [ESP + 0x8]          ; 005c91b2
        ;   Label: LAB_005c91b2
    FMUL ST0                            ; 005c91b6
    FLD double ptr [ESP]                ; 005c91b8
    FMUL ST0                            ; 005c91bb
    FADDP                               ; 005c91bd
    FLD double ptr [ESP + 0x10]         ; 005c91bf
    FMUL ST0                            ; 005c91c3
    FADDP                               ; 005c91c5
    FSQRT                               ; 005c91c7
    FSTP double ptr [ESP + 0x18]        ; 005c91c9
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c91cd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c91d1
    MOV ESP,EBP                         ; 005c91d5
    POP EBP                             ; 005c91d7
    RET                                 ; 005c91d8

