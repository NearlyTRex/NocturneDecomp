; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9990(int param_1)
;
;
; XREF[1]:
;   FUN_004c83b0 at 004c884d
;
; Referenced Globals:
;   undefined4 DAT_007c33e0
;
; Called Functions:
;   FUN_0040c600
;   FUN_0040e210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9990
        ;   Label: FUN_004c9990
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9991
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 004c9995
    TEST EDX,EDX                        ; 004c999b
    JNZ 0x004c99a1                      ; 004c999d
        ;   XREF to: 004c99a1 (CONDITIONAL_JUMP)  ; LAB_004c99a1
    POP EBX                             ; 004c999f
    RET                                 ; 004c99a0
    MOV ECX,dword ptr [0x007c33e0]      ; 004c99a1 | DAT_007c33e0
        ;   Label: LAB_004c99a1
    PUSH ECX                            ; 004c99a7
    PUSH EDX                            ; 004c99a8
    CALL FUN_0040c600                   ; 004c99a9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004c99ae
    TEST EAX,EAX                        ; 004c99b1
    JZ 0x004c99c5                       ; 004c99b3
        ;   XREF to: 004c99c5 (CONDITIONAL_JUMP)  ; LAB_004c99c5
    LEA EDX,[EBX + 0x1fae8]             ; 004c99b5
    PUSH EDX                            ; 004c99bb
    PUSH EAX                            ; 004c99bc
    CALL FUN_0040e210                   ; 004c99bd
        ;   XREF to: 0040e210 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e210()
    ADD ESP,0x8                         ; 004c99c2
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 004c99c5
        ;   Label: LAB_004c99c5
    POP EBX                             ; 004c99cf
    RET                                 ; 004c99d0

