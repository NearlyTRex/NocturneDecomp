; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00459d40(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dlight.cpp_renderConeLightGeometry_FUN_0044d060
;   unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459d40
        ;   Label: core_doc.cpp_CDoc_renderTransparent_FUN_00459d40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459d41
    FLD float ptr [EBX + 0x259b0]       ; 00459d45
    FLDZ                                ; 00459d4b
    FCOMPP                              ; 00459d4d
    FNSTSW AX                           ; 00459d4f
    SAHF                                ; 00459d51
    JC 0x00459d74                       ; 00459d52
        ;   XREF to: 00459d74 (CONDITIONAL_JUMP)  ; LAB_00459d74
    MOV EDX,dword ptr [EBX + 0x25698]   ; 00459d54
        ;   Label: LAB_00459d54
    TEST EDX,EDX                        ; 00459d5a
    JNZ 0x00459d96                      ; 00459d5c
        ;   XREF to: 00459d96 (CONDITIONAL_JUMP)  ; LAB_00459d96
    ADD EBX,0x154                       ; 00459d5e
        ;   Label: LAB_00459d5e
    PUSH EBX                            ; 00459d64
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290 ; 00459d65
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem * this_ptr)
    MOV EAX,0x1                         ; 00459d6a
    ADD ESP,0x4                         ; 00459d6f
    POP EBX                             ; 00459d72
    RET                                 ; 00459d73
    PUSH 0x40a00000                     ; 00459d74
        ;   Label: LAB_00459d74
    LEA EAX,[EBX + 0x2579c]             ; 00459d79
    PUSH 0x42000000                     ; 00459d7f
    PUSH EAX                            ; 00459d84
    LEA EAX,[EBX + 0x25790]             ; 00459d85
    PUSH EAX                            ; 00459d8b
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_0044d060 ; 00459d8c
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_0044d060(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 00459d91
    JMP 0x00459d54                      ; 00459d94
        ;   XREF to: 00459d54 (UNCONDITIONAL_JUMP)  ; LAB_00459d54
    MOV EAX,EDX                         ; 00459d96
        ;   Label: LAB_00459d96
    PUSH EAX                            ; 00459d98
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 00459d99
    CALL dword ptr [EDX + 0x1c]         ; 00459d9f
    ADD ESP,0x4                         ; 00459da2
    JMP 0x00459d5e                      ; 00459da5
        ;   XREF to: 00459d5e (UNCONDITIONAL_JUMP)  ; LAB_00459d5e

