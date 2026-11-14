; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0055b850(CDirectSoundDevice *this_ptr,double distance_in_feet)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   distance_in_feet
;
; Referenced Globals:
;   undefined4 DAT_005d46ed
;   undefined4 DAT_02cf49d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cf49d0]      ; 0055b850 | DAT_02cf49d0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0055b850
    TEST EDX,EDX                        ; 0055b856
    JNZ 0x0055b85b                      ; 0055b858
        ;   XREF to: 0055b85b (CONDITIONAL_JUMP)  ; LAB_0055b85b
    RET                                 ; 0055b85a
    FLD float ptr [ESP + 0x8]           ; 0055b85b
        ;   Label: LAB_0055b85b
    FMUL float ptr [0x005d46ed]         ; 0055b85f | DAT_005d46ed
    PUSH 0x0                            ; 0055b865
    MOV EAX,EDX                         ; 0055b867
    SUB ESP,0x4                         ; 0055b869
    MOV EDX,dword ptr [EDX]             ; 0055b86c
    FSTP float ptr [ESP]                ; 0055b86e
    PUSH EAX                            ; 0055b871
    CALL dword ptr [EDX + 0x2c]         ; 0055b872
    RET                                 ; 0055b875

