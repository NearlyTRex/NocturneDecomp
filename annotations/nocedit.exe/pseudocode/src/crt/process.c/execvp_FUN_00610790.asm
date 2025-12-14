; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_process.c_execvp_FUN_00610790(int argc, char * program, char * arg1, char * arg2, ...)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char *           Stack[0x8]:4   program
; char *           Stack[0xc]:4   arg1
; char *           Stack[0x10]:4   arg2
;
; XREF[1]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f804
;
; Referenced Globals:
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_process.c_spawnvp_FUN_0060f39c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610790
        ;   Label: crt_process.c_execvp_FUN_00610790
    MOV EDX,dword ptr [0x03f9b864]      ; 00610791 | g_EnvironmentBlock
    PUSH EDX                            ; 00610797
    LEA EAX,[ESP + 0x14]                ; 00610798
    PUSH EAX                            ; 0061079c
    MOV EBX,dword ptr [ESP + 0x14]      ; 0061079d
    PUSH EBX                            ; 006107a1
    MOV ECX,dword ptr [ESP + 0x14]      ; 006107a2
    PUSH ECX                            ; 006107a6
    CALL crt_process.c_spawnvp_FUN_0060f39c ; 006107a7
        ;   XREF to: 0060f39c (UNCONDITIONAL_CALL)  ; int crt_process.c_spawnvp_FUN_0060f39c(int mode, char * cmdname, char * * argv)
    ADD ESP,0x10                        ; 006107ac
    POP EBX                             ; 006107af
    RET                                 ; 006107b0

