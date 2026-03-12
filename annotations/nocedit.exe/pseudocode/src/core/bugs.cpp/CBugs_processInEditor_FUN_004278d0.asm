; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_processInEditor_FUN_004278d0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; CVector3f        Stack[-0x20]:12  local_20
; float *          Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_bugs.cpp_CBugs_applySwarmTranslation_FUN_004276c0
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0
;   core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00426420
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_004257f0
;   core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004278d0
        ;   Label: core_bugs.cpp_CBugs_processInEditor_FUN_004278d0
    PUSH ESI                            ; 004278d1
    PUSH EDI                            ; 004278d2
    PUSH EBP                            ; 004278d3
    MOV EBP,ESP                         ; 004278d4
    SUB ESP,0x1c                        ; 004278d6
    MOV EDI,dword ptr [EBP + 0x14]      ; 004278d9
    LEA EBX,[EDI + 0x20]                ; 004278dc
    MOV EAX,dword ptr [EBX]             ; 004278df
    MOV dword ptr [EBP + -0x1c],EAX     ; 004278e1
    LEA EAX,[EBX + 0x4]                 ; 004278e4
    MOV dword ptr [EBP + -0x4],EAX      ; 004278e7
    MOV EAX,dword ptr [EAX]             ; 004278ea
    LEA ESI,[EBX + 0x8]                 ; 004278ec
    MOV dword ptr [EBP + -0x18],EAX     ; 004278ef
    MOV EAX,dword ptr [ESI]             ; 004278f2
    PUSH EDI                            ; 004278f4
    MOV dword ptr [EBP + -0x14],EAX     ; 004278f5
    CALL core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800 ; 004278f8
        ;   XREF to: 0042f800 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800(CCharacter * this_ptr)
    LEA EAX,[EDI + 0x30]                ; 004278fd
    ADD ESP,0x4                         ; 00427900
    MOV dword ptr [EAX + 0x8],0x0       ; 00427903
    PUSH EDI                            ; 0042790a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042790b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042790e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00427911
    MOV dword ptr [EAX],EDX             ; 00427914
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00427916
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0042791b
    MOV dword ptr [EBP + -0x10],EAX     ; 0042791d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00427920
    MOV EAX,dword ptr [EAX]             ; 00427923
    MOV dword ptr [EBP + -0xc],EAX      ; 00427925
    MOV EAX,dword ptr [ESI]             ; 00427928
    MOV dword ptr [EBP + -0x8],EAX      ; 0042792a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0042792d
    MOV dword ptr [EBX],EAX             ; 00427930
    MOV EAX,dword ptr [EBP + -0x18]     ; 00427932
    MOV dword ptr [EBX + 0x4],EAX       ; 00427935
    MOV EAX,dword ptr [EBP + -0x14]     ; 00427938
    ADD ESP,0x4                         ; 0042793b
    MOV dword ptr [EBX + 0x8],EAX       ; 0042793e
    LEA EAX,[EBP + -0x10]               ; 00427941
    PUSH EAX                            ; 00427944
    PUSH EDI                            ; 00427945
    CALL core_bugs.cpp_CBugs_applySwarmTranslation_FUN_004276c0 ; 00427946
        ;   XREF to: 004276c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_applySwarmTranslation_FUN_004276c0(CBugs * this_ptr, CVector3f * new_position)
    ADD ESP,0x8                         ; 0042794b
    PUSH EDI                            ; 0042794e
    XOR ESI,ESI                         ; 0042794f
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_004257f0 ; 00427951
        ;   XREF to: 004257f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(CBugs * this_ptr)
    MOV EDX,dword ptr [EDI + 0xbec0]    ; 00427956
    ADD ESP,0x4                         ; 0042795c
    TEST EDX,EDX                        ; 0042795f
    JLE 0x004279a0                      ; 00427961
        ;   XREF to: 004279a0 (CONDITIONAL_JUMP)  ; LAB_004279a0
    LEA EBX,[EDI + 0xbec4]              ; 00427963
    PUSH 0x0                            ; 00427969
        ;   Label: LAB_00427969
    MOV EAX,[0x0067b654]                ; 0042796b | g_CGameInstance | g_CGamePtr
    SUB ESP,0x4                         ; 00427970
    MOV EDX,dword ptr [EAX + 0x264]     ; 00427973 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 00427979
    PUSH EBX                            ; 0042797c
    PUSH EDI                            ; 0042797d
    INC ESI                             ; 0042797e
    CALL core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00426420 ; 0042797f
        ;   XREF to: 00426420 (UNCONDITIONAL_CALL)  ; int core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00426420(CBugs * this_ptr, SBug * bug_data, float delta_time, CVector3f * dest_vertex)
    ADD EBX,0x40                        ; 00427984
    MOV ECX,dword ptr [EDI + 0xbec0]    ; 00427987
    ADD ESP,0x10                        ; 0042798d
    CMP ESI,ECX                         ; 00427990
    JL 0x00427969                       ; 00427992
        ;   XREF to: 00427969 (CONDITIONAL_JUMP)  ; LAB_00427969
    LEA EAX,[EAX]                       ; 00427994
    LEA EDX,[EDX]                       ; 0042799a
    PUSH EDI                            ; 004279a0
        ;   Label: LAB_004279a0
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0 ; 004279a1
        ;   XREF to: 004272f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004279a6
    MOV ESP,EBP                         ; 004279a9
    POP EBP                             ; 004279ab
    POP EDI                             ; 004279ac
    POP ESI                             ; 004279ad
    POP EBX                             ; 004279ae
    RET                                 ; 004279af

