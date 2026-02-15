; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_calibrateGamepad_FUN_005104d0 at 005104ef
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   DWORD g_JoyXPos
;   DWORD g_JoyYPos
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0326f0e8
;   undefined4 DAT_0326f0ec
;   undefined4 DAT_0326f0f0
;   undefined4 DAT_0326f0f4
;   undefined4 DAT_0326f0f8
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a2c0
        ;   Label: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
    PUSH ESI                            ; 0052a2c1
    PUSH EDI                            ; 0052a2c2
    PUSH EBP                            ; 0052a2c3
    SUB ESP,0x24                        ; 0052a2c4
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0052a2c7
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0052a2cc
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
    PUSH 0x3f87558                      ; 0052a2d1 | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 0052a2d6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0052a2dc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 0052a2dd
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 0052a2e2
    MOV ECX,dword ptr [0x006703ec]      ; 0052a2e5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH 0x42600000                     ; 0052a2eb
    PUSH ECX                            ; 0052a2f0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 0052a2f1
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0052a2f6
    PUSH 0x3f87558                      ; 0052a2f9 | g_ZeroVector
    MOV EBX,dword ptr [0x006703ec]      ; 0052a2fe | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0052a304 | g_CDemonRendererInstance
    MOV EBP,0x42100000                  ; 0052a305
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 0052a30a
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
    ADD ESP,0x8                         ; 0052a30f
    LEA EAX,[ESP + 0x18]                ; 0052a312
    XOR ESI,ESI                         ; 0052a316
    PUSH EAX                            ; 0052a318
    MOV EAX,[0x006703ec]                ; 0052a319 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x1c],ESI      ; 0052a31e
    PUSH EAX                            ; 0052a322 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x24],ESI      ; 0052a323
    MOV dword ptr [ESP + 0x28],EBP      ; 0052a327
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0052a32b
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,[0x006810c8]                ; 0052a330 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae70],0x1  ; 0052a335 | DAT_0326f0e8
    MOV EAX,[0x02d051f8]                ; 0052a33f | g_JoyXPos
    ADD ESP,0x8                         ; 0052a344
    ADD EAX,0xffff8000                  ; 0052a347
    MOV dword ptr [ESP + 0xc],EAX       ; 0052a34c
    MOV EAX,[0x02d051fc]                ; 0052a350 | g_JoyYPos
    ADD EAX,0xffff8000                  ; 0052a355
    LEA EDI,[ESP + 0xc]                 ; 0052a35a
    MOV dword ptr [ESP + 0x10],EAX      ; 0052a35e
    LEA EAX,[ESP + 0xc]                 ; 0052a362
    MOV EDX,0x8000                      ; 0052a366
    PUSH EAX                            ; 0052a36b
    LEA ESI,[ESP + 0x4]                 ; 0052a36c
    MOV dword ptr [ESP + 0x18],EDX      ; 0052a370
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 0052a374
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x4]                 ; 0052a379
    ADD ESP,0x4                         ; 0052a37d
    MOVSD ES:EDI,ESI                    ; 0052a380
    MOVSD ES:EDI,ESI                    ; 0052a381
    MOVSD ES:EDI,ESI                    ; 0052a382
    MOV EDX,dword ptr [0x006810c8]      ; 0052a383 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052a389
    MOV dword ptr [EDX + 0x15ae74],EAX  ; 0052a38d | DAT_0326f0ec
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052a393
    MOV dword ptr [EDX + 0x15ae78],EAX  ; 0052a397 | DAT_0326f0f0
    PUSH 0x205                          ; 0052a39d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052a3a2
    PUSH 0x0                            ; 0052a3a6
    MOV dword ptr [EDX + 0x15ae7c],EAX  ; 0052a3a8 | DAT_0326f0f4
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052a3ae
    PUSH 0x0                            ; 0052a3b2
    ADD EAX,0x8                         ; 0052a3b4
    PUSH EAX                            ; 0052a3b7
    MOV dword ptr [EDX + 0x15ae80],0x280 ; 0052a3b8 | DAT_0326f0f8
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 0052a3c2
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags)
    MOV EAX,[0x006810c8]                ; 0052a3c7 | g_CDemonSetInstance | g_CDemonSetPtr
    ADD ESP,0x10                        ; 0052a3cc
    MOV dword ptr [EAX + 0x15ae70],0x0  ; 0052a3cf | DAT_0326f0e8
    ADD ESP,0x24                        ; 0052a3d9
    POP EBP                             ; 0052a3dc
    POP EDI                             ; 0052a3dd
    POP ESI                             ; 0052a3de
    POP EBX                             ; 0052a3df
    RET                                 ; 0052a3e0

