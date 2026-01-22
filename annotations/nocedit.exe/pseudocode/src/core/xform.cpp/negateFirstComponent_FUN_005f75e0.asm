; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   vector_in
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 at 0059f175
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 at 0059f65b
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 at 0059ea44
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f75e0
        ;   Label: core_xform.cpp_negateFirstComponent_FUN_005f75e0
    SUB ESP,0x10                        ; 005f75e1
    MOV ECX,dword ptr [ESP + 0x18]      ; 005f75e4
    MOV EDX,ESI                         ; 005f75e8
    FLD float ptr [ECX]                 ; 005f75ea
    MOV EAX,dword ptr [ECX + 0x4]       ; 005f75ec
    MOV EDI,ESI                         ; 005f75ef
    MOV dword ptr [ESP + 0x4],EAX       ; 005f75f1
    MOV EAX,dword ptr [ECX + 0x8]       ; 005f75f5
    FCHS                                ; 005f75f8
    MOV dword ptr [ESP + 0x8],EAX       ; 005f75fa
    MOV EAX,dword ptr [ECX + 0xc]       ; 005f75fe
    MOV ESI,ESP                         ; 005f7601
    MOV dword ptr [ESP + 0xc],EAX       ; 005f7603
    FSTP float ptr [ESP]                ; 005f7607
    MOVSD ES:EDI,ESI                    ; 005f760a
    MOVSD ES:EDI,ESI                    ; 005f760b
    MOVSD ES:EDI,ESI                    ; 005f760c
    MOVSD ES:EDI,ESI                    ; 005f760d
    MOV EAX,EDX                         ; 005f760e
    ADD ESP,0x10                        ; 005f7610
    POP EDI                             ; 005f7613
    RET                                 ; 005f7614

