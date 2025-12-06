; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_debug.c_TriggerDebuggerBreak_FUN_0060b500(char * error_message, ushort flags)
;
; Parameters:
; char *           Stack[0x4]:4   error_message
; ushort           Stack[0x8]:2   flags
;
; XREF[2]:
;   crt_cpp.c_reportPureVirtualError_FUN_00605b23 at 00605b31
;   crt_startup.c_HandleRuntimeError_FUN_00606660 at 0060666e
;
; Referenced Globals:
;   undefined1 g_DebuggerIsAttached
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00685474],0x0       ; 0060b500 | undefined1 g_DebuggerIsAttached
        ;   Label: crt_debug.c_TriggerDebuggerBreak_FUN_0060b500
    JZ 0x0060b528                       ; 0060b507 | LAB_0060b528
        ;   XREF to: 0060b528 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0060b509
    MOV AX,word ptr [ESP + 0x8]         ; 0060b50b
    PUSH EAX                            ; 0060b510
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060b511
    PUSH EDX                            ; 0060b515
    INT3                                ; 0060b516
    XOR EAX,EAX                         ; 0060b528
        ;   Label: LAB_0060b528
    RET                                 ; 0060b52a

