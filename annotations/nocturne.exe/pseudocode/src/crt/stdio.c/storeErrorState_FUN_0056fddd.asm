; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_stdio_c_storeErrorState_FUN_0056fddd(uint *destination,uint error_state)
;
; Parameters:
; uint *           Stack[0x4]:4   destination
; uint             Stack[0x8]:4   error_state
;
; XREF[1]:
;   crt_stdio.c_reportStreamError_FUN_0056b327 at 0056b34f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056fddd
        ;   Label: crt_stdio.c_storeErrorState_FUN_0056fddd
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056fde1
    MOV dword ptr [EAX],EDX             ; 0056fde5
    RET                                 ; 0056fde7

