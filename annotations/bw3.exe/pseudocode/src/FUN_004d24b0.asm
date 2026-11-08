; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d24b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00517f80 at 00517f86
;
; Called Functions:
;   FUN_0042ac20
;   FUN_004d2cd0
;   FUN_004da360
;   FUN_0050acc0
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d24b0
        ;   Label: FUN_004d24b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d24b1
    PUSH EBX                            ; 004d24b5
    CALL FUN_0042ac20                   ; 004d24b6
        ;   XREF to: 0042ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ac20()
    ADD ESP,0x4                         ; 004d24bb
    ADD EAX,0xce08                      ; 004d24be
    PUSH EAX                            ; 004d24c3
    CALL FUN_0050acc0                   ; 004d24c4
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050acc0()
    ADD ESP,0x4                         ; 004d24c9
    ADD EAX,0x138e0                     ; 004d24cc
    PUSH EAX                            ; 004d24d1
    CALL FUN_004da360                   ; 004d24d2
        ;   XREF to: 004da360 (UNCONDITIONAL_CALL)  ; undefined FUN_004da360()
    ADD ESP,0x4                         ; 004d24d7
    PUSH 0x34                           ; 004d24da
    LEA EBX,[EAX + 0xfffdf918]          ; 004d24dc
    PUSH 0x0                            ; 004d24e2
    MOV dword ptr [EBX + 0x206ec],EBX   ; 004d24e4
    LEA EAX,[EBX + 0xcdd4]              ; 004d24ea
    PUSH EAX                            ; 004d24f0
    MOV dword ptr [EBX + 0x154],0x5e1534 ; 004d24f1
    CALL FUN_005a28f0                   ; 004d24fb
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV dword ptr [EBX + 0xcdcc],0x0    ; 004d2500
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 004d250a
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 004d2514
    MOV dword ptr [EBX + 0x3274],0x49742400 ; 004d251e
    MOV dword ptr [EBX + 0x3278],0x49742400 ; 004d2528
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 004d2532
    MOV dword ptr [EBX + 0x3280],0x40c00000 ; 004d253c
    MOV dword ptr [EBX + 0xcdd0],0x2    ; 004d2546
    MOV dword ptr [EBX + 0x206e4],0x0   ; 004d2550
    MOV dword ptr [EBX + 0x20b64],0x0   ; 004d255a
    MOV dword ptr [EBX + 0x20b94],0x0   ; 004d2564
    MOV dword ptr [EBX + 0x20b98],0x0   ; 004d256e
    MOV dword ptr [EBX + 0x20b9c],0x0   ; 004d2578
    MOV dword ptr [EBX + 0x20ba0],0x0   ; 004d2582
    MOV dword ptr [EBX + 0x20ba4],0x0   ; 004d258c
    MOV dword ptr [EBX + 0x20ba8],0x0   ; 004d2596
    MOV dword ptr [EBX + 0x20bac],0x0   ; 004d25a0
    ADD ESP,0xc                         ; 004d25aa
    MOV dword ptr [EBX + 0x20b58],0x0   ; 004d25ad
    PUSH EBX                            ; 004d25b7
    MOV dword ptr [EBX + 0x20b5c],0x0   ; 004d25b8
    CALL FUN_004d2cd0                   ; 004d25c2
        ;   XREF to: 004d2cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d2cd0()
    MOV dword ptr [EBX + 0x20bc8],0x2   ; 004d25c7
    MOV dword ptr [EBX + 0x27c0],0x0    ; 004d25d1
    MOV dword ptr [EBX + 0x2540],0x1    ; 004d25db
    MOV dword ptr [EBX + 0x252c],0x41490fdb ; 004d25e5
    MOV dword ptr [EBX + 0x20b80],0x64  ; 004d25ef
    MOV dword ptr [EBX + 0x20b84],0x1e  ; 004d25f9
    ADD ESP,0x4                         ; 004d2603
    MOV dword ptr [EBX + 0x20b60],0x0   ; 004d2606
    MOV EAX,EBX                         ; 004d2610
    MOV dword ptr [EBX + 0x20b88],0x0   ; 004d2612
    POP EBX                             ; 004d261c
    RET                                 ; 004d261d

