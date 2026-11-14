; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004ba2e0(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004b92e0 at 004b9381
;
; Referenced Globals:
;   undefined4 DAT_005c2830
;   undefined4 DAT_005c2838
;   undefined4 DAT_005c2840
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c6cef0
;   undefined4 DAT_01d221fc
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; Called Functions:
;   core_game.cpp_FUN_004b9960
;   wincore_winrun.cpp_setCursorPosition_FUN_005809d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba2e0
        ;   Label: core_game.cpp_CGame_processMouseControls_FUN_004ba2e0
    PUSH ESI                            ; 004ba2e1
    PUSH EDI                            ; 004ba2e2
    PUSH EBP                            ; 004ba2e3
    MOV EBP,ESP                         ; 004ba2e4
    SUB ESP,0x2c                        ; 004ba2e6
    AND ESP,0xfffffff8                  ; 004ba2e9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ba2ec
    MOV EBX,dword ptr [EBP + 0x18]      ; 004ba2ef
    PUSH EBX                            ; 004ba2f2
    PUSH EDI                            ; 004ba2f3
    CALL core_game.cpp_FUN_004b9960     ; 004ba2f4
        ;   XREF to: 004b9960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b9960(CGame * this_ptr, SPlayerInput * player_control)
    MOV EDX,dword ptr [EDI + 0x32c]     ; 004ba2f9
    ADD ESP,0x8                         ; 004ba2ff
    TEST EDX,EDX                        ; 004ba302
    JZ 0x004ba30d                       ; 004ba304
        ;   XREF to: 004ba30d (CONDITIONAL_JUMP)  ; LAB_004ba30d
    MOV ESP,EBP                         ; 004ba306
        ;   Label: LAB_004ba306
    POP EBP                             ; 004ba308
    POP EDI                             ; 004ba309
    POP ESI                             ; 004ba30a
    POP EBX                             ; 004ba30b
    RET                                 ; 004ba30c
    MOV EAX,[0x005fba18]                ; 004ba30d | DAT_005fba18
        ;   Label: LAB_004ba30d
    MOV EDX,EAX                         ; 004ba312
    SAR EDX,0x1f                        ; 004ba314
    SUB EAX,EDX                         ; 004ba317
    SAR EAX,0x1                         ; 004ba319
    MOV dword ptr [ESP + 0x20],EAX      ; 004ba31b
    MOV EAX,[0x005fba1c]                ; 004ba31f | DAT_005fba1c
    MOV EDX,EAX                         ; 004ba324
    SAR EDX,0x1f                        ; 004ba326
    SUB EAX,EDX                         ; 004ba329
    SAR EAX,0x1                         ; 004ba32b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ba32d
    MOV ESI,EAX                         ; 004ba331
    MOV EAX,[0x01c5fadc]                ; 004ba333 | DAT_01c5fadc
    SUB EAX,ECX                         ; 004ba338
    MOV dword ptr [ESP + 0x18],EAX      ; 004ba33a
    MOV EAX,[0x01c5fae0]                ; 004ba33e | DAT_01c5fae0
    PUSH ESI                            ; 004ba343
    SUB EAX,ESI                         ; 004ba344
    PUSH ECX                            ; 004ba346
    MOV dword ptr [ESP + 0x24],EAX      ; 004ba347
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005809d0 ; 004ba34b
        ;   XREF to: 005809d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005809d0(int x, int y)
    MOV EAX,[0x00603b28]                ; 004ba350 | g_CDemonSetPtr
    MOV EDX,dword ptr [0x01d221fc]      ; 004ba355 | DAT_01d221fc
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004ba35b | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x8                         ; 004ba361
    CMP EAX,EDX                         ; 004ba364
    JNZ 0x004ba306                      ; 004ba366
        ;   XREF to: 004ba306 (CONDITIONAL_JUMP)  ; LAB_004ba306
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ba368
    MOV dword ptr [ESP + 0x28],EAX      ; 004ba36c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ba370
    MOV dword ptr [ESP + 0x24],EAX      ; 004ba374
    FILD dword ptr [ESP + 0x28]         ; 004ba378
    FILD dword ptr [ESP + 0x24]         ; 004ba37c
    FDIVP                               ; 004ba380
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ba382
    MOV dword ptr [ESP + 0x24],EAX      ; 004ba386
    MOV dword ptr [ESP + 0x28],ESI      ; 004ba38a
    FILD dword ptr [ESP + 0x24]         ; 004ba38e
    FILD dword ptr [ESP + 0x28]         ; 004ba392
    FDIVP                               ; 004ba396
    FLD double ptr [0x005c2830]         ; 004ba398 | DAT_005c2830
    FILD dword ptr [EDI + 0xb4]         ; 004ba39e
    FMUL ST1                            ; 004ba3a4
    FILD dword ptr [EDI + 0xb8]         ; 004ba3a6
    FMULP ST2                           ; 004ba3ac
    FMUL double ptr [0x005c2838]        ; 004ba3ae | DAT_005c2838
    FMUL ST3                            ; 004ba3b4
    FXCH ST2                            ; 004ba3b6
    FXCH                                ; 004ba3b8
    FMUL ST1                            ; 004ba3ba
    FXCH ST2                            ; 004ba3bc
    FSTP ST3                            ; 004ba3be
    FXCH ST2                            ; 004ba3c0
    FST float ptr [ESP + 0x4]           ; 004ba3c2
    FXCH                                ; 004ba3c6
    FSTP ST2                            ; 004ba3c8
    FXCH                                ; 004ba3ca
    FSTP float ptr [ESP]                ; 004ba3cc
    FCOMP double ptr [0x005c2840]       ; 004ba3cf | DAT_005c2840
    FNSTSW AX                           ; 004ba3d5
    SAHF                                ; 004ba3d7
    JNC 0x004ba3e2                      ; 004ba3d8
        ;   XREF to: 004ba3e2 (CONDITIONAL_JUMP)  ; LAB_004ba3e2
    MOV dword ptr [ESP + 0x4],0xbf800000 ; 004ba3da
    FLD float ptr [ESP + 0x4]           ; 004ba3e2
        ;   Label: LAB_004ba3e2
    FLD1                                ; 004ba3e6
    FCOMPP                              ; 004ba3e8
    FNSTSW AX                           ; 004ba3ea
    SAHF                                ; 004ba3ec
    JNC 0x004ba3f7                      ; 004ba3ed
        ;   XREF to: 004ba3f7 (CONDITIONAL_JUMP)  ; LAB_004ba3f7
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 004ba3ef
    FLD float ptr [ESP]                 ; 004ba3f7
        ;   Label: LAB_004ba3f7
    FCOMP double ptr [0x005c2840]       ; 004ba3fa | DAT_005c2840
    FNSTSW AX                           ; 004ba400
    SAHF                                ; 004ba402
    JNC 0x004ba40c                      ; 004ba403
        ;   XREF to: 004ba40c (CONDITIONAL_JUMP)  ; LAB_004ba40c
    MOV dword ptr [ESP],0xbf800000      ; 004ba405
    FLD float ptr [ESP]                 ; 004ba40c
        ;   Label: LAB_004ba40c
    FLD1                                ; 004ba40f
    FCOMPP                              ; 004ba411
    FNSTSW AX                           ; 004ba413
    SAHF                                ; 004ba415
    JNC 0x004ba41f                      ; 004ba416
        ;   XREF to: 004ba41f (CONDITIONAL_JUMP)  ; LAB_004ba41f
    MOV dword ptr [ESP],0x3f800000      ; 004ba418
    CMP dword ptr [EDI + 0xac],0x0      ; 004ba41f
        ;   Label: LAB_004ba41f
    JZ 0x004ba42d                       ; 004ba426
        ;   XREF to: 004ba42d (CONDITIONAL_JUMP)  ; LAB_004ba42d
    XOR byte ptr [ESP + 0x3],0x80       ; 004ba428
    MOV EAX,dword ptr [EDI + 0x34]      ; 004ba42d
        ;   Label: LAB_004ba42d
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004ba430 | DAT_01c6cef0
    JZ 0x004ba474                       ; 004ba437
        ;   XREF to: 004ba474 (CONDITIONAL_JUMP)  ; LAB_004ba474
    FLD float ptr [EBX + 0x28]          ; 004ba439
    FABS                                ; 004ba43c
    FLD float ptr [ESP + 0x4]           ; 004ba43e
    FABS                                ; 004ba442
    FCOMPP                              ; 004ba444
    FNSTSW AX                           ; 004ba446
    SAHF                                ; 004ba448
    JBE 0x004ba452                      ; 004ba449
        ;   XREF to: 004ba452 (CONDITIONAL_JUMP)  ; LAB_004ba452
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ba44b
    MOV dword ptr [EBX + 0x28],EAX      ; 004ba44f
    FLD float ptr [EBX + 0x30]          ; 004ba452
        ;   Label: LAB_004ba452
    FABS                                ; 004ba455
    FLD float ptr [ESP]                 ; 004ba457
    FABS                                ; 004ba45a
    FCOMPP                              ; 004ba45c
    FNSTSW AX                           ; 004ba45e
    SAHF                                ; 004ba460
    JBE 0x004ba306                      ; 004ba461
        ;   XREF to: 004ba306 (CONDITIONAL_JUMP)  ; LAB_004ba306
    MOV EAX,dword ptr [ESP]             ; 004ba467
    MOV dword ptr [EBX + 0x30],EAX      ; 004ba46a
    MOV ESP,EBP                         ; 004ba46d
    POP EBP                             ; 004ba46f
    POP EDI                             ; 004ba470
    POP ESI                             ; 004ba471
    POP EBX                             ; 004ba472
    RET                                 ; 004ba473
    FLD float ptr [EBX + 0x2c]          ; 004ba474
        ;   Label: LAB_004ba474
    FABS                                ; 004ba477
    FLD float ptr [ESP + 0x4]           ; 004ba479
    FABS                                ; 004ba47d
    FCOMPP                              ; 004ba47f
    FNSTSW AX                           ; 004ba481
    SAHF                                ; 004ba483
    JBE 0x004ba452                      ; 004ba484
        ;   XREF to: 004ba452 (CONDITIONAL_JUMP)  ; LAB_004ba452
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ba486
    MOV dword ptr [EBX + 0x2c],EAX      ; 004ba48a
    JMP 0x004ba452                      ; 004ba48d
        ;   XREF to: 004ba452 (UNCONDITIONAL_JUMP)  ; LAB_004ba452

