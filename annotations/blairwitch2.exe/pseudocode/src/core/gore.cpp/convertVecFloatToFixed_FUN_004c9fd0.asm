; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004c9fd0(CVector3f *src,CVector3i *dst)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   src
; CVector3i *      Stack[0x8]:4   dst
;
; Referenced Globals:
;   undefined4 DAT_005f7bac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9fd0
        ;   Label: core_gore.cpp_convertVecFloatToFixed_FUN_004c9fd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c9fd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c9fd5
    FLD float ptr [EAX]                 ; 004c9fd9
    FMUL float ptr [0x005f7bac]         ; 004c9fdb | DAT_005f7bac
    FISTP dword ptr [EBX]               ; 004c9fe1
    FLD float ptr [EAX + 0x4]           ; 004c9fe3
    FMUL float ptr [0x005f7bac]         ; 004c9fe6 | DAT_005f7bac
    FISTP dword ptr [EBX + 0x4]         ; 004c9fec
    FLD float ptr [EAX + 0x8]           ; 004c9fef
    FMUL float ptr [0x005f7bac]         ; 004c9ff2 | DAT_005f7bac
    FISTP dword ptr [EBX + 0x8]         ; 004c9ff8
    POP EBX                             ; 004c9ffb
    RET                                 ; 004c9ffc

