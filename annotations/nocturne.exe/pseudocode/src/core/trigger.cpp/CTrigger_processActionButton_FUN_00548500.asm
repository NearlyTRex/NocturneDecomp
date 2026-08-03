; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_00548500(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548500
        ;   Label: core_trigger.cpp_CTrigger_processActionButton_FUN_00548500
    CMP dword ptr [EAX + 0x16c],0x3     ; 00548504
    JZ 0x00548513                       ; 0054850b
        ;   XREF to: 00548513 (CONDITIONAL_JUMP)  ; LAB_00548513
    MOV EAX,0x1                         ; 0054850d
    RET                                 ; 00548512
    MOV dword ptr [EAX + 0x2e8],0x1     ; 00548513
        ;   Label: LAB_00548513
    MOV EAX,0x1                         ; 0054851d
    RET                                 ; 00548522

