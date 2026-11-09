; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00430c40(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_FUN_004319e0 at 00431c06
;   core_ghoul.cpp_FUN_004e0870 at 004e0aca
;
; Referenced Globals:
;   TerminatedCString s_glass_1_wav_2_0_005d5a41
;
; Called Functions:
;   core_skeleton.cpp_FUN_0056ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430c40
        ;   Label: core_charactr.cpp_FUN_00430c40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00430c41
    PUSH 0x5d5a41                       ; 00430c45 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430c4a
    PUSH EBX                            ; 00430c50
    CALL dword ptr [EAX + 0x2c]         ; 00430c51
    LEA EDX,[EBX + 0x158]               ; 00430c54
    LEA EAX,[EBX + 0x24a8]              ; 00430c5a
    MOV CL,byte ptr [EAX]               ; 00430c60
    ADD ESP,0x8                         ; 00430c62
    TEST CL,CL                          ; 00430c65
    JNZ 0x00430c72                      ; 00430c67
        ;   XREF to: 00430c72 (CONDITIONAL_JUMP)  ; LAB_00430c72
    MOV dword ptr [EBX + 0x70],0x2      ; 00430c69
    POP EBX                             ; 00430c70
    RET                                 ; 00430c71
    PUSH 0x0                            ; 00430c72
        ;   Label: LAB_00430c72
    LEA EAX,[EBX + 0x30]                ; 00430c74
    PUSH EAX                            ; 00430c77
    LEA EAX,[EBX + 0x20]                ; 00430c78
    PUSH EAX                            ; 00430c7b
    PUSH EDX                            ; 00430c7c
    CALL core_skeleton.cpp_FUN_0056ac60 ; 00430c7d
        ;   XREF to: 0056ac60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056ac60(CDeformableModelInstance * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int desired_lod_index)
    ADD ESP,0x10                        ; 00430c82
    MOV dword ptr [EBX + 0x70],0x2      ; 00430c85
    POP EBX                             ; 00430c8c
    RET                                 ; 00430c8d

