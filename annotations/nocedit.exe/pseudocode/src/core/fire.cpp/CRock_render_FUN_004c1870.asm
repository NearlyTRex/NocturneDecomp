; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRock_render_FUN_004c1870(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x20]:24  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1870
        ;   Label: core_fire.cpp_CRock_render_FUN_004c1870
    PUSH EBP                            ; 004c1871
    SUB ESP,0x18                        ; 004c1872
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c1875
    PUSH EBX                            ; 004c1879
    MOV EDX,dword ptr [0x006703ec]      ; 004c187a | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c1880 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c1881
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c1886
    PUSH 0x0                            ; 004c1889
    LEA EAX,[EBX + 0x38]                ; 004c188b
    PUSH EAX                            ; 004c188e
    MOV ECX,dword ptr [0x006703ec]      ; 004c188f | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c1895 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c1896
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EDX,dword ptr [EBX + 0x44]      ; 004c189b
    MOV EDX,dword ptr [EDX + 0x5690]    ; 004c189e
    ADD ESP,0xc                         ; 004c18a4
    MOV EAX,dword ptr [EDX]             ; 004c18a7
    MOV dword ptr [ESP],EAX             ; 004c18a9
    LEA EAX,[EDX + 0x4]                 ; 004c18ac
    MOV EAX,dword ptr [EAX]             ; 004c18af
    MOV dword ptr [ESP + 0x4],EAX       ; 004c18b1
    LEA EAX,[EDX + 0x8]                 ; 004c18b5
    MOV EAX,dword ptr [EAX]             ; 004c18b8
    MOV dword ptr [ESP + 0x8],EAX       ; 004c18ba
    MOV EAX,dword ptr [EDX + 0xc]       ; 004c18be
    ADD EDX,0xc                         ; 004c18c1
    MOV dword ptr [ESP + 0xc],EAX       ; 004c18c4
    LEA EAX,[EDX + 0x4]                 ; 004c18c8
    MOV EAX,dword ptr [EAX]             ; 004c18cb
    MOV dword ptr [ESP + 0x10],EAX      ; 004c18cd
    LEA EAX,[EDX + 0x8]                 ; 004c18d1
    MOV EAX,dword ptr [EAX]             ; 004c18d4
    MOV dword ptr [ESP + 0x14],EAX      ; 004c18d6
    MOV EAX,ESP                         ; 004c18da
    PUSH EAX                            ; 004c18dc
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004c18dd
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004c18e2
    TEST EAX,EAX                        ; 004c18e5
    JNZ 0x004c18fe                      ; 004c18e7
        ;   XREF to: 004c18fe (CONDITIONAL_JUMP)  ; LAB_004c18fe
    MOV EBP,dword ptr [0x006703ec]      ; 004c18e9 | g_CDemonRendererPtr2
        ;   Label: LAB_004c18e9
    PUSH EBP                            ; 004c18ef | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c18f0
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c18f5
    ADD ESP,0x18                        ; 004c18f8
    POP EBP                             ; 004c18fb
    POP EBX                             ; 004c18fc
    RET                                 ; 004c18fd
    PUSH EDI                            ; 004c18fe
        ;   Label: LAB_004c18fe
    PUSH ESI                            ; 004c18ff
    PUSH 0x0                            ; 004c1900
    LEA EAX,[ESP + 0x18]                ; 004c1902
    PUSH EAX                            ; 004c1906
    LEA EAX,[ESP + 0x10]                ; 004c1907
    PUSH EAX                            ; 004c190b
    PUSH 0x3f87558                      ; 004c190c | g_ZeroVector
    PUSH EBX                            ; 004c1911
    MOV ESI,dword ptr [0x006810c8]      ; 004c1912 | g_CDemonSetPtr
    PUSH ESI                            ; 004c1918 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380 ; 004c1919
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004c191e
    PUSH -0x1                           ; 004c1921
    PUSH 0x0                            ; 004c1923
    PUSH 0x0                            ; 004c1925
    MOV EDI,dword ptr [EBX + 0x44]      ; 004c1927
    PUSH EDI                            ; 004c192a
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 004c192b
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 004c1930
    POP ESI                             ; 004c1933
    POP EDI                             ; 004c1934
    JMP 0x004c18e9                      ; 004c1935
        ;   XREF to: 004c18e9 (UNCONDITIONAL_JUMP)  ; LAB_004c18e9

