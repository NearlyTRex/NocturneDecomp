; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_fltused_c_staticInit_FUN_005fde60(void)
;
;
; Referenced Globals:
;   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fbc = 0060477f
;   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc0 = 0060477f
;   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc4 = 0060477f
;   void* PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc8 = 0060477f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fde60
        ;   Label: crt_fltused.c_staticInit_FUN_005fde60
    PUSH ESI                            ; 005fde61
    MOV EDX,0x603bc9                    ; 005fde62
    MOV ECX,0x603bf5                    ; 005fde67
    MOV EBX,0x603dc8                    ; 005fde6c
    MOV ESI,0x60477a                    ; 005fde71
    MOV dword ptr [0x00684fbc],EDX      ; 005fde76 | PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fbc
    MOV dword ptr [0x00684fc0],ECX      ; 005fde7c | PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc0
    MOV dword ptr [0x00684fc4],EBX      ; 005fde82 | PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc4
    MOV dword ptr [0x00684fc8],ESI      ; 005fde88 | PTR_crt_stdio.c_reportCPPFloatingPointSupportProblem_FUN_0060477f_00684fc8
    POP ESI                             ; 005fde8e
    POP EBX                             ; 005fde8f
    RET                                 ; 005fde90

