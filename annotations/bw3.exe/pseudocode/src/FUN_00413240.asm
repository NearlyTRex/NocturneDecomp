; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00413240(undefined4 *param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005dbee4 = 00413240
;   undefined4 DAT_005dbf80
;
; Called Functions:
;   FUN_0040d300
;   FUN_00411980
;   FUN_004144a0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413240
        ;   Label: FUN_00413240
    MOV EBX,dword ptr [ESP + 0x8]       ; 00413241
    TEST byte ptr [ESP + 0xc],0x4       ; 00413245
    JNZ 0x0041328b                      ; 0041324a
        ;   XREF to: 0041328b (CONDITIONAL_JUMP)  ; LAB_0041328b
    PUSH 0x0                            ; 0041324c
    MOV dword ptr [EBX],0x5dbee4        ; 0041324e | PTR_FUN_005dbee4
    ADD EBX,0x70                        ; 00413254
    PUSH EBX                            ; 00413257
    CALL FUN_004144a0                   ; 00413258
        ;   XREF to: 004144a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004144a0()
    ADD ESP,0x8                         ; 0041325d
    PUSH 0x0                            ; 00413260
    SUB EAX,0x6c                        ; 00413262
    PUSH EAX                            ; 00413265
    CALL FUN_0040d300                   ; 00413266
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 0041326b
    PUSH 0x1                            ; 0041326e
    LEA EBX,[EAX + -0x4]                ; 00413270
    PUSH EBX                            ; 00413273
    CALL FUN_00411980                   ; 00413274
        ;   XREF to: 00411980 (UNCONDITIONAL_CALL)  ; undefined FUN_00411980()
    ADD ESP,0x8                         ; 00413279
    MOV DL,byte ptr [ESP + 0xc]         ; 0041327c
    MOV EBX,EAX                         ; 00413280
    TEST DL,0x2                         ; 00413282
    JNZ 0x004132a6                      ; 00413285
        ;   XREF to: 004132a6 (CONDITIONAL_JUMP)  ; LAB_004132a6
    MOV EAX,EBX                         ; 00413287
    POP EBX                             ; 00413289
    RET                                 ; 0041328a
    PUSH 0x5dbf80                       ; 0041328b | DAT_005dbf80
        ;   Label: LAB_0041328b
    PUSH EBX                            ; 00413290
    CALL FUN_005a308f                   ; 00413291
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00413296
    PUSH EAX                            ; 00413299
    CALL FUN_005a30b6                   ; 0041329a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041329f
    MOV EAX,EBX                         ; 004132a2
    POP EBX                             ; 004132a4
    RET                                 ; 004132a5
    PUSH EAX                            ; 004132a6
        ;   Label: LAB_004132a6
    CALL FUN_005a30c4                   ; 004132a7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004132ac
    MOV EAX,EBX                         ; 004132af
    POP EBX                             ; 004132b1
    RET                                 ; 004132b2

