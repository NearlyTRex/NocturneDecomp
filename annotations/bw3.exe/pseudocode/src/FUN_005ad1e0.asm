; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad1e0(void)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   entry at 005a60c8
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_005b35c0 = 001b3f52
;   undefined4 DAT_00607940
;   undefined4 DAT_00607964
;   undefined4 DAT_00607968
;   undefined4 DAT_00607e78
;
; Called Functions:
;   FUN_00581080
;   FUN_005a28f0
;   FUN_005a6033
;   FUN_005a81b8
;   FUN_005ad2c4
;   FUN_005ae4a0
;   FUN_005aefe0
;   FUN_005af7f0
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad1e0
        ;   Label: FUN_005ad1e0
    PUSH EBP                            ; 005ad1e1
    MOV EBP,ESP                         ; 005ad1e2
    SUB ESP,0x8                         ; 005ad1e4
    MOV EAX,0x1                         ; 005ad1e7
    CALL FUN_005ae4a0                   ; 005ad1ec
        ;   XREF to: 005ae4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae4a0()
    MOV EAX,[0x00607e78]                ; 005ad1f1 | DAT_00607e78
    ADD EAX,0x3                         ; 005ad1f6
    AND AL,0xfc                         ; 005ad1f9
    SUB ESP,EAX                         ; 005ad1fb
    MOV EBX,ESP                         ; 005ad1fd
    MOV EDX,dword ptr [0x00607e78]      ; 005ad1ff | DAT_00607e78
    PUSH EDX                            ; 005ad205
    PUSH 0x0                            ; 005ad206
    PUSH EBX                            ; 005ad208
    CALL FUN_005a28f0                   ; 005ad209
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005ad20e
    MOV EAX,[0x00607e78]                ; 005ad211 | DAT_00607e78
    PUSH EBX                            ; 005ad216
    MOV dword ptr [EBX + 0xf0],EAX      ; 005ad217
    LEA EAX,[EBP + -0x8]                ; 005ad21d
    PUSH EAX                            ; 005ad220
    CALL FUN_005a81b8                   ; 005ad221
        ;   XREF to: 005a81b8 (UNCONDITIONAL_CALL)  ; undefined FUN_005a81b8()
    MOV EBX,dword ptr [0x00607964]      ; 005ad226 | DAT_00607964
    ADD EBX,0x3                         ; 005ad22c
    ADD ESP,0x8                         ; 005ad22f
    AND BL,0xfc                         ; 005ad232
    CALL FUN_005aefe0                   ; 005ad235
        ;   XREF to: 005aefe0 (UNCONDITIONAL_CALL)  ; undefined FUN_005aefe0()
    CMP EBX,EAX                         ; 005ad23a
    JNC 0x005ad254                      ; 005ad23c
        ;   XREF to: 005ad254 (CONDITIONAL_JUMP)  ; LAB_005ad254
    PUSH EBX                            ; 005ad23e
    CALL FUN_005a6033                   ; 005ad23f
        ;   XREF to: 005a6033 (UNCONDITIONAL_CALL)  ; undefined FUN_005a6033()
    MOV EAX,[0x00607964]                ; 005ad244 | DAT_00607964
    ADD EAX,0x3                         ; 005ad249
    AND AL,0xfc                         ; 005ad24c
    SUB ESP,EAX                         ; 005ad24e
    MOV EAX,ESP                         ; 005ad250
    JMP 0x005ad256                      ; 005ad252
        ;   XREF to: 005ad256 (UNCONDITIONAL_JUMP)  ; LAB_005ad256
    XOR EAX,EAX                         ; 005ad254
        ;   Label: LAB_005ad254
    MOV EBX,dword ptr [0x00607964]      ; 005ad256 | DAT_00607964
        ;   Label: LAB_005ad256
    ADD EAX,EBX                         ; 005ad25c
    MOV [0x00607968],EAX                ; 005ad25e | DAT_00607968
    CALL FUN_005af7f0                   ; 005ad263
        ;   XREF to: 005af7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005af7f0()
    PUSH 0xa                            ; 005ad268
    MOV EBX,dword ptr [0x00607940]      ; 005ad26a | DAT_00607940
    PUSH EBX                            ; 005ad270
    PUSH 0x0                            ; 005ad271
    PUSH 0x0                            ; 005ad273
    CALL dword ptr CS:[0x5b35c0]        ; 005ad275 | PTR_GetModuleHandleA_005b35c0
    PUSH EAX                            ; 005ad27c
    CALL FUN_00581080                   ; 005ad27d
        ;   XREF to: 00581080 (UNCONDITIONAL_CALL)  ; undefined FUN_00581080()
    PUSH EAX                            ; 005ad282
    CALL FUN_005ad2c4                   ; 005ad283
        ;   XREF to: 005ad2c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad2c4()
    ADD ESP,0x4                         ; 005ad288
    MOV ESP,EBP                         ; 005ad28b
    POP EBP                             ; 005ad28d
    POP EBX                             ; 005ad28e
    RET                                 ; 005ad28f

