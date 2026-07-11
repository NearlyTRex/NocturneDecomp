; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d7480(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004d7b30 at 004d7b6d
;   FUN_004d7bd0 at 004d7c8b
;
; Called Functions:
;   FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7480
        ;   Label: FUN_004d7480
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d7481
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7485
    ADD EAX,0x30                        ; 004d7489
    PUSH EAX                            ; 004d748c
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d748d
    PUSH EDX                            ; 004d7491
    PUSH EBX                            ; 004d7492
    CALL FUN_0055a8b0                   ; 004d7493
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    ADD ESP,0xc                         ; 004d7498
    MOV EAX,EBX                         ; 004d749b
    POP EBX                             ; 004d749d
    RET                                 ; 004d749e

