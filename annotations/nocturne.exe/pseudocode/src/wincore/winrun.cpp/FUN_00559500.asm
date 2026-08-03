; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_FUN_00559500(char *message)
;
; Parameters:
; char *           Stack[0x4]:4   message
;
; XREF[1]:
;   core_main.c_FUN_004c8440 at 004c84c8
;
; Referenced Globals:
;   void* PTR_MessageBoxA_0057544c = 001759e0
;   void* PTR_ExitProcess_005754b4 = 00175b8a
;   TerminatedCString s_s_File_s_Line_d_00597f49
;   TerminatedCString s_Nocturne_00598156
;   void* PTR_s_Nocturne_005c1658 = 00598156
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_02de0860
;   undefined4 DAT_02de2098
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   ExitProcess
;   MessageBoxA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559500
        ;   Label: wincore_winrun.cpp_FUN_00559500
    PUSH ESI                            ; 00559501
    PUSH EDI                            ; 00559502
    MOV EDX,dword ptr [0x01cc4804]      ; 00559503 | g_INT_01cc4804
    PUSH EDX                            ; 00559509
    MOV ECX,dword ptr [0x01cc4800]      ; 0055950a | g_CHAR_PTR_01cc4800
    PUSH ECX                            ; 00559510
    MOV EBX,dword ptr [ESP + 0x18]      ; 00559511
    PUSH EBX                            ; 00559515
    PUSH 0x597f49                       ; 00559516 | = "%s\n\nFile: %s\nLine: %d"
    PUSH 0x2de0860                      ; 0055951b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00559520
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x14                        ; 00559525
    PUSH 0x30                           ; 00559528
    MOV ESI,dword ptr [0x005c1658]      ; 0055952a | PTR_s_Nocturne_005c1658
    PUSH ESI                            ; 00559530 | = "Nocturne"
    PUSH 0x2de0860                      ; 00559531 | DAT_02de0860
    MOV EDI,dword ptr [0x02de2098]      ; 00559536 | DAT_02de2098
    PUSH EDI                            ; 0055953c
    CALL dword ptr CS:[0x57544c]        ; 0055953d | PTR_MessageBoxA_0057544c
    PUSH 0x1                            ; 00559544
    CALL dword ptr CS:[0x5754b4]        ; 00559546 | PTR_ExitProcess_005754b4

