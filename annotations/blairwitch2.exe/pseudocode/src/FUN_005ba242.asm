; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ba242(int param_1,undefined4 param_2,char *param_3)
;
;
; XREF[2]:
;   FUN_005ba274 at 005ba291
;   FUN_005ba29a at 005ba2aa
;
; Called Functions:
;   FUN_005b7f5f
;   FUN_005c0fd7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba242
        ;   Label: FUN_005ba242
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ba246
    TEST EDX,EDX                        ; 005ba24a
    JZ 0x005ba26a                       ; 005ba24c
        ;   XREF to: 005ba26a (CONDITIONAL_JUMP)  ; LAB_005ba26a
    XOR EAX,EAX                         ; 005ba24e
    MOV AL,byte ptr [ECX]               ; 005ba250
    CMP EAX,0x4                         ; 005ba252
    JNZ 0x005ba26d                      ; 005ba255
        ;   XREF to: 005ba26d (CONDITIONAL_JUMP)  ; LAB_005ba26d
    MOV EAX,0x5c0fd7                    ; 005ba257
    PUSH ECX                            ; 005ba25c
        ;   Label: LAB_005ba25c
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ba25d
    PUSH ECX                            ; 005ba261
    PUSH EDX                            ; 005ba262
    CALL EAX                            ; 005ba263 | undefined FUN_005c0fd7()
    ADD ESP,0xc                         ; 005ba265
    MOV EDX,EAX                         ; 005ba268
    MOV EAX,EDX                         ; 005ba26a
        ;   Label: LAB_005ba26a
    RET                                 ; 005ba26c
    MOV EAX,0x5b7f5f                    ; 005ba26d
        ;   Label: LAB_005ba26d
    JMP 0x005ba25c                      ; 005ba272
        ;   XREF to: 005ba25c (UNCONDITIONAL_JUMP)  ; LAB_005ba25c

