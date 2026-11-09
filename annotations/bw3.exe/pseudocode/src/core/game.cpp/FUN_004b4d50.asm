; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b4d50(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b7f90 at 004b842d
;
; Referenced Globals:
;   undefined4 DAT_01d22af4
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4d50
        ;   Label: core_game.cpp_FUN_004b4d50
    PUSH ESI                            ; 004b4d51
    PUSH EDI                            ; 004b4d52
    PUSH EBP                            ; 004b4d53
    MOV EBP,ESP                         ; 004b4d54
    SUB ESP,0x18                        ; 004b4d56
    AND ESP,0xfffffff8                  ; 004b4d59
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b4d5c
    FLD float ptr [EBX + 0x314]         ; 004b4d5f
    FSUBR float ptr [EBX + 0x434]       ; 004b4d65
    FST float ptr [EBX + 0x434]         ; 004b4d6b
    FLDZ                                ; 004b4d71
    FCOMPP                              ; 004b4d73
    FNSTSW AX                           ; 004b4d75
    SAHF                                ; 004b4d77
    JA 0x004b4e2f                       ; 004b4d78
        ;   XREF to: 004b4e2f (CONDITIONAL_JUMP)  ; LAB_004b4e2f
    FLD float ptr [EBX + 0x314]         ; 004b4d7e
        ;   Label: LAB_004b4d7e
    FSUBR float ptr [0x01d22af4]        ; 004b4d84 | DAT_01d22af4
    FST float ptr [0x01d22af4]          ; 004b4d8a | DAT_01d22af4
    FLDZ                                ; 004b4d90
    FCOMPP                              ; 004b4d92
    FNSTSW AX                           ; 004b4d94
    SAHF                                ; 004b4d96
    JBE 0x004b4da1                      ; 004b4d97
        ;   XREF to: 004b4da1 (CONDITIONAL_JUMP)  ; LAB_004b4da1
    XOR EDX,EDX                         ; 004b4d99
    MOV dword ptr [0x01d22af4],EDX      ; 004b4d9b | DAT_01d22af4
    MOV ECX,dword ptr [EBX + 0x43c]     ; 004b4da1
        ;   Label: LAB_004b4da1
    XOR ESI,ESI                         ; 004b4da7
    TEST ECX,ECX                        ; 004b4da9
    JLE 0x004b4e28                      ; 004b4dab
        ;   XREF to: 004b4e28 (CONDITIONAL_JUMP)  ; LAB_004b4e28
    LEA EAX,[EBX + 0x440]               ; 004b4db1
    LEA EDI,[EBX + 0x940]               ; 004b4db7
    MOV dword ptr [ESP + 0x10],EAX      ; 004b4dbd
    MOV dword ptr [ESP + 0x8],EDI       ; 004b4dc1
    ADD EAX,0x100                       ; 004b4dc5
    LEA EDI,[EBX + 0x954]               ; 004b4dca
    MOV dword ptr [ESP + 0xc],EAX       ; 004b4dd0
    MOV dword ptr [ESP + 0x4],EDI       ; 004b4dd4
    MOV EDI,EBX                         ; 004b4dd8
    FLD float ptr [EBX + 0x314]         ; 004b4dda
        ;   Label: LAB_004b4dda
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b4de0
    FSUBR float ptr [EDI + 0x954]       ; 004b4de7
    MOV dword ptr [ESP + 0x14],EAX      ; 004b4ded
    FST float ptr [EDI + 0x954]         ; 004b4df1
    FLDZ                                ; 004b4df7
    FCOMPP                              ; 004b4df9
    FNSTSW AX                           ; 004b4dfb
    SAHF                                ; 004b4dfd
    JNC 0x004b4e3e                      ; 004b4dfe
        ;   XREF to: 004b4e3e (CONDITIONAL_JUMP)  ; LAB_004b4e3e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b4e00
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b4e04
    INC ESI                             ; 004b4e08
    ADD EDI,0x4                         ; 004b4e09
    ADD EDX,0x100                       ; 004b4e0c
    ADD ECX,0x100                       ; 004b4e12
    MOV dword ptr [ESP + 0x10],EDX      ; 004b4e18
    MOV dword ptr [ESP + 0xc],ECX       ; 004b4e1c
    CMP ESI,dword ptr [EBX + 0x43c]     ; 004b4e20
    JL 0x004b4dda                       ; 004b4e26
        ;   XREF to: 004b4dda (CONDITIONAL_JUMP)  ; LAB_004b4dda
    MOV ESP,EBP                         ; 004b4e28
        ;   Label: LAB_004b4e28
    POP EBP                             ; 004b4e2a
    POP EDI                             ; 004b4e2b
    POP ESI                             ; 004b4e2c
    POP EBX                             ; 004b4e2d
    RET                                 ; 004b4e2e
    MOV dword ptr [EBX + 0x434],0x0     ; 004b4e2f
        ;   Label: LAB_004b4e2f
    JMP 0x004b4d7e                      ; 004b4e39
        ;   XREF to: 004b4d7e (UNCONDITIONAL_JUMP)  ; LAB_004b4d7e
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004b4e3e
        ;   Label: LAB_004b4e3e
    DEC EAX                             ; 004b4e44
    MOV dword ptr [EBX + 0x43c],EAX     ; 004b4e45
    SUB EAX,ESI                         ; 004b4e4b
    SHL EAX,0x8                         ; 004b4e4d
    PUSH EAX                            ; 004b4e50
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b4e51
    PUSH EDX                            ; 004b4e55
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b4e56
    PUSH ECX                            ; 004b4e5a
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004b4e5b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004b4e60
    SUB EAX,ESI                         ; 004b4e66
    ADD ESP,0xc                         ; 004b4e68
    SHL EAX,0x2                         ; 004b4e6b
    PUSH EAX                            ; 004b4e6e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b4e6f
    ADD EAX,0x4                         ; 004b4e73
    MOV dword ptr [ESP + 0x4],EAX       ; 004b4e76
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b4e7a
    ADD EAX,dword ptr [ESP + 0x4]       ; 004b4e7e
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b4e82
    PUSH EAX                            ; 004b4e86
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b4e87
    ADD EAX,ECX                         ; 004b4e8b
    PUSH EAX                            ; 004b4e8d
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004b4e8e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004b4e93
    SUB EAX,ESI                         ; 004b4e99
    ADD ESP,0xc                         ; 004b4e9b
    SHL EAX,0x2                         ; 004b4e9e
    MOV EDX,dword ptr [ESP]             ; 004b4ea1
    PUSH EAX                            ; 004b4ea4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b4ea5
    ADD EAX,EDX                         ; 004b4ea9
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b4eab
    PUSH EAX                            ; 004b4eaf
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b4eb0
    ADD EAX,ECX                         ; 004b4eb4
    PUSH EAX                            ; 004b4eb6
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004b4eb7
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b4ebc
    CMP ESI,dword ptr [EBX + 0x43c]     ; 004b4ebf
    JL 0x004b4dda                       ; 004b4ec5
        ;   XREF to: 004b4dda (CONDITIONAL_JUMP)  ; LAB_004b4dda
    MOV ESP,EBP                         ; 004b4ecb
    POP EBP                             ; 004b4ecd
    POP EDI                             ; 004b4ece
    POP ESI                             ; 004b4ecf
    POP EBX                             ; 004b4ed0
    RET                                 ; 004b4ed1

