; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c8dd0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dynamite.cpp_FUN_0049ce70 at 0049cea8
;
; Referenced Globals:
;   double DOUBLE_0062a0b3 = 0.000100000000000000
;   CToss[20] g_TossPool
;   undefined4 DAT_02d67cb0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_FUN_004c8e40
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8dd0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8dd0
    PUSH ESI                            ; 004c8dd1
    PUSH EDI                            ; 004c8dd2
    PUSH EBP                            ; 004c8dd3
    FLD float ptr [ESP + 0x24]          ; 004c8dd4
    FCOMP double ptr [0x0062a0b3]       ; 004c8dd8 | DOUBLE_0062a0b3
    FNSTSW AX                           ; 004c8dde
    SAHF                                ; 004c8de0
    JNC 0x004c8deb                      ; 004c8de1
        ;   XREF to: 004c8deb (CONDITIONAL_JUMP)  ; LAB_004c8deb
    MOV dword ptr [ESP + 0x24],0x38d1b717 ; 004c8de3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c8deb
        ;   Label: LAB_004c8deb
    PUSH dword ptr [ESP + 0x24]         ; 004c8def
    PUSH ECX                            ; 004c8df3
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c8df4
    PUSH EBX                            ; 004c8df8
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c8df9
    PUSH ESI                            ; 004c8dfd
    PUSH 0x0                            ; 004c8dfe
    MOV EDI,dword ptr [ESP + 0x28]      ; 004c8e00
    PUSH EDI                            ; 004c8e04
    CALL core_fire.cpp_CFireEffect_FUN_004c8e40 ; 004c8e05
        ;   XREF to: 004c8e40 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_FUN_004c8e40(CFireEffect * this_ptr)
    IMUL EAX,EAX,0x3e4                  ; 004c8e0a
    ADD ESP,0x18                        ; 004c8e10
    MOV EDX,dword ptr [ESP + 0x28]      ; 004c8e13
    MOV dword ptr [EAX + 0x2d67cb0],EDX ; 004c8e17 | DAT_02d67cb0
    MOV EDX,0x2d678d0                   ; 004c8e1d | g_TossPool
    ADD EDX,EAX                         ; 004c8e22
    ADD EDX,0x180                       ; 004c8e24
    PUSH EDX                            ; 004c8e2a
    MOV EBP,dword ptr [EAX + 0x2d67cb0] ; 004c8e2b | DAT_02d67cb0
    PUSH EBP                            ; 004c8e31
    CALL sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0 ; 004c8e32
        ;   XREF to: 005a98b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0(uint sfx_handle, CVector3f * position_source_ptr)
    ADD ESP,0x8                         ; 004c8e37
    POP EBP                             ; 004c8e3a
    POP EDI                             ; 004c8e3b
    POP ESI                             ; 004c8e3c
    POP EBX                             ; 004c8e3d
    RET                                 ; 004c8e3e

