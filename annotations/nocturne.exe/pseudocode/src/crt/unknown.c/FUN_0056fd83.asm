; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_0056fd83(int *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fd83
        ;   Label: crt_unknown.c_FUN_0056fd83
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fd84
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056fd88
    MOV EAX,dword ptr [EBX]             ; 0056fd8c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056fd8e
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fd91
    PUSH ECX                            ; 0056fd94
    ADD EAX,EBX                         ; 0056fd95
    PUSH EAX                            ; 0056fd97
    CALL dword ptr [EDX]                ; 0056fd98
    ADD ESP,0x8                         ; 0056fd9a
    MOV EAX,EBX                         ; 0056fd9d
    POP EBX                             ; 0056fd9f
    RET                                 ; 0056fda0

