; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb8b0(void)
;
;
; XREF[3]:
;   FUN_0045b190 at 0045b3e1
;   FUN_004b1bf0 at 004b1dd8
;   FUN_0056d060 at 0056d2b1
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_004dd2f0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cedef4]                ; 004bb8b0 | DAT_01cedef4
        ;   Label: FUN_004bb8b0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bb8b5
    ADD EAX,0x2437c                     ; 004bb8bc
    PUSH EAX                            ; 004bb8c1
    CALL FUN_004dd2f0                   ; 004bb8c2
        ;   XREF to: 004dd2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd2f0()
    ADD ESP,0x4                         ; 004bb8c7
    RET                                 ; 004bb8ca

