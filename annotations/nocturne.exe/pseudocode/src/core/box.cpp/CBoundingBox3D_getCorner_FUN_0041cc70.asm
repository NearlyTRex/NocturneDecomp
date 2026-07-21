; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[10]:
;   FUN_0041d050 at 0041d075
;   FUN_005125a0 at 005126a5
;   FUN_00533750 at 0053382a
;   FUN_00549cd0 at 00549e9f
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540 at 0040a584
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 at 0041dce6
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050f015
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710 at 00510753
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 at 0051efbf
;   core_turret.cpp_CTurret_updateTargeting_FUN_0054a110 at 0054a169
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cc70
        ;   Label: core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
    SUB ESP,0xc                         ; 0041cc71
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041cc74
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041cc78
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0041cc7c
    TEST CL,0x1                         ; 0041cc80
    JNZ 0x0041ccbc                      ; 0041cc83
        ;   XREF to: 0041ccbc (CONDITIONAL_JUMP)  ; LAB_0041ccbc
    MOV EBX,dword ptr [EAX]             ; 0041cc85
    MOV dword ptr [ESP + 0x8],EBX       ; 0041cc87
        ;   Label: LAB_0041cc87
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041cc8b
    MOV dword ptr [EDX],EBX             ; 0041cc8f
    TEST CL,0x2                         ; 0041cc91
    JZ 0x0041ccc1                       ; 0041cc94
        ;   XREF to: 0041ccc1 (CONDITIONAL_JUMP)  ; LAB_0041ccc1
    MOV EBX,dword ptr [EAX + 0x10]      ; 0041cc96
    MOV dword ptr [ESP + 0x4],EBX       ; 0041cc99
        ;   Label: LAB_0041cc99
    MOV EBX,dword ptr [ESP + 0x4]       ; 0041cc9d
    MOV dword ptr [EDX + 0x4],EBX       ; 0041cca1
    TEST CL,0x4                         ; 0041cca4
    JZ 0x0041ccc6                       ; 0041cca7
        ;   XREF to: 0041ccc6 (CONDITIONAL_JUMP)  ; LAB_0041ccc6
    MOV EAX,dword ptr [EAX + 0x14]      ; 0041cca9
    MOV dword ptr [ESP],EAX             ; 0041ccac
    MOV EAX,dword ptr [ESP]             ; 0041ccaf
    MOV dword ptr [EDX + 0x8],EAX       ; 0041ccb2
    MOV EAX,EDX                         ; 0041ccb5
    ADD ESP,0xc                         ; 0041ccb7
    POP EBX                             ; 0041ccba
    RET                                 ; 0041ccbb
    MOV EBX,dword ptr [EAX + 0xc]       ; 0041ccbc
        ;   Label: LAB_0041ccbc
    JMP 0x0041cc87                      ; 0041ccbf
        ;   XREF to: 0041cc87 (UNCONDITIONAL_JUMP)  ; LAB_0041cc87
    MOV EBX,dword ptr [EAX + 0x4]       ; 0041ccc1
        ;   Label: LAB_0041ccc1
    JMP 0x0041cc99                      ; 0041ccc4
        ;   XREF to: 0041cc99 (UNCONDITIONAL_JUMP)  ; LAB_0041cc99
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041ccc6
        ;   Label: LAB_0041ccc6
    MOV dword ptr [ESP],EAX             ; 0041ccc9
    MOV EAX,dword ptr [ESP]             ; 0041cccc
    MOV dword ptr [EDX + 0x8],EAX       ; 0041cccf
    MOV EAX,EDX                         ; 0041ccd2
    ADD ESP,0xc                         ; 0041ccd4
    POP EBX                             ; 0041ccd7
    RET                                 ; 0041ccd8

