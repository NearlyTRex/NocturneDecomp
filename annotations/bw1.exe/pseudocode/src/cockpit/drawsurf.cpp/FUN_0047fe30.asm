; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047fe30(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0047ffd0 at 0047ffe2
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005db1ad
;   TerminatedCString s_Invalid_bitsPerPixel_005db1c5
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc11e4
;   undefined4 DAT_01bc11f0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0047e9d0
;   FUN_005030e0
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fe30
        ;   Label: FUN_0047fe30
    PUSH ESI                            ; 0047fe31
    PUSH EDI                            ; 0047fe32
    PUSH EBP                            ; 0047fe33
    SUB ESP,0x14                        ; 0047fe34
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047fe37
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0047fe3b
    MOV ESI,dword ptr [ESP + 0x30]      ; 0047fe3f
    MOV EBX,dword ptr [ESP + 0x34]      ; 0047fe43
    MOV EBP,dword ptr [ESP + 0x38]      ; 0047fe47
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047fe4b
    MOV ECX,dword ptr [EAX + 0xc]       ; 0047fe4e
    ADD EBX,EDX                         ; 0047fe51
    ADD EDI,EDX                         ; 0047fe53
    ADD ESI,ECX                         ; 0047fe55
    MOV EDX,dword ptr [EAX + 0x10]      ; 0047fe57
    ADD EBP,ECX                         ; 0047fe5a
    CMP EDI,EDX                         ; 0047fe5c
    JGE 0x0047fe62                      ; 0047fe5e
        ;   XREF to: 0047fe62 (CONDITIONAL_JUMP)  ; LAB_0047fe62
    MOV EDI,EDX                         ; 0047fe60
    MOV ECX,dword ptr [EAX + 0x18]      ; 0047fe62
        ;   Label: LAB_0047fe62
    CMP EBX,ECX                         ; 0047fe65
    JLE 0x0047fe6b                      ; 0047fe67
        ;   XREF to: 0047fe6b (CONDITIONAL_JUMP)  ; LAB_0047fe6b
    MOV EBX,ECX                         ; 0047fe69
    CMP EDI,EBX                         ; 0047fe6b
        ;   Label: LAB_0047fe6b
    JG 0x0047feb0                       ; 0047fe6d
        ;   XREF to: 0047feb0 (CONDITIONAL_JUMP)  ; LAB_0047feb0
    MOV EDX,dword ptr [EAX + 0x14]      ; 0047fe6f
    CMP ESI,EDX                         ; 0047fe72
    JGE 0x0047fe78                      ; 0047fe74
        ;   XREF to: 0047fe78 (CONDITIONAL_JUMP)  ; LAB_0047fe78
    MOV ESI,EDX                         ; 0047fe76
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0047fe78
        ;   Label: LAB_0047fe78
    CMP EBP,ECX                         ; 0047fe7b
    JLE 0x0047fe81                      ; 0047fe7d
        ;   XREF to: 0047fe81 (CONDITIONAL_JUMP)  ; LAB_0047fe81
    MOV EBP,ECX                         ; 0047fe7f
    CMP ESI,EBP                         ; 0047fe81
        ;   Label: LAB_0047fe81
    JG 0x0047feb0                       ; 0047fe83
        ;   XREF to: 0047feb0 (CONDITIONAL_JUMP)  ; LAB_0047feb0
    CMP dword ptr [0x01bc11f0],0x0      ; 0047fe85 | DAT_01bc11f0
    JZ 0x0047ff70                       ; 0047fe8c
        ;   XREF to: 0047ff70 (CONDITIONAL_JUMP)  ; LAB_0047ff70
    PUSH ESI                            ; 0047fe92
        ;   Label: LAB_0047fe92
    PUSH EBX                            ; 0047fe93
    PUSH EDI                            ; 0047fe94
    INC ESI                             ; 0047fe95
    CALL FUN_0047e9d0                   ; 0047fe96
        ;   XREF to: 0047e9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e9d0()
    ADD ESP,0xc                         ; 0047fe9b
    CMP ESI,EBP                         ; 0047fe9e
    JLE 0x0047fe92                      ; 0047fea0
        ;   XREF to: 0047fe92 (CONDITIONAL_JUMP)  ; LAB_0047fe92
    LEA EAX,[EAX]                       ; 0047fea2
    LEA EDX,[EDX]                       ; 0047fea8
    MOV EAX,EAX                         ; 0047feae
    ADD ESP,0x14                        ; 0047feb0
        ;   Label: LAB_0047feb0
    POP EBP                             ; 0047feb3
    POP EDI                             ; 0047feb4
    POP ESI                             ; 0047feb5
    POP EBX                             ; 0047feb6
    RET                                 ; 0047feb7
    SUB EBX,EDI                         ; 0047feb8
        ;   Label: LAB_0047feb8
    INC EBX                             ; 0047feba
    MOV dword ptr [ESP],EBX             ; 0047febb
    MOV EBX,EBP                         ; 0047febe
    MOV EBP,EDX                         ; 0047fec0
    MOV EDX,dword ptr [ESP]             ; 0047fec2
        ;   Label: LAB_0047fec2
    PUSH EDX                            ; 0047fec5
    MOV ECX,dword ptr [0x01bc11e4]      ; 0047fec6 | DAT_01bc11e4
    MOV EAX,dword ptr [EBX + 0x1c4354c] ; 0047fecc | DAT_01c4354c | DAT_01c43550
    PUSH ECX                            ; 0047fed2
    ADD EAX,EDI                         ; 0047fed3
    PUSH EAX                            ; 0047fed5
    ADD EBX,0x4                         ; 0047fed6
    INC ESI                             ; 0047fed9
    CALL FUN_005bfb70                   ; 0047feda
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0047fedf
    CMP EBX,EBP                         ; 0047fee2
    JLE 0x0047fec2                      ; 0047fee4
        ;   XREF to: 0047fec2 (CONDITIONAL_JUMP)  ; LAB_0047fec2
    ADD ESP,0x14                        ; 0047fee6
    POP EBP                             ; 0047fee9
    POP EDI                             ; 0047feea
    POP ESI                             ; 0047feeb
    POP EBX                             ; 0047feec
    RET                                 ; 0047feed
    MOV dword ptr [ESP + 0x8],EDX       ; 0047feee
        ;   Label: LAB_0047feee
    MOV EAX,dword ptr [EBP + 0x1c4354c] ; 0047fef2 | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_0047fef2
    MOV dword ptr [ESP + 0x10],EAX      ; 0047fef8
    MOV EAX,EDI                         ; 0047fefc
    CMP EDI,EBX                         ; 0047fefe
    JG 0x0047ff1e                       ; 0047ff00
        ;   XREF to: 0047ff1e (CONDITIONAL_JUMP)  ; LAB_0047ff1e
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047ff02
    LEA EDX,[EDI + EDI*0x1]             ; 0047ff06
    ADD EDX,ECX                         ; 0047ff09
    ADD EDX,0x2                         ; 0047ff0b
        ;   Label: LAB_0047ff0b
    MOV CX,word ptr [0x01bc11e4]        ; 0047ff0e | DAT_01bc11e4
    INC EAX                             ; 0047ff15
    MOV word ptr [EDX + -0x2],CX        ; 0047ff16
    CMP EAX,EBX                         ; 0047ff1a
    JLE 0x0047ff0b                      ; 0047ff1c
        ;   XREF to: 0047ff0b (CONDITIONAL_JUMP)  ; LAB_0047ff0b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ff1e
        ;   Label: LAB_0047ff1e
    ADD EBP,0x4                         ; 0047ff22
    INC ESI                             ; 0047ff25
    CMP EBP,EAX                         ; 0047ff26
    JG 0x0047feb0                       ; 0047ff28
        ;   XREF to: 0047feb0 (CONDITIONAL_JUMP)  ; LAB_0047feb0
    JMP 0x0047fef2                      ; 0047ff2a
        ;   XREF to: 0047fef2 (UNCONDITIONAL_JUMP)  ; LAB_0047fef2
    MOV dword ptr [ESP + 0x4],EDX       ; 0047ff2c
        ;   Label: LAB_0047ff2c
    MOV EAX,dword ptr [EBP + 0x1c4354c] ; 0047ff30 | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_0047ff30
    MOV EDX,EDI                         ; 0047ff36
    MOV dword ptr [ESP + 0xc],EAX       ; 0047ff38
    CMP EDI,EBX                         ; 0047ff3c
    JG 0x0047ff5e                       ; 0047ff3e
        ;   XREF to: 0047ff5e (CONDITIONAL_JUMP)  ; LAB_0047ff5e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ff40
    LEA EAX,[EDI*0x4 + 0x0]             ; 0047ff44
    ADD EAX,ECX                         ; 0047ff4b
    ADD EAX,0x4                         ; 0047ff4d
        ;   Label: LAB_0047ff4d
    MOV ECX,dword ptr [0x01bc11e4]      ; 0047ff50 | DAT_01bc11e4
    INC EDX                             ; 0047ff56
    MOV dword ptr [EAX + -0x4],ECX      ; 0047ff57
    CMP EDX,EBX                         ; 0047ff5a
    JLE 0x0047ff4d                      ; 0047ff5c
        ;   XREF to: 0047ff4d (CONDITIONAL_JUMP)  ; LAB_0047ff4d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047ff5e
        ;   Label: LAB_0047ff5e
    ADD EBP,0x4                         ; 0047ff62
    INC ESI                             ; 0047ff65
    CMP EBP,EAX                         ; 0047ff66
    JG 0x0047feb0                       ; 0047ff68
        ;   XREF to: 0047feb0 (CONDITIONAL_JUMP)  ; LAB_0047feb0
    JMP 0x0047ff30                      ; 0047ff6e
        ;   XREF to: 0047ff30 (UNCONDITIONAL_JUMP)  ; LAB_0047ff30
    LEA EDX,[EBP*0x4 + 0x0]             ; 0047ff70
        ;   Label: LAB_0047ff70
    MOV EAX,[0x0061b4a0]                ; 0047ff77 | DAT_0061b4a0
    LEA EBP,[ESI*0x4 + 0x0]             ; 0047ff7c
    CMP EAX,0x10                        ; 0047ff83
    JNC 0x0047ff93                      ; 0047ff86
        ;   XREF to: 0047ff93 (CONDITIONAL_JUMP)  ; LAB_0047ff93
    CMP EAX,0x8                         ; 0047ff88
    JZ 0x0047feb8                       ; 0047ff8b
        ;   XREF to: 0047feb8 (CONDITIONAL_JUMP)  ; LAB_0047feb8
    JMP 0x0047ff9e                      ; 0047ff91
        ;   XREF to: 0047ff9e (UNCONDITIONAL_JUMP)  ; LAB_0047ff9e
    JBE 0x0047feee                      ; 0047ff93
        ;   XREF to: 0047feee (CONDITIONAL_JUMP)  ; LAB_0047feee
        ;   Label: LAB_0047ff93
    CMP EAX,0x20                        ; 0047ff99
    JZ 0x0047ff2c                       ; 0047ff9c
        ;   XREF to: 0047ff2c (CONDITIONAL_JUMP)  ; LAB_0047ff2c
    MOV EDX,0x5db1ad                    ; 0047ff9e | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0047ff9e
    MOV ECX,0x525                       ; 0047ffa3
    PUSH 0x5db1c5                       ; 0047ffa8 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d1d400],EDX      ; 0047ffad | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0047ffb3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0047ffb9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0047ffbe
    ADD ESP,0x14                        ; 0047ffc1
    POP EBP                             ; 0047ffc4
    POP EDI                             ; 0047ffc5
    POP ESI                             ; 0047ffc6
    POP EBX                             ; 0047ffc7
    RET                                 ; 0047ffc8

