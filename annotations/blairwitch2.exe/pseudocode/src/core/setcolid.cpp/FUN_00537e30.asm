; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537e30(int param_1,int param_2)
;
;
; XREF[43]:
;   FUN_00408c30 at 00408c56
;   FUN_0040a050 at 0040a84c
;   FUN_0040c990 at 0040c9ee
;   FUN_0040ca40 at 0040cabb
;   FUN_004186c0 at 00418bbf
;   FUN_00423a60 at 00423bb2
;   FUN_004392b0 at 00439404
;   FUN_0043a7a0 at 0043a972
;   FUN_004599a0 at 00459a46
;   FUN_00459ff0 at 0045a88c
;   ... and 33 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005e5edb
;   TerminatedCString s_CDemonSet_ignore_ignore_005e5ef0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537e30
        ;   Label: FUN_00537e30
    PUSH EBP                            ; 00537e31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00537e32
    CMP dword ptr [ESP + 0x10],0x0      ; 00537e36
    JZ 0x00537e63                       ; 00537e3b
        ;   XREF to: 00537e63 (CONDITIONAL_JUMP)  ; LAB_00537e63
    MOV ECX,dword ptr [EBX + 0x15f6a8]  ; 00537e3d
    TEST ECX,ECX                        ; 00537e43
    JL 0x00537e63                       ; 00537e45
        ;   XREF to: 00537e63 (CONDITIONAL_JUMP)  ; LAB_00537e63
    CMP ECX,0xa                         ; 00537e47
    JGE 0x00537e66                      ; 00537e4a
        ;   XREF to: 00537e66 (CONDITIONAL_JUMP)  ; LAB_00537e66
    MOV EAX,dword ptr [EBX + 0x15f6a8]  ; 00537e4c
        ;   Label: LAB_00537e4c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00537e52
    MOV dword ptr [EBX + EAX*0x4 + 0x15f6b0],EDX ; 00537e56
    INC dword ptr [EBX + 0x15f6a8]      ; 00537e5d
    POP EBP                             ; 00537e63
        ;   Label: LAB_00537e63
    POP EBX                             ; 00537e64
    RET                                 ; 00537e65
    PUSH EDI                            ; 00537e66
        ;   Label: LAB_00537e66
    MOV EDI,0x5e5edb                    ; 00537e67 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 00537e6c
    PUSH 0x5e5ef0                       ; 00537e71 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x01d046a0],EDI      ; 00537e76 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00537e7c | DAT_01d046a4
    CALL FUN_004e4500                   ; 00537e82
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00537e87
    POP EDI                             ; 00537e8a
    JMP 0x00537e4c                      ; 00537e8b
        ;   XREF to: 00537e4c (UNCONDITIONAL_JUMP)  ; LAB_00537e4c

