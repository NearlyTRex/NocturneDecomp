; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ba2e0(LPCSTR param_1)
;
;
; XREF[1]:
;   FUN_005bfdd4 at 005bfeaf
;
; Referenced Globals:
;   void* PTR_SetCurrentDirectoryA_005c8614 = 001c9104
;
; Called Functions:
;   SetCurrentDirectoryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba2e0
        ;   Label: FUN_005ba2e0
    PUSH EDX                            ; 005ba2e4
    CALL dword ptr CS:[0x5c8614]        ; 005ba2e5 | PTR_SetCurrentDirectoryA_005c8614
    TEST EAX,EAX                        ; 005ba2ec
    JZ 0x005c036c                       ; 005ba2ee
        ;   XREF to: 005c036c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005ba2f4
    RET                                 ; 005ba2f6

