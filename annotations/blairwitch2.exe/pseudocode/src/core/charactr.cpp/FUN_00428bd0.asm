; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00428bd0(int param_1,int param_2,float param_3,int *param_4)
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
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 at 00424695
;   core_charactr.cpp_FUN_00428b10 at 00428bc1
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005ccfa7
;   TerminatedCString s_CCharacter_computePickup_005ccfbc
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_inverse_FUN_00592830
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428bd0
        ;   Label: core_charactr.cpp_FUN_00428bd0
    PUSH ESI                            ; 00428bd1
    PUSH EDI                            ; 00428bd2
    PUSH EBP                            ; 00428bd3
    MOV EBP,ESP                         ; 00428bd4
    SUB ESP,0x158                       ; 00428bd6
    AND ESP,0xfffffff8                  ; 00428bdc
    MOV ESI,dword ptr [EBP + 0x18]      ; 00428bdf
    LEA EBX,[ESI*0x8 + 0x0]             ; 00428be2
    MOV EAX,EBX                         ; 00428be9
    SHL EBX,0x4                         ; 00428beb
    SUB EBX,EAX                         ; 00428bee
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428bf0
    ADD EAX,0x2618                      ; 00428bf3
    ADD EBX,EAX                         ; 00428bf8
    CMP dword ptr [EBX],0x0             ; 00428bfa
    JL 0x00428cfc                       ; 00428bfd
        ;   XREF to: 00428cfc (CONDITIONAL_JUMP)  ; LAB_00428cfc
    MOV EAX,dword ptr [EBX + 0x8]       ; 00428c03
        ;   Label: LAB_00428c03
    LEA ESI,[EAX + 0x30]                ; 00428c06
    PUSH ESI                            ; 00428c09
    ADD EAX,0x20                        ; 00428c0a
    PUSH EAX                            ; 00428c0d
    LEA EAX,[ESP + 0xa0]                ; 00428c0e
    PUSH EAX                            ; 00428c15
    CALL core_xform.cpp_FUN_00591ad0    ; 00428c16
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00428c1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428c1e
    ADD EAX,0x30                        ; 00428c21
    PUSH EAX                            ; 00428c24
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428c25
    ADD EAX,0x20                        ; 00428c28
    PUSH EAX                            ; 00428c2b
    LEA EAX,[ESP + 0xd0]                ; 00428c2c
    PUSH EAX                            ; 00428c33
    CALL core_xform.cpp_FUN_00591c10    ; 00428c34
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00428c39
    LEA EAX,[ESP + 0x98]                ; 00428c3c
    PUSH EAX                            ; 00428c43
    LEA EAX,[ESP + 0xcc]                ; 00428c44
    PUSH EAX                            ; 00428c4b
    LEA ESI,[ESP + 0x70]                ; 00428c4c
    LEA EDI,[ESP + 0x40]                ; 00428c50
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00428c54
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00428c59
    LEA ESI,[ESP + 0x70]                ; 00428c5e
    ADD ESP,0x8                         ; 00428c62
    MOVSD.REP ES:EDI,ESI                ; 00428c65
    LEA EAX,[ESP + 0x38]                ; 00428c67
    MOV ESI,dword ptr [EBX]             ; 00428c6b
    PUSH EAX                            ; 00428c6d
    LEA EAX,[ESI*0x4 + 0x0]             ; 00428c6e
    SUB EAX,ESI                         ; 00428c75
    MOV ESI,dword ptr [EBP + 0x14]      ; 00428c77
    SHL EAX,0x4                         ; 00428c7a
    ADD ESI,0x1134                      ; 00428c7d
    ADD EAX,ESI                         ; 00428c83
    PUSH EAX                            ; 00428c85
    LEA ESI,[ESP + 0x100]               ; 00428c86
    LEA EDI,[ESP + 0x10]                ; 00428c8d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00428c91
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00428c96
    LEA ESI,[ESP + 0x100]               ; 00428c9b
    ADD ESP,0x8                         ; 00428ca2
    LEA EAX,[ESP + 0x8]                 ; 00428ca5
    MOVSD.REP ES:EDI,ESI                ; 00428ca9
    PUSH EAX                            ; 00428cab
    LEA ESI,[ESP + 0x12c]               ; 00428cac
    CALL core_xform.cpp_inverse_FUN_00592830 ; 00428cb3
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_00592830()
    FLDZ                                ; 00428cb8
    MOV ECX,0xc                         ; 00428cba
    LEA ESI,[ESP + 0x12c]               ; 00428cbf
    ADD ESP,0x4                         ; 00428cc6
    LEA EDI,[EBX + 0xc]                 ; 00428cc9
    FLD float ptr [EBP + 0x1c]          ; 00428ccc
    FSTP double ptr [ESP]               ; 00428ccf
    MOVSD.REP ES:EDI,ESI                ; 00428cd2
    FCOMP double ptr [ESP]              ; 00428cd4
    FNSTSW AX                           ; 00428cd7
    SAHF                                ; 00428cd9
    JNC 0x00428d29                      ; 00428cda
        ;   XREF to: 00428d29 (CONDITIONAL_JUMP)  ; LAB_00428d29
    FLD1                                ; 00428cdc
    FDIV double ptr [ESP]               ; 00428cde
    MOV dword ptr [EBX + 0x40],0x0      ; 00428ce1
    FSTP float ptr [EBX + 0x3c]         ; 00428ce8
    MOV EDX,dword ptr [EBP + 0x20]      ; 00428ceb
        ;   Label: LAB_00428ceb
    TEST EDX,EDX                        ; 00428cee
    JNZ 0x00428d39                      ; 00428cf0
        ;   XREF to: 00428d39 (CONDITIONAL_JUMP)  ; LAB_00428d39
    MOV dword ptr [EBX + 0x44],EDX      ; 00428cf2
    MOV ESP,EBP                         ; 00428cf5
    POP EBP                             ; 00428cf7
    POP EDI                             ; 00428cf8
    POP ESI                             ; 00428cf9
    POP EBX                             ; 00428cfa
    RET                                 ; 00428cfb
    PUSH ESI                            ; 00428cfc
        ;   Label: LAB_00428cfc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00428cfd
    PUSH EAX                            ; 00428d00
    MOV ECX,0x5ccfa7                    ; 00428d01 | = "..\\core\\charactr.cpp"
    MOV EDI,0xe32                       ; 00428d06
    PUSH 0x5ccfbc                       ; 00428d0b | = "CCharacter::computePickup - invalid h..."
    MOV dword ptr [0x01d046a0],ECX      ; 00428d10 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00428d16 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00428d1c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00428d21
    JMP 0x00428c03                      ; 00428d24
        ;   XREF to: 00428c03 (UNCONDITIONAL_JUMP)  ; LAB_00428c03
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 00428d29
        ;   Label: LAB_00428d29
    MOV dword ptr [EBX + 0x3c],0x0      ; 00428d30
    JMP 0x00428ceb                      ; 00428d37
        ;   XREF to: 00428ceb (UNCONDITIONAL_JUMP)  ; LAB_00428ceb
    MOV ECX,0xc                         ; 00428d39
        ;   Label: LAB_00428d39
    MOV ESI,EDX                         ; 00428d3e
    LEA EDI,[EBX + 0x48]                ; 00428d40
    MOV dword ptr [EBX + 0x44],0x1      ; 00428d43
    MOVSD.REP ES:EDI,ESI                ; 00428d4a
    MOV ESP,EBP                         ; 00428d4c
    POP EBP                             ; 00428d4e
    POP EDI                             ; 00428d4f
    POP ESI                             ; 00428d50
    POP EBX                             ; 00428d51
    RET                                 ; 00428d52

