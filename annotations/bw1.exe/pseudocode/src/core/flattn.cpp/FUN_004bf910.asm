; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004bf910(float *param_1,float *param_2)
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
;   undefined4 DAT_01cc8078
;   undefined4 DAT_01cc807c
;   undefined4 DAT_01cc8080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bf910
        ;   Label: core_flattn.cpp_FUN_004bf910
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bf914
    FLD float ptr [EAX + 0x4]           ; 004bf918
    FMUL float ptr [0x01cc8058]         ; 004bf91b | DAT_01cc8058
    FLD float ptr [EAX]                 ; 004bf921
    FMUL float ptr [0x01cc8054]         ; 004bf923 | DAT_01cc8054
    FADDP                               ; 004bf929
    FLD float ptr [EAX + 0x8]           ; 004bf92b
    FMUL float ptr [0x01cc805c]         ; 004bf92e | DAT_01cc805c
    FADDP                               ; 004bf934
    FADD float ptr [0x01cc8078]         ; 004bf936 | DAT_01cc8078
    FSTP float ptr [EDX]                ; 004bf93c
    FLD float ptr [EAX + 0x4]           ; 004bf93e
    FMUL float ptr [0x01cc8064]         ; 004bf941 | DAT_01cc8064
    FLD float ptr [EAX]                 ; 004bf947
    FMUL float ptr [0x01cc8060]         ; 004bf949 | DAT_01cc8060
    FADDP                               ; 004bf94f
    FLD float ptr [EAX + 0x8]           ; 004bf951
    FMUL float ptr [0x01cc8068]         ; 004bf954 | DAT_01cc8068
    FADDP                               ; 004bf95a
    FADD float ptr [0x01cc807c]         ; 004bf95c | DAT_01cc807c
    FSTP float ptr [EDX + 0x4]          ; 004bf962
    FLD float ptr [EAX + 0x4]           ; 004bf965
    FMUL float ptr [0x01cc8070]         ; 004bf968 | DAT_01cc8070
    FLD float ptr [EAX]                 ; 004bf96e
    FMUL float ptr [0x01cc806c]         ; 004bf970 | DAT_01cc806c
    FADDP                               ; 004bf976
    FLD float ptr [EAX + 0x8]           ; 004bf978
    FMUL float ptr [0x01cc8074]         ; 004bf97b | DAT_01cc8074
    FADDP                               ; 004bf981
    FADD float ptr [0x01cc8080]         ; 004bf983 | DAT_01cc8080
    FSTP float ptr [EDX + 0x8]          ; 004bf989
    RET                                 ; 004bf98c

