; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a4e10(LPCSTR param_1)
;
;
; XREF[2]:
;   FUN_00466190 at 004661de
;   FUN_004bda10 at 004bdacb
;
; Referenced Globals:
;   void* PTR_CreateDirectoryA_005b351c = 001b3c56
;
; Called Functions:
;   CreateDirectoryA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005a4e10
        ;   Label: FUN_005a4e10
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a4e12
    PUSH EDX                            ; 005a4e16
    CALL dword ptr CS:[0x5b351c]        ; 005a4e17 | PTR_CreateDirectoryA_005b351c
    TEST EAX,EAX                        ; 005a4e1e
    JZ 0x005ab46c                       ; 005a4e20
        ;   XREF to: 005ab46c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a4e26
    RET                                 ; 005a4e28

