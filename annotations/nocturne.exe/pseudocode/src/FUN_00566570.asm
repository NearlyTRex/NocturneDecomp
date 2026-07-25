; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566570(LPCSTR param_1)
;
;
; XREF[2]:
;   FUN_00470730 at 00470abf
;   FUN_0056c864 at 0056c93f
;
; Referenced Globals:
;   void* PTR_SetCurrentDirectoryA_0057558c = 00175f86
;
; Called Functions:
;   SetCurrentDirectoryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00566570
        ;   Label: FUN_00566570
    PUSH EDX                            ; 00566574
    CALL dword ptr CS:[0x57558c]        ; 00566575 | PTR_SetCurrentDirectoryA_0057558c
    TEST EAX,EAX                        ; 0056657c
    JZ 0x0056c73c                       ; 0056657e
        ;   XREF to: 0056c73c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00566584
    RET                                 ; 00566586

