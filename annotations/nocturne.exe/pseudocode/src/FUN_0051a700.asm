; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051a700(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_004270e0 at 004271c5
;   FUN_0051d9d0 at 0051da28
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_0041d450
;   FUN_00461090
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a700
        ;   Label: FUN_0051a700
    PUSH EBP                            ; 0051a701
    SUB ESP,0x8                         ; 0051a702
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051a705
    MOV EDX,dword ptr [0x005ae704]      ; 0051a709 | DAT_005ae704
    PUSH EDX                            ; 0051a70f | DAT_01b4d738
    CALL FUN_00461090                   ; 0051a710
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined FUN_00461090()
    ADD ESP,0x4                         ; 0051a715
    TEST EAX,EAX                        ; 0051a718
    JNZ 0x0051a727                      ; 0051a71a
        ;   XREF to: 0051a727 (CONDITIONAL_JUMP)  ; LAB_0051a727
    CMP dword ptr [EBX],0x1             ; 0051a71c
    JG 0x0051a72c                       ; 0051a71f
        ;   XREF to: 0051a72c (CONDITIONAL_JUMP)  ; LAB_0051a72c
    ADD ESP,0x8                         ; 0051a721
        ;   Label: LAB_0051a721
    POP EBP                             ; 0051a724
    POP EBX                             ; 0051a725
    RET                                 ; 0051a726
    MOV EAX,dword ptr [EBX]             ; 0051a727
        ;   Label: LAB_0051a727
    DEC EAX                             ; 0051a729
    JMP 0x0051a721                      ; 0051a72a
        ;   XREF to: 0051a721 (UNCONDITIONAL_JUMP)  ; LAB_0051a721
    PUSH ESI                            ; 0051a72c
        ;   Label: LAB_0051a72c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051a72d
    PUSH ESI                            ; 0051a731
    CALL FUN_0041d450                   ; 0051a732
        ;   XREF to: 0041d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d450()
    MOV dword ptr [ESP + 0xc],EAX       ; 0051a737
    MOV ECX,dword ptr [EBX]             ; 0051a73b
    FLD float ptr [ESP + 0xc]           ; 0051a73d
    CALL FUN_00563a30                   ; 0051a741
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    ADD ESP,0x4                         ; 0051a746
    DEC ECX                             ; 0051a749
    FISTP dword ptr [ESP + 0x4]         ; 0051a74a
    TEST ECX,ECX                        ; 0051a74e
    JLE 0x0051a76d                      ; 0051a750
        ;   XREF to: 0051a76d (CONDITIONAL_JUMP)  ; LAB_0051a76d
    LEA EDX,[ECX*0x8 + 0x0]             ; 0051a752
    MOV EBP,dword ptr [ESP + 0x4]       ; 0051a759
    ADD EDX,EBX                         ; 0051a75d
    CMP dword ptr [EDX + 0x8],0x0       ; 0051a75f
        ;   Label: LAB_0051a75f
    JZ 0x0051a776                       ; 0051a763
        ;   XREF to: 0051a776 (CONDITIONAL_JUMP)  ; LAB_0051a776
    DEC ECX                             ; 0051a765
        ;   Label: LAB_0051a765
    SUB EDX,0x8                         ; 0051a766
    TEST ECX,ECX                        ; 0051a769
    JG 0x0051a75f                       ; 0051a76b
        ;   XREF to: 0051a75f (CONDITIONAL_JUMP)  ; LAB_0051a75f
    MOV EAX,ECX                         ; 0051a76d
        ;   Label: LAB_0051a76d
    POP ESI                             ; 0051a76f
    ADD ESP,0x8                         ; 0051a770
    POP EBP                             ; 0051a773
    POP EBX                             ; 0051a774
    RET                                 ; 0051a775
    CMP EBP,dword ptr [EDX + 0x4]       ; 0051a776
        ;   Label: LAB_0051a776
    JL 0x0051a76d                       ; 0051a779
        ;   XREF to: 0051a76d (CONDITIONAL_JUMP)  ; LAB_0051a76d
    JMP 0x0051a765                      ; 0051a77b
        ;   XREF to: 0051a765 (UNCONDITIONAL_JUMP)  ; LAB_0051a765

