; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00513b90(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_00512f70 at 00512f76
;   FUN_00512fb0 at 00512fee
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513b90
        ;   Label: FUN_00513b90
    PUSH ESI                            ; 00513b91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00513b92
    MOV EDX,dword ptr [EBX + 0x414]     ; 00513b96
    MOV dword ptr [EBX + 0x410],0x0     ; 00513b9c
    TEST EDX,EDX                        ; 00513ba6
    JNZ 0x00513bfe                      ; 00513ba8
        ;   XREF to: 00513bfe (CONDITIONAL_JUMP)  ; LAB_00513bfe
    MOV dword ptr [EBX + 0x424],0x0     ; 00513baa
        ;   Label: LAB_00513baa
    MOV ESI,dword ptr [EBX + 0x418]     ; 00513bb4
    MOV dword ptr [EBX + 0x41c],0x0     ; 00513bba
    TEST ESI,ESI                        ; 00513bc4
    JNZ 0x00513c13                      ; 00513bc6
        ;   XREF to: 00513c13 (CONDITIONAL_JUMP)  ; LAB_00513c13
    MOV dword ptr [EBX],0x0             ; 00513bc8
        ;   Label: LAB_00513bc8
    MOV byte ptr [EBX + 0x108],0x0      ; 00513bce
    MOV byte ptr [EBX + 0x208],0x0      ; 00513bd5
    MOV byte ptr [EBX + 0x308],0x0      ; 00513bdc
    MOV dword ptr [EBX + 0x408],0x3e8   ; 00513be3
    MOV dword ptr [EBX + 0x40c],0x3e8   ; 00513bed
    MOV byte ptr [EBX + 0x4],0x0        ; 00513bf7
    POP ESI                             ; 00513bfb
    POP EBX                             ; 00513bfc
    RET                                 ; 00513bfd
    PUSH EDX                            ; 00513bfe
        ;   Label: LAB_00513bfe
    CALL FUN_005a3770                   ; 00513bff
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00513c04
    MOV dword ptr [EBX + 0x414],0x0     ; 00513c07
    JMP 0x00513baa                      ; 00513c11
        ;   XREF to: 00513baa (UNCONDITIONAL_JUMP)  ; LAB_00513baa
    PUSH ESI                            ; 00513c13
        ;   Label: LAB_00513c13
    CALL FUN_005a3770                   ; 00513c14
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00513c19
    MOV dword ptr [EBX + 0x418],0x0     ; 00513c1c
    JMP 0x00513bc8                      ; 00513c26
        ;   XREF to: 00513bc8 (UNCONDITIONAL_JUMP)  ; LAB_00513bc8

