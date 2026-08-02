; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_0056fdbf(int *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fdbf
        ;   Label: crt_unknown.c_FUN_0056fdbf
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fdc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056fdc4
    MOV EAX,dword ptr [EBX]             ; 0056fdc8
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056fdca
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fdcd
    PUSH ECX                            ; 0056fdd0
    ADD EAX,EBX                         ; 0056fdd1
    PUSH EAX                            ; 0056fdd3
    CALL dword ptr [EDX]                ; 0056fdd4
    ADD ESP,0x8                         ; 0056fdd6
    MOV EAX,EBX                         ; 0056fdd9
    POP EBX                             ; 0056fddb
    RET                                 ; 0056fddc

