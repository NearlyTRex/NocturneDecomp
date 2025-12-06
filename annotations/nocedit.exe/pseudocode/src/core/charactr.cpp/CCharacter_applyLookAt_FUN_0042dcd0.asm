; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 at 0042dfcf
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0061746e
;   TerminatedCString s_CCharacter_applyLookAt_n_00617483
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dcd0
        ;   Label: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
    SUB ESP,0x70                        ; 0042dcd1
    MOV EBX,dword ptr [ESP + 0x78]      ; 0042dcd4
    FLD float ptr [EBX + 0x25e0]        ; 0042dcd8
    FLDZ                                ; 0042dcde
    FCOMPP                              ; 0042dce0
    FNSTSW AX                           ; 0042dce2
    SAHF                                ; 0042dce4
    JNC 0x0042dd9b                      ; 0042dce5 | LAB_0042dd9b
        ;   XREF to: 0042dd9b (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0042dceb
    PUSH ESI                            ; 0042dcec
    CMP dword ptr [EBX + 0x25e4],0x0    ; 0042dced
    JL 0x0042dda0                       ; 0042dcf4 | LAB_0042dda0
        ;   XREF to: 0042dda0 (CONDITIONAL_JUMP)
    PUSH dword ptr [EBX + 0x25dc]       ; 0042dcfa
        ;   Label: LAB_0042dcfa
    LEA ESI,[ESP + 0x5c]                ; 0042dd00
    LEA EDI,[ESP + 0x3c]                ; 0042dd04
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 0042dd08 | void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x5c]                ; 0042dd0d
    ADD ESP,0x4                         ; 0042dd11
    MOVSD ES:EDI,ESI                    ; 0042dd14
    MOVSD ES:EDI,ESI                    ; 0042dd15
    MOVSD ES:EDI,ESI                    ; 0042dd16
    MOVSD ES:EDI,ESI                    ; 0042dd17
    LEA ESI,[ESP + 0x38]                ; 0042dd18
    PUSH ESI                            ; 0042dd1c
    PUSH dword ptr [EBX + 0x25d8]       ; 0042dd1d
    LEA ESI,[ESP + 0x70]                ; 0042dd23
    LEA EDI,[ESP + 0x30]                ; 0042dd27
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 0042dd2b | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x70]                ; 0042dd30
    ADD ESP,0x4                         ; 0042dd34
    MOVSD ES:EDI,ESI                    ; 0042dd37
    MOVSD ES:EDI,ESI                    ; 0042dd38
    MOVSD ES:EDI,ESI                    ; 0042dd39
    MOVSD ES:EDI,ESI                    ; 0042dd3a
    LEA ESI,[ESP + 0x2c]                ; 0042dd3b
    PUSH ESI                            ; 0042dd3f
    LEA ESI,[ESP + 0x10]                ; 0042dd40
    LEA EDI,[ESP + 0x20]                ; 0042dd44
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0042dd48 | CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x10]                ; 0042dd4d
    ADD ESP,0x8                         ; 0042dd51
    MOVSD ES:EDI,ESI                    ; 0042dd54
    MOVSD ES:EDI,ESI                    ; 0042dd55
    MOVSD ES:EDI,ESI                    ; 0042dd56
    MOVSD ES:EDI,ESI                    ; 0042dd57
    LEA ESI,[ESP + 0x18]                ; 0042dd58
    PUSH dword ptr [EBX + 0x25e0]       ; 0042dd5c
    PUSH ESI                            ; 0042dd62
    MOV ESI,dword ptr [EBX + 0x25e4]    ; 0042dd63
    LEA EAX,[EBX + 0x808]               ; 0042dd69
    SHL ESI,0x4                         ; 0042dd6f
    ADD ESI,EAX                         ; 0042dd72
    PUSH ESI                            ; 0042dd74
    LEA ESI,[ESP + 0x54]                ; 0042dd75
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0042dd79 | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x25e4]    ; 0042dd7e
    SHL ESI,0x4                         ; 0042dd84
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0042dd87
    LEA ESI,[ESP + 0x54]                ; 0042dd8e
    ADD ESP,0xc                         ; 0042dd92
    MOVSD ES:EDI,ESI                    ; 0042dd95
    MOVSD ES:EDI,ESI                    ; 0042dd96
    MOVSD ES:EDI,ESI                    ; 0042dd97
    MOVSD ES:EDI,ESI                    ; 0042dd98
    POP ESI                             ; 0042dd99
    POP EDI                             ; 0042dd9a
    ADD ESP,0x70                        ; 0042dd9b
        ;   Label: LAB_0042dd9b
    POP EBX                             ; 0042dd9e
    RET                                 ; 0042dd9f
    PUSH EBX                            ; 0042dda0
        ;   Label: LAB_0042dda0
    MOV ECX,0x61746e                    ; 0042dda1 | = "..\\core\\charactr.cpp" | s_core_charactr_cpp_0061746e = ..\core\charactr.cpp
    MOV ESI,0xde5                       ; 0042dda6
    PUSH 0x617483                       ; 0042ddab | = "CCharacter::applyLookAt - never set l..." | s_CCharacter_applyLookAt_n_00617483 = CCharacter::applyLookAt - never set lookAtHeadBone for actor %s
    MOV dword ptr [0x02f0ca48],ECX      ; 0042ddb0 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0042ddb6 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042ddbc | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042ddc1
    JMP 0x0042dcfa                      ; 0042ddc4 | LAB_0042dcfa
        ;   XREF to: 0042dcfa (UNCONDITIONAL_JUMP)

