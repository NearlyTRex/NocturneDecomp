; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005addd0(HMODULE param_1,LPWSTR param_2,DWORD param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7f6c at 005a8050
;
; Referenced Globals:
;   void* PTR_GetModuleFileNameA_005b35b8 = 001b3f26
;   void* PTR_GetModuleFileNameW_005b35bc = 001b3f3c
;   void* PTR_GetVersion_005b35d8 = 001b3fc2
;   void* PTR_MultiByteToWideChar_005b3604 = 001b408a
;
; Called Functions:
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_FUN_005afd50
;   GetModuleFileNameA
;   GetModuleFileNameW
;   GetVersion
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005addd0
        ;   Label: crt_unknown.c_FUN_005addd0
    PUSH ESI                            ; 005addd1
    PUSH EDI                            ; 005addd2
    PUSH EBP                            ; 005addd3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005addd4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005addd8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005adddc
    CALL dword ptr CS:[0x5b35d8]        ; 005adde0 | PTR_GetVersion_005b35d8
    SHR EAX,0x10                        ; 005adde7
    AND EAX,0xffff                      ; 005addea
    CMP AX,0x8000                       ; 005addef
    JNC 0x005ade04                      ; 005addf3
        ;   XREF to: 005ade04 (CONDITIONAL_JUMP)  ; LAB_005ade04
    PUSH EBP                            ; 005addf5
    PUSH ESI                            ; 005addf6
    PUSH EDI                            ; 005addf7
    CALL dword ptr CS:[0x5b35bc]        ; 005addf8 | PTR_GetModuleFileNameW_005b35bc
    POP EBP                             ; 005addff
    POP EDI                             ; 005ade00
    POP ESI                             ; 005ade01
    POP EBX                             ; 005ade02
    RET                                 ; 005ade03
    PUSH 0x208                          ; 005ade04
        ;   Label: LAB_005ade04
    CALL crt_unknown.c_FUN_005a3650     ; 005ade09
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    MOV EBX,EAX                         ; 005ade0e
    ADD ESP,0x4                         ; 005ade10
    TEST EAX,EAX                        ; 005ade13
    JZ 0x005ade6f                       ; 005ade15
        ;   XREF to: 005ade6f (CONDITIONAL_JUMP)  ; LAB_005ade6f
    PUSH 0x208                          ; 005ade17
    PUSH EAX                            ; 005ade1c
    PUSH EDI                            ; 005ade1d
    CALL dword ptr CS:[0x5b35b8]        ; 005ade1e | PTR_GetModuleFileNameA_005b35b8
    TEST EAX,EAX                        ; 005ade25
    JNZ 0x005ade39                      ; 005ade27
        ;   XREF to: 005ade39 (CONDITIONAL_JUMP)  ; LAB_005ade39
    PUSH EBX                            ; 005ade29
    CALL crt_unknown.c_FUN_005a3770     ; 005ade2a
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005ade2f
    XOR EAX,EAX                         ; 005ade32
    POP EBP                             ; 005ade34
    POP EDI                             ; 005ade35
    POP ESI                             ; 005ade36
    POP EBX                             ; 005ade37
    RET                                 ; 005ade38
    PUSH EBP                            ; 005ade39
        ;   Label: LAB_005ade39
    PUSH ESI                            ; 005ade3a
    PUSH -0x1                           ; 005ade3b
    PUSH EBX                            ; 005ade3d
    PUSH 0x1                            ; 005ade3e
    PUSH 0x1                            ; 005ade40
    CALL dword ptr CS:[0x5b3604]        ; 005ade42 | PTR_MultiByteToWideChar_005b3604
    PUSH EBX                            ; 005ade49
    MOV EDI,EAX                         ; 005ade4a
    CALL crt_unknown.c_FUN_005a3770     ; 005ade4c
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005ade51
    TEST EDI,EDI                        ; 005ade54
    JNZ 0x005ade5f                      ; 005ade56
        ;   XREF to: 005ade5f (CONDITIONAL_JUMP)  ; LAB_005ade5f
    XOR EAX,EAX                         ; 005ade58
    POP EBP                             ; 005ade5a
    POP EDI                             ; 005ade5b
    POP ESI                             ; 005ade5c
    POP EBX                             ; 005ade5d
    RET                                 ; 005ade5e
    PUSH ESI                            ; 005ade5f
        ;   Label: LAB_005ade5f
    MOV word ptr [ESI + EBP*0x2 + -0x2],0x0 ; 005ade60
    CALL crt_unknown.c_FUN_005afd50     ; 005ade67
        ;   XREF to: 005afd50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afd50()
    ADD ESP,0x4                         ; 005ade6c
    POP EBP                             ; 005ade6f
        ;   Label: LAB_005ade6f
    POP EDI                             ; 005ade70
    POP ESI                             ; 005ade71
    POP EBX                             ; 005ade72
    RET                                 ; 005ade73

