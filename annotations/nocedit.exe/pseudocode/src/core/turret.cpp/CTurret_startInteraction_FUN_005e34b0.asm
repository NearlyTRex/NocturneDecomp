; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_005e34b0(CTurret *this_ptr,CDemonActor *user)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e34b0
        ;   Label: core_turret.cpp_CTurret_startInteraction_FUN_005e34b0
    CMP dword ptr [EAX + 0x85c],0x0     ; 005e34b4
    JZ 0x005e34c0                       ; 005e34bb
        ;   XREF to: 005e34c0 (CONDITIONAL_JUMP)  ; LAB_005e34c0
    XOR EAX,EAX                         ; 005e34bd
    RET                                 ; 005e34bf
    MOV EDX,dword ptr [ESP + 0x8]       ; 005e34c0
        ;   Label: LAB_005e34c0
    MOV dword ptr [EAX + 0x85c],EDX     ; 005e34c4
    MOV EAX,0x1                         ; 005e34ca
    RET                                 ; 005e34cf

