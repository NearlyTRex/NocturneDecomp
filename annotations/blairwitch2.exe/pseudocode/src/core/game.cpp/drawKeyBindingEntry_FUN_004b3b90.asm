; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004b3b90(EInputCodeType key_code,char *action_name)
;
; Parameters:
; EInputCodeType   Stack[0x4]:4   key_code
; char *           Stack[0x8]:4   action_name
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01cb80e8
;   undefined4 DAT_01cb80ec
;   undefined4 DAT_01cb80f0
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_004ee960
;   crt_unknown.c_FUN_005b7790
;   engine_font.cpp_FUN_004a8df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3b90
        ;   Label: core_game.cpp_drawKeyBindingEntry_FUN_004b3b90
    PUSH ESI                            ; 004b3b91
    PUSH EDI                            ; 004b3b92
    PUSH EBP                            ; 004b3b93
    SUB ESP,0x100                       ; 004b3b94
    MOV EDX,dword ptr [ESP + 0x118]     ; 004b3b9a
    PUSH EDX                            ; 004b3ba1
    MOV ECX,dword ptr [ESP + 0x118]     ; 004b3ba2
    PUSH ECX                            ; 004b3ba9
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b3baa
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b3baf
    PUSH EAX                            ; 004b3bb2
    PUSH 0x5d7333                       ; 004b3bb3
    LEA EAX,[ESP + 0xc]                 ; 004b3bb8
    PUSH EAX                            ; 004b3bbc
    CALL crt_unknown.c_FUN_005b7790     ; 004b3bbd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004b3bc2
    PUSH -0x1                           ; 004b3bc5
    PUSH 0x7                            ; 004b3bc7
    MOV EBX,dword ptr [0x01cb80ec]      ; 004b3bc9 | DAT_01cb80ec
    PUSH EBX                            ; 004b3bcf
    MOV ESI,dword ptr [0x01cb80e8]      ; 004b3bd0 | DAT_01cb80e8
    PUSH ESI                            ; 004b3bd6
    LEA EAX,[ESP + 0x10]                ; 004b3bd7
    PUSH EAX                            ; 004b3bdb
    MOV EDI,dword ptr [0x01511cc0]      ; 004b3bdc | DAT_01511cc0
    PUSH EDI                            ; 004b3be2
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3be3
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3be8 | DAT_01cb80f0
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b3bed | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b3bf3 | DAT_006141bc
    ADD EBP,EAX                         ; 004b3bf9
    SHL EAX,0x2                         ; 004b3bfb
    ADD ESP,0x18                        ; 004b3bfe
    SUB EDX,EAX                         ; 004b3c01
    MOV dword ptr [0x01cb80ec],EBP      ; 004b3c03 | DAT_01cb80ec
    CMP EDX,EBP                         ; 004b3c09
    JL 0x004b3c18                       ; 004b3c0b
        ;   XREF to: 004b3c18 (CONDITIONAL_JUMP)  ; LAB_004b3c18
    ADD ESP,0x100                       ; 004b3c0d
    POP EBP                             ; 004b3c13
    POP EDI                             ; 004b3c14
    POP ESI                             ; 004b3c15
    POP EBX                             ; 004b3c16
    RET                                 ; 004b3c17
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3c18 | DAT_01cb80f0
        ;   Label: LAB_004b3c18
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3c1e
    SUB EAX,EDX                         ; 004b3c25
    ADD EAX,EAX                         ; 004b3c27
    MOV [0x01cb80ec],EAX                ; 004b3c29 | DAT_01cb80ec
    MOV EAX,[0x006141b8]                ; 004b3c2e | DAT_006141b8
    MOV EDX,EAX                         ; 004b3c33
    MOV ECX,0x3                         ; 004b3c35
    SAR EDX,0x1f                        ; 004b3c3a
    IDIV ECX                            ; 004b3c3d
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3c3f | DAT_01cb80e8
    ADD ESP,0x100                       ; 004b3c45
    POP EBP                             ; 004b3c4b
    POP EDI                             ; 004b3c4c
    POP ESI                             ; 004b3c4d
    POP EBX                             ; 004b3c4e
    RET                                 ; 004b3c4f

