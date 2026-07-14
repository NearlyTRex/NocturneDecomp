; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __unlock_fhandle(int _Filehandle)
;
; Parameters:
; int              Stack[0x4]:4   _Filehandle
;
; XREF[9]:
;   FUN_10008d20 at 10008dc6
;   FUN_10008e80 at 10008f00
;   FUN_100093f0 at 10009664
;   FUN_1000b4f0 at 1000b538
;   FUN_1000b6a0 at 1000b6ed
;   FUN_1000e810 at 1000e858
;   __close at 10005b93
;   __write at 10008f7d
;   __write at 1000a63d
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10008e50
        ;   Label: __unlock_fhandle
    MOV EAX,ECX                         ; 10008e54
    AND ECX,0x1f                        ; 10008e56
    SHL ECX,0x2                         ; 10008e59
    AND EAX,0xffffffe7                  ; 10008e5c
    SAR EAX,0x3                         ; 10008e5f
    LEA EDX,[ECX + ECX*0x8]             ; 10008e62
    MOV EAX,dword ptr [EAX + 0x10241870] ; 10008e65 | DAT_10241870
    ADD EAX,EDX                         ; 10008e6b
    ADD EAX,0xc                         ; 10008e6d
    PUSH EAX                            ; 10008e70
    CALL dword ptr [0x102421bc]         ; 10008e71 | PTR_LeaveCriticalSection_102421bc
    RET                                 ; 10008e77

