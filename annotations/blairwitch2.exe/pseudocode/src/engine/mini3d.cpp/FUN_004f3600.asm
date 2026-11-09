; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3600(int param_1,int param_2,uint param_3,float param_4,float param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddc48
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b5c
;   undefined4 DAT_01d09900
;   undefined4 DAT_01d09904
;   undefined4 DAT_01d09908
;   undefined4 DAT_01d0990c
;   undefined4 DAT_01d09910
;   undefined4 DAT_01d12158
;   undefined4 DAT_0264bccc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3600
        ;   Label: engine_mini3d.cpp_FUN_004f3600
    SUB ESP,0x8                         ; 004f3601
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f3604
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f3608
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f360c
    MOV dword ptr [ESP],EDX             ; 004f3610
    MOV dword ptr [ESP + 0x4],EAX       ; 004f3613
    FLD float ptr [0x005ddc48]          ; 004f3617 | DAT_005ddc48
    FILD dword ptr [ESP]                ; 004f361d
    FMUL ST1                            ; 004f3620
    FILD dword ptr [ESP + 0x4]          ; 004f3622
    FMUL ST2                            ; 004f3626
    MOV dword ptr [ESP + 0x4],EBX       ; 004f3628
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f362c
    FILD dword ptr [ESP + 0x4]          ; 004f3630
    FMULP ST3                           ; 004f3634
    MOV dword ptr [0x01d0990c],ECX      ; 004f3636 | DAT_01d0990c
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f363c
    FSTP float ptr [0x01d09904]         ; 004f3640 | DAT_01d09904
    FXCH                                ; 004f3646
    FSTP float ptr [0x01d09908]         ; 004f3648 | DAT_01d09908
    MOV dword ptr [0x01d09910],ECX      ; 004f364e | DAT_01d09910
    MOV ECX,dword ptr [0x006141c0]      ; 004f3654 | DAT_006141c0
    FSTP float ptr [0x01d09900]         ; 004f365a | DAT_01d09900
    CMP ECX,0x20                        ; 004f3660
    JNZ 0x004f36bb                      ; 004f3663
        ;   XREF to: 004f36bb (CONDITIONAL_JUMP)  ; LAB_004f36bb
    MOV CL,byte ptr [0x01c35814]        ; 004f3665 | DAT_01c35814
    SHL EDX,CL                          ; 004f366b
    MOV CL,byte ptr [0x01c35820]        ; 004f366d | DAT_01c35820
    SHL EAX,CL                          ; 004f3673
    MOV ECX,EAX                         ; 004f3675
    MOV EAX,EDX                         ; 004f3677
    OR EAX,ECX                          ; 004f3679
    MOV CL,byte ptr [0x01c3582c]        ; 004f367b | DAT_01c3582c
    SHL EBX,CL                          ; 004f3681
    MOV ECX,EBX                         ; 004f3683
    OR ECX,EAX                          ; 004f3685
    MOV EBX,dword ptr [0x0264bccc]      ; 004f3687 | DAT_0264bccc
        ;   Label: LAB_004f3687
    MOV dword ptr [0x01c38b5c],ECX      ; 004f368d | DAT_01c38b5c
    TEST EBX,EBX                        ; 004f3693
    JZ 0x004f36a0                       ; 004f3695
        ;   XREF to: 004f36a0 (CONDITIONAL_JUMP)  ; LAB_004f36a0
    CMP dword ptr [0x01c37788],0x0      ; 004f3697 | DAT_01c37788
    JNZ 0x004f36c9                      ; 004f369e
        ;   XREF to: 004f36c9 (CONDITIONAL_JUMP)  ; LAB_004f36c9
    FLD float ptr [0x01d09910]          ; 004f36a0 | DAT_01d09910
        ;   Label: LAB_004f36a0
    FSUB float ptr [0x01d0990c]         ; 004f36a6 | DAT_01d0990c
    FLD1                                ; 004f36ac
    FDIVRP                              ; 004f36ae
    FSTP float ptr [0x01d12158]         ; 004f36b0 | DAT_01d12158
    ADD ESP,0x8                         ; 004f36b6
    POP EBX                             ; 004f36b9
    RET                                 ; 004f36ba
    MOV ECX,EDX                         ; 004f36bb
        ;   Label: LAB_004f36bb
    SHL EAX,0x8                         ; 004f36bd
    SHL ECX,0x10                        ; 004f36c0
    OR ECX,EAX                          ; 004f36c3
    OR ECX,EBX                          ; 004f36c5
    JMP 0x004f3687                      ; 004f36c7
        ;   XREF to: 004f3687 (UNCONDITIONAL_JUMP)  ; LAB_004f3687
    PUSH dword ptr [ESP + 0x20]         ; 004f36c9
        ;   Label: LAB_004f36c9
    PUSH dword ptr [ESP + 0x20]         ; 004f36cd
    PUSH dword ptr [0x01d09908]         ; 004f36d1 | DAT_01d09908
    PUSH dword ptr [0x01d09904]         ; 004f36d7 | DAT_01d09904
    PUSH dword ptr [0x01d09900]         ; 004f36dd | DAT_01d09900
    CALL dword ptr [0x0264bccc]         ; 004f36e3 | DAT_0264bccc
    ADD ESP,0x14                        ; 004f36e9
    JMP 0x004f36a0                      ; 004f36ec
        ;   XREF to: 004f36a0 (UNCONDITIONAL_JUMP)  ; LAB_004f36a0

