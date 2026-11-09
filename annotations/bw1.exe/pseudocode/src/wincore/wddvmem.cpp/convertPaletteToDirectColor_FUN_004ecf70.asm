; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_special.cpp_FUN_005821c0 at 0058222e
;   engine_special.cpp_setColorTable16_FUN_005822e0 at 00582306
;   wincore_wddvmem.cpp_FUN_005acd00 at 005ace9a
;   wincore_wddvmem.cpp_FUN_005acec0 at 005acfc3
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00623f20
;   undefined4 DAT_00623f28
;   undefined4 DAT_00623f30
;   undefined4 DAT_00623f38
;   undefined4 DAT_00623f58
;   undefined4 DAT_00623f78
;   undefined4 DAT_00623f80
;   undefined4 DAT_00623fa0
;   undefined4 DAT_00623fc0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9dc
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecf70
        ;   Label: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70
    PUSH ESI                            ; 004ecf71
    PUSH EDI                            ; 004ecf72
    PUSH EBP                            ; 004ecf73
    SUB ESP,0x8                         ; 004ecf74
    CMP dword ptr [0x0061b4a0],0x10     ; 004ecf77 | DAT_0061b4a0
    JNZ 0x004ed0af                      ; 004ecf7e
        ;   XREF to: 004ed0af (CONDITIONAL_JUMP)  ; LAB_004ed0af
    XOR EBX,EBX                         ; 004ecf84
    XOR ESI,ESI                         ; 004ecf86
    XOR EAX,EAX                         ; 004ecf88
        ;   Label: LAB_004ecf88
    MOV EDI,dword ptr [0x01c4e9d8]      ; 004ecf8a | DAT_01c4e9d8
    MOV AL,byte ptr [EBX + 0x1c4e9f8]   ; 004ecf90 | DAT_01c4e9f8
    XOR EDX,EDX                         ; 004ecf96
    MOV dword ptr [ESP],EAX             ; 004ecf98
    DIV EDI                             ; 004ecf9b
    MOVZX EBP,byte ptr [EBX + 0x1c4e9f9] ; 004ecf9d | DAT_01c4e9f9
    MOV dword ptr [ESP + 0x4],EBP       ; 004ecfa4
    MOV dword ptr [ESP],EAX             ; 004ecfa8
    XOR EDX,EDX                         ; 004ecfab
    MOV EAX,EBP                         ; 004ecfad
    DIV dword ptr [0x01c4e9e4]          ; 004ecfaf | DAT_01c4e9e4
    XOR ECX,ECX                         ; 004ecfb5
    MOV CL,byte ptr [EBX + 0x1c4e9fa]   ; 004ecfb7 | DAT_01c4e9fa
    MOV dword ptr [ESP + 0x4],EAX       ; 004ecfbd
    XOR EDX,EDX                         ; 004ecfc1
    MOV EAX,ECX                         ; 004ecfc3
    DIV dword ptr [0x01c4e9f0]          ; 004ecfc5 | DAT_01c4e9f0
    MOV EDX,dword ptr [ESP]             ; 004ecfcb
    MOV CL,byte ptr [0x01c4e9d4]        ; 004ecfce | DAT_01c4e9d4
    MOV EDI,EAX                         ; 004ecfd4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ecfd6
    SHL EDX,CL                          ; 004ecfda
    MOV CL,byte ptr [0x01c4e9e0]        ; 004ecfdc | DAT_01c4e9e0
    SHL EAX,CL                          ; 004ecfe2
    MOV CL,byte ptr [0x01c4e9ec]        ; 004ecfe4 | DAT_01c4e9ec
    OR EDX,EAX                          ; 004ecfea
    MOV EAX,EDI                         ; 004ecfec
    SHL EAX,CL                          ; 004ecfee
    ADD ESI,0x2                         ; 004ecff0
    OR EAX,EDX                          ; 004ecff3
    ADD EBX,0x3                         ; 004ecff5
    MOV word ptr [ESI + 0x1c4dace],AX   ; 004ecff8
    CMP ESI,0x200                       ; 004ecfff
    JNZ 0x004ecf88                      ; 004ed005
        ;   XREF to: 004ecf88 (CONDITIONAL_JUMP)  ; LAB_004ecf88
    MOV EAX,0xff                        ; 004ed007
    MOV CL,byte ptr [0x01c4e9dc]        ; 004ed00c | DAT_01c4e9dc
    SHR EAX,CL                          ; 004ed012
    MOV ECX,dword ptr [0x01c4e9d4]      ; 004ed014 | DAT_01c4e9d4
    MOV EBX,EAX                         ; 004ed01a
    SHL EBX,CL                          ; 004ed01c
    MOV CL,byte ptr [0x01c4e9e8]        ; 004ed01e | DAT_01c4e9e8
    MOV dword ptr [0x00623f20],EBX      ; 004ed024 | DAT_00623f20
    MOV EBX,0xff                        ; 004ed02a
    SHR EBX,CL                          ; 004ed02f
    MOV ECX,dword ptr [0x01c4e9e0]      ; 004ed031 | DAT_01c4e9e0
    MOV ESI,EBX                         ; 004ed037
    SHL ESI,CL                          ; 004ed039
    MOV CL,byte ptr [0x01c4e9f4]        ; 004ed03b | DAT_01c4e9f4
    MOV dword ptr [0x00623f28],ESI      ; 004ed041 | DAT_00623f28
    MOV ESI,0xff                        ; 004ed047
    SHR ESI,CL                          ; 004ed04c
    MOV ECX,dword ptr [0x01c4e9ec]      ; 004ed04e | DAT_01c4e9ec
    MOV EDI,ESI                         ; 004ed054
    SHL EDI,CL                          ; 004ed056
    MOV CL,byte ptr [0x01c4e9dc]        ; 004ed058 | DAT_01c4e9dc
    MOV dword ptr [0x00623f30],EDI      ; 004ed05e | DAT_00623f30
    SHL EAX,CL                          ; 004ed064
    MOV CL,byte ptr [0x01c4e9e8]        ; 004ed066 | DAT_01c4e9e8
    SHL EAX,0x10                        ; 004ed06c
    SHL EBX,CL                          ; 004ed06f
    MOV [0x00623f38],EAX                ; 004ed071 | DAT_00623f38
    SHL EBX,0x8                         ; 004ed076
    MOV EAX,[0x01c4e9dc]                ; 004ed079 | DAT_01c4e9dc
    MOV dword ptr [0x00623f58],EBX      ; 004ed07e | DAT_00623f58
    MOV EBX,dword ptr [0x01c4e9e8]      ; 004ed084 | DAT_01c4e9e8
    MOV ECX,dword ptr [0x01c4e9f4]      ; 004ed08a | DAT_01c4e9f4
    ADD EAX,EBX                         ; 004ed090
    MOV dword ptr [0x00623fc0],ECX      ; 004ed092 | DAT_00623fc0
    ADD EAX,ECX                         ; 004ed098
    SHL ESI,CL                          ; 004ed09a
    MOV [0x00623f80],EAX                ; 004ed09c | DAT_00623f80
    LEA EAX,[EBX + ECX*0x1]             ; 004ed0a1
    MOV dword ptr [0x00623f78],ESI      ; 004ed0a4 | DAT_00623f78
    MOV [0x00623fa0],EAX                ; 004ed0aa | DAT_00623fa0
    CMP dword ptr [0x0061b4a0],0x20     ; 004ed0af | DAT_0061b4a0
        ;   Label: LAB_004ed0af
    JNZ 0x004ed10d                      ; 004ed0b6
        ;   XREF to: 004ed10d (CONDITIONAL_JUMP)  ; LAB_004ed10d
    MOV EDX,dword ptr [0x0061b4a0]      ; 004ed0b8 | DAT_0061b4a0
    XOR EAX,EAX                         ; 004ed0be
    XOR EBX,EBX                         ; 004ed0c0
    MOVZX EDI,byte ptr [EBX + 0x1c4e9f9] ; 004ed0c2 | DAT_01c4e9f9
        ;   Label: LAB_004ed0c2
    MOVZX ESI,byte ptr [EBX + 0x1c4e9fa] ; 004ed0c9 | DAT_01c4e9fa
    MOVZX EBP,byte ptr [EBX + 0x1c4e9f8] ; 004ed0d0 | DAT_01c4e9f8
    CMP EDX,0x20                        ; 004ed0d7
    JNZ 0x004ed115                      ; 004ed0da
        ;   XREF to: 004ed115 (CONDITIONAL_JUMP)  ; LAB_004ed115
    MOV CL,byte ptr [0x01c4e9d4]        ; 004ed0dc | DAT_01c4e9d4
    SHL EBP,CL                          ; 004ed0e2
    MOV CL,byte ptr [0x01c4e9e0]        ; 004ed0e4 | DAT_01c4e9e0
    SHL EDI,CL                          ; 004ed0ea
    MOV CL,byte ptr [0x01c4e9ec]        ; 004ed0ec | DAT_01c4e9ec
    SHL ESI,CL                          ; 004ed0f2
    OR EDI,EBP                          ; 004ed0f4
    MOV ECX,ESI                         ; 004ed0f6
    OR ECX,EDI                          ; 004ed0f8
    ADD EAX,0x4                         ; 004ed0fa
        ;   Label: LAB_004ed0fa
    ADD EBX,0x3                         ; 004ed0fd
    MOV dword ptr [EAX + 0x1c4dccc],ECX ; 004ed100
    CMP EAX,0x400                       ; 004ed106
    JNZ 0x004ed0c2                      ; 004ed10b
        ;   XREF to: 004ed0c2 (CONDITIONAL_JUMP)  ; LAB_004ed0c2
    ADD ESP,0x8                         ; 004ed10d
        ;   Label: LAB_004ed10d
    POP EBP                             ; 004ed110
    POP EDI                             ; 004ed111
    POP ESI                             ; 004ed112
    POP EBX                             ; 004ed113
    RET                                 ; 004ed114
    MOV ECX,EBP                         ; 004ed115
        ;   Label: LAB_004ed115
    SHL EDI,0x8                         ; 004ed117
    SHL ECX,0x10                        ; 004ed11a
    OR ECX,EDI                          ; 004ed11d
    OR ECX,ESI                          ; 004ed11f
    JMP 0x004ed0fa                      ; 004ed121
        ;   XREF to: 004ed0fa (UNCONDITIONAL_JUMP)  ; LAB_004ed0fa

