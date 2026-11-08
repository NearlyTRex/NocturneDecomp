; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004814c0(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00483e10 at 00483e23
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2796
;   TerminatedCString s_CStrList_swap_invalid_in_005d27ac
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004814c0
        ;   Label: FUN_004814c0
    PUSH ESI                            ; 004814c1
    PUSH EDI                            ; 004814c2
    PUSH EBP                            ; 004814c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004814c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004814c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004814cc
    TEST EDI,EDI                        ; 004814d0
    JL 0x004814da                       ; 004814d2
        ;   XREF to: 004814da (CONDITIONAL_JUMP)  ; LAB_004814da
    MOV EDX,dword ptr [EBX]             ; 004814d4
    CMP EDI,EDX                         ; 004814d6
    JL 0x00481505                       ; 004814d8
        ;   XREF to: 00481505 (CONDITIONAL_JUMP)  ; LAB_00481505
    MOV EBP,0x5d2796                    ; 004814da | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004814da
    MOV EAX,0xcae                       ; 004814df
    PUSH 0x5d27ac                       ; 004814e4 | = "CStrList::swap - invalid indices"
    MOV dword ptr [0x01d046a0],EBP      ; 004814e9 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004814ef | DAT_01d046a4
    CALL FUN_004e4500                   ; 004814f4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004814f9
    CMP EDI,ESI                         ; 004814fc
    JNZ 0x00481516                      ; 004814fe
        ;   XREF to: 00481516 (CONDITIONAL_JUMP)  ; LAB_00481516
    POP EBP                             ; 00481500
    POP EDI                             ; 00481501
    POP ESI                             ; 00481502
    POP EBX                             ; 00481503
    RET                                 ; 00481504
    TEST ESI,ESI                        ; 00481505
        ;   Label: LAB_00481505
    JL 0x004814da                       ; 00481507
        ;   XREF to: 004814da (CONDITIONAL_JUMP)  ; LAB_004814da
    CMP ESI,EDX                         ; 00481509
    JGE 0x004814da                      ; 0048150b
        ;   XREF to: 004814da (CONDITIONAL_JUMP)  ; LAB_004814da
    CMP EDI,ESI                         ; 0048150d
    JNZ 0x00481516                      ; 0048150f
        ;   XREF to: 00481516 (CONDITIONAL_JUMP)  ; LAB_00481516
    POP EBP                             ; 00481511
    POP EDI                             ; 00481512
    POP ESI                             ; 00481513
    POP EBX                             ; 00481514
    RET                                 ; 00481515
    LEA EAX,[EDI*0x4 + 0x0]             ; 00481516
        ;   Label: LAB_00481516
    MOV ECX,dword ptr [EBX + 0x8]       ; 0048151d
    ADD EAX,ECX                         ; 00481520
    MOV ECX,dword ptr [ECX + ESI*0x4]   ; 00481522
    MOV EDI,dword ptr [EAX]             ; 00481525
    MOV dword ptr [EAX],ECX             ; 00481527
    MOV EAX,dword ptr [EBX + 0x8]       ; 00481529
    MOV dword ptr [EAX + ESI*0x4],EDI   ; 0048152c
    POP EBP                             ; 0048152f
    POP EDI                             ; 00481530
    POP ESI                             ; 00481531
    POP EBX                             ; 00481532
    RET                                 ; 00481533

