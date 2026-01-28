; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_process_c_spawnCommand_FUN_00609c90 (int mode,char *cmdPath,char *cmdName,char *args,void *envp,int *result)
;
; Parameters:
; int              Stack[0x4]:4   mode
; char *           Stack[0x8]:4   cmdPath
; char *           Stack[0xc]:4   cmdName
; char *           Stack[0x10]:4   args
; void *           Stack[0x14]:4   envp
; int *            Stack[0x18]:4   result
;
; XREF[1]:
;   crt_stdlib.c_system_FUN_00602130 at 006021a0
;
; Called Functions:
;   crt_process.c_spawnvp_FUN_0060ca20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609c90
        ;   Label: crt_process.c_spawnCommand_FUN_00609c90
    LEA EAX,[ESP + 0x10]                ; 00609c91
    PUSH EAX                            ; 00609c95
    MOV EDX,dword ptr [ESP + 0x10]      ; 00609c96
    PUSH EDX                            ; 00609c9a
    MOV EBX,dword ptr [ESP + 0x10]      ; 00609c9b
    PUSH EBX                            ; 00609c9f
    CALL crt_process.c_spawnvp_FUN_0060ca20 ; 00609ca0
        ;   XREF to: 0060ca20 (UNCONDITIONAL_CALL)  ; int crt_process.c_spawnvp_FUN_0060ca20(int mode, char * cmdname, char * * argv)
    ADD ESP,0xc                         ; 00609ca5
    POP EBX                             ; 00609ca8
    RET                                 ; 00609ca9

