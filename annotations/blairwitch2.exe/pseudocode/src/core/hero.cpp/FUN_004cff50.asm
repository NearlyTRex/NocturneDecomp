; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004cff50(CHero *this_ptr,int hand_index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; XREF[3]:
;   core_doc.cpp_FUN_00453250 at 004535ec
;   core_gabriela.cpp_FUN_004af410 at 004af53d
;   core_stranger.cpp_FUN_005656f0 at 00565983
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cff50
        ;   Label: core_hero.cpp_FUN_004cff50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cff51
    MOV EDX,dword ptr [EBX + 0x25608]   ; 004cff55
    TEST EDX,EDX                        ; 004cff5b
    JNZ 0x004cff61                      ; 004cff5d
        ;   XREF to: 004cff61 (CONDITIONAL_JUMP)  ; LAB_004cff61
    POP EBX                             ; 004cff5f
    RET                                 ; 004cff60
    PUSH ESI                            ; 004cff61
        ;   Label: LAB_004cff61
    PUSH 0x0                            ; 004cff62
    PUSH 0x3dcccccd                     ; 004cff64
    PUSH EDX                            ; 004cff69
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004cff6a
    PUSH ESI                            ; 004cff6e
    PUSH EBX                            ; 004cff6f
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10 ; 004cff70
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter * this_ptr, int param_2, int param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004cff75
    MOV dword ptr [EBX + 0x25608],0x0   ; 004cff78
    POP ESI                             ; 004cff82
    POP EBX                             ; 004cff83
    RET                                 ; 004cff84

