; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_FUN_005f8d30()
;
;
; Referenced Globals:
;   float FLOAT_0065843d = 0.5
;   double DOUBLE_00658445 = 0.400000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f8d30
        ;   Label: core_zombie.cpp_FUN_005f8d30
    PUSH EBP                            ; 005f8d31
    MOV EBP,ESP                         ; 005f8d32
    SUB ESP,0x24                        ; 005f8d34
    AND ESP,0xfffffff8                  ; 005f8d37
    MOV EBX,dword ptr [EBP + 0xc]       ; 005f8d3a
    MOV ECX,dword ptr [EBP + 0x10]      ; 005f8d3d
    MOV EAX,ESP                         ; 005f8d40
    PUSH EAX                            ; 005f8d42
    MOV EDX,dword ptr [ECX + 0x154]     ; 005f8d43
    PUSH ECX                            ; 005f8d49
    CALL dword ptr [EDX + 0x14]         ; 005f8d4a
    ADD ESP,0x8                         ; 005f8d4d
    FLD float ptr [ESP]                 ; 005f8d50
    FADD float ptr [ESP + 0xc]          ; 005f8d53
    FST float ptr [ESP + 0x18]          ; 005f8d57
    FLD float ptr [0x0065843d]          ; 005f8d5b | FLOAT_0065843d
    FXCH                                ; 005f8d61
    FMUL ST1                            ; 005f8d63
    FLD float ptr [ESP + 0x8]           ; 005f8d65
    FLD float ptr [ESP + 0x4]           ; 005f8d69
    FADD float ptr [ESP + 0x10]         ; 005f8d6d
    FXCH                                ; 005f8d71
    FADD float ptr [ESP + 0x14]         ; 005f8d73
    FXCH                                ; 005f8d77
    FSTP float ptr [ESP + 0x1c]         ; 005f8d79
    FSTP float ptr [ESP + 0x20]         ; 005f8d7d
    FSTP float ptr [EBX]                ; 005f8d81
    FMUL float ptr [ESP + 0x1c]         ; 005f8d83
    FSTP float ptr [EBX + 0x4]          ; 005f8d87
    FLD float ptr [ESP + 0x8]           ; 005f8d8a
    FADD double ptr [0x00658445]        ; 005f8d8e | DOUBLE_00658445
    MOV EAX,EBX                         ; 005f8d94
    FSTP float ptr [EBX + 0x8]          ; 005f8d96
    MOV ESP,EBP                         ; 005f8d99
    POP EBP                             ; 005f8d9b
    POP EBX                             ; 005f8d9c
    RET                                 ; 005f8d9d

