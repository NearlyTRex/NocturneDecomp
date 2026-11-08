; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00429e60 at 00429e78
;
; Referenced Globals:
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_004a79a0
;   FUN_004c9cc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409db0
        ;   Label: FUN_00409db0
    PUSH EDX                            ; 00409db4
    CALL FUN_004a79a0                   ; 00409db5
        ;   XREF to: 004a79a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a79a0()
    ADD ESP,0x4                         ; 00409dba
    TEST EAX,EAX                        ; 00409dbd
    JZ 0x00409dc2                       ; 00409dbf
        ;   XREF to: 00409dc2 (CONDITIONAL_JUMP)  ; LAB_00409dc2
    RET                                 ; 00409dc1
    PUSH ESI                            ; 00409dc2
        ;   Label: LAB_00409dc2
    PUSH EBX                            ; 00409dc3
    PUSH EAX                            ; 00409dc4
    MOV ECX,dword ptr [ESP + 0x14]      ; 00409dc5
    PUSH dword ptr [ESP + 0x18]         ; 00409dc9
    PUSH ECX                            ; 00409dcd
    MOV EBX,dword ptr [ESP + 0x18]      ; 00409dce
    PUSH EBX                            ; 00409dd2
    MOV ESI,dword ptr [0x006167e0]      ; 00409dd3 | DAT_006167e0
    PUSH ESI                            ; 00409dd9
    CALL FUN_004c9cc0                   ; 00409dda
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9cc0()
    ADD ESP,0x14                        ; 00409ddf
    POP EBX                             ; 00409de2
    POP ESI                             ; 00409de3
    RET                                 ; 00409de4

