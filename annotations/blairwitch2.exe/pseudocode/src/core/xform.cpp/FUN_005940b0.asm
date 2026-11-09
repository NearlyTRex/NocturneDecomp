; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_FUN_005940b0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_boneguy.cpp_FUN_004186c0 at 004188d2
;   core_doc.cpp_FUN_00455170 at 004551d5
;   core_platfrm.cpp_FUN_00518310 at 0051843f
;   core_stranger.cpp_FUN_00567430 at 00567495
;   unkafter_conveyor.cpp_FUN_00436e80 at 0043708c
;
; Referenced Globals:
;   undefined4 DAT_005eedba
;   undefined4 DAT_005eedbe
;   undefined4 DAT_005eedc2
;   undefined4 DAT_005eedc6
;   undefined4 DAT_005eedca
;   undefined4 DAT_005eedce
;
; Called Functions:
;   crt_math.c_asin_FUN_005b98f6
;   crt_math.c_atan2_FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005940b0
        ;   Label: core_xform.cpp_FUN_005940b0
    PUSH EDI                            ; 005940b1
    PUSH EBP                            ; 005940b2
    MOV EBP,ESP                         ; 005940b3
    SUB ESP,0x14                        ; 005940b5
    AND ESP,0xfffffff8                  ; 005940b8
    MOV EDX,dword ptr [EBP + 0x10]      ; 005940bb
    MOV ECX,ESI                         ; 005940be
    FLD float ptr [EDX + 0x8]           ; 005940c0
    FMUL float ptr [EDX + 0xc]          ; 005940c3
    FLD float ptr [EDX]                 ; 005940c6
    FMUL float ptr [EDX + 0x4]          ; 005940c8
    FSUBRP                              ; 005940cb
    FMUL float ptr [0x005eedba]         ; 005940cd | DAT_005eedba
    FST float ptr [ESP]                 ; 005940d3
    FCOMP float ptr [0x005eedbe]        ; 005940d6 | DAT_005eedbe
    FNSTSW AX                           ; 005940dc
    SAHF                                ; 005940de
    JC 0x0059417c                       ; 005940df
        ;   XREF to: 0059417c (CONDITIONAL_JUMP)  ; LAB_0059417c
    FLD float ptr [ESP]                 ; 005940e5
    FCOMP float ptr [0x005eedc2]        ; 005940e8 | DAT_005eedc2
    FNSTSW AX                           ; 005940ee
    SAHF                                ; 005940f0
    JA 0x005941c5                       ; 005940f1
        ;   XREF to: 005941c5 (CONDITIONAL_JUMP)  ; LAB_005941c5
    FLD float ptr [ESP]                 ; 005940f7
    CALL crt_math.c_asin_FUN_005b98f6   ; 005940fa
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FST float ptr [ESP + 0x4]           ; 005940ff
    FCOMP float ptr [0x005eedc6]        ; 00594103 | DAT_005eedc6
    FNSTSW AX                           ; 00594109
    SAHF                                ; 0059410b
    JNC 0x0059411c                      ; 0059410c
        ;   XREF to: 0059411c (CONDITIONAL_JUMP)  ; LAB_0059411c
    FLD float ptr [ESP + 0x4]           ; 0059410e
    FADD float ptr [0x005eedca]         ; 00594112 | DAT_005eedca
    FSTP float ptr [ESP + 0x4]          ; 00594118
    FLD float ptr [EDX + 0x4]           ; 0059411c
        ;   Label: LAB_0059411c
    FMUL ST0                            ; 0059411f
    FLD float ptr [EDX + 0x8]           ; 00594121
    FMUL ST0                            ; 00594124
    FXCH                                ; 00594126
    FSUBR float ptr [0x005eedce]        ; 00594128 | DAT_005eedce
    FXCH                                ; 0059412e
    FSUBR ST0,ST1                       ; 00594130
    FLD float ptr [EDX + 0x4]           ; 00594132
    FMUL float ptr [EDX + 0xc]          ; 00594135
    FLD float ptr [EDX]                 ; 00594138
    FMUL float ptr [EDX + 0x8]          ; 0059413a
    FADDP                               ; 0059413d
    CALL crt_math.c_atan2_FUN_005b9989  ; 0059413f
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [EDX + 0xc]           ; 00594144
    FMUL ST0                            ; 00594147
    FSUBP ST2,ST0                       ; 00594149
    FLD float ptr [EDX + 0x4]           ; 0059414b
    FMUL float ptr [EDX + 0x8]          ; 0059414e
    FLD float ptr [EDX]                 ; 00594151
    FMUL float ptr [EDX + 0xc]          ; 00594153
    FADDP                               ; 00594156
    FLD ST2                             ; 00594158
    FXCH                                ; 0059415a
    CALL crt_math.c_atan2_FUN_005b9989  ; 0059415c
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FSTP ST2                            ; 00594161
    FSTP float ptr [ESP + 0x8]          ; 00594163
    FSTP float ptr [ESP + 0xc]          ; 00594167
    LEA ESI,[ESP + 0x4]                 ; 0059416b
    MOV EDI,ECX                         ; 0059416f
    MOVSD ES:EDI,ESI                    ; 00594171
    MOVSD ES:EDI,ESI                    ; 00594172
    MOVSD ES:EDI,ESI                    ; 00594173
    MOV EAX,ECX                         ; 00594174
    MOV ESP,EBP                         ; 00594176
    POP EBP                             ; 00594178
    POP EDI                             ; 00594179
    POP EBX                             ; 0059417a
    RET                                 ; 0059417b
    FLD float ptr [EDX + 0x8]           ; 0059417c
        ;   Label: LAB_0059417c
    FMUL ST0                            ; 0059417f
    FSUBR float ptr [0x005eedce]        ; 00594181 | DAT_005eedce
    FLD float ptr [EDX + 0xc]           ; 00594187
    FMUL ST0                            ; 0059418a
    FSUBP                               ; 0059418c
    FLD float ptr [EDX + 0x4]           ; 0059418e
    FCHS                                ; 00594191
    FMUL float ptr [EDX + 0xc]          ; 00594193
    FLD float ptr [EDX]                 ; 00594196
    FMUL float ptr [EDX + 0x8]          ; 00594198
    FADDP                               ; 0059419b
    CALL crt_math.c_atan2_FUN_005b9989  ; 0059419d
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 005941a2
    XOR EAX,EAX                         ; 005941aa
    FSTP float ptr [ESP + 0x8]          ; 005941ac
    MOV dword ptr [ESP + 0xc],EAX       ; 005941b0
    LEA ESI,[ESP + 0x4]                 ; 005941b4
    MOV EDI,ECX                         ; 005941b8
    MOVSD ES:EDI,ESI                    ; 005941ba
    MOVSD ES:EDI,ESI                    ; 005941bb
    MOVSD ES:EDI,ESI                    ; 005941bc
    MOV EAX,ECX                         ; 005941bd
    MOV ESP,EBP                         ; 005941bf
    POP EBP                             ; 005941c1
    POP EDI                             ; 005941c2
    POP EBX                             ; 005941c3
    RET                                 ; 005941c4
    FLD float ptr [EDX + 0x8]           ; 005941c5
        ;   Label: LAB_005941c5
    FMUL ST0                            ; 005941c8
    FSUBR float ptr [0x005eedce]        ; 005941ca | DAT_005eedce
    FLD float ptr [EDX + 0xc]           ; 005941d0
    FMUL ST0                            ; 005941d3
    FSUBP                               ; 005941d5
    FLD float ptr [EDX + 0x4]           ; 005941d7
    FCHS                                ; 005941da
    FMUL float ptr [EDX + 0xc]          ; 005941dc
    FLD float ptr [EDX]                 ; 005941df
    FMUL float ptr [EDX + 0x8]          ; 005941e1
    FADDP                               ; 005941e4
    CALL crt_math.c_atan2_FUN_005b9989  ; 005941e6
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    MOV EBX,0x3fc90fdb                  ; 005941eb
    XOR ESI,ESI                         ; 005941f0
    MOV dword ptr [ESP + 0x4],EBX       ; 005941f2
    MOV dword ptr [ESP + 0xc],ESI       ; 005941f6
    FSTP float ptr [ESP + 0x8]          ; 005941fa
    LEA ESI,[ESP + 0x4]                 ; 005941fe
    MOV EDI,ECX                         ; 00594202
    MOVSD ES:EDI,ESI                    ; 00594204
    MOVSD ES:EDI,ESI                    ; 00594205
    MOVSD ES:EDI,ESI                    ; 00594206
    MOV EAX,ECX                         ; 00594207
    MOV ESP,EBP                         ; 00594209
    POP EBP                             ; 0059420b
    POP EDI                             ; 0059420c
    POP EBX                             ; 0059420d
    RET                                 ; 0059420e

