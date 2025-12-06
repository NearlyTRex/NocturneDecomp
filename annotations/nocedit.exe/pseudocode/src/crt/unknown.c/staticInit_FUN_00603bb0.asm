; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_staticInit_FUN_00603bb0()
;
;
; Referenced Globals:
;   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c = 0060ad30
;   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410 = 0060ad30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00603bb0
        ;   Label: crt_unknown.c_staticInit_FUN_00603bb0
    MOV EDX,0x60af5d                    ; 00603bb1 | LAB_0060af5d
    MOV EBX,0x603bc9                    ; 00603bb6
    MOV dword ptr [0x0068540c],EDX      ; 00603bbb | STRTOD_FUNC * PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_0068540c
    MOV dword ptr [0x00685410],EBX      ; 00603bc1 | STRTOD_FUNC * PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410
    POP EBX                             ; 00603bc7
    RET                                 ; 00603bc8

