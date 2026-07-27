; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433db0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00433d94 = 00433e17
;   undefined1* PTR_caseD_1_00433d98 = 00433e61
;   undefined1* PTR_caseD_3_00433da0 = 00433e41
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b4c
;   undefined4 DAT_00767b54
;   undefined4 DAT_00767b7c
;   undefined4 DAT_00767b84
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433db0
        ;   Label: engine_clipper.c_FUN_00433db0
    PUSH ESI                            ; 00433db1
    PUSH EDI                            ; 00433db2
    PUSH EBP                            ; 00433db3
    SUB ESP,0x4                         ; 00433db4
    XOR EDX,EDX                         ; 00433db7
    MOV ECX,dword ptr [0x00767b40]      ; 00433db9 | DAT_00767b40
    MOV dword ptr [ESP],EDX             ; 00433dbf
    TEST ECX,ECX                        ; 00433dc2
    JLE 0x00433e59                      ; 00433dc4
        ;   XREF to: 00433e59 (CONDITIONAL_JUMP)  ; LAB_00433e59
    MOV EBX,0x767b4c                    ; 00433dca | DAT_00767b4c
    MOV EAX,dword ptr [ESP]             ; 00433dcf
        ;   Label: LAB_00433dcf
    MOV EBP,dword ptr [0x00767b40]      ; 00433dd2 | DAT_00767b40
    INC EAX                             ; 00433dd8
    CMP EAX,EBP                         ; 00433dd9
    JNZ 0x00433ddf                      ; 00433ddb
        ;   XREF to: 00433ddf (CONDITIONAL_JUMP)  ; LAB_00433ddf
    XOR EAX,EBP                         ; 00433ddd
    IMUL EAX,EAX,0x30                   ; 00433ddf
        ;   Label: LAB_00433ddf
    MOV EBP,0x767b4c                    ; 00433de2 | DAT_00767b4c
    MOV EDX,EBX                         ; 00433de7
    MOV EDI,dword ptr [EBX + 0x8]       ; 00433de9 | DAT_00767b54 | DAT_00767b84
    MOV ECX,dword ptr [EBX]             ; 00433dec | DAT_00767b4c | DAT_00767b7c
    NEG EDI                             ; 00433dee
    ADD EBP,EAX                         ; 00433df0
    XOR EAX,EAX                         ; 00433df2
    CMP EDI,ECX                         ; 00433df4
    JL 0x00433dfd                       ; 00433df6
        ;   XREF to: 00433dfd (CONDITIONAL_JUMP)  ; LAB_00433dfd
    MOV EAX,0x1                         ; 00433df8
    MOV EDI,dword ptr [EBP + 0x8]       ; 00433dfd | DAT_00767b54
        ;   Label: LAB_00433dfd
    MOV ESI,dword ptr [EBP]             ; 00433e00 | DAT_00767b4c
    NEG EDI                             ; 00433e03
    CMP EDI,ESI                         ; 00433e05
    JL 0x00433e0b                       ; 00433e07
        ;   XREF to: 00433e0b (CONDITIONAL_JUMP)  ; LAB_00433e0b
    OR AL,0x2                           ; 00433e09
    CMP EAX,0x3                         ; 00433e0b
        ;   Label: LAB_00433e0b
    JA 0x00433e41                       ; 00433e0e
        ;   XREF to: 00433e41 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x433d94]  ; 00433e10 | = "k=D{v" | caseD_1 | caseD_2
        ;   Label: switchD

