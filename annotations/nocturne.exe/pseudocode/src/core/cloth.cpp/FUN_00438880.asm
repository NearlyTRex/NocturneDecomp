; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_cloth_cpp_FUN_00438880(void)
;
;
; Referenced Globals:
;   undefined4 CVector3f_01c70708.z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438880
        ;   Label: core_cloth.cpp_FUN_00438880
    MOV EDX,dword ptr [0x01c70710]      ; 00438884 | CVector3f_01c70708.z
    SAR EAX,0x1                         ; 0043888a
    SUB EDX,EAX                         ; 0043888c
    MOV EAX,EDX                         ; 0043888e
    RET                                 ; 00438890

