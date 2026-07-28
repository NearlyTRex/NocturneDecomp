; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain *this_ptr,CVector3f *out_point)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_chain.cpp_CChain_process_FUN_0042bca0 at 0042bda7
;   core_chain.cpp_CChain_setup_FUN_0042b8f0 at 0042b967
;
; Referenced Globals:
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b890
        ;   Label: core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890
    PUSH ESI                            ; 0042b891
    SUB ESP,0xc                         ; 0042b892
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042b895
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042b899
    MOV EDX,dword ptr [ESI + 0x160]     ; 0042b89d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042b8a3
    SUB EAX,EDX                         ; 0042b8aa
    MOV ECX,dword ptr [ESI + 0x15c]     ; 0042b8ac
    SHL EAX,0x4                         ; 0042b8b2
    LEA EDX,[ECX + 0xfd0]               ; 0042b8b5
    ADD EAX,EDX                         ; 0042b8bb
    PUSH EAX                            ; 0042b8bd
    PUSH 0x2dd1184                      ; 0042b8be | DAT_02dd1184
    LEA EAX,[ESP + 0x8]                 ; 0042b8c3
    PUSH EAX                            ; 0042b8c7
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042b8c8
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042b8cd
    PUSH EAX                            ; 0042b8d0
    PUSH EBX                            ; 0042b8d1
    MOV EDX,dword ptr [ESI + 0x15c]     ; 0042b8d2
    PUSH EDX                            ; 0042b8d8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0042b8d9
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042b8de
    MOV EAX,EBX                         ; 0042b8e1
    ADD ESP,0xc                         ; 0042b8e3
    POP ESI                             ; 0042b8e6
    POP EBX                             ; 0042b8e7
    RET                                 ; 0042b8e8

