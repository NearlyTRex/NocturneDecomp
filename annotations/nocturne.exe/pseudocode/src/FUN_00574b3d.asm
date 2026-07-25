; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b3d(_EXCEPTION_POINTERS *param_1)
;
;
; Referenced Globals:
;   void* PTR_SetUnhandledExceptionFilter_005755b4 = 00176048
;   void* PTR_UnhandledExceptionFilter_005755d0 = 001760b8
;
; *****************************************************************************

section .text

    AND EAX,0x5755b4                    ; 00574b3d | PTR_SetUnhandledExceptionFilter_005755b4
        ;   Label: FUN_00574b3d
    JMP dword ptr [0x005755d0]          ; 00574b42 | PTR_UnhandledExceptionFilter_005755d0

