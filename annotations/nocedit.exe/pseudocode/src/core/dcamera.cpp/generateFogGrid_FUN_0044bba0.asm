; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0044bba0(SFogGrid *fog)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog
; Local Variables:
; char *           Stack[-0x4c]:4  local_4c
; char *           Stack[-0x48]:4  local_48
; char *           Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; uint             Stack[-0x30]:4  local_30
; uint             Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0 at 004529a5
;
; Called Functions:
;   core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bba0
        ;   Label: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
    PUSH ESI                            ; 0044bba1
    PUSH EDI                            ; 0044bba2
    PUSH EBP                            ; 0044bba3
    SUB ESP,0x3c                        ; 0044bba4
    PUSH 0x1000                         ; 0044bba7
    PUSH 0x0                            ; 0044bbac
    MOV EDX,dword ptr [ESP + 0x58]      ; 0044bbae
    PUSH EDX                            ; 0044bbb2
    XOR EBP,EBP                         ; 0044bbb3
    CALL crt_memory.c_memset_FUN_005fde40 ; 0044bbb5
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044bbba
    MOV ECX,0x1000                      ; 0044bbbd
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044bbc2
    MOV dword ptr [ESP + 0x10],ECX      ; 0044bbc6
    MOV dword ptr [ESP + 0x14],EAX      ; 0044bbca
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044bbce
        ;   Label: LAB_0044bbce
    XOR EDI,EDI                         ; 0044bbd2
    MOV dword ptr [ESP + 0x18],EAX      ; 0044bbd4
    MOV EAX,EDI                         ; 0044bbd8
        ;   Label: LAB_0044bbd8
    SHL EAX,0x4                         ; 0044bbda
    MOV ESI,dword ptr [ESP + 0x50]      ; 0044bbdd
    LEA EBX,[EAX + EBP*0x1]             ; 0044bbe1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044bbe4
    ADD EBX,ESI                         ; 0044bbe8
    ADD EAX,EDX                         ; 0044bbea
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044bbec
    ADD ESI,EAX                         ; 0044bbf0
    ADD EBX,0x100                       ; 0044bbf2
        ;   Label: LAB_0044bbf2
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0044bbf8
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0044bbfd
    CMP EBX,ESI                         ; 0044bc03
    JNZ 0x0044bbf2                      ; 0044bc05
        ;   XREF to: 0044bbf2 (CONDITIONAL_JUMP)  ; LAB_0044bbf2
    INC EDI                             ; 0044bc07
    CMP EDI,0x10                        ; 0044bc08
    JL 0x0044bbd8                       ; 0044bc0b
        ;   XREF to: 0044bbd8 (CONDITIONAL_JUMP)  ; LAB_0044bbd8
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044bc0d
    INC ECX                             ; 0044bc11
    INC EBP                             ; 0044bc12
    MOV dword ptr [ESP + 0x10],ECX      ; 0044bc13
    CMP EBP,0x10                        ; 0044bc17
    JL 0x0044bbce                       ; 0044bc1a
        ;   XREF to: 0044bbce (CONDITIONAL_JUMP)  ; LAB_0044bbce
    XOR EBX,ESI                         ; 0044bc1c
    MOV ESI,0xffffffff                  ; 0044bc1e
    MOV dword ptr [ESP + 0x38],EBX      ; 0044bc23
    MOV dword ptr [ESP + 0x1c],ESI      ; 0044bc27
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044bc2b
        ;   Label: LAB_0044bc2b
    MOV EBP,0xffffffff                  ; 0044bc2f
    AND EAX,0xf                         ; 0044bc34
    XOR EDI,EDI                         ; 0044bc37
    MOV dword ptr [ESP + 0x20],EAX      ; 0044bc39
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044bc3d
    MOV dword ptr [ESP + 0x28],EBP      ; 0044bc41
    INC EAX                             ; 0044bc45
    MOV dword ptr [ESP + 0x30],EDI      ; 0044bc46
    AND EAX,0xf                         ; 0044bc4a
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044bc4d
    MOV dword ptr [ESP + 0x24],EAX      ; 0044bc51
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044bc55
        ;   Label: LAB_0044bc55
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044bc59
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0044bc5d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0044bc61
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044bc65
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044bc69
    XOR ESI,ESI                         ; 0044bc6d
    MOV dword ptr [ESP + 0x34],EAX      ; 0044bc6f
    AND ECX,0xf                         ; 0044bc73
    INC EBX                             ; 0044bc76
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044bc77
    ADD EBP,EDX                         ; 0044bc7b
    ADD EAX,EDX                         ; 0044bc7d
    AND EBX,0xf                         ; 0044bc7f
    ADD EAX,EDI                         ; 0044bc82
    SHL EBX,0x4                         ; 0044bc84
    MOV dword ptr [ESP + 0xc],EAX       ; 0044bc87
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044bc8b
    SHL ECX,0x4                         ; 0044bc8f
    ADD EAX,EBX                         ; 0044bc92
    ADD EBP,EDI                         ; 0044bc94
    ADD EAX,EDI                         ; 0044bc96
    MOV EBX,dword ptr [ESP + 0x38]      ; 0044bc98
    MOV dword ptr [ESP],EAX             ; 0044bc9c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044bc9f
    ADD EBX,EDX                         ; 0044bca3
    ADD EAX,ECX                         ; 0044bca5
    ADD EBX,EDI                         ; 0044bca7
    ADD EAX,EDI                         ; 0044bca9
    MOV EDI,0xffffffff                  ; 0044bcab
    MOV dword ptr [ESP + 0x4],EAX       ; 0044bcb0
    MOV ECX,EDI                         ; 0044bcb4
        ;   Label: LAB_0044bcb4
    AND ECX,0xf                         ; 0044bcb6
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044bcb9
    SHL ECX,0x8                         ; 0044bcbd
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044bcc0
    ADD ECX,EAX                         ; 0044bcc4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044bcc6
    ADD ECX,EDX                         ; 0044bcca
    ADD ECX,EAX                         ; 0044bccc
    XOR EAX,EAX                         ; 0044bcce
    MOV AL,byte ptr [ECX]               ; 0044bcd0
    XOR ECX,ECX                         ; 0044bcd2
    MOV CL,byte ptr [EBX]               ; 0044bcd4
    ADD ECX,EAX                         ; 0044bcd6
    INC ESI                             ; 0044bcd8
    MOV dword ptr [ESP + 0x8],ECX       ; 0044bcd9
    MOV ECX,ESI                         ; 0044bcdd
    AND ECX,0xf                         ; 0044bcdf
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044bce2
    SHL ECX,0x8                         ; 0044bce6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044bce9
    ADD ECX,EDX                         ; 0044bced
    ADD ECX,EAX                         ; 0044bcef
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044bcf1
    MOV AL,byte ptr [ECX + EAX*0x1]     ; 0044bcf5
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044bcf8
    AND EAX,0xff                        ; 0044bcfc
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044bd01
    ADD ECX,EAX                         ; 0044bd05
    XOR EAX,EAX                         ; 0044bd07
    MOV AL,byte ptr [EDX]               ; 0044bd09
    MOV EDX,dword ptr [ESP]             ; 0044bd0b
    ADD ECX,EAX                         ; 0044bd0e
    XOR EAX,EAX                         ; 0044bd10
    MOV AL,byte ptr [EDX]               ; 0044bd12
    ADD EAX,ECX                         ; 0044bd14
    XOR ECX,ECX                         ; 0044bd16
    MOV CL,byte ptr [EBP]               ; 0044bd18
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044bd1b
    ADD ECX,EAX                         ; 0044bd1f
    XOR EAX,EAX                         ; 0044bd21
    MOV AL,byte ptr [EDX]               ; 0044bd23
    XOR EDX,EDX                         ; 0044bd25
    ADD EAX,ECX                         ; 0044bd27
    MOV ECX,0x7                         ; 0044bd29
    DIV ECX                             ; 0044bd2e
    ADD EBP,0x100                       ; 0044bd30
    ADD EBX,0x100                       ; 0044bd36
    INC EDI                             ; 0044bd3c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044bd3d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044bd41
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0044bd45
    MOV EAX,dword ptr [ESP]             ; 0044bd4b
    ADD ECX,0x100                       ; 0044bd4e
    ADD EDX,0x100                       ; 0044bd54
    MOV dword ptr [ESP + 0xc],ECX       ; 0044bd5a
    ADD EAX,0x100                       ; 0044bd5e
    MOV dword ptr [ESP + 0x4],EDX       ; 0044bd63
    MOV dword ptr [ESP],EAX             ; 0044bd67
    CMP ESI,0x10                        ; 0044bd6a
    JL 0x0044bcb4                       ; 0044bd6d
        ;   XREF to: 0044bcb4 (CONDITIONAL_JUMP)  ; LAB_0044bcb4
    MOV EBX,dword ptr [ESP + 0x30]      ; 0044bd73
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044bd77
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044bd7b
    ADD EBX,0x10                        ; 0044bd7f
    INC ESI                             ; 0044bd82
    INC ECX                             ; 0044bd83
    MOV dword ptr [ESP + 0x30],EBX      ; 0044bd84
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044bd88
    MOV dword ptr [ESP + 0x28],ECX      ; 0044bd8c
    CMP ESI,0x10                        ; 0044bd90
    JL 0x0044bc55                       ; 0044bd93
        ;   XREF to: 0044bc55 (CONDITIONAL_JUMP)  ; LAB_0044bc55
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044bd99
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0044bd9d
    INC EAX                             ; 0044bda1
    INC EBP                             ; 0044bda2
    MOV dword ptr [ESP + 0x38],EAX      ; 0044bda3
    MOV dword ptr [ESP + 0x1c],EBP      ; 0044bda7
    CMP EAX,0x10                        ; 0044bdab
    JL 0x0044bc2b                       ; 0044bdae
        ;   XREF to: 0044bc2b (CONDITIONAL_JUMP)  ; LAB_0044bc2b
    MOV ECX,dword ptr [ESP + 0x50]      ; 0044bdb4
    PUSH ECX                            ; 0044bdb8
    CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70 ; 0044bdb9
        ;   XREF to: 0044bb70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid * fog)
    ADD ESP,0x4                         ; 0044bdbe
    ADD ESP,0x3c                        ; 0044bdc1
    POP EBP                             ; 0044bdc4
    POP EDI                             ; 0044bdc5
    POP ESI                             ; 0044bdc6
    POP EBX                             ; 0044bdc7
    RET                                 ; 0044bdc8

