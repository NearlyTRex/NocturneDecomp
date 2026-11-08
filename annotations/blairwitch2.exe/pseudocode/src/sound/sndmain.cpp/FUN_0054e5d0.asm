; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e5d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0054e8c0 at 0054ea4b
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8535
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005e854a
;   undefined4 DAT_005fbc18
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bca0
;   undefined4 DAT_0061bcb4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264901c
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e5d0
        ;   Label: FUN_0054e5d0
    PUSH ESI                            ; 0054e5d1
    PUSH EDI                            ; 0054e5d2
    SUB ESP,0x8                         ; 0054e5d3
    MOV ESI,dword ptr [0x0061bc9c]      ; 0054e5d6 | DAT_0061bc9c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0054e5dc
    CMP dword ptr [0x0264901c],0x0      ; 0054e5e0 | DAT_0264901c
    JLE 0x0054e62d                      ; 0054e5e7
        ;   XREF to: 0054e62d (CONDITIONAL_JUMP)  ; LAB_0054e62d
    MOV ESI,dword ptr [0x0061bc9c]      ; 0054e5e9 | DAT_0061bc9c
        ;   Label: LAB_0054e5e9
    CMP ESI,0x2                         ; 0054e5ef
    JL 0x0054e652                       ; 0054e5f2
        ;   XREF to: 0054e652 (CONDITIONAL_JUMP)  ; LAB_0054e652
    TEST byte ptr [EDI + 0x4c],0x1      ; 0054e5f4
    JZ 0x0054e65e                       ; 0054e5f8
        ;   XREF to: 0054e65e (CONDITIONAL_JUMP)  ; LAB_0054e65e
    XOR EDX,EDX                         ; 0054e5fa
    TEST ESI,ESI                        ; 0054e5fc
    JLE 0x0054e620                      ; 0054e5fe
        ;   XREF to: 0054e620 (CONDITIONAL_JUMP)  ; LAB_0054e620
    MOV EAX,EDI                         ; 0054e600
    ADD EAX,0x4                         ; 0054e602
        ;   Label: LAB_0054e602
    INC EDX                             ; 0054e605
    MOV dword ptr [EAX + 0xac],0x0      ; 0054e606
    CMP EDX,ESI                         ; 0054e610
    JL 0x0054e602                       ; 0054e612
        ;   XREF to: 0054e602 (CONDITIONAL_JUMP)  ; LAB_0054e602
    LEA EAX,[EAX]                       ; 0054e614
    LEA EDX,[EDX]                       ; 0054e61a
    MOV dword ptr [0x0061bc9c],ESI      ; 0054e620 | DAT_0061bc9c
        ;   Label: LAB_0054e620
    ADD ESP,0x8                         ; 0054e626
    POP EDI                             ; 0054e629
    POP ESI                             ; 0054e62a
    POP EBX                             ; 0054e62b
    RET                                 ; 0054e62c
    MOV ECX,0x5e8535                    ; 0054e62d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054e62d
    MOV EBX,0xa69                       ; 0054e632
    PUSH 0x5e854a                       ; 0054e637 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054e63c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054e642 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054e648
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054e64d
    JMP 0x0054e5e9                      ; 0054e650
        ;   XREF to: 0054e5e9 (UNCONDITIONAL_JUMP)  ; LAB_0054e5e9
    MOV dword ptr [EDI + 0xb0],0x0      ; 0054e652
        ;   Label: LAB_0054e652
    JMP 0x0054e620                      ; 0054e65c
        ;   XREF to: 0054e620 (UNCONDITIONAL_JUMP)  ; LAB_0054e620
    FLD1                                ; 0054e65e
        ;   Label: LAB_0054e65e
    FDIV float ptr [0x005fbc18]         ; 0054e660 | DAT_005fbc18
    FMUL float ptr [0x0061bcb4]         ; 0054e666 | DAT_0061bcb4
    FILD dword ptr [0x0061bca0]         ; 0054e66c | DAT_0061bca0
    FMULP                               ; 0054e672
    MOV EBX,0x1869f                     ; 0054e674
    XOR ECX,ECX                         ; 0054e679
    FSTP float ptr [ESP + 0x4]          ; 0054e67b
    TEST ESI,ESI                        ; 0054e67f
    JLE 0x0054e6ab                      ; 0054e681
        ;   XREF to: 0054e6ab (CONDITIONAL_JUMP)  ; LAB_0054e6ab
    MOV EDX,EDI                         ; 0054e683
    FLD float ptr [EDX + 0x70]          ; 0054e685
        ;   Label: LAB_0054e685
    FMUL float ptr [ESP + 0x4]          ; 0054e688
    CALL FUN_005b7ff0                   ; 0054e68c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0054e691
    MOV EAX,dword ptr [ESP]             ; 0054e694
    MOV dword ptr [EDX + 0xb0],EAX      ; 0054e697
    CMP EBX,EAX                         ; 0054e69d
    JLE 0x0054e6a3                      ; 0054e69f
        ;   XREF to: 0054e6a3 (CONDITIONAL_JUMP)  ; LAB_0054e6a3
    MOV EBX,EAX                         ; 0054e6a1
    INC ECX                             ; 0054e6a3
        ;   Label: LAB_0054e6a3
    ADD EDX,0x4                         ; 0054e6a4
    CMP ECX,ESI                         ; 0054e6a7
    JL 0x0054e685                       ; 0054e6a9
        ;   XREF to: 0054e685 (CONDITIONAL_JUMP)  ; LAB_0054e685
    XOR EDX,EDX                         ; 0054e6ab
        ;   Label: LAB_0054e6ab
    TEST ESI,ESI                        ; 0054e6ad
    JLE 0x0054e620                      ; 0054e6af
        ;   XREF to: 0054e620 (CONDITIONAL_JUMP)  ; LAB_0054e620
    MOV EAX,EDI                         ; 0054e6b5
    MOV ECX,dword ptr [EAX + 0xb0]      ; 0054e6b7
        ;   Label: LAB_0054e6b7
    ADD EAX,0x4                         ; 0054e6bd
    SUB ECX,EBX                         ; 0054e6c0
    INC EDX                             ; 0054e6c2
    MOV dword ptr [EAX + 0xac],ECX      ; 0054e6c3
    CMP EDX,ESI                         ; 0054e6c9
    JL 0x0054e6b7                       ; 0054e6cb
        ;   XREF to: 0054e6b7 (CONDITIONAL_JUMP)  ; LAB_0054e6b7
    MOV dword ptr [0x0061bc9c],ESI      ; 0054e6cd | DAT_0061bc9c
    ADD ESP,0x8                         ; 0054e6d3
    POP EDI                             ; 0054e6d6
    POP ESI                             ; 0054e6d7
    POP EBX                             ; 0054e6d8
    RET                                 ; 0054e6d9

