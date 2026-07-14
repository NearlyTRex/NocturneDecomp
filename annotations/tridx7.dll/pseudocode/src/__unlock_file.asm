; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __unlock_file(FILE *_File)
;
; Parameters:
; FILE *           Stack[0x4]:4   _File
;
; XREF[4]:
;   FID_conflict:_fwprintf at 1000550b
;   FUN_10005c90 at 10005cbc
;   __fsopen at 1000554d
;   _fclose at 10005462
;
; Referenced Globals:
;   void* PTR_DAT_10017088 = 10240860
;   undefined4 DAT_100172e8
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   FUN_10005a10
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 10005aa0
        ;   Label: __unlock_file
    MOV EAX,dword ptr [ESP + 0x8]       ; 10005aa1
    MOV EBP,ESP                         ; 10005aa5
    CMP EAX,0x10017088                  ; 10005aa7 | PTR_DAT_10017088
    JC 0x10005aca                       ; 10005aac
        ;   XREF to: 10005aca (CONDITIONAL_JUMP)  ; LAB_10005aca
    CMP EAX,0x100172e8                  ; 10005aae | DAT_100172e8
    JA 0x10005aca                       ; 10005ab3
        ;   XREF to: 10005aca (CONDITIONAL_JUMP)  ; LAB_10005aca
    SUB EAX,0x10017088                  ; 10005ab5 | PTR_DAT_10017088
    SAR EAX,0x5                         ; 10005aba
    ADD EAX,0x1c                        ; 10005abd
    PUSH EAX                            ; 10005ac0
    CALL FUN_10005a10                   ; 10005ac1
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    MOV ESP,EBP                         ; 10005ac6
    POP EBP                             ; 10005ac8
    RET                                 ; 10005ac9
    ADD EAX,0x20                        ; 10005aca
        ;   Label: LAB_10005aca
    PUSH EAX                            ; 10005acd
    CALL dword ptr [0x102421bc]         ; 10005ace | PTR_LeaveCriticalSection_102421bc
    POP EBP                             ; 10005ad4
    RET                                 ; 10005ad5

