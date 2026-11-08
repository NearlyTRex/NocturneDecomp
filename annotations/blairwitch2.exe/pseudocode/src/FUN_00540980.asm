; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540980(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_00540840 at 00540851
;   FUN_00540870 at 0054087a
;   FUN_00540aa0 at 00540aae
;   FUN_00549090 at 005490a5
;   FUN_005491b0 at 00549205
;
; Called Functions:
;   FUN_005027b0
;   FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540980
        ;   Label: FUN_00540980
    PUSH ESI                            ; 00540981
    PUSH EDI                            ; 00540982
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540983
    CMP dword ptr [ESP + 0x14],0x0      ; 00540987
    JNZ 0x005409f8                      ; 0054098c
        ;   XREF to: 005409f8 (CONDITIONAL_JUMP)  ; LAB_005409f8
    MOV ECX,dword ptr [EBX + 0x1e010]   ; 0054098e
        ;   Label: LAB_0054098e
    MOV dword ptr [EBX + 0x1d1f8],0x0   ; 00540994
    PUSH ECX                            ; 0054099e
    MOV dword ptr [EBX + 0x1e00c],0x0   ; 0054099f
    CALL FUN_005b7fce                   ; 005409a9
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005409ae
    MOV ESI,dword ptr [EBX + 0x1e014]   ; 005409b1
    PUSH ESI                            ; 005409b7
    CALL FUN_005b7fce                   ; 005409b8
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005409bd
    MOV EDI,dword ptr [EBX + 0x1e018]   ; 005409c0
    PUSH EDI                            ; 005409c6
    CALL FUN_005b7fce                   ; 005409c7
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    MOV dword ptr [EBX + 0x1e010],0x0   ; 005409cc
    MOV dword ptr [EBX + 0x1e014],0x0   ; 005409d6
    MOV dword ptr [EBX + 0x1e018],0x0   ; 005409e0
    ADD ESP,0x4                         ; 005409ea
    MOV byte ptr [EBX + 0x1d1a8],0x0    ; 005409ed
    POP EDI                             ; 005409f4
    POP ESI                             ; 005409f5
    POP EBX                             ; 005409f6
    RET                                 ; 005409f7
    PUSH EBX                            ; 005409f8
        ;   Label: LAB_005409f8
    CALL FUN_005027b0                   ; 005409f9
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005027b0()
    ADD ESP,0x4                         ; 005409fe
    JMP 0x0054098e                      ; 00540a01
        ;   XREF to: 0054098e (UNCONDITIONAL_JUMP)  ; LAB_0054098e

