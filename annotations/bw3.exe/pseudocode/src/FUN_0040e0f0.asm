; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040e0f0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_mana_sm_kfm_005b60fa
;   void* PTR_FUN_005db214 = 0040def0
;
; Called Functions:
;   FUN_0040de60
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e0f0
        ;   Label: FUN_0040e0f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040e0f1
    PUSH EDX                            ; 0040e0f5
    CALL FUN_0040de60                   ; 0040e0f6
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de60()
    ADD ESP,0x4                         ; 0040e0fb
    PUSH 0x5b60fa                       ; 0040e0fe | = "mana_sm.kfm"
    MOV EBX,EAX                         ; 0040e103
    ADD EAX,0x158                       ; 0040e105
    PUSH EAX                            ; 0040e10a
    MOV dword ptr [EAX + -0x4],0x5db214 ; 0040e10b | PTR_FUN_005db214
    CALL FUN_004625f0                   ; 0040e112
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0040e117
    MOV dword ptr [EBX + 0x318],0xa     ; 0040e11a
    MOV EAX,EBX                         ; 0040e124
    MOV dword ptr [EBX + 0x314],0x14    ; 0040e126
    POP EBX                             ; 0040e130
    RET                                 ; 0040e131

