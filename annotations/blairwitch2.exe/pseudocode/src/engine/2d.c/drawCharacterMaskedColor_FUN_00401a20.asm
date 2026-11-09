; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacterMaskedColor_FUN_00401a20(int char_code,int x_pos,int y_pos,int color)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   engine_2d.c_drawString_FUN_00402090 at 004020cc
;   engine_2d.c_drawTextMultilineColor_FUN_00401f50 at 00401f9f
;   engine_2d.c_drawTextWrappedColor_FUN_00401ec0 at 00401f16
;
; Referenced Globals:
;   undefined4 DAT_00601440
;   undefined4 DAT_00601441
;   undefined4 DAT_00601442
;   undefined4 DAT_00601443
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401a20
        ;   Label: engine_2d.c_drawCharacterMaskedColor_FUN_00401a20
    PUSH EDI                            ; 00401a21
    PUSH EBP                            ; 00401a22
    SUB ESP,0x10                        ; 00401a23
    MOV EBP,dword ptr [ESP + 0x28]      ; 00401a26
    MOV EDX,dword ptr [ESP + 0x20]      ; 00401a2a
    SUB EDX,0x20                        ; 00401a2e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401a31
    ADD EAX,EDX                         ; 00401a38
    SHL EAX,0x4                         ; 00401a3a
    ADD EAX,EDX                         ; 00401a3d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00401a3f
    ADD EAX,0x601440                    ; 00401a43 | DAT_00601440
    XOR EDX,EDX                         ; 00401a48
    MOV EBX,dword ptr [0x01c35e48]      ; 00401a4a | DAT_01c35e48
    MOV DL,byte ptr [EAX]               ; 00401a50 | DAT_00601440
    CMP ECX,EBX                         ; 00401a52
    JL 0x00401ad2                       ; 00401a54
        ;   XREF to: 00401ad2 (CONDITIONAL_JUMP)  ; LAB_00401ad2
    CMP EBP,dword ptr [0x01c35e4c]      ; 00401a5a | DAT_01c35e4c
    JL 0x00401ad2                       ; 00401a60
        ;   XREF to: 00401ad2 (CONDITIONAL_JUMP)  ; LAB_00401ad2
    MOV ECX,dword ptr [0x01c35e50]      ; 00401a66 | DAT_01c35e50
    INC ECX                             ; 00401a6c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00401a6d
    SUB ECX,EDX                         ; 00401a71
    CMP ECX,EDI                         ; 00401a73
    JL 0x00401ad2                       ; 00401a75
        ;   XREF to: 00401ad2 (CONDITIONAL_JUMP)  ; LAB_00401ad2
    MOV ECX,dword ptr [0x01c35e54]      ; 00401a77 | DAT_01c35e54
    SUB ECX,0xa                         ; 00401a7d
    CMP EBP,ECX                         ; 00401a80
    JG 0x00401ad2                       ; 00401a82
        ;   XREF to: 00401ad2 (CONDITIONAL_JUMP)  ; LAB_00401ad2
    PUSH ESI                            ; 00401a84
    MOV EBX,dword ptr [0x006141c0]      ; 00401a85 | DAT_006141c0
    SHL EBP,0x2                         ; 00401a8b
    INC EAX                             ; 00401a8e
    LEA ECX,[EBP + 0x2c]                ; 00401a8f
    CMP EBX,0x8                         ; 00401a92
    JNZ 0x00401ad6                      ; 00401a95
        ;   XREF to: 00401ad6 (CONDITIONAL_JUMP)  ; LAB_00401ad6
    MOV EDI,ECX                         ; 00401a97
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401a99
        ;   Label: LAB_00401a99
    MOV ESI,dword ptr [EBP + 0x1c2a38c] ; 00401a9d | DAT_01c2a38c
    ADD ESI,ECX                         ; 00401aa3
    XOR ECX,ECX                         ; 00401aa5
    TEST EDX,EDX                        ; 00401aa7
    JLE 0x00401abe                      ; 00401aa9
        ;   XREF to: 00401abe (CONDITIONAL_JUMP)  ; LAB_00401abe
    MOV BL,byte ptr [EAX]               ; 00401aab | DAT_00601441 | DAT_00601442 | DAT_00601443
        ;   Label: LAB_00401aab
    TEST BL,BL                          ; 00401aad
    JZ 0x00401ab7                       ; 00401aaf
        ;   XREF to: 00401ab7 (CONDITIONAL_JUMP)  ; LAB_00401ab7
    MOV BL,byte ptr [ESP + 0x30]        ; 00401ab1
    MOV byte ptr [ESI],BL               ; 00401ab5
    INC EAX                             ; 00401ab7
        ;   Label: LAB_00401ab7
    INC ECX                             ; 00401ab8
    INC ESI                             ; 00401ab9
    CMP ECX,EDX                         ; 00401aba
    JL 0x00401aab                       ; 00401abc
        ;   XREF to: 00401aab (CONDITIONAL_JUMP)  ; LAB_00401aab
    ADD EBP,0x4                         ; 00401abe
        ;   Label: LAB_00401abe
    CMP EBP,EDI                         ; 00401ac1
    JNZ 0x00401a99                      ; 00401ac3
        ;   XREF to: 00401a99 (CONDITIONAL_JUMP)  ; LAB_00401a99
    LEA ECX,[EDX + 0x1]                 ; 00401ac5
        ;   Label: LAB_00401ac5
    POP ESI                             ; 00401ac8
    MOV EAX,ECX                         ; 00401ac9
        ;   Label: LAB_00401ac9
    ADD ESP,0x10                        ; 00401acb
    POP EBP                             ; 00401ace
    POP EDI                             ; 00401acf
    POP EBX                             ; 00401ad0
    RET                                 ; 00401ad1
    XOR ECX,ECX                         ; 00401ad2
        ;   Label: LAB_00401ad2
    JMP 0x00401ac9                      ; 00401ad4
        ;   XREF to: 00401ac9 (UNCONDITIONAL_JUMP)  ; LAB_00401ac9
    CMP EBX,0x10                        ; 00401ad6
        ;   Label: LAB_00401ad6
    JNZ 0x00401b27                      ; 00401ad9
        ;   XREF to: 00401b27 (CONDITIONAL_JUMP)  ; LAB_00401b27
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401adb
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401adf
    MOV dword ptr [ESP + 0x10],ECX      ; 00401ae3
    ADD EBX,EBX                         ; 00401ae7
    ADD EDI,EDI                         ; 00401ae9
    MOV dword ptr [ESP + 0x4],EBX       ; 00401aeb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00401aef
        ;   Label: LAB_00401aef
    MOV ESI,dword ptr [EBP + 0x1c2a38c] ; 00401af3 | DAT_01c2a38c
    ADD ESI,ECX                         ; 00401af9
    XOR ECX,ECX                         ; 00401afb
    TEST EDX,EDX                        ; 00401afd
    JLE 0x00401b1a                      ; 00401aff
        ;   XREF to: 00401b1a (CONDITIONAL_JUMP)  ; LAB_00401b1a
    MOV BL,byte ptr [EAX]               ; 00401b01 | DAT_00601441 | DAT_00601442 | DAT_00601443
        ;   Label: LAB_00401b01
    TEST BL,BL                          ; 00401b03
    JZ 0x00401b11                       ; 00401b05
        ;   XREF to: 00401b11 (CONDITIONAL_JUMP)  ; LAB_00401b11
    MOV BX,word ptr [EDI + 0x1c34910]   ; 00401b07
    MOV word ptr [ESI],BX               ; 00401b0e
    INC EAX                             ; 00401b11
        ;   Label: LAB_00401b11
    INC ECX                             ; 00401b12
    ADD ESI,0x2                         ; 00401b13
    CMP ECX,EDX                         ; 00401b16
    JL 0x00401b01                       ; 00401b18
        ;   XREF to: 00401b01 (CONDITIONAL_JUMP)  ; LAB_00401b01
    MOV EBX,dword ptr [ESP + 0x10]      ; 00401b1a
        ;   Label: LAB_00401b1a
    ADD EBP,0x4                         ; 00401b1e
    CMP EBP,EBX                         ; 00401b21
    JZ 0x00401ac5                       ; 00401b23
        ;   XREF to: 00401ac5 (CONDITIONAL_JUMP)  ; LAB_00401ac5
    JMP 0x00401aef                      ; 00401b25
        ;   XREF to: 00401aef (UNCONDITIONAL_JUMP)  ; LAB_00401aef
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401b27
        ;   Label: LAB_00401b27
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401b2b
    MOV dword ptr [ESP + 0x8],ECX       ; 00401b2f
    SHL EBX,0x2                         ; 00401b33
    SHL EDI,0x2                         ; 00401b36
    MOV dword ptr [ESP + 0xc],EBX       ; 00401b39
    MOV EBX,dword ptr [ESP + 0xc]       ; 00401b3d
        ;   Label: LAB_00401b3d
    MOV ECX,dword ptr [EBP + 0x1c2a38c] ; 00401b41 | DAT_01c2a38c
    XOR ESI,ESI                         ; 00401b47
    ADD ECX,EBX                         ; 00401b49
    TEST EDX,EDX                        ; 00401b4b
    JLE 0x00401b66                      ; 00401b4d
        ;   XREF to: 00401b66 (CONDITIONAL_JUMP)  ; LAB_00401b66
    MOV BL,byte ptr [EAX]               ; 00401b4f | DAT_00601441 | DAT_00601442 | DAT_00601443
        ;   Label: LAB_00401b4f
    TEST BL,BL                          ; 00401b51
    JZ 0x00401b5d                       ; 00401b53
        ;   XREF to: 00401b5d (CONDITIONAL_JUMP)  ; LAB_00401b5d
    MOV EBX,dword ptr [EDI + 0x1c34b10] ; 00401b55
    MOV dword ptr [ECX],EBX             ; 00401b5b
    INC EAX                             ; 00401b5d
        ;   Label: LAB_00401b5d
    INC ESI                             ; 00401b5e
    ADD ECX,0x4                         ; 00401b5f
    CMP ESI,EDX                         ; 00401b62
    JL 0x00401b4f                       ; 00401b64
        ;   XREF to: 00401b4f (CONDITIONAL_JUMP)  ; LAB_00401b4f
    MOV ESI,dword ptr [ESP + 0x8]       ; 00401b66
        ;   Label: LAB_00401b66
    ADD EBP,0x4                         ; 00401b6a
    CMP EBP,ESI                         ; 00401b6d
    JZ 0x00401ac5                       ; 00401b6f
        ;   XREF to: 00401ac5 (CONDITIONAL_JUMP)  ; LAB_00401ac5
    JMP 0x00401b3d                      ; 00401b75
        ;   XREF to: 00401b3d (UNCONDITIONAL_JUMP)  ; LAB_00401b3d

