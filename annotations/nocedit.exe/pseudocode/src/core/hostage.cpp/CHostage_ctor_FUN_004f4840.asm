; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHostage * core_hostage.cpp_CHostage_ctor_FUN_004f4840(CHostage * this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hostage.cpp_FUN_004f4800 at 004f481a
;
; Referenced Globals:
;   TerminatedCString s_hickdad_dfm_0062ee2f
;   TerminatedCString s_true_0062ee3b
;   undefined4 s_rue_0062ee3c
;   undefined4 s_ue_0062ee3d
;   undefined4 s_e_0062ee3e
;   CDemonActor_vtable g_CHostageVTable
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_005447e0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4840
        ;   Label: core_hostage.cpp_CHostage_ctor_FUN_004f4840
    PUSH ESI                            ; 004f4841
    PUSH EDI                            ; 004f4842
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f4843
    PUSH EDX                            ; 004f4847
    CALL core_npc.cpp_CNPC_ctor_FUN_005447e0 ; 004f4848
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f484d
    PUSH 0x62ee2f                       ; 004f4850 | = "hickdad.dfm"
    MOV EBX,EAX                         ; 004f4855
    LEA EDI,[EAX + 0x158]               ; 004f4857
    PUSH EDI                            ; 004f485d
    MOV dword ptr [EAX + 0x154],0x65fb34 ; 004f485e | g_CHostageVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f4868
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x1fab4],0x0   ; 004f486d
    MOV dword ptr [EBX + 0x1fabc],0x0   ; 004f4877
    MOV ESI,0x62ee3b                    ; 004f4881 | = "true"
    MOV dword ptr [EBX + 0x1fac0],0x0   ; 004f4886
    ADD ESP,0x8                         ; 004f4890
    MOV dword ptr [EBX + 0x1fac4],0x0   ; 004f4893
    LEA EDI,[EBX + 0x1f70c]             ; 004f489d
    MOV dword ptr [EBX + 0x1f708],0x40a00000 ; 004f48a3
    PUSH EDI                            ; 004f48ad
    MOV AL,byte ptr [ESI]               ; 004f48ae | = "true" | s_ue_0062ee3d
        ;   Label: LAB_004f48ae
    MOV byte ptr [EDI],AL               ; 004f48b0
    CMP AL,0x0                          ; 004f48b2
    JZ 0x004f48c6                       ; 004f48b4
        ;   XREF to: 004f48c6 (CONDITIONAL_JUMP)  ; LAB_004f48c6
    MOV AL,byte ptr [ESI + 0x1]         ; 004f48b6 | s_rue_0062ee3c | s_e_0062ee3e
    ADD ESI,0x2                         ; 004f48b9
    MOV byte ptr [EDI + 0x1],AL         ; 004f48bc
    ADD EDI,0x2                         ; 004f48bf
    CMP AL,0x0                          ; 004f48c2
    JNZ 0x004f48ae                      ; 004f48c4
        ;   XREF to: 004f48ae (CONDITIONAL_JUMP)  ; LAB_004f48ae
    POP EDI                             ; 004f48c6
        ;   Label: LAB_004f48c6
    MOV dword ptr [EBX + 0x1fac8],0x0   ; 004f48c7
    MOV dword ptr [EBX + 0x2598],0x0    ; 004f48d1
    MOV dword ptr [EBX + 0x1fae0],0x0   ; 004f48db
    MOV dword ptr [EBX + 0x1fae4],0x0   ; 004f48e5
    MOV byte ptr [EBX + 0x1f770],0x0    ; 004f48ef
    MOV byte ptr [EBX + 0x1f790],0x0    ; 004f48f6
    MOV byte ptr [EBX + 0x1f7f4],0x0    ; 004f48fd
    MOV byte ptr [EBX + 0x1f858],0x0    ; 004f4904
    MOV byte ptr [EBX + 0x1f8bc],0x0    ; 004f490b
    MOV byte ptr [EBX + 0x1f920],0x0    ; 004f4912
    MOV byte ptr [EBX + 0x1f984],0x0    ; 004f4919
    MOV dword ptr [EBX + 0x1fae8],0x0   ; 004f4920
    MOV dword ptr [EBX + 0x1faec],0x0   ; 004f492a
    MOV dword ptr [EBX + 0x1fadc],0x0   ; 004f4934
    MOV byte ptr [EBX + 0x2448],0x0     ; 004f493e
    MOV byte ptr [EBX + 0x1f9e8],0x0    ; 004f4945
    MOV byte ptr [EBX + 0x1fa4c],0x0    ; 004f494c
    MOV EAX,EBX                         ; 004f4953
    MOV dword ptr [EBX + 0x2444],0x1    ; 004f4955
    POP EDI                             ; 004f495f
    POP ESI                             ; 004f4960
    POP EBX                             ; 004f4961
    RET                                 ; 004f4962

