; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[9]:
;   core_box.cpp_CBoundingBox3D_render_FUN_00421670 at 00421714
;   core_box.cpp_FUN_00420990 at 00420a71
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0 at 004674c2
;   core_dpart.cpp_FUN_00479f5e at 00479f85
;   core_inv.cpp_FUN_004f655e at 004f6acd
;   core_inv.cpp_FUN_004fae10 at 004fbd8b
;   core_manpuz.cpp_FUN_00505060 at 00505428
;   core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0 at 00534d9e
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 at 00483db0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00483d70
        ;   Label: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483d74
    MOV dword ptr [EDX + 0xc],EAX       ; 00483d78
    RET                                 ; 00483d7b

