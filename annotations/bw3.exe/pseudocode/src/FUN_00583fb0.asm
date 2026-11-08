; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00583fb0(float *param_1)
;
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00415e30 at 004160d1
;
; Referenced Globals:
;   undefined4 DAT_005d811f
;   undefined4 DAT_005d8123
;   undefined4 DAT_005d8127
;   undefined4 DAT_005d812b
;   undefined4 DAT_005d812f
;   undefined4 DAT_005d8133
;   undefined4 DAT_005d8137
;   undefined4 DAT_005d813b
;   undefined4 DAT_005d813f
;   undefined4 DAT_005d8143
;
; Called Functions:
;   FUN_005a4b46
;   FUN_005a4b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583fb0
        ;   Label: FUN_00583fb0
    PUSH EDI                            ; 00583fb1
    PUSH EBP                            ; 00583fb2
    MOV EBP,ESP                         ; 00583fb3
    SUB ESP,0x60                        ; 00583fb5
    AND ESP,0xfffffff8                  ; 00583fb8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00583fbb
    MOV ECX,ESI                         ; 00583fbe
    FLD float ptr [EDX + 0x4]           ; 00583fc0
    FMUL ST0                            ; 00583fc3
    FLD float ptr [EDX]                 ; 00583fc5
    FMUL ST0                            ; 00583fc7
    FADDP                               ; 00583fc9
    FLD float ptr [EDX + 0x8]           ; 00583fcb
    FMUL ST0                            ; 00583fce
    FADDP                               ; 00583fd0
    FSQRT                               ; 00583fd2
    FLDZ                                ; 00583fd4
    FXCH                                ; 00583fd6
    FSTP float ptr [ESP + 0x50]         ; 00583fd8
    FCOMP float ptr [ESP + 0x50]        ; 00583fdc
    FNSTSW AX                           ; 00583fe0
    SAHF                                ; 00583fe2
    JC 0x0058413d                       ; 00583fe3
        ;   XREF to: 0058413d (CONDITIONAL_JUMP)  ; LAB_0058413d
    FLD float ptr [EDX + 0x10]          ; 00583fe9
        ;   Label: LAB_00583fe9
    FMUL ST0                            ; 00583fec
    FLD float ptr [EDX + 0x14]          ; 00583fee
    FMUL ST0                            ; 00583ff1
    FADDP                               ; 00583ff3
    FLD float ptr [EDX + 0x18]          ; 00583ff5
    FMUL ST0                            ; 00583ff8
    FADDP                               ; 00583ffa
    FSQRT                               ; 00583ffc
    FLDZ                                ; 00583ffe
    FXCH                                ; 00584000
    FSTP float ptr [ESP + 0x48]         ; 00584002
    FCOMP float ptr [ESP + 0x48]        ; 00584006
    FNSTSW AX                           ; 0058400a
    SAHF                                ; 0058400c
    JNC 0x00584019                      ; 0058400d
        ;   XREF to: 00584019 (CONDITIONAL_JUMP)  ; LAB_00584019
    FLD1                                ; 0058400f
    FDIV float ptr [ESP + 0x48]         ; 00584011
    FSTP float ptr [ESP + 0x48]         ; 00584015
    FLD float ptr [EDX + 0x20]          ; 00584019
        ;   Label: LAB_00584019
    FMUL ST0                            ; 0058401c
    FLD float ptr [EDX + 0x24]          ; 0058401e
    FMUL ST0                            ; 00584021
    FADDP                               ; 00584023
    FLD float ptr [EDX + 0x28]          ; 00584025
    FMUL ST0                            ; 00584028
    FADDP                               ; 0058402a
    FSQRT                               ; 0058402c
    FLDZ                                ; 0058402e
    FXCH                                ; 00584030
    FSTP float ptr [ESP + 0x4c]         ; 00584032
    FCOMP float ptr [ESP + 0x4c]        ; 00584036
    FNSTSW AX                           ; 0058403a
    SAHF                                ; 0058403c
    JNC 0x00584049                      ; 0058403d
        ;   XREF to: 00584049 (CONDITIONAL_JUMP)  ; LAB_00584049
    FLD1                                ; 0058403f
    FDIV float ptr [ESP + 0x4c]         ; 00584041
    FSTP float ptr [ESP + 0x4c]         ; 00584045
    FLD float ptr [EDX + 0x24]          ; 00584049
        ;   Label: LAB_00584049
    FCHS                                ; 0058404c
    FMUL float ptr [ESP + 0x4c]         ; 0058404e
    FST float ptr [ESP + 0x10]          ; 00584052
    FCOMP float ptr [0x005d811f]        ; 00584056 | DAT_005d811f
    FNSTSW AX                           ; 0058405c
    SAHF                                ; 0058405e
    JNC 0x0058414c                      ; 0058405f
        ;   XREF to: 0058414c (CONDITIONAL_JUMP)  ; LAB_0058414c
    MOV dword ptr [ESP + 0x1c],0xbfc90fdb ; 00584065
    FLD float ptr [ESP + 0x50]          ; 0058406d
        ;   Label: LAB_0058406d
    FLD float ptr [EDX]                 ; 00584071
    FMUL ST1                            ; 00584073
    FLD float ptr [EDX + 0x8]           ; 00584075
    FCHS                                ; 00584078
    XOR EBX,EBX                         ; 0058407a
    FMULP ST2                           ; 0058407c
    MOV dword ptr [ESP + 0x24],EBX      ; 0058407e
    FXCH                                ; 00584082
    FSTP float ptr [ESP + 0x14]         ; 00584084
    MOV EAX,dword ptr [ESP + 0x14]      ; 00584088
    FSTP float ptr [ESP + 0x3c]         ; 0058408c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00584090
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00584094
    FLD float ptr [ESP + 0x14]          ; 00584098
    MOV dword ptr [ESP + 0x18],EAX      ; 0058409c
    FCOMP float ptr [0x005d8133]        ; 005840a0 | DAT_005d8133
    FNSTSW AX                           ; 005840a6
    SAHF                                ; 005840a8
    JNC 0x00584355                      ; 005840a9
        ;   XREF to: 00584355 (CONDITIONAL_JUMP)  ; LAB_00584355
    FLD float ptr [ESP + 0x14]          ; 005840af
    FCOMP float ptr [0x005d8137]        ; 005840b3 | DAT_005d8137
    FNSTSW AX                           ; 005840b9
    SAHF                                ; 005840bb
    JBE 0x00584355                      ; 005840bc
        ;   XREF to: 00584355 (CONDITIONAL_JUMP)  ; LAB_00584355
    FLD float ptr [ESP + 0x14]          ; 005840c2
    CALL FUN_005a4b46                   ; 005840c6
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLDZ                                ; 005840cb
    FXCH                                ; 005840cd
    FSTP float ptr [ESP + 0x58]         ; 005840cf
    FCOMP float ptr [ESP + 0x3c]        ; 005840d3
    FNSTSW AX                           ; 005840d7
    SAHF                                ; 005840d9
    JBE 0x005840ea                      ; 005840da
        ;   XREF to: 005840ea (CONDITIONAL_JUMP)  ; LAB_005840ea
    FLD float ptr [0x005d813f]          ; 005840dc | DAT_005d813f
    FSUB float ptr [ESP + 0x58]         ; 005840e2
    FSTP float ptr [ESP + 0x58]         ; 005840e6
    FLD float ptr [ESP + 0x58]          ; 005840ea
        ;   Label: LAB_005840ea
    FCOMP float ptr [0x005d8127]        ; 005840ee | DAT_005d8127
    FNSTSW AX                           ; 005840f4
    SAHF                                ; 005840f6
    JNC 0x00584107                      ; 005840f7
        ;   XREF to: 00584107 (CONDITIONAL_JUMP)  ; LAB_00584107
    FLD float ptr [ESP + 0x58]          ; 005840f9
    FADD float ptr [0x005d812b]         ; 005840fd | DAT_005d812b
    FSTP float ptr [ESP + 0x58]         ; 00584103
    FLD float ptr [ESP + 0x58]          ; 00584107
        ;   Label: LAB_00584107
    FCOMP float ptr [0x005d813f]        ; 0058410b | DAT_005d813f
    FNSTSW AX                           ; 00584111
    SAHF                                ; 00584113
    JBE 0x00584124                      ; 00584114
        ;   XREF to: 00584124 (CONDITIONAL_JUMP)  ; LAB_00584124
    FLD float ptr [ESP + 0x58]          ; 00584116
    FADD float ptr [0x005d8143]         ; 0058411a | DAT_005d8143
    FSTP float ptr [ESP + 0x58]         ; 00584120
    MOV EAX,dword ptr [ESP + 0x58]      ; 00584124
        ;   Label: LAB_00584124
    MOV dword ptr [ESP + 0x20],EAX      ; 00584128
    LEA ESI,[ESP + 0x1c]                ; 0058412c
    MOV EDI,ECX                         ; 00584130
    MOVSD ES:EDI,ESI                    ; 00584132
    MOVSD ES:EDI,ESI                    ; 00584133
    MOVSD ES:EDI,ESI                    ; 00584134
    MOV EAX,ECX                         ; 00584135
    MOV ESP,EBP                         ; 00584137
    POP EBP                             ; 00584139
    POP EDI                             ; 0058413a
    POP EBX                             ; 0058413b
    RET                                 ; 0058413c
    FLD1                                ; 0058413d
        ;   Label: LAB_0058413d
    FDIV float ptr [ESP + 0x50]         ; 0058413f
    FSTP float ptr [ESP + 0x50]         ; 00584143
    JMP 0x00583fe9                      ; 00584147
        ;   XREF to: 00583fe9 (UNCONDITIONAL_JUMP)  ; LAB_00583fe9
    FLD float ptr [ESP + 0x10]          ; 0058414c
        ;   Label: LAB_0058414c
    FCOMP float ptr [0x005d8123]        ; 00584150 | DAT_005d8123
    FNSTSW AX                           ; 00584156
    SAHF                                ; 00584158
    JBE 0x00584168                      ; 00584159
        ;   XREF to: 00584168 (CONDITIONAL_JUMP)  ; LAB_00584168
    MOV dword ptr [ESP + 0x1c],0x3fc90fdb ; 0058415b
    JMP 0x0058406d                      ; 00584163
        ;   XREF to: 0058406d (UNCONDITIONAL_JUMP)  ; LAB_0058406d
    FLD float ptr [ESP + 0x10]          ; 00584168
        ;   Label: LAB_00584168
    FLD ST0                             ; 0058416c
    CALL FUN_005a4b46                   ; 0058416e
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLD ST1                             ; 00584173
    FMULP ST2                           ; 00584175
    FLD1                                ; 00584177
    FSUBRP ST2,ST0                      ; 00584179
    FXCH                                ; 0058417b
    FSQRT                               ; 0058417d
    FXCH                                ; 0058417f
    FST float ptr [ESP + 0x1c]          ; 00584181
    FXCH                                ; 00584185
    FSTP float ptr [ESP + 0x40]         ; 00584187
    FCOMP float ptr [0x005d8127]        ; 0058418b | DAT_005d8127
    FNSTSW AX                           ; 00584191
    SAHF                                ; 00584193
    JNC 0x005841a4                      ; 00584194
        ;   XREF to: 005841a4 (CONDITIONAL_JUMP)  ; LAB_005841a4
    FLD float ptr [ESP + 0x1c]          ; 00584196
    FADD float ptr [0x005d812b]         ; 0058419a | DAT_005d812b
    FSTP float ptr [ESP + 0x1c]         ; 005841a0
    FLD float ptr [ESP + 0x40]          ; 005841a4
        ;   Label: LAB_005841a4
    FCOMP float ptr [0x005d812f]        ; 005841a8 | DAT_005d812f
    FNSTSW AX                           ; 005841ae
    SAHF                                ; 005841b0
    JC 0x0058406d                       ; 005841b1
        ;   XREF to: 0058406d (CONDITIONAL_JUMP)  ; LAB_0058406d
    FLD1                                ; 005841b7
    FDIV float ptr [ESP + 0x40]         ; 005841b9
    FLD float ptr [ESP + 0x4c]          ; 005841bd
    FLD float ptr [EDX + 0x28]          ; 005841c1
    FMUL ST1                            ; 005841c4
    FLD float ptr [EDX + 0x20]          ; 005841c6
    FMULP ST2                           ; 005841c9
    FXCH ST2                            ; 005841cb
    FSTP float ptr [ESP + 0x44]         ; 005841cd
    FMUL float ptr [ESP + 0x44]         ; 005841d1
    FXCH                                ; 005841d5
    FMUL float ptr [ESP + 0x44]         ; 005841d7
    FXCH                                ; 005841db
    FSTP float ptr [ESP]                ; 005841dd
    MOV EAX,dword ptr [ESP]             ; 005841e0
    FSTP float ptr [ESP + 0x34]         ; 005841e3
    MOV dword ptr [ESP + 0x28],EAX      ; 005841e7
    MOV EAX,dword ptr [ESP + 0x34]      ; 005841eb
    FLD float ptr [ESP]                 ; 005841ef
    MOV dword ptr [ESP + 0x8],EAX       ; 005841f2
    FCOMP float ptr [0x005d8133]        ; 005841f6 | DAT_005d8133
    FNSTSW AX                           ; 005841fc
    SAHF                                ; 005841fe
    JNC 0x005843a6                      ; 005841ff
        ;   XREF to: 005843a6 (CONDITIONAL_JUMP)  ; LAB_005843a6
    FLD float ptr [ESP]                 ; 00584205
    FCOMP float ptr [0x005d8137]        ; 00584208 | DAT_005d8137
    FNSTSW AX                           ; 0058420e
    SAHF                                ; 00584210
    JBE 0x005843a6                      ; 00584211
        ;   XREF to: 005843a6 (CONDITIONAL_JUMP)  ; LAB_005843a6
    FLD float ptr [ESP]                 ; 00584217
    CALL FUN_005a4b46                   ; 0058421a
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLDZ                                ; 0058421f
    FXCH                                ; 00584221
    FSTP float ptr [ESP + 0x5c]         ; 00584223
    FCOMP float ptr [ESP + 0x34]        ; 00584227
    FNSTSW AX                           ; 0058422b
    SAHF                                ; 0058422d
    JBE 0x0058423e                      ; 0058422e
        ;   XREF to: 0058423e (CONDITIONAL_JUMP)  ; LAB_0058423e
    FLD float ptr [0x005d813f]          ; 00584230 | DAT_005d813f
    FSUB float ptr [ESP + 0x5c]         ; 00584236
    FSTP float ptr [ESP + 0x5c]         ; 0058423a
    FLD float ptr [ESP + 0x5c]          ; 0058423e
        ;   Label: LAB_0058423e
    FCOMP float ptr [0x005d8127]        ; 00584242 | DAT_005d8127
    FNSTSW AX                           ; 00584248
    SAHF                                ; 0058424a
    JNC 0x0058425b                      ; 0058424b
        ;   XREF to: 0058425b (CONDITIONAL_JUMP)  ; LAB_0058425b
    FLD float ptr [ESP + 0x5c]          ; 0058424d
    FADD float ptr [0x005d812b]         ; 00584251 | DAT_005d812b
    FSTP float ptr [ESP + 0x5c]         ; 00584257
    FLD float ptr [ESP + 0x5c]          ; 0058425b
        ;   Label: LAB_0058425b
    FCOMP float ptr [0x005d813f]        ; 0058425f | DAT_005d813f
    FNSTSW AX                           ; 00584265
    SAHF                                ; 00584267
    JBE 0x00584278                      ; 00584268
        ;   XREF to: 00584278 (CONDITIONAL_JUMP)  ; LAB_00584278
    FLD float ptr [ESP + 0x5c]          ; 0058426a
    FADD float ptr [0x005d8143]         ; 0058426e | DAT_005d8143
    FSTP float ptr [ESP + 0x5c]         ; 00584274
    FLD float ptr [EDX + 0x14]          ; 00584278
        ;   Label: LAB_00584278
    FMUL float ptr [ESP + 0x48]         ; 0058427b
    FLD float ptr [EDX + 0x4]           ; 0058427f
    FMUL float ptr [ESP + 0x50]         ; 00584282
    FXCH                                ; 00584286
    FLD float ptr [ESP + 0x44]          ; 00584288
    FXCH                                ; 0058428c
    FMUL ST1                            ; 0058428e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00584290
    FXCH ST2                            ; 00584294
    FMULP                               ; 00584296
    MOV dword ptr [ESP + 0x20],EAX      ; 00584298
    FSTP float ptr [ESP + 0xc]          ; 0058429c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005842a0
    FSTP float ptr [ESP + 0x38]         ; 005842a4
    MOV dword ptr [ESP + 0x30],EAX      ; 005842a8
    MOV EAX,dword ptr [ESP + 0x38]      ; 005842ac
    FLD float ptr [ESP + 0xc]           ; 005842b0
    MOV dword ptr [ESP + 0x4],EAX       ; 005842b4
    FCOMP float ptr [0x005d8133]        ; 005842b8 | DAT_005d8133
    FNSTSW AX                           ; 005842be
    SAHF                                ; 005842c0
    JNC 0x005843f7                      ; 005842c1
        ;   XREF to: 005843f7 (CONDITIONAL_JUMP)  ; LAB_005843f7
    FLD float ptr [ESP + 0xc]           ; 005842c7
    FCOMP float ptr [0x005d8137]        ; 005842cb | DAT_005d8137
    FNSTSW AX                           ; 005842d1
    SAHF                                ; 005842d3
    JBE 0x005843f7                      ; 005842d4
        ;   XREF to: 005843f7 (CONDITIONAL_JUMP)  ; LAB_005843f7
    FLD float ptr [ESP + 0xc]           ; 005842da
    CALL FUN_005a4b46                   ; 005842de
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLDZ                                ; 005842e3
    FXCH                                ; 005842e5
    FSTP float ptr [ESP + 0x54]         ; 005842e7
    FCOMP float ptr [ESP + 0x38]        ; 005842eb
    FNSTSW AX                           ; 005842ef
    SAHF                                ; 005842f1
    JBE 0x00584302                      ; 005842f2
        ;   XREF to: 00584302 (CONDITIONAL_JUMP)  ; LAB_00584302
    FLD float ptr [0x005d813f]          ; 005842f4 | DAT_005d813f
    FSUB float ptr [ESP + 0x54]         ; 005842fa
    FSTP float ptr [ESP + 0x54]         ; 005842fe
    FLD float ptr [ESP + 0x54]          ; 00584302
        ;   Label: LAB_00584302
    FCOMP float ptr [0x005d8127]        ; 00584306 | DAT_005d8127
    FNSTSW AX                           ; 0058430c
    SAHF                                ; 0058430e
    JNC 0x0058431f                      ; 0058430f
        ;   XREF to: 0058431f (CONDITIONAL_JUMP)  ; LAB_0058431f
    FLD float ptr [ESP + 0x54]          ; 00584311
    FADD float ptr [0x005d812b]         ; 00584315 | DAT_005d812b
    FSTP float ptr [ESP + 0x54]         ; 0058431b
    FLD float ptr [ESP + 0x54]          ; 0058431f
        ;   Label: LAB_0058431f
    FCOMP float ptr [0x005d813f]        ; 00584323 | DAT_005d813f
    FNSTSW AX                           ; 00584329
    SAHF                                ; 0058432b
    JBE 0x0058433c                      ; 0058432c
        ;   XREF to: 0058433c (CONDITIONAL_JUMP)  ; LAB_0058433c
    FLD float ptr [ESP + 0x54]          ; 0058432e
    FADD float ptr [0x005d8143]         ; 00584332 | DAT_005d8143
    FSTP float ptr [ESP + 0x54]         ; 00584338
    MOV EAX,dword ptr [ESP + 0x54]      ; 0058433c
        ;   Label: LAB_0058433c
    MOV dword ptr [ESP + 0x24],EAX      ; 00584340
    LEA ESI,[ESP + 0x1c]                ; 00584344
    MOV EDI,ECX                         ; 00584348
    MOVSD ES:EDI,ESI                    ; 0058434a
    MOVSD ES:EDI,ESI                    ; 0058434b
    MOVSD ES:EDI,ESI                    ; 0058434c
    MOV EAX,ECX                         ; 0058434d
    MOV ESP,EBP                         ; 0058434f
    POP EBP                             ; 00584351
    POP EDI                             ; 00584352
    POP EBX                             ; 00584353
    RET                                 ; 00584354
    FLD float ptr [ESP + 0x18]          ; 00584355
        ;   Label: LAB_00584355
    FCOMP float ptr [0x005d813b]        ; 00584359 | DAT_005d813b
    FNSTSW AX                           ; 0058435f
    SAHF                                ; 00584361
    JA 0x00584385                       ; 00584362
        ;   XREF to: 00584385 (CONDITIONAL_JUMP)  ; LAB_00584385
    MOV dword ptr [ESP + 0x58],0x40490fdb ; 00584364
    FLDZ                                ; 0058436c
        ;   Label: LAB_0058436c
    FCOMP float ptr [ESP + 0x2c]        ; 0058436e
    FNSTSW AX                           ; 00584372
    SAHF                                ; 00584374
    JBE 0x005840ea                      ; 00584375
        ;   XREF to: 005840ea (CONDITIONAL_JUMP)  ; LAB_005840ea
    XOR byte ptr [ESP + 0x5b],0x80      ; 0058437b
    JMP 0x005840ea                      ; 00584380
        ;   XREF to: 005840ea (UNCONDITIONAL_JUMP)  ; LAB_005840ea
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 00584385
        ;   Label: LAB_00584385
    JL 0x00584397                       ; 0058438d
        ;   XREF to: 00584397 (CONDITIONAL_JUMP)  ; LAB_00584397
    XOR EDI,EDI                         ; 0058438f
    MOV dword ptr [ESP + 0x58],EDI      ; 00584391
    JMP 0x0058436c                      ; 00584395
        ;   XREF to: 0058436c (UNCONDITIONAL_JUMP)  ; LAB_0058436c
    FLD float ptr [ESP + 0x18]          ; 00584397
        ;   Label: LAB_00584397
    CALL FUN_005a4b74                   ; 0058439b
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FSTP float ptr [ESP + 0x58]         ; 005843a0
    JMP 0x0058436c                      ; 005843a4
        ;   XREF to: 0058436c (UNCONDITIONAL_JUMP)  ; LAB_0058436c
    FLD float ptr [ESP + 0x8]           ; 005843a6
        ;   Label: LAB_005843a6
    FCOMP float ptr [0x005d813b]        ; 005843aa | DAT_005d813b
    FNSTSW AX                           ; 005843b0
    SAHF                                ; 005843b2
    JA 0x005843d6                       ; 005843b3
        ;   XREF to: 005843d6 (CONDITIONAL_JUMP)  ; LAB_005843d6
    MOV dword ptr [ESP + 0x5c],0x40490fdb ; 005843b5
    FLDZ                                ; 005843bd
        ;   Label: LAB_005843bd
    FCOMP float ptr [ESP + 0x28]        ; 005843bf
    FNSTSW AX                           ; 005843c3
    SAHF                                ; 005843c5
    JBE 0x0058423e                      ; 005843c6
        ;   XREF to: 0058423e (CONDITIONAL_JUMP)  ; LAB_0058423e
    XOR byte ptr [ESP + 0x5f],0x80      ; 005843cc
    JMP 0x0058423e                      ; 005843d1
        ;   XREF to: 0058423e (UNCONDITIONAL_JUMP)  ; LAB_0058423e
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 005843d6
        ;   Label: LAB_005843d6
    JL 0x005843e8                       ; 005843de
        ;   XREF to: 005843e8 (CONDITIONAL_JUMP)  ; LAB_005843e8
    XOR ESI,ESI                         ; 005843e0
    MOV dword ptr [ESP + 0x5c],ESI      ; 005843e2
    JMP 0x005843bd                      ; 005843e6
        ;   XREF to: 005843bd (UNCONDITIONAL_JUMP)  ; LAB_005843bd
    FLD float ptr [ESP + 0x8]           ; 005843e8
        ;   Label: LAB_005843e8
    CALL FUN_005a4b74                   ; 005843ec
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FSTP float ptr [ESP + 0x5c]         ; 005843f1
    JMP 0x005843bd                      ; 005843f5
        ;   XREF to: 005843bd (UNCONDITIONAL_JUMP)  ; LAB_005843bd
    FLD float ptr [ESP + 0x4]           ; 005843f7
        ;   Label: LAB_005843f7
    FCOMP float ptr [0x005d813b]        ; 005843fb | DAT_005d813b
    FNSTSW AX                           ; 00584401
    SAHF                                ; 00584403
    JA 0x00584427                       ; 00584404
        ;   XREF to: 00584427 (CONDITIONAL_JUMP)  ; LAB_00584427
    MOV dword ptr [ESP + 0x54],0x40490fdb ; 00584406
    FLDZ                                ; 0058440e
        ;   Label: LAB_0058440e
    FCOMP float ptr [ESP + 0x30]        ; 00584410
    FNSTSW AX                           ; 00584414
    SAHF                                ; 00584416
    JBE 0x00584302                      ; 00584417
        ;   XREF to: 00584302 (CONDITIONAL_JUMP)  ; LAB_00584302
    XOR byte ptr [ESP + 0x57],0x80      ; 0058441d
    JMP 0x00584302                      ; 00584422
        ;   XREF to: 00584302 (UNCONDITIONAL_JUMP)  ; LAB_00584302
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 00584427
        ;   Label: LAB_00584427
    JL 0x00584439                       ; 0058442f
        ;   XREF to: 00584439 (CONDITIONAL_JUMP)  ; LAB_00584439
    XOR EBX,EBX                         ; 00584431
    MOV dword ptr [ESP + 0x54],EBX      ; 00584433
    JMP 0x0058440e                      ; 00584437
        ;   XREF to: 0058440e (UNCONDITIONAL_JUMP)  ; LAB_0058440e
    FLD float ptr [ESP + 0x4]           ; 00584439
        ;   Label: LAB_00584439
    CALL FUN_005a4b74                   ; 0058443d
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FSTP float ptr [ESP + 0x54]         ; 00584442
    JMP 0x0058440e                      ; 00584446
        ;   XREF to: 0058440e (UNCONDITIONAL_JUMP)  ; LAB_0058440e

