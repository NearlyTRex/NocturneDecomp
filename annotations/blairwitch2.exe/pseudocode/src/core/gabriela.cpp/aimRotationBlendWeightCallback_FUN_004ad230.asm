; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004ad230(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   model_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004afa20 at 004b0119
;
; Referenced Globals:
;   undefined4 DAT_005d6da3
;   undefined4 DAT_005d6dab
;   undefined4 DAT_005d6db3
;   undefined4 DAT_005d6dbb
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ad230
        ;   Label: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_004ad230
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ad233
    TEST EAX,EAX                        ; 004ad237
    JLE 0x004ad25e                      ; 004ad239
        ;   XREF to: 004ad25e (CONDITIONAL_JUMP)  ; LAB_004ad25e
    CMP EAX,0x1                         ; 004ad23b
    JZ 0x004ad26a                       ; 004ad23e
        ;   XREF to: 004ad26a (CONDITIONAL_JUMP)  ; LAB_004ad26a
    CMP EAX,0x2                         ; 004ad240
    JZ 0x004ad276                       ; 004ad243
        ;   XREF to: 004ad276 (CONDITIONAL_JUMP)  ; LAB_004ad276
    CMP EAX,0x3                         ; 004ad245
    JNZ 0x004ad282                      ; 004ad248
        ;   XREF to: 004ad282 (CONDITIONAL_JUMP)  ; LAB_004ad282
    FLD float ptr [ESP + 0x10]          ; 004ad24a
    FMUL double ptr [0x005d6da3]        ; 004ad24e | DAT_005d6da3
    FSTP float ptr [ESP]                ; 004ad254
        ;   Label: LAB_004ad254
    MOV EAX,dword ptr [ESP]             ; 004ad257
    ADD ESP,0x4                         ; 004ad25a
    RET                                 ; 004ad25d
    FLD float ptr [ESP + 0x10]          ; 004ad25e
        ;   Label: LAB_004ad25e
    FMUL double ptr [0x005d6dbb]        ; 004ad262 | DAT_005d6dbb
    JMP 0x004ad254                      ; 004ad268
        ;   XREF to: 004ad254 (UNCONDITIONAL_JUMP)  ; LAB_004ad254
    FLD float ptr [ESP + 0x10]          ; 004ad26a
        ;   Label: LAB_004ad26a
    FMUL double ptr [0x005d6db3]        ; 004ad26e | DAT_005d6db3
    JMP 0x004ad254                      ; 004ad274
        ;   XREF to: 004ad254 (UNCONDITIONAL_JUMP)  ; LAB_004ad254
    FLD float ptr [ESP + 0x10]          ; 004ad276
        ;   Label: LAB_004ad276
    FMUL double ptr [0x005d6dab]        ; 004ad27a | DAT_005d6dab
    JMP 0x004ad254                      ; 004ad280
        ;   XREF to: 004ad254 (UNCONDITIONAL_JUMP)  ; LAB_004ad254
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ad282
        ;   Label: LAB_004ad282
    MOV dword ptr [ESP],EAX             ; 004ad286
    MOV EAX,dword ptr [ESP]             ; 004ad289
    ADD ESP,0x4                         ; 004ad28c
    RET                                 ; 004ad28f

