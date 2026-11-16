; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044eeb0(int param_1,float param_2,float param_3,float param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddfbc
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044eeb0
        ;   Label: FUN_0044eeb0
    SUB ESP,0x18                        ; 0044eeb1
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044eeb4
    MOV dword ptr [ESP + 0xc],EAX       ; 0044eeb8
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044eebc
    MOV dword ptr [ESP + 0x10],EAX      ; 0044eec0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044eec4
    MOV EBX,ESP                         ; 0044eec8
    MOV dword ptr [ESP + 0x14],EAX      ; 0044eeca
    LEA EAX,[ESP + 0xc]                 ; 0044eece
    MOV EDX,dword ptr [0x005f2afc]      ; 0044eed2 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0044eed8
    FMUL float ptr [0x005ddfbc]         ; 0044eeda | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044eee0
    FLD float ptr [EAX + 0x4]           ; 0044eee2
    FMUL float ptr [0x005ddfbc]         ; 0044eee5 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044eeeb
    FLD float ptr [EAX + 0x8]           ; 0044eeee
    FMUL float ptr [0x005ddfbc]         ; 0044eef1 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044eef7
    MOV EAX,ESP                         ; 0044eefa
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044eefc
    PUSH EAX                            ; 0044ef00
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044ef01
    SUB EAX,EBX                         ; 0044ef08
    MOV EDX,dword ptr [EDX]             ; 0044ef0a
    SHL EAX,0x4                         ; 0044ef0c
    ADD EAX,EDX                         ; 0044ef0f
    PUSH EAX                            ; 0044ef11
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 0044ef12
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044ef17
    ADD ESP,0x18                        ; 0044ef1a
    POP EBX                             ; 0044ef1d
    RET                                 ; 0044ef1e

