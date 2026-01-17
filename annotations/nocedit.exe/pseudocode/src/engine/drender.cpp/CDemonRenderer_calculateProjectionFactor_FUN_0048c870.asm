; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870(CDemonRenderer * this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 at 00570a5a
;
; Referenced Globals:
;   double g_ProjectionDivisorFactor = 18
;   double g_ProjectionMultiplierFactor = 65536
;   int g_ProjectionScale = 0x10000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048c870
        ;   Label: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
    FILD dword ptr [0x006793c0]         ; 0048c873 | g_ProjectionScale
    FDIVR double ptr [0x00622075]       ; 0048c879 | g_ProjectionDivisorFactor
    FMUL double ptr [0x0062207d]        ; 0048c87f | g_ProjectionMultiplierFactor
    FSTP float ptr [ESP]                ; 0048c885
    MOV EAX,dword ptr [ESP]             ; 0048c888
    ADD ESP,0x4                         ; 0048c88b
    RET                                 ; 0048c88e

