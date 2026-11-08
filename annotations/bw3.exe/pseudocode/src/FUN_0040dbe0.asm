; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0040dbe0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f70a0 at 004f71bb
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6a978
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;
; Called Functions:
;   FUN_0040db50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dbe0
        ;   Label: FUN_0040dbe0
    PUSH ESI                            ; 0040dbe1
    PUSH EDI                            ; 0040dbe2
    PUSH EBP                            ; 0040dbe3
    SUB ESP,0x18                        ; 0040dbe4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0040dbe7
    PUSH EBX                            ; 0040dbeb
    CALL FUN_0040db50                   ; 0040dbec
        ;   XREF to: 0040db50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040db50()
    MOV EDX,dword ptr [0x005fba20]      ; 0040dbf1 | DAT_005fba20
    ADD ESP,0x4                         ; 0040dbf7
    CMP EDX,0x10                        ; 0040dbfa
    JZ 0x0040dcdc                       ; 0040dbfd
        ;   XREF to: 0040dcdc (CONDITIONAL_JUMP)  ; LAB_0040dcdc
    LEA EAX,[EAX]                       ; 0040dc03
    LEA EDX,[EDX]                       ; 0040dc09
    NOP                                 ; 0040dc0f
    XOR EDX,EDX                         ; 0040dc10
        ;   Label: LAB_0040dc10
    MOV ECX,dword ptr [0x005fba1c]      ; 0040dc12 | DAT_005fba1c
    MOV dword ptr [ESP + 0x14],EDX      ; 0040dc18
    TEST ECX,ECX                        ; 0040dc1c
    JLE 0x0040dcd4                      ; 0040dc1e
        ;   XREF to: 0040dcd4 (CONDITIONAL_JUMP)  ; LAB_0040dcd4
    MOV dword ptr [ESP + 0xc],EDX       ; 0040dc24
    MOV EDX,dword ptr [0x005fba18]      ; 0040dc28 | DAT_005fba18
        ;   Label: LAB_0040dc28
    XOR ECX,ECX                         ; 0040dc2e
    TEST EDX,EDX                        ; 0040dc30
    JLE 0x0040dcb2                      ; 0040dc32
        ;   XREF to: 0040dcb2 (CONDITIONAL_JUMP)  ; LAB_0040dcb2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040dc38
    XOR EDI,EDI                         ; 0040dc3c
    XOR ESI,ESI                         ; 0040dc3e
    MOV dword ptr [ESP + 0x8],EAX       ; 0040dc40
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040dc44
        ;   Label: LAB_0040dc44
    IMUL EDX,ECX                        ; 0040dc47
    MOV EBP,dword ptr [0x005fba18]      ; 0040dc4a | DAT_005fba18
    MOV EAX,EDX                         ; 0040dc50
    SAR EDX,0x1f                        ; 0040dc52
    IDIV EBP                            ; 0040dc55
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040dc57
    MOV EBP,EAX                         ; 0040dc5b
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040dc5d
    IMUL EDX,EAX                        ; 0040dc60
    MOV EAX,EDX                         ; 0040dc63
    SAR EDX,0x1f                        ; 0040dc65
    IDIV dword ptr [0x005fba1c]         ; 0040dc68 | DAT_005fba1c
    IMUL EAX,dword ptr [EBX + 0xc]      ; 0040dc6e
    ADD EBP,EAX                         ; 0040dc72
    MOV EAX,dword ptr [EBX]             ; 0040dc74
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 0040dc76
    CMP dword ptr [0x005fba20],0x20     ; 0040dc79 | DAT_005fba20
    JZ 0x0040dd7e                       ; 0040dc80
        ;   XREF to: 0040dd7e (CONDITIONAL_JUMP)  ; LAB_0040dd7e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040dc86
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 0040dc8a | DAT_01c5faec
    AND EAX,0xff                        ; 0040dc90
    MOV AX,word ptr [EAX*0x2 + 0x1c6ad74] ; 0040dc95
    MOV word ptr [EDX + EDI*0x1],AX     ; 0040dc9d
    MOV EBP,dword ptr [0x005fba18]      ; 0040dca1 | DAT_005fba18
        ;   Label: LAB_0040dca1
    ADD EDI,0x2                         ; 0040dca7
    INC ECX                             ; 0040dcaa
    ADD ESI,0x4                         ; 0040dcab
    CMP ECX,EBP                         ; 0040dcae
    JL 0x0040dc44                       ; 0040dcb0
        ;   XREF to: 0040dc44 (CONDITIONAL_JUMP)  ; LAB_0040dc44
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040dcb2
        ;   Label: LAB_0040dcb2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040dcb6
    MOV EBP,dword ptr [0x005fba1c]      ; 0040dcba | DAT_005fba1c
    ADD ESI,0x4                         ; 0040dcc0
    INC EDI                             ; 0040dcc3
    MOV dword ptr [ESP + 0xc],ESI       ; 0040dcc4
    MOV dword ptr [ESP + 0x14],EDI      ; 0040dcc8
    CMP EDI,EBP                         ; 0040dccc
    JL 0x0040dc28                       ; 0040dcce
        ;   XREF to: 0040dc28 (CONDITIONAL_JUMP)  ; LAB_0040dc28
    ADD ESP,0x18                        ; 0040dcd4
        ;   Label: LAB_0040dcd4
    POP EBP                             ; 0040dcd7
    POP EDI                             ; 0040dcd8
    POP ESI                             ; 0040dcd9
    POP EBX                             ; 0040dcda
    RET                                 ; 0040dcdb
    XOR ESI,ESI                         ; 0040dcdc
        ;   Label: LAB_0040dcdc
    MOV dword ptr [ESP + 0x10],ESI      ; 0040dcde
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040dce2
        ;   Label: LAB_0040dce2
    MOV EAX,dword ptr [EAX + 0x1c6a974] ; 0040dce6 | DAT_01c6a974 | DAT_01c6a978
    MOV EDI,dword ptr [0x01c6af78]      ; 0040dcec | DAT_01c6af78
    MOV EBP,EAX                         ; 0040dcf2
    MOV ECX,EAX                         ; 0040dcf4
    SAR EAX,0x10                        ; 0040dcf6
    XOR EDX,EDX                         ; 0040dcf9
    AND EAX,0xff                        ; 0040dcfb
    DIV EDI                             ; 0040dd00
    SAR ECX,0x8                         ; 0040dd02
    AND ECX,0xff                        ; 0040dd05
    MOV dword ptr [ESP],ECX             ; 0040dd0b
    MOV EDI,EAX                         ; 0040dd0e
    XOR EDX,EDX                         ; 0040dd10
    MOV EAX,ECX                         ; 0040dd12
    DIV dword ptr [0x01c6af84]          ; 0040dd14 | DAT_01c6af84
    AND EBP,0xff                        ; 0040dd1a
    MOV dword ptr [ESP + 0x4],EBP       ; 0040dd20
    MOV dword ptr [ESP],EAX             ; 0040dd24
    XOR EDX,EDX                         ; 0040dd27
    MOV EAX,EBP                         ; 0040dd29
    DIV dword ptr [0x01c6af90]          ; 0040dd2b | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 0040dd31 | DAT_01c6af74
    SHL EDI,CL                          ; 0040dd37
    MOV CL,byte ptr [0x01c6af80]        ; 0040dd39 | DAT_01c6af80
    MOV dword ptr [ESP + 0x4],EAX       ; 0040dd3f
    MOV EAX,dword ptr [ESP]             ; 0040dd43
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dd46
    SHL EAX,CL                          ; 0040dd4a
    MOV CL,byte ptr [0x01c6af8c]        ; 0040dd4c | DAT_01c6af8c
    OR EAX,EDI                          ; 0040dd52
    SHL EDX,CL                          ; 0040dd54
    OR EAX,EDX                          ; 0040dd56
    MOV word ptr [ESI + 0x1c6ad74],AX   ; 0040dd58
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040dd5f
    ADD EAX,0x4                         ; 0040dd63
    ADD ESI,0x2                         ; 0040dd66
    MOV dword ptr [ESP + 0x10],EAX      ; 0040dd69
    CMP ESI,0x200                       ; 0040dd6d
    JNZ 0x0040dce2                      ; 0040dd73
        ;   XREF to: 0040dce2 (CONDITIONAL_JUMP)  ; LAB_0040dce2
    JMP 0x0040dc10                      ; 0040dd79
        ;   XREF to: 0040dc10 (UNCONDITIONAL_JUMP)  ; LAB_0040dc10
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040dd7e
        ;   Label: LAB_0040dd7e
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 0040dd82 | DAT_01c5faec
    AND EAX,0xff                        ; 0040dd88
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 0040dd8d | DAT_01c6a974
    MOV dword ptr [EDX + ESI*0x1],EAX   ; 0040dd94
    JMP 0x0040dca1                      ; 0040dd97
        ;   XREF to: 0040dca1 (UNCONDITIONAL_JUMP)  ; LAB_0040dca1

