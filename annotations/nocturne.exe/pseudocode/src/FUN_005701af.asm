; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005701af(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005701af
        ;   Label: FUN_005701af
    MOV EDX,dword ptr [ESP + 0x8]       ; 005701b0
    MOV ECX,dword ptr [ESP + 0x10]      ; 005701b4
    PUSH ECX                            ; 005701b8
    PUSH 0x0                            ; 005701b9
    MOV EBX,dword ptr [ESP + 0x14]      ; 005701bb
    PUSH EBX                            ; 005701bf
    MOV EAX,dword ptr [EDX + 0x28]      ; 005701c0
    PUSH EDX                            ; 005701c3
    CALL dword ptr [EAX + 0x18]         ; 005701c4
    ADD ESP,0x10                        ; 005701c7
    POP EBX                             ; 005701ca
    RET                                 ; 005701cb

