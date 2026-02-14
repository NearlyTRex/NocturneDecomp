; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_position
; int              Stack[0xc]:4   bone_index
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x40]:1  local_40
;
; XREF[36]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 004156ff
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416e1a
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00423bed
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 at 0042eca1
;   core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0 at 0042f66f
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 0044464a
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f4d0
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484fd7
;   core_drone.cpp_CDrone_process_FUN_0048ec70 at 0048f0aa
;   core_gabriela.cpp_CGabriella_FUN_004d4890 at 004d48dd
;   ... and 26 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fa20
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
    PUSH ESI                            ; 0059fa21
    PUSH EDI                            ; 0059fa22
    PUSH EBP                            ; 0059fa23
    SUB ESP,0x60                        ; 0059fa24
    MOV EDI,dword ptr [ESP + 0x74]      ; 0059fa27
    MOV EBX,dword ptr [ESP + 0x78]      ; 0059fa2b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0059fa2f
    LEA ESI,[EDI + 0x6a4]               ; 0059fa33
    TEST EDX,EDX                        ; 0059fa39
    JGE 0x0059fa5f                      ; 0059fa3b
        ;   XREF to: 0059fa5f (CONDITIONAL_JUMP)  ; LAB_0059fa5f
    MOV EAX,dword ptr [ESI]             ; 0059fa3d
    LEA EDX,[ESI + 0x4]                 ; 0059fa3f
    MOV dword ptr [EBX],EAX             ; 0059fa42
    LEA EAX,[EBX + 0x4]                 ; 0059fa44
    MOV EDX,dword ptr [EDX]             ; 0059fa47
    MOV dword ptr [EAX],EDX             ; 0059fa49
    LEA EDX,[EAX + 0x4]                 ; 0059fa4b
    LEA EAX,[ESI + 0x8]                 ; 0059fa4e
    MOV EAX,dword ptr [EAX]             ; 0059fa51
    MOV dword ptr [EDX],EAX             ; 0059fa53
    MOV EAX,EBX                         ; 0059fa55
    ADD ESP,0x60                        ; 0059fa57
    POP EBP                             ; 0059fa5a
    POP EDI                             ; 0059fa5b
    POP ESI                             ; 0059fa5c
    POP EBX                             ; 0059fa5d
    RET                                 ; 0059fa5e
    PUSH EDI                            ; 0059fa5f
        ;   Label: LAB_0059fa5f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059fa60
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059fa65
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0059fa68
    MOV EBP,EAX                         ; 0059fa6c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059fa6e
    ADD EAX,EDX                         ; 0059fa75
    SHL EAX,0x2                         ; 0059fa77
    LEA EDX,[EAX + EBP*0x1]             ; 0059fa7a
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0059fa7d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0059fa81
    SUB EAX,EBP                         ; 0059fa88
    LEA ECX,[EDI + 0x58]                ; 0059fa8a
    SHL EAX,0x2                         ; 0059fa8d
    MOV EDX,dword ptr [EDX + 0x2857c]   ; 0059fa90
    LEA EBP,[ECX + EAX*0x1]             ; 0059fa96
    TEST EDX,EDX                        ; 0059fa99
    JGE 0x0059fac0                      ; 0059fa9b
        ;   XREF to: 0059fac0 (CONDITIONAL_JUMP)  ; LAB_0059fac0
    FLD float ptr [EBP]                 ; 0059fa9d
    FADD float ptr [ESI]                ; 0059faa0
    FSTP float ptr [EBX]                ; 0059faa2
    FLD float ptr [EBP + 0x4]           ; 0059faa4
    FADD float ptr [ESI + 0x4]          ; 0059faa7
    FSTP float ptr [EBX + 0x4]          ; 0059faaa
    FLD float ptr [EBP + 0x8]           ; 0059faad
    FADD float ptr [ESI + 0x8]          ; 0059fab0
    FSTP float ptr [EBX + 0x8]          ; 0059fab3
    MOV EAX,EBX                         ; 0059fab6
    ADD ESP,0x60                        ; 0059fab8
    POP EBP                             ; 0059fabb
    POP EDI                             ; 0059fabc
    POP ESI                             ; 0059fabd
    POP EBX                             ; 0059fabe
    RET                                 ; 0059fabf
    PUSH EDX                            ; 0059fac0
        ;   Label: LAB_0059fac0
    PUSH EDI                            ; 0059fac1
    LEA ESI,[ESP + 0x38]                ; 0059fac2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 0059fac6
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    ADD ESP,0x8                         ; 0059facb
    MOV EAX,ESP                         ; 0059face
    PUSH EAX                            ; 0059fad0
    MOV ECX,0xc                         ; 0059fad1
    PUSH EBP                            ; 0059fad6
    LEA EDI,[ESP + 0x8]                 ; 0059fad7
    LEA ESI,[ESP + 0x38]                ; 0059fadb
    PUSH EBX                            ; 0059fadf
    MOVSD.REP ES:EDI,ESI                ; 0059fae0
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059fae2
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0059fae7
    MOV EAX,EBX                         ; 0059faea
    ADD ESP,0x60                        ; 0059faec
    POP EBP                             ; 0059faef
    POP EDI                             ; 0059faf0
    POP ESI                             ; 0059faf1
    POP EBX                             ; 0059faf2
    RET                                 ; 0059faf3

