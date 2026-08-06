; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_position
; int              Stack[0xc]:4   bone_index
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; XREF[35]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 0041270f
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413daa
;   core_bride.cpp_CBride_process_FUN_0041fe40 at 0041fffd
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 at 0042ae31
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043c0ea
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 00454ae0
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 00459657
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 00462e9a
;   core_gabriela.cpp_CGabriella_FUN_00499b00 at 00499b33
;   core_gabriela.cpp_CGabriella_getTorsoCenterPosition_FUN_00497870 at 00497891
;   ... and 25 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d2a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
    PUSH ESI                            ; 0051d2a1
    PUSH EDI                            ; 0051d2a2
    PUSH EBP                            ; 0051d2a3
    SUB ESP,0x60                        ; 0051d2a4
    MOV EDI,dword ptr [ESP + 0x74]      ; 0051d2a7
    MOV EBX,dword ptr [ESP + 0x78]      ; 0051d2ab
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0051d2af
    LEA ESI,[EDI + 0x6a4]               ; 0051d2b3
    TEST EDX,EDX                        ; 0051d2b9
    JGE 0x0051d2df                      ; 0051d2bb
        ;   XREF to: 0051d2df (CONDITIONAL_JUMP)  ; LAB_0051d2df
    MOV EAX,dword ptr [ESI]             ; 0051d2bd
    LEA EDX,[ESI + 0x4]                 ; 0051d2bf
    MOV dword ptr [EBX],EAX             ; 0051d2c2
    LEA EAX,[EBX + 0x4]                 ; 0051d2c4
    MOV EDX,dword ptr [EDX]             ; 0051d2c7
    MOV dword ptr [EAX],EDX             ; 0051d2c9
    LEA EDX,[EAX + 0x4]                 ; 0051d2cb
    LEA EAX,[ESI + 0x8]                 ; 0051d2ce
    MOV EAX,dword ptr [EAX]             ; 0051d2d1
    MOV dword ptr [EDX],EAX             ; 0051d2d3
    MOV EAX,EBX                         ; 0051d2d5
    ADD ESP,0x60                        ; 0051d2d7
    POP EBP                             ; 0051d2da
    POP EDI                             ; 0051d2db
    POP ESI                             ; 0051d2dc
    POP EBX                             ; 0051d2dd
    RET                                 ; 0051d2de
    PUSH EDI                            ; 0051d2df
        ;   Label: LAB_0051d2df
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d2e0
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051d2e5
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0051d2e8
    MOV EBP,EAX                         ; 0051d2ec
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051d2ee
    ADD EAX,EDX                         ; 0051d2f5
    SHL EAX,0x2                         ; 0051d2f7
    LEA EDX,[EAX + EBP*0x1]             ; 0051d2fa
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0051d2fd
    LEA EAX,[EBP*0x4 + 0x0]             ; 0051d301
    SUB EAX,EBP                         ; 0051d308
    LEA ECX,[EDI + 0x58]                ; 0051d30a
    SHL EAX,0x2                         ; 0051d30d
    MOV EDX,dword ptr [EDX + 0x2857c]   ; 0051d310
    LEA EBP,[ECX + EAX*0x1]             ; 0051d316
    TEST EDX,EDX                        ; 0051d319
    JGE 0x0051d340                      ; 0051d31b
        ;   XREF to: 0051d340 (CONDITIONAL_JUMP)  ; LAB_0051d340
    FLD float ptr [EBP]                 ; 0051d31d
    FADD float ptr [ESI]                ; 0051d320
    FSTP float ptr [EBX]                ; 0051d322
    FLD float ptr [EBP + 0x4]           ; 0051d324
    FADD float ptr [ESI + 0x4]          ; 0051d327
    FSTP float ptr [EBX + 0x4]          ; 0051d32a
    FLD float ptr [EBP + 0x8]           ; 0051d32d
    FADD float ptr [ESI + 0x8]          ; 0051d330
    FSTP float ptr [EBX + 0x8]          ; 0051d333
    MOV EAX,EBX                         ; 0051d336
    ADD ESP,0x60                        ; 0051d338
    POP EBP                             ; 0051d33b
    POP EDI                             ; 0051d33c
    POP ESI                             ; 0051d33d
    POP EBX                             ; 0051d33e
    RET                                 ; 0051d33f
    PUSH EDX                            ; 0051d340
        ;   Label: LAB_0051d340
    PUSH EDI                            ; 0051d341
    LEA ESI,[ESP + 0x38]                ; 0051d342
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 0051d346
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    ADD ESP,0x8                         ; 0051d34b
    MOV EAX,ESP                         ; 0051d34e
    PUSH EAX                            ; 0051d350
    MOV ECX,0xc                         ; 0051d351
    PUSH EBP                            ; 0051d356
    LEA EDI,[ESP + 0x8]                 ; 0051d357
    LEA ESI,[ESP + 0x38]                ; 0051d35b
    PUSH EBX                            ; 0051d35f
    MOVSD.REP ES:EDI,ESI                ; 0051d360
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0051d362
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0051d367
    MOV EAX,EBX                         ; 0051d36a
    ADD ESP,0x60                        ; 0051d36c
    POP EBP                             ; 0051d36f
    POP EDI                             ; 0051d370
    POP ESI                             ; 0051d371
    POP EBX                             ; 0051d372
    RET                                 ; 0051d373

