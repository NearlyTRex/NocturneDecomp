; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040e260(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_mana_lg_kfm_005b6111
;   void* PTR_FUN_005db2f4 = 0040def0
;
; Called Functions:
;   FUN_0040de60
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e260
        ;   Label: FUN_0040e260
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040e261
    PUSH EDX                            ; 0040e265
    CALL FUN_0040de60                   ; 0040e266
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de60()
    ADD ESP,0x4                         ; 0040e26b
    PUSH 0x5b6111                       ; 0040e26e | = "mana_lg.kfm"
    MOV EBX,EAX                         ; 0040e273
    ADD EAX,0x158                       ; 0040e275
    PUSH EAX                            ; 0040e27a
    MOV dword ptr [EAX + -0x4],0x5db2f4 ; 0040e27b | PTR_FUN_005db2f4
    CALL FUN_004625f0                   ; 0040e282
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0040e287
    MOV dword ptr [EBX + 0x318],0xa     ; 0040e28a
    MOV EAX,EBX                         ; 0040e294
    MOV dword ptr [EBX + 0x314],0x32    ; 0040e296
    POP EBX                             ; 0040e2a0
    RET                                 ; 0040e2a1

