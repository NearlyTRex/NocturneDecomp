; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005cc370(void)
;
;
; XREF[1]:
;   FUN_005ca370 at 005ca3c5
;
; Referenced Globals:
;   void* PTR_FUN_006265fc = 005c50cc
;
; Called Functions:
;   FUN_005c50cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc370
        ;   Label: FUN_005cc370
    CALL dword ptr [0x006265fc]         ; 005cc371 | PTR_FUN_006265fc
    MOV EBX,EAX                         ; 005cc377
    MOV EAX,ESP                         ; 005cc379
    SUB EAX,dword ptr [EBX]             ; 005cc37b
    POP EBX                             ; 005cc37d
    RET                                 ; 005cc37e

