; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   position
; CVector3i *      Stack[0xc]:4   rotation
;
; XREF[8]:
;   core_fire.cpp_CFireball_render_FUN_004c0e70 at 004c0ec7
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c6575
;   core_fire.cpp_CRainDrop_render_FUN_004c6830 at 004c68e8
;   core_fire.cpp_CRock_render_FUN_004c1870 at 004c1896
;   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 at 004bf5a3
;   core_fire.cpp_CSpark_render_FUN_004c0420 at 004c0927
;   core_flame.cpp_CFlame_FUN_004ca110 at 004ca259
;   core_gore.cpp_FUN_004ebac0 at 004ebb4a
;
; Called Functions:
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c4a0
        ;   Label: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
    PUSH ESI                            ; 0048c4a1
    PUSH EBP                            ; 0048c4a2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c4a3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048c4a7
    TEST EDX,EDX                        ; 0048c4ab
    JNZ 0x0048c4c9                      ; 0048c4ad
        ;   XREF to: 0048c4c9 (CONDITIONAL_JUMP)  ; LAB_0048c4c9
    PUSH EDX                            ; 0048c4af
    PUSH EDX                            ; 0048c4b0
    PUSH EDX                            ; 0048c4b1
    MOV ECX,dword ptr [EAX + 0x8]       ; 0048c4b2
    PUSH ECX                            ; 0048c4b5
    MOV EBX,dword ptr [EAX + 0x4]       ; 0048c4b6
    PUSH EBX                            ; 0048c4b9
    MOV ESI,dword ptr [EAX]             ; 0048c4ba
    PUSH ESI                            ; 0048c4bc
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 0048c4bd
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0048c4c2
    POP EBP                             ; 0048c4c5
    POP ESI                             ; 0048c4c6
    POP EBX                             ; 0048c4c7
    RET                                 ; 0048c4c8
    PUSH EDI                            ; 0048c4c9
        ;   Label: LAB_0048c4c9
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048c4ca
    PUSH ECX                            ; 0048c4cd
    MOV EBX,dword ptr [EDX + 0x4]       ; 0048c4ce
    PUSH EBX                            ; 0048c4d1
    MOV ESI,dword ptr [EDX]             ; 0048c4d2
    PUSH ESI                            ; 0048c4d4
    MOV EDI,dword ptr [EAX + 0x8]       ; 0048c4d5
    PUSH EDI                            ; 0048c4d8
    MOV EBP,dword ptr [EAX + 0x4]       ; 0048c4d9
    PUSH EBP                            ; 0048c4dc
    MOV EDX,dword ptr [EAX]             ; 0048c4dd
    PUSH EDX                            ; 0048c4df
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 0048c4e0
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0048c4e5
    POP EDI                             ; 0048c4e8
    POP EBP                             ; 0048c4e9
    POP ESI                             ; 0048c4ea
    POP EBX                             ; 0048c4eb
    RET                                 ; 0048c4ec

