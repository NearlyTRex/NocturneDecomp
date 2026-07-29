; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00401990(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_2d.c_FUN_00401010 at 00401083
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00401990
        ;   Label: engine_2d.c_FUN_00401990
    SUB ESP,0x34                        ; 00401991
    PUSH EDI                            ; 00401994
    PUSH ESI                            ; 00401995
    PUSH EBX                            ; 00401996
    XOR EDX,EDX                         ; 00401997
    MOV dword ptr [ESP + 0x10],EDX      ; 00401999
    MOV dword ptr [ESP + 0xc],EDX       ; 0040199d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004019a1
        ;   Label: LAB_004019a1
    XOR EAX,EAX                         ; 004019a5
    MOV AL,byte ptr [EDX + 0x1c00648]   ; 004019a7
    MOV dword ptr [ESP + 0x20],EAX      ; 004019ad
    XOR EAX,EAX                         ; 004019b1
    MOV AL,byte ptr [EDX + 0x1c00649]   ; 004019b3
    MOV dword ptr [ESP + 0x1c],EAX      ; 004019b9
    XOR EAX,EAX                         ; 004019bd
    MOV AL,byte ptr [EDX + 0x1c0064a]   ; 004019bf
    MOV dword ptr [ESP + 0x18],EAX      ; 004019c5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004019c9
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004019cd
    MOV dword ptr [ESP + 0x30],EAX      ; 004019d1
    MOV dword ptr [ESP + 0x34],EAX      ; 004019d5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004019d9
    MOV EDX,dword ptr [ESP + 0x18]      ; 004019dd
    OR EAX,EBX                          ; 004019e1
    OR EDX,EAX                          ; 004019e3
    XOR EDI,EDI                         ; 004019e5
    MOV dword ptr [ESP + 0x14],EDX      ; 004019e7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004019eb
        ;   Label: LAB_004019eb
    MOV dword ptr [ESP + 0x28],EAX      ; 004019ef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004019f3
    MOV dword ptr [ESP + 0x2c],EAX      ; 004019f7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004019fb
    MOV dword ptr [ESP + 0x24],EAX      ; 004019ff
    XOR EAX,EAX                         ; 00401a03
    MOV AL,byte ptr [EDI + 0x1c00648]   ; 00401a05
    MOV EDX,dword ptr [ESP + 0x20]      ; 00401a0b
    MOV dword ptr [ESP + 0x3c],EAX      ; 00401a0f
    XOR EAX,EAX                         ; 00401a13
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00401a15
    MOV AL,byte ptr [EDI + 0x1c0064a]   ; 00401a19
    ADD EDX,ESI                         ; 00401a1f
    MOV dword ptr [ESP + 0x38],EAX      ; 00401a21
    MOV EAX,EDX                         ; 00401a25
    SAR EDX,0x1f                        ; 00401a27
    SUB EAX,EDX                         ; 00401a2a
    SAR EAX,0x1                         ; 00401a2c
    MOVZX EBP,byte ptr [EDI + 0x1c00649] ; 00401a2e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00401a35
    ADD EDX,EBP                         ; 00401a39
    MOV ECX,EAX                         ; 00401a3b
    MOV EAX,EDX                         ; 00401a3d
    SAR EDX,0x1f                        ; 00401a3f
    SUB EAX,EDX                         ; 00401a42
    SAR EAX,0x1                         ; 00401a44
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401a46
    MOV ESI,EAX                         ; 00401a4a
    MOV EAX,dword ptr [ESP + 0x38]      ; 00401a4c
    ADD EDX,EAX                         ; 00401a50
    MOV EAX,EDX                         ; 00401a52
    SAR EDX,0x1f                        ; 00401a54
    SUB EAX,EDX                         ; 00401a57
    SAR EAX,0x1                         ; 00401a59
    MOV EDX,dword ptr [ESP + 0x14]      ; 00401a5b
    MOV EBX,EAX                         ; 00401a5f
    TEST EDX,EDX                        ; 00401a61
    JNZ 0x00401a6f                      ; 00401a63
        ;   XREF to: 00401a6f (CONDITIONAL_JUMP)  ; LAB_00401a6f
    MOV EBX,dword ptr [ESP + 0x38]      ; 00401a65
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00401a69
    MOV ESI,EBP                         ; 00401a6d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00401a6f
        ;   Label: LAB_00401a6f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00401a73
    OR EAX,EBP                          ; 00401a77
    OR EAX,EDX                          ; 00401a79
    JNZ 0x00401a89                      ; 00401a7b
        ;   XREF to: 00401a89 (CONDITIONAL_JUMP)  ; LAB_00401a89
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00401a7d
    MOV EBX,dword ptr [ESP + 0x24]      ; 00401a81
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401a85
    MOV EDX,ECX                         ; 00401a89
        ;   Label: LAB_00401a89
    MOV EAX,ECX                         ; 00401a8b
    SAR EDX,0x1f                        ; 00401a8d
    SHL EDX,0x3                         ; 00401a90
    SBB EAX,EDX                         ; 00401a93
    SAR EAX,0x3                         ; 00401a95
    MOV ECX,EAX                         ; 00401a98
    MOV EDX,ESI                         ; 00401a9a
    MOV EAX,ESI                         ; 00401a9c
    SAR EDX,0x1f                        ; 00401a9e
    SHL EDX,0x3                         ; 00401aa1
    SBB EAX,EDX                         ; 00401aa4
    SAR EAX,0x3                         ; 00401aa6
    SHL ECX,0xa                         ; 00401aa9
    MOV EDX,EBX                         ; 00401aac
    SHL EAX,0x5                         ; 00401aae
    SAR EDX,0x1f                        ; 00401ab1
    ADD ECX,EAX                         ; 00401ab4
    MOV EAX,EBX                         ; 00401ab6
    SHL EDX,0x3                         ; 00401ab8
    SBB EAX,EDX                         ; 00401abb
    SAR EAX,0x3                         ; 00401abd
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00401ac0
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1bf7720] ; 00401ac4
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401acb
    MOV EDX,dword ptr [ESP + 0x30]      ; 00401acf
    ADD ECX,EBX                         ; 00401ad3
    MOV byte ptr [EDX + 0x1bd5520],AL   ; 00401ad5
    CMP ECX,0xff                        ; 00401adb
    JLE 0x00401ae8                      ; 00401ae1
        ;   XREF to: 00401ae8 (CONDITIONAL_JUMP)  ; LAB_00401ae8
    MOV ECX,0xff                        ; 00401ae3
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00401ae8
        ;   Label: LAB_00401ae8
    ADD ESI,EBP                         ; 00401aec
    CMP ESI,0xff                        ; 00401aee
    JLE 0x00401afb                      ; 00401af4
        ;   XREF to: 00401afb (CONDITIONAL_JUMP)  ; LAB_00401afb
    MOV ESI,0xff                        ; 00401af6
    MOV EBX,dword ptr [ESP + 0x24]      ; 00401afb
        ;   Label: LAB_00401afb
    ADD EBX,dword ptr [ESP + 0x38]      ; 00401aff
    CMP EBX,0xff                        ; 00401b03
    JLE 0x00401b10                      ; 00401b09
        ;   XREF to: 00401b10 (CONDITIONAL_JUMP)  ; LAB_00401b10
    MOV EBX,0xff                        ; 00401b0b
    MOV EDX,ECX                         ; 00401b10
        ;   Label: LAB_00401b10
    MOV EAX,ECX                         ; 00401b12
    SAR EDX,0x1f                        ; 00401b14
    SHL EDX,0x3                         ; 00401b17
    SBB EAX,EDX                         ; 00401b1a
    SAR EAX,0x3                         ; 00401b1c
    MOV ECX,EAX                         ; 00401b1f
    MOV EDX,ESI                         ; 00401b21
    MOV EAX,ESI                         ; 00401b23
    SAR EDX,0x1f                        ; 00401b25
    SHL EDX,0x3                         ; 00401b28
    SBB EAX,EDX                         ; 00401b2b
    SAR EAX,0x3                         ; 00401b2d
    SHL ECX,0xa                         ; 00401b30
    MOV EDX,EBX                         ; 00401b33
    SHL EAX,0x5                         ; 00401b35
    SAR EDX,0x1f                        ; 00401b38
    ADD ECX,EAX                         ; 00401b3b
    MOV EAX,EBX                         ; 00401b3d
    SHL EDX,0x3                         ; 00401b3f
    SBB EAX,EDX                         ; 00401b42
    SAR EAX,0x3                         ; 00401b44
    MOV EDX,dword ptr [ESP + 0x34]      ; 00401b47
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1bf7720] ; 00401b4b
    ADD EDI,0x3                         ; 00401b52
    MOV byte ptr [EDX + 0x1be5520],AL   ; 00401b55
    MOV EAX,dword ptr [ESP + 0x30]      ; 00401b5b
    INC EDX                             ; 00401b5f
    INC EAX                             ; 00401b60
    MOV dword ptr [ESP + 0x34],EDX      ; 00401b61
    MOV dword ptr [ESP + 0x30],EAX      ; 00401b65
    CMP EDI,0x300                       ; 00401b69
    JNZ 0x004019eb                      ; 00401b6f
        ;   XREF to: 004019eb (CONDITIONAL_JUMP)  ; LAB_004019eb
    MOV EBX,dword ptr [ESP + 0x10]      ; 00401b75
    MOV ECX,dword ptr [ESP + 0xc]       ; 00401b79
    ADD EBX,0x100                       ; 00401b7d
    ADD ECX,0x3                         ; 00401b83
    MOV dword ptr [ESP + 0x10],EBX      ; 00401b86
    MOV dword ptr [ESP + 0xc],ECX       ; 00401b8a
    CMP EBX,0x10000                     ; 00401b8e
    JNZ 0x004019a1                      ; 00401b94
        ;   XREF to: 004019a1 (CONDITIONAL_JUMP)  ; LAB_004019a1
    XOR EAX,EAX                         ; 00401b9a
    XOR EDX,EDX                         ; 00401b9c
    POP EBX                             ; 00401b9e
    POP ESI                             ; 00401b9f
    POP EDI                             ; 00401ba0
    MOV byte ptr [EDX + 0x1be5520],AL   ; 00401ba1
        ;   Label: LAB_00401ba1
    MOV byte ptr [EDX + 0x1bd5520],AL   ; 00401ba7
    MOV byte ptr [EAX + 0x1be5520],AL   ; 00401bad
    INC EAX                             ; 00401bb3
    ADD EDX,0x100                       ; 00401bb4
    CMP EAX,0x100                       ; 00401bba
    JL 0x00401ba1                       ; 00401bbf
        ;   XREF to: 00401ba1 (CONDITIONAL_JUMP)  ; LAB_00401ba1
    ADD ESP,0x34                        ; 00401bc1
    POP EBP                             ; 00401bc4
    RET                                 ; 00401bc5

