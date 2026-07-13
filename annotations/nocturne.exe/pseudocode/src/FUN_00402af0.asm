; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_00402a60
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402af0
        ;   Label: FUN_00402af0
    PUSH ESI                            ; 00402af1
    SUB ESP,0x1004                      ; 00402af2
    LEA EAX,[ESP + 0x101c]              ; 00402af8
    MOV dword ptr [ESP + 0x1000],EAX    ; 00402aff
    LEA EAX,[ESP + 0x1000]              ; 00402b06
    PUSH EAX                            ; 00402b0d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 00402b0e
    PUSH EDX                            ; 00402b15
    LEA EAX,[ESP + 0x8]                 ; 00402b16
    PUSH EAX                            ; 00402b1a
    CALL FUN_00563a08                   ; 00402b1b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00402b20
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402b23
    PUSH EBX                            ; 00402b2a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 00402b2b
    PUSH ESI                            ; 00402b32
    LEA EAX,[ESP + 0x8]                 ; 00402b33
    XOR ECX,ECX                         ; 00402b37
    PUSH EAX                            ; 00402b39
    MOV dword ptr [ESP + 0x100c],ECX    ; 00402b3a
    CALL FUN_00402a60                   ; 00402b41
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00402a60()
    ADD ESP,0xc                         ; 00402b46
    ADD ESP,0x1004                      ; 00402b49
    POP ESI                             ; 00402b4f
    POP EBX                             ; 00402b50
    RET                                 ; 00402b51

