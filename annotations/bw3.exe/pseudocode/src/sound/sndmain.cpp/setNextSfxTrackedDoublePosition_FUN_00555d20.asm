; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00555d20(CVector3d *position_source_ptr)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   position_source_ptr
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555d20 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_00555d20
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555d26
    SUB EAX,EDX                         ; 00555d2d
    SHL EAX,0x5                         ; 00555d2f
    MOV dword ptr [EAX + 0x2ceb940],0x2 ; 00555d32
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555d3c
    MOV dword ptr [EAX + 0x2ceb93c],EDX ; 00555d40
    RET                                 ; 00555d46

