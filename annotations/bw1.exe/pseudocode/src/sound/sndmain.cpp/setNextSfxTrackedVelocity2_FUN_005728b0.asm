; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005728b0(CVector3d *velocity_source_ptr)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   velocity_source_ptr
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005728b0 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_005728b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005728b6
    SUB EAX,EDX                         ; 005728bd
    SHL EAX,0x5                         ; 005728bf
    MOV dword ptr [EAX + 0x2c78d24],0x2 ; 005728c2
    MOV EDX,dword ptr [ESP + 0x4]       ; 005728cc
    MOV dword ptr [EAX + 0x2c78d20],EDX ; 005728d0
    RET                                 ; 005728d6

