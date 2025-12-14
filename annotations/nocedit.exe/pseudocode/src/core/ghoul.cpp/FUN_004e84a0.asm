; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ghoul.cpp_FUN_004e84a0()
;
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_02d832fc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e84a0
        ;   Label: core_ghoul.cpp_FUN_004e84a0
    PUSH ESI                            ; 004e84a1
    PUSH EDI                            ; 004e84a2
    PUSH EBP                            ; 004e84a3
    MOV EBP,ESP                         ; 004e84a4
    SUB ESP,0x6c                        ; 004e84a6
    MOV EBX,dword ptr [EBP + 0x18]      ; 004e84a9
    MOV EDX,dword ptr [0x02d832fc]      ; 004e84ac | DAT_02d832fc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e84b2
    PUSH EDX                            ; 004e84b5
    ADD ESI,0x158                       ; 004e84b6
    PUSH ESI                            ; 004e84bc
    LEA ESI,[EBP + -0x3c]               ; 004e84bd
    LEA EDI,[EBP + -0x6c]               ; 004e84c0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 004e84c3
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 004e84c8
    LEA ESI,[EBP + -0x3c]               ; 004e84cd
    MOVSD.REP ES:EDI,ESI                ; 004e84d0
    ADD ESP,0x8                         ; 004e84d2
    LEA ESI,[EBP + -0x6c]               ; 004e84d5
    PUSH ESI                            ; 004e84d8
    MOV dword ptr [EBP + -0x8],0x3f333333 ; 004e84d9
    LEA ESI,[EBP + -0xc]                ; 004e84e0
    PUSH ESI                            ; 004e84e3
    MOV EDI,0x3e99999a                  ; 004e84e4
    XOR ECX,ECX                         ; 004e84e9
    PUSH EBX                            ; 004e84eb
    MOV dword ptr [EBP + -0xc],ECX      ; 004e84ec
    MOV dword ptr [EBP + -0x4],EDI      ; 004e84ef
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004e84f2
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004e84f7
    MOV EAX,EBX                         ; 004e84fa
    MOV ESP,EBP                         ; 004e84fc
    POP EBP                             ; 004e84fe
    POP EDI                             ; 004e84ff
    POP ESI                             ; 004e8500
    POP EBX                             ; 004e8501
    RET                                 ; 004e8502

