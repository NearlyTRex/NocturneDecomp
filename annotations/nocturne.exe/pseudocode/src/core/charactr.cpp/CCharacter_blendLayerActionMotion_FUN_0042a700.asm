; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a700(CCharacter *this_ptr,float blend_weight,int blend_mode)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   blend_weight
; int              Stack[0xc]:4   blend_mode
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a700
        ;   Label: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a700
    PUSH ESI                            ; 0042a701
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042a702
    MOV EAX,dword ptr [ECX + 0x2620]    ; 0042a706
    SHL EAX,0x3                         ; 0042a70c
    MOV EDX,EAX                         ; 0042a70f
    SHL EAX,0x3                         ; 0042a711
    PUSH 0x51b650                       ; 0042a714
    SUB EAX,EDX                         ; 0042a719
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042a71b
    MOV EDX,EAX                         ; 0042a71f
    LEA EAX,[ECX + 0x2624]              ; 0042a721
    PUSH EBX                            ; 0042a727
    FILD dword ptr [EDX + EAX*0x1 + 0x30] ; 0042a728
    FMUL float ptr [ECX + 0x2a88]       ; 0042a72c
    PUSH dword ptr [ESP + 0x18]         ; 0042a732
    SUB ESP,0x4                         ; 0042a736
    FSTP float ptr [ESP]                ; 0042a739
    MOV ESI,dword ptr [EDX + EAX*0x1 + 0x2c] ; 0042a73c
    PUSH ESI                            ; 0042a740
    ADD ECX,0x150                       ; 0042a741
    PUSH ECX                            ; 0042a747
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 0042a748
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0042a74d
    POP ESI                             ; 0042a750
    POP EBX                             ; 0042a751
    RET                                 ; 0042a752

