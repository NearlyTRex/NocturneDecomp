; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005a3660(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   crt_memory.c_malloc_FUN_005a3650 at 005a3655
;   crt_unknown.c_FUN_005a3e68 at 005a3e79
;   crt_unknown.c_FUN_005ace10 at 005ace3d
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;   undefined4 DAT_006075c8
;   undefined4 DAT_006075cc
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079bc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079c4 = 005a7f44
;   undefined4 DAT_02d258e0
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9510
;   crt_unknown.c_FUN_005a9818
;   crt_unknown.c_FUN_005a9880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3660
        ;   Label: crt_unknown.c_InternalHeapAlloc_FUN_005a3660
    PUSH ESI                            ; 005a3661
    PUSH EDI                            ; 005a3662
    PUSH ES                             ; 005a3663
    PUSH FS                             ; 005a3664
    PUSH GS                             ; 005a3666
    PUSH EBP                            ; 005a3668
    SUB ESP,0xc                         ; 005a3669
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005a366c
    TEST EBP,EBP                        ; 005a3670
    JZ 0x005a3679                       ; 005a3672
        ;   XREF to: 005a3679 (CONDITIONAL_JUMP)  ; LAB_005a3679
    CMP EBP,-0x2c                       ; 005a3674
    JBE 0x005a3680                      ; 005a3677
        ;   XREF to: 005a3680 (CONDITIONAL_JUMP)  ; LAB_005a3680
    XOR EAX,EAX                         ; 005a3679
        ;   Label: LAB_005a3679
    JMP 0x005a3761                      ; 005a367b
        ;   XREF to: 005a3761 (UNCONDITIONAL_JUMP)  ; LAB_005a3761
    LEA EAX,[EBP + 0xb]                 ; 005a3680
        ;   Label: LAB_005a3680
    AND AL,0xf8                         ; 005a3683
    MOV dword ptr [ESP + 0x4],EAX       ; 005a3685
    CMP EAX,0x10                        ; 005a3689
    JNC 0x005a3696                      ; 005a368c
        ;   XREF to: 005a3696 (CONDITIONAL_JUMP)  ; LAB_005a3696
    MOV dword ptr [ESP + 0x4],0x10      ; 005a368e
    CALL dword ptr [0x006079bc]         ; 005a3696 | PTR_crt_unknown.c_FUN_005a7f44_006079bc
        ;   Label: LAB_005a3696
    XOR ECX,ECX                         ; 005a369c
    XOR AH,AH                           ; 005a369e
    MOV dword ptr [ESP],ECX             ; 005a36a0
    MOV byte ptr [ESP + 0x8],AH         ; 005a36a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a36a7
        ;   Label: LAB_005a36a7
    CMP EAX,dword ptr [0x006075cc]      ; 005a36ab | DAT_006075cc
    JBE 0x005a36cb                      ; 005a36b1
        ;   XREF to: 005a36cb (CONDITIONAL_JUMP)  ; LAB_005a36cb
    MOV ESI,dword ptr [0x006075c8]      ; 005a36b3 | DAT_006075c8
    TEST ESI,ESI                        ; 005a36b9
    JNZ 0x005a36d9                      ; 005a36bb
        ;   XREF to: 005a36d9 (CONDITIONAL_JUMP)  ; LAB_005a36d9
    MOV dword ptr [0x006075cc],ESI      ; 005a36bd | DAT_006075cc
    MOV ESI,dword ptr [0x006075c4]      ; 005a36c3 | DAT_006075c4
    JMP 0x005a36d9                      ; 005a36c9
        ;   XREF to: 005a36d9 (UNCONDITIONAL_JUMP)  ; LAB_005a36d9
    XOR EDI,EDI                         ; 005a36cb
        ;   Label: LAB_005a36cb
    MOV ESI,dword ptr [0x006075c4]      ; 005a36cd | DAT_006075c4
    MOV dword ptr [0x006075cc],EDI      ; 005a36d3 | DAT_006075cc
    TEST ESI,ESI                        ; 005a36d9
        ;   Label: LAB_005a36d9
    JZ 0x005a371a                       ; 005a36db
        ;   XREF to: 005a371a (CONDITIONAL_JUMP)  ; LAB_005a371a
    MOV EDI,dword ptr [ESI + 0x14]      ; 005a36dd
    MOV dword ptr [0x006075c8],ESI      ; 005a36e0 | DAT_006075c8
    CMP EDI,EBP                         ; 005a36e6
    JC 0x005a3707                       ; 005a36e8
        ;   XREF to: 005a3707 (CONDITIONAL_JUMP)  ; LAB_005a3707
    MOV EAX,0x6075c4                    ; 005a36ea | DAT_006075c4
    MOV DX,DS                           ; 005a36ef
    AND EDX,0xffff                      ; 005a36f1
    MOV EBX,ESI                         ; 005a36f7
    MOV EAX,EBP                         ; 005a36f9
    CALL crt_unknown.c_FUN_005a9510     ; 005a36fb
        ;   XREF to: 005a9510 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9510()
    MOV dword ptr [ESP],EAX             ; 005a3700
    TEST EAX,EAX                        ; 005a3703
    JNZ 0x005a3750                      ; 005a3705
        ;   XREF to: 005a3750 (CONDITIONAL_JUMP)  ; LAB_005a3750
    CMP EDI,dword ptr [0x006075cc]      ; 005a3707 | DAT_006075cc
        ;   Label: LAB_005a3707
    JBE 0x005a3715                      ; 005a370d
        ;   XREF to: 005a3715 (CONDITIONAL_JUMP)  ; LAB_005a3715
    MOV dword ptr [0x006075cc],EDI      ; 005a370f | DAT_006075cc
    MOV ESI,dword ptr [ESI + 0x8]       ; 005a3715
        ;   Label: LAB_005a3715
    JMP 0x005a36d9                      ; 005a3718
        ;   XREF to: 005a36d9 (UNCONDITIONAL_JUMP)  ; LAB_005a36d9
    CMP byte ptr [ESP + 0x8],0x0        ; 005a371a
        ;   Label: LAB_005a371a
    JNZ 0x005a372e                      ; 005a371f
        ;   XREF to: 005a372e (CONDITIONAL_JUMP)  ; LAB_005a372e
    PUSH EBP                            ; 005a3721
    CALL crt_unknown.c_FUN_005a9818     ; 005a3722
        ;   XREF to: 005a9818 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9818()
    ADD ESP,0x4                         ; 005a3727
    TEST EAX,EAX                        ; 005a372a
    JNZ 0x005a3746                      ; 005a372c
        ;   XREF to: 005a3746 (CONDITIONAL_JUMP)  ; LAB_005a3746
    PUSH EBP                            ; 005a372e
        ;   Label: LAB_005a372e
    CALL crt_unknown.c_FUN_005a9880     ; 005a372f
        ;   XREF to: 005a9880 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9880()
    ADD ESP,0x4                         ; 005a3734
    TEST EAX,EAX                        ; 005a3737
    JZ 0x005a3750                       ; 005a3739
        ;   XREF to: 005a3750 (CONDITIONAL_JUMP)  ; LAB_005a3750
    XOR BL,BL                           ; 005a373b
    MOV byte ptr [ESP + 0x8],BL         ; 005a373d
    JMP 0x005a36a7                      ; 005a3741
        ;   XREF to: 005a36a7 (UNCONDITIONAL_JUMP)  ; LAB_005a36a7
    MOV byte ptr [ESP + 0x8],0x1        ; 005a3746
        ;   Label: LAB_005a3746
    JMP 0x005a36a7                      ; 005a374b
        ;   XREF to: 005a36a7 (UNCONDITIONAL_JUMP)  ; LAB_005a36a7
    XOR BH,BH                           ; 005a3750
        ;   Label: LAB_005a3750
    MOV byte ptr [0x02d258e0],BH        ; 005a3752 | DAT_02d258e0
    CALL dword ptr [0x006079c4]         ; 005a3758 | PTR_crt_unknown.c_FUN_005a7f44_006079c4
    MOV EAX,dword ptr [ESP]             ; 005a375e
    ADD ESP,0xc                         ; 005a3761
        ;   Label: LAB_005a3761
    POP EBP                             ; 005a3764
    POP GS                              ; 005a3765
    POP FS                              ; 005a3767
    POP ES                              ; 005a3769
    POP EDI                             ; 005a376a
    POP ESI                             ; 005a376b
    POP EBX                             ; 005a376c
    RET                                 ; 005a376d

