; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051a490(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00479180
;   FUN_005030e0
;   FUN_0051ac40
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a490
        ;   Label: FUN_0051a490
    PUSH EDI                            ; 0051a491
    PUSH 0x5e90d0                       ; 0051a492
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051a497
    PUSH EDX                            ; 0051a49b
    PUSH 0x5e90d3                       ; 0051a49c
    CALL FUN_00479180                   ; 0051a4a1
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0051a4a6
    MOV EBX,EAX                         ; 0051a4a9
    TEST EAX,EAX                        ; 0051a4ab
    JZ 0x0051a4c9                       ; 0051a4ad
        ;   XREF to: 0051a4c9 (CONDITIONAL_JUMP)  ; LAB_0051a4c9
    PUSH EBX                            ; 0051a4af
        ;   Label: LAB_0051a4af
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051a4b0
    PUSH EDI                            ; 0051a4b4
    CALL FUN_0051ac40                   ; 0051a4b5
        ;   XREF to: 0051ac40 (UNCONDITIONAL_CALL)  ; undefined FUN_0051ac40()
    ADD ESP,0x8                         ; 0051a4ba
    PUSH EBX                            ; 0051a4bd
    CALL FUN_005c0d10                   ; 0051a4be
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 0051a4c3
    POP EDI                             ; 0051a4c6
    POP EBX                             ; 0051a4c7
    RET                                 ; 0051a4c8
    PUSH ESI                            ; 0051a4c9
        ;   Label: LAB_0051a4c9
    MOV ECX,0x5e90d9                    ; 0051a4ca
    MOV ESI,0xbd                        ; 0051a4cf
    PUSH 0x5e90ed                       ; 0051a4d4
    MOV dword ptr [0x01d1d400],ECX      ; 0051a4d9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051a4df | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051a4e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051a4ea
    POP ESI                             ; 0051a4ed
    JMP 0x0051a4af                      ; 0051a4ee
        ;   XREF to: 0051a4af (UNCONDITIONAL_JUMP)  ; LAB_0051a4af

