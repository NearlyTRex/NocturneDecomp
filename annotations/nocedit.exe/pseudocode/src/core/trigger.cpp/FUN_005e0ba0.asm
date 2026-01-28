; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_trigger_cpp_FUN_005e0ba0(void)
;
;
; XREF[2]:
;   core_trigger.cpp_CTrigger_FUN_005e1180 at 005e11fb
;   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 at 005e0917
;
; Referenced Globals:
;   void* switchdataD_005e0b78 = 005e0bba
;   double DOUBLE_006557cc = 10
;
; Called Functions:
;   crt_math.c_ceil_FUN_006001b2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0ba0
        ;   Label: core_trigger.cpp_FUN_005e0ba0
    SUB ESP,0x2c                        ; 005e0ba1
    MOV EBX,dword ptr [ESP + 0x34]      ; 005e0ba4
    MOV EAX,dword ptr [EBX + 0x174]     ; 005e0ba8
    CMP EAX,0x9                         ; 005e0bae
    JA 0x005e0c25                       ; 005e0bb1
        ;   XREF to: 005e0c25 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x5e0b78]  ; 005e0bb3 | caseD_0 | caseD_8 | switchdataD_005e0b78
        ;   Label: switchD
    MOV EDX,ESP                         ; 005e0bba
        ;   Label: caseD_1
    PUSH EDX                            ; 005e0bbc
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e0bbd
    PUSH EBX                            ; 005e0bc3
    CALL dword ptr [EAX + 0x14]         ; 005e0bc4
    LEA EDX,[EAX + 0xc]                 ; 005e0bc7
    FLD float ptr [EDX]                 ; 005e0bca
    FSUB float ptr [EAX]                ; 005e0bcc
    ADD ESP,0x8                         ; 005e0bce
    FSTP float ptr [ESP + 0x18]         ; 005e0bd1
    FLD float ptr [EDX + 0x4]           ; 005e0bd5
    FSUB float ptr [EAX + 0x4]          ; 005e0bd8
    FST float ptr [ESP + 0x1c]          ; 005e0bdb
    FMUL float ptr [ESP + 0x1c]         ; 005e0bdf
    FLD float ptr [ESP + 0x18]          ; 005e0be3
    FMUL ST0                            ; 005e0be7
    FLD float ptr [EDX + 0x8]           ; 005e0be9
    FSUB float ptr [EAX + 0x8]          ; 005e0bec
    FXCH                                ; 005e0bef
    FADDP ST2,ST0                       ; 005e0bf1
    FST float ptr [ESP + 0x20]          ; 005e0bf3
    FMUL float ptr [ESP + 0x20]         ; 005e0bf7
    FADDP                               ; 005e0bfb
    FSQRT                               ; 005e0bfd
    FADD double ptr [0x006557cc]        ; 005e0bff | DOUBLE_006557cc
    SUB ESP,0x8                         ; 005e0c05
    FSTP double ptr [ESP]               ; 005e0c08
    CALL crt_math.c_ceil_FUN_006001b2   ; 005e0c0b
        ;   XREF to: 006001b2 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_006001b2(double value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 005e0c10
    MOV dword ptr [ESP + 0x30],EDX      ; 005e0c14
    FLD double ptr [ESP + 0x2c]         ; 005e0c18
    FSTP float ptr [EBX + 0x158]        ; 005e0c1c
    ADD ESP,0x8                         ; 005e0c22
    ADD ESP,0x2c                        ; 005e0c25
        ;   Label: caseD_9
    POP EBX                             ; 005e0c28
    RET                                 ; 005e0c29

