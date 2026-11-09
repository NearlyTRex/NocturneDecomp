; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_0050f6be(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0050f6be
        ;   Label: cockpit_pkbitmap.cpp_FUN_0050f6be
    PUSH EBX                            ; 0050f6c0
    PUSH ESI                            ; 0050f6c1
    PUSH EDI                            ; 0050f6c2
    PUSH EBP                            ; 0050f6c3
    SUB ESP,0x8                         ; 0050f6c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050f6c7
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050f6cb
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050f6cf
    MOV ESI,dword ptr [ESP + 0x28]      ; 0050f6d3
    CMP dword ptr [EAX + 0x20],0x0      ; 0050f6d7
    JZ 0x0050f76d                       ; 0050f6db
        ;   XREF to: 0050f76d (CONDITIONAL_JUMP)  ; LAB_0050f76d
    CMP dword ptr [EAX + 0x14],0x0      ; 0050f6e1
    JZ 0x0050f76d                       ; 0050f6e5
        ;   XREF to: 0050f76d (CONDITIONAL_JUMP)  ; LAB_0050f76d
    CMP EDX,dword ptr [ESP + 0x30]      ; 0050f6eb
    JG 0x0050f76d                       ; 0050f6ef
        ;   XREF to: 0050f76d (CONDITIONAL_JUMP)  ; LAB_0050f76d
    CMP ECX,dword ptr [ESP + 0x34]      ; 0050f6f5
    JG 0x0050f76d                       ; 0050f6f9
        ;   XREF to: 0050f76d (CONDITIONAL_JUMP)  ; LAB_0050f76d
    MOV EDI,dword ptr [EAX + 0x18]      ; 0050f6ff
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0050f702
    ADD EDI,EDX                         ; 0050f705
    ADD EBX,ECX                         ; 0050f707
    DEC EDI                             ; 0050f709
    DEC EBX                             ; 0050f70a
    CMP EDI,ESI                         ; 0050f70b
    JL 0x0050f76d                       ; 0050f70d
        ;   XREF to: 0050f76d (CONDITIONAL_JUMP)  ; LAB_0050f76d
    CMP EBX,dword ptr [ESP + 0x2c]      ; 0050f70f
    JL 0x0050f76d                       ; 0050f713
        ;   XREF to: 0050f76d (CONDITIONAL_JUMP)  ; LAB_0050f76d
    XOR EBP,EBP                         ; 0050f715
    MOV dword ptr [ESP],EBP             ; 0050f717
    CMP EDX,ESI                         ; 0050f71a
    JL 0x0050f775                       ; 0050f71c
        ;   XREF to: 0050f775 (CONDITIONAL_JUMP)  ; LAB_0050f775
    XOR ESI,ESI                         ; 0050f71e
        ;   Label: LAB_0050f71e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0050f720
    MOV dword ptr [ESP + 0x4],ESI       ; 0050f724
    CMP ECX,EBP                         ; 0050f728
    JGE 0x0050f736                      ; 0050f72a
        ;   XREF to: 0050f736 (CONDITIONAL_JUMP)  ; LAB_0050f736
    MOV ESI,EBP                         ; 0050f72c
    SUB ESI,ECX                         ; 0050f72e
    MOV ECX,EBP                         ; 0050f730
    MOV dword ptr [ESP + 0x4],ESI       ; 0050f732
    MOV ESI,dword ptr [EAX + 0x18]      ; 0050f736
        ;   Label: LAB_0050f736
    MOV EBP,dword ptr [ESP + 0x30]      ; 0050f739
    DEC ESI                             ; 0050f73d
    CMP EDI,EBP                         ; 0050f73e
    JLE 0x0050f746                      ; 0050f740
        ;   XREF to: 0050f746 (CONDITIONAL_JUMP)  ; LAB_0050f746
    SUB EDI,EBP                         ; 0050f742
    SUB ESI,EDI                         ; 0050f744
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0050f746
        ;   Label: LAB_0050f746
    MOV EBP,dword ptr [ESP + 0x34]      ; 0050f749
    DEC EDI                             ; 0050f74d
    CMP EBX,EBP                         ; 0050f74e
    JLE 0x0050f756                      ; 0050f750
        ;   XREF to: 0050f756 (CONDITIONAL_JUMP)  ; LAB_0050f756
    SUB EBX,EBP                         ; 0050f752
    SUB EDI,EBX                         ; 0050f754
    PUSH EDI                            ; 0050f756
        ;   Label: LAB_0050f756
    PUSH ESI                            ; 0050f757
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050f758
    PUSH EBX                            ; 0050f75c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0050f75d
    PUSH ESI                            ; 0050f761
    PUSH ECX                            ; 0050f762
    PUSH EDX                            ; 0050f763
    PUSH EAX                            ; 0050f764
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0 ; 0050f765
        ;   XREF to: 0050f5c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0050f5c0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, ...)
    ADD ESP,0x1c                        ; 0050f76a
    ADD ESP,0x8                         ; 0050f76d
        ;   Label: LAB_0050f76d
    POP EBP                             ; 0050f770
    POP EDI                             ; 0050f771
    POP ESI                             ; 0050f772
    POP EBX                             ; 0050f773
    RET                                 ; 0050f774
    MOV EBP,ESI                         ; 0050f775
        ;   Label: LAB_0050f775
    SUB EBP,EDX                         ; 0050f777
    MOV EDX,ESI                         ; 0050f779
    MOV dword ptr [ESP],EBP             ; 0050f77b
    JMP 0x0050f71e                      ; 0050f77e
        ;   XREF to: 0050f71e (UNCONDITIONAL_JUMP)  ; LAB_0050f71e

