; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(int param_1,int param_2,int param_3,uint param_4)
;
;
; XREF[5]:
;   FUN_00469ce0 at 0046a28f
;   FUN_0048f490 at 0048f76b
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0 at 0044b198
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70 at 0046af8a
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510 at 00518c67
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c02594
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460f20
        ;   Label: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
    PUSH ESI                            ; 00460f21
    MOV EBX,dword ptr [ESP + 0x14]      ; 00460f22
    MOV EDX,dword ptr [ESP + 0x18]      ; 00460f26
    MOV CL,byte ptr [0x01c0063c]        ; 00460f2a | DAT_01c0063c
    MOV ESI,EBX                         ; 00460f30
    SHL EDX,CL                          ; 00460f32
    MOV CL,byte ptr [0x01c00630]        ; 00460f34 | DAT_01c00630
    MOV EAX,dword ptr [ESP + 0x10]      ; 00460f3a
    SHL ESI,CL                          ; 00460f3e
    MOV CL,byte ptr [0x01c00624]        ; 00460f40 | DAT_01c00624
    SHL EBX,0x8                         ; 00460f46
    SHL EAX,CL                          ; 00460f49
    MOV ECX,dword ptr [ESP + 0x10]      ; 00460f4b
    OR EAX,ESI                          ; 00460f4f
    SHL ECX,0x10                        ; 00460f51
    OR EDX,EAX                          ; 00460f54
    MOV EAX,dword ptr [ESP + 0x18]      ; 00460f56
    OR ECX,EBX                          ; 00460f5a
    OR EAX,ECX                          ; 00460f5c
    CMP dword ptr [0x01c02594],0x0      ; 00460f5e | DAT_01c02594
    JNZ 0x00460f86                      ; 00460f65
        ;   XREF to: 00460f86 (CONDITIONAL_JUMP)  ; LAB_00460f86
    CMP dword ptr [0x005b7624],0x20     ; 00460f67 | DAT_005b7624
    JNZ 0x00460f72                      ; 00460f6e
        ;   XREF to: 00460f72 (CONDITIONAL_JUMP)  ; LAB_00460f72
    MOV EAX,EDX                         ; 00460f70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00460f72
        ;   Label: LAB_00460f72
    MOV ECX,EAX                         ; 00460f76
    MOV EDX,dword ptr [EDX + 0x14]      ; 00460f78
    OR ECX,EDX                          ; 00460f7b
    MOV dword ptr [0x01c00c70],ECX      ; 00460f7d | DAT_01c00c70
    POP ESI                             ; 00460f83
    POP EBX                             ; 00460f84
    RET                                 ; 00460f85
    CMP dword ptr [0x005b7624],0x20     ; 00460f86 | DAT_005b7624
        ;   Label: LAB_00460f86
    JNZ 0x00460f91                      ; 00460f8d
        ;   XREF to: 00460f91 (CONDITIONAL_JUMP)  ; LAB_00460f91
    MOV EAX,EDX                         ; 00460f8f
    MOV ECX,EAX                         ; 00460f91
        ;   Label: LAB_00460f91
    MOV dword ptr [0x01c00c70],ECX      ; 00460f93 | DAT_01c00c70
    POP ESI                             ; 00460f99
    POP EBX                             ; 00460f9a
    RET                                 ; 00460f9b

