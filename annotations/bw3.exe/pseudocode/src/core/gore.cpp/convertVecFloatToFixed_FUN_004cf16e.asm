; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_convertVecFloatToFixed_FUN_004cf16e(float *param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0e1c
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004cf16e
        ;   Label: core_gore.cpp_convertVecFloatToFixed_FUN_004cf16e
    PUSH EBX                            ; 004cf170
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cf171
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cf175
    FLD float ptr [EAX]                 ; 004cf179
    FMUL float ptr [0x005e0e1c]         ; 004cf17b | DAT_005e0e1c
    FISTP dword ptr [EBX]               ; 004cf181
    FLD float ptr [EAX + 0x4]           ; 004cf183
    FMUL float ptr [0x005e0e1c]         ; 004cf186 | DAT_005e0e1c
    FISTP dword ptr [EBX + 0x4]         ; 004cf18c
    FLD float ptr [EAX + 0x8]           ; 004cf18f
    FMUL float ptr [0x005e0e1c]         ; 004cf192 | DAT_005e0e1c
    FISTP dword ptr [EBX + 0x8]         ; 004cf198
    POP EBX                             ; 004cf19b
    RET                                 ; 004cf19c

