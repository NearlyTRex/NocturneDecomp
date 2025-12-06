; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_process.c_spawnvp_FUN_0060ca20(int mode, char * cmdname, char * * argv)
;
; Parameters:
; int              Stack[0x4]:4   mode
; char *           Stack[0x8]:4   cmdname
; char * *         Stack[0xc]:4   argv
;
; XREF[1]:
;   crt_process.c_spawnCommand_FUN_00609c90 at 00609ca0
;
; Referenced Globals:
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ca20
        ;   Label: crt_process.c_spawnvp_FUN_0060ca20
    PUSH ESI                            ; 0060ca21
    MOV EDX,dword ptr [0x03f9b864]      ; 0060ca22 | char * * g_EnvironmentBlock
    PUSH EDX                            ; 0060ca28
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060ca29
    PUSH EBX                            ; 0060ca2d
    MOV ECX,dword ptr [ESP + 0x18]      ; 0060ca2e
    PUSH ECX                            ; 0060ca32
    MOV ESI,dword ptr [ESP + 0x18]      ; 0060ca33
    PUSH ESI                            ; 0060ca37
    CALL crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 ; 0060ca38 | int crt_process.c_spawnvp_with_path_search_FUN_0060e6a0(int mode, char * program, char * * argv)
        ;   XREF to: 0060e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0060ca3d
    POP ESI                             ; 0060ca40
    POP EBX                             ; 0060ca41
    RET                                 ; 0060ca42

