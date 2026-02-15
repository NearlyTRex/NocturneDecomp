; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004ee340(void)
;
;
; Referenced Globals:
;   float FLOAT_0065f028 = 65536
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee340
        ;   Label: core_gore.cpp_FUN_004ee340
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ee341
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ee345
    FLD float ptr [EAX]                 ; 004ee349
    FMUL float ptr [0x0065f028]         ; 004ee34b | FLOAT_0065f028
    FISTP dword ptr [EBX]               ; 004ee351
    FLD float ptr [EAX + 0x4]           ; 004ee353
    FMUL float ptr [0x0065f028]         ; 004ee356 | FLOAT_0065f028
    FISTP dword ptr [EBX + 0x4]         ; 004ee35c
    FLD float ptr [EAX + 0x8]           ; 004ee35f
    FMUL float ptr [0x0065f028]         ; 004ee362 | FLOAT_0065f028
    FISTP dword ptr [EBX + 0x8]         ; 004ee368
    POP EBX                             ; 004ee36b
    RET                                 ; 004ee36c

