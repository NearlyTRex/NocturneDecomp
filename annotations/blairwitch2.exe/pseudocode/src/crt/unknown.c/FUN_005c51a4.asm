; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c51a4(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce28_0061f2e4 = 005bce28
;   void* PTR_crt_unknown.c_FUN_005bce28_0061f2e8 = 005bce28
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c51a4
        ;   Label: crt_unknown.c_FUN_005c51a4
    MOV EDX,0x5c5138                    ; 005c51a5
    MOV EBX,0x5c517c                    ; 005c51aa
    MOV dword ptr [0x0061f2e4],EDX      ; 005c51af | PTR_crt_unknown.c_FUN_005bce28_0061f2e4
    MOV dword ptr [0x0061f2e8],EBX      ; 005c51b5 | PTR_crt_unknown.c_FUN_005bce28_0061f2e8
    POP EBX                             ; 005c51bb
    RET                                 ; 005c51bc

