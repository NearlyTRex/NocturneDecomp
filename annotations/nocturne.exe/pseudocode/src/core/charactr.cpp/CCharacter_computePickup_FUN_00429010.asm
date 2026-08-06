; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00429010(CCharacter *this_ptr,int hand_index,float blend_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; float            Stack[0xc]:4   blend_time
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
;   core_charactr.cpp_CCharacter_FUN_004259f0 at 00425bd3
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 at 00428ffc
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0057a1d1
;   TerminatedCString s_CCharacter_computePickup_0057a1e6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_inverse_FUN_0055bd00
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429010
        ;   Label: core_charactr.cpp_CCharacter_computePickup_FUN_00429010
    PUSH ESI                            ; 00429011
    PUSH EDI                            ; 00429012
    PUSH EBP                            ; 00429013
    MOV EBP,ESP                         ; 00429014
    SUB ESP,0x158                       ; 00429016
    AND ESP,0xfffffff8                  ; 0042901c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042901f
    MOV EAX,EBX                         ; 00429022
    SHL EAX,0x4                         ; 00429024
    ADD EAX,EBX                         ; 00429027
    MOV EBX,dword ptr [EBP + 0x14]      ; 00429029
    SHL EAX,0x2                         ; 0042902c
    ADD EBX,0x24a4                      ; 0042902f
    ADD EBX,EAX                         ; 00429035
    CMP dword ptr [EBX],0x0             ; 00429037
    JL 0x0042912f                       ; 0042903a
        ;   XREF to: 0042912f (CONDITIONAL_JUMP)  ; LAB_0042912f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00429040
        ;   Label: LAB_00429040
    LEA ESI,[EAX + 0x30]                ; 00429043
    PUSH ESI                            ; 00429046
    ADD EAX,0x20                        ; 00429047
    PUSH EAX                            ; 0042904a
    LEA EAX,[ESP + 0x70]                ; 0042904b
    PUSH EAX                            ; 0042904f
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 00429050
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00429055
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429058
    ADD EAX,0x30                        ; 0042905b
    PUSH EAX                            ; 0042905e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042905f
    ADD EAX,0x20                        ; 00429062
    PUSH EAX                            ; 00429065
    LEA EAX,[ESP + 0xa0]                ; 00429066
    PUSH EAX                            ; 0042906d
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0042906e
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00429073
    LEA EAX,[ESP + 0x68]                ; 00429076
    PUSH EAX                            ; 0042907a
    LEA EAX,[ESP + 0x9c]                ; 0042907b
    PUSH EAX                            ; 00429082
    LEA ESI,[ESP + 0x40]                ; 00429083
    LEA EDI,[ESP + 0xd0]                ; 00429087
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0042908e
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00429093
    LEA ESI,[ESP + 0x40]                ; 00429098
    ADD ESP,0x8                         ; 0042909c
    MOVSD.REP ES:EDI,ESI                ; 0042909f
    LEA EAX,[ESP + 0xc8]                ; 004290a1
    MOV ESI,dword ptr [EBX]             ; 004290a8
    PUSH EAX                            ; 004290aa
    LEA EAX,[ESI*0x4 + 0x0]             ; 004290ab
    SUB EAX,ESI                         ; 004290b2
    MOV ESI,dword ptr [EBP + 0x14]      ; 004290b4
    SHL EAX,0x4                         ; 004290b7
    ADD ESI,0xfd0                       ; 004290ba
    ADD EAX,ESI                         ; 004290c0
    PUSH EAX                            ; 004290c2
    LEA ESI,[ESP + 0x130]               ; 004290c3
    LEA EDI,[ESP + 0x100]               ; 004290ca
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004290d1
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004290d6
    LEA ESI,[ESP + 0x130]               ; 004290db
    ADD ESP,0x8                         ; 004290e2
    LEA EAX,[ESP + 0xf8]                ; 004290e5
    MOVSD.REP ES:EDI,ESI                ; 004290ec
    PUSH EAX                            ; 004290ee
    LEA ESI,[ESP + 0xc]                 ; 004290ef
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 004290f3
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_0055bd00(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    FLDZ                                ; 004290f8
    MOV ECX,0xc                         ; 004290fa
    LEA ESI,[ESP + 0xc]                 ; 004290ff
    ADD ESP,0x4                         ; 00429103
    LEA EDI,[EBX + 0xc]                 ; 00429106
    FLD float ptr [EBP + 0x1c]          ; 00429109
    FSTP double ptr [ESP]               ; 0042910c
    MOVSD.REP ES:EDI,ESI                ; 0042910f
    FCOMP double ptr [ESP]              ; 00429111
    FNSTSW AX                           ; 00429114
    SAHF                                ; 00429116
    JNC 0x00429157                      ; 00429117
        ;   XREF to: 00429157 (CONDITIONAL_JUMP)  ; LAB_00429157
    FLD1                                ; 00429119
    FDIV double ptr [ESP]               ; 0042911b
    MOV dword ptr [EBX + 0x40],0x0      ; 0042911e
    FSTP float ptr [EBX + 0x3c]         ; 00429125
    MOV ESP,EBP                         ; 00429128
    POP EBP                             ; 0042912a
    POP EDI                             ; 0042912b
    POP ESI                             ; 0042912c
    POP EBX                             ; 0042912d
    RET                                 ; 0042912e
    MOV ECX,0x57a1d1                    ; 0042912f | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042912f
    MOV ESI,0xc14                       ; 00429134
    PUSH 0x57a1e6                       ; 00429139 | = "CCharacter::computePickup - invalid b..."
    MOV dword ptr [0x01cc4800],ECX      ; 0042913e | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00429144 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0042914a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0042914f
    JMP 0x00429040                      ; 00429152
        ;   XREF to: 00429040 (UNCONDITIONAL_JUMP)  ; LAB_00429040
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 00429157
        ;   Label: LAB_00429157
    MOV dword ptr [EBX + 0x3c],0x0      ; 0042915e
    MOV ESP,EBP                         ; 00429165
    POP EBP                             ; 00429167
    POP EDI                             ; 00429168
    POP ESI                             ; 00429169
    POP EBX                             ; 0042916a
    RET                                 ; 0042916b

