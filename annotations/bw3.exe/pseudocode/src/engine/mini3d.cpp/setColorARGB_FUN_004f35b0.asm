; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f35b0(uint argb)
;
; Parameters:
; uint             Stack[0x4]:4   argb
;
; Referenced Globals:
;   undefined4 DAT_005c833d
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d76cc8
;   undefined4 DAT_01d76ccc
;   undefined4 DAT_01d76cd0
;   undefined4 DAT_01d7a6b8
;   undefined4 DAT_01d7a6bc
;   undefined4 DAT_01d7a6c0
;   undefined4 DAT_01d7a6c4
;   undefined4 DAT_02cf60a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f35b0
        ;   Label: engine_mini3d.cpp_setColorARGB_FUN_004f35b0
    SUB ESP,0x8                         ; 004f35b1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f35b4
    MOV EAX,EBX                         ; 004f35b8
    SHR EAX,0x10                        ; 004f35ba
    AND EAX,0xff                        ; 004f35bd
    MOV dword ptr [ESP + 0x4],EAX       ; 004f35c2
    MOV EAX,EBX                         ; 004f35c6
    FILD dword ptr [ESP + 0x4]          ; 004f35c8
    SHR EAX,0x8                         ; 004f35cc
    FLD float ptr [0x005c833d]          ; 004f35cf | DAT_005c833d
    FXCH                                ; 004f35d5
    FMUL ST1                            ; 004f35d7
    AND EAX,0xff                        ; 004f35d9
    MOV dword ptr [ESP + 0x4],EAX       ; 004f35de
    MOV EAX,EBX                         ; 004f35e2
    FILD dword ptr [ESP + 0x4]          ; 004f35e4
    AND EAX,0xff                        ; 004f35e8
    FMUL ST2                            ; 004f35ed
    MOV dword ptr [ESP + 0x4],EAX       ; 004f35ef
    MOV EAX,EBX                         ; 004f35f3
    FILD dword ptr [ESP + 0x4]          ; 004f35f5
    SHR EAX,0x18                        ; 004f35f9
    FMUL ST3                            ; 004f35fc
    AND EAX,0xff                        ; 004f35fe
    MOV dword ptr [ESP + 0x4],EAX       ; 004f3603
    FILD dword ptr [ESP + 0x4]          ; 004f3607
    FMULP ST4                           ; 004f360b
    FLD float ptr [0x01d76c40]          ; 004f360d | DAT_01d76c40
    FXCH ST3                            ; 004f3613
    FSTP float ptr [0x01d7a6b8]         ; 004f3615 | DAT_01d7a6b8
    FXCH                                ; 004f361b
    FSTP float ptr [0x01d7a6bc]         ; 004f361d | DAT_01d7a6bc
    FSTP float ptr [0x01d7a6c0]         ; 004f3623 | DAT_01d7a6c0
    FXCH                                ; 004f3629
    FSTP float ptr [ESP]                ; 004f362b
    FCOMP float ptr [ESP]               ; 004f362e
    FNSTSW AX                           ; 004f3631
    SAHF                                ; 004f3633
    JZ 0x004f3651                       ; 004f3634
        ;   XREF to: 004f3651 (CONDITIONAL_JUMP)  ; LAB_004f3651
    MOV EAX,dword ptr [ESP]             ; 004f3636
    MOV EDX,dword ptr [0x02cf60a4]      ; 004f3639 | DAT_02cf60a4
    MOV [0x01d76c40],EAX                ; 004f363f | DAT_01d76c40
    TEST EDX,EDX                        ; 004f3644
    JZ 0x004f3651                       ; 004f3646
        ;   XREF to: 004f3651 (CONDITIONAL_JUMP)  ; LAB_004f3651
    CMP dword ptr [0x01c6cee8],0x0      ; 004f3648 | DAT_01c6cee8
    JNZ 0x004f365c                      ; 004f364f
        ;   XREF to: 004f365c (CONDITIONAL_JUMP)  ; LAB_004f365c
    MOV dword ptr [0x01d7a6c4],EBX      ; 004f3651 | DAT_01d7a6c4
        ;   Label: LAB_004f3651
    ADD ESP,0x8                         ; 004f3657
    POP EBX                             ; 004f365a
    RET                                 ; 004f365b
    PUSH EAX                            ; 004f365c
        ;   Label: LAB_004f365c
    PUSH dword ptr [0x01d76cd0]         ; 004f365d | DAT_01d76cd0
    PUSH dword ptr [0x01d76ccc]         ; 004f3663 | DAT_01d76ccc
    PUSH dword ptr [0x01d76cc8]         ; 004f3669 | DAT_01d76cc8
    CALL dword ptr [0x02cf60a4]         ; 004f366f | DAT_02cf60a4
    ADD ESP,0x10                        ; 004f3675
    MOV dword ptr [0x01d7a6c4],EBX      ; 004f3678 | DAT_01d7a6c4
    ADD ESP,0x8                         ; 004f367e
    POP EBX                             ; 004f3681
    RET                                 ; 004f3682

