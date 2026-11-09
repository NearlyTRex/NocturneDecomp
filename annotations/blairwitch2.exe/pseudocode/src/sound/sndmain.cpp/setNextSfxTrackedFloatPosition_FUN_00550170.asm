; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f *position_source_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position_source_ptr
;
; XREF[7]:
;   core_dracbrid.cpp_FUN_00465400 at 0046586d
;   core_frankgen.cpp_FUN_004aca40 at 004aca72
;   core_lightgun.cpp_FUN_004e38d0 at 004e3a87
;   core_manpuz.cpp_FUN_004e7220 at 004e7377
;   core_manpuz.cpp_FUN_004e73c0 at 004e742d
;   core_sound.cpp_FUN_005594c0 at 005596b6
;   core_vehicle.cpp_FUN_00584d90 at 00584d9f
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550170 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550176
    SUB EAX,EDX                         ; 0055017d
    SHL EAX,0x5                         ; 0055017f
    MOV dword ptr [EAX + 0x2641640],0x1 ; 00550182
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055018c
    MOV dword ptr [EAX + 0x264163c],EDX ; 00550190
    RET                                 ; 00550196

