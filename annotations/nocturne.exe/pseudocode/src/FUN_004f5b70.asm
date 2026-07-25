; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5b70(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004f5b20 at 004f5b44
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5b70
        ;   Label: FUN_004f5b70
    PUSH EDI                            ; 004f5b71
    PUSH EBP                            ; 004f5b72
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f5b73
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f5b77
    MOV EDX,dword ptr [EDI]             ; 004f5b7b
    XOR EBX,EBX                         ; 004f5b7d
    TEST EDX,EDX                        ; 004f5b7f
    JLE 0x004f5ba0                      ; 004f5b81
        ;   XREF to: 004f5ba0 (CONDITIONAL_JUMP)  ; LAB_004f5ba0
    PUSH ESI                            ; 004f5b83
    XOR ESI,ESI                         ; 004f5b84
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5b86
        ;   Label: LAB_004f5b86
    PUSH EBP                            ; 004f5b89
    ADD EAX,ESI                         ; 004f5b8a
    PUSH EAX                            ; 004f5b8c
    INC EBX                             ; 004f5b8d
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50 ; 004f5b8e
        ;   XREF to: 004f4a50 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50()
    ADD ESI,0x24                        ; 004f5b93
    MOV ECX,dword ptr [EDI]             ; 004f5b96
    ADD ESP,0x8                         ; 004f5b98
    CMP EBX,ECX                         ; 004f5b9b
    JL 0x004f5b86                       ; 004f5b9d
        ;   XREF to: 004f5b86 (CONDITIONAL_JUMP)  ; LAB_004f5b86
    POP ESI                             ; 004f5b9f
    POP EBP                             ; 004f5ba0
        ;   Label: LAB_004f5ba0
    POP EDI                             ; 004f5ba1
    POP EBX                             ; 004f5ba2
    RET                                 ; 004f5ba3

