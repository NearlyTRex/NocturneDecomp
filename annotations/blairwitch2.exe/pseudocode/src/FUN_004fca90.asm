; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fca90(undefined4 *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b460
;
; Called Functions:
;   FUN_004fc350
;   FUN_004fc640
;   FUN_004fc6b0
;   FUN_00521630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fca90
        ;   Label: FUN_004fca90
    PUSH ESI                            ; 004fca91
    PUSH EDI                            ; 004fca92
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fca93
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fca97
    LEA EDI,[EBX + 0x8]                 ; 004fca9b
    MOV dword ptr [EBX + 0x4],0x1       ; 004fca9e
    PUSH EDI                            ; 004fcaa5
    MOV AL,byte ptr [ESI]               ; 004fcaa6
        ;   Label: LAB_004fcaa6
    MOV byte ptr [EDI],AL               ; 004fcaa8
    CMP AL,0x0                          ; 004fcaaa
    JZ 0x004fcabe                       ; 004fcaac
        ;   XREF to: 004fcabe (CONDITIONAL_JUMP)  ; LAB_004fcabe
    MOV AL,byte ptr [ESI + 0x1]         ; 004fcaae
    ADD ESI,0x2                         ; 004fcab1
    MOV byte ptr [EDI + 0x1],AL         ; 004fcab4
    ADD EDI,0x2                         ; 004fcab7
    CMP AL,0x0                          ; 004fcaba
    JNZ 0x004fcaa6                      ; 004fcabc
        ;   XREF to: 004fcaa6 (CONDITIONAL_JUMP)  ; LAB_004fcaa6
    POP EDI                             ; 004fcabe
        ;   Label: LAB_004fcabe
    PUSH EBX                            ; 004fcabf
    MOV dword ptr [EBX],0x0             ; 004fcac0
    CALL FUN_004fc640                   ; 004fcac6
        ;   XREF to: 004fc640 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc640()
    ADD ESP,0x4                         ; 004fcacb
    MOV EDX,dword ptr [0x0061b460]      ; 004fcace | DAT_0061b460
    PUSH EDX                            ; 004fcad4
    CALL FUN_00521630                   ; 004fcad5
        ;   XREF to: 00521630 (UNCONDITIONAL_CALL)  ; undefined FUN_00521630()
    ADD ESP,0x4                         ; 004fcada
    PUSH EBX                            ; 004fcadd
    CALL FUN_004fc350                   ; 004fcade
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    ADD ESP,0x4                         ; 004fcae3
    PUSH 0x0                            ; 004fcae6
    PUSH EBX                            ; 004fcae8
    MOV dword ptr [EBX],0xffffffff      ; 004fcae9
    CALL FUN_004fc6b0                   ; 004fcaef
        ;   XREF to: 004fc6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc6b0()
    ADD ESP,0x8                         ; 004fcaf4
    POP EDI                             ; 004fcaf7
    POP ESI                             ; 004fcaf8
    POP EBX                             ; 004fcaf9
    RET                                 ; 004fcafa

