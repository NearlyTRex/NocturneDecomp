; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045de70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_0045e370 at 0045e558
;
; Called Functions:
;   FUN_0045de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de70
        ;   Label: FUN_0045de70
    PUSH ESI                            ; 0045de71
    PUSH EDI                            ; 0045de72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045de73
    PUSH EDX                            ; 0045de77
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045de78
    PUSH ECX                            ; 0045de7c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045de7d
    PUSH EBX                            ; 0045de81
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045de82
    PUSH ESI                            ; 0045de86
    MOV EDI,dword ptr [ESP + 0x20]      ; 0045de87
    PUSH EDI                            ; 0045de8b
    CALL FUN_0045de40                   ; 0045de8c
        ;   XREF to: 0045de40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045de40()
    ADD ESP,0x14                        ; 0045de91
    POP EDI                             ; 0045de94
    POP ESI                             ; 0045de95
    POP EBX                             ; 0045de96
    RET                                 ; 0045de97

