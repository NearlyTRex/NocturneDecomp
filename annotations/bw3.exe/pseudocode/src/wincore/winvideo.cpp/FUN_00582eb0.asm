; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winvideo_cpp_FUN_00582eb0(char *directory_path,char *movie_filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   movie_filename
; Local Variables:
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined1       Stack[-0xf2]:1  local_f2
; undefined1       Stack[-0xf1]:1  local_f1
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xef]:1  local_ef
; undefined1       Stack[-0xee]:1  local_ee
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4a39
;
; Referenced Globals:
;   void* PTR_mciGetErrorStringA_005b3444 = 001b38d8
;   void* PTR_mciSendStringA_005b344c = 001b3900
;   void* PTR_GetClientRect_005b34bc = 001b3ae2
;   void* PTR_MessageBoxA_005b34d8 = 001b3b54
;   void* PTR_MoveWindow_005b34dc = 001b3b62
;   void* PTR_SetRectEmpty_005b3504 = 001b3c06
;   void* PTR_GetCurrentProcess_005b3588 = 001b3e46
;   void* PTR_GetThreadPriority_005b35d0 = 001b3f94
;   void* PTR_SetThreadPriority_005b3650 = 001b4204
;   void* PTR_Sleep_005b3658 = 001b4236
;   TerminatedCString s_where_mov_source_005d7ffb
;   TerminatedCString s_open_s_alias_mov_style_c_005d8016
;   TerminatedCString s_status_mov_window_handle_005d8040
;   TerminatedCString s_Unable_to_open_AVI_005d8059
;   TerminatedCString s_play_mov_fullscreen_noti_005d806e
;   ... and 9 more
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdlib.c_atoi_FUN_005a5f50
;   crt_unknown.c_FUN_005a28c0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_special.cpp_clearScreen_FUN_00560d70
;   GetClientRect
;   GetCurrentProcess
;   GetThreadPriority
;   mciGetErrorStringA
;   mciSendStringA
;   MessageBoxA
;   MoveWindow
;   SetRectEmpty
;   SetThreadPriority
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00582eb0
        ;   Label: wincore_winvideo.cpp_FUN_00582eb0
    SUB ESP,0x1f4                       ; 00582eb1
    MOV EDX,dword ptr [ESP + 0x200]     ; 00582eb7
    PUSH EDX                            ; 00582ebe
    MOV ECX,dword ptr [ESP + 0x200]     ; 00582ebf
    PUSH ECX                            ; 00582ec6
    PUSH 0x5d80aa                       ; 00582ec7 | = "%s\\%s"
    LEA EAX,[ESP + 0x190]               ; 00582ecc
    PUSH EAX                            ; 00582ed3
    CALL crt_unknown.c_FUN_005a28c0     ; 00582ed4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00582ed9
    PUSH 0x5d80b0                       ; 00582edc | DAT_005d80b0
    LEA EAX,[ESP + 0x188]               ; 00582ee1
    PUSH EAX                            ; 00582ee8
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00582ee9
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 00582eee
    TEST EAX,EAX                        ; 00582ef1
    JNZ 0x00582efd                      ; 00582ef3
        ;   XREF to: 00582efd (CONDITIONAL_JUMP)  ; LAB_00582efd
    ADD ESP,0x1f4                       ; 00582ef5
    POP EBP                             ; 00582efb
    RET                                 ; 00582efc
    PUSH EDI                            ; 00582efd
        ;   Label: LAB_00582efd
    PUSH ESI                            ; 00582efe
    PUSH EBX                            ; 00582eff
    PUSH EAX                            ; 00582f00
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00582f01
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00582f06
    LEA ESI,[ESP + 0x190]               ; 00582f09
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00582f10
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 00582f15
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    MOV EDI,dword ptr [0x02d22fb0]      ; 00582f1a | DAT_02d22fb0
    MOV EBX,dword ptr [0x02d21b78]      ; 00582f20 | DAT_02d21b78
    TEST EDI,EDI                        ; 00582f26
    JZ 0x00582f33                       ; 00582f28
        ;   XREF to: 00582f33 (CONDITIONAL_JUMP)  ; LAB_00582f33
    PUSH EBX                            ; 00582f2a
    CALL wincore_winvideo.cpp_closeMovie_FUN_00582b60 ; 00582f2b
        ;   XREF to: 00582b60 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00582b60(HWND window_handle)
    ADD ESP,0x4                         ; 00582f30
    PUSH EBX                            ; 00582f33
        ;   Label: LAB_00582f33
    PUSH ESI                            ; 00582f34
    PUSH 0x5d8016                       ; 00582f35 | = "open \"%s\" alias mov style child par..."
    LEA EAX,[ESP + 0x18]                ; 00582f3a
    PUSH EAX                            ; 00582f3e
    CALL crt_unknown.c_FUN_005a28c0     ; 00582f3f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00582f44
    PUSH 0x0                            ; 00582f47
    PUSH 0x0                            ; 00582f49
    PUSH 0x0                            ; 00582f4b
    LEA EAX,[ESP + 0x18]                ; 00582f4d
    PUSH EAX                            ; 00582f51
    CALL dword ptr CS:[0x5b344c]        ; 00582f52 | PTR_mciSendStringA_005b344c
    TEST EAX,EAX                        ; 00582f59
    JNZ 0x005831e9                      ; 00582f5b
        ;   XREF to: 005831e9 (CONDITIONAL_JUMP)  ; LAB_005831e9
    PUSH 0x0                            ; 00582f61
    MOV EAX,0x1                         ; 00582f63
    PUSH 0x104                          ; 00582f68
    MOV [0x02d22fb0],EAX                ; 00582f6d | DAT_02d22fb0
    LEA EAX,[ESP + 0x14]                ; 00582f72
    PUSH EAX                            ; 00582f76
    PUSH 0x5d8040                       ; 00582f77 | = "status mov window handle"
    CALL dword ptr CS:[0x5b344c]        ; 00582f7c | PTR_mciSendStringA_005b344c
    TEST EAX,EAX                        ; 00582f83
    JNZ 0x00583018                      ; 00582f85
        ;   XREF to: 00583018 (CONDITIONAL_JUMP)  ; LAB_00583018
    LEA EAX,[ESP + 0xc]                 ; 00582f8b
    PUSH EAX                            ; 00582f8f
    CALL crt_stdlib.c_atoi_FUN_005a5f50 ; 00582f90
        ;   XREF to: 005a5f50 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005a5f50(char * string_ptr)
    ADD ESP,0x4                         ; 00582f95
    MOV [0x02d22fa8],EAX                ; 00582f98 | DAT_02d22fa8
    CMP dword ptr [0x02d22fb8],0x0      ; 00582f9d | DAT_02d22fb8
        ;   Label: LAB_00582f9d
    JNZ 0x00583147                      ; 00582fa4
        ;   XREF to: 00583147 (CONDITIONAL_JUMP)  ; LAB_00583147
    CMP dword ptr [0x02d22fb0],0x0      ; 00582faa | DAT_02d22fb0
    JZ 0x00583147                       ; 00582fb1
        ;   XREF to: 00583147 (CONDITIONAL_JUMP)  ; LAB_00583147
    LEA EAX,[ESP + 0x1f0]               ; 00582fb7
    PUSH EAX                            ; 00582fbe
    PUSH EBX                            ; 00582fbf
    CALL dword ptr CS:[0x5b34bc]        ; 00582fc0 | PTR_GetClientRect_005b34bc
    PUSH 0x0                            ; 00582fc7
    PUSH 0x80                           ; 00582fc9
    LEA EAX,[ESP + 0x118]               ; 00582fce
    PUSH EAX                            ; 00582fd5
    PUSH 0x5d7ffb                       ; 00582fd6 | = "where mov source"
    CALL dword ptr CS:[0x5b344c]        ; 00582fdb | PTR_mciSendStringA_005b344c
    LEA EAX,[ESP + 0x1e0]               ; 00582fe2
    PUSH EAX                            ; 00582fe9
    CALL dword ptr CS:[0x5b3504]        ; 00582fea | PTR_SetRectEmpty_005b3504
    MOV DL,byte ptr [ESP + 0x110]       ; 00582ff1
    LEA EAX,[ESP + 0x110]               ; 00582ff8
    CMP DL,0x20                         ; 00582fff
    JNZ 0x00583010                      ; 00583002
        ;   XREF to: 00583010 (CONDITIONAL_JUMP)  ; LAB_00583010
    MOV DH,byte ptr [EAX + 0x1]         ; 00583004
        ;   Label: LAB_00583004
    INC EAX                             ; 00583007
    CMP DH,0x20                         ; 00583008
    JZ 0x00583004                       ; 0058300b
        ;   XREF to: 00583004 (CONDITIONAL_JUMP)  ; LAB_00583004
    LEA EAX,[EAX]                       ; 0058300d
    CMP byte ptr [EAX],0x20             ; 00583010
        ;   Label: LAB_00583010
    JZ 0x00583040                       ; 00583013
        ;   XREF to: 00583040 (CONDITIONAL_JUMP)  ; LAB_00583040
    INC EAX                             ; 00583015
    JMP 0x00583010                      ; 00583016
        ;   XREF to: 00583010 (UNCONDITIONAL_JUMP)  ; LAB_00583010
    PUSH 0x104                          ; 00583018
        ;   Label: LAB_00583018
    LEA EDX,[ESP + 0x10]                ; 0058301d
    PUSH EDX                            ; 00583021
    PUSH EAX                            ; 00583022
    CALL dword ptr CS:[0x5b3444]        ; 00583023 | PTR_mciGetErrorStringA_005b3444
    PUSH 0x30                           ; 0058302a
    PUSH 0x0                            ; 0058302c
    LEA EAX,[ESP + 0x14]                ; 0058302e
    PUSH EAX                            ; 00583032
    PUSH EBX                            ; 00583033
    CALL dword ptr CS:[0x5b34d8]        ; 00583034 | PTR_MessageBoxA_005b34d8
    JMP 0x00582f9d                      ; 0058303b
        ;   XREF to: 00582f9d (UNCONDITIONAL_JUMP)  ; LAB_00582f9d
    CMP byte ptr [EAX],0x20             ; 00583040
        ;   Label: LAB_00583040
    JNZ 0x00583048                      ; 00583043
        ;   XREF to: 00583048 (CONDITIONAL_JUMP)  ; LAB_00583048
    INC EAX                             ; 00583045
    JMP 0x00583040                      ; 00583046
        ;   XREF to: 00583040 (UNCONDITIONAL_JUMP)  ; LAB_00583040
    CMP byte ptr [EAX],0x20             ; 00583048
        ;   Label: LAB_00583048
    JZ 0x00583050                       ; 0058304b
        ;   XREF to: 00583050 (CONDITIONAL_JUMP)  ; LAB_00583050
    INC EAX                             ; 0058304d
    JMP 0x00583048                      ; 0058304e
        ;   XREF to: 00583048 (UNCONDITIONAL_JUMP)  ; LAB_00583048
    CMP byte ptr [EAX],0x20             ; 00583050
        ;   Label: LAB_00583050
    JNZ 0x00583071                      ; 00583053
        ;   XREF to: 00583071 (CONDITIONAL_JUMP)  ; LAB_00583071
    INC EAX                             ; 00583055
    JMP 0x00583050                      ; 00583056
        ;   XREF to: 00583050 (UNCONDITIONAL_JUMP)  ; LAB_00583050
    IMUL ECX,dword ptr [ESP + 0x1e8],0xa ; 00583058
        ;   Label: LAB_00583058
    XOR EDX,EDX                         ; 00583060
    MOV DL,byte ptr [EAX]               ; 00583062
    SUB EDX,0x30                        ; 00583064
    ADD ECX,EDX                         ; 00583067
    INC EAX                             ; 00583069
    MOV dword ptr [ESP + 0x1e8],ECX     ; 0058306a
    MOV DL,byte ptr [EAX]               ; 00583071
        ;   Label: LAB_00583071
    CMP DL,0x30                         ; 00583073
    JNC 0x00583080                      ; 00583076
        ;   XREF to: 00583080 (CONDITIONAL_JUMP)  ; LAB_00583080
    CMP byte ptr [EAX],0x20             ; 00583078
        ;   Label: LAB_00583078
    JNZ 0x005830a0                      ; 0058307b
        ;   XREF to: 005830a0 (CONDITIONAL_JUMP)  ; LAB_005830a0
    INC EAX                             ; 0058307d
    JMP 0x00583078                      ; 0058307e
        ;   XREF to: 00583078 (UNCONDITIONAL_JUMP)  ; LAB_00583078
    CMP DL,0x39                         ; 00583080
        ;   Label: LAB_00583080
    JBE 0x00583058                      ; 00583083
        ;   XREF to: 00583058 (CONDITIONAL_JUMP)  ; LAB_00583058
    JMP 0x00583078                      ; 00583085
        ;   XREF to: 00583078 (UNCONDITIONAL_JUMP)  ; LAB_00583078
    IMUL EDX,dword ptr [ESP + 0x1ec],0xa ; 00583087
        ;   Label: LAB_00583087
    XOR ECX,ECX                         ; 0058308f
    MOV CL,BH                           ; 00583091
    SUB ECX,0x30                        ; 00583093
    ADD EDX,ECX                         ; 00583096
    INC EAX                             ; 00583098
    MOV dword ptr [ESP + 0x1ec],EDX     ; 00583099
    MOV BH,byte ptr [EAX]               ; 005830a0
        ;   Label: LAB_005830a0
    CMP BH,0x30                         ; 005830a2
    JC 0x005830ac                       ; 005830a5
        ;   XREF to: 005830ac (CONDITIONAL_JUMP)  ; LAB_005830ac
    CMP BH,0x39                         ; 005830a7
    JBE 0x00583087                      ; 005830aa
        ;   XREF to: 00583087 (CONDITIONAL_JUMP)  ; LAB_00583087
    CMP dword ptr [ESP + 0x1f8],0x190   ; 005830ac
        ;   Label: LAB_005830ac
    JLE 0x005831d3                      ; 005830b7
        ;   XREF to: 005831d3 (CONDITIONAL_JUMP)  ; LAB_005831d3
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005830bd
        ;   Label: LAB_005830bd
    MOV EBP,dword ptr [ESP + 0x1ec]     ; 005830c4
    ADD EAX,EAX                         ; 005830cb
    ADD EBP,EBP                         ; 005830cd
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005830cf
    MOV dword ptr [ESP + 0x1ec],EBP     ; 005830d6
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 005830dd
        ;   Label: LAB_005830dd
    MOV EDX,EAX                         ; 005830e4
    SAR EDX,0x1f                        ; 005830e6
    SUB EAX,EDX                         ; 005830e9
    SAR EAX,0x1                         ; 005830eb
    MOV EBX,EAX                         ; 005830ed
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005830ef
    MOV EDX,EAX                         ; 005830f6
    SAR EDX,0x1f                        ; 005830f8
    SUB EAX,EDX                         ; 005830fb
    SAR EAX,0x1                         ; 005830fd
    SUB EBX,EAX                         ; 005830ff
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00583101
    MOV EDX,EAX                         ; 00583108
    SAR EDX,0x1f                        ; 0058310a
    SUB EAX,EDX                         ; 0058310d
    SAR EAX,0x1                         ; 0058310f
    MOV ECX,EAX                         ; 00583111
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00583113
    MOV EDX,EAX                         ; 0058311a
    SAR EDX,0x1f                        ; 0058311c
    SUB EAX,EDX                         ; 0058311f
    SAR EAX,0x1                         ; 00583121
    PUSH 0x1                            ; 00583123
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00583125
    PUSH EDX                            ; 0058312c
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 0058312d
    PUSH ESI                            ; 00583134
    SUB ECX,EAX                         ; 00583135
    PUSH ECX                            ; 00583137
    PUSH EBX                            ; 00583138
    MOV EDI,dword ptr [0x02d22fa8]      ; 00583139 | DAT_02d22fa8
    PUSH EDI                            ; 0058313f
    CALL dword ptr CS:[0x5b34dc]        ; 00583140 | PTR_MoveWindow_005b34dc
    MOV ECX,dword ptr [0x02d22fac]      ; 00583147 | DAT_02d22fac
        ;   Label: LAB_00583147
    MOV EDX,dword ptr [0x02d21b78]      ; 0058314d | DAT_02d21b78
    TEST ECX,ECX                        ; 00583153
    SETZ AL                             ; 00583155
    AND EAX,0xff                        ; 00583158
    MOV [0x02d22fac],EAX                ; 0058315d | DAT_02d22fac
    TEST EAX,EAX                        ; 00583162
    JZ 0x00583207                       ; 00583164
        ;   XREF to: 00583207 (CONDITIONAL_JUMP)  ; LAB_00583207
    MOV ESI,dword ptr [0x02d22fb8]      ; 0058316a | DAT_02d22fb8
    TEST ESI,ESI                        ; 00583170
    JZ 0x00583217                       ; 00583172
        ;   XREF to: 00583217 (CONDITIONAL_JUMP)  ; LAB_00583217
    PUSH EDX                            ; 00583178
    PUSH 0x0                            ; 00583179
    PUSH 0x0                            ; 0058317b
    PUSH 0x5d806e                       ; 0058317d | = "play mov fullscreen notify"
    CALL dword ptr CS:[0x5b344c]        ; 00583182 | PTR_mciSendStringA_005b344c
        ;   Label: LAB_00583182
    CALL dword ptr CS:[0x5b3588]        ; 00583189 | PTR_GetCurrentProcess_005b3588
    PUSH EAX                            ; 00583190
    MOV EBX,EAX                         ; 00583191
    MOV ESI,EAX                         ; 00583193
    CALL dword ptr CS:[0x5b35d0]        ; 00583195 | PTR_GetThreadPriority_005b35d0
    PUSH -0xf                           ; 0058319c
    PUSH EBX                            ; 0058319e
    MOV EDI,EAX                         ; 0058319f
    CALL dword ptr CS:[0x5b3650]        ; 005831a1 | PTR_SetThreadPriority_005b3650
    XOR EBX,EBX                         ; 005831a8
    CALL wincore_winrun.cpp_FUN_00580f70 ; 005831aa
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
        ;   Label: LAB_005831aa
    CMP EBX,dword ptr [0x02d22fac]      ; 005831af | DAT_02d22fac
    JZ 0x00583224                       ; 005831b5
        ;   XREF to: 00583224 (CONDITIONAL_JUMP)  ; LAB_00583224
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 005831b7
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
    TEST EAX,EAX                        ; 005831bc
    JNZ 0x00583224                      ; 005831be
        ;   XREF to: 00583224 (CONDITIONAL_JUMP)  ; LAB_00583224
    CMP EBX,dword ptr [0x02d22fb0]      ; 005831c0 | DAT_02d22fb0
    JZ 0x00583224                       ; 005831c6
        ;   XREF to: 00583224 (CONDITIONAL_JUMP)  ; LAB_00583224
    PUSH 0x14                           ; 005831c8
    CALL dword ptr CS:[0x5b3658]        ; 005831ca | PTR_Sleep_005b3658
    JMP 0x005831aa                      ; 005831d1
        ;   XREF to: 005831aa (UNCONDITIONAL_JUMP)  ; LAB_005831aa
    CMP dword ptr [ESP + 0x1fc],0x12c   ; 005831d3
        ;   Label: LAB_005831d3
    JG 0x005830bd                       ; 005831de
        ;   XREF to: 005830bd (CONDITIONAL_JUMP)  ; LAB_005830bd
    JMP 0x005830dd                      ; 005831e4
        ;   XREF to: 005830dd (UNCONDITIONAL_JUMP)  ; LAB_005830dd
    PUSH 0x30                           ; 005831e9
        ;   Label: LAB_005831e9
    PUSH 0x0                            ; 005831eb
    PUSH 0x5d8059                       ; 005831ed | = "Unable to open .AVI!"
    PUSH EBX                            ; 005831f2
    XOR EBP,EBP                         ; 005831f3
    CALL dword ptr CS:[0x5b34d8]        ; 005831f5 | PTR_MessageBoxA_005b34d8
    MOV dword ptr [0x02d22fb0],EBP      ; 005831fc | DAT_02d22fb0
    JMP 0x00583147                      ; 00583202
        ;   XREF to: 00583147 (UNCONDITIONAL_JUMP)  ; LAB_00583147
    PUSH 0x0                            ; 00583207
        ;   Label: LAB_00583207
    PUSH 0x0                            ; 00583209
    PUSH 0x0                            ; 0058320b
    PUSH 0x5d80a0                       ; 0058320d | = "pause mov"
    JMP 0x00583182                      ; 00583212
        ;   XREF to: 00583182 (UNCONDITIONAL_JUMP)  ; LAB_00583182
    PUSH EDX                            ; 00583217
        ;   Label: LAB_00583217
    PUSH ESI                            ; 00583218
    PUSH ESI                            ; 00583219
    PUSH 0x5d8089                       ; 0058321a | = "play mov window notify"
    JMP 0x00583182                      ; 0058321f
        ;   XREF to: 00583182 (UNCONDITIONAL_JUMP)  ; LAB_00583182
    PUSH EDI                            ; 00583224
        ;   Label: LAB_00583224
    PUSH ESI                            ; 00583225
    CALL dword ptr CS:[0x5b3650]        ; 00583226 | PTR_SetThreadPriority_005b3650
    MOV EDX,dword ptr [0x02d21b78]      ; 0058322d | DAT_02d21b78
    PUSH EDX                            ; 00583233
    CALL wincore_winvideo.cpp_closeMovie_FUN_00582b60 ; 00583234
        ;   XREF to: 00582b60 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00582b60(HWND window_handle)
    ADD ESP,0x4                         ; 00583239
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 0058323c
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 00583241
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00583246
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,0x1                         ; 0058324b
    POP EBX                             ; 00583250
    POP ESI                             ; 00583251
    POP EDI                             ; 00583252
    ADD ESP,0x1f4                       ; 00583253
    POP EBP                             ; 00583259
    RET                                 ; 0058325a

