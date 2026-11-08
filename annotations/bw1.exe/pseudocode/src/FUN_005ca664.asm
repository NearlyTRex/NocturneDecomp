; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005ca664(int param_1,undefined1 *param_2,int param_3)
;
;
; Called Functions:
;   FUN_005ca610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca664
        ;   Label: FUN_005ca664
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ca665
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ca669
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ca66d
    MOV EDX,EBX                         ; 005ca671
    CMP ECX,0xa                         ; 005ca673
    JNZ 0x005ca684                      ; 005ca676
        ;   XREF to: 005ca684 (CONDITIONAL_JUMP)  ; LAB_005ca684
    TEST EAX,EAX                        ; 005ca678
    JGE 0x005ca684                      ; 005ca67a
        ;   XREF to: 005ca684 (CONDITIONAL_JUMP)  ; LAB_005ca684
    NEG EAX                             ; 005ca67c
    LEA EDX,[EBX + 0x1]                 ; 005ca67e
    MOV byte ptr [EBX],0x2d             ; 005ca681
    PUSH ECX                            ; 005ca684
        ;   Label: LAB_005ca684
    PUSH EDX                            ; 005ca685
    PUSH EAX                            ; 005ca686
    CALL FUN_005ca610                   ; 005ca687
        ;   XREF to: 005ca610 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca610()
    ADD ESP,0xc                         ; 005ca68c
    MOV EAX,EBX                         ; 005ca68f
    POP EBX                             ; 005ca691
    RET                                 ; 005ca692

