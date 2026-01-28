; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340(CMirrorHack *this_ptr,CDemonActor *user)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b340
        ;   Label: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_0050b340
    CMP dword ptr [EAX + 0x2d4],0x0     ; 0050b344
    JZ 0x0050b350                       ; 0050b34b
        ;   XREF to: 0050b350 (CONDITIONAL_JUMP)  ; LAB_0050b350
    XOR EAX,EAX                         ; 0050b34d
    RET                                 ; 0050b34f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050b350
        ;   Label: LAB_0050b350
    MOV dword ptr [EAX + 0x2d4],EDX     ; 0050b354
    MOV EAX,0x1                         ; 0050b35a
    RET                                 ; 0050b35f

