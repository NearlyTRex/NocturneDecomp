; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_removeVerticesByFlag_FUN_005d3280(CObj * this_ptr, uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3280
        ;   Label: shape_superopt.cpp_CObj_removeVerticesByFlag_FUN_005d3280
    PUSH ESI                            ; 005d3281
    PUSH EDI                            ; 005d3282
    MOV ESI,dword ptr [ESP + 0x10]      ; 005d3283
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d3287
    MOV EDX,dword ptr [ESI]             ; 005d328b
    XOR EBX,EBX                         ; 005d328d
    TEST EDX,EDX                        ; 005d328f
    JBE 0x005d32a8                      ; 005d3291 | LAB_005d32a8
        ;   XREF to: 005d32a8 (CONDITIONAL_JUMP)
    IMUL EDX,EBX,0x38                   ; 005d3293
        ;   Label: LAB_005d3293
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d3296
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x34] ; 005d3299
    AND EAX,EDI                         ; 005d329d
    CMP EAX,EDI                         ; 005d329f
    JZ 0x005d32b9                       ; 005d32a1 | LAB_005d32b9
        ;   XREF to: 005d32b9 (CONDITIONAL_JUMP)
    INC EBX                             ; 005d32a3
        ;   Label: LAB_005d32a3
    CMP EBX,dword ptr [ESI]             ; 005d32a4
    JC 0x005d3293                       ; 005d32a6 | LAB_005d3293
        ;   XREF to: 005d3293 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005d32a8
        ;   Label: LAB_005d32a8
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d32a9
    CALL dword ptr [EAX + 0xcc]         ; 005d32ac
    ADD ESP,0x4                         ; 005d32b2
    POP EDI                             ; 005d32b5
        ;   Label: LAB_005d32b5
    POP ESI                             ; 005d32b6
    POP EBX                             ; 005d32b7
    RET                                 ; 005d32b8
    PUSH EBX                            ; 005d32b9
        ;   Label: LAB_005d32b9
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d32ba
    PUSH ESI                            ; 005d32bd
    CALL dword ptr [EAX + 0x48]         ; 005d32be
    ADD ESP,0x8                         ; 005d32c1
    TEST EAX,EAX                        ; 005d32c4
    JZ 0x005d32b5                       ; 005d32c6 | LAB_005d32b5
        ;   XREF to: 005d32b5 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005d32c8
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d32c9
    PUSH ESI                            ; 005d32cc
    CALL dword ptr [EAX + 0x54]         ; 005d32cd
    ADD ESP,0x8                         ; 005d32d0
    TEST EAX,EAX                        ; 005d32d3
    JZ 0x005d32b5                       ; 005d32d5 | LAB_005d32b5
        ;   XREF to: 005d32b5 (CONDITIONAL_JUMP)
    DEC EBX                             ; 005d32d7
    JMP 0x005d32a3                      ; 005d32d8 | LAB_005d32a3
        ;   XREF to: 005d32a3 (UNCONDITIONAL_JUMP)

