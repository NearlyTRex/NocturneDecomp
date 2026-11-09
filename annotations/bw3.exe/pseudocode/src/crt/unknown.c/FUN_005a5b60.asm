; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a5b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_sscanf_FUN_005a5b9c at 005a5bb4
;
; Called Functions:
;   crt_unknown.c_FUN_005a82c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b60
        ;   Label: crt_unknown.c_FUN_005a5b60
    PUSH ESI                            ; 005a5b61
    SUB ESP,0x14                        ; 005a5b62
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a5b65
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a5b69
    MOV EDX,0x5a5b30                    ; 005a5b6d
    PUSH ECX                            ; 005a5b72
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a5b73
    MOV dword ptr [ESP + 0xc],EAX       ; 005a5b77
    PUSH ESI                            ; 005a5b7b
    LEA EAX,[ESP + 0x8]                 ; 005a5b7c
    MOV EBX,0x5a5b58                    ; 005a5b80
    PUSH EAX                            ; 005a5b85
    MOV dword ptr [ESP + 0xc],EDX       ; 005a5b86
    MOV dword ptr [ESP + 0x10],EBX      ; 005a5b8a
    CALL crt_unknown.c_FUN_005a82c0     ; 005a5b8e
        ;   XREF to: 005a82c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82c0()
    ADD ESP,0xc                         ; 005a5b93
    ADD ESP,0x14                        ; 005a5b96
    POP ESI                             ; 005a5b99
    POP EBX                             ; 005a5b9a
    RET                                 ; 005a5b9b

