; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004cbcb0(CMirrorHack *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Referenced Globals:
;   double DOUBLE_00588182 = -0.0100000000000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbcb0
        ;   Label: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cbcb1
    PUSH EBX                            ; 004cbcb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cbcb6
    PUSH EDX                            ; 004cbcba
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10 ; 004cbcbb
        ;   XREF to: 0040ab10 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10()
    FLD float ptr [EBX + 0x34]          ; 004cbcc0
    ADD ESP,0x8                         ; 004cbcc3
    FCOMP double ptr [0x00588182]       ; 004cbcc6 | DOUBLE_00588182
    FNSTSW AX                           ; 004cbccc
    SAHF                                ; 004cbcce
    JA 0x004cbcd3                       ; 004cbccf
        ;   XREF to: 004cbcd3 (CONDITIONAL_JUMP)  ; LAB_004cbcd3
    POP EBX                             ; 004cbcd1
    RET                                 ; 004cbcd2
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 004cbcd3
        ;   Label: LAB_004cbcd3
    POP EBX                             ; 004cbcda
    RET                                 ; 004cbcdb

