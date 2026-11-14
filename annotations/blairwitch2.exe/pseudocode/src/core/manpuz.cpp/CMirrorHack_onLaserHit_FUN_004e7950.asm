; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004e7950(CMirrorHack *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Referenced Globals:
;   undefined4 DAT_005dc73d
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7950
        ;   Label: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004e7950
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e7951
    PUSH EBX                            ; 004e7955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7956
    PUSH EDX                            ; 004e795a
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830 ; 004e795b
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830(CDemonActor * this_ptr, SLaserInfo * laser_info)
    FLD float ptr [EBX + 0x34]          ; 004e7960
    ADD ESP,0x8                         ; 004e7963
    FCOMP double ptr [0x005dc73d]       ; 004e7966 | DAT_005dc73d
    FNSTSW AX                           ; 004e796c
    SAHF                                ; 004e796e
    JA 0x004e7973                       ; 004e796f
        ;   XREF to: 004e7973 (CONDITIONAL_JUMP)  ; LAB_004e7973
    POP EBX                             ; 004e7971
    RET                                 ; 004e7972
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 004e7973
        ;   Label: LAB_004e7973
    POP EBX                             ; 004e797a
    RET                                 ; 004e797b

