; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0(CDirectSoundDevice *this_ptr,double distance_in_feet)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   distance_in_feet
;
; Referenced Globals:
;   undefined4 DAT_005f4df3
;   undefined4 DAT_02c81da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c81da0]      ; 005786e0 | DAT_02c81da0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005786e0
    TEST EDX,EDX                        ; 005786e6
    JNZ 0x005786eb                      ; 005786e8
        ;   XREF to: 005786eb (CONDITIONAL_JUMP)  ; LAB_005786eb
    RET                                 ; 005786ea
    FLD float ptr [ESP + 0x8]           ; 005786eb
        ;   Label: LAB_005786eb
    FMUL float ptr [0x005f4df3]         ; 005786ef | DAT_005f4df3
    PUSH 0x0                            ; 005786f5
    MOV EAX,EDX                         ; 005786f7
    SUB ESP,0x4                         ; 005786f9
    MOV EDX,dword ptr [EDX]             ; 005786fc
    FSTP float ptr [ESP]                ; 005786fe
    PUSH EAX                            ; 00578701
    CALL dword ptr [EDX + 0x2c]         ; 00578702
    RET                                 ; 00578705

