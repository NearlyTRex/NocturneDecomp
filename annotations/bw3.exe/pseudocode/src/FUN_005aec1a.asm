; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005aec1a(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_005aed4b at 005aedad
;
; Called Functions:
;   FUN_005aec4d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aec1a
        ;   Label: FUN_005aec1a
    MOV EBP,ESP                         ; 005aec1b
    SUB ESP,0x10                        ; 005aec1d
    MOV EDX,dword ptr [EBP + 0xc]       ; 005aec20
    PUSH EDX                            ; 005aec23
    PUSH EDX                            ; 005aec24
    MOV ECX,dword ptr [EBP + 0x8]       ; 005aec25
    PUSH ECX                            ; 005aec28
    CALL FUN_005aec4d                   ; 005aec29
        ;   XREF to: 005aec4d (UNCONDITIONAL_CALL)  ; undefined FUN_005aec4d()
    MOV dword ptr [EBP + -0x10],EAX     ; 005aec2e
    MOV dword ptr [EBP + -0xc],EDX      ; 005aec31
    ADD ESP,0xc                         ; 005aec34
    MOV EAX,dword ptr [EBP + -0x10]     ; 005aec37
    MOV dword ptr [EBP + -0x8],EAX      ; 005aec3a
    MOV EAX,dword ptr [EBP + -0xc]      ; 005aec3d
    MOV dword ptr [EBP + -0x4],EAX      ; 005aec40
    MOV EAX,dword ptr [EBP + -0x8]      ; 005aec43
    MOV EDX,dword ptr [EBP + -0x4]      ; 005aec46
    MOV ESP,EBP                         ; 005aec49
    POP EBP                             ; 005aec4b
    RET                                 ; 005aec4c

