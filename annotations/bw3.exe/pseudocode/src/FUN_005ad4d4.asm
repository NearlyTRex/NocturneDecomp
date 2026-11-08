; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005ad4d4(int param_1,undefined1 *param_2,int param_3)
;
;
; Called Functions:
;   FUN_005ad480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad4d4
        ;   Label: FUN_005ad4d4
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ad4d5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ad4d9
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ad4dd
    MOV EDX,EBX                         ; 005ad4e1
    CMP ECX,0xa                         ; 005ad4e3
    JNZ 0x005ad4f4                      ; 005ad4e6
        ;   XREF to: 005ad4f4 (CONDITIONAL_JUMP)  ; LAB_005ad4f4
    TEST EAX,EAX                        ; 005ad4e8
    JGE 0x005ad4f4                      ; 005ad4ea
        ;   XREF to: 005ad4f4 (CONDITIONAL_JUMP)  ; LAB_005ad4f4
    NEG EAX                             ; 005ad4ec
    LEA EDX,[EBX + 0x1]                 ; 005ad4ee
    MOV byte ptr [EBX],0x2d             ; 005ad4f1
    PUSH ECX                            ; 005ad4f4
        ;   Label: LAB_005ad4f4
    PUSH EDX                            ; 005ad4f5
    PUSH EAX                            ; 005ad4f6
    CALL FUN_005ad480                   ; 005ad4f7
        ;   XREF to: 005ad480 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad480()
    ADD ESP,0xc                         ; 005ad4fc
    MOV EAX,EBX                         ; 005ad4ff
    POP EBX                             ; 005ad501
    RET                                 ; 005ad502

