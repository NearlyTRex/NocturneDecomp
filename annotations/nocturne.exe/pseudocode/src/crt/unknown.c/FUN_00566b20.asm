; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00566b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_sscanf_FUN_00566b5c at 00566b74
;
; Called Functions:
;   FUN_00567560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566b20
        ;   Label: crt_unknown.c_FUN_00566b20
    PUSH ESI                            ; 00566b21
    SUB ESP,0x14                        ; 00566b22
    MOV EAX,dword ptr [ESP + 0x20]      ; 00566b25
    MOV ECX,dword ptr [ESP + 0x28]      ; 00566b29
    MOV EDX,0x566af0                    ; 00566b2d
    PUSH ECX                            ; 00566b32
    MOV ESI,dword ptr [ESP + 0x28]      ; 00566b33
    MOV dword ptr [ESP + 0xc],EAX       ; 00566b37
    PUSH ESI                            ; 00566b3b
    LEA EAX,[ESP + 0x8]                 ; 00566b3c
    MOV EBX,0x566b18                    ; 00566b40
    PUSH EAX                            ; 00566b45
    MOV dword ptr [ESP + 0xc],EDX       ; 00566b46
    MOV dword ptr [ESP + 0x10],EBX      ; 00566b4a
    CALL FUN_00567560                   ; 00566b4e
        ;   XREF to: 00567560 (UNCONDITIONAL_CALL)  ; undefined FUN_00567560()
    ADD ESP,0xc                         ; 00566b53
    ADD ESP,0x14                        ; 00566b56
    POP ESI                             ; 00566b59
    POP EBX                             ; 00566b5a
    RET                                 ; 00566b5b

