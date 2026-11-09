; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_00506670(CMirrorHack *this_ptr,CDemonActor *user)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00506670
        ;   Label: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_00506670
    CMP dword ptr [EAX + 0x2d4],0x0     ; 00506674
    JZ 0x00506680                       ; 0050667b
        ;   XREF to: 00506680 (CONDITIONAL_JUMP)  ; LAB_00506680
    XOR EAX,EAX                         ; 0050667d
    RET                                 ; 0050667f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00506680
        ;   Label: LAB_00506680
    MOV dword ptr [EAX + 0x2d4],EDX     ; 00506684
    MOV EAX,0x1                         ; 0050668a
    RET                                 ; 0050668f

