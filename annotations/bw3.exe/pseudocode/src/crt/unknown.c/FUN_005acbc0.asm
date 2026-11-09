; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005acbc0(LPCSTR param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a54b0 at 005a54b5
;
; Referenced Globals:
;   void* PTR_DeleteFileA_005b3534 = 001b3cc0
;
; Called Functions:
;   DeleteFileA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005acbc0
        ;   Label: crt_unknown.c_FUN_005acbc0
    PUSH EDX                            ; 005acbc4
    CALL dword ptr CS:[0x5b3534]        ; 005acbc5 | PTR_DeleteFileA_005b3534
    TEST EAX,EAX                        ; 005acbcc
    JZ 0x005ab46c                       ; 005acbce
        ;   XREF to: 005ab46c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005acbd4
    RET                                 ; 005acbd6

