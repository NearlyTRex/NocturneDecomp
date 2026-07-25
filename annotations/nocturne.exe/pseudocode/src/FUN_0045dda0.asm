; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dda0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_0045dd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dda0
        ;   Label: FUN_0045dda0
    PUSH ESI                            ; 0045dda1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045dda2
    PUSH EDX                            ; 0045dda6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045dda7
    PUSH ECX                            ; 0045ddab
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045ddac
    PUSH EBX                            ; 0045ddb0
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045ddb1
    PUSH ESI                            ; 0045ddb5
    CALL FUN_0045dd70                   ; 0045ddb6
        ;   XREF to: 0045dd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0045dd70()
    ADD ESP,0x10                        ; 0045ddbb
    POP ESI                             ; 0045ddbe
    POP EBX                             ; 0045ddbf
    RET                                 ; 0045ddc0

