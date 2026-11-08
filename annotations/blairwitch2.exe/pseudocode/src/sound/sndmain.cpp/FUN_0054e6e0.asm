; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0054e6e0(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0054e8c0 at 0054ea7c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e856a
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005e857f
;   undefined4 DAT_005e85a2
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264901c
;
; Called Functions:
;   FUN_004e4500
;   FUN_00551190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e6e0
        ;   Label: FUN_0054e6e0
    PUSH ESI                            ; 0054e6e1
    PUSH EBP                            ; 0054e6e2
    SUB ESP,0x1c                        ; 0054e6e3
    MOV ESI,dword ptr [0x0061bc9c]      ; 0054e6e6 | DAT_0061bc9c
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0054e6ec
    CMP dword ptr [0x0264901c],0x0      ; 0054e6f0 | DAT_0264901c
    JLE 0x0054e74d                      ; 0054e6f7
        ;   XREF to: 0054e74d (CONDITIONAL_JUMP)  ; LAB_0054e74d
    MOV EBP,dword ptr [EBX]             ; 0054e6f9
        ;   Label: LAB_0054e6f9
    PUSH EBP                            ; 0054e6fb
    CALL FUN_00551190                   ; 0054e6fc
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined FUN_00551190()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054e701
    FLD float ptr [ESP + 0x1c]          ; 0054e705
    FMUL float ptr [EBX + 0x38]         ; 0054e709
    ADD ESP,0x4                         ; 0054e70c
    MOV AH,byte ptr [EBX + 0x4c]        ; 0054e70f
    FSTP float ptr [ESP]                ; 0054e712
    TEST AH,0x1                         ; 0054e715
    JZ 0x0054e774                       ; 0054e718
        ;   XREF to: 0054e774 (CONDITIONAL_JUMP)  ; LAB_0054e774
    MOV ESI,dword ptr [0x0061bc9c]      ; 0054e71a | DAT_0061bc9c
    XOR EDX,EDX                         ; 0054e720
    TEST ESI,ESI                        ; 0054e722
    JLE 0x0054e740                      ; 0054e724
        ;   XREF to: 0054e740 (CONDITIONAL_JUMP)  ; LAB_0054e740
    MOV EAX,dword ptr [ESP]             ; 0054e726
    ADD EBX,0x4                         ; 0054e729
        ;   Label: LAB_0054e729
    INC EDX                             ; 0054e72c
    MOV dword ptr [EBX + 0x8c],EAX      ; 0054e72d
    CMP EDX,ESI                         ; 0054e733
    JL 0x0054e729                       ; 0054e735
        ;   XREF to: 0054e729 (CONDITIONAL_JUMP)  ; LAB_0054e729
    LEA EAX,[EAX]                       ; 0054e737
    LEA EDX,[EDX]                       ; 0054e73d
    MOV dword ptr [0x0061bc9c],ESI      ; 0054e740 | DAT_0061bc9c
        ;   Label: LAB_0054e740
    ADD ESP,0x1c                        ; 0054e746
    POP EBP                             ; 0054e749
    POP ESI                             ; 0054e74a
    POP EBX                             ; 0054e74b
    RET                                 ; 0054e74c
    PUSH EDI                            ; 0054e74d
        ;   Label: LAB_0054e74d
    MOV ECX,0x5e856a                    ; 0054e74e | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xa98                       ; 0054e753
    PUSH 0x5e857f                       ; 0054e758 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054e75d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0054e763 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054e769
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054e76e
    POP EDI                             ; 0054e771
    JMP 0x0054e6f9                      ; 0054e772
        ;   XREF to: 0054e6f9 (UNCONDITIONAL_JUMP)  ; LAB_0054e6f9
    MOV ESI,dword ptr [0x0061bc9c]      ; 0054e774 | DAT_0061bc9c
        ;   Label: LAB_0054e774
    XOR ECX,ECX                         ; 0054e77a
    TEST ESI,ESI                        ; 0054e77c
    JLE 0x0054e740                      ; 0054e77e
        ;   XREF to: 0054e740 (CONDITIONAL_JUMP)  ; LAB_0054e740
    MOV EDX,EBX                         ; 0054e780
    MOV EAX,dword ptr [EDX + 0x70]      ; 0054e782
        ;   Label: LAB_0054e782
    MOV dword ptr [ESP + 0x14],EAX      ; 0054e785
    MOV EAX,dword ptr [EBX + 0xf0]      ; 0054e789
    MOV dword ptr [ESP + 0xc],EAX       ; 0054e78f
    MOV EAX,dword ptr [EBX + 0xf4]      ; 0054e793
    MOV dword ptr [ESP + 0x4],EAX       ; 0054e799
    MOV EAX,dword ptr [EBX + 0xf8]      ; 0054e79d
    FLD float ptr [ESP + 0x14]          ; 0054e7a3
    MOV dword ptr [ESP + 0x10],EAX      ; 0054e7a7
    FCOMP float ptr [ESP + 0x4]         ; 0054e7ab
    FNSTSW AX                           ; 0054e7af
    SAHF                                ; 0054e7b1
    JC 0x0054e7ff                       ; 0054e7b2
        ;   XREF to: 0054e7ff (CONDITIONAL_JUMP)  ; LAB_0054e7ff
    FLD float ptr [ESP + 0x14]          ; 0054e7b4
        ;   Label: LAB_0054e7b4
    FCOMP float ptr [ESP + 0x10]        ; 0054e7b8
    FNSTSW AX                           ; 0054e7bc
    SAHF                                ; 0054e7be
    JBE 0x0054e7c9                      ; 0054e7bf
        ;   XREF to: 0054e7c9 (CONDITIONAL_JUMP)  ; LAB_0054e7c9
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e7c1
    MOV dword ptr [ESP + 0x14],EAX      ; 0054e7c5
    FLD float ptr [ESP + 0xc]           ; 0054e7c9
        ;   Label: LAB_0054e7c9
    FMUL float ptr [0x005e85a2]         ; 0054e7cd | DAT_005e85a2
    FCOMP float ptr [ESP + 0x14]        ; 0054e7d3
    FNSTSW AX                           ; 0054e7d7
    SAHF                                ; 0054e7d9
    JC 0x0054e809                       ; 0054e7da
        ;   XREF to: 0054e809 (CONDITIONAL_JUMP)  ; LAB_0054e809
    MOV dword ptr [ESP + 0x8],0x41a00000 ; 0054e7dc
    FLD float ptr [ESP]                 ; 0054e7e4
        ;   Label: LAB_0054e7e4
    FMUL float ptr [ESP + 0x8]          ; 0054e7e7
    ADD EDX,0x4                         ; 0054e7eb
    INC ECX                             ; 0054e7ee
    FSTP float ptr [EDX + 0x8c]         ; 0054e7ef
    CMP ECX,ESI                         ; 0054e7f5
    JGE 0x0054e740                      ; 0054e7f7
        ;   XREF to: 0054e740 (CONDITIONAL_JUMP)  ; LAB_0054e740
    JMP 0x0054e782                      ; 0054e7fd
        ;   XREF to: 0054e782 (UNCONDITIONAL_JUMP)  ; LAB_0054e782
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e7ff
        ;   Label: LAB_0054e7ff
    MOV dword ptr [ESP + 0x14],EAX      ; 0054e803
    JMP 0x0054e7b4                      ; 0054e807
        ;   XREF to: 0054e7b4 (UNCONDITIONAL_JUMP)  ; LAB_0054e7b4
    FLD float ptr [ESP + 0xc]           ; 0054e809
        ;   Label: LAB_0054e809
    FDIV float ptr [ESP + 0x14]         ; 0054e80d
    FSTP float ptr [ESP + 0x8]          ; 0054e811
    JMP 0x0054e7e4                      ; 0054e815
        ;   XREF to: 0054e7e4 (UNCONDITIONAL_JUMP)  ; LAB_0054e7e4

