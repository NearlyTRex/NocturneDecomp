; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getClipFlags_FUN_004f48b0(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d098dc
;   undefined4 DAT_01d09910
;   undefined4 DAT_01d09918
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 004f48b0
        ;   Label: engine_mini3d.cpp_getClipFlags_FUN_004f48b0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f48b3
    MOV EAX,[0x01d09918]                ; 004f48b7 | DAT_01d09918
    FLD float ptr [EDX + 0x4]           ; 004f48bc
    FSUB float ptr [EAX + 0x28]         ; 004f48bf
    FLD ST0                             ; 004f48c2
    FMUL float ptr [EAX + 0xc]          ; 004f48c4
    FLD float ptr [EDX]                 ; 004f48c7
    FSUB float ptr [EAX + 0x24]         ; 004f48c9
    FLD ST0                             ; 004f48cc
    FMUL float ptr [EAX + 0x4]          ; 004f48ce
    FLD ST1                             ; 004f48d1
    FMUL float ptr [EAX + 0x8]          ; 004f48d3
    FXCH ST2                            ; 004f48d6
    FMUL float ptr [EAX]                ; 004f48d8
    FLD ST4                             ; 004f48da
    FMUL float ptr [EAX + 0x10]         ; 004f48dc
    FXCH ST5                            ; 004f48df
    FMUL float ptr [EAX + 0x14]         ; 004f48e1
    FLD float ptr [EDX + 0x8]           ; 004f48e4
    FXCH ST2                            ; 004f48e7
    FADDP ST5,ST0                       ; 004f48e9
    FXCH                                ; 004f48eb
    FSUB float ptr [EAX + 0x2c]         ; 004f48ed
    FLD ST0                             ; 004f48f0
    FMUL float ptr [EAX + 0x18]         ; 004f48f2
    FXCH ST6                            ; 004f48f5
    FADDP ST3,ST0                       ; 004f48f7
    FXCH                                ; 004f48f9
    FADDP ST3,ST0                       ; 004f48fb
    FLD ST0                             ; 004f48fd
    FMUL float ptr [EAX + 0x1c]         ; 004f48ff
    FXCH                                ; 004f4902
    FMUL float ptr [EAX + 0x20]         ; 004f4904
    XOR DL,DL                           ; 004f4907
    FXCH ST5                            ; 004f4909
    FADDP ST4,ST0                       ; 004f490b
    FADDP                               ; 004f490d
    FXCH ST3                            ; 004f490f
    FADDP                               ; 004f4911
    FXCH                                ; 004f4913
    FSTP float ptr [ESP + 0x10]         ; 004f4915
    FXCH                                ; 004f4919
    FSTP float ptr [ESP + 0xc]          ; 004f491b
    FSTP float ptr [ESP + 0x14]         ; 004f491f
    FLD float ptr [ESP + 0x10]          ; 004f4923
    FCOMP float ptr [ESP + 0x14]        ; 004f4927
    FNSTSW AX                           ; 004f492b
    SAHF                                ; 004f492d
    JBE 0x004f4932                      ; 004f492e
        ;   XREF to: 004f4932 (CONDITIONAL_JUMP)  ; LAB_004f4932
    MOV DL,0x1                          ; 004f4930
    FLD float ptr [ESP + 0x14]          ; 004f4932
        ;   Label: LAB_004f4932
    FCHS                                ; 004f4936
    FCOMP float ptr [ESP + 0x10]        ; 004f4938
    FNSTSW AX                           ; 004f493c
    SAHF                                ; 004f493e
    JBE 0x004f4944                      ; 004f493f
        ;   XREF to: 004f4944 (CONDITIONAL_JUMP)  ; LAB_004f4944
    OR DL,0x2                           ; 004f4941
    FLD float ptr [ESP + 0xc]           ; 004f4944
        ;   Label: LAB_004f4944
    FCOMP float ptr [ESP + 0x14]        ; 004f4948
    FNSTSW AX                           ; 004f494c
    SAHF                                ; 004f494e
    JBE 0x004f4954                      ; 004f494f
        ;   XREF to: 004f4954 (CONDITIONAL_JUMP)  ; LAB_004f4954
    OR DL,0x4                           ; 004f4951
    FLD float ptr [ESP + 0x14]          ; 004f4954
        ;   Label: LAB_004f4954
    FCHS                                ; 004f4958
    FCOMP float ptr [ESP + 0xc]         ; 004f495a
    FNSTSW AX                           ; 004f495e
    SAHF                                ; 004f4960
    JBE 0x004f4966                      ; 004f4961
        ;   XREF to: 004f4966 (CONDITIONAL_JUMP)  ; LAB_004f4966
    OR DL,0x8                           ; 004f4963
    FLD float ptr [ESP + 0x14]          ; 004f4966
        ;   Label: LAB_004f4966
    FCOMP float ptr [0x01d098dc]        ; 004f496a | DAT_01d098dc
    FNSTSW AX                           ; 004f4970
    SAHF                                ; 004f4972
    JA 0x004f4978                       ; 004f4973
        ;   XREF to: 004f4978 (CONDITIONAL_JUMP)  ; LAB_004f4978
    OR DL,0x10                          ; 004f4975
    FLD float ptr [ESP + 0x14]          ; 004f4978
        ;   Label: LAB_004f4978
    FCOMP float ptr [0x01d09910]        ; 004f497c | DAT_01d09910
    FNSTSW AX                           ; 004f4982
    SAHF                                ; 004f4984
    JC 0x004f498a                       ; 004f4985
        ;   XREF to: 004f498a (CONDITIONAL_JUMP)  ; LAB_004f498a
    OR DL,0x20                          ; 004f4987
    MOV AL,DL                           ; 004f498a
        ;   Label: LAB_004f498a
    ADD ESP,0x18                        ; 004f498c
    RET                                 ; 004f498f

