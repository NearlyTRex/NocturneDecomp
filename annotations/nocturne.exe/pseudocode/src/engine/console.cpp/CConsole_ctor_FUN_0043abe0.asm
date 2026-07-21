; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * engine_console_cpp_CConsole_ctor_FUN_0043abe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   engine_console.cpp_CConsole_reset_FUN_0043ae00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043abe0
        ;   Label: engine_console.cpp_CConsole_ctor_FUN_0043abe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043abe1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043abe5
    MOV dword ptr [EBX + 0xfac],EAX     ; 0043abe9
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043abef
    MOV dword ptr [EBX + 0xfb0],EAX     ; 0043abf3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043abf9
    MOV dword ptr [EBX + 0xfb4],EAX     ; 0043abfd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043ac03
    MOV EDX,dword ptr [EBX + 0xfb4]     ; 0043ac07
    MOV dword ptr [EBX + 0xfb8],EAX     ; 0043ac0d
    CMP EDX,0x1                         ; 0043ac13
    JL 0x0043ac3e                       ; 0043ac16
        ;   XREF to: 0043ac3e (CONDITIONAL_JUMP)  ; LAB_0043ac3e
    CMP dword ptr [EBX + 0xfb8],0x1     ; 0043ac18
        ;   Label: LAB_0043ac18
    JGE 0x0043ac2b                      ; 0043ac1f
        ;   XREF to: 0043ac2b (CONDITIONAL_JUMP)  ; LAB_0043ac2b
    MOV dword ptr [EBX + 0xfb8],0x1     ; 0043ac21
    PUSH EBX                            ; 0043ac2b
        ;   Label: LAB_0043ac2b
    CALL engine_console.cpp_CConsole_reset_FUN_0043ae00 ; 0043ac2c
        ;   XREF to: 0043ae00 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_reset_FUN_0043ae00()
    ADD ESP,0x4                         ; 0043ac31
    MOV EAX,EBX                         ; 0043ac34
    MOV dword ptr [EBX],0x0             ; 0043ac36
    POP EBX                             ; 0043ac3c
    RET                                 ; 0043ac3d
    MOV dword ptr [EBX + 0xfb4],0x1     ; 0043ac3e
        ;   Label: LAB_0043ac3e
    JMP 0x0043ac18                      ; 0043ac48
        ;   XREF to: 0043ac18 (UNCONDITIONAL_JUMP)  ; LAB_0043ac18

