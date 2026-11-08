; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413f40(int param_1,int *param_2)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00414290 at 00414336
;
; Referenced Globals:
;   undefined1* switchdataD_00413f1c = 00413f7d
;   TerminatedCString s_limb_wav_005cbbaa
;   TerminatedCString s_Shot_thru_the_heart_005cbbb4
;   undefined4 DAT_005cbbce
;   undefined4 DAT_005cbbd6
;   undefined4 DAT_005cbbde
;   undefined4 DAT_005cbbe6
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_00616494
;   undefined4 DAT_007c158c
;   undefined4 DAT_01cb6914
;   undefined4 DAT_01cb6afc
;
; Called Functions:
;   FUN_00408cf0
;   FUN_0040d060
;   FUN_004154f0
;   FUN_00416700
;   FUN_00427360
;   FUN_00427770
;   FUN_004277e0
;   FUN_0042b260
;   FUN_00436710
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413f40
        ;   Label: FUN_00413f40
    PUSH ESI                            ; 00413f41
    PUSH EDI                            ; 00413f42
    PUSH EBP                            ; 00413f43
    SUB ESP,0x30                        ; 00413f44
    MOV EBX,dword ptr [ESP + 0x44]      ; 00413f47
    MOV ESI,dword ptr [ESP + 0x48]      ; 00413f4b
    FLD float ptr [ESI + 0x2c]          ; 00413f4f
    FLDZ                                ; 00413f52
    FCOMPP                              ; 00413f54
    FNSTSW AX                           ; 00413f56
    SAHF                                ; 00413f58
    JNC 0x00413f85                      ; 00413f59
        ;   XREF to: 00413f85 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00413f5b
    JNZ 0x00413f85                      ; 00413f5e
        ;   XREF to: 00413f85 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005b849c                   ; 00413f60
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    MOV EDX,EAX                         ; 00413f65
    MOV EDI,0x6                         ; 00413f67
    SAR EDX,0x1f                        ; 00413f6c
    IDIV EDI                            ; 00413f6f
    CMP EDX,0x5                         ; 00413f71
    JA 0x00413f85                       ; 00413f74
        ;   XREF to: 00413f85 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x413f1c]  ; 00413f76 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b64]   ; 00413f7d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00413f83
        ;   Label: LAB_00413f83
    MOV ECX,dword ptr [EBX + 0x10b64]   ; 00413f85
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00413f8b
    CMP EAX,ECX                         ; 00413f8d
    JNZ 0x00414184                      ; 00413f8f
        ;   XREF to: 00414184 (CONDITIONAL_JUMP)  ; LAB_00414184
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00413f95
        ;   Label: LAB_00413f95
    MOV EBP,dword ptr [EBX + 0x10b5c]   ; 00413f98
    MOV dword ptr [ESP + 0x2c],EAX      ; 00413f9e
    CMP EBP,dword ptr [ESI]             ; 00413fa2
    JNZ 0x00413fae                      ; 00413fa4
        ;   XREF to: 00413fae (CONDITIONAL_JUMP)  ; LAB_00413fae
    MOV dword ptr [ESP + 0x2c],0x3d4ccccd ; 00413fa6
    MOV EDX,dword ptr [EBX + 0x10b60]   ; 00413fae
        ;   Label: LAB_00413fae
    CMP EDX,dword ptr [ESI]             ; 00413fb4
    JNZ 0x00413fc0                      ; 00413fb6
        ;   XREF to: 00413fc0 (CONDITIONAL_JUMP)  ; LAB_00413fc0
    MOV dword ptr [ESP + 0x2c],0x3ca3d70a ; 00413fb8
    MOV EAX,[0x00616494]                ; 00413fc0 | DAT_00616494
        ;   Label: LAB_00413fc0
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00413fc5 | DAT_01cb6afc
    JZ 0x00413fd6                       ; 00413fcc
        ;   XREF to: 00413fd6 (CONDITIONAL_JUMP)  ; LAB_00413fd6
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 00413fce
    MOV EAX,[0x00616494]                ; 00413fd6 | DAT_00616494
        ;   Label: LAB_00413fd6
    MOV EDX,dword ptr [EAX + 0x14]      ; 00413fdb | DAT_01cb6914
    TEST EDX,EDX                        ; 00413fde
    JNZ 0x00413fe6                      ; 00413fe0
        ;   XREF to: 00413fe6 (CONDITIONAL_JUMP)  ; LAB_00413fe6
    MOV dword ptr [ESP + 0x2c],EDX      ; 00413fe2
    PUSH dword ptr [ESP + 0x2c]         ; 00413fe6
        ;   Label: LAB_00413fe6
    CALL FUN_0040d060                   ; 00413fea
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 00413fef
    TEST EAX,EAX                        ; 00413ff2
    JZ 0x00414111                       ; 00413ff4
        ;   XREF to: 00414111 (CONDITIONAL_JUMP)  ; LAB_00414111
    MOV EDI,dword ptr [EBX + 0x280c]    ; 00413ffa
    PUSH EDI                            ; 00414000
    PUSH 0x0                            ; 00414001
    PUSH 0x0                            ; 00414003
    PUSH EBX                            ; 00414005
    LEA EAX,[ESI + 0xc]                 ; 00414006
    PUSH EAX                            ; 00414009
    LEA EAX,[EBX + 0x30]                ; 0041400a
    PUSH EAX                            ; 0041400d
    LEA EAX,[EBX + 0x20]                ; 0041400e
    PUSH EAX                            ; 00414011
    CALL FUN_004154f0                   ; 00414012
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004154f0()
    ADD ESP,0x1c                        ; 00414017
    MOV EDI,EAX                         ; 0041401a
    PUSH 0x0                            ; 0041401c
    MOV EBP,EAX                         ; 0041401e
    MOV EAX,dword ptr [ESI]             ; 00414020
    PUSH EAX                            ; 00414022
    PUSH EDI                            ; 00414023
    PUSH EBX                            ; 00414024
    CALL FUN_004277e0                   ; 00414025
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    MOV EAX,dword ptr [ESI]             ; 0041402a
    MOV EDX,dword ptr [EBX + 0x10b64]   ; 0041402c
    ADD ESP,0x10                        ; 00414032
    CMP EAX,EDX                         ; 00414035
    JNZ 0x0041404c                      ; 00414037
        ;   XREF to: 0041404c (CONDITIONAL_JUMP)  ; LAB_0041404c
    PUSH 0x0                            ; 00414039
    MOV ECX,dword ptr [EBX + 0x10b68]   ; 0041403b
    PUSH ECX                            ; 00414041
    PUSH EDI                            ; 00414042
    PUSH EBX                            ; 00414043
    CALL FUN_004277e0                   ; 00414044
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 00414049
    MOV EDI,dword ptr [EBX + 0x10b6c]   ; 0041404c
        ;   Label: LAB_0041404c
    CMP EDI,dword ptr [ESI]             ; 00414052
    JNZ 0x00414069                      ; 00414054
        ;   XREF to: 00414069 (CONDITIONAL_JUMP)  ; LAB_00414069
    PUSH 0x0                            ; 00414056
    MOV EAX,dword ptr [EBX + 0x10b70]   ; 00414058
    PUSH EAX                            ; 0041405e
    PUSH EBP                            ; 0041405f
    PUSH EBX                            ; 00414060
    CALL FUN_004277e0                   ; 00414061
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 00414066
    MOV EDX,dword ptr [EBX + 0x10b60]   ; 00414069
        ;   Label: LAB_00414069
    CMP EDX,dword ptr [ESI]             ; 0041406f
    JNZ 0x004140d5                      ; 00414071
        ;   XREF to: 004140d5 (CONDITIONAL_JUMP)  ; LAB_004140d5
    PUSH 0x0                            ; 00414073
    LEA EDI,[ESI + 0xc]                 ; 00414075
    PUSH EDI                            ; 00414078
    MOV ECX,dword ptr [EBX + 0x10b6c]   ; 00414079
    PUSH ECX                            ; 0041407f
    PUSH EBX                            ; 00414080
    CALL FUN_00427770                   ; 00414081
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 00414086
    PUSH 0x0                            ; 00414089
    PUSH EDI                            ; 0041408b
    MOV EAX,dword ptr [EBX + 0x10b70]   ; 0041408c
    PUSH EAX                            ; 00414092
    PUSH EBX                            ; 00414093
    CALL FUN_00427770                   ; 00414094
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 00414099
    PUSH 0x0                            ; 0041409c
    PUSH EDI                            ; 0041409e
    MOV EDX,dword ptr [EBX + 0x10b64]   ; 0041409f
    PUSH EDX                            ; 004140a5
    PUSH EBX                            ; 004140a6
    CALL FUN_00427770                   ; 004140a7
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 004140ac
    PUSH 0x0                            ; 004140af
    PUSH EDI                            ; 004140b1
    MOV ECX,dword ptr [EBX + 0x10b68]   ; 004140b2
    PUSH ECX                            ; 004140b8
    PUSH EBX                            ; 004140b9
    CALL FUN_00427770                   ; 004140ba
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 004140bf
    PUSH 0x0                            ; 004140c2
    PUSH EDI                            ; 004140c4
    MOV EDI,dword ptr [EBX + 0x10b5c]   ; 004140c5
    PUSH EDI                            ; 004140cb
    PUSH EBX                            ; 004140cc
    CALL FUN_00427770                   ; 004140cd
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 004140d2
    PUSH 0x5cbbaa                       ; 004140d5 | = "limb?.wav"
        ;   Label: LAB_004140d5
    PUSH EBX                            ; 004140da
    CALL FUN_0042b260                   ; 004140db
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b260()
    ADD ESP,0x8                         ; 004140e0
    PUSH EBP                            ; 004140e3
    CALL FUN_00416700                   ; 004140e4
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    MOV EAX,dword ptr [EBX + 0x10b5c]   ; 004140e9
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004140ef
    ADD ESP,0x4                         ; 004140f6
    TEST EBP,EBP                        ; 004140f9
    JZ 0x004141c5                       ; 004140fb
        ;   XREF to: 004141c5 (CONDITIONAL_JUMP)  ; LAB_004141c5
    FLD float ptr [ESI + 0x8]           ; 00414101
        ;   Label: LAB_00414101
    FLD ST0                             ; 00414104
    FMUL double ptr [0x005cbbce]        ; 00414106 | DAT_005cbbce
    FSTP ST1                            ; 0041410c
    FSTP float ptr [ESI + 0x8]          ; 0041410e
    MOV EDX,dword ptr [EBX + 0x10b5c]   ; 00414111
        ;   Label: LAB_00414111
    MOV EAX,dword ptr [ESI]             ; 00414117
    CMP EAX,EDX                         ; 00414119
    JNZ 0x004141d1                      ; 0041411b
        ;   XREF to: 004141d1 (CONDITIONAL_JUMP)  ; LAB_004141d1
    FLD float ptr [ESI + 0x4]           ; 00414121
    FLD ST0                             ; 00414124
    FMUL double ptr [0x005cbbde]        ; 00414126 | DAT_005cbbde
    FSTP ST1                            ; 0041412c
        ;   Label: LAB_0041412c
    FSTP float ptr [ESI + 0x4]          ; 0041412e
    MOV EBP,dword ptr [EBX + 0x10b60]   ; 00414131
        ;   Label: LAB_00414131
    CMP EBP,dword ptr [ESI]             ; 00414137
    JNZ 0x00414145                      ; 00414139
        ;   XREF to: 00414145 (CONDITIONAL_JUMP)  ; LAB_00414145
    CMP dword ptr [ESI + 0x30],0x68     ; 0041413b
    JZ 0x004141fc                       ; 0041413f
        ;   XREF to: 004141fc (CONDITIONAL_JUMP)  ; LAB_004141fc
    ADD ESP,0x30                        ; 00414145
        ;   Label: LAB_00414145
    POP EBP                             ; 00414148
    POP EDI                             ; 00414149
    POP ESI                             ; 0041414a
    POP EBX                             ; 0041414b
    RET                                 ; 0041414c
    MOV EAX,dword ptr [EBX + 0x10b68]   ; 0041414d
        ;   Label: caseD_1
    JMP 0x00413f83                      ; 00414153
        ;   XREF to: 00413f83 (UNCONDITIONAL_JUMP)  ; LAB_00413f83
    MOV EAX,dword ptr [EBX + 0x10b6c]   ; 00414158
        ;   Label: caseD_2
    JMP 0x00413f83                      ; 0041415e
        ;   XREF to: 00413f83 (UNCONDITIONAL_JUMP)  ; LAB_00413f83
    MOV EAX,dword ptr [EBX + 0x10b70]   ; 00414163
        ;   Label: caseD_3
    JMP 0x00413f83                      ; 00414169
        ;   XREF to: 00413f83 (UNCONDITIONAL_JUMP)  ; LAB_00413f83
    MOV EAX,dword ptr [EBX + 0x10b5c]   ; 0041416e
        ;   Label: caseD_4
    JMP 0x00413f83                      ; 00414174
        ;   XREF to: 00413f83 (UNCONDITIONAL_JUMP)  ; LAB_00413f83
    MOV EAX,dword ptr [EBX + 0x10b60]   ; 00414179
        ;   Label: caseD_5
    JMP 0x00413f83                      ; 0041417f
        ;   XREF to: 00413f83 (UNCONDITIONAL_JUMP)  ; LAB_00413f83
    CMP EAX,dword ptr [EBX + 0x10b68]   ; 00414184
        ;   Label: LAB_00414184
    JZ 0x00413f95                       ; 0041418a
        ;   XREF to: 00413f95 (CONDITIONAL_JUMP)  ; LAB_00413f95
    CMP EAX,dword ptr [EBX + 0x10b6c]   ; 00414190
    JZ 0x00413f95                       ; 00414196
        ;   XREF to: 00413f95 (CONDITIONAL_JUMP)  ; LAB_00413f95
    CMP EAX,dword ptr [EBX + 0x10b70]   ; 0041419c
    JZ 0x00413f95                       ; 004141a2
        ;   XREF to: 00413f95 (CONDITIONAL_JUMP)  ; LAB_00413f95
    CMP EAX,dword ptr [EBX + 0x10b60]   ; 004141a8
    JZ 0x00413f95                       ; 004141ae
        ;   XREF to: 00413f95 (CONDITIONAL_JUMP)  ; LAB_00413f95
    CMP EAX,dword ptr [EBX + 0x10b5c]   ; 004141b4
    JZ 0x00413f95                       ; 004141ba
        ;   XREF to: 00413f95 (CONDITIONAL_JUMP)  ; LAB_00413f95
    JMP 0x00414111                      ; 004141c0
        ;   XREF to: 00414111 (UNCONDITIONAL_JUMP)  ; LAB_00414111
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004141c5
        ;   Label: LAB_004141c5
    JMP 0x00414101                      ; 004141cc
        ;   XREF to: 00414101 (UNCONDITIONAL_JUMP)  ; LAB_00414101
    CMP EAX,dword ptr [EBX + 0x10b74]   ; 004141d1
        ;   Label: LAB_004141d1
    JNZ 0x004141e4                      ; 004141d7
        ;   XREF to: 004141e4 (CONDITIONAL_JUMP)  ; LAB_004141e4
    MOV EAX,dword ptr [ESI + 0x4]       ; 004141d9
        ;   Label: LAB_004141d9
    MOV dword ptr [ESI + 0x4],EAX       ; 004141dc
    JMP 0x00414131                      ; 004141df
        ;   XREF to: 00414131 (UNCONDITIONAL_JUMP)  ; LAB_00414131
    CMP EAX,dword ptr [EBX + 0x10b60]   ; 004141e4
        ;   Label: LAB_004141e4
    JZ 0x004141d9                       ; 004141ea
        ;   XREF to: 004141d9 (CONDITIONAL_JUMP)  ; LAB_004141d9
    FLD float ptr [ESI + 0x4]           ; 004141ec
    FLD ST0                             ; 004141ef
    FMUL double ptr [0x005cbbd6]        ; 004141f1 | DAT_005cbbd6
    JMP 0x0041412c                      ; 004141f7
        ;   XREF to: 0041412c (UNCONDITIONAL_JUMP)  ; LAB_0041412c
    FLD float ptr [ESI + 0x4]           ; 004141fc
        ;   Label: LAB_004141fc
    PUSH 0x5cbbb4                       ; 004141ff | = "Shot thru the heart\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 00414204 | PTR_DAT_00609ed0
    FLD ST0                             ; 0041420a
    FMUL double ptr [0x005cbbe6]        ; 0041420c | DAT_005cbbe6
    PUSH EDX                            ; 00414212 | DAT_007c158c
    FSTP ST1                            ; 00414213
    FSTP float ptr [ESI + 0x4]          ; 00414215
    CALL FUN_00436710                   ; 00414218
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x8                         ; 0041421d
    PUSH 0x3f000000                     ; 00414220
    CALL FUN_0040d060                   ; 00414225
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0041422a
    TEST EAX,EAX                        ; 0041422d
    JZ 0x00414145                       ; 0041422f
        ;   XREF to: 00414145 (CONDITIONAL_JUMP)  ; LAB_00414145
    MOV ESI,0x41a00000                  ; 00414235
    LEA EAX,[ESP + 0xc]                 ; 0041423a
    XOR ECX,ECX                         ; 0041423e
    PUSH EAX                            ; 00414240
    MOV dword ptr [ESP + 0x14],ESI      ; 00414241
    MOV dword ptr [ESP + 0x18],ESI      ; 00414245
    PUSH EBX                            ; 00414249
    LEA ESI,[ESP + 0x20]                ; 0041424a
    MOV dword ptr [ESP + 0x14],ECX      ; 0041424e
    CALL FUN_00408cf0                   ; 00414252
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    ADD ESP,0x8                         ; 00414257
    PUSH 0x1                            ; 0041425a
    LEA EAX,[ESP + 0x4]                 ; 0041425c
    PUSH 0xbf800000                     ; 00414260
    PUSH EAX                            ; 00414265
    LEA EDI,[ESP + 0xc]                 ; 00414266
    LEA ESI,[ESP + 0x24]                ; 0041426a
    PUSH EBX                            ; 0041426e
    MOVSD ES:EDI,ESI                    ; 0041426f
    MOVSD ES:EDI,ESI                    ; 00414270
    MOVSD ES:EDI,ESI                    ; 00414271
    CALL FUN_00427360                   ; 00414272
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; undefined FUN_00427360()
    ADD ESP,0x10                        ; 00414277
    ADD ESP,0x30                        ; 0041427a
    POP EBP                             ; 0041427d
    POP EDI                             ; 0041427e
    POP ESI                             ; 0041427f
    POP EBX                             ; 00414280
    RET                                 ; 00414281

