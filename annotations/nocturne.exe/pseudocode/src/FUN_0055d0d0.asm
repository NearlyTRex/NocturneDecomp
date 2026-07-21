; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d0d0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 at 0051c9f5
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0 at 0051cedb
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 at 0051be2b
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055d0d0
        ;   Label: FUN_0055d0d0
    SUB ESP,0x10                        ; 0055d0d1
    MOV ECX,dword ptr [ESP + 0x18]      ; 0055d0d4
    MOV EDX,ESI                         ; 0055d0d8
    FLD float ptr [ECX]                 ; 0055d0da
    MOV EAX,dword ptr [ECX + 0x4]       ; 0055d0dc
    MOV EDI,ESI                         ; 0055d0df
    MOV dword ptr [ESP + 0x4],EAX       ; 0055d0e1
    MOV EAX,dword ptr [ECX + 0x8]       ; 0055d0e5
    FCHS                                ; 0055d0e8
    MOV dword ptr [ESP + 0x8],EAX       ; 0055d0ea
    MOV EAX,dword ptr [ECX + 0xc]       ; 0055d0ee
    MOV ESI,ESP                         ; 0055d0f1
    MOV dword ptr [ESP + 0xc],EAX       ; 0055d0f3
    FSTP float ptr [ESP]                ; 0055d0f7
    MOVSD ES:EDI,ESI                    ; 0055d0fa
    MOVSD ES:EDI,ESI                    ; 0055d0fb
    MOVSD ES:EDI,ESI                    ; 0055d0fc
    MOVSD ES:EDI,ESI                    ; 0055d0fd
    MOV EAX,EDX                         ; 0055d0fe
    ADD ESP,0x10                        ; 0055d100
    POP EDI                             ; 0055d103
    RET                                 ; 0055d104

