; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_00598f20(int param_1)
;
;
; XREF[1]:
;   core_zombie.cpp_FUN_005996d0 at 00599762
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598f20
        ;   Label: core_zombie.cpp_FUN_00598f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00598f21
    PUSH 0x0                            ; 00598f25
    PUSH 0x0                            ; 00598f27
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00598f29
    PUSH EBX                            ; 00598f2f
    MOV dword ptr [EBX + 0x10b08],0x0   ; 00598f30
    CALL dword ptr [EAX + 0x130]        ; 00598f3a
    ADD ESP,0xc                         ; 00598f40
    PUSH 0x0                            ; 00598f43
    PUSH 0x1                            ; 00598f45
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00598f47
    PUSH EBX                            ; 00598f4d
    CALL dword ptr [EAX + 0x130]        ; 00598f4e
    ADD ESP,0xc                         ; 00598f54
    POP EBX                             ; 00598f57
    RET                                 ; 00598f58

