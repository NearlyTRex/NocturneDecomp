; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004cdbe0(undefined4 *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
;
; XREF[1]:
;   core_gore.cpp_FUN_004cf0c0 at 004cf148
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_d_005c46a0
;   TerminatedCString s_d_d_d_005c46ad
;   TerminatedCString s_f_f_f_005c46b7
;   TerminatedCString s_d_d_d_d_d_d_d_005c46c1
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdbe0
        ;   Label: core_gore.cpp_FUN_004cdbe0
    PUSH ESI                            ; 004cdbe1
    PUSH EDI                            ; 004cdbe2
    PUSH EBP                            ; 004cdbe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cdbe4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004cdbe8
    MOV EDX,dword ptr [EBX + 0x10]      ; 004cdbec
    PUSH EDX                            ; 004cdbef
    SUB ESP,0x8                         ; 004cdbf0
    FLD float ptr [EBX + 0xc]           ; 004cdbf3
    FSTP double ptr [ESP]               ; 004cdbf6
    SUB ESP,0x8                         ; 004cdbf9
    FLD float ptr [EBX + 0x8]           ; 004cdbfc
    FSTP double ptr [ESP]               ; 004cdbff
    SUB ESP,0x8                         ; 004cdc02
    FLD float ptr [EBX + 0x4]           ; 004cdc05
    FSTP double ptr [ESP]               ; 004cdc08
    PUSH 0x5c46a0                       ; 004cdc0b | = "%f,%f,%f,%d\n"
    PUSH ESI                            ; 004cdc10
    CALL crt_unknown.c_FUN_005a3140     ; 004cdc11
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 004cdc16
    MOV ECX,dword ptr [EBX]             ; 004cdc19
    PUSH ECX                            ; 004cdc1b
    MOV EDI,dword ptr [EBX + 0x18]      ; 004cdc1c
    PUSH EDI                            ; 004cdc1f
    MOV EBP,dword ptr [EBX + 0x14]      ; 004cdc20
    PUSH EBP                            ; 004cdc23
    PUSH 0x5c46ad                       ; 004cdc24 | = "%d,%d,%d\n"
    PUSH ESI                            ; 004cdc29
    CALL crt_unknown.c_FUN_005a3140     ; 004cdc2a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 004cdc2f
    SUB ESP,0x8                         ; 004cdc32
    FLD float ptr [EBX + 0x20]          ; 004cdc35
    FSTP double ptr [ESP]               ; 004cdc38
    SUB ESP,0x8                         ; 004cdc3b
    FLD float ptr [EBX + 0x24]          ; 004cdc3e
    FSTP double ptr [ESP]               ; 004cdc41
    SUB ESP,0x8                         ; 004cdc44
    FLD float ptr [EBX + 0x1c]          ; 004cdc47
    FSTP double ptr [ESP]               ; 004cdc4a
    PUSH 0x5c46b7                       ; 004cdc4d | = "%f,%f,%f\n"
    PUSH ESI                            ; 004cdc52
    CALL crt_unknown.c_FUN_005a3140     ; 004cdc53
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 004cdc58
    MOV EAX,dword ptr [EBX + 0x44]      ; 004cdc5b
    PUSH EAX                            ; 004cdc5e
    MOV EDX,dword ptr [EBX + 0x40]      ; 004cdc5f
    PUSH EDX                            ; 004cdc62
    MOV ECX,dword ptr [EBX + 0x3c]      ; 004cdc63
    PUSH ECX                            ; 004cdc66
    MOV EDI,dword ptr [EBX + 0x38]      ; 004cdc67
    PUSH EDI                            ; 004cdc6a
    MOV EBP,dword ptr [EBX + 0x34]      ; 004cdc6b
    PUSH EBP                            ; 004cdc6e
    MOV EAX,dword ptr [EBX + 0x30]      ; 004cdc6f
    PUSH EAX                            ; 004cdc72
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004cdc73
    PUSH EDX                            ; 004cdc76
    PUSH 0x5c46c1                       ; 004cdc77 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004cdc7c
    CALL crt_unknown.c_FUN_005a3140     ; 004cdc7d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 004cdc82
    POP EBP                             ; 004cdc85
    POP EDI                             ; 004cdc86
    POP ESI                             ; 004cdc87
    POP EBX                             ; 004cdc88
    RET                                 ; 004cdc89

