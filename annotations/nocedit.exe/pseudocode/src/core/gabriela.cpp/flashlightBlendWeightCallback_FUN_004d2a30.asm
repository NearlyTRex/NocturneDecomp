; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004d2a30(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d4ef1
;
; Referenced Globals:
;   double DOUBLE_0062ac8d = 0.700000000000000
;   float FLOAT_02d7b844
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d2a30
        ;   Label: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004d2a30
    MOV EBP,ESP                         ; 004d2a31
    SUB ESP,0x8                         ; 004d2a33
    AND ESP,0xfffffff8                  ; 004d2a36
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d2a39
    FLD float ptr [EBP + 0x10]          ; 004d2a3c
    FMUL float ptr [0x02d7b844]         ; 004d2a3f | FLOAT_02d7b844
    FSTP float ptr [ESP]                ; 004d2a45
    TEST EAX,EAX                        ; 004d2a48
    JLE 0x004d2a60                      ; 004d2a4a
        ;   XREF to: 004d2a60 (CONDITIONAL_JUMP)  ; LAB_004d2a60
    CMP EAX,0x1                         ; 004d2a4c
    JNZ 0x004d2a6f                      ; 004d2a4f
        ;   XREF to: 004d2a6f (CONDITIONAL_JUMP)  ; LAB_004d2a6f
    MOV EAX,dword ptr [ESP]             ; 004d2a51
    MOV dword ptr [ESP + 0x4],EAX       ; 004d2a54
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2a58
        ;   Label: LAB_004d2a58
    MOV ESP,EBP                         ; 004d2a5c
    POP EBP                             ; 004d2a5e
    RET                                 ; 004d2a5f
    FLD float ptr [ESP]                 ; 004d2a60
        ;   Label: LAB_004d2a60
    FMUL double ptr [0x0062ac8d]        ; 004d2a63 | DOUBLE_0062ac8d
    FSTP float ptr [ESP + 0x4]          ; 004d2a69
    JMP 0x004d2a58                      ; 004d2a6d
        ;   XREF to: 004d2a58 (UNCONDITIONAL_JUMP)  ; LAB_004d2a58
    MOV EAX,dword ptr [EBP + 0x10]      ; 004d2a6f
        ;   Label: LAB_004d2a6f
    MOV dword ptr [ESP + 0x4],EAX       ; 004d2a72
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2a76
    MOV ESP,EBP                         ; 004d2a7a
    POP EBP                             ; 004d2a7c
    RET                                 ; 004d2a7d

