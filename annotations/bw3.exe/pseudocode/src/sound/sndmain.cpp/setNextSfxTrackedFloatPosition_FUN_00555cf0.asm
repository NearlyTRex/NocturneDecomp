; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0(CVector3f *position_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position_source_ptr
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_0055f020 at 0055f216
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555cf0 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555cf6
    SUB EAX,EDX                         ; 00555cfd
    SHL EAX,0x5                         ; 00555cff
    MOV dword ptr [EAX + 0x2ceb940],0x1 ; 00555d02
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555d0c
    MOV dword ptr [EAX + 0x2ceb93c],EDX ; 00555d10
    RET                                 ; 00555d16

