; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005673f0(int param_1,byte param_2)
;
;
; XREF[50]:
;   FUN_0040ecc0 at 0040ecf5
;   FUN_0040ed50 at 0040ed85
;   FUN_00412690 at 004126c5
;   FUN_00414320 at 00414355
;   FUN_00414900 at 00414935
;   FUN_004150f0 at 00415135
;   FUN_004159f0 at 00415a35
;   FUN_00415a90 at 00415ac5
;   FUN_0041d850 at 0041d885
;   FUN_00424e90 at 00424ec5
;   ... and 40 more
;
; Referenced Globals:
;   undefined4 DAT_00600810
;   void* PTR_FUN_006058b4 = 005673f0
;
; Called Functions:
;   FUN_00524200
;   FUN_005674d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005673f0
        ;   Label: FUN_005673f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005673f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005673f5
    JNZ 0x00567426                      ; 005673fa
        ;   XREF to: 00567426 (CONDITIONAL_JUMP)  ; LAB_00567426
    PUSH EBX                            ; 005673fc
    MOV dword ptr [EBX + 0x50],0x6058b4 ; 005673fd | PTR_FUN_006058b4
    CALL FUN_005674d0                   ; 00567404
        ;   XREF to: 005674d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005674d0()
    ADD ESP,0x4                         ; 00567409
    PUSH 0x1                            ; 0056740c
    PUSH EBX                            ; 0056740e
    CALL FUN_00524200                   ; 0056740f
        ;   XREF to: 00524200 (UNCONDITIONAL_CALL)  ; undefined FUN_00524200()
    ADD ESP,0x8                         ; 00567414
    MOV DL,byte ptr [ESP + 0xc]         ; 00567417
    MOV EBX,EAX                         ; 0056741b
    TEST DL,0x2                         ; 0056741d
    JNZ 0x00567441                      ; 00567420
        ;   XREF to: 00567441 (CONDITIONAL_JUMP)  ; LAB_00567441
    MOV EAX,EBX                         ; 00567422
    POP EBX                             ; 00567424
    RET                                 ; 00567425
    PUSH 0x600810                       ; 00567426 | DAT_00600810
        ;   Label: LAB_00567426
    PUSH EBX                            ; 0056742b
    CALL FUN_005c030f                   ; 0056742c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00567431
    PUSH EAX                            ; 00567434
    CALL FUN_005c0336                   ; 00567435
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0056743a
    MOV EAX,EBX                         ; 0056743d
    POP EBX                             ; 0056743f
    RET                                 ; 00567440
    PUSH EAX                            ; 00567441
        ;   Label: LAB_00567441
    CALL FUN_005c0344                   ; 00567442
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00567447
    MOV EAX,EBX                         ; 0056744a
    POP EBX                             ; 0056744c
    RET                                 ; 0056744d

