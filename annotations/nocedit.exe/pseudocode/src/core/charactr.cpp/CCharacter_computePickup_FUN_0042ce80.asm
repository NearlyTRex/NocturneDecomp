; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr,int hand_index,float blend_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; float            Stack[0xc]:4   blend_time
; Local Variables:
; undefined8       Stack[-0x168]:8  local_168
; CMatrix3x4f      Stack[-0x160]:48  local_160
; CMatrix3x4f      Stack[-0x130]:48  local_130
; CMatrix3x4f      Stack[-0x100]:48  local_100
; CMatrix3x4f      Stack[-0xd0]:48  local_d0
; CMatrix3x4f      Stack[-0xa0]:48  local_a0
; CMatrix3x4f      Stack[-0x70]:48  local_70
; CMatrix3x4f      Stack[-0x40]:48  local_40
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 at 0042ce6c
;   core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800 at 0042f88a
;   core_charactr.cpp_CCharacter_process_FUN_00429870 at 00429a53
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_00617329
;   TerminatedCString s_CCharacter_computePickup_0061733e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ce80
        ;   Label: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
    PUSH ESI                            ; 0042ce81
    PUSH EDI                            ; 0042ce82
    PUSH EBP                            ; 0042ce83
    MOV EBP,ESP                         ; 0042ce84
    SUB ESP,0x158                       ; 0042ce86
    AND ESP,0xfffffff8                  ; 0042ce8c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042ce8f
    MOV EAX,EBX                         ; 0042ce92
    SHL EAX,0x4                         ; 0042ce94
    ADD EAX,EBX                         ; 0042ce97
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ce99
    SHL EAX,0x2                         ; 0042ce9c
    ADD EBX,0x24ac                      ; 0042ce9f
    ADD EBX,EAX                         ; 0042cea5
    CMP dword ptr [EBX],0x0             ; 0042cea7
    JL 0x0042cf9f                       ; 0042ceaa
        ;   XREF to: 0042cf9f (CONDITIONAL_JUMP)  ; LAB_0042cf9f
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042ceb0
        ;   Label: LAB_0042ceb0
    LEA ESI,[EAX + 0x30]                ; 0042ceb3
    PUSH ESI                            ; 0042ceb6
    ADD EAX,0x20                        ; 0042ceb7
    PUSH EAX                            ; 0042ceba
    LEA EAX,[ESP + 0x70]                ; 0042cebb
    PUSH EAX                            ; 0042cebf
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0042cec0
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042cec5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042cec8
    ADD EAX,0x30                        ; 0042cecb
    PUSH EAX                            ; 0042cece
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042cecf
    ADD EAX,0x20                        ; 0042ced2
    PUSH EAX                            ; 0042ced5
    LEA EAX,[ESP + 0xa0]                ; 0042ced6
    PUSH EAX                            ; 0042cedd
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0042cede
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042cee3
    LEA EAX,[ESP + 0x68]                ; 0042cee6
    PUSH EAX                            ; 0042ceea
    LEA EAX,[ESP + 0x9c]                ; 0042ceeb
    PUSH EAX                            ; 0042cef2
    LEA ESI,[ESP + 0x40]                ; 0042cef3
    LEA EDI,[ESP + 0xd0]                ; 0042cef7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042cefe
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042cf03
    LEA ESI,[ESP + 0x40]                ; 0042cf08
    ADD ESP,0x8                         ; 0042cf0c
    MOVSD.REP ES:EDI,ESI                ; 0042cf0f
    LEA EAX,[ESP + 0xc8]                ; 0042cf11
    MOV ESI,dword ptr [EBX]             ; 0042cf18
    PUSH EAX                            ; 0042cf1a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042cf1b
    SUB EAX,ESI                         ; 0042cf22
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042cf24
    SHL EAX,0x4                         ; 0042cf27
    ADD ESI,0xfd8                       ; 0042cf2a
    ADD EAX,ESI                         ; 0042cf30
    PUSH EAX                            ; 0042cf32
    LEA ESI,[ESP + 0x130]               ; 0042cf33
    LEA EDI,[ESP + 0x100]               ; 0042cf3a
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042cf41
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042cf46
    LEA ESI,[ESP + 0x130]               ; 0042cf4b
    ADD ESP,0x8                         ; 0042cf52
    LEA EAX,[ESP + 0xf8]                ; 0042cf55
    MOVSD.REP ES:EDI,ESI                ; 0042cf5c
    PUSH EAX                            ; 0042cf5e
    LEA ESI,[ESP + 0xc]                 ; 0042cf5f
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0042cf63
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    FLDZ                                ; 0042cf68
    MOV ECX,0xc                         ; 0042cf6a
    LEA ESI,[ESP + 0xc]                 ; 0042cf6f
    ADD ESP,0x4                         ; 0042cf73
    LEA EDI,[EBX + 0xc]                 ; 0042cf76
    FLD float ptr [EBP + 0x1c]          ; 0042cf79
    FSTP double ptr [ESP]               ; 0042cf7c
    MOVSD.REP ES:EDI,ESI                ; 0042cf7f
    FCOMP double ptr [ESP]              ; 0042cf81
    FNSTSW AX                           ; 0042cf84
    SAHF                                ; 0042cf86
    JNC 0x0042cfc7                      ; 0042cf87
        ;   XREF to: 0042cfc7 (CONDITIONAL_JUMP)  ; LAB_0042cfc7
    FLD1                                ; 0042cf89
    FDIV double ptr [ESP]               ; 0042cf8b
    MOV dword ptr [EBX + 0x40],0x0      ; 0042cf8e
    FSTP float ptr [EBX + 0x3c]         ; 0042cf95
    MOV ESP,EBP                         ; 0042cf98
    POP EBP                             ; 0042cf9a
    POP EDI                             ; 0042cf9b
    POP ESI                             ; 0042cf9c
    POP EBX                             ; 0042cf9d
    RET                                 ; 0042cf9e
    MOV ECX,0x617329                    ; 0042cf9f | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042cf9f
    MOV ESI,0xc00                       ; 0042cfa4
    PUSH 0x61733e                       ; 0042cfa9 | = "CCharacter::computePickup - invalid b..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0042cfae | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0042cfb4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042cfba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0042cfbf
    JMP 0x0042ceb0                      ; 0042cfc2
        ;   XREF to: 0042ceb0 (UNCONDITIONAL_JUMP)  ; LAB_0042ceb0
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 0042cfc7
        ;   Label: LAB_0042cfc7
    MOV dword ptr [EBX + 0x3c],0x0      ; 0042cfce
    MOV ESP,EBP                         ; 0042cfd5
    POP EBP                             ; 0042cfd7
    POP EDI                             ; 0042cfd8
    POP ESI                             ; 0042cfd9
    POP EBX                             ; 0042cfda
    RET                                 ; 0042cfdb

