; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d516a
;
; Referenced Globals:
;   double DOUBLE_0062ac7d = 0.950000000000000
;   double DOUBLE_0062ac85 = 0.900000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004d29f0
        ;   Label: core_gabriela.cpp_weaponDrawBlendWeightCallback_FUN_004d29f0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d29f3
    TEST EAX,EAX                        ; 004d29f7
    JLE 0x004d2a14                      ; 004d29f9
        ;   XREF to: 004d2a14 (CONDITIONAL_JUMP)  ; LAB_004d2a14
    CMP EAX,0x1                         ; 004d29fb
    JNZ 0x004d2a20                      ; 004d29fe
        ;   XREF to: 004d2a20 (CONDITIONAL_JUMP)  ; LAB_004d2a20
    FLD float ptr [ESP + 0x10]          ; 004d2a00
    FMUL double ptr [0x0062ac7d]        ; 004d2a04 | DOUBLE_0062ac7d
    FSTP float ptr [ESP]                ; 004d2a0a
        ;   Label: LAB_004d2a0a
    MOV EAX,dword ptr [ESP]             ; 004d2a0d
    ADD ESP,0x4                         ; 004d2a10
    RET                                 ; 004d2a13
    FLD float ptr [ESP + 0x10]          ; 004d2a14
        ;   Label: LAB_004d2a14
    FMUL double ptr [0x0062ac85]        ; 004d2a18 | DOUBLE_0062ac85
    JMP 0x004d2a0a                      ; 004d2a1e
        ;   XREF to: 004d2a0a (UNCONDITIONAL_JUMP)  ; LAB_004d2a0a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d2a20
        ;   Label: LAB_004d2a20
    MOV dword ptr [ESP],EAX             ; 004d2a24
    MOV EAX,dword ptr [ESP]             ; 004d2a27
    ADD ESP,0x4                         ; 004d2a2a
    RET                                 ; 004d2a2d

