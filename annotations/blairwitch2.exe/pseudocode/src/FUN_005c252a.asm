; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005c252a(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005c2568 at 005c2597
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c252a
        ;   Label: FUN_005c252a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c252b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c252f
    MOV ECX,EAX                         ; 005c2533
    CMP EDX,0x14                        ; 005c2535
    JGE 0x005c2564                      ; 005c2538
        ;   XREF to: 005c2564 (CONDITIONAL_JUMP)  ; LAB_005c2564
    MOV BL,byte ptr [EAX]               ; 005c253a
    INC BL                              ; 005c253c
    AND EBX,0xff                        ; 005c253e
    TEST byte ptr [EBX + 0x61ed94],0x20 ; 005c2544
    JZ 0x005c2564                       ; 005c254b
        ;   XREF to: 005c2564 (CONDITIONAL_JUMP)  ; LAB_005c2564
    CMP byte ptr [EAX],0x0              ; 005c254d
        ;   Label: LAB_005c254d
    JZ 0x005c2556                       ; 005c2550
        ;   XREF to: 005c2556 (CONDITIONAL_JUMP)  ; LAB_005c2556
    INC EAX                             ; 005c2552
    DEC EDX                             ; 005c2553
    JMP 0x005c254d                      ; 005c2554
        ;   XREF to: 005c254d (UNCONDITIONAL_JUMP)  ; LAB_005c254d
    TEST EDX,EDX                        ; 005c2556
        ;   Label: LAB_005c2556
    JLE 0x005c2561                      ; 005c2558
        ;   XREF to: 005c2561 (CONDITIONAL_JUMP)  ; LAB_005c2561
    DEC EDX                             ; 005c255a
    MOV byte ptr [EAX],0x30             ; 005c255b
    INC EAX                             ; 005c255e
    JMP 0x005c2556                      ; 005c255f
        ;   XREF to: 005c2556 (UNCONDITIONAL_JUMP)  ; LAB_005c2556
    MOV byte ptr [EAX],0x0              ; 005c2561
        ;   Label: LAB_005c2561
    MOV EAX,ECX                         ; 005c2564
        ;   Label: LAB_005c2564
    POP EBX                             ; 005c2566
    RET                                 ; 005c2567

