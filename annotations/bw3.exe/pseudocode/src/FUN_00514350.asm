; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00514350(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00515490 at 0051549f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e3424 = 00514350
;   undefined4 DAT_005e3440
;
; Called Functions:
;   FUN_00514650
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514350
        ;   Label: FUN_00514350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514351
    TEST byte ptr [ESP + 0xc],0x4       ; 00514355
    JNZ 0x00514381                      ; 0051435a
        ;   XREF to: 00514381 (CONDITIONAL_JUMP)  ; LAB_00514381
    PUSH EBX                            ; 0051435c
    MOV dword ptr [EBX + 0x194],0x5e3424 ; 0051435d | PTR_FUN_005e3424
    CALL FUN_00514650                   ; 00514367
        ;   XREF to: 00514650 (UNCONDITIONAL_CALL)  ; undefined FUN_00514650()
    ADD ESP,0x4                         ; 0051436c
    TEST byte ptr [ESP + 0xc],0x2       ; 0051436f
    JNZ 0x0051439c                      ; 00514374
        ;   XREF to: 0051439c (CONDITIONAL_JUMP)  ; LAB_0051439c
    MOV EAX,EBX                         ; 00514376
    POP EBX                             ; 00514378
    LEA EAX,[EAX]                       ; 00514379
    NOP                                 ; 0051437f
    RET                                 ; 00514380
        ;   Label: LAB_00514380
    PUSH 0x5e3440                       ; 00514381 | DAT_005e3440
        ;   Label: LAB_00514381
    PUSH EBX                            ; 00514386
    CALL FUN_005a308f                   ; 00514387
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0051438c
    PUSH EAX                            ; 0051438f
    CALL FUN_005a30b6                   ; 00514390
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00514395
    MOV EAX,EBX                         ; 00514398
    POP EBX                             ; 0051439a
    RET                                 ; 0051439b
    PUSH EBX                            ; 0051439c
        ;   Label: LAB_0051439c
    CALL FUN_005a30c4                   ; 0051439d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005143a2
    MOV EAX,EBX                         ; 005143a5
    POP EBX                             ; 005143a7
    RET                                 ; 005143a8

