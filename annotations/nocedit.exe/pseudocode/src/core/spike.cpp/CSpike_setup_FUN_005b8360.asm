; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_CSpike_setup_FUN_005b8360(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; Local Variables:
; float[3]         Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; CVector3f        Stack[-0x14]:12  local_14
; float            Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8360
        ;   Label: core_spike.cpp_CSpike_setup_FUN_005b8360
    SUB ESP,0x28                        ; 005b8361
    MOV EBX,dword ptr [ESP + 0x30]      ; 005b8364
    LEA EAX,[EBX + 0x158]               ; 005b8368
    PUSH EAX                            ; 005b836e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005b836f
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b8374
    PUSH EBX                            ; 005b8377
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005b8378
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x2ec]         ; 005b837d
    FMUL float ptr [EBX + 0x55c]        ; 005b8383
    ADD ESP,0x4                         ; 005b8389
    FSTP float ptr [ESP + 0x24]         ; 005b838c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b8390
    MOV dword ptr [ESP + 0x20],EAX      ; 005b8394
    LEA EAX,[ESP + 0x18]                ; 005b8398
    PUSH EAX                            ; 005b839c
    LEA EAX,[ESP + 0x10]                ; 005b839d
    PUSH EAX                            ; 005b83a1
    XOR EDX,EDX                         ; 005b83a2
    PUSH EBX                            ; 005b83a4
    MOV dword ptr [ESP + 0x24],EDX      ; 005b83a5
    MOV dword ptr [ESP + 0x28],EDX      ; 005b83a9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005b83ad
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 005b83b2
    FLD float ptr [EDX]                 ; 005b83b5
    FSUB float ptr [EAX]                ; 005b83b7
    ADD ESP,0xc                         ; 005b83b9
    FSTP float ptr [ESP]                ; 005b83bc
    FLD float ptr [EDX + 0x4]           ; 005b83bf
    FSUB float ptr [EAX + 0x4]          ; 005b83c2
    FSTP float ptr [ESP + 0x4]          ; 005b83c5
    FLD float ptr [EDX + 0x8]           ; 005b83c9
    LEA EDX,[EBX + 0x2e0]               ; 005b83cc
    FSUB float ptr [EAX + 0x8]          ; 005b83d2
    MOV EAX,ESP                         ; 005b83d5
    FSTP float ptr [ESP + 0x8]          ; 005b83d7
    CMP EDX,EAX                         ; 005b83db
    JNZ 0x005b83ee                      ; 005b83dd
        ;   XREF to: 005b83ee (CONDITIONAL_JUMP)  ; LAB_005b83ee
    MOV dword ptr [EBX + 0x488],0x0     ; 005b83df
    ADD ESP,0x28                        ; 005b83e9
    POP EBX                             ; 005b83ec
    RET                                 ; 005b83ed
    MOV EAX,dword ptr [ESP]             ; 005b83ee
        ;   Label: LAB_005b83ee
    MOV dword ptr [EDX],EAX             ; 005b83f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b83f3
    MOV dword ptr [EDX + 0x4],EAX       ; 005b83f7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b83fa
    MOV dword ptr [EDX + 0x8],EAX       ; 005b83fe
    MOV dword ptr [EBX + 0x488],0x0     ; 005b8401
    ADD ESP,0x28                        ; 005b840b
    POP EBX                             ; 005b840e
    RET                                 ; 005b840f

