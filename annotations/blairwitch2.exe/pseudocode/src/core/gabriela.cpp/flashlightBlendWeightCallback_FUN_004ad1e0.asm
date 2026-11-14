; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004ad1e0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004afb91
;
; Referenced Globals:
;   undefined4 DAT_005d6d9b
;   undefined4 DAT_01cb0674
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ad1e0
        ;   Label: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004ad1e0
    MOV EBP,ESP                         ; 004ad1e1
    SUB ESP,0x8                         ; 004ad1e3
    AND ESP,0xfffffff8                  ; 004ad1e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ad1e9
    FLD float ptr [EBP + 0x10]          ; 004ad1ec
    FMUL float ptr [0x01cb0674]         ; 004ad1ef | DAT_01cb0674
    FSTP float ptr [ESP]                ; 004ad1f5
    TEST EAX,EAX                        ; 004ad1f8
    JLE 0x004ad210                      ; 004ad1fa
        ;   XREF to: 004ad210 (CONDITIONAL_JUMP)  ; LAB_004ad210
    CMP EAX,0x1                         ; 004ad1fc
    JNZ 0x004ad21f                      ; 004ad1ff
        ;   XREF to: 004ad21f (CONDITIONAL_JUMP)  ; LAB_004ad21f
    MOV EAX,dword ptr [ESP]             ; 004ad201
    MOV dword ptr [ESP + 0x4],EAX       ; 004ad204
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad208
        ;   Label: LAB_004ad208
    MOV ESP,EBP                         ; 004ad20c
    POP EBP                             ; 004ad20e
    RET                                 ; 004ad20f
    FLD float ptr [ESP]                 ; 004ad210
        ;   Label: LAB_004ad210
    FMUL double ptr [0x005d6d9b]        ; 004ad213 | DAT_005d6d9b
    FSTP float ptr [ESP + 0x4]          ; 004ad219
    JMP 0x004ad208                      ; 004ad21d
        ;   XREF to: 004ad208 (UNCONDITIONAL_JUMP)  ; LAB_004ad208
    MOV EAX,dword ptr [EBP + 0x10]      ; 004ad21f
        ;   Label: LAB_004ad21f
    MOV dword ptr [ESP + 0x4],EAX       ; 004ad222
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad226
    MOV ESP,EBP                         ; 004ad22a
    POP EBP                             ; 004ad22c
    RET                                 ; 004ad22d

