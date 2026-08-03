; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_004cbd30(CMirrorHack *this_ptr,CDemonActor *user)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbd30
        ;   Label: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_004cbd30
    CMP dword ptr [EAX + 0x2cc],0x0     ; 004cbd34
    JZ 0x004cbd40                       ; 004cbd3b
        ;   XREF to: 004cbd40 (CONDITIONAL_JUMP)  ; LAB_004cbd40
    XOR EAX,EAX                         ; 004cbd3d
    RET                                 ; 004cbd3f
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cbd40
        ;   Label: LAB_004cbd40
    MOV dword ptr [EAX + 0x2cc],EDX     ; 004cbd44
    MOV EAX,0x1                         ; 004cbd4a
    RET                                 ; 004cbd4f

