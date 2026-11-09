; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004eabd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040ad50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eabd0
        ;   Label: core_melee.cpp_FUN_004eabd0
    PUSH ESI                            ; 004eabd1
    SUB ESP,0x4                         ; 004eabd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eabd5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004eabd9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004eabdd
    PUSH EDX                            ; 004eabe1
    PUSH ESI                            ; 004eabe2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004eabe3
    PUSH ECX                            ; 004eabe7
    PUSH EBX                            ; 004eabe8
    CALL core_actor.cpp_FUN_0040ad50    ; 004eabe9
        ;   XREF to: 0040ad50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ad50()
    ADD ESP,0x10                        ; 004eabee
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004eabf1
    PUSH EBX                            ; 004eabf7
    CALL dword ptr [EAX + 0xf4]         ; 004eabf8
    MOV dword ptr [ESP + 0x4],EAX       ; 004eabfe
    MOV EAX,dword ptr [ESP + 0x4]       ; 004eac02
    MOV dword ptr [ESI + 0x4],EAX       ; 004eac06
    MOV EAX,dword ptr [EBX + 0x6e0]     ; 004eac09
    MOV dword ptr [ESI + 0x2c],EAX      ; 004eac0f
    MOV EBX,dword ptr [EBX + 0x6f8]     ; 004eac12
    ADD ESP,0x4                         ; 004eac18
    MOV dword ptr [ESI + 0x28],EBX      ; 004eac1b
    ADD ESP,0x4                         ; 004eac1e
    POP ESI                             ; 004eac21
    POP EBX                             ; 004eac22
    RET                                 ; 004eac23

