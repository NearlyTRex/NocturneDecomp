; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc010(int param_1)
;
;
; XREF[2]:
;   FUN_004fbb70 at 004fbe38
;   FUN_004fc0d0 at 004fc142
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc010
        ;   Label: FUN_004fc010
    PUSH ESI                            ; 004fc011
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc012
    LEA EDX,[EAX + 0x4]                 ; 004fc016
    LEA ECX,[EAX + 0x18]                ; 004fc019
    MOV dword ptr [EAX + 0x20],0x1      ; 004fc01c
    MOV ESI,dword ptr [ECX]             ; 004fc023
    MOV EBX,dword ptr [EDX]             ; 004fc025
    MOV dword ptr [EDX],ESI             ; 004fc027
    MOV dword ptr [ECX],EBX             ; 004fc029
    LEA ECX,[EAX + 0x8]                 ; 004fc02b
    LEA EDX,[EAX + 0x1c]                ; 004fc02e
    MOV EBX,dword ptr [ECX]             ; 004fc031
    MOV ESI,dword ptr [EDX]             ; 004fc033
    MOV dword ptr [ECX],ESI             ; 004fc035
    MOV dword ptr [EDX],EBX             ; 004fc037
    MOV EDX,dword ptr [EAX + 0xc]       ; 004fc039
    CMP EDX,0x5                         ; 004fc03c
    JZ 0x004fc053                       ; 004fc03f
        ;   XREF to: 004fc053 (CONDITIONAL_JUMP)  ; LAB_004fc053
    CMP EDX,0x4                         ; 004fc041
    JZ 0x004fc05c                       ; 004fc044
        ;   XREF to: 004fc05c (CONDITIONAL_JUMP)  ; LAB_004fc05c
    FLD float ptr [EAX + 0x14]          ; 004fc046
        ;   Label: LAB_004fc046
    FLD1                                ; 004fc049
    FSUBRP                              ; 004fc04b
    FSTP float ptr [EAX + 0x14]         ; 004fc04d
    POP ESI                             ; 004fc050
    POP EBX                             ; 004fc051
    RET                                 ; 004fc052
    MOV dword ptr [EAX + 0xc],0x4       ; 004fc053
        ;   Label: LAB_004fc053
    JMP 0x004fc046                      ; 004fc05a
        ;   XREF to: 004fc046 (UNCONDITIONAL_JUMP)  ; LAB_004fc046
    MOV dword ptr [EAX + 0xc],0x5       ; 004fc05c
        ;   Label: LAB_004fc05c
    FLD float ptr [EAX + 0x14]          ; 004fc063
    FLD1                                ; 004fc066
    FSUBRP                              ; 004fc068
    FSTP float ptr [EAX + 0x14]         ; 004fc06a
    POP ESI                             ; 004fc06d
    POP EBX                             ; 004fc06e
    RET                                 ; 004fc06f

