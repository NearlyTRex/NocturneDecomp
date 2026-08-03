; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_0043b110(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_setup_FUN_004f5f60
;   core_xform.cpp_eulerToQuaternion_FUN_0055d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b110
        ;   Label: core_conveyor.cpp_CConveyor_setup_FUN_0043b110
    PUSH ESI                            ; 0043b111
    PUSH EDI                            ; 0043b112
    SUB ESP,0x10                        ; 0043b113
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043b116
    LEA EAX,[EBX + 0x320]               ; 0043b11a
    LEA EDX,[EBX + 0x20]                ; 0043b120
    MOV ECX,EAX                         ; 0043b123
    CMP EAX,EDX                         ; 0043b125
    JNZ 0x0043b18b                      ; 0043b127
        ;   XREF to: 0043b18b (CONDITIONAL_JUMP)  ; LAB_0043b18b
    LEA EAX,[EBX + 0x314]               ; 0043b129
        ;   Label: LAB_0043b129
    CMP EAX,ECX                         ; 0043b12f
    JZ 0x0043b143                       ; 0043b131
        ;   XREF to: 0043b143 (CONDITIONAL_JUMP)  ; LAB_0043b143
    MOV EDX,dword ptr [ECX]             ; 0043b133
    MOV dword ptr [EAX],EDX             ; 0043b135
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043b137
    MOV dword ptr [EAX + 0x4],EDX       ; 0043b13a
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043b13d
    MOV dword ptr [EAX + 0x8],EDX       ; 0043b140
    LEA EAX,[EBX + 0x30]                ; 0043b143
        ;   Label: LAB_0043b143
    PUSH EAX                            ; 0043b146
    LEA ESI,[ESP + 0x4]                 ; 0043b147
    CALL core_xform.cpp_eulerToQuaternion_FUN_0055d610 ; 0043b14b
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_0055d610(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x4]                 ; 0043b150
    LEA EDI,[EBX + 0x33c]               ; 0043b154
    ADD ESP,0x4                         ; 0043b15a
    MOVSD ES:EDI,ESI                    ; 0043b15d
    MOVSD ES:EDI,ESI                    ; 0043b15e
    MOVSD ES:EDI,ESI                    ; 0043b15f
    MOVSD ES:EDI,ESI                    ; 0043b160
    LEA EDI,[EBX + 0x32c]               ; 0043b161
    LEA ESI,[EBX + 0x33c]               ; 0043b167
    PUSH EBX                            ; 0043b16d
    MOVSD ES:EDI,ESI                    ; 0043b16e
    MOVSD ES:EDI,ESI                    ; 0043b16f
    MOVSD ES:EDI,ESI                    ; 0043b170
    MOVSD ES:EDI,ESI                    ; 0043b171
    CALL core_platfrm.cpp_CPlatform_setup_FUN_004f5f60 ; 0043b172
        ;   XREF to: 004f5f60 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_setup_FUN_004f5f60(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0043b177
    MOV dword ptr [EBX + 0xfc],0x1      ; 0043b17a
    ADD ESP,0x10                        ; 0043b184
    POP EDI                             ; 0043b187
    POP ESI                             ; 0043b188
    POP EBX                             ; 0043b189
    RET                                 ; 0043b18a
    MOV ESI,dword ptr [EDX]             ; 0043b18b
        ;   Label: LAB_0043b18b
    MOV dword ptr [EAX],ESI             ; 0043b18d
    MOV ESI,dword ptr [EDX + 0x4]       ; 0043b18f
    MOV dword ptr [EAX + 0x4],ESI       ; 0043b192
    MOV ESI,dword ptr [EDX + 0x8]       ; 0043b195
    MOV dword ptr [EAX + 0x8],ESI       ; 0043b198
    JMP 0x0043b129                      ; 0043b19b
        ;   XREF to: 0043b129 (UNCONDITIONAL_JUMP)  ; LAB_0043b129

