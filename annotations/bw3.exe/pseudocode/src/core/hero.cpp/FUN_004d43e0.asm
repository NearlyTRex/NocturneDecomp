; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d43e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042c0d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d43e0
        ;   Label: core_hero.cpp_FUN_004d43e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d43e4
    PUSH dword ptr [ESP + 0x10]         ; 004d43e8
    PUSH EDX                            ; 004d43ec
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d43ed
    PUSH ECX                            ; 004d43f1
    PUSH EAX                            ; 004d43f2
    MOV dword ptr [EAX + 0xcdcc],0x0    ; 004d43f3
    CALL core_charactr.cpp_FUN_0042c0d0 ; 004d43fd
        ;   XREF to: 0042c0d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c0d0()
    ADD ESP,0x10                        ; 004d4402
    RET                                 ; 004d4405

