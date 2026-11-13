; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRendererOption_FUN_004eda70(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_00606830
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eda70
        ;   Label: engine_mini3d.cpp_setRendererOption_FUN_004eda70
    MOV [0x00606830],EAX                ; 004eda74 | DAT_00606830
    RET                                 ; 004eda79

