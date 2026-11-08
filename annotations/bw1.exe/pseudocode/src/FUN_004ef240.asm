; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ef240(int param_1)
;
;
; Called Functions:
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef240
        ;   Label: FUN_004ef240
    CMP dword ptr [EAX + 0x1fe68],0x0   ; 004ef244
    JZ 0x004ef25d                       ; 004ef24b
        ;   XREF to: 004ef25d (CONDITIONAL_JUMP)  ; LAB_004ef25d
    MOV ECX,dword ptr [EAX + 0x1fe6c]   ; 004ef24d
    CMP ECX,0x3                         ; 004ef253
    JZ 0x004ef25d                       ; 004ef256
        ;   XREF to: 004ef25d (CONDITIONAL_JUMP)  ; LAB_004ef25d
    CMP ECX,0x4                         ; 004ef258
    JNZ 0x004ef260                      ; 004ef25b
        ;   XREF to: 004ef260 (CONDITIONAL_JUMP)  ; LAB_004ef260
    XOR EAX,EAX                         ; 004ef25d
        ;   Label: LAB_004ef25d
    RET                                 ; 004ef25f
    ADD EAX,0x158                       ; 004ef260
        ;   Label: LAB_004ef260
    PUSH EAX                            ; 004ef265
    CALL FUN_00524770                   ; 004ef266
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ef26b
    ADD ESP,0x4                         ; 004ef26e
    CMP EAX,0xa                         ; 004ef271
    JZ 0x004ef25d                       ; 004ef274
        ;   XREF to: 004ef25d (CONDITIONAL_JUMP)  ; LAB_004ef25d
    LEA EAX,[EAX]                       ; 004ef276
    LEA EDX,[EDX]                       ; 004ef27c
    MOV EAX,0x1                         ; 004ef280
        ;   Label: LAB_004ef280
    RET                                 ; 004ef285

