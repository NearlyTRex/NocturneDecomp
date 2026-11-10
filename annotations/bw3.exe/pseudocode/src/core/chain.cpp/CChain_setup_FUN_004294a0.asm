; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_setup_FUN_004294a0(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_chain.cpp_FUN_00429420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004294a0
        ;   Label: core_chain.cpp_CChain_setup_FUN_004294a0
    PUSH ESI                            ; 004294a1
    PUSH EDI                            ; 004294a2
    PUSH EBP                            ; 004294a3
    SUB ESP,0x48                        ; 004294a4
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004294a7
    PUSH EBP                            ; 004294ab
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 004294ac
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBP + 0x164]     ; 004294b1
    ADD ESP,0x4                         ; 004294b7
    TEST EDX,EDX                        ; 004294ba
    JNZ 0x00429513                      ; 004294bc
        ;   XREF to: 00429513 (CONDITIONAL_JUMP)  ; LAB_00429513
    MOV EAX,dword ptr [EBP + 0x158]     ; 004294be
        ;   Label: LAB_004294be
    DEC EAX                             ; 004294c4
    MOV dword ptr [ESP + 0x44],EAX      ; 004294c5
    FILD dword ptr [ESP + 0x44]         ; 004294c9
    FDIVR float ptr [EBP + 0x15c]       ; 004294cd
    MOV dword ptr [EBP + 0x218],0x0     ; 004294d3
    MOV dword ptr [EBP + 0x280],0x0     ; 004294dd
    MOV dword ptr [EBP + 0x284],0x0     ; 004294e7
    MOV dword ptr [EBP + 0x56c],0xc61c3f9a ; 004294f1
    MOV dword ptr [EBP + 0x574],0x0     ; 004294fb
    FSTP float ptr [EBP + 0x160]        ; 00429505
    ADD ESP,0x48                        ; 0042950b
    POP EBP                             ; 0042950e
    POP EDI                             ; 0042950f
    POP ESI                             ; 00429510
    POP EBX                             ; 00429511
    RET                                 ; 00429512
    PUSH EBP                            ; 00429513
        ;   Label: LAB_00429513
    LEA ESI,[ESP + 0x4]                 ; 00429514
    LEA EDI,[ESP + 0x1c]                ; 00429518
    CALL core_chain.cpp_FUN_00429420    ; 0042951c
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_00429420()
    LEA ESI,[ESP + 0x4]                 ; 00429521
    ADD ESP,0x4                         ; 00429525
    MOVSD ES:EDI,ESI                    ; 00429528
    MOVSD ES:EDI,ESI                    ; 00429529
    MOVSD ES:EDI,ESI                    ; 0042952a
    LEA EAX,[EBP + 0x20]                ; 0042952b
    FLD float ptr [ESP + 0x18]          ; 0042952e
    FLD float ptr [ESP + 0x1c]          ; 00429532
    FLD float ptr [ESP + 0x20]          ; 00429536
    LEA EDI,[ESP + 0xc]                 ; 0042953a
    LEA ESI,[ESP + 0x30]                ; 0042953e
    FXCH ST2                            ; 00429542
    FSUB float ptr [EAX]                ; 00429544
    FXCH                                ; 00429546
    FSUB float ptr [EAX + 0x4]          ; 00429548
    FXCH ST2                            ; 0042954b
    FSUB float ptr [EAX + 0x8]          ; 0042954d
    FXCH                                ; 00429550
    FSTP float ptr [ESP + 0x30]         ; 00429552
    FXCH                                ; 00429556
    FSTP float ptr [ESP + 0x34]         ; 00429558
    FSTP float ptr [ESP + 0x38]         ; 0042955c
    MOVSD ES:EDI,ESI                    ; 00429560
    MOVSD ES:EDI,ESI                    ; 00429561
    MOVSD ES:EDI,ESI                    ; 00429562
    LEA EDI,[ESP + 0x24]                ; 00429563
    LEA ESI,[EBP + 0x20]                ; 00429567
    MOVSD ES:EDI,ESI                    ; 0042956a
    MOVSD ES:EDI,ESI                    ; 0042956b
    MOVSD ES:EDI,ESI                    ; 0042956c
    MOV EAX,dword ptr [EBP + 0x158]     ; 0042956d
    DEC EAX                             ; 00429573
    FLD1                                ; 00429574
    MOV dword ptr [ESP + 0x44],EAX      ; 00429576
    FLD float ptr [ESP + 0xc]           ; 0042957a
    FILD dword ptr [ESP + 0x44]         ; 0042957e
    FSTP float ptr [ESP + 0x40]         ; 00429582
    FXCH                                ; 00429586
    FDIV float ptr [ESP + 0x40]         ; 00429588
    FXCH                                ; 0042958c
    FMUL ST1                            ; 0042958e
    FLD float ptr [ESP + 0x10]          ; 00429590
    FMUL ST2                            ; 00429594
    FLD float ptr [ESP + 0x14]          ; 00429596
    FMULP ST3                           ; 0042959a
    XOR ECX,ECX                         ; 0042959c
    MOV EBX,dword ptr [EBP + 0x158]     ; 0042959e
    FXCH                                ; 004295a4
    FSTP float ptr [ESP + 0xc]          ; 004295a6
    FSTP float ptr [ESP + 0x10]         ; 004295aa
    FSTP float ptr [ESP + 0x14]         ; 004295ae
    TEST EBX,EBX                        ; 004295b2
    JLE 0x004294be                      ; 004295b4
        ;   XREF to: 004294be (CONDITIONAL_JUMP)  ; LAB_004294be
    LEA EDI,[EBP + 0x28c]               ; 004295ba
    LEA ESI,[EDI + 0x18]                ; 004295c0
    LEA EDX,[EDI + 0xc]                 ; 004295c3
    IMUL EBX,ECX,0x24                   ; 004295c6
        ;   Label: LAB_004295c6
    LEA EAX,[ESP + 0x24]                ; 004295c9
    ADD EBX,EDI                         ; 004295cd
    CMP EBX,EAX                         ; 004295cf
    JNZ 0x00429644                      ; 004295d1
        ;   XREF to: 00429644 (CONDITIONAL_JUMP)  ; LAB_00429644
    IMUL EAX,ECX,0x24                   ; 004295d3
        ;   Label: LAB_004295d3
    FLD float ptr [ESP + 0x24]          ; 004295d6
    FLD float ptr [ESP + 0x28]          ; 004295da
    FLD float ptr [ESP + 0x2c]          ; 004295de
    FXCH ST2                            ; 004295e2
    FADD float ptr [ESP + 0xc]          ; 004295e4
    FXCH                                ; 004295e8
    FADD float ptr [ESP + 0x10]         ; 004295ea
    FXCH ST2                            ; 004295ee
    FADD float ptr [ESP + 0x14]         ; 004295f0
    FXCH                                ; 004295f4
    FSTP float ptr [ESP + 0x24]         ; 004295f6
    FXCH                                ; 004295fa
    FSTP float ptr [ESP + 0x28]         ; 004295fc
    FSTP float ptr [ESP + 0x2c]         ; 00429600
    MOV dword ptr [EDX + 0x8],0x0       ; 00429604
    MOV EBX,dword ptr [EDX + 0x8]       ; 0042960b
    MOV dword ptr [EDX + 0x4],EBX       ; 0042960e
    FLD float ptr [EDX + 0x4]           ; 00429611
    ADD EAX,EDI                         ; 00429614
    FSTP float ptr [EDX]                ; 00429616
    CMP ESI,EAX                         ; 00429618
    JZ 0x0042962d                       ; 0042961a
        ;   XREF to: 0042962d (CONDITIONAL_JUMP)  ; LAB_0042962d
    MOV EBX,dword ptr [EAX]             ; 0042961c
    MOV dword ptr [EDX + 0xc],EBX       ; 0042961e
    MOV EBX,dword ptr [EAX + 0x4]       ; 00429621
    MOV dword ptr [EDX + 0x10],EBX      ; 00429624
    MOV EBX,dword ptr [EAX + 0x8]       ; 00429627
    MOV dword ptr [EDX + 0x14],EBX      ; 0042962a
    ADD ESI,0x24                        ; 0042962d
        ;   Label: LAB_0042962d
    INC ECX                             ; 00429630
    MOV EAX,dword ptr [EBP + 0x158]     ; 00429631
    ADD EDX,0x24                        ; 00429637
    CMP ECX,EAX                         ; 0042963a
    JGE 0x004294be                      ; 0042963c
        ;   XREF to: 004294be (CONDITIONAL_JUMP)  ; LAB_004294be
    JMP 0x004295c6                      ; 00429642
        ;   XREF to: 004295c6 (UNCONDITIONAL_JUMP)  ; LAB_004295c6
    MOV EAX,dword ptr [ESP + 0x24]      ; 00429644
        ;   Label: LAB_00429644
    MOV dword ptr [EBX],EAX             ; 00429648
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042964a
    MOV dword ptr [EBX + 0x4],EAX       ; 0042964e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00429651
    MOV dword ptr [EBX + 0x8],EAX       ; 00429655
    JMP 0x004295d3                      ; 00429658
        ;   XREF to: 004295d3 (UNCONDITIONAL_JUMP)  ; LAB_004295d3

