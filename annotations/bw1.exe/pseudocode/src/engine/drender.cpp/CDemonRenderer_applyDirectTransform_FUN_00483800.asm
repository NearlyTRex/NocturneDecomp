; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   position
; CVector3i *      Stack[0xc]:4   rotation
;
; XREF[10]:
;   core_fire.cpp_CPopcorn_render_FUN_004b4370 at 004b4425
;   core_fire.cpp_CRainDrop_render_FUN_004b46e0 at 004b4798
;   core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0 at 004ac193
;   core_fire.cpp_FUN_004ad140 at 004ad3e2
;   core_fire.cpp_FUN_004adaf0 at 004addcb
;   core_fire.cpp_FUN_004ae640 at 004ae6a0
;   core_fire.cpp_FUN_004af040 at 004af06c
;   core_fire.cpp_FUN_004af270 at 004af29c
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 at 004b8251
;   core_gore.cpp_FUN_004e3f40 at 004e3fc3
;
; Called Functions:
;   engine_matrix.c_matrixPushAndTransform_FUN_00507c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483800
        ;   Label: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
    PUSH ESI                            ; 00483801
    PUSH EBP                            ; 00483802
    MOV EAX,dword ptr [ESP + 0x14]      ; 00483803
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483807
    TEST EDX,EDX                        ; 0048380b
    JNZ 0x00483829                      ; 0048380d
        ;   XREF to: 00483829 (CONDITIONAL_JUMP)  ; LAB_00483829
    PUSH EDX                            ; 0048380f
    PUSH EDX                            ; 00483810
    PUSH EDX                            ; 00483811
    MOV ECX,dword ptr [EAX + 0x8]       ; 00483812
    PUSH ECX                            ; 00483815
    MOV EBX,dword ptr [EAX + 0x4]       ; 00483816
    PUSH EBX                            ; 00483819
    MOV ESI,dword ptr [EAX]             ; 0048381a
    PUSH ESI                            ; 0048381c
    CALL engine_matrix.c_matrixPushAndTransform_FUN_00507c70 ; 0048381d
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_00507c70(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 00483822
    POP EBP                             ; 00483825
    POP ESI                             ; 00483826
    POP EBX                             ; 00483827
    RET                                 ; 00483828
    PUSH EDI                            ; 00483829
        ;   Label: LAB_00483829
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048382a
    PUSH ECX                            ; 0048382d
    MOV EBX,dword ptr [EDX + 0x4]       ; 0048382e
    PUSH EBX                            ; 00483831
    MOV ESI,dword ptr [EDX]             ; 00483832
    PUSH ESI                            ; 00483834
    MOV EDI,dword ptr [EAX + 0x8]       ; 00483835
    PUSH EDI                            ; 00483838
    MOV EBP,dword ptr [EAX + 0x4]       ; 00483839
    PUSH EBP                            ; 0048383c
    MOV EDX,dword ptr [EAX]             ; 0048383d
    PUSH EDX                            ; 0048383f
    CALL engine_matrix.c_matrixPushAndTransform_FUN_00507c70 ; 00483840
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_00507c70(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 00483845
    POP EDI                             ; 00483848
    POP EBP                             ; 00483849
    POP ESI                             ; 0048384a
    POP EBX                             ; 0048384b
    RET                                 ; 0048384c

