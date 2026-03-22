; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f *vector_in,CQuaternion4f *vector_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   vector_in
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
    JMP 0x00604c81                      ; 005f760a
        ;   XREF to: 00604c81 (UNCONDITIONAL_JUMP)  ; LAB_00604c81
    ADD ESP,0x10                        ; 005f7610
        ;   Label: LAB_005f7610
    POP EDI                             ; 005f7613
    RET                                 ; 005f7614
    MOV ECX,dword ptr [ESI]             ; 00604c81
        ;   Label: LAB_00604c81
    MOV dword ptr [EDI],ECX             ; 00604c83
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604c85
    MOV dword ptr [EDI + 0x4],ECX       ; 00604c88
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604c8b
    MOV dword ptr [EDI + 0x8],ECX       ; 00604c8e
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604c91
    MOV dword ptr [EDI + 0xc],ECX       ; 00604c94
    ADD ESI,0x10                        ; 00604c97
    ADD EDI,0x10                        ; 00604c9a
    MOV EAX,EDX                         ; 00604c9d
    JMP 0x005f7610                      ; 00604c9f
        ;   XREF to: 005f7610 (UNCONDITIONAL_JUMP)  ; LAB_005f7610

