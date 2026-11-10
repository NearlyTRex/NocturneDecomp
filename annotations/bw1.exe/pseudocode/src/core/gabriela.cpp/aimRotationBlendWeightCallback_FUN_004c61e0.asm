; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004c61e0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   model_ptr
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c90b8
;
; Referenced Globals:
;   undefined4 DAT_005e0e1c
;   undefined4 DAT_005e0e24
;   undefined4 DAT_005e0e2c
;   undefined4 DAT_005e0e34
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004c61e0
        ;   Label: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_004c61e0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c61e3
    TEST EAX,EAX                        ; 004c61e7
    JLE 0x004c620e                      ; 004c61e9
        ;   XREF to: 004c620e (CONDITIONAL_JUMP)  ; LAB_004c620e
    CMP EAX,0x1                         ; 004c61eb
    JZ 0x004c621a                       ; 004c61ee
        ;   XREF to: 004c621a (CONDITIONAL_JUMP)  ; LAB_004c621a
    CMP EAX,0x2                         ; 004c61f0
    JZ 0x004c6226                       ; 004c61f3
        ;   XREF to: 004c6226 (CONDITIONAL_JUMP)  ; LAB_004c6226
    CMP EAX,0x3                         ; 004c61f5
    JNZ 0x004c6232                      ; 004c61f8
        ;   XREF to: 004c6232 (CONDITIONAL_JUMP)  ; LAB_004c6232
    FLD float ptr [ESP + 0x10]          ; 004c61fa
    FMUL double ptr [0x005e0e1c]        ; 004c61fe | DAT_005e0e1c
    FSTP float ptr [ESP]                ; 004c6204
        ;   Label: LAB_004c6204
    MOV EAX,dword ptr [ESP]             ; 004c6207
    ADD ESP,0x4                         ; 004c620a
    RET                                 ; 004c620d
    FLD float ptr [ESP + 0x10]          ; 004c620e
        ;   Label: LAB_004c620e
    FMUL double ptr [0x005e0e34]        ; 004c6212 | DAT_005e0e34
    JMP 0x004c6204                      ; 004c6218
        ;   XREF to: 004c6204 (UNCONDITIONAL_JUMP)  ; LAB_004c6204
    FLD float ptr [ESP + 0x10]          ; 004c621a
        ;   Label: LAB_004c621a
    FMUL double ptr [0x005e0e2c]        ; 004c621e | DAT_005e0e2c
    JMP 0x004c6204                      ; 004c6224
        ;   XREF to: 004c6204 (UNCONDITIONAL_JUMP)  ; LAB_004c6204
    FLD float ptr [ESP + 0x10]          ; 004c6226
        ;   Label: LAB_004c6226
    FMUL double ptr [0x005e0e24]        ; 004c622a | DAT_005e0e24
    JMP 0x004c6204                      ; 004c6230
        ;   XREF to: 004c6204 (UNCONDITIONAL_JUMP)  ; LAB_004c6204
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c6232
        ;   Label: LAB_004c6232
    MOV dword ptr [ESP],EAX             ; 004c6236
    MOV EAX,dword ptr [ESP]             ; 004c6239
    ADD ESP,0x4                         ; 004c623c
    RET                                 ; 004c623f

