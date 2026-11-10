; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[6]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0 at 0041ea54
;   core_box.cpp_FUN_0041dcd0 at 0041ddb1
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050 at 00461172
;   core_dpart.cpp_FUN_0046682e at 00466855
;   core_path.cpp_CPathMap_renderPathMap_FUN_0050c980 at 0050ca7e
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 at 0046d490
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d450
        ;   Label: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d454
    MOV dword ptr [EDX + 0xc],EAX       ; 0046d458
    RET                                 ; 0046d45b

