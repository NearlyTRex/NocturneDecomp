; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c9280(LPCSTR param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c25c0 at 005c25c5
;
; Referenced Globals:
;   void* PTR_DeleteFileA_005d0538 = 001d0cd2
;
; Called Functions:
;   DeleteFileA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c9280
        ;   Label: crt_unknown.c_FUN_005c9280
    PUSH EDX                            ; 005c9284
    CALL dword ptr CS:[0x5d0538]        ; 005c9285 | PTR_DeleteFileA_005d0538
    TEST EAX,EAX                        ; 005c928c
    JZ 0x005c862c                       ; 005c928e
        ;   XREF to: 005c862c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c9294
    RET                                 ; 005c9296

