; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004bf990(CVector3f *vector_out,CVector3f *vector_in)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vector_out
; CVector3f *      Stack[0x8]:4   vector_in
;
; Referenced Globals:
;   float g_FLOAT_01cc8054
;   float g_FLOAT_01cc8058
;   float g_FLOAT_01cc805c
;   float g_FLOAT_01cc8060
;   float g_FLOAT_01cc8064
;   float g_FLOAT_01cc8068
;   float g_FLOAT_01cc806c
;   float g_FLOAT_01cc8070
;   float g_FLOAT_01cc8074
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bf990
        ;   Label: core_flattn.cpp_flattenTransformVector_FUN_004bf990
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bf994
    FLD float ptr [EAX + 0x4]           ; 004bf998
    FMUL float ptr [0x01cc8058]         ; 004bf99b | g_FLOAT_01cc8058
    FLD float ptr [EAX]                 ; 004bf9a1
    FMUL float ptr [0x01cc8054]         ; 004bf9a3 | g_FLOAT_01cc8054
    FADDP                               ; 004bf9a9
    FLD float ptr [EAX + 0x8]           ; 004bf9ab
    FMUL float ptr [0x01cc805c]         ; 004bf9ae | g_FLOAT_01cc805c
    FADDP                               ; 004bf9b4
    FSTP float ptr [EDX]                ; 004bf9b6
    FLD float ptr [EAX + 0x4]           ; 004bf9b8
    FMUL float ptr [0x01cc8064]         ; 004bf9bb | g_FLOAT_01cc8064
    FLD float ptr [EAX]                 ; 004bf9c1
    FMUL float ptr [0x01cc8060]         ; 004bf9c3 | g_FLOAT_01cc8060
    FADDP                               ; 004bf9c9
    FLD float ptr [EAX + 0x8]           ; 004bf9cb
    FMUL float ptr [0x01cc8068]         ; 004bf9ce | g_FLOAT_01cc8068
    FADDP                               ; 004bf9d4
    FSTP float ptr [EDX + 0x4]          ; 004bf9d6
    FLD float ptr [EAX + 0x4]           ; 004bf9d9
    FMUL float ptr [0x01cc8070]         ; 004bf9dc | g_FLOAT_01cc8070
    FLD float ptr [EAX]                 ; 004bf9e2
    FMUL float ptr [0x01cc806c]         ; 004bf9e4 | g_FLOAT_01cc806c
    FADDP                               ; 004bf9ea
    FLD float ptr [EAX + 0x8]           ; 004bf9ec
    FMUL float ptr [0x01cc8074]         ; 004bf9ef | g_FLOAT_01cc8074
    FADDP                               ; 004bf9f5
    FSTP float ptr [EDX + 0x8]          ; 004bf9f7
    RET                                 ; 004bf9fa

