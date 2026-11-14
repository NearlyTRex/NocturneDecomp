; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004bf990(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc8054
;   undefined4 DAT_01cc8058
;   undefined4 DAT_01cc805c
;   undefined4 DAT_01cc8060
;   undefined4 DAT_01cc8064
;   undefined4 DAT_01cc8068
;   undefined4 DAT_01cc806c
;   undefined4 DAT_01cc8070
;   undefined4 DAT_01cc8074
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bf990
        ;   Label: core_flattn.cpp_FUN_004bf990
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bf994
    FLD float ptr [EAX + 0x4]           ; 004bf998
    FMUL float ptr [0x01cc8058]         ; 004bf99b | DAT_01cc8058
    FLD float ptr [EAX]                 ; 004bf9a1
    FMUL float ptr [0x01cc8054]         ; 004bf9a3 | DAT_01cc8054
    FADDP                               ; 004bf9a9
    FLD float ptr [EAX + 0x8]           ; 004bf9ab
    FMUL float ptr [0x01cc805c]         ; 004bf9ae | DAT_01cc805c
    FADDP                               ; 004bf9b4
    FSTP float ptr [EDX]                ; 004bf9b6
    FLD float ptr [EAX + 0x4]           ; 004bf9b8
    FMUL float ptr [0x01cc8064]         ; 004bf9bb | DAT_01cc8064
    FLD float ptr [EAX]                 ; 004bf9c1
    FMUL float ptr [0x01cc8060]         ; 004bf9c3 | DAT_01cc8060
    FADDP                               ; 004bf9c9
    FLD float ptr [EAX + 0x8]           ; 004bf9cb
    FMUL float ptr [0x01cc8068]         ; 004bf9ce | DAT_01cc8068
    FADDP                               ; 004bf9d4
    FSTP float ptr [EDX + 0x4]          ; 004bf9d6
    FLD float ptr [EAX + 0x4]           ; 004bf9d9
    FMUL float ptr [0x01cc8070]         ; 004bf9dc | DAT_01cc8070
    FLD float ptr [EAX]                 ; 004bf9e2
    FMUL float ptr [0x01cc806c]         ; 004bf9e4 | DAT_01cc806c
    FADDP                               ; 004bf9ea
    FLD float ptr [EAX + 0x8]           ; 004bf9ec
    FMUL float ptr [0x01cc8074]         ; 004bf9ef | DAT_01cc8074
    FADDP                               ; 004bf9f5
    FSTP float ptr [EDX + 0x8]          ; 004bf9f7
    RET                                 ; 004bf9fa

