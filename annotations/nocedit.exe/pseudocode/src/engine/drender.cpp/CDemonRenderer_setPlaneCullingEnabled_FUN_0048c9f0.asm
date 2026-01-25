; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[7]:
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 at 00421135
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 at 00477a99
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 004828d5
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50 at 0050a161
;   core_path.cpp_FUN_00547fc0 at 005480c1
;   core_trigger.cpp_CTrigger_FUN_005e00d0 at 005e0569
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 at 0048ca30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048c9f0
        ;   Label: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048c9f4
    MOV dword ptr [EDX + 0xc],EAX       ; 0048c9f8
    RET                                 ; 0048c9fb

