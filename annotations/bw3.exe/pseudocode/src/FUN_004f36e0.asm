; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f36e0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0047b5e0 at 0047b647
;   FUN_00480410 at 0048057f
;
; Called Functions:
;   FUN_004f37e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f36e0
        ;   Label: FUN_004f36e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f36e4
    PUSH EDX                            ; 004f36e8
    PUSH EAX                            ; 004f36e9
    PUSH EDX                            ; 004f36ea
    PUSH EAX                            ; 004f36eb
    CALL FUN_004f37e0                   ; 004f36ec
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f37e0()
    ADD ESP,0x10                        ; 004f36f1
    RET                                 ; 004f36f4

