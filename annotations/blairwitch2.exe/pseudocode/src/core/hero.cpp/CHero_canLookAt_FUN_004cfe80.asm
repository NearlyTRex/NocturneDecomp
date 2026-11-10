; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004cfe80(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d9d7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfe80
        ;   Label: core_hero.cpp_CHero_canLookAt_FUN_004cfe80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cfe81
    PUSH EBX                            ; 004cfe85
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cfe86
    CALL dword ptr [EAX + 0x114]        ; 004cfe8c
    ADD ESP,0x4                         ; 004cfe92
    CMP EAX,0x1                         ; 004cfe95
    JG 0x004cff3e                       ; 004cfe98
        ;   XREF to: 004cff3e (CONDITIONAL_JUMP)  ; LAB_004cff3e
    JZ 0x004cff40                       ; 004cfe9e
        ;   XREF to: 004cff40 (CONDITIONAL_JUMP)  ; LAB_004cff40
    CMP dword ptr [EBX + 0x10a68],0x0   ; 004cfea4
    JNZ 0x004cff42                      ; 004cfeab
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 004cfeb1
    JNZ 0x004cff42                      ; 004cfeb8
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004cfebe
    JNZ 0x004cff42                      ; 004cfec5
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a78],0x0   ; 004cfecb
    JNZ 0x004cff42                      ; 004cfed2
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a7c],0x0   ; 004cfed8
    JNZ 0x004cff42                      ; 004cfedf
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a80],0x0   ; 004cfee1
    JNZ 0x004cff42                      ; 004cfee8
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a84],0x0   ; 004cfeea
    JNZ 0x004cff42                      ; 004cfef1
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x10a88],0x0   ; 004cfef3
    JNZ 0x004cff42                      ; 004cfefa
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    FLD float ptr [EBX + 0x10a8c]       ; 004cfefc
    FABS                                ; 004cff02
    FCOMP double ptr [0x005d9d7c]       ; 004cff04 | DAT_005d9d7c
    FNSTSW AX                           ; 004cff0a
    SAHF                                ; 004cff0c
    JA 0x004cff42                       ; 004cff0d
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    FLD float ptr [EBX + 0x10a90]       ; 004cff0f
    FABS                                ; 004cff15
    FCOMP double ptr [0x005d9d7c]       ; 004cff17 | DAT_005d9d7c
    FNSTSW AX                           ; 004cff1d
    SAHF                                ; 004cff1f
    JA 0x004cff42                       ; 004cff20
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    FLD float ptr [EBX + 0x10a94]       ; 004cff22
    FABS                                ; 004cff28
    FCOMP double ptr [0x005d9d7c]       ; 004cff2a | DAT_005d9d7c
    FNSTSW AX                           ; 004cff30
    SAHF                                ; 004cff32
    JA 0x004cff42                       ; 004cff33
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    CMP dword ptr [EBX + 0x2570],0x0    ; 004cff35
    JZ 0x004cff42                       ; 004cff3c
        ;   XREF to: 004cff42 (CONDITIONAL_JUMP)  ; LAB_004cff42
    XOR EAX,EAX                         ; 004cff3e
        ;   Label: LAB_004cff3e
    POP EBX                             ; 004cff40
        ;   Label: LAB_004cff40
    RET                                 ; 004cff41
    MOV EAX,0x1                         ; 004cff42
        ;   Label: LAB_004cff42
    POP EBX                             ; 004cff47
    RET                                 ; 004cff48

