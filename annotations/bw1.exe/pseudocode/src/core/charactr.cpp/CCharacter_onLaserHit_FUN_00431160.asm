; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_onLaserHit_FUN_00431160(CCharacter *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Referenced Globals:
;   undefined4 DAT_005d5a5f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431160
        ;   Label: core_charactr.cpp_CCharacter_onLaserHit_FUN_00431160
    MOV EBX,dword ptr [ESP + 0xc]       ; 00431161
    PUSH EBX                            ; 00431165
    MOV EDX,dword ptr [ESP + 0xc]       ; 00431166
    PUSH EDX                            ; 0043116a
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680 ; 0043116b
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680(CDemonActor * this_ptr, SLaserInfo * laser_info)
    ADD ESP,0x8                         ; 00431170
    MOV EAX,dword ptr [ESP + 0x8]       ; 00431173
    CMP dword ptr [EAX + 0x27a8],0x0    ; 00431177
    JNZ 0x00431182                      ; 0043117e
        ;   XREF to: 00431182 (CONDITIONAL_JUMP)  ; LAB_00431182
    POP EBX                             ; 00431180
    RET                                 ; 00431181
    FLD float ptr [EBX + 0x44]          ; 00431182
        ;   Label: LAB_00431182
    MOV dword ptr [EBX + 0x50],0x0      ; 00431185
    FMUL double ptr [0x005d5a5f]        ; 0043118c | DAT_005d5a5f
    MOV dword ptr [EBX + 0x48],0x3f666666 ; 00431192
    FSTP float ptr [EBX + 0x4c]         ; 00431199
    POP EBX                             ; 0043119c
    RET                                 ; 0043119d

