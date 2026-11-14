; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044a6a0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_vector
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a6a0
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044a6a0
    PUSH EDI                            ; 0044a6a1
    PUSH EBP                            ; 0044a6a2
    SUB ESP,0x24                        ; 0044a6a3
    MOV ECX,dword ptr [ESP + 0x34]      ; 0044a6a6
    MOV EBX,ESI                         ; 0044a6aa
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044a6ac
    MOV EAX,dword ptr [ESI]             ; 0044a6b0
    SUB EAX,dword ptr [ECX + 0x16c]     ; 0044a6b2
    MOV EDI,dword ptr [ECX + 0x170]     ; 0044a6b8
    MOV dword ptr [ESP + 0x18],EAX      ; 0044a6be
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a6c2
    SUB EAX,EDI                         ; 0044a6c5
    MOV EBP,dword ptr [ECX + 0x174]     ; 0044a6c7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044a6cd
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a6d1
    SUB EAX,EBP                         ; 0044a6d4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044a6d6
    MOV dword ptr [ESP + 0x20],EAX      ; 0044a6da
    MOV EAX,dword ptr [ECX + 0x180]     ; 0044a6de
    IMUL EDX                            ; 0044a6e4
    SHRD EAX,EDX,0x10                   ; 0044a6e6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044a6ea
    MOV ESI,EAX                         ; 0044a6ee
    MOV EAX,dword ptr [ECX + 0x18c]     ; 0044a6f0
    IMUL EDX                            ; 0044a6f6
    SHRD EAX,EDX,0x10                   ; 0044a6f8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044a6fc
    ADD ESI,EAX                         ; 0044a700
    MOV EAX,dword ptr [ECX + 0x198]     ; 0044a702
    IMUL EDX                            ; 0044a708
    SHRD EAX,EDX,0x10                   ; 0044a70a
    ADD ESI,EAX                         ; 0044a70e
    MOV dword ptr [ESP + 0x8],ESI       ; 0044a710
    TEST ESI,ESI                        ; 0044a714
    JG 0x0044a736                       ; 0044a716
        ;   XREF to: 0044a736 (CONDITIONAL_JUMP)  ; LAB_0044a736
    LEA EDI,[ESP + 0xc]                 ; 0044a718
        ;   Label: LAB_0044a718
    MOV ESI,0x14a02f0                   ; 0044a71c
    MOVSD ES:EDI,ESI                    ; 0044a721
        ;   Label: LAB_0044a721
    MOVSD ES:EDI,ESI                    ; 0044a722
    MOVSD ES:EDI,ESI                    ; 0044a723
    LEA ESI,[ESP + 0xc]                 ; 0044a724
    MOV EDI,EBX                         ; 0044a728
    MOVSD ES:EDI,ESI                    ; 0044a72a
    MOVSD ES:EDI,ESI                    ; 0044a72b
    MOVSD ES:EDI,ESI                    ; 0044a72c
    MOV EAX,EBX                         ; 0044a72d
    ADD ESP,0x24                        ; 0044a72f
    POP EBP                             ; 0044a732
    POP EDI                             ; 0044a733
    POP EBX                             ; 0044a734
    RET                                 ; 0044a735
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044a736
        ;   Label: LAB_0044a736
    MOV EAX,dword ptr [ECX + 0x178]     ; 0044a73a
    IMUL EDX                            ; 0044a740
    SHRD EAX,EDX,0x10                   ; 0044a742
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044a746
    MOV ESI,EAX                         ; 0044a74a
    MOV EAX,dword ptr [ECX + 0x184]     ; 0044a74c
    IMUL EDX                            ; 0044a752
    SHRD EAX,EDX,0x10                   ; 0044a754
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044a758
    ADD ESI,EAX                         ; 0044a75c
    MOV EAX,dword ptr [ECX + 0x190]     ; 0044a75e
    IMUL EDX                            ; 0044a764
    SHRD EAX,EDX,0x10                   ; 0044a766
    ADD ESI,EAX                         ; 0044a76a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a76c
    MOV dword ptr [ESP],ESI             ; 0044a770
    CMP ESI,EDX                         ; 0044a773
    JGE 0x0044a718                      ; 0044a775
        ;   XREF to: 0044a718 (CONDITIONAL_JUMP)  ; LAB_0044a718
    MOV EDI,EDX                         ; 0044a777
    NEG EDI                             ; 0044a779
    CMP EDI,ESI                         ; 0044a77b
    JGE 0x0044a718                      ; 0044a77d
        ;   XREF to: 0044a718 (CONDITIONAL_JUMP)  ; LAB_0044a718
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044a77f
    MOV EAX,dword ptr [ECX + 0x17c]     ; 0044a783
    IMUL EDX                            ; 0044a789
    SHRD EAX,EDX,0x10                   ; 0044a78b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044a78f
    MOV ESI,EAX                         ; 0044a793
    MOV EAX,dword ptr [ECX + 0x188]     ; 0044a795
    IMUL EDX                            ; 0044a79b
    SHRD EAX,EDX,0x10                   ; 0044a79d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044a7a1
    ADD ESI,EAX                         ; 0044a7a5
    MOV EAX,dword ptr [ECX + 0x194]     ; 0044a7a7
    IMUL EDX                            ; 0044a7ad
    SHRD EAX,EDX,0x10                   ; 0044a7af
    ADD ESI,EAX                         ; 0044a7b3
    MOV EBP,dword ptr [ESP + 0x8]       ; 0044a7b5
    MOV dword ptr [ESP + 0x4],ESI       ; 0044a7b9
    CMP ESI,EBP                         ; 0044a7bd
    JGE 0x0044a718                      ; 0044a7bf
        ;   XREF to: 0044a718 (CONDITIONAL_JUMP)  ; LAB_0044a718
    CMP EDI,ESI                         ; 0044a7c5
    JGE 0x0044a718                      ; 0044a7c7
        ;   XREF to: 0044a718 (CONDITIONAL_JUMP)  ; LAB_0044a718
    LEA EDI,[ESP + 0xc]                 ; 0044a7cd
    MOV ESI,ESP                         ; 0044a7d1
    JMP 0x0044a721                      ; 0044a7d3
        ;   XREF to: 0044a721 (UNCONDITIONAL_JUMP)  ; LAB_0044a721

