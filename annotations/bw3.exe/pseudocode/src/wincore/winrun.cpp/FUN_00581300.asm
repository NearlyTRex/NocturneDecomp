; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_FUN_00581300(char *message)
;
; Parameters:
; char *           Stack[0x4]:4   message
;
; XREF[1]:
;   core_main.c_FUN_004e4330 at 004e43b8
;
; Referenced Globals:
;   void* PTR_MessageBoxA_005b34d8 = 001b3b54
;   void* PTR_ExitProcess_005b3540 = 001b3cfe
;   TerminatedCString s_s_File_s_Line_d_005d7c9b
;   TerminatedCString s_Blair_Witch_3_005d7ebe
;   void* PTR_s_Blair_Witch_3_00607280 = 005d7ebe
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d20340
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   ExitProcess
;   MessageBoxA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581300
        ;   Label: wincore_winrun.cpp_FUN_00581300
    PUSH ESI                            ; 00581301
    PUSH EDI                            ; 00581302
    MOV EDX,dword ptr [0x01d71de4]      ; 00581303 | DAT_01d71de4
    PUSH EDX                            ; 00581309
    MOV ECX,dword ptr [0x01d71de0]      ; 0058130a | DAT_01d71de0
    PUSH ECX                            ; 00581310
    MOV EBX,dword ptr [ESP + 0x18]      ; 00581311
    PUSH EBX                            ; 00581315
    PUSH 0x5d7c9b                       ; 00581316 | = "%s\n\nFile: %s\nLine: %d"
    PUSH 0x2d20340                      ; 0058131b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00581320
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00581325
    PUSH 0x30                           ; 00581328
    MOV ESI,dword ptr [0x00607280]      ; 0058132a | PTR_s_Blair_Witch_3_00607280
    PUSH ESI                            ; 00581330 | = "Blair Witch 3"
    PUSH 0x2d20340                      ; 00581331 | DAT_02d20340
    MOV EDI,dword ptr [0x02d21b78]      ; 00581336 | DAT_02d21b78
    PUSH EDI                            ; 0058133c
    CALL dword ptr CS:[0x5b34d8]        ; 0058133d | PTR_MessageBoxA_005b34d8
    PUSH 0x1                            ; 00581344
    CALL dword ptr CS:[0x5b3540]        ; 00581346 | PTR_ExitProcess_005b3540

