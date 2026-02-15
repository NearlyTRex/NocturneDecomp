; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042e570(CCharacter *this_ptr,float blend_weight,int blend_mode)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   blend_weight
; int              Stack[0xc]:4   blend_mode
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e570
        ;   Label: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042e570
    PUSH ESI                            ; 0042e571
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042e572
    MOV EAX,dword ptr [ECX + 0x2628]    ; 0042e576
    SHL EAX,0x3                         ; 0042e57c
    MOV EDX,EAX                         ; 0042e57f
    SHL EAX,0x3                         ; 0042e581
    PUSH 0x59ddb0                       ; 0042e584
    SUB EAX,EDX                         ; 0042e589
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042e58b
    MOV EDX,EAX                         ; 0042e58f
    LEA EAX,[ECX + 0x262c]              ; 0042e591
    PUSH EBX                            ; 0042e597
    FILD dword ptr [EDX + EAX*0x1 + 0x30] ; 0042e598
    FMUL float ptr [ECX + 0x2a90]       ; 0042e59c
    PUSH dword ptr [ESP + 0x18]         ; 0042e5a2
    SUB ESP,0x4                         ; 0042e5a6
    FSTP float ptr [ESP]                ; 0042e5a9
    MOV ESI,dword ptr [EDX + EAX*0x1 + 0x2c] ; 0042e5ac
    PUSH ESI                            ; 0042e5b0
    ADD ECX,0x158                       ; 0042e5b1
    PUSH ECX                            ; 0042e5b7
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 0042e5b8
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0042e5bd
    POP ESI                             ; 0042e5c0
    POP EBX                             ; 0042e5c1
    RET                                 ; 0042e5c2

