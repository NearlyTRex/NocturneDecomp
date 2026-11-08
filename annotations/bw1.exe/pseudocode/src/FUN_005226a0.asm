; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005226a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_005232d0 at 005232fd
;
; Called Functions:
;   FUN_004672b0
;   FUN_00522540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005226a0
        ;   Label: FUN_005226a0
    PUSH ESI                            ; 005226a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 005226a2
    MOV EAX,dword ptr [EDX + 0x104]     ; 005226a6
    PUSH EAX                            ; 005226ac
    PUSH 0x0                            ; 005226ad
    MOV ECX,dword ptr [ESP + 0x20]      ; 005226af
    PUSH ECX                            ; 005226b3
    PUSH EDX                            ; 005226b4
    CALL FUN_004672b0                   ; 005226b5
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004672b0()
    ADD ESP,0x8                         ; 005226ba
    PUSH EAX                            ; 005226bd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005226be
    PUSH EBX                            ; 005226c2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005226c3
    PUSH ESI                            ; 005226c7
    CALL FUN_00522540                   ; 005226c8
        ;   XREF to: 00522540 (UNCONDITIONAL_CALL)  ; undefined FUN_00522540()
    ADD ESP,0x14                        ; 005226cd
    POP ESI                             ; 005226d0
    POP EBX                             ; 005226d1
    RET                                 ; 005226d2

