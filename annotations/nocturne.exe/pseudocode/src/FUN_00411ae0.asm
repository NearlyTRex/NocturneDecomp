; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411ae0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   FUN_00409fc0
;   FUN_0040dda0
;   FUN_00411f20
;   FUN_0043b690
;   FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411ae0
        ;   Label: FUN_00411ae0
    SUB ESP,0x4                         ; 00411ae1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00411ae4
    LEA EAX,[EBX + 0x180]               ; 00411ae8
    PUSH EAX                            ; 00411aee
    CALL FUN_00454510                   ; 00411aef
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00411af4
    LEA EAX,[EBX + 0x150]               ; 00411af7
    PUSH EAX                            ; 00411afd
    LEA EAX,[EBX + 0x170]               ; 00411afe
    PUSH EAX                            ; 00411b04
    CALL FUN_0043b690                   ; 00411b05
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b690()
    ADD ESP,0x8                         ; 00411b0a
    PUSH EBX                            ; 00411b0d
    CALL FUN_00409fc0                   ; 00411b0e
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 00411b13
    PUSH EBX                            ; 00411b16
    CALL FUN_00411f20                   ; 00411b17
        ;   XREF to: 00411f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00411f20()
    ADD ESP,0x4                         ; 00411b1c
    PUSH dword ptr [EBX + 0x374]        ; 00411b1f
    PUSH dword ptr [EBX + 0x370]        ; 00411b25
    MOV dword ptr [EBX + 0x378],0x0     ; 00411b2b
    CALL FUN_0040dda0                   ; 00411b35
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00411b3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00411b3e
    MOV dword ptr [EBX + 0x37c],EAX     ; 00411b42
    ADD ESP,0x8                         ; 00411b48
    ADD ESP,0x4                         ; 00411b4b
    POP EBX                             ; 00411b4e
    RET                                 ; 00411b4f

