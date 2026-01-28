; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void __watcallStack crt_stdio_c_storeErrorState_FUN_0060b78e(uint *destination,uint error_state)
;
; Parameters:
; uint *           Stack[0x4]:4   destination
; uint             Stack[0x8]:4   error_state
;
; XREF[1]:
;   crt_stdio.c_reportStreamError_FUN_00606020 at 00606048
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060b78e
        ;   Label: crt_stdio.c_storeErrorState_FUN_0060b78e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060b792
    MOV dword ptr [EAX],EDX             ; 0060b796
    RET                                 ; 0060b798

