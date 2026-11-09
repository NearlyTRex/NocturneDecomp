; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_FUN_004474d0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004474d0
        ;   Label: core_construc.cpp_FUN_004474d0
    SUB ESP,0x18                        ; 004474d1
    MOV EDX,ESI                         ; 004474d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004474d6
    CMP dword ptr [ESI + 0xca58],0x0    ; 004474da
    JZ 0x0044753d                       ; 004474e1
        ;   XREF to: 0044753d (CONDITIONAL_JUMP)  ; LAB_0044753d
    MOV ECX,dword ptr [ESI + 0xca60]    ; 004474e3
    LEA EAX,[ECX*0x8 + 0x0]             ; 004474e9
    ADD EAX,ECX                         ; 004474f0
    LEA ECX,[ESI + 0xc398]              ; 004474f2
    MOV EDI,ESP                         ; 004474f8
    LEA ESI,[ESI + 0x20]                ; 004474fa
    MOV ECX,dword ptr [ECX + EAX*0x8 + 0x44] ; 004474fd
    MOVSD ES:EDI,ESI                    ; 00447501
    MOVSD ES:EDI,ESI                    ; 00447502
    MOVSD ES:EDI,ESI                    ; 00447503
    TEST ECX,ECX                        ; 00447504
    JZ 0x00447524                       ; 00447506
        ;   XREF to: 00447524 (CONDITIONAL_JUMP)  ; LAB_00447524
    MOV EAX,ESP                         ; 00447508
    ADD ECX,0x20                        ; 0044750a
    CMP EAX,ECX                         ; 0044750d
    JZ 0x00447524                       ; 0044750f
        ;   XREF to: 00447524 (CONDITIONAL_JUMP)  ; LAB_00447524
    MOV EAX,dword ptr [ECX]             ; 00447511
    MOV dword ptr [ESP],EAX             ; 00447513
    MOV EAX,dword ptr [ECX + 0x4]       ; 00447516
    MOV dword ptr [ESP + 0x4],EAX       ; 00447519
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044751d
    MOV dword ptr [ESP + 0x8],EAX       ; 00447520
    LEA EDI,[ESP + 0xc]                 ; 00447524
        ;   Label: LAB_00447524
    MOV ESI,ESP                         ; 00447528
    MOVSD ES:EDI,ESI                    ; 0044752a
    MOVSD ES:EDI,ESI                    ; 0044752b
    MOVSD ES:EDI,ESI                    ; 0044752c
    LEA ESI,[ESP + 0xc]                 ; 0044752d
    MOV EDI,EDX                         ; 00447531
    MOVSD ES:EDI,ESI                    ; 00447533
    MOVSD ES:EDI,ESI                    ; 00447534
    MOVSD ES:EDI,ESI                    ; 00447535
    MOV EAX,EDX                         ; 00447536
    ADD ESP,0x18                        ; 00447538
    POP EDI                             ; 0044753b
    RET                                 ; 0044753c
    LEA EDI,[ESP + 0xc]                 ; 0044753d
        ;   Label: LAB_0044753d
    LEA ESI,[ESI + 0x20]                ; 00447541
    MOVSD ES:EDI,ESI                    ; 00447544
    MOVSD ES:EDI,ESI                    ; 00447545
    MOVSD ES:EDI,ESI                    ; 00447546
    LEA ESI,[ESP + 0xc]                 ; 00447547
    MOV EDI,EDX                         ; 0044754b
    MOVSD ES:EDI,ESI                    ; 0044754d
    MOVSD ES:EDI,ESI                    ; 0044754e
    MOVSD ES:EDI,ESI                    ; 0044754f
    MOV EAX,EDX                         ; 00447550
    ADD ESP,0x18                        ; 00447552
    POP EDI                             ; 00447555
    RET                                 ; 00447556

