; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005aefe0(void)
;
;
; XREF[1]:
;   FUN_005ad1e0 at 005ad235
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; Called Functions:
;   FUN_005a7f3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aefe0
        ;   Label: FUN_005aefe0
    CALL dword ptr [0x006079a0]         ; 005aefe1 | PTR_FUN_006079a0
    MOV EBX,EAX                         ; 005aefe7
    MOV EAX,ESP                         ; 005aefe9
    SUB EAX,dword ptr [EBX]             ; 005aefeb
    POP EBX                             ; 005aefed
    RET                                 ; 005aefee

