; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ec300(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00544460 at 00548c02
;
; Called Functions:
;   FUN_004fc310
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004ec300
        ;   Label: FUN_004ec300
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec304
    PUSH EDX                            ; 004ec308
    ADD EAX,0x1fae8                     ; 004ec309
    PUSH EAX                            ; 004ec30e
    CALL FUN_004fc310                   ; 004ec30f
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x8                         ; 004ec314
    RET                                 ; 004ec317

