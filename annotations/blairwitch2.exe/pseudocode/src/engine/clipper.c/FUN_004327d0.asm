; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_004327d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004327d0
        ;   Label: engine_clipper.c_FUN_004327d0
    PUSH ESI                            ; 004327d1
    PUSH EDI                            ; 004327d2
    PUSH EBP                            ; 004327d3
    MOV ESI,dword ptr [0x007bee30]      ; 004327d4 | DAT_007bee30
    MOV EAX,0x7bee34                    ; 004327da
    XOR ECX,ECX                         ; 004327df
    TEST ESI,ESI                        ; 004327e1
    JLE 0x004327fd                      ; 004327e3
        ;   XREF to: 004327fd (CONDITIONAL_JUMP)  ; LAB_004327fd
    MOV EDX,dword ptr [EAX + 0x8]       ; 004327e5
        ;   Label: LAB_004327e5
    TEST EDX,EDX                        ; 004327e8
    JZ 0x00432808                       ; 004327ea
        ;   XREF to: 00432808 (CONDITIONAL_JUMP)  ; LAB_00432808
    MOV EBX,dword ptr [EAX + 0x8]       ; 004327ec
    CMP EBX,dword ptr [EAX]             ; 004327ef
    JGE 0x00432816                      ; 004327f1
        ;   XREF to: 00432816 (CONDITIONAL_JUMP)  ; LAB_00432816
    MOV dword ptr [EAX],EBX             ; 004327f3
    INC ECX                             ; 004327f5
        ;   Label: LAB_004327f5
    ADD EAX,0x30                        ; 004327f6
    CMP ECX,ESI                         ; 004327f9
    JL 0x004327e5                       ; 004327fb
        ;   XREF to: 004327e5 (CONDITIONAL_JUMP)  ; LAB_004327e5
    MOV dword ptr [0x007bee30],ESI      ; 004327fd | DAT_007bee30
        ;   Label: LAB_004327fd
    POP EBP                             ; 00432803
    POP EDI                             ; 00432804
    POP ESI                             ; 00432805
    POP EBX                             ; 00432806
    RET                                 ; 00432807
    MOV dword ptr [EAX + 0x8],0x1       ; 00432808
        ;   Label: LAB_00432808
    MOV dword ptr [EAX],EDX             ; 0043280f
    MOV dword ptr [EAX + 0x4],EDX       ; 00432811
    JMP 0x004327f5                      ; 00432814
        ;   XREF to: 004327f5 (UNCONDITIONAL_JUMP)  ; LAB_004327f5
    MOV EDX,EBX                         ; 00432816
        ;   Label: LAB_00432816
    MOV EDI,dword ptr [EAX]             ; 00432818
    NEG EDX                             ; 0043281a
    CMP EDX,EDI                         ; 0043281c
    JLE 0x00432824                      ; 0043281e
        ;   XREF to: 00432824 (CONDITIONAL_JUMP)  ; LAB_00432824
    MOV dword ptr [EAX],EDX             ; 00432820
    JMP 0x004327f5                      ; 00432822
        ;   XREF to: 004327f5 (UNCONDITIONAL_JUMP)  ; LAB_004327f5
    MOV EBP,dword ptr [EAX + 0x8]       ; 00432824
        ;   Label: LAB_00432824
    MOV EBX,dword ptr [EAX + 0x4]       ; 00432827
    CMP EBX,EBP                         ; 0043282a
    JLE 0x00432833                      ; 0043282c
        ;   XREF to: 00432833 (CONDITIONAL_JUMP)  ; LAB_00432833
    MOV dword ptr [EAX + 0x4],EBP       ; 0043282e
    JMP 0x004327f5                      ; 00432831
        ;   XREF to: 004327f5 (UNCONDITIONAL_JUMP)  ; LAB_004327f5
    CMP EDX,EBX                         ; 00432833
        ;   Label: LAB_00432833
    JLE 0x004327f5                      ; 00432835
        ;   XREF to: 004327f5 (CONDITIONAL_JUMP)  ; LAB_004327f5
    MOV dword ptr [EAX + 0x4],EDX       ; 00432837
    JMP 0x004327f5                      ; 0043283a
        ;   XREF to: 004327f5 (UNCONDITIONAL_JUMP)  ; LAB_004327f5

