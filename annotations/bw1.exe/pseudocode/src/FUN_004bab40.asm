; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bab40(undefined4 *param_1)
;
;
; Called Functions:
;   FUN_0040d4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bab40
        ;   Label: FUN_004bab40
    PUSH 0xffff                         ; 004bab44
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bab49
    PUSH EDX                            ; 004bab4c
    MOV ECX,dword ptr [EAX]             ; 004bab4d
    PUSH ECX                            ; 004bab4f
    ADD EAX,0x18                        ; 004bab50
    PUSH EAX                            ; 004bab53
    CALL FUN_0040d4b0                   ; 004bab54
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    ADD ESP,0x10                        ; 004bab59
    RET                                 ; 004bab5c

