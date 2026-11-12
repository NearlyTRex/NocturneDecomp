; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_replaceWWithDepth_FUN_0053dd20(int param_1,int param_2)
;
;
; XREF[9]:
;   core_dpart.cpp_FUN_0047ab00 at 0047ae77
;   core_flies.cpp_CFlies_renderOpaque_FUN_004c0080 at 004c046b
;   core_zombie.cpp_FUN_005bf120 at 005bf447
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 at 00484122
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0 at 00485019
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 at 0053f95f
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120 at 0053e384
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080 at 0053f3df
;   engine_zraster.c_rasterizePolygonCustom_FUN_005bf640 at 005bf927
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dd20
        ;   Label: engine_prim.c_replaceWWithDepth_FUN_0053dd20
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053dd21
    XOR EDX,EDX                         ; 0053dd25
    TEST EBX,EBX                        ; 0053dd27
    JLE 0x0053dd45                      ; 0053dd29
        ;   XREF to: 0053dd45 (CONDITIONAL_JUMP)  ; LAB_0053dd45
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053dd2b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053dd2f
        ;   Label: LAB_0053dd2f
    TEST ECX,ECX                        ; 0053dd32
    JNZ 0x0053dd47                      ; 0053dd34
        ;   XREF to: 0053dd47 (CONDITIONAL_JUMP)  ; LAB_0053dd47
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0053dd36
    INC EDX                             ; 0053dd3d
    ADD EAX,0x30                        ; 0053dd3e
    CMP EDX,EBX                         ; 0053dd41
    JL 0x0053dd2f                       ; 0053dd43
        ;   XREF to: 0053dd2f (CONDITIONAL_JUMP)  ; LAB_0053dd2f
    POP EBX                             ; 0053dd45
        ;   Label: LAB_0053dd45
    RET                                 ; 0053dd46
    MOV ECX,dword ptr [EAX + 0xc]       ; 0053dd47
        ;   Label: LAB_0053dd47
    MOV dword ptr [EAX + 0x8],ECX       ; 0053dd4a
    INC EDX                             ; 0053dd4d
    ADD EAX,0x30                        ; 0053dd4e
    CMP EDX,EBX                         ; 0053dd51
    JL 0x0053dd2f                       ; 0053dd53
        ;   XREF to: 0053dd2f (CONDITIONAL_JUMP)  ; LAB_0053dd2f
    POP EBX                             ; 0053dd55
    RET                                 ; 0053dd56

