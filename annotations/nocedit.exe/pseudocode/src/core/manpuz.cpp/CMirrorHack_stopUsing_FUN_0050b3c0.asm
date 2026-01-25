; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_manpuz.cpp_CMirrorHack_stopUsing_FUN_0050b3c0(CMirrorHack * this_ptr, CDemonActor * user)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b3c0
        ;   Label: core_manpuz.cpp_CMirrorHack_stopUsing_FUN_0050b3c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050b3c4
    CMP EDX,dword ptr [EAX + 0x2d4]     ; 0050b3c8
    JZ 0x0050b3d1                       ; 0050b3ce
        ;   XREF to: 0050b3d1 (CONDITIONAL_JUMP)  ; LAB_0050b3d1
    RET                                 ; 0050b3d0
    MOV dword ptr [EAX + 0x2d4],0x0     ; 0050b3d1
        ;   Label: LAB_0050b3d1
    RET                                 ; 0050b3db

