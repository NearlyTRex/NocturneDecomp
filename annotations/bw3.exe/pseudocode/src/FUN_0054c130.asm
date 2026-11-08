; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054c130(int param_1)
;
;
; XREF[40]:
;   FUN_0040fb40 at 0040fdb1
;   FUN_004179b0 at 00418014
;   FUN_00419b40 at 0041a166
;   FUN_00425da0 at 00426b32
;   FUN_0042cd70 at 0042cdec
;   FUN_00442a20 at 004435a7
;   FUN_00445130 at 0044537d
;   FUN_00455080 at 00455d4a
;   FUN_004628b0 at 00462b78
;   FUN_004c5350 at 004c55bc
;   ... and 30 more
;
; Referenced Globals:
;   undefined4 DAT_005d1fcc
;
; Called Functions:
;   FUN_0054c1b0
;   FUN_0054cc90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c130
        ;   Label: FUN_0054c130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c131
    PUSH -0x1                           ; 0054c135
    MOV EDX,dword ptr [EBX + 0x4]       ; 0054c137
    PUSH dword ptr [EBX + 0x8]          ; 0054c13a
    PUSH EDX                            ; 0054c13d
    PUSH EBX                            ; 0054c13e
    CALL FUN_0054c1b0                   ; 0054c13f
        ;   XREF to: 0054c1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c1b0()
    FLD float ptr [EBX + 0x14]          ; 0054c144
    ADD ESP,0x10                        ; 0054c147
    FCOMP double ptr [0x005d1fcc]       ; 0054c14a | DAT_005d1fcc
    FNSTSW AX                           ; 0054c150
    SAHF                                ; 0054c152
    JA 0x0054c157                       ; 0054c153
        ;   XREF to: 0054c157 (CONDITIONAL_JUMP)  ; LAB_0054c157
    POP EBX                             ; 0054c155
    RET                                 ; 0054c156
    PUSH 0x54bef0                       ; 0054c157 | LAB_0054bef0
        ;   Label: LAB_0054c157
    PUSH -0x1                           ; 0054c15c
    PUSH dword ptr [EBX + 0x14]         ; 0054c15e
    MOV ECX,dword ptr [EBX + 0x18]      ; 0054c161
    PUSH dword ptr [EBX + 0x1c]         ; 0054c164
    PUSH ECX                            ; 0054c167
    PUSH EBX                            ; 0054c168
    CALL FUN_0054cc90                   ; 0054c169
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; undefined FUN_0054cc90()
    ADD ESP,0x18                        ; 0054c16e
    POP EBX                             ; 0054c171
    RET                                 ; 0054c172

