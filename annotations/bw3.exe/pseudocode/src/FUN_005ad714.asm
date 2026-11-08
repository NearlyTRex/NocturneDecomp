; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad714(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)
;
;
; Called Functions:
;   FUN_005afa50
;   FUN_005afa5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ad714
        ;   Label: FUN_005ad714
    MOV EBP,ESP                         ; 005ad715
    PUSH EBX                            ; 005ad717
    PUSH ESI                            ; 005ad718
    PUSH EDI                            ; 005ad719
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ad71a
    CALL FUN_005afa50                   ; 005ad71d
        ;   XREF to: 005afa50 (UNCONDITIONAL_CALL)  ; undefined FUN_005afa50()
    PUSH EAX                            ; 005ad722
    PUSH 0x46                           ; 005ad723
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ad725
    PUSH EDX                            ; 005ad728
    PUSH EBX                            ; 005ad729
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ad72a
    PUSH ECX                            ; 005ad72d
    MOV ESI,dword ptr [EBP + 0xc]       ; 005ad72e
    PUSH ESI                            ; 005ad731
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ad732
    PUSH EDI                            ; 005ad735
    CALL FUN_005afa5c                   ; 005ad736
        ;   XREF to: 005afa5c (UNCONDITIONAL_CALL)  ; undefined FUN_005afa5c()
    MOV EDX,dword ptr [EBP + 0x10]      ; 005ad73b
    MOV ECX,dword ptr [EBX]             ; 005ad73e
    ADD ESP,0x1c                        ; 005ad740
    ADD EDX,ECX                         ; 005ad743
    JMP 0x005ad705                      ; 005ad745
        ;   XREF to: 005ad705 (UNCONDITIONAL_JUMP)  ; LAB_005ad705

