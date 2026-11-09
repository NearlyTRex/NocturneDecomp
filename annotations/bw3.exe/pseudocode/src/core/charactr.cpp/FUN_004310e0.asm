; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004310e0(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_charactr.cpp_FUN_00431660 at 0043190a
;   core_shadow.cpp_FUN_005438d0 at 0054473c
;
; Referenced Globals:
;   TerminatedCString s_s_tried_to_follow_NULL_a_005b83ec
;   TerminatedCString s_s_confused_while_followi_005b840c
;   TerminatedCString s_s_confused_after_pathmap_005b842c
;   undefined4 DAT_005b8466
;   undefined4 DAT_005b846e
;   undefined4 DAT_005b8476
;   undefined4 DAT_005b847e
;   undefined4 DAT_005b8486
;   undefined4 DAT_005b848e
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_vecdir.cpp_FUN_00576250
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004310e0
        ;   Label: core_charactr.cpp_FUN_004310e0
    PUSH ESI                            ; 004310e1
    PUSH EDI                            ; 004310e2
    PUSH EBP                            ; 004310e3
    MOV EBP,ESP                         ; 004310e4
    SUB ESP,0x64                        ; 004310e6
    AND ESP,0xfffffff8                  ; 004310e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004310ec
    MOV EDX,dword ptr [EBP + 0x18]      ; 004310ef
    TEST EDX,EDX                        ; 004310f2
    JZ 0x00431213                       ; 004310f4
        ;   XREF to: 00431213 (CONDITIONAL_JUMP)  ; LAB_00431213
    FLD float ptr [EBP + 0x1c]          ; 004310fa
    LEA EDI,[ESP + 0xc]                 ; 004310fd
    LEA ESI,[ESP + 0x30]                ; 00431101
    MOV EAX,EDX                         ; 00431105
    FLDZ                                ; 00431107
    FLD float ptr [EAX + 0x20]          ; 00431109
    FLD float ptr [EAX + 0x24]          ; 0043110c
    LEA EDX,[EBX + 0x20]                ; 0043110f
    FLD float ptr [EAX + 0x28]          ; 00431112
    FXCH ST2                            ; 00431115
    FSUB float ptr [EDX]                ; 00431117
    FXCH                                ; 00431119
    FSUB float ptr [EDX + 0x4]          ; 0043111b
    FXCH ST2                            ; 0043111e
    FSUB float ptr [EDX + 0x8]          ; 00431120
    FXCH                                ; 00431123
    FSTP float ptr [ESP + 0x30]         ; 00431125
    FXCH                                ; 00431129
    FSTP float ptr [ESP + 0x34]         ; 0043112b
    FSTP float ptr [ESP + 0x38]         ; 0043112f
    MOVSD ES:EDI,ESI                    ; 00431133
    MOVSD ES:EDI,ESI                    ; 00431134
    MOVSD ES:EDI,ESI                    ; 00431135
    FCOMPP                              ; 00431136
    FNSTSW AX                           ; 00431138
    SAHF                                ; 0043113a
    JA 0x00431238                       ; 0043113b
        ;   XREF to: 00431238 (CONDITIONAL_JUMP)  ; LAB_00431238
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00431141
    JNZ 0x00431189                      ; 00431148
        ;   XREF to: 00431189 (CONDITIONAL_JUMP)  ; LAB_00431189
    FLD float ptr [ESP + 0x10]          ; 0043114a
    FABS                                ; 0043114e
    FCOMP double ptr [0x005b8466]       ; 00431150 | DAT_005b8466
    FNSTSW AX                           ; 00431156
    SAHF                                ; 00431158
    JA 0x00431384                       ; 00431159
        ;   XREF to: 00431384 (CONDITIONAL_JUMP)  ; LAB_00431384
    FLD float ptr [ESP + 0xc]           ; 0043115f
    FABS                                ; 00431163
    FCOMP double ptr [0x005b846e]       ; 00431165 | DAT_005b846e
    FNSTSW AX                           ; 0043116b
    SAHF                                ; 0043116d
    JA 0x00431384                       ; 0043116e
        ;   XREF to: 00431384 (CONDITIONAL_JUMP)  ; LAB_00431384
    FLD float ptr [ESP + 0x14]          ; 00431174
    FABS                                ; 00431178
    FCOMP double ptr [0x005b846e]       ; 0043117a | DAT_005b846e
    FNSTSW AX                           ; 00431180
    SAHF                                ; 00431182
    JA 0x00431384                       ; 00431183
        ;   XREF to: 00431384 (CONDITIONAL_JUMP)  ; LAB_00431384
    FLD float ptr [ESP + 0xc]           ; 00431189
        ;   Label: LAB_00431189
    FMUL ST0                            ; 0043118d
    FLD float ptr [ESP + 0x14]          ; 0043118f
    FMUL ST0                            ; 00431193
    XOR EAX,EAX                         ; 00431195
    FADDP                               ; 00431197
    MOV dword ptr [ESP + 0x10],EAX      ; 00431199
    FSQRT                               ; 0043119d
    FLD float ptr [EBP + 0x20]          ; 0043119f
    FLDZ                                ; 004311a2
    FXCH ST2                            ; 004311a4
    FSTP float ptr [ESP + 0x48]         ; 004311a6
    FXCH                                ; 004311aa
    FCOMPP                              ; 004311ac
    FNSTSW AX                           ; 004311ae
    SAHF                                ; 004311b0
    JBE 0x004311ba                      ; 004311b1
        ;   XREF to: 004311ba (CONDITIONAL_JUMP)  ; LAB_004311ba
    MOV dword ptr [EBP + 0x20],0x7149f2ca ; 004311b3
    FLD float ptr [EBP + 0x1c]          ; 004311ba
        ;   Label: LAB_004311ba
    MOV EAX,dword ptr [EBP + 0x24]      ; 004311bd
    FMUL double ptr [0x005b8476]        ; 004311c0 | DAT_005b8476
    MOV ECX,dword ptr [EAX]             ; 004311c6
    FSTP float ptr [ESP + 0x58]         ; 004311c8
    TEST ECX,ECX                        ; 004311cc
    JNZ 0x004313ad                      ; 004311ce
        ;   XREF to: 004313ad (CONDITIONAL_JUMP)  ; LAB_004313ad
    FLD float ptr [EBP + 0x1c]          ; 004311d4
    FADD float ptr [ESP + 0x58]         ; 004311d7
    FSTP float ptr [EBP + 0x1c]         ; 004311db
        ;   Label: LAB_004311db
    FLD float ptr [EBP + 0x1c]          ; 004311de
        ;   Label: LAB_004311de
    FCOMP double ptr [0x005b847e]       ; 004311e1 | DAT_005b847e
    FNSTSW AX                           ; 004311e7
    SAHF                                ; 004311e9
    JNC 0x004311f3                      ; 004311ea
        ;   XREF to: 004311f3 (CONDITIONAL_JUMP)  ; LAB_004311f3
    MOV dword ptr [EBP + 0x1c],0x3c23d70a ; 004311ec
    FLD float ptr [ESP + 0x48]          ; 004311f3
        ;   Label: LAB_004311f3
    FCOMP float ptr [EBP + 0x1c]        ; 004311f7
    FNSTSW AX                           ; 004311fa
    SAHF                                ; 004311fc
    JNC 0x004313e4                      ; 004311fd
        ;   XREF to: 004313e4 (CONDITIONAL_JUMP)  ; LAB_004313e4
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431203
    MOV dword ptr [EAX],0x0             ; 00431206
    MOV ESP,EBP                         ; 0043120c
    POP EBP                             ; 0043120e
    POP EDI                             ; 0043120f
    POP ESI                             ; 00431210
    POP EBX                             ; 00431211
    RET                                 ; 00431212
    PUSH EBX                            ; 00431213
        ;   Label: LAB_00431213
    PUSH 0x5b83ec                       ; 00431214 | = "%s tried to follow NULL actor!\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00431219 | g_CConsolePtr
    PUSH ECX                            ; 0043121f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00431220
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00431225
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431228
    MOV dword ptr [EAX],0x3             ; 0043122b
    MOV ESP,EBP                         ; 00431231
    POP EBP                             ; 00431233
    POP EDI                             ; 00431234
    POP ESI                             ; 00431235
    POP EBX                             ; 00431236
    RET                                 ; 00431237
    LEA EAX,[ESP + 0xc]                 ; 00431238
        ;   Label: LAB_00431238
    XOR ESI,ESI                         ; 0043123c
    PUSH EAX                            ; 0043123e
    MOV dword ptr [ESP + 0x14],ESI      ; 0043123f
    PUSH EBX                            ; 00431243
    LEA ESI,[ESP + 0x8]                 ; 00431244
    LEA EDI,[ESP + 0x44]                ; 00431248
    CALL core_actor.cpp_FUN_00408b40    ; 0043124c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 00431251
    ADD ESP,0x8                         ; 00431255
    LEA EAX,[ESP + 0x3c]                ; 00431258
    MOVSD ES:EDI,ESI                    ; 0043125c
    MOVSD ES:EDI,ESI                    ; 0043125d
    MOVSD ES:EDI,ESI                    ; 0043125e
    PUSH EAX                            ; 0043125f
    LEA ESI,[ESP + 0x1c]                ; 00431260
    LEA EDI,[ESP + 0x28]                ; 00431264
    CALL core_vecdir.cpp_FUN_00576250   ; 00431268
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x1c]                ; 0043126d
    ADD ESP,0x4                         ; 00431271
    MOVSD ES:EDI,ESI                    ; 00431274
    MOVSD ES:EDI,ESI                    ; 00431275
    MOVSD ES:EDI,ESI                    ; 00431276
    MOV EAX,dword ptr [ESP + 0x28]      ; 00431277
    MOV dword ptr [EBX + 0x2508],EAX    ; 0043127b
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431281
    CMP dword ptr [EAX],0x0             ; 00431284
    JNZ 0x0043132b                      ; 00431287
        ;   XREF to: 0043132b (CONDITIONAL_JUMP)  ; LAB_0043132b
    FLD float ptr [EBX + 0x2508]        ; 0043128d
    FABS                                ; 00431293
    FCOMP double ptr [0x005b848e]       ; 00431295 | DAT_005b848e
    FNSTSW AX                           ; 0043129b
    SAHF                                ; 0043129d
    JBE 0x00431357                      ; 0043129e
        ;   XREF to: 00431357 (CONDITIONAL_JUMP)  ; LAB_00431357
    MOV EAX,dword ptr [EBP + 0x24]      ; 004312a4
        ;   Label: LAB_004312a4
    MOV dword ptr [EAX],0x1             ; 004312a7
    MOV EAX,dword ptr [EBX + 0x2508]    ; 004312ad
        ;   Label: LAB_004312ad
    MOV dword ptr [ESP + 0x5c],EAX      ; 004312b3
    MOV EAX,dword ptr [EBX + 0x2528]    ; 004312b7
    PUSH dword ptr [ESP + 0x5c]         ; 004312bd
    MOV dword ptr [ESP + 0x54],EAX      ; 004312c1
    CALL core_actor.cpp_FUN_0040cfa0    ; 004312c5
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x64],EAX      ; 004312ca
    FLD float ptr [ESP + 0x64]          ; 004312ce
    ADD ESP,0x4                         ; 004312d2
    FLD float ptr [ESP + 0x50]          ; 004312d5
    FXCH                                ; 004312d9
    FST float ptr [ESP + 0x5c]          ; 004312db
    FXCH                                ; 004312df
    FCHS                                ; 004312e1
    FSTP float ptr [ESP + 0x4c]         ; 004312e3
    FCOMP float ptr [ESP + 0x4c]        ; 004312e7
    FNSTSW AX                           ; 004312eb
    SAHF                                ; 004312ed
    JNC 0x00431365                      ; 004312ee
        ;   XREF to: 00431365 (CONDITIONAL_JUMP)  ; LAB_00431365
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004312f0
    MOV dword ptr [ESP + 0x54],EAX      ; 004312f4
        ;   Label: LAB_004312f4
    MOV EAX,dword ptr [ESP + 0x54]      ; 004312f8
    MOV dword ptr [EBX + 0x2508],EAX    ; 004312fc
    MOV dword ptr [EBX + 0x24a4],0x0    ; 00431302
        ;   Label: LAB_00431302
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0043130c
    MOV dword ptr [EBX + 0x24a0],EAX    ; 00431312
    MOV EAX,dword ptr [EBX + 0x24a0]    ; 00431318
    MOV dword ptr [EBX + 0x249c],EAX    ; 0043131e
    MOV ESP,EBP                         ; 00431324
    POP EBP                             ; 00431326
    POP EDI                             ; 00431327
    POP ESI                             ; 00431328
    POP EBX                             ; 00431329
    RET                                 ; 0043132a
    FLD float ptr [EBX + 0x2508]        ; 0043132b
        ;   Label: LAB_0043132b
    FABS                                ; 00431331
    FCOMP double ptr [0x005b8486]       ; 00431333 | DAT_005b8486
    FNSTSW AX                           ; 00431339
    SAHF                                ; 0043133b
    JNC 0x004312a4                      ; 0043133c
        ;   XREF to: 004312a4 (CONDITIONAL_JUMP)  ; LAB_004312a4
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431342
    MOV dword ptr [EAX],0x0             ; 00431345
    MOV dword ptr [EBX + 0x2508],0x0    ; 0043134b
        ;   Label: LAB_0043134b
    JMP 0x00431302                      ; 00431355
        ;   XREF to: 00431302 (UNCONDITIONAL_JUMP)  ; LAB_00431302
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431357
        ;   Label: LAB_00431357
    CMP dword ptr [EAX],0x1             ; 0043135a
    JZ 0x004312ad                       ; 0043135d
        ;   XREF to: 004312ad (CONDITIONAL_JUMP)  ; LAB_004312ad
    JMP 0x0043134b                      ; 00431363
        ;   XREF to: 0043134b (UNCONDITIONAL_JUMP)  ; LAB_0043134b
    FLD float ptr [ESP + 0x5c]          ; 00431365
        ;   Label: LAB_00431365
    FCOMP float ptr [ESP + 0x50]        ; 00431369
    FNSTSW AX                           ; 0043136d
    SAHF                                ; 0043136f
    JBE 0x0043137b                      ; 00431370
        ;   XREF to: 0043137b (CONDITIONAL_JUMP)  ; LAB_0043137b
    MOV EAX,dword ptr [ESP + 0x50]      ; 00431372
    JMP 0x004312f4                      ; 00431376
        ;   XREF to: 004312f4 (UNCONDITIONAL_JUMP)  ; LAB_004312f4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043137b
        ;   Label: LAB_0043137b
    JMP 0x004312f4                      ; 0043137f
        ;   XREF to: 004312f4 (UNCONDITIONAL_JUMP)  ; LAB_004312f4
    MOV ESI,dword ptr [EBP + 0x18]      ; 00431384
        ;   Label: LAB_00431384
    PUSH ESI                            ; 00431387
    PUSH EBX                            ; 00431388
    PUSH 0x5b840c                       ; 00431389 | = "%s confused while following %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0043138e | g_CConsolePtr
    PUSH EDI                            ; 00431394 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00431395
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x10                        ; 0043139a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043139d
    MOV dword ptr [EAX],0x3             ; 004313a0
    MOV ESP,EBP                         ; 004313a6
    POP EBP                             ; 004313a8
    POP EDI                             ; 004313a9
    POP ESI                             ; 004313aa
    POP EBX                             ; 004313ab
    RET                                 ; 004313ac
    CMP ECX,0x1                         ; 004313ad
        ;   Label: LAB_004313ad
    JNZ 0x004313cc                      ; 004313b0
        ;   XREF to: 004313cc (CONDITIONAL_JUMP)  ; LAB_004313cc
    FLD float ptr [EBP + 0x1c]          ; 004313b2
    FLD float ptr [ESP + 0x58]          ; 004313b5
    FLD float ptr [EBP + 0x20]          ; 004313b9
    FADD ST0,ST1                        ; 004313bc
    FXCH ST2                            ; 004313be
    FSUBRP                              ; 004313c0
    FXCH                                ; 004313c2
    FSTP float ptr [EBP + 0x20]         ; 004313c4
    JMP 0x004311db                      ; 004313c7
        ;   XREF to: 004311db (UNCONDITIONAL_JUMP)  ; LAB_004311db
    CMP ECX,0x2                         ; 004313cc
        ;   Label: LAB_004313cc
    JNZ 0x004311de                      ; 004313cf
        ;   XREF to: 004311de (CONDITIONAL_JUMP)  ; LAB_004311de
    FLD float ptr [EBP + 0x20]          ; 004313d5
    FSUB float ptr [ESP + 0x58]         ; 004313d8
    FSTP float ptr [EBP + 0x20]         ; 004313dc
    JMP 0x004311de                      ; 004313df
        ;   XREF to: 004311de (UNCONDITIONAL_JUMP)  ; LAB_004311de
    PUSH 0x0                            ; 004313e4
        ;   Label: LAB_004313e4
    PUSH 0x0                            ; 004313e6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004313e8
    PUSH 0x2cfd900                      ; 004313eb | DAT_02cfd900
    MOV EDX,dword ptr [EBP + 0x18]      ; 004313f0
    MOV EAX,dword ptr [EAX + 0x154]     ; 004313f3
    PUSH EDX                            ; 004313f9
    CALL dword ptr [EAX + 0xc4]         ; 004313fa
    ADD ESP,0x4                         ; 00431400
    PUSH EAX                            ; 00431403
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431404
    ADD EAX,0x20                        ; 00431407
    PUSH EAX                            ; 0043140a
    PUSH EBX                            ; 0043140b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0043140c
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00431411
    TEST EAX,EAX                        ; 00431414
    JL 0x00431434                       ; 00431416
        ;   XREF to: 00431434 (CONDITIONAL_JUMP)  ; LAB_00431434
    FLD float ptr [ESP + 0x48]          ; 00431418
    FCOMP float ptr [EBP + 0x20]        ; 0043141c
    FNSTSW AX                           ; 0043141f
    SAHF                                ; 00431421
    JBE 0x0043145d                      ; 00431422
        ;   XREF to: 0043145d (CONDITIONAL_JUMP)  ; LAB_0043145d
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431424
    MOV dword ptr [EAX],0x2             ; 00431427
    MOV ESP,EBP                         ; 0043142d
    POP EBP                             ; 0043142f
    POP EDI                             ; 00431430
    POP ESI                             ; 00431431
    POP EBX                             ; 00431432
    RET                                 ; 00431433
    MOV ECX,dword ptr [EBP + 0x18]      ; 00431434
        ;   Label: LAB_00431434
    PUSH ECX                            ; 00431437
    PUSH EBX                            ; 00431438
    PUSH 0x5b842c                       ; 00431439 | = "%s confused after pathmap call while ..."
    MOV EBX,dword ptr [0x005f1690]      ; 0043143e | g_CConsolePtr
    PUSH EBX                            ; 00431444 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00431445
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x10                        ; 0043144a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043144d
    MOV dword ptr [EAX],0x3             ; 00431450
    MOV ESP,EBP                         ; 00431456
    POP EBP                             ; 00431458
    POP EDI                             ; 00431459
    POP ESI                             ; 0043145a
    POP EBX                             ; 0043145b
    RET                                 ; 0043145c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043145d
        ;   Label: LAB_0043145d
    MOV dword ptr [EAX],0x1             ; 00431460
    MOV ESP,EBP                         ; 00431466
    POP EBP                             ; 00431468
    POP EDI                             ; 00431469
    POP ESI                             ; 0043146a
    POP EBX                             ; 0043146b
    RET                                 ; 0043146c

