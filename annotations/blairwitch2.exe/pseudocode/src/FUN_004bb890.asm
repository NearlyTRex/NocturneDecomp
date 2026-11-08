; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb890(void)
;
;
; XREF[1]:
;   FUN_004ad640 at 004adbcf
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_004dd270
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cedef4]                ; 004bb890 | DAT_01cedef4
        ;   Label: FUN_004bb890
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bb895
    PUSH 0x0                            ; 004bb89c
    ADD EAX,0x2437c                     ; 004bb89e
    PUSH EAX                            ; 004bb8a3
    CALL FUN_004dd270                   ; 004bb8a4
        ;   XREF to: 004dd270 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd270()
    ADD ESP,0x8                         ; 004bb8a9
    RET                                 ; 004bb8ac

