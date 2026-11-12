; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_doc_cpp_getVectorDistance_FUN_0045e070(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0045e070
        ;   Label: core_doc.cpp_getVectorDistance_FUN_0045e070
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045e073
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045e077
    FLD float ptr [EDX]                 ; 0045e07b
    FSUB float ptr [EAX]                ; 0045e07d
    FMUL ST0                            ; 0045e07f
    FLD float ptr [EDX + 0x4]           ; 0045e081
    FSUB float ptr [EAX + 0x4]          ; 0045e084
    FMUL ST0                            ; 0045e087
    FLD float ptr [EDX + 0x8]           ; 0045e089
    FXCH                                ; 0045e08c
    FADDP ST2,ST0                       ; 0045e08e
    FSUB float ptr [EAX + 0x8]          ; 0045e090
    FMUL ST0                            ; 0045e093
    FADDP                               ; 0045e095
    FSQRT                               ; 0045e097
    FSTP float ptr [ESP + 0x8]          ; 0045e099
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045e09d
    ADD ESP,0x10                        ; 0045e0a1
    RET                                 ; 0045e0a4

