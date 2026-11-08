; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057de40(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057de40
        ;   Label: FUN_0057de40
    PUSH EDX                            ; 0057de44
    CALL FUN_0057d860                   ; 0057de45
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    MOV dword ptr [EAX],0x5fd4b4        ; 0057de4a
    MOV dword ptr [EAX + 0x4],0x0       ; 0057de50
    MOV dword ptr [EAX + 0x8],0x0       ; 0057de57
    MOV dword ptr [EAX + 0xc],0x0       ; 0057de5e
    MOV dword ptr [EAX + 0x10],0x0      ; 0057de65
    ADD ESP,0x4                         ; 0057de6c
    MOV dword ptr [EAX + 0x14],0x1      ; 0057de6f
    RET                                 ; 0057de76

