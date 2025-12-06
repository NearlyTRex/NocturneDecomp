; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLever * core_lever.cpp_FUN_005047d0(CLever * this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lever.cpp_FUN_00504790 at 005047aa
;
; Referenced Globals:
;   TerminatedCString s_glever_kfm_00631071
;   CDemonActor_vtable PTR_core_lever.cpp_FUN_00660914
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_event.cpp_FUN_004b1670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005047d0
        ;   Label: core_lever.cpp_FUN_005047d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005047d1
    PUSH EBX                            ; 005047d5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005047d6 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005047db
    ADD EAX,0x158                       ; 005047de
    PUSH EAX                            ; 005047e3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005047e4 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005047e9
    LEA EBX,[EAX + 0x2c8]               ; 005047ec
    PUSH EBX                            ; 005047f2
    CALL core_event.cpp_FUN_004b1670    ; 005047f3 | undefined core_event.cpp_FUN_004b1670()
        ;   XREF to: 004b1670 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005047f8
    SUB EBX,0x420                       ; 005047fb
    PUSH 0x631071                       ; 00504801 | = "glever.kfm" | s_glever_kfm_00631071 = glever.kfm
    LEA EAX,[EBX + 0x158]               ; 00504806
    PUSH EAX                            ; 0050480c
    MOV dword ptr [EBX + 0x154],0x660914 ; 0050480d | CDemonActor_vtable PTR_core_lever.cpp_FUN_00660914
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00504817 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0050481c
    MOV byte ptr [EBX + 0x2e0],0x0      ; 00504826
    MOV byte ptr [EBX + 0x344],0x0      ; 0050482d
    MOV byte ptr [EBX + 0x3a8],0x0      ; 00504834
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0050483b
    MOV dword ptr [EBX + 0x40c],0x1     ; 00504845
    MOV dword ptr [EBX + 0x410],0x0     ; 0050484f
    MOV dword ptr [EBX + 0x414],0x17    ; 00504859
    MOV dword ptr [EBX + 0x418],0x0     ; 00504863
    MOV dword ptr [EBX + 0x41c],0x0     ; 0050486d
    ADD ESP,0x8                         ; 00504877
    MOV dword ptr [EBX + 0x80c],0x2     ; 0050487a
    MOV EAX,EBX                         ; 00504884
    MOV dword ptr [EBX + 0x810],0x1     ; 00504886
    POP EBX                             ; 00504890
    RET                                 ; 00504891

