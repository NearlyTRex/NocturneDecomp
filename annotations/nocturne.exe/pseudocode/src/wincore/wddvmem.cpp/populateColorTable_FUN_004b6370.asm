; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 wincore_wddvmem_cpp_populateColorTable_FUN_004b6370(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00648
;   undefined4 DAT_01c0064c
;   undefined4 DAT_01c0064d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6370
        ;   Label: wincore_wddvmem.cpp_populateColorTable_FUN_004b6370
    PUSH ESI                            ; 004b6371
    PUSH EDI                            ; 004b6372
    PUSH EBP                            ; 004b6373
    MOV EBP,dword ptr [0x005b7624]      ; 004b6374 | DAT_005b7624
    XOR EDX,EDX                         ; 004b637a
    XOR EAX,EAX                         ; 004b637c
    MOVZX ESI,byte ptr [EAX + 0x1c00649] ; 004b637e | DAT_01c0064c
        ;   Label: LAB_004b637e
    XOR EBX,EBX                         ; 004b6385
    MOVZX EDI,byte ptr [EAX + 0x1c00648] ; 004b6387 | DAT_01c00648
    MOV BL,byte ptr [EAX + 0x1c0064a]   ; 004b638e | DAT_01c0064d
    CMP EBP,0x20                        ; 004b6394
    JNZ 0x004b63e1                      ; 004b6397
        ;   XREF to: 004b63e1 (CONDITIONAL_JUMP)  ; LAB_004b63e1
    MOV CL,byte ptr [0x01c00624]        ; 004b6399 | DAT_01c00624
    SHL EDI,CL                          ; 004b639f
    MOV CL,byte ptr [0x01c00630]        ; 004b63a1 | DAT_01c00630
    SHL ESI,CL                          ; 004b63a7
    MOV CL,byte ptr [0x01c0063c]        ; 004b63a9 | DAT_01c0063c
    SHL EBX,CL                          ; 004b63af
    OR EDI,ESI                          ; 004b63b1
    MOV ECX,EBX                         ; 004b63b3
    OR ECX,EDI                          ; 004b63b5
    ADD EDX,0x4                         ; 004b63b7
        ;   Label: LAB_004b63b7
    ADD EAX,0x3                         ; 004b63ba
    MOV dword ptr [EDX + 0x1bff91c],ECX ; 004b63bd
    CMP EDX,0x400                       ; 004b63c3
    JNZ 0x004b637e                      ; 004b63c9
        ;   XREF to: 004b637e (CONDITIONAL_JUMP)  ; LAB_004b637e
    MOV dword ptr [0x005b7624],EBP      ; 004b63cb | DAT_005b7624
    POP EBP                             ; 004b63d1
    POP EDI                             ; 004b63d2
    POP ESI                             ; 004b63d3
    POP EBX                             ; 004b63d4
    LEA EAX,[EAX]                       ; 004b63d5
    LEA EDX,[EDX]                       ; 004b63db
    MOV EBX,EBX                         ; 004b63de
    RET                                 ; 004b63e0
    MOV ECX,EDI                         ; 004b63e1
        ;   Label: LAB_004b63e1
    SHL ESI,0x8                         ; 004b63e3
    SHL ECX,0x10                        ; 004b63e6
    OR ECX,ESI                          ; 004b63e9
    OR ECX,EBX                          ; 004b63eb
    JMP 0x004b63b7                      ; 004b63ed
        ;   XREF to: 004b63b7 (UNCONDITIONAL_JUMP)  ; LAB_004b63b7

