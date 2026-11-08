; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005462c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4350
;   undefined4 DAT_005e4354
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_00488fd0
;   FUN_00491aa0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005462c0
        ;   Label: FUN_005462c0
    PUSH ESI                            ; 005462c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005462c2
    PUSH ESI                            ; 005462c6
    CALL FUN_00488fd0                   ; 005462c7
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 005462cc
    MOV EBX,EAX                         ; 005462cf
    PUSH 0x5d1420                       ; 005462d1
    MOV ESI,EAX                         ; 005462d6
    ADD EAX,0x158                       ; 005462d8
    PUSH EAX                            ; 005462dd
    MOV dword ptr [EAX + -0x4],0x5e4364 ; 005462de
    CALL FUN_0054eae0                   ; 005462e5
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    FLD float ptr [0x005e4350]          ; 005462ea | DAT_005e4350
    FLD float ptr [0x005e4354]          ; 005462f0 | DAT_005e4354
    MOV dword ptr [EBX + 0x326c],0x3f400000 ; 005462f6
    ADD ESP,0x8                         ; 00546300
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 00546303
    MOV EDX,dword ptr [0x005fba60]      ; 0054630d | DAT_005fba60
    MOV dword ptr [EBX + 0xd064],0x0    ; 00546313
    PUSH 0x5d1430                       ; 0054631d
    FXCH                                ; 00546322
    FSTP float ptr [EBX + 0x3274]       ; 00546324
    PUSH EDX                            ; 0054632a
    FSTP float ptr [EBX + 0x3278]       ; 0054632b
    CALL FUN_00491aa0                   ; 00546331
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00546336
    TEST EAX,EAX                        ; 00546339
    JZ 0x0054634c                       ; 0054633b
        ;   XREF to: 0054634c (CONDITIONAL_JUMP)  ; LAB_0054634c
    MOV dword ptr [EBX + 0xd068],0x3f800000 ; 0054633d
    MOV EAX,ESI                         ; 00546347
    POP ESI                             ; 00546349
    POP EBX                             ; 0054634a
    RET                                 ; 0054634b
    MOV dword ptr [EBX + 0xd068],0x3f400000 ; 0054634c
        ;   Label: LAB_0054634c
    MOV EAX,ESI                         ; 00546356
    POP ESI                             ; 00546358
    POP EBX                             ; 00546359
    RET                                 ; 0054635a

