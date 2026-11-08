; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cc9f0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_005c9ea0 at 005c9ed2
;
; Called Functions:
;   FUN_005c9110
;   FUN_005cdec0
;   FUN_005cdf00
;   FUN_005cdf70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc9f0
        ;   Label: FUN_005cc9f0
    PUSH ESI                            ; 005cc9f1
    SUB ESP,0x8                         ; 005cc9f2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005cc9f5
    PUSH EDX                            ; 005cc9f9
    LEA EAX,[ESP + 0x8]                 ; 005cc9fa
    PUSH EAX                            ; 005cc9fe
    CALL FUN_005cdec0                   ; 005cc9ff
        ;   XREF to: 005cdec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdec0()
    ADD ESP,0x8                         ; 005cca04
    MOV EBX,dword ptr [ESP + 0x14]      ; 005cca07
    PUSH EBX                            ; 005cca0b
    CALL FUN_005c9110                   ; 005cca0c
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9110()
    ADD ESP,0x4                         ; 005cca11
    MOV ECX,dword ptr [ESP + 0x18]      ; 005cca14
    XOR DL,DL                           ; 005cca18
    PUSH ECX                            ; 005cca1a
    MOV byte ptr [ESP + EAX*0x1 + 0x8],DL ; 005cca1b
    LEA EAX,[ESP + 0x4]                 ; 005cca1f
    PUSH EAX                            ; 005cca23
    CALL FUN_005cdec0                   ; 005cca24
        ;   XREF to: 005cdec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdec0()
    ADD ESP,0x8                         ; 005cca29
    MOV ESI,dword ptr [ESP + 0x18]      ; 005cca2c
    PUSH ESI                            ; 005cca30
    CALL FUN_005c9110                   ; 005cca31
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9110()
    ADD ESP,0x4                         ; 005cca36
    XOR DH,DH                           ; 005cca39
    MOV byte ptr [ESP + EAX*0x1],DH     ; 005cca3b
    LEA EAX,[ESP + 0x4]                 ; 005cca3e
    PUSH EAX                            ; 005cca42
    CALL FUN_005cdf00                   ; 005cca43
        ;   XREF to: 005cdf00 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdf00()
    ADD ESP,0x4                         ; 005cca48
    MOV EAX,ESP                         ; 005cca4b
    PUSH EAX                            ; 005cca4d
    CALL FUN_005cdf00                   ; 005cca4e
        ;   XREF to: 005cdf00 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdf00()
    ADD ESP,0x4                         ; 005cca53
    MOV EAX,ESP                         ; 005cca56
    PUSH EAX                            ; 005cca58
    LEA EAX,[ESP + 0x8]                 ; 005cca59
    PUSH EAX                            ; 005cca5d
    CALL FUN_005cdf70                   ; 005cca5e
        ;   XREF to: 005cdf70 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdf70()
    ADD ESP,0x8                         ; 005cca63
    ADD ESP,0x8                         ; 005cca66
    POP ESI                             ; 005cca69
    POP EBX                             ; 005cca6a
    RET                                 ; 005cca6b

