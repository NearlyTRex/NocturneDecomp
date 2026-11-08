; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bad80(void)
;
;
; XREF[1]:
;   FUN_004e4500 at 004e4596
;
; Referenced Globals:
;   void* PTR_FUN_0061ef50 = 005bad88
;
; Called Functions:
;   FUN_005bad88
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061ef50]         ; 005bad80 | PTR_FUN_0061ef50
        ;   Label: FUN_005bad80
    MOV EAX,EAX                         ; 005bad86

