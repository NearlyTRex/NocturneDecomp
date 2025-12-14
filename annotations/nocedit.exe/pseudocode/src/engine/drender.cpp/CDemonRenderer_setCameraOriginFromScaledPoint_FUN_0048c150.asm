; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   point_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[16]:
;   core_course.cpp_FUN_00443bc0 at 00443cf1
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c615
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472b18
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cd58
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004fefd4
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 005041cb
;   core_mirror.cpp_setupMirrorCamera_FUN_00521480 at 00521490
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 at 0052a2dd
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529ef7
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056ccae
;   ... and 6 more
;
; Referenced Globals:
;   double g_CameraScaleFactor = 256
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_matrix.c_setCameraOrigin_FUN_0050e270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c150
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
    SUB ESP,0x8                         ; 0048c151
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c154
    FLD double ptr [0x00621ff5]         ; 0048c158 | g_CameraScaleFactor
    FLD float ptr [EAX + 0x8]           ; 0048c15e
    FMUL ST1                            ; 0048c161
    FLD float ptr [EAX + 0x4]           ; 0048c163
    FMUL ST2                            ; 0048c166
    FLD float ptr [EAX]                 ; 0048c168
    FMULP ST3                           ; 0048c16a
    FXCH                                ; 0048c16c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c16e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0048c173
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c175
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0048c17a
    FISTP dword ptr [ESP]               ; 0048c17c
    FISTP dword ptr [ESP + 0x4]         ; 0048c17f
    MOV EDX,dword ptr [ESP]             ; 0048c183
    MOV ECX,dword ptr [ESP + 0x4]       ; 0048c186
    PUSH EDX                            ; 0048c18a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c18b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 0048c190
    FISTP dword ptr [ESP + 0xc]         ; 0048c191
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048c195
    PUSH EBX                            ; 0048c199
    CALL engine_matrix.c_setCameraOrigin_FUN_0050e270 ; 0048c19a
        ;   XREF to: 0050e270 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_0050e270(int x, int y, int z)
    ADD ESP,0xc                         ; 0048c19f
    ADD ESP,0x8                         ; 0048c1a2
    POP EBX                             ; 0048c1a5
    RET                                 ; 0048c1a6

