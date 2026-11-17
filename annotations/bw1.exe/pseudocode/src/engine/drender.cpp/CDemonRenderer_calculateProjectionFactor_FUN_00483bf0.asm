; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_00483bf0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 at 005554fa
;
; Referenced Globals:
;   double g_ProjectionDivisorFactor = 18
;   double g_ProjectionMultiplierFactor = 65536
;   int g_ProjectionScale = 0x10000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00483bf0
        ;   Label: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_00483bf0
    FILD dword ptr [0x0061b4c4]         ; 00483bf3 | g_ProjectionScale
    FDIVR double ptr [0x005db3dc]       ; 00483bf9 | g_ProjectionDivisorFactor
    FMUL double ptr [0x005db3e4]        ; 00483bff | g_ProjectionMultiplierFactor
    FSTP float ptr [ESP]                ; 00483c05
    MOV EAX,dword ptr [ESP]             ; 00483c08
    ADD ESP,0x4                         ; 00483c0b
    RET                                 ; 00483c0e

