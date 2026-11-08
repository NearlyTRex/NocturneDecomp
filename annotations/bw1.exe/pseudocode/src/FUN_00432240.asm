; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00432240(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
;
; XREF[39]:
;   FUN_0040eaa0 at 0040eb2e
;   FUN_0040f4d0 at 0040f607
;   FUN_004115b0 at 00411688
;   FUN_00412ba0 at 00412c75
;   FUN_00414b30 at 00414bb2
;   FUN_00415340 at 0041546c
;   FUN_0041bb40 at 0041bf8e
;   FUN_00428ae0 at 004296c1
;   FUN_00445cb0 at 00446597
;   FUN_00448570 at 00448613
;   ... and 29 more
;
; Referenced Globals:
;   undefined4 s_pB_s_can_t_figure_out_ne_005d5b75+2
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c992fc
;
; Called Functions:
;   FUN_00408bb0
;   FUN_0040c600
;   FUN_0040cd60
;   FUN_0042ccf0
;   FUN_00431cc0
;   FUN_004354a0
;   FUN_00445430
;   FUN_00478860
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432240
        ;   Label: FUN_00432240
    PUSH ESI                            ; 00432241
    PUSH EDI                            ; 00432242
    PUSH EBP                            ; 00432243
    SUB ESP,0x5c                        ; 00432244
    MOV EBX,dword ptr [ESP + 0x70]      ; 00432247
    CMP dword ptr [EBX + 0x2704],0x0    ; 0043224b
    JNZ 0x00432261                      ; 00432252
        ;   XREF to: 00432261 (CONDITIONAL_JUMP)  ; LAB_00432261
    CMP dword ptr [EBX + 0x2740],0x0    ; 00432254
    JZ 0x00432316                       ; 0043225b
        ;   XREF to: 00432316 (CONDITIONAL_JUMP)  ; LAB_00432316
    FLD float ptr [EBX + 0x2710]        ; 00432261
        ;   Label: LAB_00432261
    FLDZ                                ; 00432267
    FCOMPP                              ; 00432269
    FNSTSW AX                           ; 0043226b
    SAHF                                ; 0043226d
    JA 0x00432320                       ; 0043226e
        ;   XREF to: 00432320 (CONDITIONAL_JUMP)  ; LAB_00432320
    FLD float ptr [EBX + 0x2710]        ; 00432274
    FSUB float ptr [ESP + 0x74]         ; 0043227a
    FST float ptr [EBX + 0x2710]        ; 0043227e
    FLDZ                                ; 00432284
    FCOMPP                              ; 00432286
    FNSTSW AX                           ; 00432288
    SAHF                                ; 0043228a
    JC 0x00432320                       ; 0043228b
        ;   XREF to: 00432320 (CONDITIONAL_JUMP)  ; LAB_00432320
    MOV dword ptr [EBX + 0x2710],0x0    ; 00432291
    MOV EDX,dword ptr [EBX + 0x2704]    ; 0043229b
    MOV dword ptr [EBX + 0x273c],0x0    ; 004322a1
    LEA EAX,[EBX + 0x20]                ; 004322ab
    MOV ECX,dword ptr [EDX + 0x20]      ; 004322ae
    MOV dword ptr [EAX],ECX             ; 004322b1
    MOV ECX,dword ptr [EDX + 0x24]      ; 004322b3
    MOV dword ptr [EAX + 0x4],ECX       ; 004322b6
    MOV ECX,dword ptr [EDX + 0x28]      ; 004322b9
    MOV dword ptr [EAX + 0x8],ECX       ; 004322bc
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004322bf
    MOV dword ptr [EAX + 0xc],EDX       ; 004322c2
    MOV EDX,dword ptr [EBX + 0x2704]    ; 004322c5
    LEA EAX,[EBX + 0x30]                ; 004322cb
    ADD EDX,0x30                        ; 004322ce
    CMP EAX,EDX                         ; 004322d1
    JZ 0x004322e5                       ; 004322d3
        ;   XREF to: 004322e5 (CONDITIONAL_JUMP)  ; LAB_004322e5
    MOV ECX,dword ptr [EDX]             ; 004322d5
    MOV dword ptr [EAX],ECX             ; 004322d7
    MOV ECX,dword ptr [EDX + 0x4]       ; 004322d9
    MOV dword ptr [EAX + 0x4],ECX       ; 004322dc
    MOV ECX,dword ptr [EDX + 0x8]       ; 004322df
    MOV dword ptr [EAX + 0x8],ECX       ; 004322e2
    MOV EDI,dword ptr [EBX + 0x2740]    ; 004322e5
        ;   Label: LAB_004322e5
    MOV dword ptr [EBX + 0x2704],0x0    ; 004322eb
    TEST EDI,EDI                        ; 004322f5
    JZ 0x00432309                       ; 004322f7
        ;   XREF to: 00432309 (CONDITIONAL_JUMP)  ; LAB_00432309
    PUSH EBX                            ; 004322f9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004322fa
    CALL dword ptr [EAX + 0x120]        ; 00432300
    ADD ESP,0x4                         ; 00432306
    MOV EAX,0x1                         ; 00432309
        ;   Label: LAB_00432309
    ADD ESP,0x5c                        ; 0043230e
    POP EBP                             ; 00432311
    POP EDI                             ; 00432312
    POP ESI                             ; 00432313
    POP EBX                             ; 00432314
    RET                                 ; 00432315
    XOR EAX,EAX                         ; 00432316
        ;   Label: LAB_00432316
    ADD ESP,0x5c                        ; 00432318
    POP EBP                             ; 0043231b
    POP EDI                             ; 0043231c
    POP ESI                             ; 0043231d
    POP EBX                             ; 0043231e
    RET                                 ; 0043231f
    MOV ESI,dword ptr [EBX + 0x2740]    ; 00432320
        ;   Label: LAB_00432320
    TEST ESI,ESI                        ; 00432326
    JZ 0x004324b2                       ; 00432328
        ;   XREF to: 004324b2 (CONDITIONAL_JUMP)  ; LAB_004324b2
    LEA EAX,[EBX + 0x20]                ; 0043232e
    PUSH EAX                            ; 00432331
    LEA EAX,[EBX + 0x2744]              ; 00432332
    PUSH EAX                            ; 00432338
    PUSH ESI                            ; 00432339
    LEA ESI,[ESP + 0x30]                ; 0043233a
    CALL FUN_00478860                   ; 0043233e
        ;   XREF to: 00478860 (UNCONDITIONAL_CALL)  ; undefined FUN_00478860()
    ADD ESP,0xc                         ; 00432343
    LEA EDI,[ESP + 0x3c]                ; 00432346
    PUSH 0x0                            ; 0043234a
    LEA ESI,[ESP + 0x28]                ; 0043234c
    PUSH 0x0                            ; 00432350
    MOVSD ES:EDI,ESI                    ; 00432352
    MOVSD ES:EDI,ESI                    ; 00432353
    MOVSD ES:EDI,ESI                    ; 00432354
    PUSH 0x2c8af28                      ; 00432355 | DAT_02c8af28
    MOV EAX,dword ptr [EBX + 0x2740]    ; 0043235a
    PUSH EAX                            ; 00432360
    MOV EDX,dword ptr [EAX + 0x154]     ; 00432361
    CALL dword ptr [EDX + 0xc4]         ; 00432367
    ADD ESP,0x4                         ; 0043236d
    PUSH EAX                            ; 00432370
    LEA EAX,[ESP + 0x4c]                ; 00432371
    PUSH EAX                            ; 00432375
    PUSH EBX                            ; 00432376
    CALL FUN_0042ccf0                   ; 00432377
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 0043237c
    TEST EAX,EAX                        ; 0043237f
    JL 0x0043245c                       ; 00432381
        ;   XREF to: 0043245c (CONDITIONAL_JUMP)  ; LAB_0043245c
    JLE 0x0043249b                      ; 00432387
        ;   XREF to: 0043249b (CONDITIONAL_JUMP)  ; LAB_0043249b
    MOV EAX,dword ptr [EBX + 0x2740]    ; 0043238d
    ADD EAX,0x9bc                       ; 00432393
    PUSH EAX                            ; 00432398
    PUSH EBX                            ; 00432399
    LEA ESI,[ESP + 0x20]                ; 0043239a
    LEA EDI,[ESP + 0x8]                 ; 0043239e
    CALL FUN_00408bb0                   ; 004323a2
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x20]                ; 004323a7
    ADD ESP,0x8                         ; 004323ab
    MOV EAX,ESP                         ; 004323ae
    MOVSD ES:EDI,ESI                    ; 004323b0
    MOVSD ES:EDI,ESI                    ; 004323b1
    MOVSD ES:EDI,ESI                    ; 004323b2
    PUSH EAX                            ; 004323b3
    LEA ESI,[ESP + 0x34]                ; 004323b4
    LEA EDI,[ESP + 0x10]                ; 004323b8
    CALL FUN_005a7520                   ; 004323bc
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x34]                ; 004323c1
    ADD ESP,0x4                         ; 004323c5
    MOVSD ES:EDI,ESI                    ; 004323c8
    MOVSD ES:EDI,ESI                    ; 004323c9
    MOVSD ES:EDI,ESI                    ; 004323ca
    MOV EAX,dword ptr [ESP + 0x10]      ; 004323cb
    MOV dword ptr [EBX + 0x2508],EAX    ; 004323cf
    CMP EAX,0x3f20d97c                  ; 004323d5
    JGE 0x00432473                      ; 004323da
        ;   XREF to: 00432473 (CONDITIONAL_JUMP)  ; LAB_00432473
    PUSH EBX                            ; 004323e0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004323e1
    MOV dword ptr [EBX + 0x273c],0x0    ; 004323e7
    CALL dword ptr [EAX + 0x120]        ; 004323f1
    ADD ESP,0x4                         ; 004323f7
    MOV EAX,dword ptr [EBX + 0x2508]    ; 004323fa
        ;   Label: LAB_004323fa
    MOV dword ptr [ESP + 0x54],EAX      ; 00432400
    MOV EAX,dword ptr [EBX + 0x2528]    ; 00432404
    PUSH dword ptr [ESP + 0x54]         ; 0043240a
    MOV dword ptr [ESP + 0x54],EAX      ; 0043240e
    CALL FUN_0040cd60                   ; 00432412
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x5c],EAX      ; 00432417
    FLD float ptr [ESP + 0x5c]          ; 0043241b
    ADD ESP,0x4                         ; 0043241f
    FLD float ptr [ESP + 0x50]          ; 00432422
    FXCH                                ; 00432426
    FST float ptr [ESP + 0x54]          ; 00432428
    FXCH                                ; 0043242c
    FCHS                                ; 0043242e
    FSTP float ptr [ESP + 0x48]         ; 00432430
    FCOMP float ptr [ESP + 0x48]        ; 00432434
    FNSTSW AX                           ; 00432438
    SAHF                                ; 0043243a
    JNC 0x00432482                      ; 0043243b
        ;   XREF to: 00432482 (CONDITIONAL_JUMP)  ; LAB_00432482
    MOV EAX,dword ptr [ESP + 0x48]      ; 0043243d
    MOV dword ptr [ESP + 0x4c],EAX      ; 00432441
        ;   Label: LAB_00432441
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00432445
    MOV dword ptr [EBX + 0x2508],EAX    ; 00432449
    MOV EAX,0x1                         ; 0043244f
    ADD ESP,0x5c                        ; 00432454
    POP EBP                             ; 00432457
    POP EDI                             ; 00432458
    POP ESI                             ; 00432459
    POP EBX                             ; 0043245a
    RET                                 ; 0043245b
    MOV dword ptr [EBX + 0x273c],0x3    ; 0043245c
        ;   Label: LAB_0043245c
    MOV EAX,0x1                         ; 00432466
    ADD ESP,0x5c                        ; 0043246b
    POP EBP                             ; 0043246e
    POP EDI                             ; 0043246f
    POP ESI                             ; 00432470
    POP EBX                             ; 00432471
    RET                                 ; 00432472
    MOV dword ptr [EBX + 0x273c],0x1    ; 00432473
        ;   Label: LAB_00432473
    JMP 0x004323fa                      ; 0043247d
        ;   XREF to: 004323fa (UNCONDITIONAL_JUMP)  ; LAB_004323fa
    FLD float ptr [ESP + 0x54]          ; 00432482
        ;   Label: LAB_00432482
    FCOMP float ptr [ESP + 0x50]        ; 00432486
    FNSTSW AX                           ; 0043248a
    SAHF                                ; 0043248c
    JBE 0x00432495                      ; 0043248d
        ;   XREF to: 00432495 (CONDITIONAL_JUMP)  ; LAB_00432495
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043248f
    JMP 0x00432441                      ; 00432493
        ;   XREF to: 00432441 (UNCONDITIONAL_JUMP)  ; LAB_00432441
    MOV EAX,dword ptr [ESP + 0x54]      ; 00432495
        ;   Label: LAB_00432495
    JMP 0x00432441                      ; 00432499
        ;   XREF to: 00432441 (UNCONDITIONAL_JUMP)  ; LAB_00432441
    MOV dword ptr [EBX + 0x273c],0x1    ; 0043249b
        ;   Label: LAB_0043249b
    MOV EAX,0x1                         ; 004324a5
    ADD ESP,0x5c                        ; 004324aa
    POP EBP                             ; 004324ad
    POP EDI                             ; 004324ae
    POP ESI                             ; 004324af
    POP EBX                             ; 004324b0
    RET                                 ; 004324b1
    FLD float ptr [EBX + 0x2708]        ; 004324b2
        ;   Label: LAB_004324b2
    FLDZ                                ; 004324b8
    MOV ESI,dword ptr [EBX + 0x2704]    ; 004324ba
    FCOMPP                              ; 004324c0
    FNSTSW AX                           ; 004324c2
    SAHF                                ; 004324c4
    JA 0x004324d0                       ; 004324c5
        ;   XREF to: 004324d0 (CONDITIONAL_JUMP)  ; LAB_004324d0
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004324c7
    JZ 0x004324fa                       ; 004324ce
        ;   XREF to: 004324fa (CONDITIONAL_JUMP)  ; LAB_004324fa
    LEA EAX,[EBX + 0x273c]              ; 004324d0
        ;   Label: LAB_004324d0
    PUSH EAX                            ; 004324d6
    PUSH dword ptr [EBX + 0x270c]       ; 004324d7
    PUSH dword ptr [EBX + 0x2708]       ; 004324dd
    PUSH ESI                            ; 004324e3
    PUSH EBX                            ; 004324e4
    CALL FUN_00431cc0                   ; 004324e5
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00431cc0()
    ADD ESP,0x14                        ; 004324ea
    MOV EAX,0x1                         ; 004324ed
    ADD ESP,0x5c                        ; 004324f2
    POP EBP                             ; 004324f5
    POP EDI                             ; 004324f6
    POP ESI                             ; 004324f7
    POP EBX                             ; 004324f8
    RET                                 ; 004324f9
    MOV EBP,dword ptr [0x02c992fc]      ; 004324fa | DAT_02c992fc
        ;   Label: LAB_004324fa
    PUSH EBP                            ; 00432500
    PUSH ESI                            ; 00432501
    CALL FUN_0040c600                   ; 00432502
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 00432507
    TEST EAX,EAX                        ; 0043250a
    JZ 0x004324d0                       ; 0043250c
        ;   XREF to: 004324d0 (CONDITIONAL_JUMP)  ; LAB_004324d0
    PUSH EAX                            ; 0043250e
    PUSH EBX                            ; 0043250f
    CALL FUN_004354a0                   ; 00432510
        ;   XREF to: 004354a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004354a0()
    ADD ESP,0x8                         ; 00432515
    MOV ESI,EAX                         ; 00432518
    TEST EAX,EAX                        ; 0043251a
    JNZ 0x004324d0                      ; 0043251c
        ;   XREF to: 004324d0 (CONDITIONAL_JUMP)  ; LAB_004324d0
    MOV EAX,dword ptr [EBX + 0x2704]    ; 0043251e
    PUSH EAX                            ; 00432524
    PUSH EBX                            ; 00432525
    PUSH 0x5d5b77                       ; 00432526 | s_pB_s_can_t_figure_out_ne_005d5b75+2
    MOV EDX,dword ptr [0x00611100]      ; 0043252b | PTR_DAT_00611100
    PUSH EDX                            ; 00432531 | DAT_007db5f0
    CALL FUN_00445430                   ; 00432532
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    MOV EAX,0x1                         ; 00432537
    ADD ESP,0x10                        ; 0043253c
    ADD ESP,0x5c                        ; 0043253f
    POP EBP                             ; 00432542
    POP EDI                             ; 00432543
    POP ESI                             ; 00432544
    POP EBX                             ; 00432545
    RET                                 ; 00432546

