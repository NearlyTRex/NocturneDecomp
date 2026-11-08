; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516270(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_005168e0 at 005168fb
;   FUN_00517130 at 00517148
;
; Called Functions:
;   FUN_005b9cf0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 00516270
        ;   Label: FUN_00516270
    MOV EDX,dword ptr [ESP + 0xc]       ; 00516272
    PUSH EDX                            ; 00516276
    MOV ECX,dword ptr [ESP + 0xc]       ; 00516277
    PUSH ECX                            ; 0051627b
    CALL FUN_005b9cf0                   ; 0051627c
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 00516281
    MOV EAX,dword ptr [ESP + 0x4]       ; 00516284
    MOV byte ptr [EAX + 0x13],0x0       ; 00516288
    RET                                 ; 0051628c

