; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433c70(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00433c58 = 00433cd1
;   undefined1* PTR_caseD_1_00433c5c = 00433d17
;   undefined1* PTR_caseD_3_00433c64 = 00433cfb
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_00767b3c
;   undefined4 DAT_0076814c
;   undefined4 DAT_00768154
;   undefined4 DAT_0076817c
;   undefined4 DAT_00768184
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433c70
        ;   Label: engine_clipper.c_FUN_00433c70
    PUSH ESI                            ; 00433c71
    PUSH EDI                            ; 00433c72
    PUSH EBP                            ; 00433c73
    SUB ESP,0x4                         ; 00433c74
    XOR EDX,EDX                         ; 00433c77
    MOV ECX,dword ptr [0x00767b3c]      ; 00433c79 | DAT_00767b3c
    MOV dword ptr [ESP],EDX             ; 00433c7f
    TEST ECX,ECX                        ; 00433c82
    JLE 0x00433d0f                      ; 00433c84
        ;   XREF to: 00433d0f (CONDITIONAL_JUMP)  ; LAB_00433d0f
    MOV EBX,0x76814c                    ; 00433c8a | DAT_0076814c
    MOV EAX,dword ptr [ESP]             ; 00433c8f
        ;   Label: LAB_00433c8f
    MOV EBP,dword ptr [0x00767b3c]      ; 00433c92 | DAT_00767b3c
    INC EAX                             ; 00433c98
    CMP EAX,EBP                         ; 00433c99
    JNZ 0x00433c9f                      ; 00433c9b
        ;   XREF to: 00433c9f (CONDITIONAL_JUMP)  ; LAB_00433c9f
    XOR EAX,EBP                         ; 00433c9d
    IMUL EAX,EAX,0x30                   ; 00433c9f
        ;   Label: LAB_00433c9f
    MOV EBP,0x76814c                    ; 00433ca2 | DAT_0076814c
    MOV EDX,EBX                         ; 00433ca7
    MOV EDI,dword ptr [EBX]             ; 00433ca9 | DAT_0076814c | DAT_0076817c
    MOV ECX,dword ptr [EBX + 0x8]       ; 00433cab | DAT_00768154 | DAT_00768184
    ADD EBP,EAX                         ; 00433cae
    XOR EAX,EAX                         ; 00433cb0
    CMP EDI,ECX                         ; 00433cb2
    JL 0x00433cbb                       ; 00433cb4
        ;   XREF to: 00433cbb (CONDITIONAL_JUMP)  ; LAB_00433cbb
    MOV EAX,0x1                         ; 00433cb6
    MOV ESI,dword ptr [EBP + 0x8]       ; 00433cbb | DAT_00768154
        ;   Label: LAB_00433cbb
    CMP ESI,dword ptr [EBP]             ; 00433cbe | DAT_0076814c
    JG 0x00433cc5                       ; 00433cc1
        ;   XREF to: 00433cc5 (CONDITIONAL_JUMP)  ; LAB_00433cc5
    OR AL,0x2                           ; 00433cc3
    CMP EAX,0x3                         ; 00433cc5
        ;   Label: LAB_00433cc5
    JA 0x00433cfb                       ; 00433cc8
        ;   XREF to: 00433cfb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x433c58]  ; 00433cca | = "k=@{v" | caseD_1 | caseD_2
        ;   Label: switchD

