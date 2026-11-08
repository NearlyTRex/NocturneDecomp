; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043c220(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0043f920 at 0043f956
;   FUN_0059d750 at 0059d764
;
; Referenced Globals:
;   undefined4 DAT_005dd3f0
;   undefined4 DAT_005dd410
;
; Called Functions:
;   FUN_00460490
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043c220
        ;   Label: FUN_0043c220
    PUSH EAX                            ; 0043c224
    CALL FUN_00460490                   ; 0043c225
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; undefined FUN_00460490()
    ADD ESP,0x4                         ; 0043c22a
    PUSH 0x5dd3f0                       ; 0043c22d | DAT_005dd3f0
    PUSH 0x320                          ; 0043c232
    ADD EAX,0x398                       ; 0043c237
    PUSH EAX                            ; 0043c23c
    CALL FUN_005a30d7                   ; 0043c23d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 0043c242
    PUSH 0x5dd410                       ; 0043c245 | DAT_005dd410
    PUSH 0x32                           ; 0043c24a
    ADD EAX,0x377b8                     ; 0043c24c
    PUSH EAX                            ; 0043c251
    CALL FUN_005a30d7                   ; 0043c252
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    MOV dword ptr [EAX + 0x2fac],0x0    ; 0043c257
    MOV dword ptr [EAX + -0x4],0x0      ; 0043c261
    ADD ESP,0xc                         ; 0043c268
    MOV dword ptr [EAX + -0x8],0x0      ; 0043c26b
    SUB EAX,0x37b50                     ; 0043c272
    RET                                 ; 0043c277

