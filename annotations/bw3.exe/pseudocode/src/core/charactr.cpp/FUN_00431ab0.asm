; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00431ab0(int param_1,int param_2,float param_3,int *param_4)
;
; Local Variables:
; undefined8       Stack[-0x168]:8  local_168
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   core_charactr.cpp_FUN_0042cd70 at 0042d2f5
;   core_charactr.cpp_FUN_004319d0 at 00431a95
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005b857b
;   TerminatedCString s_CCharacter_computePickup_005b8590
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_xform.cpp_FUN_00583800
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00584560
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431ab0
        ;   Label: core_charactr.cpp_FUN_00431ab0
    PUSH ESI                            ; 00431ab1
    PUSH EDI                            ; 00431ab2
    PUSH EBP                            ; 00431ab3
    MOV EBP,ESP                         ; 00431ab4
    SUB ESP,0x158                       ; 00431ab6
    AND ESP,0xfffffff8                  ; 00431abc
    MOV ESI,dword ptr [EBP + 0x18]      ; 00431abf
    LEA EBX,[ESI*0x8 + 0x0]             ; 00431ac2
    MOV EAX,EBX                         ; 00431ac9
    SHL EBX,0x4                         ; 00431acb
    SUB EBX,EAX                         ; 00431ace
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431ad0
    ADD EAX,0x25a8                      ; 00431ad3
    ADD EBX,EAX                         ; 00431ad8
    CMP dword ptr [EBX],0x0             ; 00431ada
    JL 0x00431bdc                       ; 00431add
        ;   XREF to: 00431bdc (CONDITIONAL_JUMP)  ; LAB_00431bdc
    MOV EAX,dword ptr [EBX + 0x8]       ; 00431ae3
        ;   Label: LAB_00431ae3
    LEA ESI,[EAX + 0x30]                ; 00431ae6
    PUSH ESI                            ; 00431ae9
    ADD EAX,0x20                        ; 00431aea
    PUSH EAX                            ; 00431aed
    LEA EAX,[ESP + 0xa0]                ; 00431aee
    PUSH EAX                            ; 00431af5
    CALL core_xform.cpp_FUN_00583800    ; 00431af6
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00431afb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431afe
    ADD EAX,0x30                        ; 00431b01
    PUSH EAX                            ; 00431b04
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431b05
    ADD EAX,0x20                        ; 00431b08
    PUSH EAX                            ; 00431b0b
    LEA EAX,[ESP + 0xd0]                ; 00431b0c
    PUSH EAX                            ; 00431b13
    CALL core_xform.cpp_FUN_00583940    ; 00431b14
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 00431b19
    LEA EAX,[ESP + 0x98]                ; 00431b1c
    PUSH EAX                            ; 00431b23
    LEA EAX,[ESP + 0xcc]                ; 00431b24
    PUSH EAX                            ; 00431b2b
    LEA ESI,[ESP + 0x70]                ; 00431b2c
    LEA EDI,[ESP + 0x40]                ; 00431b30
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00431b34
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00431b39
    LEA ESI,[ESP + 0x70]                ; 00431b3e
    ADD ESP,0x8                         ; 00431b42
    MOVSD.REP ES:EDI,ESI                ; 00431b45
    LEA EAX,[ESP + 0x38]                ; 00431b47
    MOV ESI,dword ptr [EBX]             ; 00431b4b
    PUSH EAX                            ; 00431b4d
    LEA EAX,[ESI*0x4 + 0x0]             ; 00431b4e
    SUB EAX,ESI                         ; 00431b55
    MOV ESI,dword ptr [EBP + 0x14]      ; 00431b57
    SHL EAX,0x4                         ; 00431b5a
    ADD ESI,0xfd8                       ; 00431b5d
    ADD EAX,ESI                         ; 00431b63
    PUSH EAX                            ; 00431b65
    LEA ESI,[ESP + 0x100]               ; 00431b66
    LEA EDI,[ESP + 0x10]                ; 00431b6d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00431b71
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00431b76
    LEA ESI,[ESP + 0x100]               ; 00431b7b
    ADD ESP,0x8                         ; 00431b82
    LEA EAX,[ESP + 0x8]                 ; 00431b85
    MOVSD.REP ES:EDI,ESI                ; 00431b89
    PUSH EAX                            ; 00431b8b
    LEA ESI,[ESP + 0x12c]               ; 00431b8c
    CALL core_xform.cpp_FUN_00584560    ; 00431b93
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584560()
    FLDZ                                ; 00431b98
    MOV ECX,0xc                         ; 00431b9a
    LEA ESI,[ESP + 0x12c]               ; 00431b9f
    ADD ESP,0x4                         ; 00431ba6
    LEA EDI,[EBX + 0xc]                 ; 00431ba9
    FLD float ptr [EBP + 0x1c]          ; 00431bac
    FSTP double ptr [ESP]               ; 00431baf
    MOVSD.REP ES:EDI,ESI                ; 00431bb2
    FCOMP double ptr [ESP]              ; 00431bb4
    FNSTSW AX                           ; 00431bb7
    SAHF                                ; 00431bb9
    JNC 0x00431c09                      ; 00431bba
        ;   XREF to: 00431c09 (CONDITIONAL_JUMP)  ; LAB_00431c09
    FLD1                                ; 00431bbc
    FDIV double ptr [ESP]               ; 00431bbe
    MOV dword ptr [EBX + 0x40],0x0      ; 00431bc1
    FSTP float ptr [EBX + 0x3c]         ; 00431bc8
    MOV EDX,dword ptr [EBP + 0x20]      ; 00431bcb
        ;   Label: LAB_00431bcb
    TEST EDX,EDX                        ; 00431bce
    JNZ 0x00431c19                      ; 00431bd0
        ;   XREF to: 00431c19 (CONDITIONAL_JUMP)  ; LAB_00431c19
    MOV dword ptr [EBX + 0x44],EDX      ; 00431bd2
    MOV ESP,EBP                         ; 00431bd5
    POP EBP                             ; 00431bd7
    POP EDI                             ; 00431bd8
    POP ESI                             ; 00431bd9
    POP EBX                             ; 00431bda
    RET                                 ; 00431bdb
    PUSH ESI                            ; 00431bdc
        ;   Label: LAB_00431bdc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431bdd
    PUSH EAX                            ; 00431be0
    MOV ECX,0x5b857b                    ; 00431be1 | = "..\\core\\charactr.cpp"
    MOV EDI,0xf21                       ; 00431be6
    PUSH 0x5b8590                       ; 00431beb | = "CCharacter::computePickup - invalid h..."
    MOV dword ptr [0x01d71de0],ECX      ; 00431bf0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00431bf6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00431bfc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00431c01
    JMP 0x00431ae3                      ; 00431c04
        ;   XREF to: 00431ae3 (UNCONDITIONAL_JUMP)  ; LAB_00431ae3
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 00431c09
        ;   Label: LAB_00431c09
    MOV dword ptr [EBX + 0x3c],0x0      ; 00431c10
    JMP 0x00431bcb                      ; 00431c17
        ;   XREF to: 00431bcb (UNCONDITIONAL_JUMP)  ; LAB_00431bcb
    MOV ECX,0xc                         ; 00431c19
        ;   Label: LAB_00431c19
    MOV ESI,EDX                         ; 00431c1e
    LEA EDI,[EBX + 0x48]                ; 00431c20
    MOV dword ptr [EBX + 0x44],0x1      ; 00431c23
    MOVSD.REP ES:EDI,ESI                ; 00431c2a
    MOV ESP,EBP                         ; 00431c2c
    POP EBP                             ; 00431c2e
    POP EDI                             ; 00431c2f
    POP ESI                             ; 00431c30
    POP EBX                             ; 00431c31
    RET                                 ; 00431c32

