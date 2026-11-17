; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_00585040(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
;
; XREF[1]:
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360 at 0058a7ec
;
; Referenced Globals:
;   double g_DOUBLE_005f63a9 = 0.700000000000000
;   double g_DOUBLE_005f63b1 = 0.400000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00585040
        ;   Label: core_stranger.cpp_aimPitchBlendWeightCallback_FUN_00585040
    MOV EAX,dword ptr [ESP + 0x14]      ; 00585043
    TEST EAX,EAX                        ; 00585047
    JLE 0x00585064                      ; 00585049
        ;   XREF to: 00585064 (CONDITIONAL_JUMP)  ; LAB_00585064
    CMP EAX,0x1                         ; 0058504b
    JNZ 0x00585070                      ; 0058504e
        ;   XREF to: 00585070 (CONDITIONAL_JUMP)  ; LAB_00585070
    FLD float ptr [ESP + 0x10]          ; 00585050
    FMUL double ptr [0x005f63a9]        ; 00585054 | g_DOUBLE_005f63a9
    FSTP float ptr [ESP]                ; 0058505a
        ;   Label: LAB_0058505a
    MOV EAX,dword ptr [ESP]             ; 0058505d
    ADD ESP,0x4                         ; 00585060
    RET                                 ; 00585063
    FLD float ptr [ESP + 0x10]          ; 00585064
        ;   Label: LAB_00585064
    FMUL double ptr [0x005f63b1]        ; 00585068 | g_DOUBLE_005f63b1
    JMP 0x0058505a                      ; 0058506e
        ;   XREF to: 0058505a (UNCONDITIONAL_JUMP)  ; LAB_0058505a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00585070
        ;   Label: LAB_00585070
    MOV dword ptr [ESP],EAX             ; 00585074
    MOV EAX,dword ptr [ESP]             ; 00585077
    ADD ESP,0x4                         ; 0058507a
    RET                                 ; 0058507d

