; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0fc0(LPCSTR param_1)
;
;
; XREF[1]:
;   FUN_005ba1e0 at 005ba1e5
;
; Referenced Globals:
;   void* PTR_DeleteFileA_005c8528 = 001c8caa
;
; Called Functions:
;   DeleteFileA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0fc0
        ;   Label: FUN_005c0fc0
    PUSH EDX                            ; 005c0fc4
    CALL dword ptr CS:[0x5c8528]        ; 005c0fc5 | PTR_DeleteFileA_005c8528
    TEST EAX,EAX                        ; 005c0fcc
    JZ 0x005c036c                       ; 005c0fce
        ;   XREF to: 005c036c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c0fd4
    RET                                 ; 005c0fd6

