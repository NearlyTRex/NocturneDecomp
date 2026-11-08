; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004df260(int param_1)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df260
        ;   Label: FUN_004df260
    PUSH ESI                            ; 004df261
    PUSH EDI                            ; 004df262
    SUB ESP,0x30                        ; 004df263
    MOV EBX,dword ptr [ESP + 0x40]      ; 004df266
    PUSH EBX                            ; 004df26a
    CALL FUN_004089d0                   ; 004df26b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004df270
    PUSH 0x0                            ; 004df273
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004df275
    PUSH EBX                            ; 004df27b
    LEA ESI,[ESP + 0x8]                 ; 004df27c
    LEA EDI,[ESP + 0x20]                ; 004df280
    CALL dword ptr [EAX + 0x24]         ; 004df284
    MOV ECX,0x6                         ; 004df287
    ADD ESP,0x4                         ; 004df28c
    LEA EAX,[ESP + 0x1c]                ; 004df28f
    LEA ESI,[ESP + 0x4]                 ; 004df293
    PUSH EAX                            ; 004df297
    MOVSD.REP ES:EDI,ESI                ; 004df298
    CALL FUN_0041a840                   ; 004df29a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004df29f
    MOV ESI,EAX                         ; 004df2a2
    TEST EAX,EAX                        ; 004df2a4
    JNZ 0x004df2ba                      ; 004df2a6
        ;   XREF to: 004df2ba (CONDITIONAL_JUMP)  ; LAB_004df2ba
    PUSH EBX                            ; 004df2a8
    CALL FUN_00408a10                   ; 004df2a9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004df2ae
    MOV EAX,ESI                         ; 004df2b1
    ADD ESP,0x30                        ; 004df2b3
    POP EDI                             ; 004df2b6
    POP ESI                             ; 004df2b7
    POP EBX                             ; 004df2b8
    RET                                 ; 004df2b9
    PUSH -0x1                           ; 004df2ba
        ;   Label: LAB_004df2ba
    LEA EAX,[EBX + 0x2b4]               ; 004df2bc
    PUSH 0x0                            ; 004df2c2
    PUSH EAX                            ; 004df2c4
    CALL FUN_0044fcc0                   ; 004df2c5
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004df2ca
    PUSH EBX                            ; 004df2cd
    CALL FUN_00408a10                   ; 004df2ce
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004df2d3
    MOV EAX,ESI                         ; 004df2d6
    ADD ESP,0x30                        ; 004df2d8
    POP EDI                             ; 004df2db
    POP ESI                             ; 004df2dc
    POP EBX                             ; 004df2dd
    RET                                 ; 004df2de

