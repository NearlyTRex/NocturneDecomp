; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer *this_ptr,CVector3f *point_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[14]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 at 0044d85e
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d097
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 004628b8
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 at 004f930a
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fea3b
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0 at 005188b0
;   core_moon.cpp_CMoon_render_FUN_00521e40 at 00521ee2
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 at 0055559f
;   core_set.cpp_FUN_00550da0 at 005510ce
;   core_setdir.cpp_FUN_00559f80 at 0055a970
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005db35c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_matrix.c_setCameraOrigin_FUN_00509000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004834b0
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
    SUB ESP,0x8                         ; 004834b1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004834b4
    FLD double ptr [0x005db35c]         ; 004834b8 | DAT_005db35c
    FLD float ptr [EAX + 0x8]           ; 004834be
    FMUL ST1                            ; 004834c1
    FLD float ptr [EAX + 0x4]           ; 004834c3
    FMUL ST2                            ; 004834c6
    FLD float ptr [EAX]                 ; 004834c8
    FMULP ST3                           ; 004834ca
    FXCH                                ; 004834cc
    CALL crt_math.c_round_FUN_005c03a0  ; 004834ce
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004834d3
    CALL crt_math.c_round_FUN_005c03a0  ; 004834d5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004834da
    FISTP dword ptr [ESP]               ; 004834dc
    FISTP dword ptr [ESP + 0x4]         ; 004834df
    MOV EDX,dword ptr [ESP]             ; 004834e3
    MOV ECX,dword ptr [ESP + 0x4]       ; 004834e6
    PUSH EDX                            ; 004834ea
    CALL crt_math.c_round_FUN_005c03a0  ; 004834eb
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 004834f0
    FISTP dword ptr [ESP + 0xc]         ; 004834f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004834f5
    PUSH EBX                            ; 004834f9
    CALL engine_matrix.c_setCameraOrigin_FUN_00509000 ; 004834fa
        ;   XREF to: 00509000 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_00509000(int x, int y, int z)
    ADD ESP,0xc                         ; 004834ff
    ADD ESP,0x8                         ; 00483502
    POP EBX                             ; 00483505
    RET                                 ; 00483506

