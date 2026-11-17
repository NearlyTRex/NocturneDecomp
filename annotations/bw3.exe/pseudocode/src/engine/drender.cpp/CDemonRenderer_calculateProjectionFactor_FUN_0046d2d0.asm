; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046d2d0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 at 0053ae8a
;
; Referenced Globals:
;   double g_ProjectionDivisorFactor = 18
;   double g_ProjectionMultiplierFactor = 65536
;   int g_ProjectionScale = 0x10000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046d2d0
        ;   Label: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046d2d0
    FILD dword ptr [0x005fba44]         ; 0046d2d3 | g_ProjectionScale
    FDIVR double ptr [0x005bc573]       ; 0046d2d9 | g_ProjectionDivisorFactor
    FMUL double ptr [0x005bc57b]        ; 0046d2df | g_ProjectionMultiplierFactor
    FSTP float ptr [ESP]                ; 0046d2e5
    MOV EAX,dword ptr [ESP]             ; 0046d2e8
    ADD ESP,0x4                         ; 0046d2eb
    RET                                 ; 0046d2ee

