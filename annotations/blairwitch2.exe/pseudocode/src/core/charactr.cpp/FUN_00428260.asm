; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00428260(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)
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
; XREF[4]:
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 at 00428a43
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d22d0
;   core_shadow.cpp_FUN_0053c500 at 0053d2d5
;   core_vampboss.cpp_CVampireBoss_process_FUN_00581910 at 00582c11
;
; Referenced Globals:
;   TerminatedCString s_s_tried_to_follow_NULL_a_005cce14
;   TerminatedCString s_s_confused_while_followi_005cce34
;   TerminatedCString s_s_confused_after_pathmap_005cce54
;   undefined4 DAT_005cce8e
;   undefined4 DAT_005cce96
;   undefined4 DAT_005cce9e
;   undefined4 DAT_005ccea6
;   undefined4 DAT_005cceae
;   undefined4 DAT_005cceb6
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428260
        ;   Label: core_charactr.cpp_FUN_00428260
    PUSH ESI                            ; 00428261
    PUSH EDI                            ; 00428262
    PUSH EBP                            ; 00428263
    MOV EBP,ESP                         ; 00428264
    SUB ESP,0x64                        ; 00428266
    AND ESP,0xfffffff8                  ; 00428269
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042826c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0042826f
    TEST EDX,EDX                        ; 00428272
    JZ 0x00428393                       ; 00428274
        ;   XREF to: 00428393 (CONDITIONAL_JUMP)  ; LAB_00428393
    FLD float ptr [EBP + 0x1c]          ; 0042827a
    LEA EDI,[ESP + 0xc]                 ; 0042827d
    LEA ESI,[ESP + 0x30]                ; 00428281
    MOV EAX,EDX                         ; 00428285
    FLDZ                                ; 00428287
    FLD float ptr [EAX + 0x20]          ; 00428289
    FLD float ptr [EAX + 0x24]          ; 0042828c
    LEA EDX,[EBX + 0x20]                ; 0042828f
    FLD float ptr [EAX + 0x28]          ; 00428292
    FXCH ST2                            ; 00428295
    FSUB float ptr [EDX]                ; 00428297
    FXCH                                ; 00428299
    FSUB float ptr [EDX + 0x4]          ; 0042829b
    FXCH ST2                            ; 0042829e
    FSUB float ptr [EDX + 0x8]          ; 004282a0
    FXCH                                ; 004282a3
    FSTP float ptr [ESP + 0x30]         ; 004282a5
    FXCH                                ; 004282a9
    FSTP float ptr [ESP + 0x34]         ; 004282ab
    FSTP float ptr [ESP + 0x38]         ; 004282af
    MOVSD ES:EDI,ESI                    ; 004282b3
    MOVSD ES:EDI,ESI                    ; 004282b4
    MOVSD ES:EDI,ESI                    ; 004282b5
    FCOMPP                              ; 004282b6
    FNSTSW AX                           ; 004282b8
    SAHF                                ; 004282ba
    JA 0x004283b8                       ; 004282bb
        ;   XREF to: 004283b8 (CONDITIONAL_JUMP)  ; LAB_004283b8
    CMP dword ptr [EBX + 0x2814],0x0    ; 004282c1
    JNZ 0x00428309                      ; 004282c8
        ;   XREF to: 00428309 (CONDITIONAL_JUMP)  ; LAB_00428309
    FLD float ptr [ESP + 0x10]          ; 004282ca
    FABS                                ; 004282ce
    FCOMP double ptr [0x005cce8e]       ; 004282d0 | DAT_005cce8e
    FNSTSW AX                           ; 004282d6
    SAHF                                ; 004282d8
    JA 0x00428504                       ; 004282d9
        ;   XREF to: 00428504 (CONDITIONAL_JUMP)  ; LAB_00428504
    FLD float ptr [ESP + 0xc]           ; 004282df
    FABS                                ; 004282e3
    FCOMP double ptr [0x005cce96]       ; 004282e5 | DAT_005cce96
    FNSTSW AX                           ; 004282eb
    SAHF                                ; 004282ed
    JA 0x00428504                       ; 004282ee
        ;   XREF to: 00428504 (CONDITIONAL_JUMP)  ; LAB_00428504
    FLD float ptr [ESP + 0x14]          ; 004282f4
    FABS                                ; 004282f8
    FCOMP double ptr [0x005cce96]       ; 004282fa | DAT_005cce96
    FNSTSW AX                           ; 00428300
    SAHF                                ; 00428302
    JA 0x00428504                       ; 00428303
        ;   XREF to: 00428504 (CONDITIONAL_JUMP)  ; LAB_00428504
    FLD float ptr [ESP + 0xc]           ; 00428309
        ;   Label: LAB_00428309
    FMUL ST0                            ; 0042830d
    FLD float ptr [ESP + 0x14]          ; 0042830f
    FMUL ST0                            ; 00428313
    XOR EAX,EAX                         ; 00428315
    FADDP                               ; 00428317
    MOV dword ptr [ESP + 0x10],EAX      ; 00428319
    FSQRT                               ; 0042831d
    FLD float ptr [EBP + 0x20]          ; 0042831f
    FLDZ                                ; 00428322
    FXCH ST2                            ; 00428324
    FSTP float ptr [ESP + 0x48]         ; 00428326
    FXCH                                ; 0042832a
    FCOMPP                              ; 0042832c
    FNSTSW AX                           ; 0042832e
    SAHF                                ; 00428330
    JBE 0x0042833a                      ; 00428331
        ;   XREF to: 0042833a (CONDITIONAL_JUMP)  ; LAB_0042833a
    MOV dword ptr [EBP + 0x20],0x7149f2ca ; 00428333
    FLD float ptr [EBP + 0x1c]          ; 0042833a
        ;   Label: LAB_0042833a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042833d
    FMUL double ptr [0x005cce9e]        ; 00428340 | DAT_005cce9e
    MOV ECX,dword ptr [EAX]             ; 00428346
    FSTP float ptr [ESP + 0x58]         ; 00428348
    TEST ECX,ECX                        ; 0042834c
    JNZ 0x0042852d                      ; 0042834e
        ;   XREF to: 0042852d (CONDITIONAL_JUMP)  ; LAB_0042852d
    FLD float ptr [EBP + 0x1c]          ; 00428354
    FADD float ptr [ESP + 0x58]         ; 00428357
    FSTP float ptr [EBP + 0x1c]         ; 0042835b
        ;   Label: LAB_0042835b
    FLD float ptr [EBP + 0x1c]          ; 0042835e
        ;   Label: LAB_0042835e
    FCOMP double ptr [0x005ccea6]       ; 00428361 | DAT_005ccea6
    FNSTSW AX                           ; 00428367
    SAHF                                ; 00428369
    JNC 0x00428373                      ; 0042836a
        ;   XREF to: 00428373 (CONDITIONAL_JUMP)  ; LAB_00428373
    MOV dword ptr [EBP + 0x1c],0x3c23d70a ; 0042836c
    FLD float ptr [ESP + 0x48]          ; 00428373
        ;   Label: LAB_00428373
    FCOMP float ptr [EBP + 0x1c]        ; 00428377
    FNSTSW AX                           ; 0042837a
    SAHF                                ; 0042837c
    JNC 0x00428564                      ; 0042837d
        ;   XREF to: 00428564 (CONDITIONAL_JUMP)  ; LAB_00428564
    MOV EAX,dword ptr [EBP + 0x24]      ; 00428383
    MOV dword ptr [EAX],0x0             ; 00428386
    MOV ESP,EBP                         ; 0042838c
    POP EBP                             ; 0042838e
    POP EDI                             ; 0042838f
    POP ESI                             ; 00428390
    POP EBX                             ; 00428391
    RET                                 ; 00428392
    PUSH EBX                            ; 00428393
        ;   Label: LAB_00428393
    PUSH 0x5cce14                       ; 00428394 | = "%s tried to follow NULL actor!\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00428399 | g_CConsolePtr
    PUSH ECX                            ; 0042839f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004283a0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 004283a5
    MOV EAX,dword ptr [EBP + 0x24]      ; 004283a8
    MOV dword ptr [EAX],0x3             ; 004283ab
    MOV ESP,EBP                         ; 004283b1
    POP EBP                             ; 004283b3
    POP EDI                             ; 004283b4
    POP ESI                             ; 004283b5
    POP EBX                             ; 004283b6
    RET                                 ; 004283b7
    LEA EAX,[ESP + 0xc]                 ; 004283b8
        ;   Label: LAB_004283b8
    XOR ESI,ESI                         ; 004283bc
    PUSH EAX                            ; 004283be
    MOV dword ptr [ESP + 0x14],ESI      ; 004283bf
    PUSH EBX                            ; 004283c3
    LEA ESI,[ESP + 0x8]                 ; 004283c4
    LEA EDI,[ESP + 0x44]                ; 004283c8
    CALL core_actor.cpp_FUN_00408d30    ; 004283cc
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x8]                 ; 004283d1
    ADD ESP,0x8                         ; 004283d5
    LEA EAX,[ESP + 0x3c]                ; 004283d8
    MOVSD ES:EDI,ESI                    ; 004283dc
    MOVSD ES:EDI,ESI                    ; 004283dd
    MOVSD ES:EDI,ESI                    ; 004283de
    PUSH EAX                            ; 004283df
    LEA ESI,[ESP + 0x1c]                ; 004283e0
    LEA EDI,[ESP + 0x28]                ; 004283e4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004283e8
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x1c]                ; 004283ed
    ADD ESP,0x4                         ; 004283f1
    MOVSD ES:EDI,ESI                    ; 004283f4
    MOVSD ES:EDI,ESI                    ; 004283f5
    MOVSD ES:EDI,ESI                    ; 004283f6
    MOV EAX,dword ptr [ESP + 0x28]      ; 004283f7
    MOV dword ptr [EBX + 0x2578],EAX    ; 004283fb
    MOV EAX,dword ptr [EBP + 0x24]      ; 00428401
    CMP dword ptr [EAX],0x0             ; 00428404
    JNZ 0x004284ab                      ; 00428407
        ;   XREF to: 004284ab (CONDITIONAL_JUMP)  ; LAB_004284ab
    FLD float ptr [EBX + 0x2578]        ; 0042840d
    FABS                                ; 00428413
    FCOMP double ptr [0x005cceb6]       ; 00428415 | DAT_005cceb6
    FNSTSW AX                           ; 0042841b
    SAHF                                ; 0042841d
    JBE 0x004284d7                      ; 0042841e
        ;   XREF to: 004284d7 (CONDITIONAL_JUMP)  ; LAB_004284d7
    MOV EAX,dword ptr [EBP + 0x24]      ; 00428424
        ;   Label: LAB_00428424
    MOV dword ptr [EAX],0x1             ; 00428427
    MOV EAX,dword ptr [EBX + 0x2578]    ; 0042842d
        ;   Label: LAB_0042842d
    MOV dword ptr [ESP + 0x5c],EAX      ; 00428433
    MOV EAX,dword ptr [EBX + 0x2598]    ; 00428437
    PUSH dword ptr [ESP + 0x5c]         ; 0042843d
    MOV dword ptr [ESP + 0x54],EAX      ; 00428441
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00428445
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x64],EAX      ; 0042844a
    FLD float ptr [ESP + 0x64]          ; 0042844e
    ADD ESP,0x4                         ; 00428452
    FLD float ptr [ESP + 0x50]          ; 00428455
    FXCH                                ; 00428459
    FST float ptr [ESP + 0x5c]          ; 0042845b
    FXCH                                ; 0042845f
    FCHS                                ; 00428461
    FSTP float ptr [ESP + 0x4c]         ; 00428463
    FCOMP float ptr [ESP + 0x4c]        ; 00428467
    FNSTSW AX                           ; 0042846b
    SAHF                                ; 0042846d
    JNC 0x004284e5                      ; 0042846e
        ;   XREF to: 004284e5 (CONDITIONAL_JUMP)  ; LAB_004284e5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00428470
    MOV dword ptr [ESP + 0x54],EAX      ; 00428474
        ;   Label: LAB_00428474
    MOV EAX,dword ptr [ESP + 0x54]      ; 00428478
    MOV dword ptr [EBX + 0x2578],EAX    ; 0042847c
    MOV dword ptr [EBX + 0x2510],0x0    ; 00428482
        ;   Label: LAB_00428482
    MOV EAX,dword ptr [EBX + 0x2510]    ; 0042848c
    MOV dword ptr [EBX + 0x250c],EAX    ; 00428492
    MOV EAX,dword ptr [EBX + 0x250c]    ; 00428498
    MOV dword ptr [EBX + 0x2508],EAX    ; 0042849e
    MOV ESP,EBP                         ; 004284a4
    POP EBP                             ; 004284a6
    POP EDI                             ; 004284a7
    POP ESI                             ; 004284a8
    POP EBX                             ; 004284a9
    RET                                 ; 004284aa
    FLD float ptr [EBX + 0x2578]        ; 004284ab
        ;   Label: LAB_004284ab
    FABS                                ; 004284b1
    FCOMP double ptr [0x005cceae]       ; 004284b3 | DAT_005cceae
    FNSTSW AX                           ; 004284b9
    SAHF                                ; 004284bb
    JNC 0x00428424                      ; 004284bc
        ;   XREF to: 00428424 (CONDITIONAL_JUMP)  ; LAB_00428424
    MOV EAX,dword ptr [EBP + 0x24]      ; 004284c2
    MOV dword ptr [EAX],0x0             ; 004284c5
    MOV dword ptr [EBX + 0x2578],0x0    ; 004284cb
        ;   Label: LAB_004284cb
    JMP 0x00428482                      ; 004284d5
        ;   XREF to: 00428482 (UNCONDITIONAL_JUMP)  ; LAB_00428482
    MOV EAX,dword ptr [EBP + 0x24]      ; 004284d7
        ;   Label: LAB_004284d7
    CMP dword ptr [EAX],0x1             ; 004284da
    JZ 0x0042842d                       ; 004284dd
        ;   XREF to: 0042842d (CONDITIONAL_JUMP)  ; LAB_0042842d
    JMP 0x004284cb                      ; 004284e3
        ;   XREF to: 004284cb (UNCONDITIONAL_JUMP)  ; LAB_004284cb
    FLD float ptr [ESP + 0x5c]          ; 004284e5
        ;   Label: LAB_004284e5
    FCOMP float ptr [ESP + 0x50]        ; 004284e9
    FNSTSW AX                           ; 004284ed
    SAHF                                ; 004284ef
    JBE 0x004284fb                      ; 004284f0
        ;   XREF to: 004284fb (CONDITIONAL_JUMP)  ; LAB_004284fb
    MOV EAX,dword ptr [ESP + 0x50]      ; 004284f2
    JMP 0x00428474                      ; 004284f6
        ;   XREF to: 00428474 (UNCONDITIONAL_JUMP)  ; LAB_00428474
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004284fb
        ;   Label: LAB_004284fb
    JMP 0x00428474                      ; 004284ff
        ;   XREF to: 00428474 (UNCONDITIONAL_JUMP)  ; LAB_00428474
    MOV ESI,dword ptr [EBP + 0x18]      ; 00428504
        ;   Label: LAB_00428504
    PUSH ESI                            ; 00428507
    PUSH EBX                            ; 00428508
    PUSH 0x5cce34                       ; 00428509 | = "%s confused while following %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0042850e | g_CConsolePtr
    PUSH EDI                            ; 00428514 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00428515
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0042851a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042851d
    MOV dword ptr [EAX],0x3             ; 00428520
    MOV ESP,EBP                         ; 00428526
    POP EBP                             ; 00428528
    POP EDI                             ; 00428529
    POP ESI                             ; 0042852a
    POP EBX                             ; 0042852b
    RET                                 ; 0042852c
    CMP ECX,0x1                         ; 0042852d
        ;   Label: LAB_0042852d
    JNZ 0x0042854c                      ; 00428530
        ;   XREF to: 0042854c (CONDITIONAL_JUMP)  ; LAB_0042854c
    FLD float ptr [EBP + 0x1c]          ; 00428532
    FLD float ptr [ESP + 0x58]          ; 00428535
    FLD float ptr [EBP + 0x20]          ; 00428539
    FADD ST0,ST1                        ; 0042853c
    FXCH ST2                            ; 0042853e
    FSUBRP                              ; 00428540
    FXCH                                ; 00428542
    FSTP float ptr [EBP + 0x20]         ; 00428544
    JMP 0x0042835b                      ; 00428547
        ;   XREF to: 0042835b (UNCONDITIONAL_JUMP)  ; LAB_0042835b
    CMP ECX,0x2                         ; 0042854c
        ;   Label: LAB_0042854c
    JNZ 0x0042835e                      ; 0042854f
        ;   XREF to: 0042835e (CONDITIONAL_JUMP)  ; LAB_0042835e
    FLD float ptr [EBP + 0x20]          ; 00428555
    FSUB float ptr [ESP + 0x58]         ; 00428558
    FSTP float ptr [EBP + 0x20]         ; 0042855c
    JMP 0x0042835e                      ; 0042855f
        ;   XREF to: 0042835e (UNCONDITIONAL_JUMP)  ; LAB_0042835e
    PUSH 0x0                            ; 00428564
        ;   Label: LAB_00428564
    PUSH 0x0                            ; 00428566
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428568
    PUSH 0x265370c                      ; 0042856b | DAT_0265370c
    MOV EDX,dword ptr [EBP + 0x18]      ; 00428570
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00428573
    PUSH EDX                            ; 00428579
    CALL dword ptr [EAX + 0xcc]         ; 0042857a
    ADD ESP,0x4                         ; 00428580
    PUSH EAX                            ; 00428583
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428584
    ADD EAX,0x20                        ; 00428587
    PUSH EAX                            ; 0042858a
    PUSH EBX                            ; 0042858b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0042858c
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00428591
    TEST EAX,EAX                        ; 00428594
    JL 0x004285b4                       ; 00428596
        ;   XREF to: 004285b4 (CONDITIONAL_JUMP)  ; LAB_004285b4
    FLD float ptr [ESP + 0x48]          ; 00428598
    FCOMP float ptr [EBP + 0x20]        ; 0042859c
    FNSTSW AX                           ; 0042859f
    SAHF                                ; 004285a1
    JBE 0x004285dd                      ; 004285a2
        ;   XREF to: 004285dd (CONDITIONAL_JUMP)  ; LAB_004285dd
    MOV EAX,dword ptr [EBP + 0x24]      ; 004285a4
    MOV dword ptr [EAX],0x2             ; 004285a7
    MOV ESP,EBP                         ; 004285ad
    POP EBP                             ; 004285af
    POP EDI                             ; 004285b0
    POP ESI                             ; 004285b1
    POP EBX                             ; 004285b2
    RET                                 ; 004285b3
    MOV ECX,dword ptr [EBP + 0x18]      ; 004285b4
        ;   Label: LAB_004285b4
    PUSH ECX                            ; 004285b7
    PUSH EBX                            ; 004285b8
    PUSH 0x5cce54                       ; 004285b9 | = "%s confused after pathmap call while ..."
    MOV EBX,dword ptr [0x00609ed0]      ; 004285be | g_CConsolePtr
    PUSH EBX                            ; 004285c4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004285c5
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 004285ca
    MOV EAX,dword ptr [EBP + 0x24]      ; 004285cd
    MOV dword ptr [EAX],0x3             ; 004285d0
    MOV ESP,EBP                         ; 004285d6
    POP EBP                             ; 004285d8
    POP EDI                             ; 004285d9
    POP ESI                             ; 004285da
    POP EBX                             ; 004285db
    RET                                 ; 004285dc
    MOV EAX,dword ptr [EBP + 0x24]      ; 004285dd
        ;   Label: LAB_004285dd
    MOV dword ptr [EAX],0x1             ; 004285e0
    MOV ESP,EBP                         ; 004285e6
    POP EBP                             ; 004285e8
    POP EDI                             ; 004285e9
    POP ESI                             ; 004285ea
    POP EBX                             ; 004285eb
    RET                                 ; 004285ec

