; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_negateFirstComponent_FUN_005b7750(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_doc.cpp_FUN_0046f200 at 0046f48c
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 at 0056877b
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_00568860 at 00568c5e
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00567620 at 00567b5d
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b7750
        ;   Label: core_xform.cpp_negateFirstComponent_FUN_005b7750
    SUB ESP,0x10                        ; 005b7751
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b7754
    MOV EDX,ESI                         ; 005b7758
    FLD float ptr [ECX]                 ; 005b775a
    MOV EAX,dword ptr [ECX + 0x4]       ; 005b775c
    MOV EDI,ESI                         ; 005b775f
    MOV dword ptr [ESP + 0x4],EAX       ; 005b7761
    MOV EAX,dword ptr [ECX + 0x8]       ; 005b7765
    FCHS                                ; 005b7768
    MOV dword ptr [ESP + 0x8],EAX       ; 005b776a
    MOV EAX,dword ptr [ECX + 0xc]       ; 005b776e
    MOV ESI,ESP                         ; 005b7771
    MOV dword ptr [ESP + 0xc],EAX       ; 005b7773
    FSTP float ptr [ESP]                ; 005b7777
    MOVSD ES:EDI,ESI                    ; 005b777a
    MOVSD ES:EDI,ESI                    ; 005b777b
    MOVSD ES:EDI,ESI                    ; 005b777c
    MOVSD ES:EDI,ESI                    ; 005b777d
    MOV EAX,EDX                         ; 005b777e
    ADD ESP,0x10                        ; 005b7780
    POP EDI                             ; 005b7783
    RET                                 ; 005b7784

