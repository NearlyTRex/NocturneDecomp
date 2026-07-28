; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero *this_ptr,int hand_index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410 at 004974ee
;   core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0 at 00537f1a
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5c30
        ;   Label: core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5c31
    MOV EDX,dword ptr [EBX + 0x1fa08]   ; 004b5c35
    TEST EDX,EDX                        ; 004b5c3b
    JNZ 0x004b5c41                      ; 004b5c3d
        ;   XREF to: 004b5c41 (CONDITIONAL_JUMP)  ; LAB_004b5c41
    POP EBX                             ; 004b5c3f
    RET                                 ; 004b5c40
    PUSH ESI                            ; 004b5c41
        ;   Label: LAB_004b5c41
    PUSH 0x3dcccccd                     ; 004b5c42
    PUSH EDX                            ; 004b5c47
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b5c48
    PUSH ESI                            ; 004b5c4c
    PUSH EBX                            ; 004b5c4d
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 004b5c4e
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 004b5c53
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 004b5c56
    POP ESI                             ; 004b5c60
    POP EBX                             ; 004b5c61
    RET                                 ; 004b5c62

