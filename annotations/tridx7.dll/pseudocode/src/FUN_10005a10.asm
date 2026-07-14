; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10005a10(int param_1)
;
;
; XREF[27]:
;   FUN_10005ae0 at 10005af0
;   FUN_10005d90 at 10005e40
;   FUN_10006c40 at 10006d12
;   FUN_100076d0 at 100076d2
;   FUN_1000aaf0 at 1000ab0c
;   FUN_1000ab70 at 1000abf9
;   FUN_1000ac10 at 1000adb2
;   FUN_1000b950 at 1000baea
;   FUN_1000bb30 at 1000bb6b
;   FUN_1000bbc0 at 1000bc71
;   ... and 17 more
;
; Referenced Globals:
;   undefined4 DAT_10016c78
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005a10
        ;   Label: FUN_10005a10
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005a11
    MOV EBP,ESP                         ; 10005a15
    MOV ECX,dword ptr [EAX*0x4 + 0x10016c78] ; 10005a17 | DAT_10016c78
    PUSH ECX                            ; 10005a1e
    CALL dword ptr [0x102421bc]         ; 10005a1f | PTR_LeaveCriticalSection_102421bc
    POP EBP                             ; 10005a25
    RET                                 ; 10005a26

