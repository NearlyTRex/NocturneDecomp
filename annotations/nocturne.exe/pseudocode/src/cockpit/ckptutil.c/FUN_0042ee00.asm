; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042ee00(char *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_0057a8f8
;   TerminatedCString s_Edge_list_array_is_empty_0057a90e
;   TerminatedCString s_wt_0057a928
;   TerminatedCString s_art_0057a92b
;   TerminatedCString s_Could_not_create_output_0057a92f
;   TerminatedCString s_cockpit_ckptutil_c_0057a952
;   TerminatedCString s_d_0057a968
;   TerminatedCString s_d_0057a96c
;   TerminatedCString s_s_3d_3d_3d_3d_d_0057a970
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ee00
        ;   Label: cockpit_ckptutil.c_FUN_0042ee00
    PUSH ESI                            ; 0042ee01
    PUSH EDI                            ; 0042ee02
    PUSH EBP                            ; 0042ee03
    SUB ESP,0x5c                        ; 0042ee04
    MOV ESI,dword ptr [ESP + 0x70]      ; 0042ee07
    MOV EBX,dword ptr [ESP + 0x78]      ; 0042ee0b
    CMP dword ptr [ESP + 0x74],0x0      ; 0042ee0f
    JZ 0x0042ef04                       ; 0042ee14
        ;   XREF to: 0042ef04 (CONDITIONAL_JUMP)  ; LAB_0042ef04
    PUSH 0x57a928                       ; 0042ee1a | = "wt"
        ;   Label: LAB_0042ee1a
    PUSH ESI                            ; 0042ee1f
    PUSH 0x57a92b                       ; 0042ee20 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0042ee25
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0042ee2a
    MOV EDI,EAX                         ; 0042ee2d
    TEST EAX,EAX                        ; 0042ee2f
    JNZ 0x0042ee66                      ; 0042ee31
        ;   XREF to: 0042ee66 (CONDITIONAL_JUMP)  ; LAB_0042ee66
    PUSH ESI                            ; 0042ee33
    PUSH 0x57a92f                       ; 0042ee34 | = "Could not create output file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042ee39
    PUSH EAX                            ; 0042ee3d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042ee3e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x4ff                       ; 0042ee43
    ADD ESP,0xc                         ; 0042ee48
    MOV [0x01cc4804],EAX                ; 0042ee4b | INT_01cc4804
    MOV EAX,ESP                         ; 0042ee50
    MOV EBP,0x57a952                    ; 0042ee52 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0042ee57
    MOV dword ptr [0x01cc4800],EBP      ; 0042ee58 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 0042ee5e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042ee63
    PUSH EBX                            ; 0042ee66
        ;   Label: LAB_0042ee66
    PUSH 0x57a968                       ; 0042ee67 | = "%d\n"
    PUSH EDI                            ; 0042ee6c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0042ee6d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0042ee72
    TEST EBX,EBX                        ; 0042ee75
    JLE 0x0042ef4e                      ; 0042ee77
        ;   XREF to: 0042ef4e (CONDITIONAL_JUMP)  ; LAB_0042ef4e
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042ee7d
    SHL EBX,0x3                         ; 0042ee81
    XOR ESI,ESI                         ; 0042ee84
    MOV dword ptr [ESP + 0x54],EAX      ; 0042ee86
    MOV dword ptr [ESP + 0x50],EBX      ; 0042ee8a
    MOV dword ptr [ESP + 0x58],ESI      ; 0042ee8e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042ee92
        ;   Label: LAB_0042ee92
    MOV EBP,dword ptr [EAX + 0x4]       ; 0042ee96
    PUSH EBP                            ; 0042ee99
    PUSH 0x57a96c                       ; 0042ee9a | = "%d\n"
    PUSH EDI                            ; 0042ee9f
    XOR EBX,EBX                         ; 0042eea0
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0042eea2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0042eea7
    XOR ESI,ESI                         ; 0042eeaa
    MOV EBP,dword ptr [ESP + 0x58]      ; 0042eeac
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042eeb0
        ;   Label: LAB_0042eeb0
    ADD EAX,EBP                         ; 0042eeb4
    CMP EBX,dword ptr [EAX + 0x4]       ; 0042eeb6
    JGE 0x0042ef2c                      ; 0042eeb9
        ;   XREF to: 0042ef2c (CONDITIONAL_JUMP)  ; LAB_0042ef2c
    MOV EAX,dword ptr [EAX]             ; 0042eebb
    MOV DX,word ptr [ESI + EAX*0x1 + 0x6] ; 0042eebd
    MOV ECX,EDX                         ; 0042eec2
    SHR CX,0xf                          ; 0042eec4
    ADD EDX,EDX                         ; 0042eec8
    AND ECX,0xffff                      ; 0042eeca
    SAR DX,0x1                          ; 0042eed0
    PUSH ECX                            ; 0042eed3
    MOVSX ECX,DX                        ; 0042eed4
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 0042eed7
    PUSH ECX                            ; 0042eedc
    MOVSX ECX,DX                        ; 0042eedd
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 0042eee0
    PUSH ECX                            ; 0042eee5
    MOVSX ECX,DX                        ; 0042eee6
    MOV AX,word ptr [ESI + EAX*0x1]     ; 0042eee9
    PUSH ECX                            ; 0042eeed
    CWDE                                ; 0042eeee
    PUSH EAX                            ; 0042eeef
    PUSH 0x57a970                       ; 0042eef0 | = "%3d %3d %3d %3d %d\n"
    PUSH EDI                            ; 0042eef5
    ADD ESI,0x8                         ; 0042eef6
    INC EBX                             ; 0042eef9
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0042eefa
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x1c                        ; 0042eeff
    JMP 0x0042eeb0                      ; 0042ef02
        ;   XREF to: 0042eeb0 (UNCONDITIONAL_JUMP)  ; LAB_0042eeb0
    MOV ECX,0x57a8f8                    ; 0042ef04 | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_0042ef04
    MOV EDI,0x4f8                       ; 0042ef09
    PUSH 0x57a90e                       ; 0042ef0e | = "Edge list array is empty!"
    MOV dword ptr [0x01cc4800],ECX      ; 0042ef13 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0042ef19 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0042ef1f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042ef24
    JMP 0x0042ee1a                      ; 0042ef27
        ;   XREF to: 0042ee1a (UNCONDITIONAL_JUMP)  ; LAB_0042ee1a
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042ef2c
        ;   Label: LAB_0042ef2c
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042ef30
    MOV EBX,dword ptr [ESP + 0x50]      ; 0042ef34
    ADD EDX,0x8                         ; 0042ef38
    ADD ECX,0x8                         ; 0042ef3b
    MOV dword ptr [ESP + 0x58],EDX      ; 0042ef3e
    MOV dword ptr [ESP + 0x54],ECX      ; 0042ef42
    CMP EDX,EBX                         ; 0042ef46
    JL 0x0042ee92                       ; 0042ef48
        ;   XREF to: 0042ee92 (CONDITIONAL_JUMP)  ; LAB_0042ee92
    PUSH EDI                            ; 0042ef4e
        ;   Label: LAB_0042ef4e
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0042ef4f
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0042ef54
    ADD ESP,0x5c                        ; 0042ef57
    POP EBP                             ; 0042ef5a
    POP EDI                             ; 0042ef5b
    POP ESI                             ; 0042ef5c
    POP EBX                             ; 0042ef5d
    RET                                 ; 0042ef5e

