; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3530(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006074cc
;   undefined4 DAT_006074d0
;
; Called Functions:
;   FUN_00409d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3530
        ;   Label: FUN_005a3530
    PUSH ESI                            ; 005a3531
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a3532
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a3536
    PUSH EBX                            ; 005a353a
    PUSH ESI                            ; 005a353b
    CALL FUN_00409d20                   ; 005a353c
        ;   XREF to: 00409d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d20()
    MOV EDX,dword ptr [ESI + 0x858]     ; 005a3541
    ADD ESP,0x8                         ; 005a3547
    TEST EDX,EDX                        ; 005a354a
    JNZ 0x005a3551                      ; 005a354c
        ;   XREF to: 005a3551 (CONDITIONAL_JUMP)  ; LAB_005a3551
    POP ESI                             ; 005a354e
    POP EBX                             ; 005a354f
    RET                                 ; 005a3550
    MOV dword ptr [EBX],0x1             ; 005a3551
        ;   Label: LAB_005a3551
    MOV EAX,dword ptr [ESI + 0x85c]     ; 005a3557
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 005a355d
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 005a3564
    MOV dword ptr [EBX + 0x4],EAX       ; 005a356b
    FLD float ptr [0x006074d0]          ; 005a356e | DAT_006074d0
    FSUB float ptr [ESI + 0x30]         ; 005a3574
    FLD float ptr [0x006074cc]          ; 005a3577 | DAT_006074cc
    FXCH                                ; 005a357d
    FSTP float ptr [EBX + 0x18]         ; 005a357f
    FSUB float ptr [ESI + 0x30]         ; 005a3582
    MOV dword ptr [EBX + 0x8],0xc0800000 ; 005a3585
    FSTP float ptr [EBX + 0x1c]         ; 005a358c
    MOV dword ptr [EBX + 0xc],0x0       ; 005a358f
    POP ESI                             ; 005a3596
    POP EBX                             ; 005a3597
    RET                                 ; 005a3598

