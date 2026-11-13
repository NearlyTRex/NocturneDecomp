; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_negateFirstComponent_FUN_00593c00(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 at 005460db
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0 at 005465be
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 at 005454bd
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593c00
        ;   Label: core_xform.cpp_negateFirstComponent_FUN_00593c00
    SUB ESP,0x10                        ; 00593c01
    MOV ECX,dword ptr [ESP + 0x18]      ; 00593c04
    MOV EDX,ESI                         ; 00593c08
    FLD float ptr [ECX]                 ; 00593c0a
    MOV EAX,dword ptr [ECX + 0x4]       ; 00593c0c
    MOV EDI,ESI                         ; 00593c0f
    MOV dword ptr [ESP + 0x4],EAX       ; 00593c11
    MOV EAX,dword ptr [ECX + 0x8]       ; 00593c15
    FCHS                                ; 00593c18
    MOV dword ptr [ESP + 0x8],EAX       ; 00593c1a
    MOV EAX,dword ptr [ECX + 0xc]       ; 00593c1e
    MOV ESI,ESP                         ; 00593c21
    MOV dword ptr [ESP + 0xc],EAX       ; 00593c23
    FSTP float ptr [ESP]                ; 00593c27
    MOVSD ES:EDI,ESI                    ; 00593c2a
    MOVSD ES:EDI,ESI                    ; 00593c2b
    MOVSD ES:EDI,ESI                    ; 00593c2c
    MOVSD ES:EDI,ESI                    ; 00593c2d
    MOV EAX,EDX                         ; 00593c2e
    ADD ESP,0x10                        ; 00593c30
    POP EDI                             ; 00593c33
    RET                                 ; 00593c34

