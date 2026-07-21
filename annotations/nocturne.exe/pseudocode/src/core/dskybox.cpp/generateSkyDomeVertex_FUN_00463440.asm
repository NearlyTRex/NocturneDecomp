; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(undefined4 *param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dskybox.cpp_renderSkyDome_FUN_00463580 at 004638ac
;
; Referenced Globals:
;   undefined4 s__0057df76+0xc
;   undefined4 DAT_0057df86
;   undefined4 DAT_0057df8e
;   undefined4 DAT_0057df96
;   undefined4 DAT_0057df9e
;   undefined4 DAT_0057dfa6
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b0678
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463440
        ;   Label: core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440
    PUSH ESI                            ; 00463441
    PUSH EDI                            ; 00463442
    PUSH EBP                            ; 00463443
    MOV EBP,ESP                         ; 00463444
    SUB ESP,0x34                        ; 00463446
    AND ESP,0xfffffff8                  ; 00463449
    MOV EDI,dword ptr [EBP + 0x14]      ; 0046344c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046344f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00463452
    MOV dword ptr [ESP + 0x30],EDX      ; 00463455
    FILD dword ptr [ESP + 0x30]         ; 00463459
    FMUL float ptr [0x0057df82]         ; 0046345d | s__0057df76+0xc
    FMUL double ptr [0x0057df86]        ; 00463463 | DAT_0057df86
    FMUL double ptr [0x0057df8e]        ; 00463469 | DAT_0057df8e
    FSTP float ptr [ESP + 0x2c]         ; 0046346f
    TEST EAX,EAX                        ; 00463473
    JNZ 0x00463559                      ; 00463475
        ;   XREF to: 00463559 (CONDITIONAL_JUMP)  ; LAB_00463559
    MOV dword ptr [ESP],0x3ca0d97c      ; 0046347b
    FLD float ptr [ESP]                 ; 00463482
        ;   Label: LAB_00463482
    FLD ST0                             ; 00463485
    FSIN                                ; 00463487
    FLD float ptr [ESP + 0x2c]          ; 00463489
    FADD float ptr [EDI + 0x1c]         ; 0046348d
    FLD ST0                             ; 00463490
    FSIN                                ; 00463492
    FXCH ST3                            ; 00463494
    FCOS                                ; 00463496
    FXCH                                ; 00463498
    FCOS                                ; 0046349a
    FLD float ptr [0x005b0678]          ; 0046349c | DAT_005b0678
    FXCH ST4                            ; 004634a2
    FMUL ST4                            ; 004634a4
    FXCH ST2                            ; 004634a6
    FSTP double ptr [ESP + 0x10]        ; 004634a8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004634ac
    FMUL ST3                            ; 004634b0
    MOV dword ptr [ESP + 0x18],EAX      ; 004634b2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004634b6
    FXCH ST2                            ; 004634ba
    FMULP ST3                           ; 004634bc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004634be
    FLD ST0                             ; 004634c2
    FMUL double ptr [ESP + 0x18]        ; 004634c4
    FLD ST2                             ; 004634c8
    FMUL double ptr [ESP + 0x18]        ; 004634ca
    FXCH ST4                            ; 004634ce
    FLD double ptr [0x0057dfa6]         ; 004634d0 | DAT_0057dfa6
    FXCH                                ; 004634d6
    FMUL ST1                            ; 004634d8
    FXCH ST2                            ; 004634da
    FSTP ST3                            ; 004634dc
    FXCH ST2                            ; 004634de
    FMUL ST2                            ; 004634e0
    FXCH ST4                            ; 004634e2
    FSTP ST3                            ; 004634e4
    FXCH ST2                            ; 004634e6
    FMULP                               ; 004634e8
    MOV ESI,dword ptr [EBP + 0x20]      ; 004634ea
    LEA EAX,[ESP + 0x4]                 ; 004634ed
    MOV EDX,dword ptr [0x005ae704]      ; 004634f1 | DAT_005ae704
    PUSH EAX                            ; 004634f7
    FXCH                                ; 004634f8
    CALL crt_math.c_round_FUN_00563a30  ; 004634fa
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    LEA EAX,[ESI*0x4 + 0x0]             ; 004634ff
    FISTP dword ptr [ESP + 0xc]         ; 00463506
    SUB EAX,ESI                         ; 0046350a
    FXCH                                ; 0046350c
    CALL crt_math.c_round_FUN_00563a30  ; 0046350e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00463513
    CALL crt_math.c_round_FUN_00563a30  ; 00463515
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0046351a
    FISTP dword ptr [ESP + 0x8]         ; 0046351c
    MOV ESI,EAX                         ; 00463520
    FISTP dword ptr [ESP + 0x10]        ; 00463522
    SHL ESI,0x4                         ; 00463526
    MOV EAX,dword ptr [EDX]             ; 00463529
    ADD EAX,ESI                         ; 0046352b
    PUSH EAX                            ; 0046352d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0046352e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,dword ptr [EDI]             ; 00463533
    MOV dword ptr [ESI + 0x5c5034],EAX  ; 00463535 | DAT_005c5034
    MOV dword ptr [ESI + 0x5c5038],EAX  ; 0046353b | DAT_005c5038
    XOR ECX,ECX                         ; 00463541
    MOV dword ptr [ESI + 0x5c503c],EAX  ; 00463543 | DAT_005c503c
    ADD ESP,0x8                         ; 00463549
    MOV dword ptr [ESI + 0x5c5040],ECX  ; 0046354c | DAT_005c5040
    MOV ESP,EBP                         ; 00463552
    POP EBP                             ; 00463554
    POP EDI                             ; 00463555
    POP ESI                             ; 00463556
    POP EBX                             ; 00463557
    RET                                 ; 00463558
    MOV dword ptr [ESP + 0x30],EAX      ; 00463559
        ;   Label: LAB_00463559
    FILD dword ptr [ESP + 0x30]         ; 0046355d
    FMUL float ptr [0x0057df96]         ; 00463561 | DAT_0057df96
    FMUL double ptr [0x0057df86]        ; 00463567 | DAT_0057df86
    FMUL double ptr [0x0057df9e]        ; 0046356d | DAT_0057df9e
    FSTP float ptr [ESP]                ; 00463573
    JMP 0x00463482                      ; 00463576
        ;   XREF to: 00463482 (UNCONDITIONAL_JUMP)  ; LAB_00463482

