; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00551930(int min_bytes,int max_bytes)
;
; Parameters:
; int              Stack[0x4]:4   min_bytes
; int              Stack[0x8]:4   max_bytes
;
; Referenced Globals:
;   undefined4 DAT_0061bcbc
;   undefined4 DAT_0061bcc0
;
; Called Functions:
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0054b960
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00551930
        ;   Label: sound_sndmain.cpp_setMemoryBudget_FUN_00551930
    MOV [0x0061bcbc],EAX                ; 00551934 | DAT_0061bcbc
    MOV EAX,dword ptr [ESP + 0x8]       ; 00551939
    PUSH 0x0                            ; 0055193d
    MOV [0x0061bcc0],EAX                ; 0055193f | DAT_0061bcc0
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0054b960 ; 00551944
        ;   XREF to: 0054b960 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0054b960(int requested_bytes)
    ADD ESP,0x4                         ; 00551949
    RET                                 ; 0055194c

