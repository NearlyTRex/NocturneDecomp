; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bd910(void)
;
;
; XREF[3]:
;   FUN_004d20c0 at 004d2110
;   FUN_00523e50 at 0052403d
;   FUN_0057b880 at 0057b8dd
;
; Referenced Globals:
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   FUN_004dd3c0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d5ba14]                ; 004bd910 | DAT_01d5ba14
        ;   Label: FUN_004bd910
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bd915
    ADD EAX,0x206e8                     ; 004bd91c
    PUSH EAX                            ; 004bd921
    CALL FUN_004dd3c0                   ; 004bd922
        ;   XREF to: 004dd3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd3c0()
    ADD ESP,0x4                         ; 004bd927
    RET                                 ; 004bd92a

