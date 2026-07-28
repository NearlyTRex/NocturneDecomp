; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonRightPlane_FUN_00431b90(undefined4 *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00431b78 = 00431be5
;   undefined1* PTR_caseD_1_00431b7c = 00431c10
;   undefined1* PTR_caseD_3_00431b84 = 00431bea
;   TerminatedCString s_engine_clipper_c_0057ac47
;   TerminatedCString s_Ran_out_of_clipped_verts_0057ac5b
;   undefined4 DAT_007678f8
;   undefined4 DAT_00767b38
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_clipper.c_interpolateVertexRightClip_FUN_00431630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431b90
        ;   Label: engine_clipper.c_clipPolygonRightPlane_FUN_00431b90
    PUSH ESI                            ; 00431b91
    PUSH EDI                            ; 00431b92
    PUSH EBP                            ; 00431b93
    SUB ESP,0x8                         ; 00431b94
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00431b97
    MOV EBP,dword ptr [ESP + 0x20]      ; 00431b9b
    XOR EBX,EBX                         ; 00431b9f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00431ba1
    MOV dword ptr [ESP],EBX             ; 00431ba5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00431ba8
    TEST EAX,EAX                        ; 00431bac
    JLE 0x00431c06                      ; 00431bae
        ;   XREF to: 00431c06 (CONDITIONAL_JUMP)  ; LAB_00431c06
    MOV dword ptr [ESP + 0x4],EDX       ; 00431bb0
    MOV EDI,dword ptr [ESP + 0x4]       ; 00431bb4
        ;   Label: LAB_00431bb4
    MOV EDX,dword ptr [ESI + 0x8]       ; 00431bb8
    MOV ECX,dword ptr [ESI]             ; 00431bbb
    XOR EAX,EAX                         ; 00431bbd
    NEG EDX                             ; 00431bbf
    MOV EDI,dword ptr [EDI]             ; 00431bc1
    CMP EDX,ECX                         ; 00431bc3
    JL 0x00431bcc                       ; 00431bc5
        ;   XREF to: 00431bcc (CONDITIONAL_JUMP)  ; LAB_00431bcc
    MOV EAX,0x1                         ; 00431bc7
    MOV EDX,dword ptr [EDI + 0x8]       ; 00431bcc
        ;   Label: LAB_00431bcc
    MOV ECX,dword ptr [EDI]             ; 00431bcf
    NEG EDX                             ; 00431bd1
    CMP EDX,ECX                         ; 00431bd3
    JL 0x00431bd9                       ; 00431bd5
        ;   XREF to: 00431bd9 (CONDITIONAL_JUMP)  ; LAB_00431bd9
    OR AL,0x2                           ; 00431bd7
    CMP EAX,0x3                         ; 00431bd9
        ;   Label: LAB_00431bd9
    JA 0x00431bea                       ; 00431bdc
        ;   XREF to: 00431bea (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x431b78]  ; 00431bde | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00431be5
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431be6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00431bea
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00431bee
    MOV ECX,dword ptr [ESP + 0x24]      ; 00431bf1
    MOV ESI,EDI                         ; 00431bf5
    ADD EAX,0x4                         ; 00431bf7
    INC EDX                             ; 00431bfa
    MOV dword ptr [ESP + 0x4],EAX       ; 00431bfb
    MOV dword ptr [ESP],EDX             ; 00431bff
    CMP EDX,ECX                         ; 00431c02
    JL 0x00431bb4                       ; 00431c04
        ;   XREF to: 00431bb4 (CONDITIONAL_JUMP)  ; LAB_00431bb4
    MOV EAX,EBX                         ; 00431c06
        ;   Label: LAB_00431c06
    ADD ESP,0x8                         ; 00431c08
    POP EBP                             ; 00431c0b
    POP EDI                             ; 00431c0c
    POP ESI                             ; 00431c0d
    POP EBX                             ; 00431c0e
    RET                                 ; 00431c0f
    CMP dword ptr [0x00767b38],0xc      ; 00431c10 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00431c3b                       ; 00431c17
        ;   XREF to: 00431c3b (CONDITIONAL_JUMP)  ; LAB_00431c3b
    MOV ECX,0x57ac47                    ; 00431c19 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431c1e
    PUSH 0x57ac5b                       ; 00431c23 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 00431c28 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00431c2e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00431c33
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00431c38
    MOV EAX,[0x00767b38]                ; 00431c3b | DAT_00767b38
        ;   Label: LAB_00431c3b
    IMUL EDX,EAX,0x30                   ; 00431c40
    ADD EDX,0x7678f8                    ; 00431c43 | DAT_007678f8
    PUSH EDX                            ; 00431c49
    PUSH ESI                            ; 00431c4a
    INC EBX                             ; 00431c4b
    INC EAX                             ; 00431c4c
    PUSH EDI                            ; 00431c4d
    MOV [0x00767b38],EAX                ; 00431c4e | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431c53
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 00431c57
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_00431630()
    ADD ESP,0xc                         ; 00431c5c
    JMP 0x00431bea                      ; 00431c5f
        ;   XREF to: 00431bea (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00431c61
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00431c62 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431c67
    CMP EAX,0xc                         ; 00431c6b
    JL 0x00431c93                       ; 00431c6e
        ;   XREF to: 00431c93 (CONDITIONAL_JUMP)  ; LAB_00431c93
    MOV EDX,0x57ac47                    ; 00431c70 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431c75
    PUSH 0x57ac5b                       ; 00431c7a | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00431c7f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00431c85 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00431c8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00431c90
    MOV EAX,[0x00767b38]                ; 00431c93 | DAT_00767b38
        ;   Label: LAB_00431c93
    IMUL EDX,EAX,0x30                   ; 00431c98
    ADD EDX,0x7678f8                    ; 00431c9b | DAT_007678f8
    PUSH EDX                            ; 00431ca1
    PUSH EDI                            ; 00431ca2
    INC EBX                             ; 00431ca3
    INC EAX                             ; 00431ca4
    PUSH ESI                            ; 00431ca5
    MOV [0x00767b38],EAX                ; 00431ca6 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431cab
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 00431caf
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_00431630()
    ADD ESP,0xc                         ; 00431cb4
    JMP 0x00431bea                      ; 00431cb7
        ;   XREF to: 00431bea (UNCONDITIONAL_JUMP)  ; caseD_3

