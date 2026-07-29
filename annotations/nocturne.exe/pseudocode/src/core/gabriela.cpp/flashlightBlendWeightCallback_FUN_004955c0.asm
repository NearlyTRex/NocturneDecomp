; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
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
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497a71
;
; Referenced Globals:
;   double DOUBLE_00581e22 = 0.700000000000000
;   undefined4 DAT_01c71394
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004955c0
        ;   Label: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004955c0
    MOV EBP,ESP                         ; 004955c1
    SUB ESP,0x8                         ; 004955c3
    AND ESP,0xfffffff8                  ; 004955c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004955c9
    FLD float ptr [EBP + 0x10]          ; 004955cc
    FMUL float ptr [0x01c71394]         ; 004955cf | DAT_01c71394
    FSTP float ptr [ESP]                ; 004955d5
    TEST EAX,EAX                        ; 004955d8
    JLE 0x004955f0                      ; 004955da
        ;   XREF to: 004955f0 (CONDITIONAL_JUMP)  ; LAB_004955f0
    CMP EAX,0x1                         ; 004955dc
    JNZ 0x004955ff                      ; 004955df
        ;   XREF to: 004955ff (CONDITIONAL_JUMP)  ; LAB_004955ff
    MOV EAX,dword ptr [ESP]             ; 004955e1
    MOV dword ptr [ESP + 0x4],EAX       ; 004955e4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004955e8
        ;   Label: LAB_004955e8
    MOV ESP,EBP                         ; 004955ec
    POP EBP                             ; 004955ee
    RET                                 ; 004955ef
    FLD float ptr [ESP]                 ; 004955f0
        ;   Label: LAB_004955f0
    FMUL double ptr [0x00581e22]        ; 004955f3 | DOUBLE_00581e22
    FSTP float ptr [ESP + 0x4]          ; 004955f9
    JMP 0x004955e8                      ; 004955fd
        ;   XREF to: 004955e8 (UNCONDITIONAL_JUMP)  ; LAB_004955e8
    MOV EAX,dword ptr [EBP + 0x10]      ; 004955ff
        ;   Label: LAB_004955ff
    MOV dword ptr [ESP + 0x4],EAX       ; 00495602
    MOV EAX,dword ptr [ESP + 0x4]       ; 00495606
    MOV ESP,EBP                         ; 0049560a
    POP EBP                             ; 0049560c
    RET                                 ; 0049560d

