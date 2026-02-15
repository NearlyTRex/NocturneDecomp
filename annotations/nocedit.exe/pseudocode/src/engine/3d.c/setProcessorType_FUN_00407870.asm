; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setProcessorType_FUN_00407870(int processor_type)
;
; Parameters:
; int              Stack[0x4]:4   processor_type
;
; Referenced Globals:
;   int g_ProcessorType
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00407870
        ;   Label: engine_3d.c_setProcessorType_FUN_00407870
    MOV [0x02d0529c],EAX                ; 00407874 | g_ProcessorType
    RET                                 ; 00407879

