; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __dosmaperr(ulong param_1)
;
; Parameters:
; ulong            Stack[0x4]:4   param_1
;
; XREF[5]:
;   FUN_10008fb0 at 10009132
;   FUN_100093f0 at 1000965b
;   FUN_1000b720 at 1000b7e2
;   __close_lk at 10005c18
;   __lseek_lk at 1000a6c1
;
; Referenced Globals:
;   undefined4 DAT_10017310
;   undefined4 DAT_10017318
;   undefined4 DAT_1001731c
;   undefined4 DAT_10017478
;
; Called Functions:
;   FUN_10008a20
;   FUN_10008a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100089a0
        ;   Label: __dosmaperr
    CALL FUN_10008a30                   ; 100089a1
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    MOV ECX,dword ptr [ESP + 0x8]       ; 100089a6
    XOR ESI,ESI                         ; 100089aa
    MOV dword ptr [EAX],ECX             ; 100089ac
    MOV EAX,0x10017310                  ; 100089ae | DAT_10017310
    CMP dword ptr [EAX],ECX             ; 100089b3 | DAT_10017310 | DAT_10017318
        ;   Label: LAB_100089b3
    JZ 0x100089d9                       ; 100089b5
        ;   XREF to: 100089d9 (CONDITIONAL_JUMP)  ; LAB_100089d9
    ADD EAX,0x8                         ; 100089b7
    INC ESI                             ; 100089ba
    CMP EAX,0x10017478                  ; 100089bb | DAT_10017478
    JC 0x100089b3                       ; 100089c0
        ;   XREF to: 100089b3 (CONDITIONAL_JUMP)  ; LAB_100089b3
    CMP ECX,0x13                        ; 100089c2
    JC 0x100089e9                       ; 100089c5
        ;   XREF to: 100089e9 (CONDITIONAL_JUMP)  ; LAB_100089e9
    CMP ECX,0x24                        ; 100089c7
    JA 0x100089e9                       ; 100089ca
        ;   XREF to: 100089e9 (CONDITIONAL_JUMP)  ; LAB_100089e9
    CALL FUN_10008a20                   ; 100089cc
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    POP ESI                             ; 100089d1
    MOV dword ptr [EAX],0xd             ; 100089d2
    RET                                 ; 100089d8
    CALL FUN_10008a20                   ; 100089d9
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_100089d9
    MOV ECX,dword ptr [ESI*0x8 + 0x10017314] ; 100089de | DAT_1001731c
    POP ESI                             ; 100089e5
    MOV dword ptr [EAX],ECX             ; 100089e6
    RET                                 ; 100089e8
    CMP ECX,0xbc                        ; 100089e9
        ;   Label: LAB_100089e9
    JC 0x10008a06                       ; 100089ef
        ;   XREF to: 10008a06 (CONDITIONAL_JUMP)  ; LAB_10008a06
    CMP ECX,0xca                        ; 100089f1
    JA 0x10008a06                       ; 100089f7
        ;   XREF to: 10008a06 (CONDITIONAL_JUMP)  ; LAB_10008a06
    CALL FUN_10008a20                   ; 100089f9
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    POP ESI                             ; 100089fe
    MOV dword ptr [EAX],0x8             ; 100089ff
    RET                                 ; 10008a05
    CALL FUN_10008a20                   ; 10008a06
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_10008a06
    POP ESI                             ; 10008a0b
    MOV dword ptr [EAX],0x16            ; 10008a0c
    RET                                 ; 10008a12

