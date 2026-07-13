; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __lock_file(FILE *_File)
;
; Parameters:
; FILE *           Stack[0x4]:4   _File
;
; XREF[2]:
;   FID_conflict:_fwprintf at 100054d8
;   _fclose at 1000544e
;
; Referenced Globals:
;   void* PTR_DAT_10017088 = 10240860
;   undefined4 DAT_100172e8
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;
; Called Functions:
;   __lock
;   EnterCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005a30
        ;   Label: __lock_file
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005a31
    MOV EBP,ESP                         ; 10005a35
    CMP EAX,0x10017088                  ; 10005a37 | PTR_DAT_10017088
    JC 0x10005a5a                       ; 10005a3c
        ;   XREF to: 10005a5a (CONDITIONAL_JUMP)  ; LAB_10005a5a
    CMP EAX,0x100172e8                  ; 10005a3e | DAT_100172e8
    JA 0x10005a5a                       ; 10005a43
        ;   XREF to: 10005a5a (CONDITIONAL_JUMP)  ; LAB_10005a5a
    SUB EAX,0x10017088                  ; 10005a45 | PTR_DAT_10017088
    SAR EAX,0x5                         ; 10005a4a
    ADD EAX,0x1c                        ; 10005a4d
    PUSH EAX                            ; 10005a50
    CALL __lock                         ; 10005a51
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV ESP,EBP                         ; 10005a56
    POP EBP                             ; 10005a58
    RET                                 ; 10005a59
    ADD EAX,0x20                        ; 10005a5a
        ;   Label: LAB_10005a5a
    PUSH EAX                            ; 10005a5d
    CALL dword ptr [0x102421b8]         ; 10005a5e | PTR_EnterCriticalSection_102421b8
    POP EBP                             ; 10005a64
    RET                                 ; 10005a65

