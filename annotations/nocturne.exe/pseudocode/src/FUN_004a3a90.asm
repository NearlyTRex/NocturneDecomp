; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3a90(void)
;
;
; XREF[2]:
;   FUN_004996b0 at 00499898
;   FUN_0053e860 at 0053eb8d
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   FUN_004c1da0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cae0e8]                ; 004a3a90 | DAT_01cae0e8
        ;   Label: FUN_004a3a90
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a3a95
    ADD EAX,0x1f5a0                     ; 004a3a9c
    PUSH EAX                            ; 004a3aa1
    CALL FUN_004c1da0                   ; 004a3aa2
        ;   XREF to: 004c1da0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1da0()
    ADD ESP,0x4                         ; 004a3aa7
    RET                                 ; 004a3aaa

