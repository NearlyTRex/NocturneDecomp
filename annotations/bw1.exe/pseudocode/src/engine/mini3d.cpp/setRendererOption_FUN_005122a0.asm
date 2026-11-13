; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRendererOption_FUN_005122a0(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_006258d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005122a0
        ;   Label: engine_mini3d.cpp_setRendererOption_FUN_005122a0
    MOV [0x006258d0],EAX                ; 005122a4 | DAT_006258d0
    RET                                 ; 005122a9

