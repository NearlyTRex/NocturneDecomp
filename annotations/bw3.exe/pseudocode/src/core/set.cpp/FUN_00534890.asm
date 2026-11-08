; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534890(int *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   FUN_004b7f90 at 004b83ed
;   FUN_004ba220 at 004ba268
;   FUN_004ba280 at 004ba2c8
;   FUN_004ba540 at 004bab5a
;   FUN_00529a70 at 0052d576
;   FUN_005353b0 at 005353ce
;   FUN_0053b0d0 at 0053b0e4
;   FUN_0053f940 at 0053f979
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d0469
;   TerminatedCString s_CDemonSet_setCameraView_005d0479
;   TerminatedCString s_s_raw_005d04a6
;   TerminatedCString s_core_set_cpp_005d04ad
;   TerminatedCString s_CDemonSet_setCameraView_005d04bd
;   undefined4 DAT_005e3bc0
;   undefined4 DAT_005e3bc4
;   undefined4 DAT_005f4a58
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_005fed24
;   undefined4 DAT_006045f8
;   undefined4 DAT_00606b20
;   undefined4 DAT_006071f0
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e24c
;   ... and 23 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_0041d8b0
;   FUN_00448ff0
;   FUN_00449750
;   FUN_00449840
;   FUN_00449a00
;   FUN_0044aa20
;   FUN_0044af70
;   FUN_0044b070
;   FUN_0044c130
;   FUN_004503f0
;   FUN_00451250
;   FUN_004512a0
;   FUN_0045b9b0
;   FUN_0045c470
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534890
        ;   Label: FUN_00534890
    PUSH ESI                            ; 00534891
    PUSH EDI                            ; 00534892
    PUSH EBP                            ; 00534893
    SUB ESP,0x1e8                       ; 00534894
    MOV EDX,dword ptr [ESP + 0x200]     ; 0053489a
    TEST EDX,EDX                        ; 005348a1
    JL 0x005348b2                       ; 005348a3
        ;   XREF to: 005348b2 (CONDITIONAL_JUMP)  ; LAB_005348b2
    MOV EAX,EDX                         ; 005348a5
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 005348a7
    CMP EAX,dword ptr [EDX]             ; 005348ae
    JL 0x005348dd                       ; 005348b0
        ;   XREF to: 005348dd (CONDITIONAL_JUMP)  ; LAB_005348dd
    MOV EDI,dword ptr [ESP + 0x200]     ; 005348b2
        ;   Label: LAB_005348b2
    PUSH EDI                            ; 005348b9
    MOV EBX,0x5d0469                    ; 005348ba | = "..\\core\\set.cpp"
    MOV ESI,0x484                       ; 005348bf
    PUSH 0x5d0479                       ; 005348c4 | = "CDemonSet::setCameraView - invalid in..."
    MOV dword ptr [0x01d71de0],EBX      ; 005348c9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005348cf | DAT_01d71de4
    CALL FUN_004e4330                   ; 005348d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 005348da
    MOV EBP,dword ptr [0x0203ad1c]      ; 005348dd | DAT_0203ad1c
        ;   Label: LAB_005348dd
    XOR EBX,EBX                         ; 005348e3
    TEST EBP,EBP                        ; 005348e5
    JLE 0x00534910                      ; 005348e7
        ;   XREF to: 00534910 (CONDITIONAL_JUMP)  ; LAB_00534910
    XOR ESI,ESI                         ; 005348e9
    MOV EAX,dword ptr [ESI + 0x203ad20] ; 005348eb
        ;   Label: LAB_005348eb
    PUSH EAX                            ; 005348f1
    ADD ESI,0x4                         ; 005348f2
    INC EBX                             ; 005348f5
    CALL FUN_0045ca30                   ; 005348f6
        ;   XREF to: 0045ca30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ca30()
    MOV EDX,dword ptr [0x0203ad1c]      ; 005348fb | DAT_0203ad1c
    ADD ESP,0x4                         ; 00534901
    CMP EBX,EDX                         ; 00534904
    JL 0x005348eb                       ; 00534906
        ;   XREF to: 005348eb (CONDITIONAL_JUMP)  ; LAB_005348eb
    LEA EAX,[EAX]                       ; 00534908
    MOV EDX,EDX                         ; 0053490e
    MOV ECX,dword ptr [0x0203a598]      ; 00534910 | DAT_0203a598
        ;   Label: LAB_00534910
    XOR ESI,ESI                         ; 00534916
    TEST ECX,ECX                        ; 00534918
    JLE 0x00534940                      ; 0053491a
        ;   XREF to: 00534940 (CONDITIONAL_JUMP)  ; LAB_00534940
    XOR EBX,EBX                         ; 0053491c
    MOV EDI,dword ptr [EBX + 0x203a59c] ; 0053491e | DAT_0203a59c
        ;   Label: LAB_0053491e
    PUSH EDI                            ; 00534924
    ADD EBX,0x4                         ; 00534925
    INC ESI                             ; 00534928
    CALL FUN_0045ca30                   ; 00534929
        ;   XREF to: 0045ca30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ca30()
    MOV EBP,dword ptr [0x0203a598]      ; 0053492e | DAT_0203a598
    ADD ESP,0x4                         ; 00534934
    CMP ESI,EBP                         ; 00534937
    JL 0x0053491e                       ; 00534939
        ;   XREF to: 0053491e (CONDITIONAL_JUMP)  ; LAB_0053491e
    LEA EAX,[EAX]                       ; 0053493b
    MOV ECX,ECX                         ; 0053493e
    MOV EAX,[0x0203a598]                ; 00534940 | DAT_0203a598
        ;   Label: LAB_00534940
    XOR ESI,ESI                         ; 00534945
    TEST EAX,EAX                        ; 00534947
    JLE 0x00534970                      ; 00534949
        ;   XREF to: 00534970 (CONDITIONAL_JUMP)  ; LAB_00534970
    XOR EBX,EBX                         ; 0053494b
    MOV EDX,dword ptr [EBX + 0x203a59c] ; 0053494d | DAT_0203a59c
        ;   Label: LAB_0053494d
    PUSH EDX                            ; 00534953
    ADD EBX,0x4                         ; 00534954
    INC ESI                             ; 00534957
    CALL FUN_0045c500                   ; 00534958
        ;   XREF to: 0045c500 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c500()
    MOV ECX,dword ptr [0x0203a598]      ; 0053495d | DAT_0203a598
    ADD ESP,0x4                         ; 00534963
    CMP ESI,ECX                         ; 00534966
    JL 0x0053494d                       ; 00534968
        ;   XREF to: 0053494d (CONDITIONAL_JUMP)  ; LAB_0053494d
    LEA EAX,[EAX]                       ; 0053496a
    CALL FUN_0045c470                   ; 00534970
        ;   XREF to: 0045c470 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c470()
        ;   Label: LAB_00534970
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534975
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0053497c
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 00534983
    MOV dword ptr [EDX + 0x15aec0],0x3f000000 ; 00534989
    MOV dword ptr [EDX + 0x15ac90],0x1  ; 00534993
    XOR EBX,EBX                         ; 0053499d
    MOV dword ptr [EDX + 0x15f6f8],0x1  ; 0053499f
    MOV dword ptr [0x0203a598],EBX      ; 005349a9 | DAT_0203a598
    MOV dword ptr [EDX + 0x15aebc],EAX  ; 005349af
    MOV EAX,dword ptr [ESP + 0x200]     ; 005349b5
    MOV dword ptr [0x0203b3e8],EBX      ; 005349bc | DAT_0203b3e8
    MOV dword ptr [EDX + 0x15aeb8],EAX  ; 005349c2
    MOV dword ptr [0x0203ad30],EBX      ; 005349c8 | DAT_0203ad30
    MOV EDX,dword ptr [EDX + 0x14d164]  ; 005349ce
    MOV dword ptr [0x0203aec4],EBX      ; 005349d4 | DAT_0203aec4
    TEST EDX,EDX                        ; 005349da
    JLE 0x00534a10                      ; 005349dc
        ;   XREF to: 00534a10 (CONDITIONAL_JUMP)  ; LAB_00534a10
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 005349de
    MOV EDI,dword ptr [ESP + 0x1fc]     ; 005349e5
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 005349ec
        ;   Label: LAB_005349ec
    PUSH ECX                            ; 005349f2
    PUSH EDI                            ; 005349f3
    ADD ESI,0x4                         ; 005349f4
    INC EBX                             ; 005349f7
    CALL FUN_00534820                   ; 005349f8
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; undefined FUN_00534820()
    MOV EBP,dword ptr [EDI + 0x14d164]  ; 005349fd
    ADD ESP,0x8                         ; 00534a03
    CMP EBX,EBP                         ; 00534a06
    JL 0x005349ec                       ; 00534a08
        ;   XREF to: 005349ec (CONDITIONAL_JUMP)  ; LAB_005349ec
    LEA EAX,[EAX]                       ; 00534a0a
    IMUL EDI,dword ptr [ESP + 0x200],0x1a4 ; 00534a10
        ;   Label: LAB_00534a10
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 00534a1b
    ADD ESI,EDI                         ; 00534a22
    CMP dword ptr [ESI + 0x144],0x0     ; 00534a24
    JZ 0x00534e3f                       ; 00534a2b
        ;   XREF to: 00534e3f (CONDITIONAL_JUMP)  ; LAB_00534e3f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534a31
        ;   Label: LAB_00534a31
    CMP dword ptr [EAX + 0x15ac94],0x0  ; 00534a38
    JZ 0x00535062                       ; 00534a3f
        ;   XREF to: 00535062 (CONDITIONAL_JUMP)  ; LAB_00535062
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534a45
        ;   Label: LAB_00534a45
    MOV ECX,dword ptr [ESP + 0x200]     ; 00534a4c
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 00534a53
    IMUL EAX,ECX,0x1a4                  ; 00534a5d
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 00534a63
    ADD EAX,EBX                         ; 00534a6a
    MOV ESI,dword ptr [EAX + 0x144]     ; 00534a6c
    TEST ESI,ESI                        ; 00534a72
    JZ 0x00535277                       ; 00534a74
        ;   XREF to: 00535277 (CONDITIONAL_JUMP)  ; LAB_00535277
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534a7a
        ;   Label: LAB_00534a7a
    PUSH EAX                            ; 00534a81
    MOV dword ptr [EAX + 0x15f6f8],0x0  ; 00534a82
    CALL FUN_00535a80                   ; 00534a8c
        ;   XREF to: 00535a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00535a80()
    ADD ESP,0x4                         ; 00534a91
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 00534a94
    MOV ECX,dword ptr [ESP + 0x1fc]     ; 00534a9f
    ADD EAX,ECX                         ; 00534aa6
    CMP dword ptr [EAX + 0x154],0x0     ; 00534aa8
    JZ 0x00535330                       ; 00534aaf
        ;   XREF to: 00535330 (CONDITIONAL_JUMP)  ; LAB_00535330
    MOV EBP,dword ptr [ECX + 0x15ac8c]  ; 00534ab5
    PUSH EBP                            ; 00534abb
    MOV EAX,[0x006045f8]                ; 00534abc | DAT_006045f8
    PUSH EAX                            ; 00534ac1
    CALL FUN_00560c30                   ; 00534ac2
        ;   XREF to: 00560c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00560c30()
        ;   Label: LAB_00534ac2
    ADD ESP,0x8                         ; 00534ac7
    LEA EDI,[ESP + 0x160]               ; 00534aca
    MOV ESI,0x2038f50                   ; 00534ad1
    MOVSD ES:EDI,ESI                    ; 00534ad6 | DAT_02038f50
    MOVSD ES:EDI,ESI                    ; 00534ad7 | DAT_02038f54
    MOVSD ES:EDI,ESI                    ; 00534ad8 | DAT_02038f58
    LEA EDI,[ESP + 0x1b4]               ; 00534ad9
    LEA ESI,[ESP + 0x160]               ; 00534ae0
    LEA EAX,[ESP + 0x1b4]               ; 00534ae7
    LEA EDX,[ESP + 0x19c]               ; 00534aee
    MOVSD ES:EDI,ESI                    ; 00534af5
    MOVSD ES:EDI,ESI                    ; 00534af6
    MOVSD ES:EDI,ESI                    ; 00534af7
    CMP EDX,EAX                         ; 00534af8
    JZ 0x00534b26                       ; 00534afa
        ;   XREF to: 00534b26 (CONDITIONAL_JUMP)  ; LAB_00534b26
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00534afc
    MOV dword ptr [ESP + 0x19c],EAX     ; 00534b03
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 00534b0a
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00534b11
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00534b18
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00534b1f
    MOV ECX,0xa                         ; 00534b26
        ;   Label: LAB_00534b26
    LEA EDI,[ESP + 0xb0]                ; 00534b2b
    MOV ESI,0x2038f5c                   ; 00534b32
    MOVSD.REP ES:EDI,ESI                ; 00534b37 | DAT_02038f5c | DAT_02038f60
    MOV ECX,0xa                         ; 00534b39
    LEA EDI,[ESP + 0xd8]                ; 00534b3e
    LEA ESI,[ESP + 0xb0]                ; 00534b45
    LEA EAX,[ESP + 0xd8]                ; 00534b4c
    MOVSD.REP ES:EDI,ESI                ; 00534b53
    PUSH EAX                            ; 00534b55
    LEA ESI,[ESP + 0x158]               ; 00534b56
    LEA EDI,[ESP + 0x1ac]               ; 00534b5d
    CALL FUN_0045b9b0                   ; 00534b64
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b9b0()
    LEA ESI,[ESP + 0x158]               ; 00534b69
    LEA EAX,[ESP + 0x1ac]               ; 00534b70
    ADD ESP,0x4                         ; 00534b77
    LEA EDX,[ESP + 0x148]               ; 00534b7a
    MOVSD ES:EDI,ESI                    ; 00534b81
    MOVSD ES:EDI,ESI                    ; 00534b82
    MOVSD ES:EDI,ESI                    ; 00534b83
    CMP EDX,EAX                         ; 00534b84
    JZ 0x00534bb2                       ; 00534b86
        ;   XREF to: 00534bb2 (CONDITIONAL_JUMP)  ; LAB_00534bb2
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 00534b88
    MOV dword ptr [ESP + 0x148],EAX     ; 00534b8f
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 00534b96
    MOV dword ptr [ESP + 0x14c],EAX     ; 00534b9d
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00534ba4
    MOV dword ptr [ESP + 0x150],EAX     ; 00534bab
    LEA EAX,[ESP + 0x148]               ; 00534bb2
        ;   Label: LAB_00534bb2
    PUSH EAX                            ; 00534bb9
    LEA EAX,[ESP + 0x1a0]               ; 00534bba
    PUSH EAX                            ; 00534bc1
    MOV EDX,dword ptr [0x006071f0]      ; 00534bc2 | DAT_006071f0
    PUSH EDX                            ; 00534bc8
    CALL FUN_0057d1a0                   ; 00534bc9
        ;   XREF to: 0057d1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d1a0()
    ADD ESP,0xc                         ; 00534bce
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534bd1
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 00534bd8
    XOR ESI,ESI                         ; 00534bde
    TEST ECX,ECX                        ; 00534be0
    JLE 0x00534c10                      ; 00534be2
        ;   XREF to: 00534c10 (CONDITIONAL_JUMP)  ; LAB_00534c10
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 00534be4
    MOV EBX,EAX                         ; 00534beb
    MOV EDI,dword ptr [EBX + 0x14d168]  ; 00534bed
        ;   Label: LAB_00534bed
    PUSH EDI                            ; 00534bf3
    PUSH EBP                            ; 00534bf4
    ADD EBX,0x4                         ; 00534bf5
    INC ESI                             ; 00534bf8
    CALL FUN_00534820                   ; 00534bf9
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; undefined FUN_00534820()
    MOV EDX,dword ptr [EBP + 0x14d164]  ; 00534bfe
    ADD ESP,0x8                         ; 00534c04
    CMP ESI,EDX                         ; 00534c07
    JL 0x00534bed                       ; 00534c09
        ;   XREF to: 00534bed (CONDITIONAL_JUMP)  ; LAB_00534bed
    LEA EAX,[EAX]                       ; 00534c0b
    MOV ECX,ECX                         ; 00534c0e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534c10
        ;   Label: LAB_00534c10
    XOR ECX,ECX                         ; 00534c17
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 00534c19
    MOV dword ptr [ESP + 0x1dc],ECX     ; 00534c1f
    TEST EBX,EBX                        ; 00534c26
    JLE 0x00534d6d                      ; 00534c28
        ;   XREF to: 00534d6d (CONDITIONAL_JUMP)  ; LAB_00534d6d
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00534c2e
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00534c35
        ;   Label: LAB_00534c35
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 00534c3c
    MOV EDX,dword ptr [EAX + 0xfc]      ; 00534c42
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00534c48
    TEST EDX,EDX                        ; 00534c4f
    JZ 0x00535343                       ; 00534c51
        ;   XREF to: 00535343 (CONDITIONAL_JUMP)  ; LAB_00535343
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 00534c57
        ;   Label: LAB_00534c57
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00534c5e
    PUSH EBX                            ; 00534c65
    MOV EAX,dword ptr [EAX + 0x154]     ; 00534c66
    LEA ESI,[ESP + 0x104]               ; 00534c6c
    LEA EDI,[ESP + 0x11c]               ; 00534c73
    CALL dword ptr [EAX + 0x1c]         ; 00534c7a
    MOV ECX,0x6                         ; 00534c7d
    LEA ESI,[ESP + 0x104]               ; 00534c82
    LEA EAX,[ESP + 0x4]                 ; 00534c89
    ADD ESP,0x4                         ; 00534c8d
    XOR EBP,EBP                         ; 00534c90
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00534c92
    MOVSD.REP ES:EDI,ESI                ; 00534c99
    PUSH EBP                            ; 00534c9b
        ;   Label: LAB_00534c9b
    LEA EAX,[ESP + 0x11c]               ; 00534c9c
    PUSH EAX                            ; 00534ca3
    LEA ESI,[ESP + 0x18c]               ; 00534ca4
    LEA EDI,[ESP + 0x138]               ; 00534cab
    CALL FUN_0041d8b0                   ; 00534cb2
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d8b0()
    LEA ESI,[ESP + 0x18c]               ; 00534cb7
    ADD ESP,0x8                         ; 00534cbe
    LEA EAX,[ESP + 0x130]               ; 00534cc1
    MOVSD ES:EDI,ESI                    ; 00534cc8
    MOVSD ES:EDI,ESI                    ; 00534cc9
    MOVSD ES:EDI,ESI                    ; 00534cca
    PUSH EAX                            ; 00534ccb
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00534ccc
    PUSH ESI                            ; 00534cd3
    LEA ESI,[ESP + 0x144]               ; 00534cd4
    LEA EDI,[ESP + 0x174]               ; 00534cdb
    CALL FUN_00408b80                   ; 00534ce2
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x144]               ; 00534ce7
    ADD ESP,0x8                         ; 00534cee
    LEA EAX,[ESP + 0x16c]               ; 00534cf1
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 00534cf8
    MOVSD ES:EDI,ESI                    ; 00534cff
    MOVSD ES:EDI,ESI                    ; 00534d00
    MOVSD ES:EDI,ESI                    ; 00534d01
    FLD float ptr [EAX]                 ; 00534d02
    FMUL float ptr [0x005e3bc0]         ; 00534d04 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 00534d0a
    FLD float ptr [EAX + 0x4]           ; 00534d0c
    FMUL float ptr [0x005e3bc0]         ; 00534d0f | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 00534d15
    FLD float ptr [EAX + 0x8]           ; 00534d18
    FMUL float ptr [0x005e3bc0]         ; 00534d1b | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 00534d21
    LEA EDI,[EBX + 0xc]                 ; 00534d24
    INC EBP                             ; 00534d27
    MOV dword ptr [ESP + 0x1e4],EDI     ; 00534d28
    CMP EBP,0x8                         ; 00534d2f
    JL 0x00534c9b                       ; 00534d32
        ;   XREF to: 00534c9b (CONDITIONAL_JUMP)  ; LAB_00534c9b
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 00534d38
        ;   Label: LAB_00534d38
    MOV EDI,dword ptr [ESP + 0x1dc]     ; 00534d3f
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 00534d46
    ADD ESI,0x4                         ; 00534d4d
    INC EDI                             ; 00534d50
    MOV EBP,dword ptr [EDX + 0x14d164]  ; 00534d51
    MOV dword ptr [ESP + 0x1d8],ESI     ; 00534d57
    MOV dword ptr [ESP + 0x1dc],EDI     ; 00534d5e
    CMP EDI,EBP                         ; 00534d65
    JL 0x00534c35                       ; 00534d67
        ;   XREF to: 00534c35 (CONDITIONAL_JUMP)  ; LAB_00534c35
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 00534d6d
        ;   Label: LAB_00534d6d
    FLD float ptr [EBX + 0x14d154]      ; 00534d74
    FMUL float ptr [EBX + 0x14d160]     ; 00534d7a
    FLD float ptr [EBX + 0x14d158]      ; 00534d80
    FMUL float ptr [EBX + 0x14d160]     ; 00534d86
    FLD float ptr [EBX + 0x14d15c]      ; 00534d8c
    FMUL float ptr [EBX + 0x14d160]     ; 00534d92
    MOV EAX,0x1                         ; 00534d98
    LEA EDI,[ESP + 0x1c0]               ; 00534d9d
    LEA ESI,[ESP + 0x190]               ; 00534da4
    LEA EDX,[ESP + 0x178]               ; 00534dab
    MOV [0x0207bad4],EAX                ; 00534db2 | DAT_0207bad4
    LEA EAX,[ESP + 0x1c0]               ; 00534db7
    FXCH ST2                            ; 00534dbe
    FSTP float ptr [ESP + 0x190]        ; 00534dc0
    FSTP float ptr [ESP + 0x194]        ; 00534dc7
    FSTP float ptr [ESP + 0x198]        ; 00534dce
    MOVSD ES:EDI,ESI                    ; 00534dd5
    MOVSD ES:EDI,ESI                    ; 00534dd6
    MOVSD ES:EDI,ESI                    ; 00534dd7
    CMP EDX,EAX                         ; 00534dd8
    JZ 0x00534e06                       ; 00534dda
        ;   XREF to: 00534e06 (CONDITIONAL_JUMP)  ; LAB_00534e06
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00534ddc
    MOV dword ptr [ESP + 0x178],EAX     ; 00534de3
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00534dea
    MOV dword ptr [ESP + 0x17c],EAX     ; 00534df1
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00534df8
    MOV dword ptr [ESP + 0x180],EAX     ; 00534dff
    MOV EBX,0x207baac                   ; 00534e06
        ;   Label: LAB_00534e06
    LEA EAX,[ESP + 0x178]               ; 00534e0b
    FLD float ptr [EAX]                 ; 00534e12
    FMUL float ptr [0x005e3bc4]         ; 00534e14 | DAT_005e3bc4
    FISTP dword ptr [EBX]               ; 00534e1a | DAT_0207baac
    FLD float ptr [EAX + 0x4]           ; 00534e1c
    FMUL float ptr [0x005e3bc4]         ; 00534e1f | DAT_005e3bc4
    FISTP dword ptr [EBX + 0x4]         ; 00534e25 | DAT_0207bab0
    FLD float ptr [EAX + 0x8]           ; 00534e28
    FMUL float ptr [0x005e3bc4]         ; 00534e2b | DAT_005e3bc4
    FISTP dword ptr [EBX + 0x8]         ; 00534e31 | DAT_0207bab4
    ADD ESP,0x1e8                       ; 00534e34
    POP EBP                             ; 00534e3a
    POP EDI                             ; 00534e3b
    POP ESI                             ; 00534e3c
    POP EBX                             ; 00534e3d
    RET                                 ; 00534e3e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534e3f
        ;   Label: LAB_00534e3f
    ADD EAX,0x4                         ; 00534e46
    PUSH 0x2038f4c                      ; 00534e49
    ADD EDI,EAX                         ; 00534e4e
    PUSH EDI                            ; 00534e50
    CALL FUN_00541fb0                   ; 00534e51
        ;   XREF to: 00541fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00541fb0()
    ADD ESP,0x8                         ; 00534e56
    MOV ECX,dword ptr [ESI + 0x154]     ; 00534e59
    MOV EBX,dword ptr [ESP + 0x1fc]     ; 00534e5f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534e66
    ADD EBX,0x15ac64                    ; 00534e6d
    ADD EAX,0x15ac70                    ; 00534e73
    TEST ECX,ECX                        ; 00534e78
    JZ 0x0053501a                       ; 00534e7a
        ;   XREF to: 0053501a (CONDITIONAL_JUMP)  ; LAB_0053501a
    MOV ESI,dword ptr [ESP + 0x1fc]     ; 00534e80
    MOV EDX,dword ptr [ESI + 0x15ac40]  ; 00534e87
    MOV dword ptr [EBX],EDX             ; 00534e8d
    MOV EBP,EBX                         ; 00534e8f
    MOV EDX,dword ptr [ESI + 0x15ac44]  ; 00534e91
    ADD ESI,0x15ac40                    ; 00534e97
    MOV dword ptr [EBX + 0x4],EDX       ; 00534e9d
    MOV EDI,ESI                         ; 00534ea0
    MOV EDX,dword ptr [ESI + 0x8]       ; 00534ea2
    ADD ESI,0xc                         ; 00534ea5
    MOV dword ptr [EBX + 0x8],EDX       ; 00534ea8
    CMP EAX,ESI                         ; 00534eab
    JZ 0x00534ebf                       ; 00534ead
        ;   XREF to: 00534ebf (CONDITIONAL_JUMP)  ; LAB_00534ebf
    MOV EDX,dword ptr [ESI]             ; 00534eaf
    MOV dword ptr [EAX],EDX             ; 00534eb1
    MOV EDX,dword ptr [ESI + 0x4]       ; 00534eb3
    MOV dword ptr [EAX + 0x4],EDX       ; 00534eb6
    MOV EDX,dword ptr [ESI + 0x8]       ; 00534eb9
    MOV dword ptr [EAX + 0x8],EDX       ; 00534ebc
    MOV EAX,dword ptr [EDI + 0x18]      ; 00534ebf
        ;   Label: LAB_00534ebf
    MOV dword ptr [EBP + 0x18],EAX      ; 00534ec2
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00534ec5
    MOV dword ptr [EBP + 0x1c],EAX      ; 00534ec8
    MOV EAX,dword ptr [EDI + 0x20]      ; 00534ecb
    MOV dword ptr [EBP + 0x20],EAX      ; 00534ece
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00534ed1
        ;   Label: LAB_00534ed1
    ADD EAX,0x15ac64                    ; 00534ed8
    PUSH EAX                            ; 00534edd
    PUSH 0x2038f4c                      ; 00534ede
    CALL FUN_004503f0                   ; 00534ee3
        ;   XREF to: 004503f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004503f0()
    ADD ESP,0x8                         ; 00534ee8
    XOR EBX,EBX                         ; 00534eeb
    PUSH EBX                            ; 00534eed
    PUSH 0x2038f4c                      ; 00534eee
    MOV dword ptr [0x0203b37c],EBX      ; 00534ef3 | DAT_0203b37c
    CALL FUN_00448ff0                   ; 00534ef9
        ;   XREF to: 00448ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00448ff0()
    ADD ESP,0x8                         ; 00534efe
    PUSH 0x2038f4c                      ; 00534f01
    CALL FUN_00449840                   ; 00534f06
        ;   XREF to: 00449840 (UNCONDITIONAL_CALL)  ; undefined FUN_00449840()
    ADD ESP,0x4                         ; 00534f0b
    PUSH 0x10                           ; 00534f0e
    MOV ESI,dword ptr [ESP + 0x200]     ; 00534f10
    PUSH ESI                            ; 00534f17
    CALL FUN_00539f30                   ; 00534f18
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00539f30()
    ADD ESP,0x8                         ; 00534f1d
    PUSH 0x1                            ; 00534f20
    PUSH 0x461c3f9a                     ; 00534f22
    PUSH ESI                            ; 00534f27
    CALL FUN_00533b80                   ; 00534f28
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00533b80()
    ADD ESP,0xc                         ; 00534f2d
    PUSH 0x2038f4c                      ; 00534f30
    CALL FUN_00451250                   ; 00534f35
        ;   XREF to: 00451250 (UNCONDITIONAL_CALL)  ; undefined FUN_00451250()
    ADD ESP,0x4                         ; 00534f3a
    MOV EBP,0x1                         ; 00534f3d
    PUSH EBP                            ; 00534f42
    PUSH ESI                            ; 00534f43
    MOV dword ptr [0x0207baa4],EBP      ; 00534f44 | DAT_0207baa4
    CALL FUN_005346b0                   ; 00534f4a
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005346b0()
    ADD ESP,0x8                         ; 00534f4f
    PUSH 0x2038f4c                      ; 00534f52
    MOV dword ptr [0x0207baa4],EBX      ; 00534f57 | DAT_0207baa4
    CALL FUN_0044b070                   ; 00534f5d
        ;   XREF to: 0044b070 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b070()
    ADD ESP,0x4                         ; 00534f62
    PUSH 0x2038f4c                      ; 00534f65
    CALL FUN_004512a0                   ; 00534f6a
        ;   XREF to: 004512a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004512a0()
    ADD ESP,0x4                         ; 00534f6f
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 00534f72
    LEA EDX,[ESI + 0x4]                 ; 00534f7d
    ADD EAX,EDX                         ; 00534f80
    PUSH EAX                            ; 00534f82
    PUSH 0x5d04a6                       ; 00534f83 | = "%s.raw"
    LEA EAX,[ESP + 0x68]                ; 00534f88
    PUSH EAX                            ; 00534f8c
    CALL FUN_005a28c0                   ; 00534f8d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00534f92
    LEA EAX,[ESP + 0x60]                ; 00534f95
    PUSH EAX                            ; 00534f99
    PUSH 0x2038f4c                      ; 00534f9a
    CALL FUN_0044c130                   ; 00534f9f
        ;   XREF to: 0044c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0044c130()
    ADD ESP,0x8                         ; 00534fa4
    PUSH EBP                            ; 00534fa7
    PUSH ESI                            ; 00534fa8
    CALL FUN_005346b0                   ; 00534fa9
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005346b0()
    ADD ESP,0x8                         ; 00534fae
    PUSH EBX                            ; 00534fb1
    PUSH 0x2038f4c                      ; 00534fb2
    CALL FUN_00449a00                   ; 00534fb7
        ;   XREF to: 00449a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00449a00()
    MOV ESI,dword ptr [0x01c6cee8]      ; 00534fbc | DAT_01c6cee8
    ADD ESP,0x8                         ; 00534fc2
    TEST ESI,ESI                        ; 00534fc5
    JZ 0x00535006                       ; 00534fc7
        ;   XREF to: 00535006 (CONDITIONAL_JUMP)  ; LAB_00535006
    PUSH EBX                            ; 00534fc9
    MOV EDI,dword ptr [ESP + 0x200]     ; 00534fca
    PUSH 0x461c3f9a                     ; 00534fd1
    PUSH EDI                            ; 00534fd6
    CALL FUN_00533b80                   ; 00534fd7
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00533b80()
    MOV EAX,[0x00606b20]                ; 00534fdc | DAT_00606b20
    MOV EBP,dword ptr [EAX]             ; 00534fe1 | DAT_02cfd950
    ADD ESP,0xc                         ; 00534fe3
    TEST EBP,EBP                        ; 00534fe6
    JNZ 0x00534ff4                      ; 00534fe8
        ;   XREF to: 00534ff4 (CONDITIONAL_JUMP)  ; LAB_00534ff4
    PUSH EBX                            ; 00534fea
    PUSH EAX                            ; 00534feb | DAT_02cfd950
    CALL FUN_00577760                   ; 00534fec
        ;   XREF to: 00577760 (UNCONDITIONAL_CALL)  ; undefined FUN_00577760()
    ADD ESP,0x8                         ; 00534ff1
    PUSH 0x1                            ; 00534ff4
        ;   Label: LAB_00534ff4
    MOV EAX,dword ptr [ESP + 0x200]     ; 00534ff6
    PUSH EAX                            ; 00534ffd
    CALL FUN_005346b0                   ; 00534ffe
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005346b0()
    ADD ESP,0x8                         ; 00535003
    PUSH 0x0                            ; 00535006
        ;   Label: LAB_00535006
    PUSH 0x2038f4c                      ; 00535008
    CALL FUN_00449750                   ; 0053500d
        ;   XREF to: 00449750 (UNCONDITIONAL_CALL)  ; undefined FUN_00449750()
    ADD ESP,0x8                         ; 00535012
    JMP 0x00534a31                      ; 00535015
        ;   XREF to: 00534a31 (UNCONDITIONAL_JUMP)  ; LAB_00534a31
    LEA ESI,[EDI + 0x154]               ; 0053501a
        ;   Label: LAB_0053501a
    MOV EDX,dword ptr [ESI]             ; 00535020
    MOV dword ptr [EBX],EDX             ; 00535022
    MOV EDX,dword ptr [ESI + 0x4]       ; 00535024
    MOV EDI,EBX                         ; 00535027
    MOV dword ptr [EBX + 0x4],EDX       ; 00535029
    MOV EBP,ESI                         ; 0053502c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0053502e
    ADD ESI,0xc                         ; 00535031
    MOV dword ptr [EBX + 0x8],EDX       ; 00535034
    CMP EAX,ESI                         ; 00535037
    JZ 0x0053504b                       ; 00535039
        ;   XREF to: 0053504b (CONDITIONAL_JUMP)  ; LAB_0053504b
    MOV EDX,dword ptr [ESI]             ; 0053503b
    MOV dword ptr [EAX],EDX             ; 0053503d
    MOV EDX,dword ptr [ESI + 0x4]       ; 0053503f
    MOV dword ptr [EAX + 0x4],EDX       ; 00535042
    MOV EDX,dword ptr [ESI + 0x8]       ; 00535045
    MOV dword ptr [EAX + 0x8],EDX       ; 00535048
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053504b
        ;   Label: LAB_0053504b
    MOV dword ptr [EDI + 0x18],EAX      ; 0053504e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00535051
    MOV dword ptr [EDI + 0x1c],EAX      ; 00535054
    MOV EAX,dword ptr [EBP + 0x20]      ; 00535057
    MOV dword ptr [EDI + 0x20],EAX      ; 0053505a
    JMP 0x00534ed1                      ; 0053505d
        ;   XREF to: 00534ed1 (UNCONDITIONAL_JUMP)  ; LAB_00534ed1
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 00535062
        ;   Label: LAB_00535062
    XOR EBX,EBX                         ; 00535068
    XOR ESI,ESI                         ; 0053506a
    TEST ECX,ECX                        ; 0053506c
    JLE 0x00535131                      ; 0053506e
        ;   XREF to: 00535131 (CONDITIONAL_JUMP)  ; LAB_00535131
    MOV EAX,dword ptr [ESP + 0x200]     ; 00535074
    SHL EAX,0x4                         ; 0053507b
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0053507e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00535085
    ADD EAX,0x19a30                     ; 0053508c
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 00535091
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00535098
    IMUL EDI,EBX,0x1898                 ; 0053509f
        ;   Label: LAB_0053509f
    CMP dword ptr [EBP + 0x19a30],0x1   ; 005350a5
    JNZ 0x00535108                      ; 005350ac
        ;   XREF to: 00535108 (CONDITIONAL_JUMP)  ; LAB_00535108
    MOV EAX,dword ptr [ESP + 0x200]     ; 005350ae
    CMP byte ptr [EAX + EBP*0x1 + 0x19b58],0x0 ; 005350b5
    JZ 0x00535108                       ; 005350bd
        ;   XREF to: 00535108 (CONDITIONAL_JUMP)  ; LAB_00535108
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 005350bf
    MOV EAX,[0x0203b3e8]                ; 005350c6 | DAT_0203b3e8
    ADD EDI,ECX                         ; 005350cb
    MOV dword ptr [EAX*0x4 + 0x203b3ec],EDI ; 005350cd | DAT_0203b3ec | DAT_0203b3f0
    LEA EDI,[EAX + 0x1]                 ; 005350d4
    MOV dword ptr [0x0203b3e8],EDI      ; 005350d7 | DAT_0203b3e8
    CMP EDI,0xc8                        ; 005350dd
    JL 0x00535108                       ; 005350e3
        ;   XREF to: 00535108 (CONDITIONAL_JUMP)  ; LAB_00535108
    MOV EDX,0x5d04ad                    ; 005350e5 | = "..\\core\\set.cpp"
    MOV ECX,0x50e                       ; 005350ea
    PUSH 0x5d04bd                       ; 005350ef | = "CDemonSet::setCameraView - Too many o..."
    MOV dword ptr [0x01d71de0],EDX      ; 005350f4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005350fa | DAT_01d71de4
    CALL FUN_004e4330                   ; 00535100
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00535105
    CMP dword ptr [EBP + 0x19a30],0x0   ; 00535108
        ;   Label: LAB_00535108
    JZ 0x0053520b                       ; 0053510f
        ;   XREF to: 0053520b (CONDITIONAL_JUMP)  ; LAB_0053520b
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00535115
        ;   Label: LAB_00535115
    INC EBX                             ; 0053511c
    MOV EDI,dword ptr [EAX + 0x19a2c]   ; 0053511d
    ADD EBP,0x1898                      ; 00535123
    CMP EBX,EDI                         ; 00535129
    JL 0x0053509f                       ; 0053512b
        ;   XREF to: 0053509f (CONDITIONAL_JUMP)  ; LAB_0053509f
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 00535131
        ;   Label: LAB_00535131
    PUSH EBP                            ; 00535138
    CALL FUN_00539c50                   ; 00535139
        ;   XREF to: 00539c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00539c50()
    MOV EAX,[0x0203a598]                ; 0053513e | DAT_0203a598
    ADD ESP,0x4                         ; 00535143
    XOR EBP,EBP                         ; 00535146
    TEST EAX,EAX                        ; 00535148
    JLE 0x005351e9                      ; 0053514a
        ;   XREF to: 005351e9 (CONDITIONAL_JUMP)  ; LAB_005351e9
    IMUL EAX,dword ptr [ESP + 0x200],0x1a4 ; 00535150
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0053515b
    MOV EDI,0x203a71c                   ; 00535162
    ADD EDX,EAX                         ; 00535167
    XOR EBX,EBX                         ; 00535169
    MOV dword ptr [ESP + 0x1d0],EDX     ; 0053516b
    MOV ESI,dword ptr [EBX + 0x203a59c] ; 00535172
        ;   Label: LAB_00535172
    PUSH ESI                            ; 00535178
    CALL FUN_0045c480                   ; 00535179
        ;   XREF to: 0045c480 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c480()
    ADD ESP,0x4                         ; 0053517e
    PUSH 0x1                            ; 00535181
    PUSH ESI                            ; 00535183
    CALL FUN_0045c530                   ; 00535184
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c530()
    ADD ESP,0x8                         ; 00535189
    PUSH ESI                            ; 0053518c
    CALL FUN_0045c8f0                   ; 0053518d
        ;   XREF to: 0045c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c8f0()
    ADD ESP,0x4                         ; 00535192
    PUSH 0x1                            ; 00535195
    MOV EAX,dword ptr [ESP + 0x200]     ; 00535197
    PUSH EAX                            ; 0053519e
    CALL FUN_005346b0                   ; 0053519f
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005346b0()
    ADD ESP,0x8                         ; 005351a4
    PUSH ESI                            ; 005351a7
    CALL FUN_0045c9e0                   ; 005351a8
        ;   XREF to: 0045c9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c9e0()
    ADD ESP,0x4                         ; 005351ad
    PUSH 0x0                            ; 005351b0
    PUSH ESI                            ; 005351b2
    CALL FUN_0045c7e0                   ; 005351b3
        ;   XREF to: 0045c7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c7e0()
    ADD ESP,0x8                         ; 005351b8
    PUSH ESI                            ; 005351bb
    CALL FUN_0045ca30                   ; 005351bc
        ;   XREF to: 0045ca30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ca30()
    ADD ESP,0x4                         ; 005351c1
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 005351c4
    CMP dword ptr [EAX + 0x144],0x0     ; 005351cb
    JZ 0x00535263                       ; 005351d2
        ;   XREF to: 00535263 (CONDITIONAL_JUMP)  ; LAB_00535263
    MOV EDX,dword ptr [0x0203a598]      ; 005351d8 | DAT_0203a598
        ;   Label: LAB_005351d8
    ADD EBX,0x4                         ; 005351de
    INC EBP                             ; 005351e1
    ADD EDI,0x10                        ; 005351e2
    CMP EBP,EDX                         ; 005351e5
    JL 0x00535172                       ; 005351e7
        ;   XREF to: 00535172 (CONDITIONAL_JUMP)  ; LAB_00535172
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005351e9
        ;   Label: LAB_005351e9
    ADD EAX,0x14d154                    ; 005351f0
    PUSH dword ptr [EAX + 0xc]          ; 005351f5
    PUSH EAX                            ; 005351f8
    PUSH 0x2038f4c                      ; 005351f9
    CALL FUN_0044af70                   ; 005351fe
        ;   XREF to: 0044af70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044af70()
    ADD ESP,0xc                         ; 00535203
    JMP 0x00534a45                      ; 00535206
        ;   XREF to: 00534a45 (UNCONDITIONAL_JUMP)  ; LAB_00534a45
    MOV EDI,dword ptr [ESP + 0x200]     ; 0053520b
        ;   Label: LAB_0053520b
    MOV DH,byte ptr [EDI + EBP*0x1 + 0x19b58] ; 00535212
    LEA EAX,[ESI + 0x1]                 ; 00535219
    TEST DH,DH                          ; 0053521c
    JNZ 0x00535227                      ; 0053521e
        ;   XREF to: 00535227 (CONDITIONAL_JUMP)  ; LAB_00535227
    MOV ESI,EAX                         ; 00535220
    JMP 0x00535115                      ; 00535222
        ;   XREF to: 00535115 (UNCONDITIONAL_JUMP)  ; LAB_00535115
    MOV EDI,dword ptr [0x0203a598]      ; 00535227 | DAT_0203a598
        ;   Label: LAB_00535227
    MOV ESI,dword ptr [ESI*0x4 + 0x203a418] ; 0053522d | DAT_0203a418
    MOV dword ptr [EDI*0x4 + 0x203a59c],ESI ; 00535234 | DAT_0203a59c
    SHL EDI,0x4                         ; 0053523b
    MOV ESI,dword ptr [ESP + 0x1cc]     ; 0053523e
    LEA EDI,[EDI + 0x203a71c]           ; 00535245
    LEA ESI,[ESI + EBP*0x1 + 0x19c54]   ; 0053524b
    MOVSD ES:EDI,ESI                    ; 00535252
    MOVSD ES:EDI,ESI                    ; 00535253
    MOVSD ES:EDI,ESI                    ; 00535254
    MOVSD ES:EDI,ESI                    ; 00535255
    MOV ESI,EAX                         ; 00535256
    INC dword ptr [0x0203a598]          ; 00535258 | DAT_0203a598
    JMP 0x00535115                      ; 0053525e
        ;   XREF to: 00535115 (UNCONDITIONAL_JUMP)  ; LAB_00535115
    PUSH EDI                            ; 00535263
        ;   Label: LAB_00535263
    PUSH ESI                            ; 00535264
    PUSH 0x2038f4c                      ; 00535265
    CALL FUN_0044aa20                   ; 0053526a
        ;   XREF to: 0044aa20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044aa20()
    ADD ESP,0xc                         ; 0053526f
    JMP 0x005351d8                      ; 00535272
        ;   XREF to: 005351d8 (UNCONDITIONAL_JUMP)  ; LAB_005351d8
    PUSH 0x1                            ; 00535277
        ;   Label: LAB_00535277
    PUSH 0x2038f4c                      ; 00535279
    CALL FUN_00448ff0                   ; 0053527e
        ;   XREF to: 00448ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00448ff0()
    ADD ESP,0x8                         ; 00535283
    PUSH 0x2038f4c                      ; 00535286
    CALL FUN_00449840                   ; 0053528b
        ;   XREF to: 00449840 (UNCONDITIONAL_CALL)  ; undefined FUN_00449840()
    ADD ESP,0x4                         ; 00535290
    MOV EBP,dword ptr [EBX + 0x161640]  ; 00535293
    MOV dword ptr [0x01c6e24c],ESI      ; 00535299 | DAT_01c6e24c
    TEST EBP,EBP                        ; 0053529f
    JZ 0x005352c0                       ; 005352a1
        ;   XREF to: 005352c0 (CONDITIONAL_JUMP)  ; LAB_005352c0
    MOV EDX,dword ptr [EBX + 0x161664]  ; 005352a3
    PUSH EDX                            ; 005352a9
    LEA EAX,[EBX + 0x161644]            ; 005352aa
    PUSH EAX                            ; 005352b0
    MOV ECX,dword ptr [0x005f4a58]      ; 005352b1 | DAT_005f4a58
    PUSH ECX                            ; 005352b7
    CALL FUN_0046f480                   ; 005352b8
        ;   XREF to: 0046f480 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f480()
    ADD ESP,0xc                         ; 005352bd
    PUSH 0x1                            ; 005352c0
        ;   Label: LAB_005352c0
    MOV EBX,dword ptr [ESP + 0x200]     ; 005352c2
    PUSH EBX                            ; 005352c9
    CALL FUN_005346b0                   ; 005352ca
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005346b0()
    ADD ESP,0x8                         ; 005352cf
    PUSH 0x1                            ; 005352d2
    PUSH 0x1                            ; 005352d4
    MOV ESI,dword ptr [0x005fed24]      ; 005352d6 | DAT_005fed24
    PUSH ESI                            ; 005352dc
    CALL FUN_004ce630                   ; 005352dd
        ;   XREF to: 004ce630 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce630()
    ADD ESP,0xc                         ; 005352e2
    PUSH 0x1                            ; 005352e5
    PUSH 0x1                            ; 005352e7
    MOV EDI,dword ptr [0x005fc5a0]      ; 005352e9 | DAT_005fc5a0
    PUSH EDI                            ; 005352ef
    CALL FUN_004a1e90                   ; 005352f0
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1e90()
    MOV EAX,[0x00606b20]                ; 005352f5 | DAT_00606b20
    MOV EBP,dword ptr [EAX]             ; 005352fa | DAT_02cfd950
    ADD ESP,0xc                         ; 005352fc
    TEST EBP,EBP                        ; 005352ff
    JNZ 0x0053530d                      ; 00535301
        ;   XREF to: 0053530d (CONDITIONAL_JUMP)  ; LAB_0053530d
    PUSH EBP                            ; 00535303
    PUSH EAX                            ; 00535304 | DAT_02cfd950
    CALL FUN_00577760                   ; 00535305
        ;   XREF to: 00577760 (UNCONDITIONAL_CALL)  ; undefined FUN_00577760()
    ADD ESP,0x8                         ; 0053530a
    PUSH 0x0                            ; 0053530d
        ;   Label: LAB_0053530d
    PUSH 0x2038f4c                      ; 0053530f
    CALL FUN_00449a00                   ; 00535314
        ;   XREF to: 00449a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00449a00()
    ADD ESP,0x8                         ; 00535319
    PUSH 0x0                            ; 0053531c
    PUSH 0x2038f4c                      ; 0053531e
    CALL FUN_00449750                   ; 00535323
        ;   XREF to: 00449750 (UNCONDITIONAL_CALL)  ; undefined FUN_00449750()
    ADD ESP,0x8                         ; 00535328
    JMP 0x00534a7a                      ; 0053532b
        ;   XREF to: 00534a7a (UNCONDITIONAL_JUMP)  ; LAB_00534a7a
    MOV ESI,dword ptr [EAX + 0x17c]     ; 00535330
        ;   Label: LAB_00535330
    PUSH ESI                            ; 00535336
    MOV EDI,dword ptr [0x006045f8]      ; 00535337 | DAT_006045f8
    PUSH EDI                            ; 0053533d
    JMP 0x00534ac2                      ; 0053533e
        ;   XREF to: 00534ac2 (UNCONDITIONAL_JUMP)  ; LAB_00534ac2
    CMP dword ptr [EAX + 0xf8],0x0      ; 00535343
        ;   Label: LAB_00535343
    JNZ 0x00534c57                      ; 0053534a
        ;   XREF to: 00534c57 (CONDITIONAL_JUMP)  ; LAB_00534c57
    JMP 0x00534d38                      ; 00535350
        ;   XREF to: 00534d38 (UNCONDITIONAL_JUMP)  ; LAB_00534d38

