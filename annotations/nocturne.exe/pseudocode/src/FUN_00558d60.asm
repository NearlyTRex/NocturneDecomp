; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00558d60(int param_1,int param_2)
;
;
; XREF[6]:
;   FUN_00474d70 at 00474e2a
;   FUN_00475230 at 00475359
;   FUN_00476920 at 004769c7
;   FUN_0049f710 at 0049f77b
;   FUN_0049f8c0 at 0049f916
;   FUN_004cfbc0 at 004cfc4a
;
; Referenced Globals:
;   void* PTR_SetCursorPos_00575468 = 00175a54
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;
; Called Functions:
;   SetCursorPos
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00558d60
        ;   Label: FUN_00558d60
    PUSH EDX                            ; 00558d64
    MOV ECX,dword ptr [ESP + 0x8]       ; 00558d65
    PUSH ECX                            ; 00558d69
    CALL dword ptr CS:[0x575468]        ; 00558d6a | PTR_SetCursorPos_00575468
    MOV EAX,dword ptr [ESP + 0x4]       ; 00558d71
    MOV [0x01bd1d8c],EAX                ; 00558d75 | DAT_01bd1d8c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00558d7a
    MOV [0x01bd1d90],EAX                ; 00558d7e | DAT_01bd1d90
    RET                                 ; 00558d83

