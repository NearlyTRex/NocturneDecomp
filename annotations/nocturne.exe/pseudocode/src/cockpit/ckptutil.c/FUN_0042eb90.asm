; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042eb90(undefined4 param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0042edc0 at 0042edd5
;
; Referenced Globals:
;   TerminatedCString s_rb_0057a785
;   TerminatedCString s_art_0057a788
;   TerminatedCString s_Unable_to_open_edge_list_0057a78c
;   TerminatedCString s_cockpit_ckptutil_c_0057a7b0
;   TerminatedCString s_Unable_to_read_number_of_0057a7c6
;   TerminatedCString s_cockpit_ckptutil_c_0057a7f0
;   TerminatedCString s_Invalid_number_of_edge_l_0057a806
;   TerminatedCString s_cockpit_ckptutil_c_0057a831
;   TerminatedCString s_Unable_to_read_number_of_0057a847
;   TerminatedCString s_cockpit_ckptutil_c_0057a86c
;   TerminatedCString s_Unable_to_allocate_memor_0057a882
;   TerminatedCString s_cockpit_ckptutil_c_0057a8ad
;   TerminatedCString s_Unable_to_read_edge_list_0057a8c3
;   TerminatedCString s_cockpit_ckptutil_c_0057a8e2
;   undefined4 DAT_01cc4800
;   ... and 1 more
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;   FUN_005638d0
;   FUN_00564c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042eb90
        ;   Label: FUN_0042eb90
    PUSH ESI                            ; 0042eb91
    PUSH EDI                            ; 0042eb92
    PUSH EBP                            ; 0042eb93
    SUB ESP,0x58                        ; 0042eb94
    MOV EBX,dword ptr [ESP + 0x70]      ; 0042eb97
    PUSH 0x57a785                       ; 0042eb9b | = "rb"
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042eba0
    PUSH EDX                            ; 0042eba4
    PUSH 0x57a788                       ; 0042eba5 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0042ebaa
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0042ebaf
    MOV dword ptr [ESP + 0x54],EAX      ; 0042ebb2
    TEST EAX,EAX                        ; 0042ebb6
    JNZ 0x0042ebf2                      ; 0042ebb8
        ;   XREF to: 0042ebf2 (CONDITIONAL_JUMP)  ; LAB_0042ebf2
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042ebba
    PUSH ECX                            ; 0042ebbe
    PUSH 0x57a78c                       ; 0042ebbf | = "Unable to open edge list file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042ebc4
    PUSH EAX                            ; 0042ebc8
    MOV ESI,0x57a7b0                    ; 0042ebc9 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042ebce
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0042ebd3
    MOV EAX,ESP                         ; 0042ebd6
    MOV EDI,0x49f                       ; 0042ebd8
    PUSH EAX                            ; 0042ebdd
    MOV dword ptr [0x01cc4800],ESI      ; 0042ebde | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0042ebe4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042ebea
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042ebef
    MOV EBP,dword ptr [ESP + 0x54]      ; 0042ebf2
        ;   Label: LAB_0042ebf2
    PUSH EBP                            ; 0042ebf6
    PUSH 0x1                            ; 0042ebf7
    PUSH 0x4                            ; 0042ebf9
    LEA EAX,[ESP + 0x5c]                ; 0042ebfb
    PUSH EAX                            ; 0042ebff
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0042ec00
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0042ec05
    CMP EAX,0x1                         ; 0042ec08
    JZ 0x0042ec45                       ; 0042ec0b
        ;   XREF to: 0042ec45 (CONDITIONAL_JUMP)  ; LAB_0042ec45
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042ec0d
    PUSH EAX                            ; 0042ec11
    PUSH 0x57a7c6                       ; 0042ec12 | = "Unable to read number of edge lists (..."
    LEA EAX,[ESP + 0x8]                 ; 0042ec17
    PUSH EAX                            ; 0042ec1b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042ec1c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x57a7f0                    ; 0042ec21 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042ec26
    MOV EAX,ESP                         ; 0042ec29
    MOV ECX,0x4a8                       ; 0042ec2b
    PUSH EAX                            ; 0042ec30
    MOV dword ptr [0x01cc4800],EDX      ; 0042ec31 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0042ec37 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042ec3d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042ec42
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042ec45
        ;   Label: LAB_0042ec45
    CMP EAX,dword ptr [ESP + 0x74]      ; 0042ec49
    JZ 0x0042ec86                       ; 0042ec4d
        ;   XREF to: 0042ec86 (CONDITIONAL_JUMP)  ; LAB_0042ec86
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0042ec4f
    PUSH EDI                            ; 0042ec53
    PUSH 0x57a806                       ; 0042ec54 | = "Invalid number of edge lists in file ..."
    LEA EAX,[ESP + 0x8]                 ; 0042ec59
    PUSH EAX                            ; 0042ec5d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042ec5e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x4af                       ; 0042ec63
    ADD ESP,0xc                         ; 0042ec68
    MOV [0x01cc4804],EAX                ; 0042ec6b | DAT_01cc4804
    MOV EAX,ESP                         ; 0042ec70
    MOV EBP,0x57a831                    ; 0042ec72 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0042ec77
    MOV dword ptr [0x01cc4800],EBP      ; 0042ec78 | DAT_01cc4800
    CALL FUN_004c8440                   ; 0042ec7e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042ec83
    MOV EDX,dword ptr [ESP + 0x74]      ; 0042ec86
        ;   Label: LAB_0042ec86
    XOR EDI,EDI                         ; 0042ec8a
    TEST EDX,EDX                        ; 0042ec8c
    JLE 0x0042ed75                      ; 0042ec8e
        ;   XREF to: 0042ed75 (CONDITIONAL_JUMP)  ; LAB_0042ed75
    LEA ESI,[EBX + 0x4]                 ; 0042ec94
    MOV EBP,dword ptr [ESP + 0x54]      ; 0042ec97
        ;   Label: LAB_0042ec97
    PUSH EBP                            ; 0042ec9b
    PUSH 0x1                            ; 0042ec9c
    PUSH 0x4                            ; 0042ec9e
    PUSH ESI                            ; 0042eca0
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0042eca1
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0042eca6
    CMP EAX,0x1                         ; 0042eca9
    JZ 0x0042ece6                       ; 0042ecac
        ;   XREF to: 0042ece6 (CONDITIONAL_JUMP)  ; LAB_0042ece6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042ecae
    PUSH EAX                            ; 0042ecb2
    PUSH 0x57a847                       ; 0042ecb3 | = "Unable to read number of edges (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042ecb8
    PUSH EAX                            ; 0042ecbc
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042ecbd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x57a86c                    ; 0042ecc2 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042ecc7
    MOV EAX,ESP                         ; 0042ecca
    MOV ECX,0x4ba                       ; 0042eccc
    PUSH EAX                            ; 0042ecd1
    MOV dword ptr [0x01cc4800],EDX      ; 0042ecd2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0042ecd8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042ecde
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042ece3
    MOV EBP,dword ptr [EBX]             ; 0042ece6
        ;   Label: LAB_0042ece6
    TEST EBP,EBP                        ; 0042ece8
    JZ 0x0042ecf5                       ; 0042ecea
        ;   XREF to: 0042ecf5 (CONDITIONAL_JUMP)  ; LAB_0042ecf5
    PUSH EBP                            ; 0042ecec
    CALL FUN_005638d0                   ; 0042eced
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0042ecf2
    MOV EDX,dword ptr [EBX + 0x4]       ; 0042ecf5
        ;   Label: LAB_0042ecf5
    TEST EDX,EDX                        ; 0042ecf8
    JLE 0x0042ed62                      ; 0042ecfa
        ;   XREF to: 0042ed62 (CONDITIONAL_JUMP)  ; LAB_0042ed62
    LEA EBP,[EDX*0x8 + 0x0]             ; 0042ecfc
    PUSH EBP                            ; 0042ed03
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0042ed04
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 0042ed09
    MOV dword ptr [EBX],EAX             ; 0042ed0c
    TEST EAX,EAX                        ; 0042ed0e
    JZ 0x0042ed8a                       ; 0042ed10
        ;   XREF to: 0042ed8a (CONDITIONAL_JUMP)  ; LAB_0042ed8a
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042ed12
        ;   Label: LAB_0042ed12
    PUSH ECX                            ; 0042ed16
    PUSH 0x1                            ; 0042ed17
    PUSH EBP                            ; 0042ed19
    MOV EBP,dword ptr [EBX]             ; 0042ed1a
    PUSH EBP                            ; 0042ed1c
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0042ed1d
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0042ed22
    CMP EAX,0x1                         ; 0042ed25
    JZ 0x0042ed62                       ; 0042ed28
        ;   XREF to: 0042ed62 (CONDITIONAL_JUMP)  ; LAB_0042ed62
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042ed2a
    PUSH EAX                            ; 0042ed2e
    PUSH 0x57a8c3                       ; 0042ed2f | = "Unable to read edge list (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042ed34
    PUSH EAX                            ; 0042ed38
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042ed39
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x57a8e2                    ; 0042ed3e | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042ed43
    MOV EAX,ESP                         ; 0042ed46
    MOV ECX,0x4d5                       ; 0042ed48
    PUSH EAX                            ; 0042ed4d
    MOV dword ptr [0x01cc4800],EDX      ; 0042ed4e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0042ed54 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042ed5a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042ed5f
    MOV ECX,dword ptr [ESP + 0x74]      ; 0042ed62
        ;   Label: LAB_0042ed62
    ADD ESI,0x8                         ; 0042ed66
    INC EDI                             ; 0042ed69
    ADD EBX,0x8                         ; 0042ed6a
    CMP EDI,ECX                         ; 0042ed6d
    JL 0x0042ec97                       ; 0042ed6f
        ;   XREF to: 0042ec97 (CONDITIONAL_JUMP)  ; LAB_0042ec97
    MOV EBX,dword ptr [ESP + 0x54]      ; 0042ed75
        ;   Label: LAB_0042ed75
    PUSH EBX                            ; 0042ed79
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0042ed7a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0042ed7f
    ADD ESP,0x58                        ; 0042ed82
    POP EBP                             ; 0042ed85
    POP EDI                             ; 0042ed86
    POP ESI                             ; 0042ed87
    POP EBX                             ; 0042ed88
    RET                                 ; 0042ed89
    PUSH 0x57a882                       ; 0042ed8a | = "\nUnable to allocate memory for edge ..."
        ;   Label: LAB_0042ed8a
    CALL FUN_00564c30                   ; 0042ed8f
        ;   XREF to: 00564c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c30()
    MOV EAX,0x57a8ad                    ; 0042ed94 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x4                         ; 0042ed99
    MOV [0x01cc4800],EAX                ; 0042ed9c | DAT_01cc4800
    MOV EAX,ESP                         ; 0042eda1
    MOV EDX,0x4ce                       ; 0042eda3
    PUSH EAX                            ; 0042eda8
    MOV dword ptr [0x01cc4804],EDX      ; 0042eda9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042edaf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042edb4
    JMP 0x0042ed12                      ; 0042edb7
        ;   XREF to: 0042ed12 (UNCONDITIONAL_JUMP)  ; LAB_0042ed12

