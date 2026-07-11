; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fca50(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_01bcdef4
;
; Called Functions:
;   FUN_0040d890
;   FUN_00423ed0
;   FUN_0042add0
;   FUN_004e11c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fca50
        ;   Label: FUN_004fca50
    PUSH ESI                            ; 004fca51
    PUSH EDI                            ; 004fca52
    PUSH EBP                            ; 004fca53
    MOV EBP,ESP                         ; 004fca54
    SUB ESP,0x3c                        ; 004fca56
    AND ESP,0xfffffff8                  ; 004fca59
    MOV ESI,dword ptr [EBP + 0x14]      ; 004fca5c
    LEA EDI,[ESI + 0x150]               ; 004fca5f
    LEA EAX,[EBP + 0x18]                ; 004fca65
        ;   Label: LAB_004fca65
    PUSH EAX                            ; 004fca68
    PUSH EDI                            ; 004fca69
    CALL FUN_004e11c0                   ; 004fca6a
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e11c0()
    ADD ESP,0x8                         ; 004fca6f
    CMP EAX,0x64                        ; 004fca72
    JZ 0x004fca94                       ; 004fca75
        ;   XREF to: 004fca94 (CONDITIONAL_JUMP)  ; LAB_004fca94
    PUSH EAX                            ; 004fca77
    PUSH ESI                            ; 004fca78
    CALL FUN_0042add0                   ; 004fca79
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042add0()
    ADD ESP,0x8                         ; 004fca7e
        ;   Label: LAB_004fca7e
    FLD float ptr [EBP + 0x18]          ; 004fca81
        ;   Label: LAB_004fca81
    FLDZ                                ; 004fca84
    FCOMPP                              ; 004fca86
    FNSTSW AX                           ; 004fca88
    SAHF                                ; 004fca8a
    JC 0x004fca65                       ; 004fca8b
        ;   XREF to: 004fca65 (CONDITIONAL_JUMP)  ; LAB_004fca65
    MOV ESP,EBP                         ; 004fca8d
    POP EBP                             ; 004fca8f
    POP EDI                             ; 004fca90
    POP ESI                             ; 004fca91
    POP EBX                             ; 004fca92
    RET                                 ; 004fca93
    MOV EDX,dword ptr [0x01bcdef4]      ; 004fca94 | DAT_01bcdef4
        ;   Label: LAB_004fca94
    PUSH EDX                            ; 004fca9a
    MOV ECX,dword ptr [ESI + 0x2590]    ; 004fca9b
    PUSH ECX                            ; 004fcaa1
    CALL FUN_0040d890                   ; 004fcaa2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EBX,EAX                         ; 004fcaa7
    ADD ESP,0x8                         ; 004fcaa9
    TEST EAX,EAX                        ; 004fcaac
    JZ 0x004fca81                       ; 004fcaae
        ;   XREF to: 004fca81 (CONDITIONAL_JUMP)  ; LAB_004fca81
    MOV EAX,ESP                         ; 004fcab0
    PUSH EAX                            ; 004fcab2
    CALL FUN_00423ed0                   ; 004fcab3
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00423ed0()
    MOV EAX,0x40a00000                  ; 004fcab8
    ADD ESP,0x4                         ; 004fcabd
    MOV EDX,ESP                         ; 004fcac0
    MOV dword ptr [ESP + 0x4],EAX       ; 004fcac2
    PUSH EDX                            ; 004fcac6
    MOV dword ptr [ESP + 0x38],ESI      ; 004fcac7
    MOV dword ptr [ESP + 0x3c],ESI      ; 004fcacb
    PUSH EBX                            ; 004fcacf
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004fcad0
    CALL dword ptr [EAX + 0x100]        ; 004fcad6
    JMP 0x004fca7e                      ; 004fcadc
        ;   XREF to: 004fca7e (UNCONDITIONAL_JUMP)  ; LAB_004fca7e

