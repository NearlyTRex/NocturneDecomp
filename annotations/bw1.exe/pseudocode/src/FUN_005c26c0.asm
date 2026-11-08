; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c26c0(LPCSTR param_1)
;
;
; XREF[1]:
;   FUN_005c8094 at 005c816f
;
; Referenced Globals:
;   void* PTR_SetCurrentDirectoryA_005d0628 = 001d1140
;
; Called Functions:
;   SetCurrentDirectoryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c26c0
        ;   Label: FUN_005c26c0
    PUSH EDX                            ; 005c26c4
    CALL dword ptr CS:[0x5d0628]        ; 005c26c5 | PTR_SetCurrentDirectoryA_005d0628
    TEST EAX,EAX                        ; 005c26cc
    JZ 0x005c862c                       ; 005c26ce
        ;   XREF to: 005c862c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c26d4
    RET                                 ; 005c26d6

