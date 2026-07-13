; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10008890(SIZE_T param_1)
;
;
; XREF[1]:
;   FUN_10008850 at 1000886e
;
; Referenced Globals:
;   undefined4 DAT_10241974
;   void* PTR_HeapAlloc_10242238 = 002425fe
;
; Called Functions:
;   HeapAlloc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10008890
        ;   Label: FUN_10008890
    MOV ECX,dword ptr [0x10241974]      ; 10008894 | DAT_10241974
    PUSH EAX                            ; 1000889a
    PUSH 0x0                            ; 1000889b
    PUSH ECX                            ; 1000889d
    CALL dword ptr [0x10242238]         ; 1000889e | PTR_HeapAlloc_10242238
    RET                                 ; 100088a4

