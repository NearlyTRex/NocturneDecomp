; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9750
        ;   Label: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005e9750
    PUSH ESI                            ; 005e9751
    PUSH EDI                            ; 005e9752
    PUSH EBP                            ; 005e9753
    MOV EBP,ESP                         ; 005e9754
    SUB ESP,0x24                        ; 005e9756
    AND ESP,0xfffffff8                  ; 005e9759
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e975c
    LEA EAX,[EBX + 0x20]                ; 005e975f
    PUSH EAX                            ; 005e9762
    MOV EDX,dword ptr [0x006703ec]      ; 005e9763 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e9769 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005e976a
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005e976f
    PUSH 0x0                            ; 005e9772
    LEA ESI,[EBX + 0x30]                ; 005e9774
    PUSH ESI                            ; 005e9777
    MOV ECX,dword ptr [0x006703ec]      ; 005e9778 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e977e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e977f
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005e9784
    LEA EAX,[ESP + 0x8]                 ; 005e9787
    PUSH EAX                            ; 005e978b
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e978c
    PUSH EBX                            ; 005e9792
    CALL dword ptr [EDX + 0x14]         ; 005e9793
    ADD ESP,0x8                         ; 005e9796
    PUSH EAX                            ; 005e9799
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e979a
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e979f
    MOV EDI,dword ptr [0x006703ec]      ; 005e97a2 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005e97a8 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7e8],EAX     ; 005e97a9
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005e97af
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

