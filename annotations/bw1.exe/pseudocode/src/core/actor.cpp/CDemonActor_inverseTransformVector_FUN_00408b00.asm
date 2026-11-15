; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00(CDemonActor *this_ptr,CVector3f *input_vector,CVector3f *output_vector)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_vector
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[20]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409170 at 004092c7
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0 at 00422aeb
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429453
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00432f10 at 00433362
;   core_charactr.cpp_CCharacter_followActor_FUN_00431cc0 at 00431e2c
;   core_charactr.cpp_CCharacter_setOrientation_FUN_00433d50 at 00433dcc
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00459100 at 00459b04
;   core_doc.cpp_CDoc_processFrame_FUN_00469550 at 00469ec7
;   core_fire.cpp_CBulletHole_init_FUN_004ac3e0 at 004ac63b
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004b6420 at 004b66d0
;   ... and 10 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b00
        ;   Label: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408b00
    PUSH EDI                            ; 00408b01
    SUB ESP,0xc                         ; 00408b02
    MOV EBX,ESI                         ; 00408b05
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408b07
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408b0b
    PUSH EDX                            ; 00408b0f
    ADD ESI,0x3c                        ; 00408b10
    PUSH ESI                            ; 00408b13
    LEA ESI,[ESP + 0x8]                 ; 00408b14
    MOV EDI,EBX                         ; 00408b18
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700 ; 00408b1a
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700(CMatrix3x3f * this_ptr, CVector3f * input, CVector3f * output)
    LEA ESI,[ESP + 0x8]                 ; 00408b1f
    ADD ESP,0x8                         ; 00408b23
    MOVSD ES:EDI,ESI                    ; 00408b26
    MOVSD ES:EDI,ESI                    ; 00408b27
    MOVSD ES:EDI,ESI                    ; 00408b28
    MOV EAX,EBX                         ; 00408b29
    ADD ESP,0xc                         ; 00408b2b
    POP EDI                             ; 00408b2e
    POP EBX                             ; 00408b2f
    RET                                 ; 00408b30

