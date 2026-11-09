; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004c6190(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004c89c0 at 004c8b31
;
; Referenced Globals:
;   undefined4 DAT_005e0e14
;   undefined4 DAT_01cc9104
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c6190
        ;   Label: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004c6190
    MOV EBP,ESP                         ; 004c6191
    SUB ESP,0x8                         ; 004c6193
    AND ESP,0xfffffff8                  ; 004c6196
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c6199
    FLD float ptr [EBP + 0x10]          ; 004c619c
    FMUL float ptr [0x01cc9104]         ; 004c619f | DAT_01cc9104
    FSTP float ptr [ESP]                ; 004c61a5
    TEST EAX,EAX                        ; 004c61a8
    JLE 0x004c61c0                      ; 004c61aa
        ;   XREF to: 004c61c0 (CONDITIONAL_JUMP)  ; LAB_004c61c0
    CMP EAX,0x1                         ; 004c61ac
    JNZ 0x004c61cf                      ; 004c61af
        ;   XREF to: 004c61cf (CONDITIONAL_JUMP)  ; LAB_004c61cf
    MOV EAX,dword ptr [ESP]             ; 004c61b1
    MOV dword ptr [ESP + 0x4],EAX       ; 004c61b4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c61b8
        ;   Label: LAB_004c61b8
    MOV ESP,EBP                         ; 004c61bc
    POP EBP                             ; 004c61be
    RET                                 ; 004c61bf
    FLD float ptr [ESP]                 ; 004c61c0
        ;   Label: LAB_004c61c0
    FMUL double ptr [0x005e0e14]        ; 004c61c3 | DAT_005e0e14
    FSTP float ptr [ESP + 0x4]          ; 004c61c9
    JMP 0x004c61b8                      ; 004c61cd
        ;   XREF to: 004c61b8 (UNCONDITIONAL_JUMP)  ; LAB_004c61b8
    MOV EAX,dword ptr [EBP + 0x10]      ; 004c61cf
        ;   Label: LAB_004c61cf
    MOV dword ptr [ESP + 0x4],EAX       ; 004c61d2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c61d6
    MOV ESP,EBP                         ; 004c61da
    POP EBP                             ; 004c61dc
    RET                                 ; 004c61dd

