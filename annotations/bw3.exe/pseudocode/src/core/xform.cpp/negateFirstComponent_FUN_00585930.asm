; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_negateFirstComponent_FUN_00585930(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 at 0054d30b
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0054d3f0 at 0054d7ee
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0 at 0054c6ed
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585930
        ;   Label: core_xform.cpp_negateFirstComponent_FUN_00585930
    SUB ESP,0x10                        ; 00585931
    MOV ECX,dword ptr [ESP + 0x18]      ; 00585934
    MOV EDX,ESI                         ; 00585938
    FLD float ptr [ECX]                 ; 0058593a
    MOV EAX,dword ptr [ECX + 0x4]       ; 0058593c
    MOV EDI,ESI                         ; 0058593f
    MOV dword ptr [ESP + 0x4],EAX       ; 00585941
    MOV EAX,dword ptr [ECX + 0x8]       ; 00585945
    FCHS                                ; 00585948
    MOV dword ptr [ESP + 0x8],EAX       ; 0058594a
    MOV EAX,dword ptr [ECX + 0xc]       ; 0058594e
    MOV ESI,ESP                         ; 00585951
    MOV dword ptr [ESP + 0xc],EAX       ; 00585953
    FSTP float ptr [ESP]                ; 00585957
    MOVSD ES:EDI,ESI                    ; 0058595a
    MOVSD ES:EDI,ESI                    ; 0058595b
    MOVSD ES:EDI,ESI                    ; 0058595c
    MOVSD ES:EDI,ESI                    ; 0058595d
    MOV EAX,EDX                         ; 0058595e
    ADD ESP,0x10                        ; 00585960
    POP EDI                             ; 00585963
    RET                                 ; 00585964

