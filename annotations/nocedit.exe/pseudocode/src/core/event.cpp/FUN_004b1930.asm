; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_event_cpp_FUN_004b1930(float *param_1,float *param_2)
;
; Parameters:
; float *          Stack[0x4]:4   param_1
; float *          Stack[0x8]:4   param_2
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004b1930
        ;   Label: core_event.cpp_FUN_004b1930
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b1933
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b1937
    FLD float ptr [EDX]                 ; 004b193b
    FSUB float ptr [EAX]                ; 004b193d
    FMUL ST0                            ; 004b193f
    FLD float ptr [EDX + 0x4]           ; 004b1941
    FSUB float ptr [EAX + 0x4]          ; 004b1944
    FMUL ST0                            ; 004b1947
    FLD float ptr [EDX + 0x8]           ; 004b1949
    FXCH                                ; 004b194c
    FADDP ST2,ST0                       ; 004b194e
    FSUB float ptr [EAX + 0x8]          ; 004b1950
    FMUL ST0                            ; 004b1953
    FADDP                               ; 004b1955
    FSQRT                               ; 004b1957
    FSTP float ptr [ESP + 0x8]          ; 004b1959
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b195d
    ADD ESP,0x10                        ; 004b1961
    RET                                 ; 004b1964

