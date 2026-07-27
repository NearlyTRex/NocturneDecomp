; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_00490ff0(uint param_1,uint param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_00581912
;   TerminatedCString s_Invalid_bitsPerPixel_in_00581925
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;   undefined4 DAT_01c70f5c
;   undefined4 DAT_01c70f5e
;   undefined4 DAT_01c70f60
;   undefined4 DAT_01c70f64
;   undefined4 DAT_01c70f68
;   undefined4 DAT_01c70f6c
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490ff0
        ;   Label: engine_font.cpp_FUN_00490ff0
    PUSH ESI                            ; 00490ff1
    PUSH EDI                            ; 00490ff2
    PUSH EBP                            ; 00490ff3
    SUB ESP,0xc                         ; 00490ff4
    MOV ESI,dword ptr [ESP + 0x20]      ; 00490ff7
    MOV EBX,dword ptr [ESP + 0x24]      ; 00490ffb
    MOV EDI,dword ptr [ESP + 0x28]      ; 00490fff
    MOV EDX,dword ptr [0x005b7624]      ; 00491003 | DAT_005b7624
    CMP EDX,0x8                         ; 00491009
    JZ 0x00491068                       ; 0049100c
        ;   XREF to: 00491068 (CONDITIONAL_JUMP)  ; LAB_00491068
    CMP EDX,0x10                        ; 0049100e
    JZ 0x0049108d                       ; 00491011
        ;   XREF to: 0049108d (CONDITIONAL_JUMP)  ; LAB_0049108d
    CMP EDX,0x20                        ; 00491013
    JNZ 0x0049110c                      ; 00491016
        ;   XREF to: 0049110c (CONDITIONAL_JUMP)  ; LAB_0049110c
    CMP EDX,EDX                         ; 0049101c
    JNZ 0x004910f9                      ; 0049101e
        ;   XREF to: 004910f9 (CONDITIONAL_JUMP)  ; LAB_004910f9
    MOV CL,byte ptr [0x01c00624]        ; 00491024 | DAT_01c00624
    MOV EDX,ESI                         ; 0049102a
    MOV EAX,EBX                         ; 0049102c
    SHL EDX,CL                          ; 0049102e
    MOV CL,byte ptr [0x01c00630]        ; 00491030 | DAT_01c00630
    SHL EAX,CL                          ; 00491036
    MOV CL,byte ptr [0x01c0063c]        ; 00491038 | DAT_01c0063c
    OR EAX,EDX                          ; 0049103e
    MOV EDX,EDI                         ; 00491040
    SHL EDX,CL                          ; 00491042
    MOV ECX,EDX                         ; 00491044
    OR ECX,EAX                          ; 00491046
    MOV dword ptr [0x01c70f60],ECX      ; 00491048 | DAT_01c70f60
        ;   Label: LAB_00491048
    MOV dword ptr [0x01c70f68],EBX      ; 0049104e | DAT_01c70f68
        ;   Label: LAB_0049104e
    MOV dword ptr [0x01c70f6c],EDI      ; 00491054 | DAT_01c70f6c
    MOV dword ptr [0x01c70f64],ESI      ; 0049105a | DAT_01c70f64
    ADD ESP,0xc                         ; 00491060
    POP EBP                             ; 00491063
    POP EDI                             ; 00491064
    POP ESI                             ; 00491065
    POP EBX                             ; 00491066
    RET                                 ; 00491067
    MOV ECX,ESI                         ; 00491068
        ;   Label: LAB_00491068
    MOV EAX,EBX                         ; 0049106a
    SAR ECX,0x3                         ; 0049106c
    SAR EAX,0x3                         ; 0049106f
    SHL ECX,0xa                         ; 00491072
    SHL EAX,0x5                         ; 00491075
    ADD EAX,ECX                         ; 00491078
    MOV ECX,EDI                         ; 0049107a
    SAR ECX,0x3                         ; 0049107c
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1bf7720] ; 0049107f
    MOV [0x01c70f5c],AL                 ; 00491086 | DAT_01c70f5c
    JMP 0x0049104e                      ; 0049108b
        ;   XREF to: 0049104e (UNCONDITIONAL_JUMP)  ; LAB_0049104e
    MOV EBP,dword ptr [0x01c00628]      ; 0049108d | DAT_01c00628
        ;   Label: LAB_0049108d
    MOV EAX,ESI                         ; 00491093
    XOR EDX,EDX                         ; 00491095
    DIV EBP                             ; 00491097
    MOV dword ptr [ESP],ESI             ; 00491099
    MOV ECX,dword ptr [0x01c00634]      ; 0049109c | DAT_01c00634
    MOV dword ptr [ESP],EAX             ; 004910a2
    XOR EDX,EDX                         ; 004910a5
    MOV EAX,EBX                         ; 004910a7
    DIV ECX                             ; 004910a9
    MOV dword ptr [ESP + 0x4],EBX       ; 004910ab
    MOV EBP,dword ptr [0x01c00640]      ; 004910af | DAT_01c00640
    MOV dword ptr [ESP + 0x4],EAX       ; 004910b5
    XOR EDX,EDX                         ; 004910b9
    MOV EAX,EDI                         ; 004910bb
    DIV EBP                             ; 004910bd
    MOV dword ptr [ESP + 0x8],EDI       ; 004910bf
    MOV CL,byte ptr [0x01c00624]        ; 004910c3 | DAT_01c00624
    MOV dword ptr [ESP + 0x8],EAX       ; 004910c9
    MOV EAX,dword ptr [ESP]             ; 004910cd
    MOV EDX,dword ptr [ESP + 0x4]       ; 004910d0
    SHL EAX,CL                          ; 004910d4
    MOV CL,byte ptr [0x01c00630]        ; 004910d6 | DAT_01c00630
    SHL EDX,CL                          ; 004910dc
    MOV CL,byte ptr [0x01c0063c]        ; 004910de | DAT_01c0063c
    OR EAX,EDX                          ; 004910e4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004910e6
    SHL EDX,CL                          ; 004910ea
    OR EAX,EDX                          ; 004910ec
    MOV [0x01c70f5e],AX                 ; 004910ee | DAT_01c70f5e
    JMP 0x0049104e                      ; 004910f4
        ;   XREF to: 0049104e (UNCONDITIONAL_JUMP)  ; LAB_0049104e
    MOV EAX,EBX                         ; 004910f9
        ;   Label: LAB_004910f9
    MOV ECX,ESI                         ; 004910fb
    SHL EAX,0x8                         ; 004910fd
    SHL ECX,0x10                        ; 00491100
    OR ECX,EAX                          ; 00491103
    OR ECX,EDI                          ; 00491105
    JMP 0x00491048                      ; 00491107
        ;   XREF to: 00491048 (UNCONDITIONAL_JUMP)  ; LAB_00491048
    MOV EAX,0x581912                    ; 0049110c | = "..\\engine\\font.cpp"
        ;   Label: LAB_0049110c
    MOV EDX,0x399                       ; 00491111
    PUSH 0x581925                       ; 00491116 | = "Invalid bitsPerPixel in CBitFont::set..."
    MOV [0x01cc4800],EAX                ; 0049111b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00491120 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00491126
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0049112b
    JMP 0x0049104e                      ; 0049112e
        ;   XREF to: 0049104e (UNCONDITIONAL_JUMP)  ; LAB_0049104e

