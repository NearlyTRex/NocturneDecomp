; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_sscanf_FUN_005c2cac at 005c2cc4
;
; Called Functions:
;   crt_unknown.c_FUN_005c5450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2c70
        ;   Label: crt_unknown.c_FUN_005c2c70
    PUSH ESI                            ; 005c2c71
    SUB ESP,0x14                        ; 005c2c72
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c2c75
    MOV ECX,dword ptr [ESP + 0x28]      ; 005c2c79
    MOV EDX,0x5c2c40                    ; 005c2c7d
    PUSH ECX                            ; 005c2c82
    MOV ESI,dword ptr [ESP + 0x28]      ; 005c2c83
    MOV dword ptr [ESP + 0xc],EAX       ; 005c2c87
    PUSH ESI                            ; 005c2c8b
    LEA EAX,[ESP + 0x8]                 ; 005c2c8c
    MOV EBX,0x5c2c68                    ; 005c2c90
    PUSH EAX                            ; 005c2c95
    MOV dword ptr [ESP + 0xc],EDX       ; 005c2c96
    MOV dword ptr [ESP + 0x10],EBX      ; 005c2c9a
    CALL crt_unknown.c_FUN_005c5450     ; 005c2c9e
        ;   XREF to: 005c5450 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5450()
    ADD ESP,0xc                         ; 005c2ca3
    ADD ESP,0x14                        ; 005c2ca6
    POP ESI                             ; 005c2ca9
    POP EBX                             ; 005c2caa
    RET                                 ; 005c2cab

