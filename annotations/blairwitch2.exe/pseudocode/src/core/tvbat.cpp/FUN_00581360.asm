; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_tvbat_cpp_FUN_00581360(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00581360
        ;   Label: core_tvbat.cpp_FUN_00581360
    FLD float ptr [EDX + 0x25a8]        ; 00581364
    FLDZ                                ; 0058136a
    FCOMPP                              ; 0058136c
    FNSTSW AX                           ; 0058136e
    SAHF                                ; 00581370
    JNC 0x00581380                      ; 00581371
        ;   XREF to: 00581380 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX + 0x10cb4],0x3   ; 00581373
    JNZ 0x00581383                      ; 0058137a
        ;   XREF to: 00581383 (CONDITIONAL_JUMP)  ; LAB_00581383
    LEA EAX,[EAX]                       ; 0058137c
    MOV EAX,0x1                         ; 00581383
        ;   Label: LAB_00581383
    RET                                 ; 00581388

