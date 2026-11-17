; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b77e0(void)
;
;
; Referenced Globals:
;   void*[4] g_ARRAY_PTR_0061f22c
;   undefined4 g_ARRAY_PTR_0061f22c[1]
;   undefined4 g_ARRAY_PTR_0061f22c[2]
;   undefined4 g_ARRAY_PTR_0061f22c[3]
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
    MOV dword ptr [0x0061f22c],EDX      ; 005b77f6 | g_ARRAY_PTR_0061f22c
    MOV dword ptr [0x0061f230],ECX      ; 005b77fc | g_ARRAY_PTR_0061f22c[1]
    MOV dword ptr [0x0061f234],EBX      ; 005b7802 | g_ARRAY_PTR_0061f22c[2]
    MOV dword ptr [0x0061f238],ESI      ; 005b7808 | g_ARRAY_PTR_0061f22c[3]
    POP ESI                             ; 005b780e
    POP EBX                             ; 005b780f
    RET                                 ; 005b7810

