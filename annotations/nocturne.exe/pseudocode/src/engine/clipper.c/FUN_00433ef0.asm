; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433ef0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00433ee0 = 00433f52
;   undefined1* PTR_caseD_1_00433ee4 = 00433f9c
;   undefined1* PTR_caseD_3_00433eec = 00433f7c
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_00767b44
;   undefined4 DAT_0076874c
;   undefined4 DAT_00768750
;   undefined4 DAT_00768754
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433ef0
        ;   Label: engine_clipper.c_FUN_00433ef0
    PUSH ESI                            ; 00433ef1
    PUSH EDI                            ; 00433ef2
    PUSH EBP                            ; 00433ef3
    SUB ESP,0x4                         ; 00433ef4
    XOR EDX,EDX                         ; 00433ef7
    MOV ECX,dword ptr [0x00767b44]      ; 00433ef9 | DAT_00767b44
    MOV dword ptr [ESP],EDX             ; 00433eff
    TEST ECX,ECX                        ; 00433f02
    JLE 0x00433f94                      ; 00433f04
        ;   XREF to: 00433f94 (CONDITIONAL_JUMP)  ; LAB_00433f94
    MOV EBX,0x76874c                    ; 00433f0a
    MOV EAX,dword ptr [ESP]             ; 00433f0f
        ;   Label: LAB_00433f0f
    MOV EBP,dword ptr [0x00767b44]      ; 00433f12 | DAT_00767b44
    INC EAX                             ; 00433f18
    CMP EAX,EBP                         ; 00433f19
    JNZ 0x00433f1f                      ; 00433f1b
        ;   XREF to: 00433f1f (CONDITIONAL_JUMP)  ; LAB_00433f1f
    XOR EAX,EBP                         ; 00433f1d
    IMUL EAX,EAX,0x30                   ; 00433f1f
        ;   Label: LAB_00433f1f
    MOV EBP,0x76874c                    ; 00433f22 | DAT_0076874c
    MOV EDX,EBX                         ; 00433f27
    MOV EDI,dword ptr [EBX + 0x4]       ; 00433f29
    MOV ECX,dword ptr [EBX + 0x8]       ; 00433f2c
    ADD EBP,EAX                         ; 00433f2f
    XOR EAX,EAX                         ; 00433f31
    CMP EDI,ECX                         ; 00433f33
    JL 0x00433f3c                       ; 00433f35
        ;   XREF to: 00433f3c (CONDITIONAL_JUMP)  ; LAB_00433f3c
    MOV EAX,0x1                         ; 00433f37
    MOV ESI,dword ptr [EBP + 0x8]       ; 00433f3c | DAT_00768754
        ;   Label: LAB_00433f3c
    CMP ESI,dword ptr [EBP + 0x4]       ; 00433f3f | DAT_00768750
    JG 0x00433f46                       ; 00433f42
        ;   XREF to: 00433f46 (CONDITIONAL_JUMP)  ; LAB_00433f46
    OR AL,0x2                           ; 00433f44
    CMP EAX,0x3                         ; 00433f46
        ;   Label: LAB_00433f46
    JA 0x00433f7c                       ; 00433f49
        ;   XREF to: 00433f7c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x433ee0]  ; 00433f4b | = "k=H{v" | caseD_1 | caseD_2
        ;   Label: switchD

