; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b8a0(int param_1)
;
;
; XREF[38]:
;   FUN_00410490 at 004106e4
;   FUN_00412480 at 00412675
;   FUN_00413800 at 00413a23
;   FUN_004150d0 at 0041513c
;   FUN_004154b0 at 0041568f
;   FUN_00418a00 at 00418f92
;   FUN_0041fe40 at 00420888
;   FUN_00439f50 at 0043a17b
;   FUN_0043bdb0 at 0043bfd6
;   FUN_00454750 at 0045498d
;   ... and 28 more
;
; Referenced Globals:
;   undefined4 DAT_00591b63
;
; Called Functions:
;   FUN_0051b920
;   FUN_0051c3d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8a0
        ;   Label: FUN_0051b8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b8a1
    PUSH -0x1                           ; 0051b8a5
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051b8a7
    PUSH dword ptr [EBX + 0x8]          ; 0051b8aa
    PUSH EDX                            ; 0051b8ad
    PUSH EBX                            ; 0051b8ae
    CALL FUN_0051b920                   ; 0051b8af
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b920()
    FLD float ptr [EBX + 0x14]          ; 0051b8b4
    ADD ESP,0x10                        ; 0051b8b7
    FCOMP double ptr [0x00591b63]       ; 0051b8ba | DAT_00591b63
    FNSTSW AX                           ; 0051b8c0
    SAHF                                ; 0051b8c2
    JA 0x0051b8c7                       ; 0051b8c3
        ;   XREF to: 0051b8c7 (CONDITIONAL_JUMP)  ; LAB_0051b8c7
    POP EBX                             ; 0051b8c5
    RET                                 ; 0051b8c6
    PUSH 0x51b650                       ; 0051b8c7 | LAB_0051b650
        ;   Label: LAB_0051b8c7
    PUSH -0x1                           ; 0051b8cc
    PUSH dword ptr [EBX + 0x14]         ; 0051b8ce
    MOV ECX,dword ptr [EBX + 0x18]      ; 0051b8d1
    PUSH dword ptr [EBX + 0x1c]         ; 0051b8d4
    PUSH ECX                            ; 0051b8d7
    PUSH EBX                            ; 0051b8d8
    CALL FUN_0051c3d0                   ; 0051b8d9
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c3d0()
    ADD ESP,0x18                        ; 0051b8de
    POP EBX                             ; 0051b8e1
    RET                                 ; 0051b8e2

