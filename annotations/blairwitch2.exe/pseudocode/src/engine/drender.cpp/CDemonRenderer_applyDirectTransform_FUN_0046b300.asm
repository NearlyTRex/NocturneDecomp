; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   position
; CVector3i *      Stack[0xc]:4   rotation
;
; XREF[11]:
;   core_bwspart.cpp_FUN_005a86a0 at 005a8765
;   core_fire.cpp_CFireball_render_FUN_00495ca0 at 00495d00
;   core_fire.cpp_CFirefly_render_FUN_00495150 at 0049542b
;   core_fire.cpp_CLeaf_render_FUN_004968d0 at 004968fc
;   core_fire.cpp_CPopcorn_render_FUN_0049b9d0 at 0049ba85
;   core_fire.cpp_CRainDrop_render_FUN_0049bd40 at 0049bdf8
;   core_fire.cpp_CRock_render_FUN_004966a0 at 004966cc
;   core_fire.cpp_CSmokeParticle_render_FUN_00493710 at 004937f3
;   core_fire.cpp_CSpark_render_FUN_004947a0 at 00494a42
;   core_flame.cpp_CFlame_renderTransparent_FUN_0049f850 at 0049f9a1
;   ... and 1 more
;
; Called Functions:
;   engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b300
        ;   Label: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
    PUSH ESI                            ; 0046b301
    PUSH EBP                            ; 0046b302
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b303
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046b307
    TEST EDX,EDX                        ; 0046b30b
    JNZ 0x0046b329                      ; 0046b30d
        ;   XREF to: 0046b329 (CONDITIONAL_JUMP)  ; LAB_0046b329
    PUSH EDX                            ; 0046b30f
    PUSH EDX                            ; 0046b310
    PUSH EDX                            ; 0046b311
    MOV ECX,dword ptr [EAX + 0x8]       ; 0046b312
    PUSH ECX                            ; 0046b315
    MOV EBX,dword ptr [EAX + 0x4]       ; 0046b316
    PUSH EBX                            ; 0046b319
    MOV ESI,dword ptr [EAX]             ; 0046b31a
    PUSH ESI                            ; 0046b31c
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0 ; 0046b31d
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0046b322
    POP EBP                             ; 0046b325
    POP ESI                             ; 0046b326
    POP EBX                             ; 0046b327
    RET                                 ; 0046b328
    PUSH EDI                            ; 0046b329
        ;   Label: LAB_0046b329
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046b32a
    PUSH ECX                            ; 0046b32d
    MOV EBX,dword ptr [EDX + 0x4]       ; 0046b32e
    PUSH EBX                            ; 0046b331
    MOV ESI,dword ptr [EDX]             ; 0046b332
    PUSH ESI                            ; 0046b334
    MOV EDI,dword ptr [EAX + 0x8]       ; 0046b335
    PUSH EDI                            ; 0046b338
    MOV EBP,dword ptr [EAX + 0x4]       ; 0046b339
    PUSH EBP                            ; 0046b33c
    MOV EDX,dword ptr [EAX]             ; 0046b33d
    PUSH EDX                            ; 0046b33f
    CALL engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0 ; 0046b340
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_004e8fd0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0046b345
    POP EDI                             ; 0046b348
    POP EBP                             ; 0046b349
    POP ESI                             ; 0046b34a
    POP EBX                             ; 0046b34b
    RET                                 ; 0046b34c

