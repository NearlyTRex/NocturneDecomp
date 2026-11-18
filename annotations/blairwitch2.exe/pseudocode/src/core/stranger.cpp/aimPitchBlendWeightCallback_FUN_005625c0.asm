; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_005625c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
;
; XREF[1]:
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880 at 00567d0c
;
; Referenced Globals:
;   double g_DOUBLE_005eb1a5 = 0.700000000000000
;   double g_DOUBLE_005eb1ad = 0.400000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005625c0
        ;   Label: core_stranger.cpp_aimPitchBlendWeightCallback_FUN_005625c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005625c3
    TEST EAX,EAX                        ; 005625c7
    JLE 0x005625e4                      ; 005625c9
        ;   XREF to: 005625e4 (CONDITIONAL_JUMP)  ; LAB_005625e4
    CMP EAX,0x1                         ; 005625cb
    JNZ 0x005625f0                      ; 005625ce
        ;   XREF to: 005625f0 (CONDITIONAL_JUMP)  ; LAB_005625f0
    FLD float ptr [ESP + 0x10]          ; 005625d0
    FMUL double ptr [0x005eb1a5]        ; 005625d4 | g_DOUBLE_005eb1a5
    FSTP float ptr [ESP]                ; 005625da
        ;   Label: LAB_005625da
    MOV EAX,dword ptr [ESP]             ; 005625dd
    ADD ESP,0x4                         ; 005625e0
    RET                                 ; 005625e3
    FLD float ptr [ESP + 0x10]          ; 005625e4
        ;   Label: LAB_005625e4
    FMUL double ptr [0x005eb1ad]        ; 005625e8 | g_DOUBLE_005eb1ad
    JMP 0x005625da                      ; 005625ee
        ;   XREF to: 005625da (UNCONDITIONAL_JUMP)  ; LAB_005625da
    MOV EAX,dword ptr [ESP + 0x10]      ; 005625f0
        ;   Label: LAB_005625f0
    MOV dword ptr [ESP],EAX             ; 005625f4
    MOV EAX,dword ptr [ESP]             ; 005625f7
    ADD ESP,0x4                         ; 005625fa
    RET                                 ; 005625fd

