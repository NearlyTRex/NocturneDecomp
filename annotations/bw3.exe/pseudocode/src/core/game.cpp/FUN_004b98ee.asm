; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b98ee(float *param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004b98ee
        ;   Label: core_game.cpp_FUN_004b98ee
    SUB ESP,0x4                         ; 004b98f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b98f3
    MOV EAX,[0x005fe9dc]                ; 004b98f7 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004b98fc
    FMUL float ptr [ESP + 0x10]         ; 004b9902
    FDIV float ptr [ESP + 0xc]          ; 004b9906
    FLDZ                                ; 004b990a
    FXCH                                ; 004b990c
    FSTP float ptr [ESP]                ; 004b990e
    FCOMP float ptr [EDX]               ; 004b9911
    FNSTSW AX                           ; 004b9913
    SAHF                                ; 004b9915
    JBE 0x004b9938                      ; 004b9916
        ;   XREF to: 004b9938 (CONDITIONAL_JUMP)  ; LAB_004b9938
    FLD float ptr [EDX]                 ; 004b9918
    FADD float ptr [ESP]                ; 004b991a
    FLDZ                                ; 004b991d
    FXCH                                ; 004b991f
    FSTP float ptr [EDX]                ; 004b9921
    FCOMP float ptr [EDX]               ; 004b9923
    FNSTSW AX                           ; 004b9925
    SAHF                                ; 004b9927
    JC 0x004b992e                       ; 004b9928
        ;   XREF to: 004b992e (CONDITIONAL_JUMP)  ; LAB_004b992e
    ADD ESP,0x4                         ; 004b992a
        ;   Label: LAB_004b992a
    RET                                 ; 004b992d
    MOV dword ptr [EDX],0x0             ; 004b992e
        ;   Label: LAB_004b992e
    ADD ESP,0x4                         ; 004b9934
    RET                                 ; 004b9937
    FLD float ptr [EDX]                 ; 004b9938
        ;   Label: LAB_004b9938
    FSUB float ptr [ESP]                ; 004b993a
    FLDZ                                ; 004b993d
    FXCH                                ; 004b993f
    FSTP float ptr [EDX]                ; 004b9941
    FCOMP float ptr [EDX]               ; 004b9943
    FNSTSW AX                           ; 004b9945
    SAHF                                ; 004b9947
    JBE 0x004b992a                      ; 004b9948
        ;   XREF to: 004b992a (CONDITIONAL_JUMP)  ; LAB_004b992a
    MOV dword ptr [EDX],0x0             ; 004b994a
    ADD ESP,0x4                         ; 004b9950
    RET                                 ; 004b9953

