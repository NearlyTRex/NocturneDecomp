; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_0042a3d0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_00422930 at 00422b06
;
; Called Functions:
;   core_motion.cpp_FUN_00502f10
;   core_motion.cpp_FUN_00503860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a3d0
        ;   Label: core_charactr.cpp_FUN_0042a3d0
    PUSH ESI                            ; 0042a3d1
    PUSH EDI                            ; 0042a3d2
    PUSH EBP                            ; 0042a3d3
    SUB ESP,0x18                        ; 0042a3d4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a3d7
    CMP byte ptr [EAX + 0x2514],0x0     ; 0042a3db
    JZ 0x0042a563                       ; 0042a3e2
        ;   XREF to: 0042a563 (CONDITIONAL_JUMP)  ; LAB_0042a563
    ADD EAX,0x58                        ; 0042a3e8
    XOR EBX,EBX                         ; 0042a3eb
    IMUL EDX,EBX,0x58                   ; 0042a3ed
        ;   Label: LAB_0042a3ed
    ADD EDX,dword ptr [ESP + 0x2c]      ; 0042a3f0
    MOV ECX,EAX                         ; 0042a3f4
    ADD EDX,0x4                         ; 0042a3f6
        ;   Label: LAB_0042a3f6
    MOV dword ptr [EDX + 0x1022c],0x501502f9 ; 0042a3f9
    CMP EDX,ECX                         ; 0042a403
    JNZ 0x0042a3f6                      ; 0042a405
        ;   XREF to: 0042a3f6 (CONDITIONAL_JUMP)  ; LAB_0042a3f6
    INC EBX                             ; 0042a407
    ADD EAX,0x58                        ; 0042a408
    CMP EBX,0x16                        ; 0042a40b
    JL 0x0042a3ed                       ; 0042a40e
        ;   XREF to: 0042a3ed (CONDITIONAL_JUMP)  ; LAB_0042a3ed
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a410
    ADD EAX,0x2b4                       ; 0042a414
    PUSH EAX                            ; 0042a419
    CALL core_motion.cpp_FUN_00503860   ; 0042a41a
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042a41f
    MOV EDI,EAX                         ; 0042a422
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a424
    MOV EBX,dword ptr [EAX + 0x2830]    ; 0042a428
    XOR ESI,ESI                         ; 0042a42e
    TEST EBX,EBX                        ; 0042a430
    JLE 0x0042a4c2                      ; 0042a432
        ;   XREF to: 0042a4c2 (CONDITIONAL_JUMP)  ; LAB_0042a4c2
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042a438
    ADD EAX,0x2834                      ; 0042a43c
    ADD EBP,0x283c                      ; 0042a441
    MOV dword ptr [ESP + 0x4],EAX       ; 0042a447
    IMUL EBX,ESI,0x38                   ; 0042a44b
        ;   Label: LAB_0042a44b
    PUSH 0x1                            ; 0042a44e
    PUSH EBP                            ; 0042a450
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042a451
    PUSH EDI                            ; 0042a455
    ADD EBX,ECX                         ; 0042a456
    CALL core_motion.cpp_FUN_00502f10   ; 0042a458
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0x2c],EAX      ; 0042a45d
    IMUL EAX,EAX,0x118                  ; 0042a460
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x1c8c] ; 0042a466
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0042a46d
    MOV dword ptr [EBX + 0x30],EAX      ; 0042a470
    IMUL EAX,ECX,0x118                  ; 0042a473
    FILD dword ptr [EBX + 0x30]         ; 0042a479
    FDIV float ptr [EDI + EAX*0x1 + 0x1c48] ; 0042a47c
    ADD ESP,0xc                         ; 0042a483
    MOV EAX,dword ptr [EBX + 0x28]      ; 0042a486
    FSTP float ptr [EBX + 0x34]         ; 0042a489
    TEST EAX,EAX                        ; 0042a48c
    JL 0x0042a4a6                       ; 0042a48e
        ;   XREF to: 0042a4a6 (CONDITIONAL_JUMP)  ; LAB_0042a4a6
    IMUL EAX,dword ptr [EBX],0x58       ; 0042a490
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042a493
    ADD EDX,EAX                         ; 0042a497
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042a499
    MOV ECX,dword ptr [EBX + 0x34]      ; 0042a49c
    MOV dword ptr [EDX + EAX*0x4 + 0x10230],ECX ; 0042a49f
    CMP dword ptr [EBX + 0x28],0x0      ; 0042a4a6
        ;   Label: LAB_0042a4a6
    JLE 0x0042a56b                      ; 0042a4aa
        ;   XREF to: 0042a56b (CONDITIONAL_JUMP)  ; LAB_0042a56b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a4b0
        ;   Label: LAB_0042a4b0
    INC ESI                             ; 0042a4b4
    MOV EDX,dword ptr [EAX + 0x2830]    ; 0042a4b5
    ADD EBP,0x38                        ; 0042a4bb
    CMP ESI,EDX                         ; 0042a4be
    JL 0x0042a44b                       ; 0042a4c0
        ;   XREF to: 0042a44b (CONDITIONAL_JUMP)  ; LAB_0042a44b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042a4c2
        ;   Label: LAB_0042a4c2
    XOR EAX,EAX                         ; 0042a4c6
    LEA ECX,[EDX + EAX*0x1]             ; 0042a4c8
        ;   Label: LAB_0042a4c8
    ADD EAX,0x4                         ; 0042a4cb
    ADD EDX,0x58                        ; 0042a4ce
    MOV dword ptr [ECX + 0x10230],0x0   ; 0042a4d1
    CMP EAX,0x58                        ; 0042a4db
    JNZ 0x0042a4c8                      ; 0042a4de
        ;   XREF to: 0042a4c8 (CONDITIONAL_JUMP)  ; LAB_0042a4c8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042a4e0
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a4e4
    ADD EAX,0x790                       ; 0042a4e8
    MOV dword ptr [ESP],EAX             ; 0042a4ed
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042a4f0
        ;   Label: LAB_0042a4f0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042a4f4
    XOR EDI,EDI                         ; 0042a4f8
    MOV dword ptr [ESP + 0xc],EAX       ; 0042a4fa
    ADD EBP,0x58                        ; 0042a4fe
    MOV dword ptr [ESP + 0x10],EAX      ; 0042a501
    IMUL ECX,EDI,0x58                   ; 0042a505
        ;   Label: LAB_0042a505
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042a508
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042a50c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042a510
    ADD ECX,EBX                         ; 0042a514
    MOV EBX,EBP                         ; 0042a516
    FLD float ptr [ESI + 0x10230]       ; 0042a518
        ;   Label: LAB_0042a518
    FADD float ptr [ECX + 0x10230]      ; 0042a51e
    FST float ptr [ESP + 0x14]          ; 0042a524
    FCOMP float ptr [EDX + 0x10230]     ; 0042a528
    FNSTSW AX                           ; 0042a52e
    SAHF                                ; 0042a530
    JC 0x0042a586                       ; 0042a531
        ;   XREF to: 0042a586 (CONDITIONAL_JUMP)  ; LAB_0042a586
    ADD ECX,0x4                         ; 0042a533
        ;   Label: LAB_0042a533
    ADD EDX,0x4                         ; 0042a536
    CMP ECX,EBX                         ; 0042a539
    JNZ 0x0042a518                      ; 0042a53b
        ;   XREF to: 0042a518 (CONDITIONAL_JUMP)  ; LAB_0042a518
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042a53d
    INC EDI                             ; 0042a541
    ADD ESI,0x4                         ; 0042a542
    ADD EBP,0x58                        ; 0042a545
    MOV dword ptr [ESP + 0x10],ESI      ; 0042a548
    CMP EDI,0x16                        ; 0042a54c
    JL 0x0042a505                       ; 0042a54f
        ;   XREF to: 0042a505 (CONDITIONAL_JUMP)  ; LAB_0042a505
    MOV EDI,dword ptr [ESP + 0x8]       ; 0042a551
    ADD EDI,0x58                        ; 0042a555
    MOV EBP,dword ptr [ESP]             ; 0042a558
    MOV dword ptr [ESP + 0x8],EDI       ; 0042a55b
    CMP EDI,EBP                         ; 0042a55f
    JNZ 0x0042a4f0                      ; 0042a561
        ;   XREF to: 0042a4f0 (CONDITIONAL_JUMP)  ; LAB_0042a4f0
    ADD ESP,0x18                        ; 0042a563
        ;   Label: LAB_0042a563
    POP EBP                             ; 0042a566
    POP EDI                             ; 0042a567
    POP ESI                             ; 0042a568
    POP EBX                             ; 0042a569
    RET                                 ; 0042a56a
    IMUL EAX,dword ptr [EBX + 0x4],0x58 ; 0042a56b
        ;   Label: LAB_0042a56b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042a56f
    ADD EDX,EAX                         ; 0042a573
    MOV EAX,dword ptr [EBX]             ; 0042a575
    MOV ECX,dword ptr [EBX + 0x34]      ; 0042a577
    MOV dword ptr [EDX + EAX*0x4 + 0x10230],ECX ; 0042a57a
    JMP 0x0042a4b0                      ; 0042a581
        ;   XREF to: 0042a4b0 (UNCONDITIONAL_JUMP)  ; LAB_0042a4b0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042a586
        ;   Label: LAB_0042a586
    MOV dword ptr [EDX + 0x10230],EAX   ; 0042a58a
    JMP 0x0042a533                      ; 0042a590
        ;   XREF to: 0042a533 (UNCONDITIONAL_JUMP)  ; LAB_0042a533

