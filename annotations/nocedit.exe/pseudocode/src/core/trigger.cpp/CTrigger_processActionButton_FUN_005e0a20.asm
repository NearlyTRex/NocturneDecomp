; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e0a20
        ;   Label: core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20
    CMP dword ptr [EAX + 0x174],0x3     ; 005e0a24
    JZ 0x005e0a33                       ; 005e0a2b
        ;   XREF to: 005e0a33 (CONDITIONAL_JUMP)  ; LAB_005e0a33
    MOV EAX,0x1                         ; 005e0a2d
    RET                                 ; 005e0a32
    MOV dword ptr [EAX + 0x2f0],0x1     ; 005e0a33
        ;   Label: LAB_005e0a33
    MOV EAX,0x1                         ; 005e0a3d
    RET                                 ; 005e0a42

