; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_tvbat.cpp_CTVBat_FUN_005e50d0(CTVBat * this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005e50d0
        ;   Label: core_tvbat.cpp_CTVBat_FUN_005e50d0
    FLD float ptr [EDX + 0x243c]        ; 005e50d4
    FLDZ                                ; 005e50da
    FCOMPP                              ; 005e50dc
    FNSTSW AX                           ; 005e50de
    SAHF                                ; 005e50e0
    JNC 0x005e50f0                      ; 005e50e1
        ;   XREF to: 005e50f0 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX + 0xc078],0x3    ; 005e50e3
    JNZ 0x005e50f3                      ; 005e50ea
        ;   XREF to: 005e50f3 (CONDITIONAL_JUMP)  ; LAB_005e50f3
    LEA EAX,[EAX]                       ; 005e50ec
    MOV EAX,0x1                         ; 005e50f3
        ;   Label: LAB_005e50f3
    RET                                 ; 005e50f8

