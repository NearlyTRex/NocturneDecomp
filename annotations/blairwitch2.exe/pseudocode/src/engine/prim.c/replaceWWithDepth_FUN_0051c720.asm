; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_replaceWWithDepth_FUN_0051c720(int param_1,int param_2)
;
;
; XREF[9]:
;   core_dpart.cpp_FUN_004625f0 at 00462967
;   core_flies.cpp_CFlies_renderOpaque_FUN_004a70b0 at 004a749b
;   core_zombie.cpp_FUN_0059a0b0 at 0059a3d7
;   core_zombie.cpp_FUN_0059a5d0 at 0059a8b7
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 at 0046bc22
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 at 0046cb19
;   engine_prim.c_FUN_0051da80 at 0051ddf5
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0051e130 at 0051e36f
;   engine_prim.c_renderPolygonSoftware_FUN_0051cb20 at 0051cd84
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c720
        ;   Label: engine_prim.c_replaceWWithDepth_FUN_0051c720
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051c721
    XOR EDX,EDX                         ; 0051c725
    TEST EBX,EBX                        ; 0051c727
    JLE 0x0051c745                      ; 0051c729
        ;   XREF to: 0051c745 (CONDITIONAL_JUMP)  ; LAB_0051c745
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051c72b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051c72f
        ;   Label: LAB_0051c72f
    TEST ECX,ECX                        ; 0051c732
    JNZ 0x0051c747                      ; 0051c734
        ;   XREF to: 0051c747 (CONDITIONAL_JUMP)  ; LAB_0051c747
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0051c736
    INC EDX                             ; 0051c73d
    ADD EAX,0x30                        ; 0051c73e
    CMP EDX,EBX                         ; 0051c741
    JL 0x0051c72f                       ; 0051c743
        ;   XREF to: 0051c72f (CONDITIONAL_JUMP)  ; LAB_0051c72f
    POP EBX                             ; 0051c745
        ;   Label: LAB_0051c745
    RET                                 ; 0051c746
    MOV ECX,dword ptr [EAX + 0xc]       ; 0051c747
        ;   Label: LAB_0051c747
    MOV dword ptr [EAX + 0x8],ECX       ; 0051c74a
    INC EDX                             ; 0051c74d
    ADD EAX,0x30                        ; 0051c74e
    CMP EDX,EBX                         ; 0051c751
    JL 0x0051c72f                       ; 0051c753
        ;   XREF to: 0051c72f (CONDITIONAL_JUMP)  ; LAB_0051c72f
    POP EBX                             ; 0051c755
    RET                                 ; 0051c756

