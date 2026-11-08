; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd290(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004d0960 at 004d09a2
;
; Referenced Globals:
;   undefined4 DAT_01c50950
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004fd290
        ;   Label: FUN_004fd290
    MOV byte ptr [EAX + 0x1c50950],0x1  ; 004fd294 | DAT_01c50950
    RET                                 ; 004fd29b

