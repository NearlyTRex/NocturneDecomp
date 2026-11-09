; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_stopInteraction_FUN_005066f0(CMirrorHack *this_ptr,CDemonActor *user)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005066f0
        ;   Label: core_manpuz.cpp_CMirrorHack_stopInteraction_FUN_005066f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005066f4
    CMP EDX,dword ptr [EAX + 0x2d4]     ; 005066f8
    JZ 0x00506701                       ; 005066fe
        ;   XREF to: 00506701 (CONDITIONAL_JUMP)  ; LAB_00506701
    RET                                 ; 00506700
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00506701
        ;   Label: LAB_00506701
    RET                                 ; 0050670b

