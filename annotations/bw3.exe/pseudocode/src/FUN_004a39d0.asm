; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a39d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0045c040 at 0045c06a
;
; Called Functions:
;   FUN_004a3a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a39d0
        ;   Label: FUN_004a39d0
    PUSH ESI                            ; 004a39d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a39d2
    PUSH 0x40000000                     ; 004a39d6
    PUSH EDX                            ; 004a39db
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a39dc
    PUSH ECX                            ; 004a39e0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a39e1
    PUSH EBX                            ; 004a39e5
    PUSH 0x2                            ; 004a39e6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a39e8
    PUSH ESI                            ; 004a39ec
    CALL FUN_004a3a30                   ; 004a39ed
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a30()
    ADD ESP,0x18                        ; 004a39f2
    POP ESI                             ; 004a39f5
    POP EBX                             ; 004a39f6
    RET                                 ; 004a39f7

