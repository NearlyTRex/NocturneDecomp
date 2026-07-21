; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_004d23d0 at 004d24c5
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d0d82
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0181
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1347
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2223
;
; Referenced Globals:
;   undefined4 DAT_0058a8fe
;   undefined4 DAT_0058a906
;   undefined4 DAT_0058a90e
;   undefined4 DAT_0058a916
;   undefined4 DAT_0058a91e
;   undefined4 DAT_0058a926
;   undefined4 DAT_0058a92e
;   undefined4 DAT_005bb210
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01ccdebc
;   undefined4 DAT_01ccdec0
;   undefined4 DAT_01ccdec4
;   undefined4 DAT_01cce2bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004deae0
        ;   Label: core_moon.cpp_CMoon_update_FUN_004deae0
    PUSH ESI                            ; 004deae1
    PUSH EBP                            ; 004deae2
    MOV EBP,ESP                         ; 004deae3
    SUB ESP,0x18                        ; 004deae5
    AND ESP,0xfffffff8                  ; 004deae8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004deaeb
    MOV EDX,dword ptr [EBP + 0x10]      ; 004deaee
    MOV dword ptr [ESP],EAX             ; 004deaf1
    FLD float ptr [ESP]                 ; 004deaf4
    FMUL double ptr [0x0058a8fe]        ; 004deaf7 | DAT_0058a8fe
    FADD float ptr [EDX + 0x4]          ; 004deafd
    FST float ptr [EDX + 0x4]           ; 004deb00
    FCOMP double ptr [0x0058a906]       ; 004deb03 | DAT_0058a906
    FNSTSW AX                           ; 004deb09
    SAHF                                ; 004deb0b
    JA 0x004dec1c                       ; 004deb0c
        ;   XREF to: 004dec1c (CONDITIONAL_JUMP)  ; LAB_004dec1c
    FLD float ptr [ESP]                 ; 004deb12
        ;   Label: LAB_004deb12
    FMUL double ptr [0x0058a90e]        ; 004deb15 | DAT_0058a90e
    FADD float ptr [0x01ccdec4]         ; 004deb1b | DAT_01ccdec4
    FST float ptr [0x01ccdec4]          ; 004deb21 | DAT_01ccdec4
    FCOMP double ptr [0x0058a916]       ; 004deb27 | DAT_0058a916
    FNSTSW AX                           ; 004deb2d
    SAHF                                ; 004deb2f
    JC 0x004deb44                       ; 004deb30
        ;   XREF to: 004deb44 (CONDITIONAL_JUMP)  ; LAB_004deb44
    FLD float ptr [0x01ccdec4]          ; 004deb32 | DAT_01ccdec4
    FADD float ptr [0x0058a91e]         ; 004deb38 | DAT_0058a91e
    FSTP float ptr [0x01ccdec4]         ; 004deb3e | DAT_01ccdec4
    MOV EAX,[0x01bd1d80]                ; 004deb44 | DAT_01bd1d80
        ;   Label: LAB_004deb44
    MOV ECX,dword ptr [0x01ccdebc]      ; 004deb49 | DAT_01ccdebc
    SHL EAX,0x5                         ; 004deb4f
    ADD ECX,EAX                         ; 004deb52
    MOV EAX,[0x01bd1d80]                ; 004deb54 | DAT_01bd1d80
    MOV EBX,dword ptr [0x01ccdec0]      ; 004deb59 | DAT_01ccdec0
    SHL EAX,0x4                         ; 004deb5f
    MOV ESI,dword ptr [0x005bb210]      ; 004deb62 | DAT_005bb210
    ADD EBX,EAX                         ; 004deb68
    MOV dword ptr [0x01ccdebc],ECX      ; 004deb6a | DAT_01ccdebc
    MOV dword ptr [0x01ccdec0],EBX      ; 004deb70 | DAT_01ccdec0
    TEST ESI,ESI                        ; 004deb76
    JZ 0x004dec16                       ; 004deb78
        ;   XREF to: 004dec16 (CONDITIONAL_JUMP)  ; LAB_004dec16
    XOR EDX,EDX                         ; 004deb7e
    MOV EAX,dword ptr [EDX + 0x1ccdeec] ; 004deb80
        ;   Label: LAB_004deb80
    IMUL EAX,EAX,0xc                    ; 004deb86
    FLD float ptr [ESP]                 ; 004deb89
    FMUL double ptr [0x0058a926]        ; 004deb8c | DAT_0058a926
    FADD float ptr [EDX + 0x1ccdef0]    ; 004deb92
    ADD EAX,0x1ccdec8                   ; 004deb98
    FSTP float ptr [EDX + 0x1ccdef0]    ; 004deb9d
    MOV EAX,dword ptr [EAX]             ; 004deba3
    MOV dword ptr [ESP + 0x14],EAX      ; 004deba5
    FLD float ptr [EDX + 0x1ccdef0]     ; 004deba9
    FILD dword ptr [ESP + 0x14]         ; 004debaf
    FSTP float ptr [ESP + 0x10]         ; 004debb3
    FCOMP float ptr [ESP + 0x10]        ; 004debb7
    FNSTSW AX                           ; 004debbb
    SAHF                                ; 004debbd
    JNC 0x004dec32                      ; 004debbe
        ;   XREF to: 004dec32 (CONDITIONAL_JUMP)  ; LAB_004dec32
    MOV EAX,[0x01cce2bc]                ; 004debc0 | DAT_01cce2bc
        ;   Label: LAB_004debc0
    FLD float ptr [ESP]                 ; 004debc5
    MOV dword ptr [ESP + 0x14],EAX      ; 004debc8
    FMUL double ptr [0x0058a92e]        ; 004debcc | DAT_0058a92e
    FILD dword ptr [ESP + 0x14]         ; 004debd2
    FLD float ptr [EDX + 0x1ccdef4]     ; 004debd6
    FXCH ST2                            ; 004debdc
    FADD ST0,ST2                        ; 004debde
    FXCH                                ; 004debe0
    FSTP float ptr [ESP + 0xc]          ; 004debe2
    FSTP ST1                            ; 004debe6
    FST float ptr [EDX + 0x1ccdef4]     ; 004debe8
    FCOMP float ptr [ESP + 0xc]         ; 004debee
    FNSTSW AX                           ; 004debf2
    SAHF                                ; 004debf4
    JC 0x004dec07                       ; 004debf5
        ;   XREF to: 004dec07 (CONDITIONAL_JUMP)  ; LAB_004dec07
    MOV EAX,EDX                         ; 004debf7
    LEA EAX,[EAX + 0x1ccdef4]           ; 004debf9
    FLD float ptr [EAX]                 ; 004debff
    FSUB float ptr [ESP + 0xc]          ; 004dec01
    FSTP float ptr [EAX]                ; 004dec05
    ADD EDX,0x18                        ; 004dec07
        ;   Label: LAB_004dec07
    CMP EDX,0x2d0                       ; 004dec0a
    JNZ 0x004deb80                      ; 004dec10
        ;   XREF to: 004deb80 (CONDITIONAL_JUMP)  ; LAB_004deb80
    MOV ESP,EBP                         ; 004dec16
        ;   Label: LAB_004dec16
    POP EBP                             ; 004dec18
    POP ESI                             ; 004dec19
    POP EBX                             ; 004dec1a
    RET                                 ; 004dec1b
    MOV dword ptr [EDX + 0x4],0x3f147ae1 ; 004dec1c
        ;   Label: LAB_004dec1c
    MOV dword ptr [0x005bb210],0x1      ; 004dec23 | DAT_005bb210
    JMP 0x004deb12                      ; 004dec2d
        ;   XREF to: 004deb12 (UNCONDITIONAL_JUMP)  ; LAB_004deb12
    MOV EAX,EDX                         ; 004dec32
        ;   Label: LAB_004dec32
    LEA EAX,[EAX + 0x1ccdef0]           ; 004dec34
    FLD float ptr [EAX]                 ; 004dec3a
    FSUB float ptr [ESP + 0x10]         ; 004dec3c
    FSTP float ptr [EAX]                ; 004dec40
    JMP 0x004debc0                      ; 004dec42
        ;   XREF to: 004debc0 (UNCONDITIONAL_JUMP)  ; LAB_004debc0

