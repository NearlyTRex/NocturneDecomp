; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_perspectiveDivideVertices_FUN_0043d630(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c7554
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d630
        ;   Label: engine_clipper.c_perspectiveDivideVertices_FUN_0043d630
    PUSH ESI                            ; 0043d631
    PUSH EDI                            ; 0043d632
    PUSH EBP                            ; 0043d633
    MOV ESI,dword ptr [0x007c7554]      ; 0043d634 | DAT_007c7554
    MOV EAX,0x7c7558                    ; 0043d63a
    XOR ECX,ECX                         ; 0043d63f
    TEST ESI,ESI                        ; 0043d641
    JLE 0x0043d65d                      ; 0043d643
        ;   XREF to: 0043d65d (CONDITIONAL_JUMP)  ; LAB_0043d65d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043d645
        ;   Label: LAB_0043d645
    TEST EDX,EDX                        ; 0043d648
    JZ 0x0043d668                       ; 0043d64a
        ;   XREF to: 0043d668 (CONDITIONAL_JUMP)  ; LAB_0043d668
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043d64c
    CMP EBX,dword ptr [EAX]             ; 0043d64f
    JGE 0x0043d676                      ; 0043d651
        ;   XREF to: 0043d676 (CONDITIONAL_JUMP)  ; LAB_0043d676
    MOV dword ptr [EAX],EBX             ; 0043d653
    INC ECX                             ; 0043d655
        ;   Label: LAB_0043d655
    ADD EAX,0x30                        ; 0043d656
    CMP ECX,ESI                         ; 0043d659
    JL 0x0043d645                       ; 0043d65b
        ;   XREF to: 0043d645 (CONDITIONAL_JUMP)  ; LAB_0043d645
    MOV dword ptr [0x007c7554],ESI      ; 0043d65d | DAT_007c7554
        ;   Label: LAB_0043d65d
    POP EBP                             ; 0043d663
    POP EDI                             ; 0043d664
    POP ESI                             ; 0043d665
    POP EBX                             ; 0043d666
    RET                                 ; 0043d667
    MOV dword ptr [EAX + 0x8],0x1       ; 0043d668
        ;   Label: LAB_0043d668
    MOV dword ptr [EAX],EDX             ; 0043d66f
    MOV dword ptr [EAX + 0x4],EDX       ; 0043d671
    JMP 0x0043d655                      ; 0043d674
        ;   XREF to: 0043d655 (UNCONDITIONAL_JUMP)  ; LAB_0043d655
    MOV EDX,EBX                         ; 0043d676
        ;   Label: LAB_0043d676
    MOV EDI,dword ptr [EAX]             ; 0043d678
    NEG EDX                             ; 0043d67a
    CMP EDX,EDI                         ; 0043d67c
    JLE 0x0043d684                      ; 0043d67e
        ;   XREF to: 0043d684 (CONDITIONAL_JUMP)  ; LAB_0043d684
    MOV dword ptr [EAX],EDX             ; 0043d680
    JMP 0x0043d655                      ; 0043d682
        ;   XREF to: 0043d655 (UNCONDITIONAL_JUMP)  ; LAB_0043d655
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043d684
        ;   Label: LAB_0043d684
    MOV EBX,dword ptr [EAX + 0x4]       ; 0043d687
    CMP EBX,EBP                         ; 0043d68a
    JLE 0x0043d693                      ; 0043d68c
        ;   XREF to: 0043d693 (CONDITIONAL_JUMP)  ; LAB_0043d693
    MOV dword ptr [EAX + 0x4],EBP       ; 0043d68e
    JMP 0x0043d655                      ; 0043d691
        ;   XREF to: 0043d655 (UNCONDITIONAL_JUMP)  ; LAB_0043d655
    CMP EDX,EBX                         ; 0043d693
        ;   Label: LAB_0043d693
    JLE 0x0043d655                      ; 0043d695
        ;   XREF to: 0043d655 (CONDITIONAL_JUMP)  ; LAB_0043d655
    MOV dword ptr [EAX + 0x4],EDX       ; 0043d697
    JMP 0x0043d655                      ; 0043d69a
        ;   XREF to: 0043d655 (UNCONDITIONAL_JUMP)  ; LAB_0043d655

