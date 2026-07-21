; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_tvbat_cpp_CTVBat_getCollisionType_FUN_0054c0c0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054c0c0
        ;   Label: core_tvbat.cpp_CTVBat_getCollisionType_FUN_0054c0c0
    FLD float ptr [EDX + 0x2434]        ; 0054c0c4
    FLDZ                                ; 0054c0ca
    FCOMPP                              ; 0054c0cc
    FNSTSW AX                           ; 0054c0ce
    SAHF                                ; 0054c0d0
    JNC 0x0054c0e0                      ; 0054c0d1
        ;   XREF to: 0054c0e0 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX + 0xbee0],0x3    ; 0054c0d3
    JNZ 0x0054c0e3                      ; 0054c0da
        ;   XREF to: 0054c0e3 (CONDITIONAL_JUMP)  ; LAB_0054c0e3
    LEA EAX,[EAX]                       ; 0054c0dc
    MOV EAX,0x1                         ; 0054c0e3
        ;   Label: LAB_0054c0e3
    RET                                 ; 0054c0e8

