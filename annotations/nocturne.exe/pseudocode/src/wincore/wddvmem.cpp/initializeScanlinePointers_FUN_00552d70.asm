; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_00552d70(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c5010
;   undefined4 DAT_006af62c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bd4260
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00552d70
        ;   Label: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_00552d70
    SUB ESP,0x4                         ; 00552d71
    MOV EDX,dword ptr [0x005b7620]      ; 00552d74 | DAT_005b7620
    XOR ECX,ECX                         ; 00552d7a
    TEST EDX,EDX                        ; 00552d7c
    JLE 0x00552ded                      ; 00552d7e
        ;   XREF to: 00552ded (CONDITIONAL_JUMP)  ; LAB_00552ded
    PUSH EDI                            ; 00552d80
    PUSH ESI                            ; 00552d81
    PUSH EBX                            ; 00552d82
    MOV EAX,[0x005b7624]                ; 00552d83 | DAT_005b7624
    MOV EDX,EAX                         ; 00552d88
    SAR EDX,0x1f                        ; 00552d8a
    SHL EDX,0x3                         ; 00552d8d
    SBB EAX,EDX                         ; 00552d90
    SAR EAX,0x3                         ; 00552d92
    MOV EDI,EAX                         ; 00552d95
    MOV EAX,[0x005b761c]                ; 00552d97 | DAT_005b761c
    SHL EAX,0x2                         ; 00552d9c
    MOV EBP,dword ptr [0x005b761c]      ; 00552d9f | DAT_005b761c
    MOV dword ptr [ESP + 0xc],EAX       ; 00552da5
    XOR EAX,EAX                         ; 00552da9
    IMUL EDX,EBP,0x0                    ; 00552dab
    MOV EBX,dword ptr [0x005b761c]      ; 00552dae | DAT_005b761c
        ;   Label: LAB_00552dae
    IMUL EBX,ECX                        ; 00552db4
    IMUL EBX,EDI                        ; 00552db7
    MOV ESI,dword ptr [0x005c5010]      ; 00552dba | DAT_005c5010
    ADD EBX,ESI                         ; 00552dc0
    MOV dword ptr [EAX + 0x1bd2fa0],EBX ; 00552dc2 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV EBX,dword ptr [0x006af62c]      ; 00552dc8 | DAT_006af62c
    ADD EAX,0x4                         ; 00552dce
    ADD EBX,EDX                         ; 00552dd1
    INC ECX                             ; 00552dd3
    MOV dword ptr [EAX + 0x1bd425c],EBX ; 00552dd4 | DAT_01bd4260
    MOV EBX,dword ptr [ESP + 0xc]       ; 00552dda
    MOV ESI,dword ptr [0x005b7620]      ; 00552dde | DAT_005b7620
    ADD EDX,EBX                         ; 00552de4
    CMP ECX,ESI                         ; 00552de6
    JL 0x00552dae                       ; 00552de8
        ;   XREF to: 00552dae (CONDITIONAL_JUMP)  ; LAB_00552dae
    POP EBX                             ; 00552dea
    POP ESI                             ; 00552deb
    POP EDI                             ; 00552dec
    ADD ESP,0x4                         ; 00552ded
        ;   Label: LAB_00552ded
    POP EBP                             ; 00552df0
    RET                                 ; 00552df1

