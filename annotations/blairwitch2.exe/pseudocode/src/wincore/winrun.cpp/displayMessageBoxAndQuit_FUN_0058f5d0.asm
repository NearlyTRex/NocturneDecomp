; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_0058f5d0(char *message)
;
; Parameters:
; char *           Stack[0x4]:4   message
;
; XREF[1]:
;   core_main.c_FUN_004e4500 at 004e4588
;
; Referenced Globals:
;   void* PTR_MessageBoxA_005c84cc = 001c8b3e
;   void* PTR_ExitProcess_005c8534 = 001c8ce8
;   TerminatedCString s_s_File_s_Line_d_005ee8a2
;   TerminatedCString s_Coffin_Rock_005eeac5
;   void* PTR_s_Coffin_Rock_0061e984 = 005eeac5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02662df0
;   undefined4 DAT_02664628
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   ExitProcess
;   MessageBoxA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f5d0
        ;   Label: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_0058f5d0
    PUSH ESI                            ; 0058f5d1
    PUSH EDI                            ; 0058f5d2
    MOV EDX,dword ptr [0x01d046a4]      ; 0058f5d3 | DAT_01d046a4
    PUSH EDX                            ; 0058f5d9
    MOV ECX,dword ptr [0x01d046a0]      ; 0058f5da | DAT_01d046a0
    PUSH ECX                            ; 0058f5e0
    MOV EBX,dword ptr [ESP + 0x18]      ; 0058f5e1
    PUSH EBX                            ; 0058f5e5
    PUSH 0x5ee8a2                       ; 0058f5e6 | = "%s\n\nFile: %s\nLine: %d"
    PUSH 0x2662df0                      ; 0058f5eb
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0058f5f0
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 0058f5f5
    PUSH 0x30                           ; 0058f5f8
    MOV ESI,dword ptr [0x0061e984]      ; 0058f5fa | PTR_s_Coffin_Rock_0061e984
    PUSH ESI                            ; 0058f600 | = "Coffin Rock"
    PUSH 0x2662df0                      ; 0058f601 | DAT_02662df0
    MOV EDI,dword ptr [0x02664628]      ; 0058f606 | DAT_02664628
    PUSH EDI                            ; 0058f60c
    CALL dword ptr CS:[0x5c84cc]        ; 0058f60d | PTR_MessageBoxA_005c84cc
    PUSH 0x1                            ; 0058f614
    CALL dword ptr CS:[0x5c8534]        ; 0058f616 | PTR_ExitProcess_005c8534

