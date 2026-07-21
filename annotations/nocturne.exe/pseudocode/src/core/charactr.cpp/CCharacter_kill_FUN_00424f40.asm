; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00424f40(int param_1,undefined4 param_2,undefined4 *param_3,float param_4)
;
;
; XREF[1]:
;   core_hero.cpp_CHero_kill_FUN_004b5e90 at 004b5ead
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424f40
        ;   Label: core_charactr.cpp_CCharacter_kill_FUN_00424f40
    PUSH ESI                            ; 00424f41
    SUB ESP,0x3c                        ; 00424f42
    MOV EBX,dword ptr [ESP + 0x48]      ; 00424f45
    MOV ESI,dword ptr [ESP + 0x50]      ; 00424f49
    PUSH EBX                            ; 00424f4d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00424f4e
    CALL dword ptr [EAX + 0x104]        ; 00424f54
    ADD ESP,0x4                         ; 00424f5a
    TEST EAX,EAX                        ; 00424f5d
    JLE 0x00424f67                      ; 00424f5f
        ;   XREF to: 00424f67 (CONDITIONAL_JUMP)  ; LAB_00424f67
    ADD ESP,0x3c                        ; 00424f61
    POP ESI                             ; 00424f64
    POP EBX                             ; 00424f65
    RET                                 ; 00424f66
    MOV EDX,dword ptr [EBX + 0xb63c]    ; 00424f67
        ;   Label: LAB_00424f67
    PUSH EDX                            ; 00424f6d
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00424f6e
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00424f73
    MOV EAX,ESP                         ; 00424f76
    PUSH EAX                            ; 00424f78
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00424f79
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00424f7e
    MOV ECX,0x461c3c00                  ; 00424f81
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00424f86
    MOV dword ptr [ESP + 0x4],ECX       ; 00424f8a
    MOV dword ptr [ESP + 0x30],EAX      ; 00424f8e
    TEST ESI,ESI                        ; 00424f92
    JZ 0x00424fb2                       ; 00424f94
        ;   XREF to: 00424fb2 (CONDITIONAL_JUMP)  ; LAB_00424fb2
    LEA EAX,[ESP + 0xc]                 ; 00424f96
    CMP EAX,ESI                         ; 00424f9a
    JZ 0x00424fb2                       ; 00424f9c
        ;   XREF to: 00424fb2 (CONDITIONAL_JUMP)  ; LAB_00424fb2
    MOV EAX,dword ptr [ESI]             ; 00424f9e
    MOV dword ptr [ESP + 0xc],EAX       ; 00424fa0
    MOV EAX,dword ptr [ESI + 0x4]       ; 00424fa4
    MOV dword ptr [ESP + 0x10],EAX      ; 00424fa7
    MOV EAX,dword ptr [ESI + 0x8]       ; 00424fab
    MOV dword ptr [ESP + 0x14],EAX      ; 00424fae
    FLD float ptr [ESP + 0x54]          ; 00424fb2
        ;   Label: LAB_00424fb2
    FLDZ                                ; 00424fb6
    FCOMPP                              ; 00424fb8
    FNSTSW AX                           ; 00424fba
    SAHF                                ; 00424fbc
    JA 0x00424fc7                       ; 00424fbd
        ;   XREF to: 00424fc7 (CONDITIONAL_JUMP)  ; LAB_00424fc7
    MOV EAX,dword ptr [ESP + 0x54]      ; 00424fbf
    MOV dword ptr [ESP + 0x18],EAX      ; 00424fc3
    MOV ESI,ESP                         ; 00424fc7
        ;   Label: LAB_00424fc7
    PUSH ESI                            ; 00424fc9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00424fca
    PUSH EBX                            ; 00424fd0
    CALL dword ptr [EAX + 0x100]        ; 00424fd1
    ADD ESP,0x8                         ; 00424fd7
    PUSH EBX                            ; 00424fda
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0 ; 00424fdb
        ;   XREF to: 004291f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0()
    ADD ESP,0x4                         ; 00424fe0
    ADD ESP,0x3c                        ; 00424fe3
    POP ESI                             ; 00424fe6
    POP EBX                             ; 00424fe7
    RET                                 ; 00424fe8

