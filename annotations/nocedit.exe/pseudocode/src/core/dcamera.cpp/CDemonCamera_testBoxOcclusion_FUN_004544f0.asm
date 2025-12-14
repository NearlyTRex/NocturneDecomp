; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0(CDemonCamera * this_ptr, CVector3i * corners)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   corners
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 DAT_00688044
;   SCameraViewportState g_BackgroundSavedCameraState
;   SCameraViewportState g_SavedCameraState
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_00570df0
;   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004544f0
        ;   Label: core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0
    PUSH ESI                            ; 004544f1
    PUSH EDI                            ; 004544f2
    PUSH EBP                            ; 004544f3
    SUB ESP,0x28                        ; 004544f4
    MOV EBP,dword ptr [ESP + 0x40]      ; 004544f7
    PUSH 0x15c4184                      ; 004544fb | g_SavedCameraState
    MOV EDX,dword ptr [0x006703ec]      ; 00454500 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EDX                            ; 00454506 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20 ; 00454507
        ;   XREF to: 0048de20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
    ADD ESP,0x8                         ; 0045450c
    PUSH 0x151be98                      ; 0045450f | g_BackgroundSavedCameraState
    MOV ECX,dword ptr [0x006703ec]      ; 00454514 | g_CDemonRendererInstance | g_CDemonRendererPtr
    MOV EDI,0x688014                    ; 0045451a | g_RenderVertexBuffer
    PUSH ECX                            ; 0045451f | g_CDemonRendererInstance
    MOV ESI,EBP                         ; 00454520
    ADD EBP,0x60                        ; 00454522
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0 ; 00454525
        ;   XREF to: 0048dcc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
    ADD ESP,0x8                         ; 0045452a
    PUSH ESI                            ; 0045452d
        ;   Label: LAB_0045452d
    PUSH EDI                            ; 0045452e | g_RenderVertexBuffer | DAT_00688044
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 0045452f
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESI,0xc                         ; 00454534
    ADD ESP,0x8                         ; 00454537
    ADD EDI,0x30                        ; 0045453a
    CMP ESI,EBP                         ; 0045453d
    JNZ 0x0045452d                      ; 0045453f
        ;   XREF to: 0045452d (CONDITIONAL_JUMP)  ; LAB_0045452d
    MOV EBX,0x4                         ; 00454541
    PUSH 0x1                            ; 00454546
    MOV EDX,dword ptr [0x006703ec]      ; 00454548 | g_CDemonRendererInstance | g_CDemonRendererPtr
    XOR ESI,EBP                         ; 0045454e
    XOR EDI,EDI                         ; 00454550
    MOV EBP,0x2                         ; 00454552
    MOV dword ptr [ESP + 0x8],EBX       ; 00454557
    MOV dword ptr [ESP + 0x18],ESI      ; 0045455b
    MOV dword ptr [ESP + 0x14],EDI      ; 0045455f
    PUSH EDX                            ; 00454563 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x14],EDI      ; 00454564
    MOV dword ptr [ESP + 0x10],EDI      ; 00454568
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0045456c
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 00454571
    ADD ESP,0x8                         ; 00454575
    XOR ESI,ESI                         ; 00454578
    MOV dword ptr [ESP + 0x18],EDI      ; 0045457a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045457e
    PUSH EAX                            ; 00454582
    MOV EAX,[0x006810c8]                ; 00454583 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDI,0x6                         ; 00454588
    PUSH EAX                            ; 0045458d | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x2c],EBP      ; 0045458e
    MOV dword ptr [ESP + 0x28],EDI      ; 00454592
    CALL core_set.cpp_CDemonSet_FUN_00570df0 ; 00454596
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 0045459b
    TEST EAX,EAX                        ; 0045459e
    JZ 0x004545d6                       ; 004545a0
        ;   XREF to: 004545d6 (CONDITIONAL_JUMP)  ; LAB_004545d6
    MOV ESI,0x1                         ; 004545a2
        ;   Label: LAB_004545a2
    PUSH 0x0                            ; 004545a7
        ;   Label: LAB_004545a7
    MOV ECX,dword ptr [0x006703ec]      ; 004545a9 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH ECX                            ; 004545af | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 004545b0
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004545b5
    PUSH 0x15c4184                      ; 004545b8 | g_SavedCameraState
    MOV EBX,dword ptr [0x006703ec]      ; 004545bd | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EBX                            ; 004545c3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0 ; 004545c4
        ;   XREF to: 0048dcc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
    ADD ESP,0x8                         ; 004545c9
    MOV EAX,ESI                         ; 004545cc
    ADD ESP,0x28                        ; 004545ce
    POP EBP                             ; 004545d1
    POP EDI                             ; 004545d2
    POP ESI                             ; 004545d3
    POP EBX                             ; 004545d4
    RET                                 ; 004545d5
    MOV EDX,0x1                         ; 004545d6
        ;   Label: LAB_004545d6
    MOV ECX,0x3                         ; 004545db
    MOV EBX,0x7                         ; 004545e0
    MOV EDI,0x5                         ; 004545e5
    MOV EAX,ESP                         ; 004545ea
    MOV EBP,dword ptr [0x006810c8]      ; 004545ec | g_CDemonSetPtr
    PUSH EAX                            ; 004545f2
    MOV dword ptr [ESP + 0x1c],EDX      ; 004545f3
    MOV dword ptr [ESP + 0x20],ECX      ; 004545f7
    PUSH EBP                            ; 004545fb | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EBX      ; 004545fc
    MOV dword ptr [ESP + 0x2c],EDI      ; 00454600
    CALL core_set.cpp_CDemonSet_FUN_00570df0 ; 00454604
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00454609
    TEST EAX,EAX                        ; 0045460c
    JNZ 0x004545a2                      ; 0045460e
        ;   XREF to: 004545a2 (CONDITIONAL_JUMP)  ; LAB_004545a2
    MOV EDX,0x1                         ; 00454610
    MOV dword ptr [ESP + 0x18],EAX      ; 00454615
    MOV EAX,ESP                         ; 00454619
    MOV dword ptr [ESP + 0x20],EDI      ; 0045461b
    PUSH EAX                            ; 0045461f
    MOV EDI,dword ptr [0x006810c8]      ; 00454620 | g_CDemonSetPtr
    MOV EBX,0x4                         ; 00454626
    PUSH EDI                            ; 0045462b | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDX      ; 0045462c
    MOV dword ptr [ESP + 0x2c],EBX      ; 00454630
    CALL core_set.cpp_CDemonSet_FUN_00570df0 ; 00454634
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00454639
    TEST EAX,EAX                        ; 0045463c
    JNZ 0x004545a2                      ; 0045463e
        ;   XREF to: 004545a2 (CONDITIONAL_JUMP)  ; LAB_004545a2
    MOV EBP,0x2                         ; 00454644
    MOV EAX,0x6                         ; 00454649
    MOV EDX,0x7                         ; 0045464e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00454653
    MOV EAX,ESP                         ; 00454657
    MOV ECX,0x3                         ; 00454659
    PUSH EAX                            ; 0045465e
    MOV EBX,dword ptr [0x006810c8]      ; 0045465f | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBP      ; 00454665
    PUSH EBX                            ; 00454669 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDX      ; 0045466a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0045466e
    CALL core_set.cpp_CDemonSet_FUN_00570df0 ; 00454672
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00454677
    TEST EAX,EAX                        ; 0045467a
    JNZ 0x004545a2                      ; 0045467c
        ;   XREF to: 004545a2 (CONDITIONAL_JUMP)  ; LAB_004545a2
    MOV dword ptr [ESP + 0x20],0x3      ; 00454682
    MOV EAX,ESP                         ; 0045468a
    MOV EDX,0x1                         ; 0045468c
    PUSH EAX                            ; 00454691
    MOV ECX,dword ptr [0x006810c8]      ; 00454692 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00454698
    PUSH ECX                            ; 0045469c | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EBP      ; 0045469d
    MOV dword ptr [ESP + 0x2c],EDX      ; 004546a1
    CALL core_set.cpp_CDemonSet_FUN_00570df0 ; 004546a5
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004546aa
    TEST EAX,EAX                        ; 004546ad
    JNZ 0x004545a2                      ; 004546af
        ;   XREF to: 004545a2 (CONDITIONAL_JUMP)  ; LAB_004545a2
    MOV EBX,0x4                         ; 004546b5
    MOV EAX,0x6                         ; 004546ba
    MOV EDI,0x5                         ; 004546bf
    MOV dword ptr [ESP + 0x24],EAX      ; 004546c4
    MOV EAX,ESP                         ; 004546c8
    MOV EBP,0x7                         ; 004546ca
    PUSH EAX                            ; 004546cf
    MOV EDX,dword ptr [0x006810c8]      ; 004546d0 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBX      ; 004546d6
    PUSH EDX                            ; 004546da | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 004546db
    MOV dword ptr [ESP + 0x28],EBP      ; 004546df
    CALL core_set.cpp_CDemonSet_FUN_00570df0 ; 004546e3
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004546e8
    TEST EAX,EAX                        ; 004546eb
    JZ 0x004545a7                       ; 004546ed
        ;   XREF to: 004545a7 (CONDITIONAL_JUMP)  ; LAB_004545a7
    JMP 0x004545a2                      ; 004546f3
        ;   XREF to: 004545a2 (UNCONDITIONAL_JUMP)  ; LAB_004545a2

