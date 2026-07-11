; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051db70(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0051d9d0 at 0051da42
;
; Called Functions:
;   FUN_005184b0
;   FUN_0051da50
;   FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051db70
        ;   Label: FUN_0051db70
    PUSH ESI                            ; 0051db71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051db72
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051db76
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0051db7a
    JNZ 0x0051dba5                      ; 0051db80
        ;   XREF to: 0051dba5 (CONDITIONAL_JUMP)  ; LAB_0051dba5
    MOV ECX,dword ptr [EBX + 0x2234]    ; 0051db82
        ;   Label: LAB_0051db82
    PUSH ECX                            ; 0051db88
    MOV ESI,dword ptr [EBX + 0x2230]    ; 0051db89
    PUSH ESI                            ; 0051db8f
    PUSH EBX                            ; 0051db90
    CALL FUN_0051e020                   ; 0051db91
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0051db96
    PUSH EAX                            ; 0051db99
    CALL FUN_005184b0                   ; 0051db9a
        ;   XREF to: 005184b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005184b0()
    ADD ESP,0xc                         ; 0051db9f
    POP ESI                             ; 0051dba2
    POP EBX                             ; 0051dba3
    RET                                 ; 0051dba4
    PUSH EAX                            ; 0051dba5
        ;   Label: LAB_0051dba5
    PUSH EBX                            ; 0051dba6
    CALL FUN_0051da50                   ; 0051dba7
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0051da50()
    ADD ESP,0x8                         ; 0051dbac
    JMP 0x0051db82                      ; 0051dbaf
        ;   XREF to: 0051db82 (UNCONDITIONAL_JUMP)  ; LAB_0051db82

