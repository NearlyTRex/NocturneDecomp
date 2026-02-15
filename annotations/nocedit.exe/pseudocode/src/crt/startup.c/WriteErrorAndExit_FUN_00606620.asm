; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c_WriteErrorAndExit_FUN_00606620(char *error_message,int exit_code)
;
; Parameters:
; char *           Stack[0x4]:4   error_message
; int              Stack[0x8]:4   exit_code
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[2]:
;   crt_cpp.c_reportPureVirtualError_FUN_00605b23 at 00605b57
;   crt_startup.c_HandleRuntimeError_FUN_00606660 at 00606684
;
; Referenced Globals:
;   WRITE_FILE_FUNC* g_WriteFileFunc = 00212300
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_exit.c_ExitProcess_FUN_00602700
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606620
        ;   Label: crt_startup.c_WriteErrorAndExit_FUN_00606620
    SUB ESP,0x4                         ; 00606621
    MOV EAX,dword ptr [ESP + 0xc]       ; 00606624
    XOR EDX,EDX                         ; 00606628
    JMP 0x0060662d                      ; 0060662a
        ;   XREF to: 0060662d (UNCONDITIONAL_JUMP)  ; LAB_0060662d
    INC EDX                             ; 0060662c
        ;   Label: LAB_0060662c
    MOV EBX,EAX                         ; 0060662d
        ;   Label: LAB_0060662d
    MOV CL,byte ptr [EBX]               ; 0060662f
    INC EAX                             ; 00606631
    TEST CL,CL                          ; 00606632
    JNZ 0x0060662c                      ; 00606634
        ;   XREF to: 0060662c (CONDITIONAL_JUMP)  ; LAB_0060662c
    PUSH 0x0                            ; 00606636
    LEA EAX,[ESP + 0x4]                 ; 00606638
    PUSH EAX                            ; 0060663c
    PUSH EDX                            ; 0060663d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0060663e
    MOV EAX,[0x0068526c]                ; 00606642 | g_IOControlBlock
    PUSH EDX                            ; 00606647
    MOV EBX,dword ptr [EAX + 0x8]       ; 00606648
    PUSH EBX                            ; 0060664b
    CALL dword ptr CS:[0x611678]        ; 0060664c | g_WriteFileFunc
    MOV ECX,dword ptr [ESP + 0x10]      ; 00606653
    PUSH ECX                            ; 00606657
    JMP 0x00602700                      ; 00606658
        ;   XREF to: 00602700 (UNCONDITIONAL_CALL)

