; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_process_c_execv_FUN_006101f0(int argc,char *program,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char *           Stack[0x8]:4   program
; char * *         Stack[0xc]:4   argv
;
; Referenced Globals:
;   undefined4 SUB_0060f39c
;   EXIT_PROCESS_FUNC* g_ExitProcessFunc = 00211d12
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478 = 0060b530
;
; Called Functions:
;   crt_exit.c_ExitHookStub_FUN_0060b530
;   crt_thread.c_GetTLS_FUN_0060242c
;   ExitProcess
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006101f0
        ;   Label: crt_process.c_execv_FUN_006101f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 006101f1
    PUSH EDX                            ; 006101f5
    MOV EBX,dword ptr [ESP + 0x10]      ; 006101f6
    PUSH EBX                            ; 006101fa
    MOV ECX,dword ptr [ESP + 0x10]      ; 006101fb
    PUSH ECX                            ; 006101ff
    PUSH 0x1                            ; 00610200
    CALL 0x0060f39c                     ; 00610202
        ;   XREF to: 0060f39c (UNCONDITIONAL_CALL)  ; SUB_0060f39c
    ADD ESP,0x10                        ; 00610207
    MOV EBX,EAX                         ; 0061020a
    CALL dword ptr [0x00684ee4]         ; 0061020c | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    CMP dword ptr [EAX + 0x4],0x0       ; 00610212
    JZ 0x0061021f                       ; 00610216
        ;   XREF to: 0061021f (CONDITIONAL_JUMP)  ; LAB_0061021f
    MOV EAX,0xffffffff                  ; 00610218
    POP EBX                             ; 0061021d
    RET                                 ; 0061021e
    CALL dword ptr [0x00685478]         ; 0061021f | PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478
        ;   Label: LAB_0061021f
    PUSH EBX                            ; 00610225
    CALL dword ptr CS:[0x611534]        ; 00610226
        ;   XREF to: EXTERNAL:00000058 (UNCONDITIONAL_CALL)  ; g_ExitProcessFunc

