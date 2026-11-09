; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b77e0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005bcc3f_0061f22c = 005bcc3f
;   undefined1* PTR_crt_unknown.c_FUN_005bcc3f_0061f230 = 005bcc3f
;   undefined1* PTR_crt_unknown.c_FUN_005bcc3f_0061f234 = 005bcc3f
;   undefined1* PTR_crt_unknown.c_FUN_005bcc3f_0061f238 = 005bcc3f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b77e0
        ;   Label: crt_unknown.c_FUN_005b77e0
    PUSH ESI                            ; 005b77e1
    MOV EDX,0x5bc089                    ; 005b77e2
    MOV ECX,0x5bc0b5                    ; 005b77e7
    MOV EBX,0x5bc288                    ; 005b77ec
    MOV ESI,0x5bcc3a                    ; 005b77f1
    MOV dword ptr [0x0061f22c],EDX      ; 005b77f6 | PTR_crt_unknown.c_FUN_005bcc3f_0061f22c
    MOV dword ptr [0x0061f230],ECX      ; 005b77fc | PTR_crt_unknown.c_FUN_005bcc3f_0061f230
    MOV dword ptr [0x0061f234],EBX      ; 005b7802 | PTR_crt_unknown.c_FUN_005bcc3f_0061f234
    MOV dword ptr [0x0061f238],ESI      ; 005b7808 | PTR_crt_unknown.c_FUN_005bcc3f_0061f238
    POP ESI                             ; 005b780e
    POP EBX                             ; 005b780f
    RET                                 ; 005b7810

