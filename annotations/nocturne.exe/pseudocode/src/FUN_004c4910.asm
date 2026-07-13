; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4910(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_0040dda0
;   FUN_004796b0
;   FUN_0051dcd0
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4910
        ;   Label: FUN_004c4910
    PUSH ESI                            ; 004c4911
    SUB ESP,0x4                         ; 004c4912
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c4915
    LEA EBX,[ESI + 0x150]               ; 004c4919
    PUSH EBX                            ; 004c491f
    CALL FUN_0051dcd0                   ; 004c4920
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 004c4925
    PUSH EBX                            ; 004c4928
    CALL FUN_0051e0a0                   ; 004c4929
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004c492e
    PUSH ESI                            ; 004c4931
    MOV dword ptr [ESI + 0xbd24],0x0    ; 004c4932
    CALL FUN_004796b0                   ; 004c493c
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 004c4941
    PUSH 0x41f00000                     ; 004c4944
    PUSH 0x0                            ; 004c4949
    CALL FUN_0040dda0                   ; 004c494b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004c4950
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4954
    MOV dword ptr [ESI + 0xbca0],EAX    ; 004c4958
    ADD ESP,0x8                         ; 004c495e
    ADD ESP,0x4                         ; 004c4961
    POP ESI                             ; 004c4964
    POP EBX                             ; 004c4965
    RET                                 ; 004c4966

