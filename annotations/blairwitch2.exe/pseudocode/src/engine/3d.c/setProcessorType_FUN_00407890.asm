; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setProcessorType_FUN_00407890(int processor_type)
;
; Parameters:
; int              Stack[0x4]:4   processor_type
;
; Referenced Globals:
;   undefined4 DAT_01c38b50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00407890
        ;   Label: engine_3d.c_setProcessorType_FUN_00407890
    MOV [0x01c38b50],EAX                ; 00407894 | DAT_01c38b50
    RET                                 ; 00407899

