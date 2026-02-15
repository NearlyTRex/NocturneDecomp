; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[4]:
;   core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0 at 00441ca7
;   core_minecar.cpp_CMineCar_ctor_FUN_00520f20 at 00520f25
;   core_minecar.cpp_factoryFunc_FUN_00520e50 at 00520e6a
;   core_platfrm.cpp_factoryFunc_FUN_0054c810 at 0054c82a
;
; Referenced Globals:
;   TerminatedCString s_slider1_kfm_0063f774
;   CDemonActor_vtable g_CPlatformVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c850
        ;   Label: core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
    SUB ESP,0x10                        ; 0054c851
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054c854
    PUSH EDI                            ; 0054c858
    PUSH ESI                            ; 0054c859
    PUSH EBX                            ; 0054c85a
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0054c85b
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054c860
    ADD EAX,0x158                       ; 0054c863
    PUSH EAX                            ; 0054c868
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 0054c869
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054c86e
    ADD EAX,0x1b8                       ; 0054c871
    PUSH EAX                            ; 0054c876
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 0054c877
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0054c87c
    LEA EBX,[EAX + 0xfffffcf0]          ; 0054c87f
    PUSH 0x63f774                       ; 0054c885 | = "slider1.kfm"
    LEA EAX,[EBX + 0x158]               ; 0054c88a
    PUSH EAX                            ; 0054c890
    MOV dword ptr [EBX + 0x154],0x6622a4 ; 0054c891 | g_CPlatformVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0054c89b
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x354],0x0      ; 0054c8a0
    MOV byte ptr [EBX + 0x3b8],0x0      ; 0054c8a7
    MOV byte ptr [EBX + 0x41c],0x0      ; 0054c8ae
    MOV byte ptr [EBX + 0x480],0x0      ; 0054c8b5
    MOV byte ptr [EBX + 0x494],0x0      ; 0054c8bc
    MOV byte ptr [EBX + 0x4a8],0x0      ; 0054c8c3
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0054c8ca
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0054c8d4
    MOV dword ptr [EBX + 0x2ec],0x40000000 ; 0054c8de
    MOV dword ptr [EBX + 0x2e8],0x40000000 ; 0054c8e8
    ADD ESP,0x8                         ; 0054c8f2
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0054c8f5
    LEA EAX,[EBX + 0x328]               ; 0054c8ff
    MOV byte ptr [EBX + 0x2f0],0x0      ; 0054c905
    LEA EDX,[EBX + 0x20]                ; 0054c90c
    MOV ECX,EAX                         ; 0054c90f
    CMP EAX,EDX                         ; 0054c911
    JNZ 0x0054c9f3                      ; 0054c913
        ;   XREF to: 0054c9f3 (CONDITIONAL_JUMP)  ; LAB_0054c9f3
    LEA EAX,[EBX + 0x31c]               ; 0054c919
        ;   Label: LAB_0054c919
    CMP EAX,ECX                         ; 0054c91f
    JNZ 0x0054ca08                      ; 0054c921
        ;   XREF to: 0054ca08 (CONDITIONAL_JUMP)  ; LAB_0054ca08
    LEA EAX,[EBX + 0x30]                ; 0054c927
        ;   Label: LAB_0054c927
    PUSH EAX                            ; 0054c92a
    LEA ESI,[ESP + 0xc]                 ; 0054c92b
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0054c92f
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xc]                 ; 0054c934
    LEA EDI,[EBX + 0x344]               ; 0054c938
    ADD ESP,0x4                         ; 0054c93e
    MOVSD ES:EDI,ESI                    ; 0054c941
    MOVSD ES:EDI,ESI                    ; 0054c942
    MOVSD ES:EDI,ESI                    ; 0054c943
    MOVSD ES:EDI,ESI                    ; 0054c944
    LEA EDI,[EBX + 0x334]               ; 0054c945
    LEA ESI,[EBX + 0x344]               ; 0054c94b
    MOVSD ES:EDI,ESI                    ; 0054c951
    MOVSD ES:EDI,ESI                    ; 0054c952
    MOVSD ES:EDI,ESI                    ; 0054c953
    MOVSD ES:EDI,ESI                    ; 0054c954
    MOV dword ptr [EBX + 0x724],0x0     ; 0054c955
    MOV dword ptr [EBX + 0x4c0],0x0     ; 0054c95f
    MOV dword ptr [EBX + 0x4c4],0x0     ; 0054c969
    MOV dword ptr [EBX + 0x4c8],0x0     ; 0054c973
    MOV byte ptr [EBX + 0x4cc],0x0      ; 0054c97d
    MOV dword ptr [EBX + 0x728],0x0     ; 0054c984
    MOV dword ptr [EBX + 0x64],0x32     ; 0054c98e
    MOV dword ptr [EBX + 0x50c],0x0     ; 0054c995
    MOV EAX,EBX                         ; 0054c99f
    MOV dword ptr [EBX + 0x2e0],0x0     ; 0054c9a1
    LEA EDX,[EBX + 0x208]               ; 0054c9ab
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0054c9b1
    POP ESI                             ; 0054c9bb
    POP EDI                             ; 0054c9bc
    ADD EAX,0x34                        ; 0054c9bd
        ;   Label: LAB_0054c9bd
    MOV dword ptr [EAX + 0x4e8],0x0     ; 0054c9c0
    CMP EAX,EDX                         ; 0054c9ca
    JNZ 0x0054c9bd                      ; 0054c9cc
        ;   XREF to: 0054c9bd (CONDITIONAL_JUMP)  ; LAB_0054c9bd
    MOV dword ptr [EBX + 0x514],0x0     ; 0054c9ce
    MOV dword ptr [EBX + 0x518],0x1     ; 0054c9d8
    MOV EAX,EBX                         ; 0054c9e2
    MOV dword ptr [EBX + 0x510],0x0     ; 0054c9e4
    ADD ESP,0x10                        ; 0054c9ee
    POP EBX                             ; 0054c9f1
    RET                                 ; 0054c9f2
    MOV ESI,dword ptr [EDX]             ; 0054c9f3
        ;   Label: LAB_0054c9f3
    MOV dword ptr [EAX],ESI             ; 0054c9f5
    MOV ESI,dword ptr [EDX + 0x4]       ; 0054c9f7
    MOV dword ptr [EAX + 0x4],ESI       ; 0054c9fa
    MOV ESI,dword ptr [EDX + 0x8]       ; 0054c9fd
    MOV dword ptr [EAX + 0x8],ESI       ; 0054ca00
    JMP 0x0054c919                      ; 0054ca03
        ;   XREF to: 0054c919 (UNCONDITIONAL_JUMP)  ; LAB_0054c919
    MOV EDX,dword ptr [ECX]             ; 0054ca08
        ;   Label: LAB_0054ca08
    MOV dword ptr [EAX],EDX             ; 0054ca0a
    MOV EDX,dword ptr [ECX + 0x4]       ; 0054ca0c
    MOV dword ptr [EAX + 0x4],EDX       ; 0054ca0f
    MOV EDX,dword ptr [ECX + 0x8]       ; 0054ca12
    MOV dword ptr [EAX + 0x8],EDX       ; 0054ca15
    JMP 0x0054c927                      ; 0054ca18
        ;   XREF to: 0054c927 (UNCONDITIONAL_JUMP)  ; LAB_0054c927

