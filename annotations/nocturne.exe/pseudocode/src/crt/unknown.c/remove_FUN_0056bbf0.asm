; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_remove_FUN_0056bbf0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   crt_stdio.c_remove_FUN_005657c0 at 005657c5
;
; Referenced Globals:
;   void* PTR_DeleteFileA_005754a8 = 00175b4c
;
; Called Functions:
;   DeleteFileA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056bbf0
        ;   Label: crt_unknown.c_remove_FUN_0056bbf0
    PUSH EDX                            ; 0056bbf4
    CALL dword ptr CS:[0x5754a8]        ; 0056bbf5 | PTR_DeleteFileA_005754a8
    TEST EAX,EAX                        ; 0056bbfc
    JZ 0x0056c73c                       ; 0056bbfe
        ;   XREF to: 0056c73c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0056bc04
    RET                                 ; 0056bc06

