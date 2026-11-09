; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[9]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041b700 at 0041b7a4
;   core_box.cpp_FUN_0041aa20 at 0041ab01
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0 at 0044e8f2
;   core_dpart.cpp_FUN_00461a4e at 00461a75
;   core_inv.cpp_FUN_004da130 at 004da69d
;   core_inv.cpp_FUN_004dd9b0 at 004de961
;   core_manpuz.cpp_FUN_004e63c0 at 004e6788
;   core_path.cpp_FUN_00513950 at 00513a4e
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 at 0046b8b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b870
        ;   Label: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b874
    MOV dword ptr [EDX + 0xc],EAX       ; 0046b878
    RET                                 ; 0046b87b

