; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553d40(HMODULE param_1,LPCSTR param_2)
;
;
; XREF[1]:
;   FUN_00531780 at 005317e7
;
; Referenced Globals:
;   void* PTR_GetProcAddress_00575534 = 00175ddc
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00553d40
        ;   Label: FUN_00553d40
    PUSH EDX                            ; 00553d44
    MOV ECX,dword ptr [ESP + 0x8]       ; 00553d45
    PUSH ECX                            ; 00553d49
    CALL dword ptr CS:[0x575534]        ; 00553d4a | PTR_GetProcAddress_00575534
    RET                                 ; 00553d51

