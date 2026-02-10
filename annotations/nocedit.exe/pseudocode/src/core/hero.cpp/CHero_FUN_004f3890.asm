; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_FUN_004f3890(CHero *this_ptr,int hand_index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_FUN_004d4890 at 004d496e
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005bdf6a
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3890
        ;   Label: core_hero.cpp_CHero_FUN_004f3890
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3891
    MOV EDX,dword ptr [EBX + 0x1fba0]   ; 004f3895
    TEST EDX,EDX                        ; 004f389b
    JNZ 0x004f38a1                      ; 004f389d
        ;   XREF to: 004f38a1 (CONDITIONAL_JUMP)  ; LAB_004f38a1
    POP EBX                             ; 004f389f
    RET                                 ; 004f38a0
    PUSH ESI                            ; 004f38a1
        ;   Label: LAB_004f38a1
    PUSH 0x3dcccccd                     ; 004f38a2
    PUSH EDX                            ; 004f38a7
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f38a8
    PUSH ESI                            ; 004f38ac
    PUSH EBX                            ; 004f38ad
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 004f38ae
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 004f38b3
    MOV dword ptr [EBX + 0x1fba0],0x0   ; 004f38b6
    POP ESI                             ; 004f38c0
    POP EBX                             ; 004f38c1
    RET                                 ; 004f38c2

