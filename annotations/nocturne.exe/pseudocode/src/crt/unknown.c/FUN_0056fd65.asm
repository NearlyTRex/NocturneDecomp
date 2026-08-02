; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_0056fd65(int *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fd65
        ;   Label: crt_unknown.c_FUN_0056fd65
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fd66
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056fd6a
    MOV EAX,dword ptr [EBX]             ; 0056fd6e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056fd70
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fd73
    PUSH ECX                            ; 0056fd76
    ADD EAX,EBX                         ; 0056fd77
    PUSH EAX                            ; 0056fd79
    CALL dword ptr [EDX]                ; 0056fd7a
    ADD ESP,0x8                         ; 0056fd7c
    MOV EAX,EBX                         ; 0056fd7f
    POP EBX                             ; 0056fd81
    RET                                 ; 0056fd82

