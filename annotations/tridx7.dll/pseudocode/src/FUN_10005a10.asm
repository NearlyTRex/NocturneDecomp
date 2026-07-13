; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10005a10(int param_1)
;
;
; XREF[16]:
;   FUN_10005ae0 at 10005af0
;   FUN_10006c40 at 10006d12
;   FUN_100076d0 at 100076d2
;   FUN_1000ff20 at 1000ffd8
;   FUN_1000fff0 at 10010019
;   FUN_10010050 at 1001008e
;   FUN_10010910 at 10010953
;   FUN_100116f0 at 10011758
;   __alloc_osfhnd at 10008aa0
;   __callnewh at 1000ab53
;   ... and 6 more
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

