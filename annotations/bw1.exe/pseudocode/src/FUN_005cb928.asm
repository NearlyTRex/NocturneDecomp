; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005cb928(void)
;
;
; XREF[1]:
;   FUN_005c65a0 at 005c65a8
;
; Referenced Globals:
;   void* PTR_GetConsoleMode_005d0580 = 001d0e16
;   void* PTR_SetConsoleMode_005d0624 = 001d112e
;   undefined4 DAT_006265c8
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;   undefined4 DAT_00626774
;   undefined4 DAT_006267a8
;
; Called Functions:
;   FUN_005c50d4
;   FUN_005cb810
;   FUN_005cd0c0
;   GetConsoleMode
;   SetConsoleMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb928
        ;   Label: FUN_005cb928
    PUSH ESI                            ; 005cb929
    SUB ESP,0x4                         ; 005cb92a
    MOV EAX,[0x006265c8]                ; 005cb92d | DAT_006265c8
    TEST EAX,EAX                        ; 005cb932
    JZ 0x005cb940                       ; 005cb934
        ;   XREF to: 005cb940 (CONDITIONAL_JUMP)  ; LAB_005cb940
    XOR ESI,ESI                         ; 005cb936
    MOV dword ptr [0x006265c8],ESI      ; 005cb938 | DAT_006265c8
    JMP 0x005cb9ab                      ; 005cb93e
        ;   XREF to: 005cb9ab (UNCONDITIONAL_JUMP)  ; LAB_005cb9ab
    CMP dword ptr [0x006267a8],0x0      ; 005cb940 | DAT_006267a8
        ;   Label: LAB_005cb940
    JZ 0x005cb961                       ; 005cb947
        ;   XREF to: 005cb961 (CONDITIONAL_JUMP)  ; LAB_005cb961
    PUSH EAX                            ; 005cb949
    CALL dword ptr [0x00626774]         ; 005cb94a | DAT_00626774
    ADD ESP,0x4                         ; 005cb950
    PUSH EAX                            ; 005cb953
    CALL dword ptr [0x006267a8]         ; 005cb954 | DAT_006267a8
    ADD ESP,0x4                         ; 005cb95a
    MOV ESI,EAX                         ; 005cb95d
    JMP 0x005cb9a9                      ; 005cb95f
        ;   XREF to: 005cb9a9 (UNCONDITIONAL_JUMP)  ; LAB_005cb9a9
    PUSH EAX                            ; 005cb961
        ;   Label: LAB_005cb961
    CALL dword ptr [0x00626600]         ; 005cb962 | PTR_FUN_00626600
    ADD ESP,0x4                         ; 005cb968
    CALL FUN_005cd0c0                   ; 005cb96b
        ;   XREF to: 005cd0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cd0c0()
    MOV EBX,EAX                         ; 005cb970
    MOV EAX,ESP                         ; 005cb972
    PUSH EAX                            ; 005cb974
    PUSH EBX                            ; 005cb975
    CALL dword ptr CS:[0x5d0580]        ; 005cb976 | PTR_GetConsoleMode_005d0580
    PUSH 0x0                            ; 005cb97d
    PUSH EBX                            ; 005cb97f
    CALL dword ptr CS:[0x5d0624]        ; 005cb980 | PTR_SetConsoleMode_005d0624
    PUSH EBX                            ; 005cb987
    CALL FUN_005cb810                   ; 005cb988
        ;   XREF to: 005cb810 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb810()
    ADD ESP,0x4                         ; 005cb98d
    MOV ECX,dword ptr [ESP]             ; 005cb990
    PUSH ECX                            ; 005cb993
    PUSH EBX                            ; 005cb994
    MOV ESI,EAX                         ; 005cb995
    CALL dword ptr CS:[0x5d0624]        ; 005cb997 | PTR_SetConsoleMode_005d0624
    PUSH 0x0                            ; 005cb99e
    CALL dword ptr [0x00626604]         ; 005cb9a0 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005cb9a6
    MOV EAX,ESI                         ; 005cb9a9
        ;   Label: LAB_005cb9a9
    ADD ESP,0x4                         ; 005cb9ab
        ;   Label: LAB_005cb9ab
    POP ESI                             ; 005cb9ae
    POP EBX                             ; 005cb9af
    RET                                 ; 005cb9b0

