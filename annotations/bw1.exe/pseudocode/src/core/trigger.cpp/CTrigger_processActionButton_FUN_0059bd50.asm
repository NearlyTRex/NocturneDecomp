; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_0059bd50(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bd50
        ;   Label: core_trigger.cpp_CTrigger_processActionButton_FUN_0059bd50
    CMP dword ptr [EAX + 0x174],0x3     ; 0059bd54
    JZ 0x0059bd63                       ; 0059bd5b
        ;   XREF to: 0059bd63 (CONDITIONAL_JUMP)  ; LAB_0059bd63
    MOV EAX,0x1                         ; 0059bd5d
    RET                                 ; 0059bd62
    MOV dword ptr [EAX + 0x2f0],0x1     ; 0059bd63
        ;   Label: LAB_0059bd63
    MOV EAX,0x1                         ; 0059bd6d
    RET                                 ; 0059bd72

