; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_FUN_00431cd0(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00431cbc = 00431d21
;   undefined1* PTR_caseD_1_00431cc0 = 00431d4c
;   undefined1* PTR_caseD_3_00431cc8 = 00431d26
;   TerminatedCString s_engine_clipper_c_0057ac47
;   TerminatedCString s_Ran_out_of_clipped_verts_0057ac5b
;   undefined4 DAT_007678f8
;   undefined4 DAT_00767b38
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431cd0
        ;   Label: engine_clipper.c_FUN_00431cd0
    PUSH ESI                            ; 00431cd1
    PUSH EDI                            ; 00431cd2
    PUSH EBP                            ; 00431cd3
    SUB ESP,0x8                         ; 00431cd4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00431cd7
    MOV EBP,dword ptr [ESP + 0x20]      ; 00431cdb
    XOR EBX,EBX                         ; 00431cdf
    MOV EAX,dword ptr [ESP + 0x24]      ; 00431ce1
    MOV dword ptr [ESP],EBX             ; 00431ce5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00431ce8
    TEST EAX,EAX                        ; 00431cec
    JLE 0x00431d42                      ; 00431cee
        ;   XREF to: 00431d42 (CONDITIONAL_JUMP)  ; LAB_00431d42
    MOV dword ptr [ESP + 0x4],EDX       ; 00431cf0
    MOV EDI,dword ptr [ESP + 0x4]       ; 00431cf4
        ;   Label: LAB_00431cf4
    MOV EDX,dword ptr [ESI + 0x4]       ; 00431cf8
    MOV ECX,dword ptr [ESI + 0x8]       ; 00431cfb
    XOR EAX,EAX                         ; 00431cfe
    MOV EDI,dword ptr [EDI]             ; 00431d00
    CMP EDX,ECX                         ; 00431d02
    JL 0x00431d0b                       ; 00431d04
        ;   XREF to: 00431d0b (CONDITIONAL_JUMP)  ; LAB_00431d0b
    MOV EAX,0x1                         ; 00431d06
    MOV ECX,dword ptr [EDI + 0x8]       ; 00431d0b
        ;   Label: LAB_00431d0b
    CMP ECX,dword ptr [EDI + 0x4]       ; 00431d0e
    JG 0x00431d15                       ; 00431d11
        ;   XREF to: 00431d15 (CONDITIONAL_JUMP)  ; LAB_00431d15
    OR AL,0x2                           ; 00431d13
    CMP EAX,0x3                         ; 00431d15
        ;   Label: LAB_00431d15
    JA 0x00431d26                       ; 00431d18
        ;   XREF to: 00431d26 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x431cbc]  ; 00431d1a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00431d21
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431d22
    MOV EAX,dword ptr [ESP + 0x4]       ; 00431d26
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00431d2a
    MOV ECX,dword ptr [ESP + 0x24]      ; 00431d2d
    MOV ESI,EDI                         ; 00431d31
    ADD EAX,0x4                         ; 00431d33
    INC EDX                             ; 00431d36
    MOV dword ptr [ESP + 0x4],EAX       ; 00431d37
    MOV dword ptr [ESP],EDX             ; 00431d3b
    CMP EDX,ECX                         ; 00431d3e
    JL 0x00431cf4                       ; 00431d40
        ;   XREF to: 00431cf4 (CONDITIONAL_JUMP)  ; LAB_00431cf4
    MOV EAX,EBX                         ; 00431d42
        ;   Label: LAB_00431d42
    ADD ESP,0x8                         ; 00431d44
    POP EBP                             ; 00431d47
    POP EDI                             ; 00431d48
    POP ESI                             ; 00431d49
    POP EBX                             ; 00431d4a
    RET                                 ; 00431d4b
    CMP dword ptr [0x00767b38],0xc      ; 00431d4c | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00431d77                       ; 00431d53
        ;   XREF to: 00431d77 (CONDITIONAL_JUMP)  ; LAB_00431d77
    MOV ECX,0x57ac47                    ; 00431d55 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431d5a
    PUSH 0x57ac5b                       ; 00431d5f | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 00431d64 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00431d6a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00431d6f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00431d74
    MOV EAX,[0x00767b38]                ; 00431d77 | DAT_00767b38
        ;   Label: LAB_00431d77
    IMUL EDX,EAX,0x30                   ; 00431d7c
    ADD EDX,0x7678f8                    ; 00431d7f | DAT_007678f8
    PUSH EDX                            ; 00431d85
    PUSH ESI                            ; 00431d86
    INC EBX                             ; 00431d87
    INC EAX                             ; 00431d88
    PUSH EDI                            ; 00431d89
    MOV [0x00767b38],EAX                ; 00431d8a | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431d8f
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 00431d93
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_00431730()
    ADD ESP,0xc                         ; 00431d98
    JMP 0x00431d26                      ; 00431d9b
        ;   XREF to: 00431d26 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00431d9d
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00431d9e | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431da3
    CMP EAX,0xc                         ; 00431da7
    JL 0x00431dcf                       ; 00431daa
        ;   XREF to: 00431dcf (CONDITIONAL_JUMP)  ; LAB_00431dcf
    MOV EDX,0x57ac47                    ; 00431dac | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431db1
    PUSH 0x57ac5b                       ; 00431db6 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00431dbb | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00431dc1 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00431dc7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00431dcc
    MOV EAX,[0x00767b38]                ; 00431dcf | DAT_00767b38
        ;   Label: LAB_00431dcf
    IMUL EDX,EAX,0x30                   ; 00431dd4
    ADD EDX,0x7678f8                    ; 00431dd7 | DAT_007678f8
    PUSH EDX                            ; 00431ddd
    PUSH EDI                            ; 00431dde
    INC EBX                             ; 00431ddf
    INC EAX                             ; 00431de0
    PUSH ESI                            ; 00431de1
    MOV [0x00767b38],EAX                ; 00431de2 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431de7
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 00431deb
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_00431730()
    ADD ESP,0xc                         ; 00431df0
    JMP 0x00431d26                      ; 00431df3
        ;   XREF to: 00431d26 (UNCONDITIONAL_JUMP)  ; caseD_3

