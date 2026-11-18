; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setProcessorType_FUN_004076c0(int processor_type)
;
; Parameters:
; int              Stack[0x4]:4   processor_type
;
; Referenced Globals:
;   int g_ProcessorType
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004076c0
        ;   Label: engine_3d.c_setProcessorType_FUN_004076c0
    MOV [0x01c51d10],EAX                ; 004076c4 | g_ProcessorType
    RET                                 ; 004076c9

