; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005123b0(int param_1,int param_2,uint param_3,float param_4,float param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8c8f
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d1c
;   undefined4 DAT_01d22564
;   undefined4 DAT_01d22568
;   undefined4 DAT_01d2256c
;   undefined4 DAT_01d22570
;   undefined4 DAT_01d22574
;   undefined4 DAT_01d2adb8
;   undefined4 DAT_02c8349c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005123b0
        ;   Label: engine_mini3d.cpp_FUN_005123b0
    SUB ESP,0x8                         ; 005123b1
    MOV EDX,dword ptr [ESP + 0x10]      ; 005123b4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005123b8
    MOV EBX,dword ptr [ESP + 0x18]      ; 005123bc
    MOV dword ptr [ESP],EDX             ; 005123c0
    MOV dword ptr [ESP + 0x4],EAX       ; 005123c3
    FLD float ptr [0x005e8c8f]          ; 005123c7 | DAT_005e8c8f
    FILD dword ptr [ESP]                ; 005123cd
    FMUL ST1                            ; 005123d0
    FILD dword ptr [ESP + 0x4]          ; 005123d2
    FMUL ST2                            ; 005123d6
    MOV dword ptr [ESP + 0x4],EBX       ; 005123d8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005123dc
    FILD dword ptr [ESP + 0x4]          ; 005123e0
    FMULP ST3                           ; 005123e4
    MOV dword ptr [0x01d22570],ECX      ; 005123e6 | DAT_01d22570
    MOV ECX,dword ptr [ESP + 0x20]      ; 005123ec
    FSTP float ptr [0x01d22568]         ; 005123f0 | DAT_01d22568
    FXCH                                ; 005123f6
    FSTP float ptr [0x01d2256c]         ; 005123f8 | DAT_01d2256c
    MOV dword ptr [0x01d22574],ECX      ; 005123fe | DAT_01d22574
    MOV ECX,dword ptr [0x0061b4a0]      ; 00512404 | DAT_0061b4a0
    FSTP float ptr [0x01d22564]         ; 0051240a | DAT_01d22564
    CMP ECX,0x20                        ; 00512410
    JNZ 0x0051246b                      ; 00512413
        ;   XREF to: 0051246b (CONDITIONAL_JUMP)  ; LAB_0051246b
    MOV CL,byte ptr [0x01c4e9d4]        ; 00512415 | DAT_01c4e9d4
    SHL EDX,CL                          ; 0051241b
    MOV CL,byte ptr [0x01c4e9e0]        ; 0051241d | DAT_01c4e9e0
    SHL EAX,CL                          ; 00512423
    MOV ECX,EAX                         ; 00512425
    MOV EAX,EDX                         ; 00512427
    OR EAX,ECX                          ; 00512429
    MOV CL,byte ptr [0x01c4e9ec]        ; 0051242b | DAT_01c4e9ec
    SHL EBX,CL                          ; 00512431
    MOV ECX,EBX                         ; 00512433
    OR ECX,EAX                          ; 00512435
    MOV EBX,dword ptr [0x02c8349c]      ; 00512437 | DAT_02c8349c
        ;   Label: LAB_00512437
    MOV dword ptr [0x01c51d1c],ECX      ; 0051243d | DAT_01c51d1c
    TEST EBX,EBX                        ; 00512443
    JZ 0x00512450                       ; 00512445
        ;   XREF to: 00512450 (CONDITIONAL_JUMP)  ; LAB_00512450
    CMP dword ptr [0x01c50948],0x0      ; 00512447 | DAT_01c50948
    JNZ 0x00512479                      ; 0051244e
        ;   XREF to: 00512479 (CONDITIONAL_JUMP)  ; LAB_00512479
    FLD float ptr [0x01d22574]          ; 00512450 | DAT_01d22574
        ;   Label: LAB_00512450
    FSUB float ptr [0x01d22570]         ; 00512456 | DAT_01d22570
    FLD1                                ; 0051245c
    FDIVRP                              ; 0051245e
    FSTP float ptr [0x01d2adb8]         ; 00512460 | DAT_01d2adb8
    ADD ESP,0x8                         ; 00512466
    POP EBX                             ; 00512469
    RET                                 ; 0051246a
    MOV ECX,EDX                         ; 0051246b
        ;   Label: LAB_0051246b
    SHL EAX,0x8                         ; 0051246d
    SHL ECX,0x10                        ; 00512470
    OR ECX,EAX                          ; 00512473
    OR ECX,EBX                          ; 00512475
    JMP 0x00512437                      ; 00512477
        ;   XREF to: 00512437 (UNCONDITIONAL_JUMP)  ; LAB_00512437
    PUSH dword ptr [ESP + 0x20]         ; 00512479
        ;   Label: LAB_00512479
    PUSH dword ptr [ESP + 0x20]         ; 0051247d
    PUSH dword ptr [0x01d2256c]         ; 00512481 | DAT_01d2256c
    PUSH dword ptr [0x01d22568]         ; 00512487 | DAT_01d22568
    PUSH dword ptr [0x01d22564]         ; 0051248d | DAT_01d22564
    CALL dword ptr [0x02c8349c]         ; 00512493 | DAT_02c8349c
    ADD ESP,0x14                        ; 00512499
    JMP 0x00512450                      ; 0051249c
        ;   XREF to: 00512450 (UNCONDITIONAL_JUMP)  ; LAB_00512450

