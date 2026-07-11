; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402b60(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0045d760 at 0045d962
;
; Called Functions:
;   FUN_00401ed0
;   FUN_00402a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402b60
        ;   Label: FUN_00402b60
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402b61
    PUSH EDX                            ; 00402b65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402b66
    PUSH ECX                            ; 00402b6a
    CALL FUN_00401ed0                   ; 00402b6b
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401ed0()
    ADD ESP,0x4                         ; 00402b70
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402b73
    SUB EDX,EAX                         ; 00402b77
    LEA EAX,[EDX + 0x2]                 ; 00402b79
    PUSH EAX                            ; 00402b7c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402b7d
    PUSH EBX                            ; 00402b81
    CALL FUN_00402a60                   ; 00402b82
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00402a60()
    ADD ESP,0xc                         ; 00402b87
    POP EBX                             ; 00402b8a
    RET                                 ; 00402b8b

