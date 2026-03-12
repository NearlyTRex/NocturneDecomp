; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_process_FUN_0054cc30(CPlatform *this_ptr,float delta_time)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x324]:1  local_324
; undefined1       Stack[-0x323]:1  local_323
; undefined1       Stack[-0x322]:1  local_322
; undefined1       Stack[-0x224]:1  local_224
; undefined1       Stack[-0x104]:1  local_104
; undefined1       Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_minecar.cpp_CMinecar_process_FUN_00520eb0 at 00520eba
;
; Referenced Globals:
;   void* switchdataD_0054cc10 = 0054cc81
;   double DOUBLE_0063f786 = -20
;   double DOUBLE_0063f78e = 10
;   double DOUBLE_0063f796 = 0.0500000000000000
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CEventList g_CEventListInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 DAT_032613d4
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;   undefined4 g_CDemonSetInstance.selected_camera_index
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0054df80
;   core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690
;   core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_0054e320
;   core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
;   core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cc30
        ;   Label: core_platfrm.cpp_CPlatform_process_FUN_0054cc30
    PUSH ESI                            ; 0054cc31
    PUSH EDI                            ; 0054cc32
    PUSH EBP                            ; 0054cc33
    MOV EBP,ESP                         ; 0054cc34
    SUB ESP,0x31c                       ; 0054cc36
    AND ESP,0xfffffff8                  ; 0054cc3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cc3f
    CMP dword ptr [EAX + 0x4c0],0x2     ; 0054cc42
    JGE 0x0054d681                      ; 0054cc49
        ;   XREF to: 0054d681 (CONDITIONAL_JUMP)  ; LAB_0054d681
    MOV EAX,dword ptr [EAX + 0x2dc]     ; 0054cc4f
    XOR EBX,EBX                         ; 0054cc55
    MOV dword ptr [ESP + 0x2fc],EAX     ; 0054cc57
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cc5e
    MOV dword ptr [ESP + 0x300],EBX     ; 0054cc61
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 0054cc68
    MOV dword ptr [ESP + 0x304],EBX     ; 0054cc6e
    CMP EAX,0x4                         ; 0054cc75
    JA 0x0054cccf                       ; 0054cc78
        ;   XREF to: 0054cccf (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x54cc10]  ; 0054cc7a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cc81
        ;   Label: caseD_0
    ADD EAX,0x3b8                       ; 0054cc84
    PUSH EAX                            ; 0054cc89
    MOV EAX,[0x006793d0]                ; 0054cc8a | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 0054cc8f | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054cc90
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054cc95
    TEST EAX,EAX                        ; 0054cc98
    JZ 0x0054ccc2                       ; 0054cc9a
        ;   XREF to: 0054ccc2 (CONDITIONAL_JUMP)  ; LAB_0054ccc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cc9c
    FLD float ptr [EAX + 0x2e8]         ; 0054cc9f
    FLD1                                ; 0054cca5
    FDIVRP                              ; 0054cca7
    SUB ESP,0x4                         ; 0054cca9
    FSTP float ptr [ESP]                ; 0054ccac
    PUSH 0x3f800000                     ; 0054ccaf
    PUSH EAX                            ; 0054ccb4
    MOV EBX,0x1                         ; 0054ccb5
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690 ; 0054ccba
        ;   XREF to: 0054d690 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0054ccbf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054ccc2
        ;   Label: LAB_0054ccc2
    MOV dword ptr [EAX + 0x2dc],0x0     ; 0054ccc5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cccf
        ;   Label: default
    CMP dword ptr [EAX + 0x4c8],0x0     ; 0054ccd2
    JZ 0x0054cdc9                       ; 0054ccd9
        ;   XREF to: 0054cdc9 (CONDITIONAL_JUMP)  ; LAB_0054cdc9
    TEST EBX,EBX                        ; 0054ccdf
    JZ 0x0054cdb0                       ; 0054cce1
        ;   XREF to: 0054cdb0 (CONDITIONAL_JUMP)  ; LAB_0054cdb0
    LEA EDI,[ESP + 0xc]                 ; 0054cce7
    LEA ESI,[EAX + 0x4cc]               ; 0054cceb
    LEA EBX,[ESP + 0xc]                 ; 0054ccf1
    PUSH EDI                            ; 0054ccf5
    MOV AL,byte ptr [ESI]               ; 0054ccf6
        ;   Label: LAB_0054ccf6
    MOV byte ptr [EDI],AL               ; 0054ccf8
    CMP AL,0x0                          ; 0054ccfa
    JZ 0x0054cd0e                       ; 0054ccfc
        ;   XREF to: 0054cd0e (CONDITIONAL_JUMP)  ; LAB_0054cd0e
    MOV AL,byte ptr [ESI + 0x1]         ; 0054ccfe
    ADD ESI,0x2                         ; 0054cd01
    MOV byte ptr [EDI + 0x1],AL         ; 0054cd04
    ADD EDI,0x2                         ; 0054cd07
    CMP AL,0x0                          ; 0054cd0a
    JNZ 0x0054ccf6                      ; 0054cd0c
        ;   XREF to: 0054ccf6 (CONDITIONAL_JUMP)  ; LAB_0054ccf6
    POP EDI                             ; 0054cd0e
        ;   Label: LAB_0054cd0e
    MOV CL,byte ptr [ESP + 0xc]         ; 0054cd0f
    LEA ESI,[ESP + 0xc]                 ; 0054cd13
    TEST CL,CL                          ; 0054cd17
    JZ 0x0054cd70                       ; 0054cd19
        ;   XREF to: 0054cd70 (CONDITIONAL_JUMP)  ; LAB_0054cd70
    CMP byte ptr [EBX],0x3b             ; 0054cd1b
        ;   Label: LAB_0054cd1b
    JNZ 0x0054d18b                      ; 0054cd1e
        ;   XREF to: 0054d18b (CONDITIONAL_JUMP)  ; LAB_0054d18b
    PUSH ESI                            ; 0054cd24
    MOV EDI,dword ptr [0x006810c8]      ; 0054cd25 | g_CDemonSetPtr
    PUSH EDI                            ; 0054cd2b | g_CDemonSetInstance
    MOV byte ptr [EBX],0x0              ; 0054cd2c
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 0054cd2f
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 0054cd34
    CMP EAX,-0x1                        ; 0054cd37
    JZ 0x0054d17a                       ; 0054cd3a
        ;   XREF to: 0054d17a (CONDITIONAL_JUMP)  ; LAB_0054d17a
    MOV EDX,dword ptr [0x006810c8]      ; 0054cd40 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDI,dword ptr [EDX + 0x15aea4]  ; 0054cd46 | g_CDemonSetInstance.selected_camera_index
    CMP EAX,EDI                         ; 0054cd4c
    JZ 0x0054d17a                       ; 0054cd4e
        ;   XREF to: 0054d17a (CONDITIONAL_JUMP)  ; LAB_0054d17a
    PUSH 0x4479c000                     ; 0054cd54
    PUSH EAX                            ; 0054cd59
    PUSH EDX                            ; 0054cd5a | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00 ; 0054cd5b
        ;   XREF to: 00575b00 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 0054cd60
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cd63
    MOV dword ptr [EAX + 0x728],0x0     ; 0054cd66
    PUSH ESI                            ; 0054cd70
        ;   Label: LAB_0054cd70
    MOV EAX,[0x006810c8]                ; 0054cd71 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0054cd76 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790 ; 0054cd77
        ;   XREF to: 0056b790 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 0054cd7c
    CMP EAX,-0x1                        ; 0054cd7f
    JZ 0x0054cdb0                       ; 0054cd82
        ;   XREF to: 0054cdb0 (CONDITIONAL_JUMP)  ; LAB_0054cdb0
    MOV EDX,dword ptr [0x006810c8]      ; 0054cd84 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EBX,dword ptr [EDX + 0x15aea4]  ; 0054cd8a | g_CDemonSetInstance.selected_camera_index
    CMP EAX,EBX                         ; 0054cd90
    JZ 0x0054cdb0                       ; 0054cd92
        ;   XREF to: 0054cdb0 (CONDITIONAL_JUMP)  ; LAB_0054cdb0
    PUSH 0x4479c000                     ; 0054cd94
    PUSH EAX                            ; 0054cd99
    PUSH EDX                            ; 0054cd9a | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00 ; 0054cd9b
        ;   XREF to: 00575b00 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 0054cda0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cda3
    MOV dword ptr [EAX + 0x728],0x0     ; 0054cda6
    CMP dword ptr [ESP + 0x300],0x0     ; 0054cdb0
        ;   Label: LAB_0054cdb0
    JZ 0x0054cdc9                       ; 0054cdb8
        ;   XREF to: 0054cdc9 (CONDITIONAL_JUMP)  ; LAB_0054cdc9
    MOV ECX,dword ptr [0x006810c8]      ; 0054cdba | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0054cdc0 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20 ; 0054cdc1
        ;   XREF to: 00575b20 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054cdc6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cdc9
        ;   Label: LAB_0054cdc9
    FLD float ptr [EAX + 0x2dc]         ; 0054cdcc
    FCOMP float ptr [ESP + 0x2fc]       ; 0054cdd2
    FNSTSW AX                           ; 0054cdd9
    SAHF                                ; 0054cddb
    JZ 0x0054d681                       ; 0054cddc
        ;   XREF to: 0054d681 (CONDITIONAL_JUMP)  ; LAB_0054d681
    CMP dword ptr [ESP + 0x304],0x0     ; 0054cde2
    JZ 0x0054d1c1                       ; 0054cdea
        ;   XREF to: 0054d1c1 (CONDITIONAL_JUMP)  ; LAB_0054d1c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cdf0
    CMP byte ptr [EAX + 0x4a8],0x0      ; 0054cdf3
    JZ 0x0054d1c1                       ; 0054cdfa
        ;   XREF to: 0054d1c1 (CONDITIONAL_JUMP)  ; LAB_0054d1c1
    MOV EDX,dword ptr [EAX + 0x4bc]     ; 0054ce00
    PUSH EDX                            ; 0054ce06
    MOV ECX,dword ptr [0x00681ef8]      ; 0054ce07 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 0054ce0d | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 0054ce0e
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0054ce13
    TEST EAX,EAX                        ; 0054ce16
    JZ 0x0054d19a                       ; 0054ce18
        ;   XREF to: 0054d19a (CONDITIONAL_JUMP)  ; LAB_0054d19a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054ce1e
        ;   Label: LAB_0054ce1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054ce21
    ADD EBX,0x30                        ; 0054ce24
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054ce27
    PUSH EBX                            ; 0054ce2a
    ADD ESI,0x20                        ; 0054ce2b
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054ce2e
    PUSH ESI                            ; 0054ce31
    MOV dword ptr [ESP + 0x310],EAX     ; 0054ce32
    LEA EAX,[ESP + 0x114]               ; 0054ce39
    PUSH EAX                            ; 0054ce40
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0054ce41
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054ce46
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054ce49
    PUSH EDI                            ; 0054ce4c
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0 ; 0054ce4d
        ;   XREF to: 0054cab0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0054ce52
    PUSH EBX                            ; 0054ce55
    PUSH ESI                            ; 0054ce56
    LEA EAX,[ESP + 0x234]               ; 0054ce57
    PUSH EAX                            ; 0054ce5e
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054ce5f
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054ce64
    LEA EDX,[ESP + 0x284]               ; 0054ce67
    PUSH EDX                            ; 0054ce6e
    MOV EAX,dword ptr [EDI + 0x154]     ; 0054ce6f
    PUSH EDI                            ; 0054ce75
    XOR ESI,ESI                         ; 0054ce76
    CALL dword ptr [EAX + 0x14]         ; 0054ce78
    ADD ESP,0x8                         ; 0054ce7b
    XOR EDI,EDI                         ; 0054ce7e
    MOV EAX,[0x006810c8]                ; 0054ce80 | g_CDemonSetPtr
        ;   Label: LAB_0054ce80
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 0054ce85 | g_CDemonSetInstance.character_count
    JL 0x0054d1df                       ; 0054ce8b
        ;   XREF to: 0054d1df (CONDITIONAL_JUMP)  ; LAB_0054d1df
    XOR EBX,EBX                         ; 0054ce91
    MOV dword ptr [ESP + 0x310],EBX     ; 0054ce93
    MOV dword ptr [ESP + 0x30c],EBX     ; 0054ce9a
    MOV EAX,[0x006810c8]                ; 0054cea1 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_0054cea1
    MOV EDX,dword ptr [ESP + 0x310]     ; 0054cea6
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 0054cead | g_CDemonSetInstance.actor_count
    JGE 0x0054d675                      ; 0054ceb3
        ;   XREF to: 0054d675 (CONDITIONAL_JUMP)  ; LAB_0054d675
    ADD EAX,dword ptr [ESP + 0x30c]     ; 0054ceb9
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 0054cec0 | g_CDemonSetInstance.actors[0] | DAT_032613d4
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054cec6
    CMP EDI,dword ptr [EBX + 0xdc]      ; 0054cec9
    JZ 0x0054d4fc                       ; 0054cecf
        ;   XREF to: 0054d4fc (CONDITIONAL_JUMP)  ; LAB_0054d4fc
    MOV ECX,dword ptr [ESP + 0x310]     ; 0054ced5
        ;   Label: LAB_0054ced5
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0054cedc
    INC ECX                             ; 0054cee3
    ADD EDX,0x4                         ; 0054cee4
    MOV dword ptr [ESP + 0x310],ECX     ; 0054cee7
    MOV dword ptr [ESP + 0x30c],EDX     ; 0054ceee
    JMP 0x0054cea1                      ; 0054cef5
        ;   XREF to: 0054cea1 (UNCONDITIONAL_JUMP)  ; LAB_0054cea1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cef7
        ;   Label: caseD_1
    ADD EAX,0x354                       ; 0054cefa
    PUSH EAX                            ; 0054ceff
    MOV ESI,dword ptr [0x006793d0]      ; 0054cf00 | g_CEventListPtr
    PUSH ESI                            ; 0054cf06 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054cf07
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054cf0c
    TEST EAX,EAX                        ; 0054cf0f
    JZ 0x0054cf36                       ; 0054cf11
        ;   XREF to: 0054cf36 (CONDITIONAL_JUMP)  ; LAB_0054cf36
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cf13
    FLD float ptr [EAX + 0x2ec]         ; 0054cf16
    FLD1                                ; 0054cf1c
    FDIVRP                              ; 0054cf1e
    SUB ESP,0x4                         ; 0054cf20
    FSTP float ptr [ESP]                ; 0054cf23
    PUSH 0x0                            ; 0054cf26
    PUSH EAX                            ; 0054cf28
    MOV EBX,0x1                         ; 0054cf29
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690 ; 0054cf2e
        ;   XREF to: 0054d690 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0054cf33
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cf36
        ;   Label: LAB_0054cf36
    MOV dword ptr [EAX + 0x2dc],0x3f800000 ; 0054cf39
    JMP 0x0054cccf                      ; 0054cf43
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cf48
        ;   Label: caseD_2
    ADD EAX,0x3b8                       ; 0054cf4b
    PUSH EAX                            ; 0054cf50
    MOV EDI,dword ptr [0x006793d0]      ; 0054cf51 | g_CEventListPtr
    PUSH EDI                            ; 0054cf57 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054cf58
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054cf5d
    TEST EAX,EAX                        ; 0054cf60
    JZ 0x0054cf8a                       ; 0054cf62
        ;   XREF to: 0054cf8a (CONDITIONAL_JUMP)  ; LAB_0054cf8a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cf64
    FLD float ptr [EAX + 0x2e8]         ; 0054cf67
    FLD1                                ; 0054cf6d
    FDIVRP                              ; 0054cf6f
    SUB ESP,0x4                         ; 0054cf71
    FSTP float ptr [ESP]                ; 0054cf74
    PUSH 0x3f800000                     ; 0054cf77
    PUSH EAX                            ; 0054cf7c
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690 ; 0054cf7d
        ;   XREF to: 0054d690 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0054cf82
    JMP 0x0054cccf                      ; 0054cf85
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cf8a
        ;   Label: LAB_0054cf8a
    ADD EAX,0x354                       ; 0054cf8d
    PUSH EAX                            ; 0054cf92
    MOV EAX,[0x006793d0]                ; 0054cf93 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 0054cf98 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054cf99
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054cf9e
    TEST EAX,EAX                        ; 0054cfa1
    JZ 0x0054cccf                       ; 0054cfa3
        ;   XREF to: 0054cccf (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cfa9
    FLD float ptr [EAX + 0x2ec]         ; 0054cfac
    FLD1                                ; 0054cfb2
    FDIVRP                              ; 0054cfb4
    SUB ESP,0x4                         ; 0054cfb6
    FSTP float ptr [ESP]                ; 0054cfb9
    PUSH 0x0                            ; 0054cfbc
    PUSH EAX                            ; 0054cfbe
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690 ; 0054cfbf
        ;   XREF to: 0054d690 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_0054d690(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0054cfc4
    JMP 0x0054cccf                      ; 0054cfc7
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cfcc
        ;   Label: caseD_3
    ADD EAX,0x41c                       ; 0054cfcf
    PUSH EAX                            ; 0054cfd4
    MOV EDI,dword ptr [0x006793d0]      ; 0054cfd5 | g_CEventListPtr
    PUSH EDI                            ; 0054cfdb | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054cfdc
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054cfe1
    TEST EAX,EAX                        ; 0054cfe4
    JZ 0x0054d01e                       ; 0054cfe6
        ;   XREF to: 0054d01e (CONDITIONAL_JUMP)  ; LAB_0054d01e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054cfe8
    MOV DH,byte ptr [EAX + 0x494]       ; 0054cfeb
    MOV dword ptr [EAX + 0x2d4],0x2     ; 0054cff1
    TEST DH,DH                          ; 0054cffb
    JZ 0x0054cccf                       ; 0054cffd
        ;   XREF to: 0054cccf (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x494                       ; 0054d003
    PUSH EAX                            ; 0054d008
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054d009
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 0054d00c
    PUSH ESI                            ; 0054d012
    CALL dword ptr [EDX + 0x24]         ; 0054d013
    ADD ESP,0x8                         ; 0054d016
    JMP 0x0054cccf                      ; 0054d019
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d01e
        ;   Label: LAB_0054d01e
    FLD float ptr [EBP + 0x18]          ; 0054d021
    FMUL float ptr [EAX + 0x2e4]        ; 0054d024
    FADD float ptr [EAX + 0x2dc]        ; 0054d02a
    FST float ptr [EAX + 0x2dc]         ; 0054d030
    FCOMP float ptr [EAX + 0x2e0]       ; 0054d036
    FNSTSW AX                           ; 0054d03c
    SAHF                                ; 0054d03e
    JBE 0x0054d0a2                      ; 0054d03f
        ;   XREF to: 0054d0a2 (CONDITIONAL_JUMP)  ; LAB_0054d0a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d041
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 0054d044
    MOV dword ptr [EAX + 0x2dc],EDX     ; 0054d04a
    FLD float ptr [EAX + 0x2dc]         ; 0054d050
    FLD1                                ; 0054d056
    FCOMPP                              ; 0054d058
    FNSTSW AX                           ; 0054d05a
    SAHF                                ; 0054d05c
    JA 0x0054d090                       ; 0054d05d
        ;   XREF to: 0054d090 (CONDITIONAL_JUMP)  ; LAB_0054d090
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d05f
    MOV EDX,dword ptr [EAX + 0x4c0]     ; 0054d062
    MOV dword ptr [EAX + 0x2d4],0x1     ; 0054d068
    TEST EDX,EDX                        ; 0054d072
    JZ 0x0054d080                       ; 0054d074
        ;   XREF to: 0054d080 (CONDITIONAL_JUMP)  ; LAB_0054d080
    MOV dword ptr [EAX + 0x4c0],0x2     ; 0054d076
    MOV dword ptr [ESP + 0x300],0x1     ; 0054d080
        ;   Label: LAB_0054d080
    JMP 0x0054cccf                      ; 0054d08b
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d090
        ;   Label: LAB_0054d090
    MOV dword ptr [EAX + 0x2d4],0x2     ; 0054d093
    JMP 0x0054cccf                      ; 0054d09d
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x304],0x1     ; 0054d0a2
        ;   Label: LAB_0054d0a2
    JMP 0x0054cccf                      ; 0054d0ad
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d0b2
        ;   Label: caseD_4
    ADD EAX,0x41c                       ; 0054d0b5
    PUSH EAX                            ; 0054d0ba
    MOV EDI,dword ptr [0x006793d0]      ; 0054d0bb | g_CEventListPtr
    PUSH EDI                            ; 0054d0c1 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054d0c2
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0054d0c7
    TEST EAX,EAX                        ; 0054d0ca
    JZ 0x0054d104                       ; 0054d0cc
        ;   XREF to: 0054d104 (CONDITIONAL_JUMP)  ; LAB_0054d104
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d0ce
    MOV DL,byte ptr [EAX + 0x494]       ; 0054d0d1
    MOV dword ptr [EAX + 0x2d4],0x2     ; 0054d0d7
    TEST DL,DL                          ; 0054d0e1
    JZ 0x0054cccf                       ; 0054d0e3
        ;   XREF to: 0054cccf (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x494                       ; 0054d0e9
    PUSH EAX                            ; 0054d0ee
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054d0ef
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 0054d0f2
    PUSH ESI                            ; 0054d0f8
    CALL dword ptr [EDX + 0x24]         ; 0054d0f9
    ADD ESP,0x8                         ; 0054d0fc
    JMP 0x0054cccf                      ; 0054d0ff
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d104
        ;   Label: LAB_0054d104
    FLD float ptr [EBP + 0x18]          ; 0054d107
    FMUL float ptr [EAX + 0x2e4]        ; 0054d10a
    FSUBR float ptr [EAX + 0x2dc]       ; 0054d110
    FST float ptr [EAX + 0x2dc]         ; 0054d116
    FCOMP float ptr [EAX + 0x2e0]       ; 0054d11c
    FNSTSW AX                           ; 0054d122
    SAHF                                ; 0054d124
    JNC 0x0054d0a2                      ; 0054d125
        ;   XREF to: 0054d0a2 (CONDITIONAL_JUMP)  ; LAB_0054d0a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d12b
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 0054d12e
    MOV dword ptr [EAX + 0x2dc],EDX     ; 0054d134
    FLD float ptr [EAX + 0x2dc]         ; 0054d13a
    FLDZ                                ; 0054d140
    FCOMPP                              ; 0054d142
    FNSTSW AX                           ; 0054d144
    SAHF                                ; 0054d146
    JC 0x0054d090                       ; 0054d147
        ;   XREF to: 0054d090 (CONDITIONAL_JUMP)  ; LAB_0054d090
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d14d
    MOV EDX,dword ptr [EAX + 0x4c0]     ; 0054d150
    MOV dword ptr [EAX + 0x2d4],EBX     ; 0054d156
    TEST EDX,EDX                        ; 0054d15c
    JZ 0x0054d16a                       ; 0054d15e
        ;   XREF to: 0054d16a (CONDITIONAL_JUMP)  ; LAB_0054d16a
    MOV dword ptr [EAX + 0x4c0],0x2     ; 0054d160
    MOV dword ptr [ESP + 0x300],0x1     ; 0054d16a
        ;   Label: LAB_0054d16a
    JMP 0x0054cccf                      ; 0054d175
        ;   XREF to: 0054cccf (UNCONDITIONAL_JUMP)  ; default
    INC EBX                             ; 0054d17a
        ;   Label: LAB_0054d17a
    MOV ESI,EBX                         ; 0054d17b
    CMP byte ptr [EBX],0x0              ; 0054d17d
    JNZ 0x0054cd1b                      ; 0054d180
        ;   XREF to: 0054cd1b (CONDITIONAL_JUMP)  ; LAB_0054cd1b
    JMP 0x0054cd70                      ; 0054d186
        ;   XREF to: 0054cd70 (UNCONDITIONAL_JUMP)  ; LAB_0054cd70
    INC EBX                             ; 0054d18b
        ;   Label: LAB_0054d18b
    CMP byte ptr [EBX],0x0              ; 0054d18c
    JNZ 0x0054cd1b                      ; 0054d18f
        ;   XREF to: 0054cd1b (CONDITIONAL_JUMP)  ; LAB_0054cd1b
    JMP 0x0054cd70                      ; 0054d195
        ;   XREF to: 0054cd70 (UNCONDITIONAL_JUMP)  ; LAB_0054cd70
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d19a
        ;   Label: LAB_0054d19a
    ADD EAX,0x4a8                       ; 0054d19d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054d1a2
    PUSH EAX                            ; 0054d1a5
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054d1a6
    MOV EDX,dword ptr [EDX + 0x154]     ; 0054d1a9
    PUSH EBX                            ; 0054d1af
    CALL dword ptr [EDX + 0x28]         ; 0054d1b0
    ADD ESP,0x8                         ; 0054d1b3
    MOV dword ptr [EBX + 0x4bc],EAX     ; 0054d1b6
    JMP 0x0054ce1e                      ; 0054d1bc
        ;   XREF to: 0054ce1e (UNCONDITIONAL_JUMP)  ; LAB_0054ce1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d1c1
        ;   Label: LAB_0054d1c1
    MOV ESI,dword ptr [EAX + 0x4bc]     ; 0054d1c4
    PUSH ESI                            ; 0054d1ca
    MOV EDI,dword ptr [0x00681ef8]      ; 0054d1cb | g_CSoundPtr
    PUSH EDI                            ; 0054d1d1 | g_CSoundInstance
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 0054d1d2
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0054d1d7
    JMP 0x0054ce1e                      ; 0054d1da
        ;   XREF to: 0054ce1e (UNCONDITIONAL_JUMP)  ; LAB_0054ce1e
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f09c] ; 0054d1df | g_CDemonSetInstance.characters[0]
        ;   Label: LAB_0054d1df
    PUSH EBX                            ; 0054d1e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054d1e7
    CALL dword ptr [EAX + 0x120]        ; 0054d1ed
    ADD ESP,0x4                         ; 0054d1f3
    TEST EAX,EAX                        ; 0054d1f6
    JG 0x0054d4f3                       ; 0054d1f8
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    PUSH EBX                            ; 0054d1fe
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054d1ff
    CALL dword ptr [EAX + 0x68]         ; 0054d205
    ADD ESP,0x4                         ; 0054d208
    TEST EAX,EAX                        ; 0054d20b
    JNZ 0x0054d4f3                      ; 0054d20d
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d213
    CMP dword ptr [EAX + 0x510],0x0     ; 0054d216
    JZ 0x0054d4ba                       ; 0054d21d
        ;   XREF to: 0054d4ba (CONDITIONAL_JUMP)  ; LAB_0054d4ba
    LEA EAX,[EBX + 0x20]                ; 0054d223
    PUSH EAX                            ; 0054d226
    LEA EAX,[ESP + 0x2e8]               ; 0054d227
    PUSH EAX                            ; 0054d22e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d22f
    PUSH EAX                            ; 0054d232
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0054d233
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0054d238
    FLD float ptr [ESP + 0x2e8]         ; 0054d23b
    FCOMP float ptr [ESP + 0x294]       ; 0054d242
    FNSTSW AX                           ; 0054d249
    SAHF                                ; 0054d24b
    JA 0x0054d4f3                       ; 0054d24c
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x288]         ; 0054d252
    FADD double ptr [0x0063f786]        ; 0054d259 | DOUBLE_0063f786
    FLD float ptr [ESP + 0x2e8]         ; 0054d25f
    FCOMPP                              ; 0054d266
    FNSTSW AX                           ; 0054d268
    SAHF                                ; 0054d26a
    JC 0x0054d4f3                       ; 0054d26b
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    LEA EAX,[ESP + 0x2e4]               ; 0054d271
    PUSH EAX                            ; 0054d278
    LEA EAX,[ESP + 0x2c4]               ; 0054d279
    PUSH EAX                            ; 0054d280
    LEA EAX,[ESP + 0x28c]               ; 0054d281
    PUSH EAX                            ; 0054d288
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550 ; 0054d289
        ;   XREF to: 00421550 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    ADD ESP,0xc                         ; 0054d28e
    FLD float ptr [ESP + 0x2e4]         ; 0054d291
    FSUB float ptr [ESP + 0x2c0]        ; 0054d298
    FST float ptr [ESP + 0x2f0]         ; 0054d29f
    FABS                                ; 0054d2a6
    FLD float ptr [ESP + 0x2ec]         ; 0054d2a8
    FLD float ptr [ESP + 0x2e8]         ; 0054d2af
    FSUB float ptr [ESP + 0x2c4]        ; 0054d2b6
    FXCH                                ; 0054d2bd
    FSUB float ptr [ESP + 0x2c8]        ; 0054d2bf
    FXCH                                ; 0054d2c6
    FSTP float ptr [ESP + 0x2f4]        ; 0054d2c8
    FSTP float ptr [ESP + 0x2f8]        ; 0054d2cf
    FCOMP double ptr [0x0063f78e]       ; 0054d2d6 | DOUBLE_0063f78e
    FNSTSW AX                           ; 0054d2dc
    SAHF                                ; 0054d2de
    JA 0x0054d4f3                       ; 0054d2df
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x2f8]         ; 0054d2e5
    FABS                                ; 0054d2ec
    FCOMP double ptr [0x0063f78e]       ; 0054d2ee | DOUBLE_0063f78e
    FNSTSW AX                           ; 0054d2f4
    SAHF                                ; 0054d2f6
    JA 0x0054d4f3                       ; 0054d2f7
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    LEA EAX,[ESP + 0x25c]               ; 0054d2fd
    XOR EDX,EDX                         ; 0054d304
    PUSH EAX                            ; 0054d306
    MOV dword ptr [ESP + 0x2f8],EDX     ; 0054d307
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 0054d30e
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0054d313
    LEA EAX,[ESP + 0x25c]               ; 0054d316
    XOR ECX,ECX                         ; 0054d31d
    PUSH EAX                            ; 0054d31f
    MOV dword ptr [ESP + 0x260],ECX     ; 0054d320
    PUSH EBX                            ; 0054d327
    MOV EDX,dword ptr [EBX + 0x154]     ; 0054d328
    CALL dword ptr [EDX + 0x34]         ; 0054d32e
    ADD ESP,0x8                         ; 0054d331
    CMP EAX,0x2                         ; 0054d334
    JNZ 0x0054d4f3                      ; 0054d337
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x2e8]         ; 0054d33d
    FADD float ptr [ESP + 0x270]        ; 0054d344
    FCOMP float ptr [ESP + 0x294]       ; 0054d34b
    FNSTSW AX                           ; 0054d352
    SAHF                                ; 0054d354
    JA 0x0054d4f3                       ; 0054d355
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x2e8]         ; 0054d35b
    FADD float ptr [ESP + 0x274]        ; 0054d362
    FCOMP float ptr [ESP + 0x288]       ; 0054d369
    FNSTSW AX                           ; 0054d370
    SAHF                                ; 0054d372
    JC 0x0054d4f3                       ; 0054d373
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x2f8]         ; 0054d379
    FMUL ST0                            ; 0054d380
    FLD float ptr [ESP + 0x2f0]         ; 0054d382
    FMUL ST0                            ; 0054d389
    FLD float ptr [ESP + 0x278]         ; 0054d38b
    FXCH                                ; 0054d392
    FADDP ST2,ST0                       ; 0054d394
    FMUL float ptr [ESP + 0x278]        ; 0054d396
    FXCH                                ; 0054d39d
    FSTP float ptr [ESP + 0x8]          ; 0054d39f
    FCOMP float ptr [ESP + 0x8]         ; 0054d3a3
    FNSTSW AX                           ; 0054d3a7
    SAHF                                ; 0054d3a9
    JC 0x0054d4f3                       ; 0054d3aa
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x8]           ; 0054d3b0
    FSQRT                               ; 0054d3b4
    FLDZ                                ; 0054d3b6
    FXCH                                ; 0054d3b8
    FST float ptr [ESP + 0x8]           ; 0054d3ba
    FSTP double ptr [ESP]               ; 0054d3be
    FCOMP double ptr [ESP]              ; 0054d3c1
    FNSTSW AX                           ; 0054d3c4
    SAHF                                ; 0054d3c6
    JNC 0x0054d4f3                      ; 0054d3c7
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    FLD float ptr [ESP + 0x278]         ; 0054d3cd
    FADD double ptr [0x0063f796]        ; 0054d3d4 | DOUBLE_0063f796
    FDIV double ptr [ESP]               ; 0054d3da
    FLD float ptr [ESP + 0x2f0]         ; 0054d3dd
    FXCH                                ; 0054d3e4
    FSTP float ptr [ESP + 0x314]        ; 0054d3e6
    FMUL float ptr [ESP + 0x314]        ; 0054d3ed
    FLD float ptr [ESP + 0x2f4]         ; 0054d3f4
    FMUL float ptr [ESP + 0x314]        ; 0054d3fb
    FLD float ptr [ESP + 0x2f8]         ; 0054d402
    FMUL float ptr [ESP + 0x314]        ; 0054d409
    LEA EAX,[ESP + 0x2d8]               ; 0054d410
    FLD float ptr [ESP + 0x2c0]         ; 0054d417
    PUSH EAX                            ; 0054d41e
    LEA EAX,[ESP + 0x2d0]               ; 0054d41f
    FLD float ptr [ESP + 0x2c8]         ; 0054d426
    PUSH EAX                            ; 0054d42d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054d42e
    FLD float ptr [ESP + 0x2d0]         ; 0054d431
    PUSH EAX                            ; 0054d438
    FXCH ST5                            ; 0054d439
    FSTP float ptr [ESP + 0x2fc]        ; 0054d43b
    FXCH ST3                            ; 0054d442
    FSTP float ptr [ESP + 0x300]        ; 0054d444
    FXCH                                ; 0054d44b
    FSTP float ptr [ESP + 0x304]        ; 0054d44d
    FADD float ptr [ESP + 0x2fc]        ; 0054d454
    FXCH                                ; 0054d45b
    FADD float ptr [ESP + 0x300]        ; 0054d45d
    FXCH ST2                            ; 0054d464
    FADD float ptr [ESP + 0x304]        ; 0054d466
    FXCH                                ; 0054d46d
    FSTP float ptr [ESP + 0x2e4]        ; 0054d46f
    FXCH                                ; 0054d476
    FSTP float ptr [ESP + 0x2e8]        ; 0054d478
    FSTP float ptr [ESP + 0x2ec]        ; 0054d47f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0054d486
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0054d48b
    MOV EAX,dword ptr [EBX + 0x24]      ; 0054d48e
    MOV dword ptr [ESP + 0x2d0],EAX     ; 0054d491
    LEA EAX,[EBX + 0x30]                ; 0054d498
    PUSH EAX                            ; 0054d49b
    LEA EAX,[ESP + 0x2d0]               ; 0054d49c
    PUSH EAX                            ; 0054d4a3
    MOV EDX,dword ptr [EBX + 0x154]     ; 0054d4a4
    PUSH EBX                            ; 0054d4aa
    CALL dword ptr [EDX + 0x60]         ; 0054d4ab
    ADD ESP,0xc                         ; 0054d4ae
    INC EDI                             ; 0054d4b1
    ADD ESI,0x4                         ; 0054d4b2
    JMP 0x0054ce80                      ; 0054d4b5
        ;   XREF to: 0054ce80 (UNCONDITIONAL_JUMP)  ; LAB_0054ce80
    FLD float ptr [EAX + 0x24]          ; 0054d4ba
        ;   Label: LAB_0054d4ba
    FCOMP float ptr [ESP + 0x308]       ; 0054d4bd
    FNSTSW AX                           ; 0054d4c4
    SAHF                                ; 0054d4c6
    JNC 0x0054d4f3                      ; 0054d4c7
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    PUSH EBX                            ; 0054d4c9
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054d4ca
    PUSH ECX                            ; 0054d4cd
    CALL core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0054df80 ; 0054d4ce
        ;   XREF to: 0054df80 (UNCONDITIONAL_CALL)  ; int core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0054df80(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054d4d3
    TEST EAX,EAX                        ; 0054d4d6
    JZ 0x0054d4f3                       ; 0054d4d8
        ;   XREF to: 0054d4f3 (CONDITIONAL_JUMP)  ; LAB_0054d4f3
    PUSH 0xbf800000                     ; 0054d4da
    PUSH 0x0                            ; 0054d4df
    PUSH 0x8                            ; 0054d4e1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054d4e3
    PUSH EBX                            ; 0054d4e9
    CALL dword ptr [EAX + 0xf0]         ; 0054d4ea
    ADD ESP,0x10                        ; 0054d4f0
    INC EDI                             ; 0054d4f3
        ;   Label: LAB_0054d4f3
    ADD ESI,0x4                         ; 0054d4f4
    JMP 0x0054ce80                      ; 0054d4f7
        ;   XREF to: 0054ce80 (UNCONDITIONAL_JUMP)  ; LAB_0054ce80
    LEA EAX,[EBX + 0x30]                ; 0054d4fc
        ;   Label: LAB_0054d4fc
    PUSH EAX                            ; 0054d4ff
    LEA EAX,[EBX + 0x20]                ; 0054d500
    PUSH EAX                            ; 0054d503
    MOV dword ptr [ESP + 0x320],EAX     ; 0054d504
    LEA EAX,[ESP + 0x174]               ; 0054d50b
    PUSH EAX                            ; 0054d512
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054d513
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054d518
    LEA EAX,[ESP + 0x10c]               ; 0054d51b
    PUSH EAX                            ; 0054d522
    LEA EAX,[ESP + 0x170]               ; 0054d523
    PUSH EAX                            ; 0054d52a
    LEA ESI,[ESP + 0x204]               ; 0054d52b
    LEA EDI,[ESP + 0x1d4]               ; 0054d532
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054d539
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0054d53e
    ADD ESP,0x8                         ; 0054d543
    LEA EAX,[ESP + 0x22c]               ; 0054d546
    LEA ESI,[ESP + 0x1fc]               ; 0054d54d
    PUSH EAX                            ; 0054d554
    LEA EAX,[ESP + 0x1d0]               ; 0054d555
    MOVSD.REP ES:EDI,ESI                ; 0054d55c
    PUSH EAX                            ; 0054d55e
    LEA ESI,[ESP + 0x1a4]               ; 0054d55f
    LEA EDI,[ESP + 0x144]               ; 0054d566
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054d56d
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0054d572
    LEA ESI,[ESP + 0x1a4]               ; 0054d577
    ADD ESP,0x8                         ; 0054d57e
    MOVSD.REP ES:EDI,ESI                ; 0054d581
    MOV EAX,dword ptr [ESP + 0x148]     ; 0054d583
    MOV dword ptr [ESP + 0x2b4],EAX     ; 0054d58a
    MOV EAX,dword ptr [ESP + 0x158]     ; 0054d591
    MOV dword ptr [ESP + 0x2b8],EAX     ; 0054d598
    MOV EAX,dword ptr [ESP + 0x168]     ; 0054d59f
    MOV dword ptr [ESP + 0x2bc],EAX     ; 0054d5a6
    LEA EAX,[ESP + 0x29c]               ; 0054d5ad
    PUSH EAX                            ; 0054d5b4
    LEA EAX,[ESP + 0x140]               ; 0054d5b5
    PUSH EAX                            ; 0054d5bc
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0054d5bd
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0054d5c2
    LEA EDX,[EBX + 0xe0]                ; 0054d5c5
    MOV EAX,dword ptr [ESP + 0x318]     ; 0054d5cb
    FLD float ptr [ESP + 0x2b4]         ; 0054d5d2
    FSUB float ptr [EAX]                ; 0054d5d9
    FLD float ptr [ESP + 0x2b8]         ; 0054d5db
    FXCH                                ; 0054d5e2
    FSTP float ptr [ESP + 0x2a8]        ; 0054d5e4
    FSUB float ptr [EAX + 0x4]          ; 0054d5eb
    FLD float ptr [ESP + 0x2bc]         ; 0054d5ee
    FXCH                                ; 0054d5f5
    FSTP float ptr [ESP + 0x2ac]        ; 0054d5f7
    FSUB float ptr [EAX + 0x8]          ; 0054d5fe
    LEA EAX,[ESP + 0x2a8]               ; 0054d601
    FSTP float ptr [ESP + 0x2b0]        ; 0054d608
    CMP EDX,EAX                         ; 0054d60f
    JZ 0x0054d630                       ; 0054d611
        ;   XREF to: 0054d630 (CONDITIONAL_JUMP)  ; LAB_0054d630
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0054d613
    MOV dword ptr [EDX],EAX             ; 0054d61a
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 0054d61c
    MOV dword ptr [EDX + 0x4],EAX       ; 0054d623
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 0054d626
    MOV dword ptr [EDX + 0x8],EAX       ; 0054d62d
    MOV dword ptr [EBX + 0xec],0x0      ; 0054d630
        ;   Label: LAB_0054d630
    MOV dword ptr [EBX + 0xf4],0x0      ; 0054d63a
    FLD float ptr [ESP + 0x2a0]         ; 0054d644
    FSUB float ptr [EBX + 0x34]         ; 0054d64b
    SUB ESP,0x4                         ; 0054d64e
    FSTP float ptr [ESP]                ; 0054d651
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0054d654
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x31c],EAX     ; 0054d659
    MOV EAX,dword ptr [ESP + 0x31c]     ; 0054d660
    MOV dword ptr [EBX + 0xf0],EAX      ; 0054d667
    ADD ESP,0x4                         ; 0054d66d
    JMP 0x0054ced5                      ; 0054d670
        ;   XREF to: 0054ced5 (UNCONDITIONAL_JUMP)  ; LAB_0054ced5
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054d675
        ;   Label: LAB_0054d675
    PUSH EBX                            ; 0054d678
    CALL core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_0054e320 ; 0054d679
        ;   XREF to: 0054e320 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_0054e320(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0054d67e
    MOV ESP,EBP                         ; 0054d681
        ;   Label: LAB_0054d681
    POP EBP                             ; 0054d683
    POP EDI                             ; 0054d684
    POP ESI                             ; 0054d685
    POP EBX                             ; 0054d686
    RET                                 ; 0054d687

