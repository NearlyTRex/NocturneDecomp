; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setProcessorType_FUN_00407700(int processor_type)
;
; Parameters:
; int              Stack[0x4]:4   processor_type
;
; Referenced Globals:
;   int g_INT_01c6e2b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00407700
        ;   Label: engine_3d.c_setProcessorType_FUN_00407700
    MOV [0x01c6e2b0],EAX                ; 00407704 | g_INT_01c6e2b0
    RET                                 ; 00407709

