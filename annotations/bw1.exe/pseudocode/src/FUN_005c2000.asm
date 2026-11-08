; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c2000(LPCSTR param_1)
;
;
; XREF[2]:
;   FUN_004798c0 at 0047990e
;   FUN_004d6420 at 004d64db
;
; Referenced Globals:
;   void* PTR_CreateDirectoryA_005d0520 = 001d0c68
;
; Called Functions:
;   CreateDirectoryA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005c2000
        ;   Label: FUN_005c2000
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c2002
    PUSH EDX                            ; 005c2006
    CALL dword ptr CS:[0x5d0520]        ; 005c2007 | PTR_CreateDirectoryA_005d0520
    TEST EAX,EAX                        ; 005c200e
    JZ 0x005c862c                       ; 005c2010
        ;   XREF to: 005c862c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c2016
    RET                                 ; 005c2018

