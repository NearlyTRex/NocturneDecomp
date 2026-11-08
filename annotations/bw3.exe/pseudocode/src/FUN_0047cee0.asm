; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047cee0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[8]:
;   FUN_004ac900 at 004acb03
;   FUN_004e44e0 at 004e4890
;   FUN_0051b550 at 0051c00b
;   FUN_00520d20 at 00520d8e
;   FUN_00521880 at 00521ad3
;   FUN_00524940 at 00525909
;   FUN_00530ad0 at 00530de4
;   FUN_0053b7f0 at 0053b888
;
; Referenced Globals:
;   TerminatedCString s_Warning_005bce77
;   undefined4 DAT_01c5bb08
;
; Called Functions:
;   FUN_0047c8e0
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cee0
        ;   Label: FUN_0047cee0
    SUB ESP,0x404                       ; 0047cee1
    LEA EAX,[ESP + 0x414]               ; 0047cee7
    MOV dword ptr [ESP + 0x400],EAX     ; 0047ceee
    LEA EAX,[ESP + 0x400]               ; 0047cef5
    PUSH EAX                            ; 0047cefc
    MOV EDX,dword ptr [ESP + 0x414]     ; 0047cefd
    PUSH EDX                            ; 0047cf04
    LEA EAX,[ESP + 0x8]                 ; 0047cf05
    PUSH EAX                            ; 0047cf09
    CALL FUN_005a2898                   ; 0047cf0a
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 0047cf0f
    MOV EBX,dword ptr [0x01c5bb08]      ; 0047cf12 | DAT_01c5bb08
    PUSH EBX                            ; 0047cf18
    LEA EAX,[ESP + 0x4]                 ; 0047cf19
    PUSH EAX                            ; 0047cf1d
    XOR ECX,ECX                         ; 0047cf1e
    PUSH 0x5bce77                       ; 0047cf20 | = "Warning"
    MOV dword ptr [ESP + 0x40c],ECX     ; 0047cf25
    CALL FUN_0047c8e0                   ; 0047cf2c
        ;   XREF to: 0047c8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c8e0()
    ADD ESP,0xc                         ; 0047cf31
    ADD ESP,0x404                       ; 0047cf34
    POP EBX                             ; 0047cf3a
    RET                                 ; 0047cf3b

