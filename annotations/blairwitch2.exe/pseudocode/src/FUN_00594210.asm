; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00594210(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eedd2
;   undefined4 DAT_005eedd6
;   undefined4 DAT_005eedda
;   undefined4 DAT_005eedde
;   undefined4 DAT_005eede2
;   undefined4 DAT_005eede6
;
; Called Functions:
;   FUN_005b98f6
;   FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594210
        ;   Label: FUN_00594210
    PUSH EDI                            ; 00594211
    PUSH EBP                            ; 00594212
    MOV EBP,ESP                         ; 00594213
    SUB ESP,0x14                        ; 00594215
    AND ESP,0xfffffff8                  ; 00594218
    MOV EDX,dword ptr [EBP + 0x10]      ; 0059421b
    MOV ECX,ESI                         ; 0059421e
    FLD float ptr [EDX + 0x8]           ; 00594220
    FMUL float ptr [EDX + 0xc]          ; 00594223
    FLD float ptr [EDX]                 ; 00594226
    FCHS                                ; 00594228
    FMUL float ptr [EDX + 0x4]          ; 0059422a
    FSUBRP                              ; 0059422d
    FMUL float ptr [0x005eedd2]         ; 0059422f | DAT_005eedd2
    FST float ptr [ESP]                 ; 00594235
    FCOMP float ptr [0x005eedd6]        ; 00594238 | DAT_005eedd6
    FNSTSW AX                           ; 0059423e
    SAHF                                ; 00594240
    JC 0x005942de                       ; 00594241
        ;   XREF to: 005942de (CONDITIONAL_JUMP)  ; LAB_005942de
    FLD float ptr [ESP]                 ; 00594247
    FCOMP float ptr [0x005eedda]        ; 0059424a | DAT_005eedda
    FNSTSW AX                           ; 00594250
    SAHF                                ; 00594252
    JA 0x00594327                       ; 00594253
        ;   XREF to: 00594327 (CONDITIONAL_JUMP)  ; LAB_00594327
    FLD float ptr [ESP]                 ; 00594259
    CALL FUN_005b98f6                   ; 0059425c
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98f6()
    FST float ptr [ESP + 0x4]           ; 00594261
    FCOMP float ptr [0x005eedde]        ; 00594265 | DAT_005eedde
    FNSTSW AX                           ; 0059426b
    SAHF                                ; 0059426d
    JNC 0x0059427e                      ; 0059426e
        ;   XREF to: 0059427e (CONDITIONAL_JUMP)  ; LAB_0059427e
    FLD float ptr [ESP + 0x4]           ; 00594270
    FADD float ptr [0x005eede2]         ; 00594274 | DAT_005eede2
    FSTP float ptr [ESP + 0x4]          ; 0059427a
    FLD float ptr [EDX + 0x4]           ; 0059427e
        ;   Label: LAB_0059427e
    FMUL ST0                            ; 00594281
    FLD float ptr [EDX + 0x8]           ; 00594283
    FMUL ST0                            ; 00594286
    FXCH                                ; 00594288
    FSUBR float ptr [0x005eede6]        ; 0059428a | DAT_005eede6
    FXCH                                ; 00594290
    FSUBR ST0,ST1                       ; 00594292
    FLD float ptr [EDX + 0x4]           ; 00594294
    FMUL float ptr [EDX + 0xc]          ; 00594297
    FLD float ptr [EDX]                 ; 0059429a
    FMUL float ptr [EDX + 0x8]          ; 0059429c
    FSUBP                               ; 0059429f
    CALL FUN_005b9989                   ; 005942a1
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    FLD float ptr [EDX + 0xc]           ; 005942a6
    FMUL ST0                            ; 005942a9
    FSUBP ST2,ST0                       ; 005942ab
    FLD float ptr [EDX + 0x4]           ; 005942ad
    FMUL float ptr [EDX + 0x8]          ; 005942b0
    FLD float ptr [EDX]                 ; 005942b3
    FMUL float ptr [EDX + 0xc]          ; 005942b5
    FSUBP                               ; 005942b8
    FLD ST2                             ; 005942ba
    FXCH                                ; 005942bc
    CALL FUN_005b9989                   ; 005942be
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    FSTP ST2                            ; 005942c3
    FSTP float ptr [ESP + 0x8]          ; 005942c5
    FSTP float ptr [ESP + 0xc]          ; 005942c9
    LEA ESI,[ESP + 0x4]                 ; 005942cd
    MOV EDI,ECX                         ; 005942d1
    MOVSD ES:EDI,ESI                    ; 005942d3
    MOVSD ES:EDI,ESI                    ; 005942d4
    MOVSD ES:EDI,ESI                    ; 005942d5
    MOV EAX,ECX                         ; 005942d6
    MOV ESP,EBP                         ; 005942d8
    POP EBP                             ; 005942da
    POP EDI                             ; 005942db
    POP EBX                             ; 005942dc
    RET                                 ; 005942dd
    FLD float ptr [EDX + 0x8]           ; 005942de
        ;   Label: LAB_005942de
    FMUL ST0                            ; 005942e1
    FSUBR float ptr [0x005eede6]        ; 005942e3 | DAT_005eede6
    FLD float ptr [EDX + 0xc]           ; 005942e9
    FMUL ST0                            ; 005942ec
    FSUBP                               ; 005942ee
    FLD float ptr [EDX + 0x4]           ; 005942f0
    FCHS                                ; 005942f3
    FMUL float ptr [EDX + 0xc]          ; 005942f5
    FLD float ptr [EDX]                 ; 005942f8
    FMUL float ptr [EDX + 0x8]          ; 005942fa
    FSUBP                               ; 005942fd
    CALL FUN_005b9989                   ; 005942ff
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 00594304
    XOR EAX,EAX                         ; 0059430c
    FSTP float ptr [ESP + 0x8]          ; 0059430e
    MOV dword ptr [ESP + 0xc],EAX       ; 00594312
    LEA ESI,[ESP + 0x4]                 ; 00594316
    MOV EDI,ECX                         ; 0059431a
    MOVSD ES:EDI,ESI                    ; 0059431c
    MOVSD ES:EDI,ESI                    ; 0059431d
    MOVSD ES:EDI,ESI                    ; 0059431e
    MOV EAX,ECX                         ; 0059431f
    MOV ESP,EBP                         ; 00594321
    POP EBP                             ; 00594323
    POP EDI                             ; 00594324
    POP EBX                             ; 00594325
    RET                                 ; 00594326
    FLD float ptr [EDX + 0x8]           ; 00594327
        ;   Label: LAB_00594327
    FMUL ST0                            ; 0059432a
    FSUBR float ptr [0x005eede6]        ; 0059432c | DAT_005eede6
    FLD float ptr [EDX + 0xc]           ; 00594332
    FMUL ST0                            ; 00594335
    FSUBP                               ; 00594337
    FLD float ptr [EDX + 0x4]           ; 00594339
    FCHS                                ; 0059433c
    FMUL float ptr [EDX + 0xc]          ; 0059433e
    FLD float ptr [EDX]                 ; 00594341
    FMUL float ptr [EDX + 0x8]          ; 00594343
    FSUBP                               ; 00594346
    CALL FUN_005b9989                   ; 00594348
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    MOV EBX,0x3fc90fdb                  ; 0059434d
    XOR ESI,ESI                         ; 00594352
    MOV dword ptr [ESP + 0x4],EBX       ; 00594354
    MOV dword ptr [ESP + 0xc],ESI       ; 00594358
    FSTP float ptr [ESP + 0x8]          ; 0059435c
    LEA ESI,[ESP + 0x4]                 ; 00594360
    MOV EDI,ECX                         ; 00594364
    MOVSD ES:EDI,ESI                    ; 00594366
    MOVSD ES:EDI,ESI                    ; 00594367
    MOVSD ES:EDI,ESI                    ; 00594368
    MOV EAX,ECX                         ; 00594369
    MOV ESP,EBP                         ; 0059436b
    POP EBP                             ; 0059436d
    POP EDI                             ; 0059436e
    POP EBX                             ; 0059436f
    RET                                 ; 00594370

