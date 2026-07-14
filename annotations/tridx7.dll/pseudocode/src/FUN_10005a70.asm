; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10005a70(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_10005d90 at 10005dcf
;   FUN_10006c40 at 10006c78
;
; Referenced Globals:
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;
; Called Functions:
;   __lock
;   EnterCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005a70
        ;   Label: FUN_10005a70
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005a71
    MOV EBP,ESP                         ; 10005a75
    CMP EAX,0x14                        ; 10005a77
    JGE 0x10005a89                      ; 10005a7a
        ;   XREF to: 10005a89 (CONDITIONAL_JUMP)  ; LAB_10005a89
    ADD EAX,0x1c                        ; 10005a7c
    PUSH EAX                            ; 10005a7f
    CALL __lock                         ; 10005a80
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV ESP,EBP                         ; 10005a85
    POP EBP                             ; 10005a87
    RET                                 ; 10005a88
    MOV EAX,dword ptr [EBP + 0xc]       ; 10005a89
        ;   Label: LAB_10005a89
    ADD EAX,0x20                        ; 10005a8c
    PUSH EAX                            ; 10005a8f
    CALL dword ptr [0x102421b8]         ; 10005a90 | PTR_EnterCriticalSection_102421b8
    POP EBP                             ; 10005a96
    RET                                 ; 10005a97

