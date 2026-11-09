; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_0049e560(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   velocity
; float            Stack[0x14]:4   fuse_time
; uint             Stack[0x18]:4   sfx_handle
;
; XREF[1]:
;   core_dynamite.cpp_FUN_0047a0a0 at 0047a0d8
;
; Referenced Globals:
;   undefined4 DAT_005d5822
;
; Called Functions:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_0049e5d0
;   sound_sndmain.cpp_FUN_00550da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e560
        ;   Label: core_fire.cpp_CFireEffect_createToss_FUN_0049e560
    PUSH ESI                            ; 0049e561
    PUSH EDI                            ; 0049e562
    PUSH EBP                            ; 0049e563
    FLD float ptr [ESP + 0x24]          ; 0049e564
    FCOMP double ptr [0x005d5822]       ; 0049e568 | DAT_005d5822
    FNSTSW AX                           ; 0049e56e
    SAHF                                ; 0049e570
    JNC 0x0049e57b                      ; 0049e571
        ;   XREF to: 0049e57b (CONDITIONAL_JUMP)  ; LAB_0049e57b
    MOV dword ptr [ESP + 0x24],0x38d1b717 ; 0049e573
    MOV ECX,dword ptr [ESP + 0x20]      ; 0049e57b
        ;   Label: LAB_0049e57b
    PUSH dword ptr [ESP + 0x24]         ; 0049e57f
    PUSH ECX                            ; 0049e583
    MOV EBX,dword ptr [ESP + 0x24]      ; 0049e584
    PUSH EBX                            ; 0049e588
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049e589
    PUSH ESI                            ; 0049e58d
    PUSH 0x0                            ; 0049e58e
    MOV EDI,dword ptr [ESP + 0x28]      ; 0049e590
    PUSH EDI                            ; 0049e594
    CALL core_fire.cpp_CFireEffect_allocateToss_FUN_0049e5d0 ; 0049e595
        ;   XREF to: 0049e5d0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_allocateToss_FUN_0049e5d0(CFireEffect * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    IMUL EAX,EAX,0x3e4                  ; 0049e59a
    ADD ESP,0x18                        ; 0049e5a0
    MOV EDX,dword ptr [ESP + 0x28]      ; 0049e5a3
    MOV dword ptr [EAX + 0x1c97ae0],EDX ; 0049e5a7
    MOV EDX,0x1c97700                   ; 0049e5ad
    ADD EDX,EAX                         ; 0049e5b2
    ADD EDX,0x180                       ; 0049e5b4
    PUSH EDX                            ; 0049e5ba
    MOV EBP,dword ptr [EAX + 0x1c97ae0] ; 0049e5bb
    PUSH EBP                            ; 0049e5c1
    CALL sound_sndmain.cpp_FUN_00550da0 ; 0049e5c2
        ;   XREF to: 00550da0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00550da0()
    ADD ESP,0x8                         ; 0049e5c7
    POP EBP                             ; 0049e5ca
    POP EDI                             ; 0049e5cb
    POP ESI                             ; 0049e5cc
    POP EBX                             ; 0049e5cd
    RET                                 ; 0049e5ce

