; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d41e0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052e2f2
;
; Called Functions:
;   FUN_004de6e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d41e0
        ;   Label: FUN_004d41e0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d41e4
    PUSH EDX                            ; 004d41e8
    ADD EAX,0x206e8                     ; 004d41e9
    PUSH EAX                            ; 004d41ee
    CALL FUN_004de6e0                   ; 004d41ef
        ;   XREF to: 004de6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004de6e0()
    ADD ESP,0x8                         ; 004d41f4
    RET                                 ; 004d41f7

