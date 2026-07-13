; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100078f0(void)
;
;
; XREF[1]:
;   FUN_100056a0 at 100056ff
;
; Referenced Globals:
;   undefined4 DAT_10241974
;   void* PTR_HeapCreate_102421f4 = 002424ca
;
; Called Functions:
;   HeapCreate
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 100078f0
        ;   Label: FUN_100078f0
    PUSH 0x1000                         ; 100078f2
    PUSH 0x0                            ; 100078f7
    CALL dword ptr [0x102421f4]         ; 100078f9 | PTR_HeapCreate_102421f4
    MOV [0x10241974],EAX                ; 100078ff | DAT_10241974
    RET                                 ; 10007904

