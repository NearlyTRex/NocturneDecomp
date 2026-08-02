; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_0056fda1(int *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fda1
        ;   Label: crt_unknown.c_FUN_0056fda1
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fda2
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056fda6
    MOV EAX,dword ptr [EBX]             ; 0056fdaa
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056fdac
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fdaf
    PUSH ECX                            ; 0056fdb2
    ADD EAX,EBX                         ; 0056fdb3
    PUSH EAX                            ; 0056fdb5
    CALL dword ptr [EDX]                ; 0056fdb6
    ADD ESP,0x8                         ; 0056fdb8
    MOV EAX,EBX                         ; 0056fdbb
    POP EBX                             ; 0056fdbd
    RET                                 ; 0056fdbe

