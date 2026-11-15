; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack_esi core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_005b4860(CChain *this_ptr,CVector3f *out_point)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_chain.cpp_CChain_process_FUN_005b4d30 at 005b4e4c
;   core_chain.cpp_CChain_setup_FUN_005b48e0 at 005b495c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70
;   core_xform.cpp_transformVector3x4_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4860
        ;   Label: core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_005b4860
    PUSH EDI                            ; 005b4861
    PUSH EBP                            ; 005b4862
    SUB ESP,0x24                        ; 005b4863
    MOV EBP,dword ptr [ESP + 0x34]      ; 005b4866
    MOV EBX,ESI                         ; 005b486a
    MOV EDX,dword ptr [EBP + 0x168]     ; 005b486c
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b4872
    MOV ESI,dword ptr [EBP + 0x164]     ; 005b4879
    SUB EAX,EDX                         ; 005b487f
    ADD ESI,0xfd8                       ; 005b4881
    SHL EAX,0x4                         ; 005b4887
    ADD EAX,ESI                         ; 005b488a
    PUSH EAX                            ; 005b488c
    PUSH 0x265370c                      ; 005b488d
    LEA ESI,[ESP + 0x20]                ; 005b4892
    LEA EDI,[ESP + 0x14]                ; 005b4896
    CALL core_xform.cpp_transformVector3x4_FUN_00591530 ; 005b489a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_00591530(CVector3f * input_vector, CMatrix3x4f * matrix, CVector3f * output_vector)
    LEA ESI,[ESP + 0x20]                ; 005b489f
    ADD ESP,0x8                         ; 005b48a3
    LEA EAX,[ESP + 0xc]                 ; 005b48a6
    MOVSD ES:EDI,ESI                    ; 005b48aa
    MOVSD ES:EDI,ESI                    ; 005b48ab
    MOVSD ES:EDI,ESI                    ; 005b48ac
    PUSH EAX                            ; 005b48ad
    MOV EDX,dword ptr [EBP + 0x164]     ; 005b48ae
    PUSH EDX                            ; 005b48b4
    LEA ESI,[ESP + 0x8]                 ; 005b48b5
    MOV EDI,EBX                         ; 005b48b9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70 ; 005b48bb
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA ESI,[ESP + 0x8]                 ; 005b48c0
    ADD ESP,0x8                         ; 005b48c4
    MOVSD ES:EDI,ESI                    ; 005b48c7
    MOVSD ES:EDI,ESI                    ; 005b48c8
    MOVSD ES:EDI,ESI                    ; 005b48c9
    MOV EAX,EBX                         ; 005b48ca
    ADD ESP,0x24                        ; 005b48cc
    POP EBP                             ; 005b48cf
    POP EDI                             ; 005b48d0
    POP EBX                             ; 005b48d1
    RET                                 ; 005b48d2

