; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046b6f0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 at 0053424a
;
; Referenced Globals:
;   double g_DOUBLE_005d15e3 = 18
;   double g_DOUBLE_005d15eb = 65536
;   int g_INT_006141e4 = 0x10000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046b6f0
        ;   Label: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046b6f0
    FILD dword ptr [0x006141e4]         ; 0046b6f3 | g_INT_006141e4
    FDIVR double ptr [0x005d15e3]       ; 0046b6f9 | g_DOUBLE_005d15e3
    FMUL double ptr [0x005d15eb]        ; 0046b6ff | g_DOUBLE_005d15eb
    FSTP float ptr [ESP]                ; 0046b705
    MOV EAX,dword ptr [ESP]             ; 0046b708
    ADD ESP,0x4                         ; 0046b70b
    RET                                 ; 0046b70e

