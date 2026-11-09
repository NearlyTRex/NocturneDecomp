; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a2910(void)
;
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005a7d7f_00607928 = 005a7d7f
;   undefined1* PTR_crt_unknown.c_FUN_005a7d7f_0060792c = 005a7d7f
;   undefined1* PTR_crt_unknown.c_FUN_005a7d7f_00607930 = 005a7d7f
;   undefined1* PTR_crt_unknown.c_FUN_005a7d7f_00607934 = 005a7d7f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2910
        ;   Label: crt_unknown.c_FUN_005a2910
    PUSH ESI                            ; 005a2911
    MOV EDX,0x5a71c9                    ; 005a2912
    MOV ECX,0x5a71f5                    ; 005a2917
    MOV EBX,0x5a73c8                    ; 005a291c
    MOV ESI,0x5a7d7a                    ; 005a2921
    MOV dword ptr [0x00607928],EDX      ; 005a2926 | PTR_crt_unknown.c_FUN_005a7d7f_00607928
    MOV dword ptr [0x0060792c],ECX      ; 005a292c | PTR_crt_unknown.c_FUN_005a7d7f_0060792c
    MOV dword ptr [0x00607930],EBX      ; 005a2932 | PTR_crt_unknown.c_FUN_005a7d7f_00607930
    MOV dword ptr [0x00607934],ESI      ; 005a2938 | PTR_crt_unknown.c_FUN_005a7d7f_00607934
    POP ESI                             ; 005a293e
    POP EBX                             ; 005a293f
    RET                                 ; 005a2940

