; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bd9a8(int param_1,int *param_2)
;
; Local Variables:
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x7f]:1  local_7f
; undefined1       Stack[-0x7e]:1  local_7e
; undefined1       Stack[-0x7d]:1  local_7d
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined1       Stack[-0x7a]:1  local_7a
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005bd180 at 005bd373
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;   void* PTR_FUN_0061f660 = 005c21f0
;
; Called Functions:
;   FUN_005bd160
;   FUN_005bd16c
;   FUN_005be148
;   FUN_005c21f0
;   FUN_005c349c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd9a8
        ;   Label: FUN_005bd9a8
    PUSH ESI                            ; 005bd9a9
    PUSH EDI                            ; 005bd9aa
    PUSH ES                             ; 005bd9ab
    PUSH EBP                            ; 005bd9ac
    SUB ESP,0x6c                        ; 005bd9ad
    MOV EBP,dword ptr [ESP + 0x84]      ; 005bd9b0
    XOR EDI,EDI                         ; 005bd9b7
    MOV ESI,ESP                         ; 005bd9b9
    MOV dword ptr [ESP + 0x5c],EDI      ; 005bd9bb
    PUSH EBP                            ; 005bd9bf
        ;   Label: LAB_005bd9bf
    CALL FUN_005bd160                   ; 005bd9c0
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd160()
    ADD ESP,0x4                         ; 005bd9c5
    MOV CL,AL                           ; 005bd9c8
    MOV EBX,EAX                         ; 005bd9ca
    INC CL                              ; 005bd9cc
    AND ECX,0xff                        ; 005bd9ce
    TEST byte ptr [ECX + 0x61ed94],0x2  ; 005bd9d4 | DAT_0061ed94
    JZ 0x005bd9e3                       ; 005bd9db
        ;   XREF to: 005bd9e3 (CONDITIONAL_JUMP)  ; LAB_005bd9e3
    INC dword ptr [ESP + 0x5c]          ; 005bd9dd
    JMP 0x005bd9bf                      ; 005bd9e1
        ;   XREF to: 005bd9bf (UNCONDITIONAL_JUMP)  ; LAB_005bd9bf
    TEST byte ptr [EBP + 0x10],0x2      ; 005bd9e3
        ;   Label: LAB_005bd9e3
    JNZ 0x005bdbdd                      ; 005bd9e7
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    MOV ECX,dword ptr [EBP + 0xc]       ; 005bd9ed
    LEA EDX,[ECX + -0x1]                ; 005bd9f0
    MOV dword ptr [EBP + 0xc],EDX       ; 005bd9f3
    TEST ECX,ECX                        ; 005bd9f6
    JZ 0x005bdbd3                       ; 005bd9f8
        ;   XREF to: 005bdbd3 (CONDITIONAL_JUMP)  ; LAB_005bdbd3
    CMP EAX,0x2b                        ; 005bd9fe
    JZ 0x005bda08                       ; 005bda01
        ;   XREF to: 005bda08 (CONDITIONAL_JUMP)  ; LAB_005bda08
    CMP EAX,0x2d                        ; 005bda03
    JNZ 0x005bda28                      ; 005bda06
        ;   XREF to: 005bda28 (CONDITIONAL_JUMP)  ; LAB_005bda28
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005bda08
        ;   Label: LAB_005bda08
    PUSH EBP                            ; 005bda0c
    MOV byte ptr [ESI],BL               ; 005bda0d
    INC ECX                             ; 005bda0f
    INC ESI                             ; 005bda10
    MOV dword ptr [ESP + 0x60],ECX      ; 005bda11
    CALL FUN_005be148                   ; 005bda15
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bda1a
    MOV EBX,EAX                         ; 005bda1d
    CMP EAX,-0x1                        ; 005bda1f
    JZ 0x005bdbdd                       ; 005bda22
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    MOV AL,BL                           ; 005bda28
        ;   Label: LAB_005bda28
    INC AL                              ; 005bda2a
    AND EAX,0xff                        ; 005bda2c
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bda31 | DAT_0061ed94
    JNZ 0x005bda43                      ; 005bda38
        ;   XREF to: 005bda43 (CONDITIONAL_JUMP)  ; LAB_005bda43
    CMP EBX,0x2e                        ; 005bda3a
    JNZ 0x005bdbd3                      ; 005bda3d
        ;   XREF to: 005bdbd3 (CONDITIONAL_JUMP)  ; LAB_005bdbd3
    XOR EAX,EAX                         ; 005bda43
        ;   Label: LAB_005bda43
    MOV dword ptr [ESP + 0x64],EAX      ; 005bda45
    MOV dword ptr [ESP + 0x58],EAX      ; 005bda49
    MOV AL,BL                           ; 005bda4d
    INC AL                              ; 005bda4f
    AND EAX,0xff                        ; 005bda51
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bda56 | DAT_0061ed94
    JZ 0x005bdaa5                       ; 005bda5d
        ;   XREF to: 005bdaa5 (CONDITIONAL_JUMP)  ; LAB_005bdaa5
    MOV dword ptr [ESP + 0x58],0x1      ; 005bda5f
    MOV byte ptr [ESI],BL               ; 005bda67
        ;   Label: LAB_005bda67
    MOV AL,byte ptr [EBP + 0x10]        ; 005bda69
    INC ESI                             ; 005bda6c
    TEST AL,0x10                        ; 005bda6d
    JZ 0x005bda80                       ; 005bda6f
        ;   XREF to: 005bda80 (CONDITIONAL_JUMP)  ; LAB_005bda80
    IMUL EAX,dword ptr [ESP + 0x66],0xa ; 005bda71
    ADD EBX,EAX                         ; 005bda76
    SUB EBX,0x30                        ; 005bda78
    MOV word ptr [ESP + 0x66],BX        ; 005bda7b
    PUSH EBP                            ; 005bda80
        ;   Label: LAB_005bda80
    INC EDI                             ; 005bda81
    CALL FUN_005be148                   ; 005bda82
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bda87
    MOV EBX,EAX                         ; 005bda8a
    CMP EAX,-0x1                        ; 005bda8c
    JZ 0x005bdbdd                       ; 005bda8f
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    INC AL                              ; 005bda95
    AND EAX,0xff                        ; 005bda97
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bda9c | DAT_0061ed94
    JNZ 0x005bda67                      ; 005bdaa3
        ;   XREF to: 005bda67 (CONDITIONAL_JUMP)  ; LAB_005bda67
    CMP EBX,0x2e                        ; 005bdaa5
        ;   Label: LAB_005bdaa5
    JNZ 0x005bdb4f                      ; 005bdaa8
        ;   XREF to: 005bdb4f (CONDITIONAL_JUMP)  ; LAB_005bdb4f
    PUSH EBP                            ; 005bdaae
    MOV byte ptr [ESI],BL               ; 005bdaaf
    INC ESI                             ; 005bdab1
    CALL FUN_005be148                   ; 005bdab2
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bdab7
    MOV EBX,EAX                         ; 005bdaba
    CMP EAX,-0x1                        ; 005bdabc
    JZ 0x005bdbdd                       ; 005bdabf
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    CMP dword ptr [ESP + 0x58],0x0      ; 005bdac5
    JNZ 0x005bdae2                      ; 005bdaca
        ;   XREF to: 005bdae2 (CONDITIONAL_JUMP)  ; LAB_005bdae2
    MOV AL,BL                           ; 005bdacc
    INC AL                              ; 005bdace
    AND EAX,0xff                        ; 005bdad0
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bdad5 | DAT_0061ed94
    JZ 0x005bdbd3                       ; 005bdadc
        ;   XREF to: 005bdbd3 (CONDITIONAL_JUMP)  ; LAB_005bdbd3
    INC EDI                             ; 005bdae2
        ;   Label: LAB_005bdae2
    MOV AL,BL                           ; 005bdae3
        ;   Label: LAB_005bdae3
    INC AL                              ; 005bdae5
    AND EAX,0xff                        ; 005bdae7
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bdaec | DAT_0061ed94
    JZ 0x005bdb09                       ; 005bdaf3
        ;   XREF to: 005bdb09 (CONDITIONAL_JUMP)  ; LAB_005bdb09
    PUSH EBP                            ; 005bdaf5
    INC EDI                             ; 005bdaf6
    MOV byte ptr [ESI],BL               ; 005bdaf7
    INC ESI                             ; 005bdaf9
    CALL FUN_005be148                   ; 005bdafa
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bdaff
    MOV EBX,EAX                         ; 005bdb02
    CMP EAX,-0x1                        ; 005bdb04
    JNZ 0x005bdae3                      ; 005bdb07
        ;   XREF to: 005bdae3 (CONDITIONAL_JUMP)  ; LAB_005bdae3
    TEST byte ptr [EBP + 0x10],0x10     ; 005bdb09
        ;   Label: LAB_005bdb09
    JZ 0x005bdb46                       ; 005bdb0d
        ;   XREF to: 005bdb46 (CONDITIONAL_JUMP)  ; LAB_005bdb46
    XOR EDX,EDX                         ; 005bdb0f
    MOV ECX,ESI                         ; 005bdb11
    MOV dword ptr [ESP + 0x68],EDX      ; 005bdb13
    MOV AL,byte ptr [ECX + -0x1]        ; 005bdb17
        ;   Label: LAB_005bdb17
    DEC ECX                             ; 005bdb1a
    CMP AL,0x2e                         ; 005bdb1b
    JZ 0x005bdb3d                       ; 005bdb1d
        ;   XREF to: 005bdb3d (CONDITIONAL_JUMP)  ; LAB_005bdb3d
    SUB AL,0x30                         ; 005bdb1f
    MOV dword ptr [ESP + 0x60],0xa      ; 005bdb21
    MOV byte ptr [ESP + 0x6a],AL        ; 005bdb29
    XOR EDX,EDX                         ; 005bdb2d
    MOV EAX,dword ptr [ESP + 0x68]      ; 005bdb2f
    DIV dword ptr [ESP + 0x60]          ; 005bdb33
    MOV dword ptr [ESP + 0x68],EAX      ; 005bdb37
    JMP 0x005bdb17                      ; 005bdb3b
        ;   XREF to: 005bdb17 (UNCONDITIONAL_JUMP)  ; LAB_005bdb17
    MOV EAX,dword ptr [ESP + 0x68]      ; 005bdb3d
        ;   Label: LAB_005bdb3d
    MOV word ptr [ESP + 0x64],AX        ; 005bdb41
    CMP EBX,-0x1                        ; 005bdb46
        ;   Label: LAB_005bdb46
    JZ 0x005bdbdd                       ; 005bdb49
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    TEST byte ptr [EBP + 0x10],0x10     ; 005bdb4f
        ;   Label: LAB_005bdb4f
    JNZ 0x005bdbd3                      ; 005bdb53
        ;   XREF to: 005bdbd3 (CONDITIONAL_JUMP)  ; LAB_005bdbd3
    CMP EBX,0x65                        ; 005bdb59
    JZ 0x005bdb67                       ; 005bdb5c
        ;   XREF to: 005bdb67 (CONDITIONAL_JUMP)  ; LAB_005bdb67
    CMP EBX,0x45                        ; 005bdb5e
    JNZ 0x005bdbd3                      ; 005bdb61
        ;   XREF to: 005bdbd3 (CONDITIONAL_JUMP)  ; LAB_005bdbd3
    PUSH EBP                            ; 005bdb67
        ;   Label: LAB_005bdb67
    INC EDI                             ; 005bdb68
    MOV byte ptr [ESI],BL               ; 005bdb69
    INC ESI                             ; 005bdb6b
    CALL FUN_005be148                   ; 005bdb6c
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bdb71
    MOV EBX,EAX                         ; 005bdb74
    CMP EAX,-0x1                        ; 005bdb76
    JZ 0x005bdbdd                       ; 005bdb79
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    CMP EAX,0x2b                        ; 005bdb7b
    JZ 0x005bdb85                       ; 005bdb7e
        ;   XREF to: 005bdb85 (CONDITIONAL_JUMP)  ; LAB_005bdb85
    CMP EAX,0x2d                        ; 005bdb80
    JNZ 0x005bdb99                      ; 005bdb83
        ;   XREF to: 005bdb99 (CONDITIONAL_JUMP)  ; LAB_005bdb99
    PUSH EBP                            ; 005bdb85
        ;   Label: LAB_005bdb85
    INC EDI                             ; 005bdb86
    MOV byte ptr [ESI],BL               ; 005bdb87
    INC ESI                             ; 005bdb89
    CALL FUN_005be148                   ; 005bdb8a
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bdb8f
    MOV EBX,EAX                         ; 005bdb92
    CMP EAX,-0x1                        ; 005bdb94
    JZ 0x005bdbdd                       ; 005bdb97
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    MOV AL,BL                           ; 005bdb99
        ;   Label: LAB_005bdb99
    INC AL                              ; 005bdb9b
    AND EAX,0xff                        ; 005bdb9d
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bdba2 | DAT_0061ed94
    JNZ 0x005bdbaf                      ; 005bdba9
        ;   XREF to: 005bdbaf (CONDITIONAL_JUMP)  ; LAB_005bdbaf
    XOR EDI,EDI                         ; 005bdbab
    JMP 0x005bdbd3                      ; 005bdbad
        ;   XREF to: 005bdbd3 (UNCONDITIONAL_JUMP)  ; LAB_005bdbd3
    PUSH EBP                            ; 005bdbaf
        ;   Label: LAB_005bdbaf
    INC EDI                             ; 005bdbb0
    MOV byte ptr [ESI],BL               ; 005bdbb1
    INC ESI                             ; 005bdbb3
    CALL FUN_005be148                   ; 005bdbb4
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined FUN_005be148()
    ADD ESP,0x4                         ; 005bdbb9
    MOV EBX,EAX                         ; 005bdbbc
    CMP EAX,-0x1                        ; 005bdbbe
    JZ 0x005bdbdd                       ; 005bdbc1
        ;   XREF to: 005bdbdd (CONDITIONAL_JUMP)  ; LAB_005bdbdd
    INC AL                              ; 005bdbc3
    AND EAX,0xff                        ; 005bdbc5
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bdbca | DAT_0061ed94
    JNZ 0x005bdbaf                      ; 005bdbd1
        ;   XREF to: 005bdbaf (CONDITIONAL_JUMP)  ; LAB_005bdbaf
    PUSH EBP                            ; 005bdbd3
        ;   Label: LAB_005bdbd3
    PUSH EBX                            ; 005bdbd4
    CALL FUN_005bd16c                   ; 005bdbd5
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined FUN_005bd16c()
    ADD ESP,0x8                         ; 005bdbda
    TEST EDI,EDI                        ; 005bdbdd
        ;   Label: LAB_005bdbdd
    JLE 0x005bdca0                      ; 005bdbdf
        ;   XREF to: 005bdca0 (CONDITIONAL_JUMP)  ; LAB_005bdca0
    ADD EDI,dword ptr [ESP + 0x5c]      ; 005bdbe5
    TEST byte ptr [EBP + 0x10],0x1      ; 005bdbe9
    JZ 0x005bdca0                       ; 005bdbed
        ;   XREF to: 005bdca0 (CONDITIONAL_JUMP)  ; LAB_005bdca0
    MOV byte ptr [ESI],0x0              ; 005bdbf3
    TEST byte ptr [EBP + 0x10],0x10     ; 005bdbf6
    JZ 0x005bdc08                       ; 005bdbfa
        ;   XREF to: 005bdc08 (CONDITIONAL_JUMP)  ; LAB_005bdc08
    CMP byte ptr [ESP],0x2d             ; 005bdbfc
    JNZ 0x005bdc1b                      ; 005bdc00
        ;   XREF to: 005bdc1b (CONDITIONAL_JUMP)  ; LAB_005bdc1b
    NEG dword ptr [ESP + 0x64]          ; 005bdc02
    JMP 0x005bdc1b                      ; 005bdc06
        ;   XREF to: 005bdc1b (UNCONDITIONAL_JUMP)  ; LAB_005bdc1b
    LEA EAX,[ESP + 0x50]                ; 005bdc08
        ;   Label: LAB_005bdc08
    PUSH EAX                            ; 005bdc0c
    LEA EAX,[ESP + 0x4]                 ; 005bdc0d
    PUSH EAX                            ; 005bdc11
    CALL dword ptr [0x0061f660]         ; 005bdc12 | PTR_FUN_0061f660
    ADD ESP,0x8                         ; 005bdc18
    MOV CH,byte ptr [EBP + 0x10]        ; 005bdc1b
        ;   Label: LAB_005bdc1b
    TEST CH,0x4                         ; 005bdc1e
    JZ 0x005bdc36                       ; 005bdc21
        ;   XREF to: 005bdc36 (CONDITIONAL_JUMP)  ; LAB_005bdc36
    MOV EAX,dword ptr [ESP + 0x88]      ; 005bdc23
    MOV EBX,dword ptr [EAX]             ; 005bdc2a
    ADD EBX,0x8                         ; 005bdc2c
    MOV dword ptr [EAX],EBX             ; 005bdc2f
    LES EBX,[EBX + -0x8]                ; 005bdc31
    JMP 0x005bdc67                      ; 005bdc34
        ;   XREF to: 005bdc67 (UNCONDITIONAL_JUMP)  ; LAB_005bdc67
    TEST CH,0x8                         ; 005bdc36
        ;   Label: LAB_005bdc36
    JZ 0x005bdc52                       ; 005bdc39
        ;   XREF to: 005bdc52 (CONDITIONAL_JUMP)  ; LAB_005bdc52
    MOV EAX,dword ptr [ESP + 0x88]      ; 005bdc3b
    MOV EDX,dword ptr [EAX]             ; 005bdc42
    ADD EDX,0x4                         ; 005bdc44
    MOV dword ptr [EAX],EDX             ; 005bdc47
    MOV AX,DS                           ; 005bdc49
    MOV ES,AX                           ; 005bdc4b
    MOV EBX,dword ptr [EDX + -0x4]      ; 005bdc4d
    JMP 0x005bdc67                      ; 005bdc50
        ;   XREF to: 005bdc67 (UNCONDITIONAL_JUMP)  ; LAB_005bdc67
    MOV EAX,dword ptr [ESP + 0x88]      ; 005bdc52
        ;   Label: LAB_005bdc52
    MOV ESI,dword ptr [EAX]             ; 005bdc59
    ADD ESI,0x4                         ; 005bdc5b
    MOV dword ptr [EAX],ESI             ; 005bdc5e
    MOV AX,DS                           ; 005bdc60
    MOV ES,AX                           ; 005bdc62
    MOV EBX,dword ptr [ESI + -0x4]      ; 005bdc64
    MOV AH,byte ptr [EBP + 0x10]        ; 005bdc67
        ;   Label: LAB_005bdc67
    TEST AH,0x10                        ; 005bdc6a
    JZ 0x005bdc75                       ; 005bdc6d
        ;   XREF to: 005bdc75 (CONDITIONAL_JUMP)  ; LAB_005bdc75
    MOV EAX,dword ptr [ESP + 0x64]      ; 005bdc6f
    JMP 0x005bdc9d                      ; 005bdc73
        ;   XREF to: 005bdc9d (UNCONDITIONAL_JUMP)  ; LAB_005bdc9d
    TEST AH,0x20                        ; 005bdc75
        ;   Label: LAB_005bdc75
    JNZ 0x005bdc7f                      ; 005bdc78
        ;   XREF to: 005bdc7f (CONDITIONAL_JUMP)  ; LAB_005bdc7f
    TEST AH,0x40                        ; 005bdc7a
    JZ 0x005bdc90                       ; 005bdc7d
        ;   XREF to: 005bdc90 (CONDITIONAL_JUMP)  ; LAB_005bdc90
    MOV EAX,dword ptr [ESP + 0x50]      ; 005bdc7f
        ;   Label: LAB_005bdc7f
    MOV dword ptr ES:[EBX],EAX          ; 005bdc83
    MOV EAX,dword ptr [ESP + 0x54]      ; 005bdc86
    MOV dword ptr ES:[EBX + 0x4],EAX    ; 005bdc8a
    JMP 0x005bdca0                      ; 005bdc8e
        ;   XREF to: 005bdca0 (UNCONDITIONAL_JUMP)  ; LAB_005bdca0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005bdc90
        ;   Label: LAB_005bdc90
    MOV EDX,dword ptr [ESP + 0x54]      ; 005bdc94
    CALL FUN_005c349c                   ; 005bdc98
        ;   XREF to: 005c349c (UNCONDITIONAL_CALL)  ; undefined FUN_005c349c()
    MOV dword ptr ES:[EBX],EAX          ; 005bdc9d
        ;   Label: LAB_005bdc9d
    MOV EAX,EDI                         ; 005bdca0
        ;   Label: LAB_005bdca0
    ADD ESP,0x6c                        ; 005bdca2
    POP EBP                             ; 005bdca5
    POP ES                              ; 005bdca6
    POP EDI                             ; 005bdca7
    POP ESI                             ; 005bdca8
    POP EBX                             ; 005bdca9
    RET                                 ; 005bdcaa

