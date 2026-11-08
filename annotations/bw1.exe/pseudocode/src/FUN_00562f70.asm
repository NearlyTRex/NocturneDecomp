; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562f70(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_00562e30 at 00562e41
;   FUN_00562e60 at 00562e6a
;   FUN_00563090 at 0056309e
;   FUN_0056b740 at 0056b755
;   FUN_0056b860 at 0056b8b5
;
; Called Functions:
;   FUN_00523910
;   FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562f70
        ;   Label: FUN_00562f70
    PUSH ESI                            ; 00562f71
    PUSH EDI                            ; 00562f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00562f73
    CMP dword ptr [ESP + 0x14],0x0      ; 00562f77
    JNZ 0x00562fe8                      ; 00562f7c
        ;   XREF to: 00562fe8 (CONDITIONAL_JUMP)  ; LAB_00562fe8
    MOV ECX,dword ptr [EBX + 0x1ec90]   ; 00562f7e
        ;   Label: LAB_00562f7e
    MOV dword ptr [EBX + 0x1de78],0x0   ; 00562f84
    PUSH ECX                            ; 00562f8e
    MOV dword ptr [EBX + 0x1ec8c],0x0   ; 00562f8f
    CALL FUN_005c0336                   ; 00562f99
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00562f9e
    MOV ESI,dword ptr [EBX + 0x1ec94]   ; 00562fa1
    PUSH ESI                            ; 00562fa7
    CALL FUN_005c0336                   ; 00562fa8
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00562fad
    MOV EDI,dword ptr [EBX + 0x1ec98]   ; 00562fb0
    PUSH EDI                            ; 00562fb6
    CALL FUN_005c0336                   ; 00562fb7
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    MOV dword ptr [EBX + 0x1ec90],0x0   ; 00562fbc
    MOV dword ptr [EBX + 0x1ec94],0x0   ; 00562fc6
    MOV dword ptr [EBX + 0x1ec98],0x0   ; 00562fd0
    ADD ESP,0x4                         ; 00562fda
    MOV byte ptr [EBX + 0x1de28],0x0    ; 00562fdd
    POP EDI                             ; 00562fe4
    POP ESI                             ; 00562fe5
    POP EBX                             ; 00562fe6
    RET                                 ; 00562fe7
    PUSH EBX                            ; 00562fe8
        ;   Label: LAB_00562fe8
    CALL FUN_00523910                   ; 00562fe9
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; undefined FUN_00523910()
    ADD ESP,0x4                         ; 00562fee
    JMP 0x00562f7e                      ; 00562ff1
        ;   XREF to: 00562f7e (UNCONDITIONAL_JUMP)  ; LAB_00562f7e

