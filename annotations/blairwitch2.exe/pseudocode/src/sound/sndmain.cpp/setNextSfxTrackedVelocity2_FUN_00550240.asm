; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(CVector3d *velocity_source_ptr)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   velocity_source_ptr
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550240 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_00550240
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550246
    SUB EAX,EDX                         ; 0055024d
    SHL EAX,0x5                         ; 0055024f
    MOV dword ptr [EAX + 0x2641654],0x2 ; 00550252
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055025c
    MOV dword ptr [EAX + 0x2641650],EDX ; 00550260
    RET                                 ; 00550266

