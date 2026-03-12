; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CPoly_rayIntersect_FUN_005d0010(CPoly *this_ptr,CVector3d *ray_origin,CVector3d *ray_end,CVector3d *out_hit_point)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   ray_origin
; CVector3d *      Stack[0xc]:4   ray_end
; CVector3d *      Stack[0x10]:4   out_hit_point
; Local Variables:
; double           Stack[-0xd8]:8  local_d8
; undefined4[4]    Stack[-0xc8]:16  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; double           Stack[-0xb0]:8  local_b0
; double           Stack[-0xa8]:8  local_a8
; double           Stack[-0xa0]:8  local_a0
; double           Stack[-0x98]:8  local_98
; double           Stack[-0x90]:8  local_90
; double           Stack[-0x88]:8  local_88
; double           Stack[-0x80]:8  local_80
; double           Stack[-0x78]:8  local_78
; double           Stack[-0x70]:8  local_70
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; double           Stack[-0x58]:8  local_58
; double           Stack[-0x50]:8  local_50
; double           Stack[-0x48]:8  local_48
; double           Stack[-0x40]:8  local_40
; double           Stack[-0x38]:8  local_38
; double           Stack[-0x30]:8  local_30
; double           Stack[-0x28]:8  local_28
; int              Stack[-0x18]:4  local_18
; CVert *          Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_006542f2 = 1.00000000000000E-8
;   double DOUBLE_006542fa = -1.00000000000000E-8
;   double DOUBLE_00654302 = 1.00000001000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d0010
        ;   Label: shape_superopt.cpp_CPoly_rayIntersect_FUN_005d0010
    PUSH ESI                            ; 005d0011
    PUSH EDI                            ; 005d0012
    PUSH EBP                            ; 005d0013
    MOV EBP,ESP                         ; 005d0014
    SUB ESP,0xd8                        ; 005d0016
    AND ESP,0xfffffff8                  ; 005d001c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005d001f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005d0022
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d0025
    MOV EAX,dword ptr [EAX]             ; 005d0028
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d002a
    MOV dword ptr [ESP + 0xd4],EAX      ; 005d002d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d0034
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d0037
    SHL EAX,0x3                         ; 005d003a
    MOV EDX,EAX                         ; 005d003d
    SHL EAX,0x3                         ; 005d003f
    SUB EAX,EDX                         ; 005d0042
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005d0044
    ADD EDX,EAX                         ; 005d004b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d004d
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d0050
    SHL EAX,0x3                         ; 005d0053
    MOV ECX,EAX                         ; 005d0056
    SHL EAX,0x3                         ; 005d0058
    SUB EAX,ECX                         ; 005d005b
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005d005d
    ADD ECX,EAX                         ; 005d0064
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d0066
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d0069
    MOV dword ptr [ESP + 0xd0],EAX      ; 005d006c
    SHL EAX,0x3                         ; 005d0073
    MOV dword ptr [ESP + 0xd0],EAX      ; 005d0076
    MOV EDI,dword ptr [ESP + 0xd0]      ; 005d007d
    SHL EAX,0x3                         ; 005d0084
    FLD double ptr [ECX + 0x8]          ; 005d0087
    SUB EAX,EDI                         ; 005d008a
    MOV EDI,dword ptr [ESP + 0xd4]      ; 005d008c
    FSUB double ptr [EDX + 0x8]         ; 005d0093
    ADD EAX,EDI                         ; 005d0096
    FLD double ptr [EAX + 0x10]         ; 005d0098
    FSUB double ptr [EDX + 0x10]        ; 005d009b
    FMULP                               ; 005d009e
    FLD double ptr [EAX + 0x8]          ; 005d00a0
    FSUB double ptr [EDX + 0x8]         ; 005d00a3
    FLD double ptr [ECX + 0x10]         ; 005d00a6
    FSUB double ptr [EDX + 0x10]        ; 005d00a9
    FMULP                               ; 005d00ac
    FSUBP                               ; 005d00ae
    FSTP double ptr [ESP + 0xb0]        ; 005d00b0
    FLD double ptr [ECX + 0x10]         ; 005d00b7
    FSUB double ptr [EDX + 0x10]        ; 005d00ba
    FLD double ptr [EAX]                ; 005d00bd
    FSUB double ptr [EDX]               ; 005d00bf
    FMULP                               ; 005d00c1
    FLD double ptr [EAX + 0x10]         ; 005d00c3
    FSUB double ptr [EDX + 0x10]        ; 005d00c6
    FLD double ptr [ECX]                ; 005d00c9
    FSUB double ptr [EDX]               ; 005d00cb
    FMULP                               ; 005d00cd
    FSUBP                               ; 005d00cf
    FSTP double ptr [ESP + 0xb8]        ; 005d00d1
    FLD double ptr [EAX + 0x8]          ; 005d00d8
    FSUB double ptr [EDX + 0x8]         ; 005d00db
    FLD double ptr [ECX]                ; 005d00de
    FSUB double ptr [EDX]               ; 005d00e0
    FMULP                               ; 005d00e2
    FLD double ptr [ECX + 0x8]          ; 005d00e4
    FSUB double ptr [EDX + 0x8]         ; 005d00e7
    FLD double ptr [ESP + 0xb8]         ; 005d00ea
    FLD double ptr [EAX]                ; 005d00f1
    FSUB double ptr [EDX]               ; 005d00f3
    FXCH                                ; 005d00f5
    FMUL double ptr [ESP + 0xb8]        ; 005d00f7
    FXCH                                ; 005d00fe
    FMULP ST2                           ; 005d0100
    FLD double ptr [ESP + 0xb0]         ; 005d0102
    FMUL ST0                            ; 005d0109
    FXCH ST2                            ; 005d010b
    FSUBP ST3,ST0                       ; 005d010d
    FADDP                               ; 005d010f
    FXCH                                ; 005d0111
    FST double ptr [ESP + 0xc0]         ; 005d0113
    FMUL double ptr [ESP + 0xc0]        ; 005d011a
    FADDP                               ; 005d0121
    FSQRT                               ; 005d0123
    FLD double ptr [ESP + 0xb0]         ; 005d0125
    FLD1                                ; 005d012c
    FDIVRP ST2,ST0                      ; 005d012e
    FMUL ST1                            ; 005d0130
    FLD double ptr [ESP + 0xb8]         ; 005d0132
    FMUL ST2                            ; 005d0139
    FLD double ptr [ESP + 0xc0]         ; 005d013b
    FMULP ST3                           ; 005d0142
    FXCH                                ; 005d0144
    FSTP double ptr [ESP + 0xb0]        ; 005d0146
    FSTP double ptr [ESP + 0xb8]        ; 005d014d
    FSTP double ptr [ESP + 0xc0]        ; 005d0154
    FLD double ptr [ESP + 0xb8]         ; 005d015b
    FLD double ptr [ESI + 0x8]          ; 005d0162
    FSUB double ptr [EBX + 0x8]         ; 005d0165
    FXCH                                ; 005d0168
    FMUL double ptr [EDX + 0x8]         ; 005d016a
    FXCH                                ; 005d016d
    FMUL double ptr [ESP + 0xb8]        ; 005d016f
    FLD double ptr [ESP + 0xb0]         ; 005d0176
    FCHS                                ; 005d017d
    FLD double ptr [ESI]                ; 005d017f
    FSUB double ptr [EBX]               ; 005d0181
    FXCH                                ; 005d0183
    FMUL double ptr [EDX]               ; 005d0185
    FXCH                                ; 005d0187
    FMUL double ptr [ESP + 0xb0]        ; 005d0189
    FXCH                                ; 005d0190
    FSUBRP ST3,ST0                      ; 005d0192
    FADDP                               ; 005d0194
    FLD double ptr [ESP + 0xc0]         ; 005d0196
    FLD double ptr [ESI + 0x10]         ; 005d019d
    FSUB double ptr [EBX + 0x10]        ; 005d01a0
    FXCH                                ; 005d01a3
    FMUL double ptr [EDX + 0x10]        ; 005d01a5
    FXCH                                ; 005d01a8
    FMUL double ptr [ESP + 0xc0]        ; 005d01aa
    FLDZ                                ; 005d01b1
    FXCH ST2                            ; 005d01b3
    FSUBP ST4,ST0                       ; 005d01b5
    FADDP ST2,ST0                       ; 005d01b7
    FXCH ST2                            ; 005d01b9
    FSTP double ptr [ESP + 0x18]        ; 005d01bb
    FSTP double ptr [ESP]               ; 005d01bf
    FCOMP double ptr [ESP]              ; 005d01c2
    FNSTSW AX                           ; 005d01c5
    SAHF                                ; 005d01c7
    JBE 0x005d0233                      ; 005d01c8
        ;   XREF to: 005d0233 (CONDITIONAL_JUMP)  ; LAB_005d0233
    FLD double ptr [ESP]                ; 005d01ca
    FCHS                                ; 005d01cd
    FSTP double ptr [ESP + 0x10]        ; 005d01cf
    FLD double ptr [ESP + 0x10]         ; 005d01d3
        ;   Label: LAB_005d01d3
    FCOMP double ptr [0x006542f2]       ; 005d01d7 | DOUBLE_006542f2
    FNSTSW AX                           ; 005d01dd
    SAHF                                ; 005d01df
    JC 0x005d022a                       ; 005d01e0
        ;   XREF to: 005d022a (CONDITIONAL_JUMP)  ; LAB_005d022a
    FLD double ptr [ESP + 0xb8]         ; 005d01e2
    FMUL double ptr [EBX + 0x8]         ; 005d01e9
    FLD double ptr [ESP + 0xb0]         ; 005d01ec
    FMUL double ptr [EBX]               ; 005d01f3
    FADD double ptr [ESP + 0x18]        ; 005d01f5
    FADDP                               ; 005d01f9
    FLD double ptr [ESP + 0xc0]         ; 005d01fb
    FMUL double ptr [EBX + 0x10]        ; 005d0202
    FADDP                               ; 005d0205
    FCHS                                ; 005d0207
    FDIV double ptr [ESP]               ; 005d0209
    FST double ptr [ESP + 0x8]          ; 005d020c
    FCOMP double ptr [0x006542fa]       ; 005d0210 | DOUBLE_006542fa
    FNSTSW AX                           ; 005d0216
    SAHF                                ; 005d0218
    JC 0x005d022a                       ; 005d0219
        ;   XREF to: 005d022a (CONDITIONAL_JUMP)  ; LAB_005d022a
    FLD double ptr [ESP + 0x8]          ; 005d021b
    FCOMP double ptr [0x00654302]       ; 005d021f | DOUBLE_00654302
    FNSTSW AX                           ; 005d0225
    SAHF                                ; 005d0227
    JBE 0x005d0244                      ; 005d0228
        ;   XREF to: 005d0244 (CONDITIONAL_JUMP)  ; LAB_005d0244
    XOR EAX,EAX                         ; 005d022a
        ;   Label: LAB_005d022a
    MOV ESP,EBP                         ; 005d022c
    POP EBP                             ; 005d022e
    POP EDI                             ; 005d022f
    POP ESI                             ; 005d0230
    POP EBX                             ; 005d0231
    RET                                 ; 005d0232
    MOV EAX,dword ptr [ESP]             ; 005d0233
        ;   Label: LAB_005d0233
    MOV dword ptr [ESP + 0x10],EAX      ; 005d0236
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d023a
    MOV dword ptr [ESP + 0x14],EAX      ; 005d023e
    JMP 0x005d01d3                      ; 005d0242
        ;   XREF to: 005d01d3 (UNCONDITIONAL_JUMP)  ; LAB_005d01d3
    FLD double ptr [ESI + 0x8]          ; 005d0244
        ;   Label: LAB_005d0244
    FLD double ptr [ESI + 0x10]         ; 005d0247
    FLD double ptr [ESI]                ; 005d024a
    MOV ECX,0x6                         ; 005d024c
    LEA EDI,[ESP + 0x50]                ; 005d0251
    LEA ESI,[ESP + 0x38]                ; 005d0255
    FSUB double ptr [EBX]               ; 005d0259
    FXCH ST2                            ; 005d025b
    FSUB double ptr [EBX + 0x8]         ; 005d025d
    FXCH                                ; 005d0260
    FSUB double ptr [EBX + 0x10]        ; 005d0262
    FXCH ST2                            ; 005d0265
    FSTP double ptr [ESP + 0x38]        ; 005d0267
    FSTP double ptr [ESP + 0x40]        ; 005d026b
    FSTP double ptr [ESP + 0x48]        ; 005d026f
    MOVSD.REP ES:EDI,ESI                ; 005d0273
    FLD double ptr [ESP + 0x8]          ; 005d0275
    FLD double ptr [ESP + 0x50]         ; 005d0279
    FMUL ST1                            ; 005d027d
    FLD double ptr [ESP + 0x58]         ; 005d027f
    FMUL ST2                            ; 005d0283
    FLD double ptr [ESP + 0x60]         ; 005d0285
    FMULP ST3                           ; 005d0289
    MOV ECX,0x6                         ; 005d028b
    LEA EDI,[ESP + 0x68]                ; 005d0290
    LEA ESI,[ESP + 0x98]                ; 005d0294
    FXCH                                ; 005d029b
    FSTP double ptr [ESP + 0x98]        ; 005d029d
    FSTP double ptr [ESP + 0xa0]        ; 005d02a4
    FSTP double ptr [ESP + 0xa8]        ; 005d02ab
    MOVSD.REP ES:EDI,ESI                ; 005d02b2
    FLD double ptr [EBX]                ; 005d02b4
    FLD double ptr [EBX + 0x8]          ; 005d02b6
    FLD double ptr [EBX + 0x10]         ; 005d02b9
    MOV ECX,0x6                         ; 005d02bc
    LEA EDI,[ESP + 0x20]                ; 005d02c1
    LEA ESI,[ESP + 0x80]                ; 005d02c5
    FXCH ST2                            ; 005d02cc
    FADD double ptr [ESP + 0x68]        ; 005d02ce
    FXCH                                ; 005d02d2
    FADD double ptr [ESP + 0x70]        ; 005d02d4
    FXCH ST2                            ; 005d02d8
    FADD double ptr [ESP + 0x78]        ; 005d02da
    FXCH                                ; 005d02de
    FSTP double ptr [ESP + 0x80]        ; 005d02e0
    FXCH                                ; 005d02e7
    FSTP double ptr [ESP + 0x88]        ; 005d02e9
    FSTP double ptr [ESP + 0x90]        ; 005d02f0
    MOVSD.REP ES:EDI,ESI                ; 005d02f7
    MOV EDX,dword ptr [EBP + 0x20]      ; 005d02f9
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d02fc
    MOV dword ptr [EDX],EAX             ; 005d0300
    MOV EAX,dword ptr [ESP + 0x24]      ; 005d0302
    MOV dword ptr [EDX + 0x4],EAX       ; 005d0306
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d0309
    MOV dword ptr [EDX + 0x8],EAX       ; 005d030d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005d0310
    MOV dword ptr [EDX + 0xc],EAX       ; 005d0314
    MOV EAX,dword ptr [ESP + 0x30]      ; 005d0317
    PUSH EDX                            ; 005d031b
    MOV dword ptr [EDX + 0x10],EAX      ; 005d031c
    MOV EAX,dword ptr [ESP + 0x38]      ; 005d031f
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d0323
    MOV dword ptr [EDX + 0x14],EAX      ; 005d0326
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d0329
    PUSH ECX                            ; 005d032c
    MOV EAX,dword ptr [EAX + 0x64]      ; 005d032d
    CALL dword ptr [EAX + 0x64]         ; 005d0330
    ADD ESP,0x8                         ; 005d0333
    MOV ESP,EBP                         ; 005d0336
    POP EBP                             ; 005d0338
    POP EDI                             ; 005d0339
    POP ESI                             ; 005d033a
    POP EBX                             ; 005d033b
    RET                                 ; 005d033c

