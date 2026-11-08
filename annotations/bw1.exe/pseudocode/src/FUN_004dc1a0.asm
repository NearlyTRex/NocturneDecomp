; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc1a0(void)
;
;
; XREF[1]:
;   FUN_004ce580 at 004ceff2
;
; Referenced Globals:
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01cd0b40
;   undefined4 DAT_01cd0be4
;   undefined4 DAT_01cd0c04
;
; Called Functions:
;   FUN_0040d4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc1a0
        ;   Label: FUN_004dc1a0
    MOV EDX,dword ptr [0x01cd0b40]      ; 004dc1a1 | DAT_01cd0b40
    MOV EAX,[0x01c43540]                ; 004dc1a7 | DAT_01c43540
    MOV ECX,dword ptr [EDX*0x4 + 0x1cd0c04] ; 004dc1ac | DAT_01cd0c04
    PUSH 0xffff                         ; 004dc1b3
    SUB EAX,ECX                         ; 004dc1b8
    MOV EBX,dword ptr [EDX*0x4 + 0x1cd0be4] ; 004dc1ba | DAT_01cd0be4
    PUSH EAX                            ; 004dc1c1
    MOV EAX,[0x01c4353c]                ; 004dc1c2 | DAT_01c4353c
    SUB EAX,EBX                         ; 004dc1c7
    PUSH EAX                            ; 004dc1c9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dc1ca
    ADD EAX,EDX                         ; 004dc1d1
    SHL EAX,0x2                         ; 004dc1d3
    ADD EAX,0x1cd0b44                   ; 004dc1d6
    PUSH EAX                            ; 004dc1db
    CALL FUN_0040d4b0                   ; 004dc1dc
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    ADD ESP,0x10                        ; 004dc1e1
    POP EBX                             ; 004dc1e4
    RET                                 ; 004dc1e5

