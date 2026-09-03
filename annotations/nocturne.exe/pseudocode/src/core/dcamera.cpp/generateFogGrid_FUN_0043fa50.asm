; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0043fa50(SFogGrid *fog)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00446800 at 00446805
;
; Called Functions:
;   core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fa50
        ;   Label: core_dcamera.cpp_generateFogGrid_FUN_0043fa50
    PUSH ESI                            ; 0043fa51
    PUSH EDI                            ; 0043fa52
    PUSH EBP                            ; 0043fa53
    SUB ESP,0x3c                        ; 0043fa54
    PUSH 0x1000                         ; 0043fa57
    PUSH 0x0                            ; 0043fa5c
    MOV EDX,dword ptr [ESP + 0x58]      ; 0043fa5e
    PUSH EDX                            ; 0043fa62
    XOR EBP,EBP                         ; 0043fa63
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0043fa65
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043fa6a
    MOV ECX,0x1000                      ; 0043fa6d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043fa72
    MOV dword ptr [ESP + 0x10],ECX      ; 0043fa76
    MOV dword ptr [ESP + 0x14],EAX      ; 0043fa7a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fa7e
        ;   Label: LAB_0043fa7e
    XOR EDI,EDI                         ; 0043fa82
    MOV dword ptr [ESP + 0x18],EAX      ; 0043fa84
    MOV EAX,EDI                         ; 0043fa88
        ;   Label: LAB_0043fa88
    SHL EAX,0x4                         ; 0043fa8a
    MOV ESI,dword ptr [ESP + 0x50]      ; 0043fa8d
    LEA EBX,[EAX + EBP*0x1]             ; 0043fa91
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043fa94
    ADD EBX,ESI                         ; 0043fa98
    ADD EAX,EDX                         ; 0043fa9a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043fa9c
    ADD ESI,EAX                         ; 0043faa0
    ADD EBX,0x100                       ; 0043faa2
        ;   Label: LAB_0043faa2
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0043faa8
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0043faad
    CMP EBX,ESI                         ; 0043fab3
    JNZ 0x0043faa2                      ; 0043fab5
        ;   XREF to: 0043faa2 (CONDITIONAL_JUMP)  ; LAB_0043faa2
    INC EDI                             ; 0043fab7
    CMP EDI,0x10                        ; 0043fab8
    JL 0x0043fa88                       ; 0043fabb
        ;   XREF to: 0043fa88 (CONDITIONAL_JUMP)  ; LAB_0043fa88
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043fabd
    INC ECX                             ; 0043fac1
    INC EBP                             ; 0043fac2
    MOV dword ptr [ESP + 0x10],ECX      ; 0043fac3
    CMP EBP,0x10                        ; 0043fac7
    JL 0x0043fa7e                       ; 0043faca
        ;   XREF to: 0043fa7e (CONDITIONAL_JUMP)  ; LAB_0043fa7e
    XOR EBX,ESI                         ; 0043facc
    MOV ESI,0xffffffff                  ; 0043face
    MOV dword ptr [ESP + 0x38],EBX      ; 0043fad3
    MOV dword ptr [ESP + 0x1c],ESI      ; 0043fad7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043fadb
        ;   Label: LAB_0043fadb
    MOV EBP,0xffffffff                  ; 0043fadf
    AND EAX,0xf                         ; 0043fae4
    XOR EDI,EDI                         ; 0043fae7
    MOV dword ptr [ESP + 0x20],EAX      ; 0043fae9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043faed
    MOV dword ptr [ESP + 0x28],EBP      ; 0043faf1
    INC EAX                             ; 0043faf5
    MOV dword ptr [ESP + 0x30],EDI      ; 0043faf6
    AND EAX,0xf                         ; 0043fafa
    MOV dword ptr [ESP + 0x2c],EDI      ; 0043fafd
    MOV dword ptr [ESP + 0x24],EAX      ; 0043fb01
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043fb05
        ;   Label: LAB_0043fb05
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043fb09
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043fb0d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0043fb11
    MOV EDI,dword ptr [ESP + 0x50]      ; 0043fb15
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043fb19
    XOR ESI,ESI                         ; 0043fb1d
    MOV dword ptr [ESP + 0x34],EAX      ; 0043fb1f
    AND ECX,0xf                         ; 0043fb23
    INC EBX                             ; 0043fb26
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043fb27
    ADD EBP,EDX                         ; 0043fb2b
    ADD EAX,EDX                         ; 0043fb2d
    AND EBX,0xf                         ; 0043fb2f
    ADD EAX,EDI                         ; 0043fb32
    SHL EBX,0x4                         ; 0043fb34
    MOV dword ptr [ESP + 0xc],EAX       ; 0043fb37
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043fb3b
    SHL ECX,0x4                         ; 0043fb3f
    ADD EAX,EBX                         ; 0043fb42
    ADD EBP,EDI                         ; 0043fb44
    ADD EAX,EDI                         ; 0043fb46
    MOV EBX,dword ptr [ESP + 0x38]      ; 0043fb48
    MOV dword ptr [ESP],EAX             ; 0043fb4c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043fb4f
    ADD EBX,EDX                         ; 0043fb53
    ADD EAX,ECX                         ; 0043fb55
    ADD EBX,EDI                         ; 0043fb57
    ADD EAX,EDI                         ; 0043fb59
    MOV EDI,0xffffffff                  ; 0043fb5b
    MOV dword ptr [ESP + 0x4],EAX       ; 0043fb60
    MOV ECX,EDI                         ; 0043fb64
        ;   Label: LAB_0043fb64
    AND ECX,0xf                         ; 0043fb66
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043fb69
    SHL ECX,0x8                         ; 0043fb6d
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043fb70
    ADD ECX,EAX                         ; 0043fb74
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043fb76
    ADD ECX,EDX                         ; 0043fb7a
    ADD ECX,EAX                         ; 0043fb7c
    XOR EAX,EAX                         ; 0043fb7e
    MOV AL,byte ptr [ECX]               ; 0043fb80
    XOR ECX,ECX                         ; 0043fb82
    MOV CL,byte ptr [EBX]               ; 0043fb84
    ADD ECX,EAX                         ; 0043fb86
    INC ESI                             ; 0043fb88
    MOV dword ptr [ESP + 0x8],ECX       ; 0043fb89
    MOV ECX,ESI                         ; 0043fb8d
    AND ECX,0xf                         ; 0043fb8f
    MOV EDX,dword ptr [ESP + 0x50]      ; 0043fb92
    SHL ECX,0x8                         ; 0043fb96
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043fb99
    ADD ECX,EDX                         ; 0043fb9d
    ADD ECX,EAX                         ; 0043fb9f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043fba1
    MOV AL,byte ptr [ECX + EAX*0x1]     ; 0043fba5
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043fba8
    AND EAX,0xff                        ; 0043fbac
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043fbb1
    ADD ECX,EAX                         ; 0043fbb5
    XOR EAX,EAX                         ; 0043fbb7
    MOV AL,byte ptr [EDX]               ; 0043fbb9
    MOV EDX,dword ptr [ESP]             ; 0043fbbb
    ADD ECX,EAX                         ; 0043fbbe
    XOR EAX,EAX                         ; 0043fbc0
    MOV AL,byte ptr [EDX]               ; 0043fbc2
    ADD EAX,ECX                         ; 0043fbc4
    XOR ECX,ECX                         ; 0043fbc6
    MOV CL,byte ptr [EBP]               ; 0043fbc8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043fbcb
    ADD ECX,EAX                         ; 0043fbcf
    XOR EAX,EAX                         ; 0043fbd1
    MOV AL,byte ptr [EDX]               ; 0043fbd3
    XOR EDX,EDX                         ; 0043fbd5
    ADD EAX,ECX                         ; 0043fbd7
    MOV ECX,0x7                         ; 0043fbd9
    DIV ECX                             ; 0043fbde
    ADD EBP,0x100                       ; 0043fbe0
    ADD EBX,0x100                       ; 0043fbe6
    INC EDI                             ; 0043fbec
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043fbed
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043fbf1
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0043fbf5
    MOV EAX,dword ptr [ESP]             ; 0043fbfb
    ADD ECX,0x100                       ; 0043fbfe
    ADD EDX,0x100                       ; 0043fc04
    MOV dword ptr [ESP + 0xc],ECX       ; 0043fc0a
    ADD EAX,0x100                       ; 0043fc0e
    MOV dword ptr [ESP + 0x4],EDX       ; 0043fc13
    MOV dword ptr [ESP],EAX             ; 0043fc17
    CMP ESI,0x10                        ; 0043fc1a
    JL 0x0043fb64                       ; 0043fc1d
        ;   XREF to: 0043fb64 (CONDITIONAL_JUMP)  ; LAB_0043fb64
    MOV EBX,dword ptr [ESP + 0x30]      ; 0043fc23
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043fc27
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043fc2b
    ADD EBX,0x10                        ; 0043fc2f
    INC ESI                             ; 0043fc32
    INC ECX                             ; 0043fc33
    MOV dword ptr [ESP + 0x30],EBX      ; 0043fc34
    MOV dword ptr [ESP + 0x2c],ESI      ; 0043fc38
    MOV dword ptr [ESP + 0x28],ECX      ; 0043fc3c
    CMP ESI,0x10                        ; 0043fc40
    JL 0x0043fb05                       ; 0043fc43
        ;   XREF to: 0043fb05 (CONDITIONAL_JUMP)  ; LAB_0043fb05
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043fc49
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043fc4d
    INC EAX                             ; 0043fc51
    INC EBP                             ; 0043fc52
    MOV dword ptr [ESP + 0x38],EAX      ; 0043fc53
    MOV dword ptr [ESP + 0x1c],EBP      ; 0043fc57
    CMP EAX,0x10                        ; 0043fc5b
    JL 0x0043fadb                       ; 0043fc5e
        ;   XREF to: 0043fadb (CONDITIONAL_JUMP)  ; LAB_0043fadb
    MOV ECX,dword ptr [ESP + 0x50]      ; 0043fc64
    PUSH ECX                            ; 0043fc68
    CALL core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20 ; 0043fc69
        ;   XREF to: 0043fa20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20(SFogGrid * fog)
    ADD ESP,0x4                         ; 0043fc6e
    ADD ESP,0x3c                        ; 0043fc71
    POP EBP                             ; 0043fc74
    POP EDI                             ; 0043fc75
    POP ESI                             ; 0043fc76
    POP EBX                             ; 0043fc77
    RET                                 ; 0043fc78

