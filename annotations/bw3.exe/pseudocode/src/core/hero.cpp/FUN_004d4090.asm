; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004d4090(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4e7d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4090
        ;   Label: core_hero.cpp_FUN_004d4090
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4091
    PUSH EBX                            ; 004d4095
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4096
    CALL dword ptr [EAX + 0x10c]        ; 004d409c
    ADD ESP,0x4                         ; 004d40a2
    CMP EAX,0x1                         ; 004d40a5
    JG 0x004d414e                       ; 004d40a8
        ;   XREF to: 004d414e (CONDITIONAL_JUMP)  ; LAB_004d414e
    JZ 0x004d4150                       ; 004d40ae
        ;   XREF to: 004d4150 (CONDITIONAL_JUMP)  ; LAB_004d4150
    CMP dword ptr [EBX + 0xcdd4],0x0    ; 004d40b4
    JNZ 0x004d4152                      ; 004d40bb
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcdd8],0x0    ; 004d40c1
    JNZ 0x004d4152                      ; 004d40c8
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcde0],0x0    ; 004d40ce
    JNZ 0x004d4152                      ; 004d40d5
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcde8],0x0    ; 004d40db
    JNZ 0x004d4152                      ; 004d40e2
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcdec],0x0    ; 004d40e8
    JNZ 0x004d4152                      ; 004d40ef
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcdf0],0x0    ; 004d40f1
    JNZ 0x004d4152                      ; 004d40f8
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcdf4],0x0    ; 004d40fa
    JNZ 0x004d4152                      ; 004d4101
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0xcdf8],0x0    ; 004d4103
    JNZ 0x004d4152                      ; 004d410a
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    FLD float ptr [EBX + 0xcdfc]        ; 004d410c
    FABS                                ; 004d4112
    FCOMP double ptr [0x005c4e7d]       ; 004d4114 | DAT_005c4e7d
    FNSTSW AX                           ; 004d411a
    SAHF                                ; 004d411c
    JA 0x004d4152                       ; 004d411d
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    FLD float ptr [EBX + 0xce00]        ; 004d411f
    FABS                                ; 004d4125
    FCOMP double ptr [0x005c4e7d]       ; 004d4127 | DAT_005c4e7d
    FNSTSW AX                           ; 004d412d
    SAHF                                ; 004d412f
    JA 0x004d4152                       ; 004d4130
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    FLD float ptr [EBX + 0xce04]        ; 004d4132
    FABS                                ; 004d4138
    FCOMP double ptr [0x005c4e7d]       ; 004d413a | DAT_005c4e7d
    FNSTSW AX                           ; 004d4140
    SAHF                                ; 004d4142
    JA 0x004d4152                       ; 004d4143
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    CMP dword ptr [EBX + 0x2500],0x0    ; 004d4145
    JZ 0x004d4152                       ; 004d414c
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    XOR EAX,EAX                         ; 004d414e
        ;   Label: LAB_004d414e
    POP EBX                             ; 004d4150
        ;   Label: LAB_004d4150
    RET                                 ; 004d4151
    MOV EAX,0x1                         ; 004d4152
        ;   Label: LAB_004d4152
    POP EBX                             ; 004d4157
    RET                                 ; 004d4158

