; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044e560(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_vector
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e560
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044e560
    PUSH EDI                            ; 0044e561
    PUSH EBP                            ; 0044e562
    SUB ESP,0x24                        ; 0044e563
    MOV ECX,dword ptr [ESP + 0x34]      ; 0044e566
    MOV EBX,ESI                         ; 0044e56a
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044e56c
    MOV EAX,dword ptr [ESI]             ; 0044e570
    SUB EAX,dword ptr [ECX + 0x16c]     ; 0044e572
    MOV EDI,dword ptr [ECX + 0x170]     ; 0044e578
    MOV dword ptr [ESP + 0x18],EAX      ; 0044e57e
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e582
    SUB EAX,EDI                         ; 0044e585
    MOV EBP,dword ptr [ECX + 0x174]     ; 0044e587
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044e58d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e591
    SUB EAX,EBP                         ; 0044e594
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044e596
    MOV dword ptr [ESP + 0x20],EAX      ; 0044e59a
    MOV EAX,dword ptr [ECX + 0x180]     ; 0044e59e
    IMUL EDX                            ; 0044e5a4
    SHRD EAX,EDX,0x10                   ; 0044e5a6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044e5aa
    MOV ESI,EAX                         ; 0044e5ae
    MOV EAX,dword ptr [ECX + 0x18c]     ; 0044e5b0
    IMUL EDX                            ; 0044e5b6
    SHRD EAX,EDX,0x10                   ; 0044e5b8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044e5bc
    ADD ESI,EAX                         ; 0044e5c0
    MOV EAX,dword ptr [ECX + 0x198]     ; 0044e5c2
    IMUL EDX                            ; 0044e5c8
    SHRD EAX,EDX,0x10                   ; 0044e5ca
    ADD ESI,EAX                         ; 0044e5ce
    MOV dword ptr [ESP + 0x8],ESI       ; 0044e5d0
    TEST ESI,ESI                        ; 0044e5d4
    JG 0x0044e5f6                       ; 0044e5d6
        ;   XREF to: 0044e5f6 (CONDITIONAL_JUMP)  ; LAB_0044e5f6
    LEA EDI,[ESP + 0xc]                 ; 0044e5d8
        ;   Label: LAB_0044e5d8
    MOV ESI,0x1483a40                   ; 0044e5dc
    MOVSD ES:EDI,ESI                    ; 0044e5e1
        ;   Label: LAB_0044e5e1
    MOVSD ES:EDI,ESI                    ; 0044e5e2
    MOVSD ES:EDI,ESI                    ; 0044e5e3
    LEA ESI,[ESP + 0xc]                 ; 0044e5e4
    MOV EDI,EBX                         ; 0044e5e8
    MOVSD ES:EDI,ESI                    ; 0044e5ea
    MOVSD ES:EDI,ESI                    ; 0044e5eb
    MOVSD ES:EDI,ESI                    ; 0044e5ec
    MOV EAX,EBX                         ; 0044e5ed
    ADD ESP,0x24                        ; 0044e5ef
    POP EBP                             ; 0044e5f2
    POP EDI                             ; 0044e5f3
    POP EBX                             ; 0044e5f4
    RET                                 ; 0044e5f5
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044e5f6
        ;   Label: LAB_0044e5f6
    MOV EAX,dword ptr [ECX + 0x178]     ; 0044e5fa
    IMUL EDX                            ; 0044e600
    SHRD EAX,EDX,0x10                   ; 0044e602
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044e606
    MOV ESI,EAX                         ; 0044e60a
    MOV EAX,dword ptr [ECX + 0x184]     ; 0044e60c
    IMUL EDX                            ; 0044e612
    SHRD EAX,EDX,0x10                   ; 0044e614
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044e618
    ADD ESI,EAX                         ; 0044e61c
    MOV EAX,dword ptr [ECX + 0x190]     ; 0044e61e
    IMUL EDX                            ; 0044e624
    SHRD EAX,EDX,0x10                   ; 0044e626
    ADD ESI,EAX                         ; 0044e62a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e62c
    MOV dword ptr [ESP],ESI             ; 0044e630
    CMP ESI,EDX                         ; 0044e633
    JGE 0x0044e5d8                      ; 0044e635
        ;   XREF to: 0044e5d8 (CONDITIONAL_JUMP)  ; LAB_0044e5d8
    MOV EDI,EDX                         ; 0044e637
    NEG EDI                             ; 0044e639
    CMP EDI,ESI                         ; 0044e63b
    JGE 0x0044e5d8                      ; 0044e63d
        ;   XREF to: 0044e5d8 (CONDITIONAL_JUMP)  ; LAB_0044e5d8
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044e63f
    MOV EAX,dword ptr [ECX + 0x17c]     ; 0044e643
    IMUL EDX                            ; 0044e649
    SHRD EAX,EDX,0x10                   ; 0044e64b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044e64f
    MOV ESI,EAX                         ; 0044e653
    MOV EAX,dword ptr [ECX + 0x188]     ; 0044e655
    IMUL EDX                            ; 0044e65b
    SHRD EAX,EDX,0x10                   ; 0044e65d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044e661
    ADD ESI,EAX                         ; 0044e665
    MOV EAX,dword ptr [ECX + 0x194]     ; 0044e667
    IMUL EDX                            ; 0044e66d
    SHRD EAX,EDX,0x10                   ; 0044e66f
    ADD ESI,EAX                         ; 0044e673
    MOV EBP,dword ptr [ESP + 0x8]       ; 0044e675
    MOV dword ptr [ESP + 0x4],ESI       ; 0044e679
    CMP ESI,EBP                         ; 0044e67d
    JGE 0x0044e5d8                      ; 0044e67f
        ;   XREF to: 0044e5d8 (CONDITIONAL_JUMP)  ; LAB_0044e5d8
    CMP EDI,ESI                         ; 0044e685
    JGE 0x0044e5d8                      ; 0044e687
        ;   XREF to: 0044e5d8 (CONDITIONAL_JUMP)  ; LAB_0044e5d8
    LEA EDI,[ESP + 0xc]                 ; 0044e68d
    MOV ESI,ESP                         ; 0044e691
    JMP 0x0044e5e1                      ; 0044e693
        ;   XREF to: 0044e5e1 (UNCONDITIONAL_JUMP)  ; LAB_0044e5e1

