; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_0051668e(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0051668e
        ;   Label: cockpit_pkbitmap.cpp_FUN_0051668e
    PUSH EBX                            ; 00516690
    PUSH ESI                            ; 00516691
    PUSH EDI                            ; 00516692
    PUSH EBP                            ; 00516693
    SUB ESP,0x8                         ; 00516694
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00516697
    MOV EDX,dword ptr [ESP + 0x20]      ; 0051669b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0051669f
    MOV ESI,dword ptr [ESP + 0x28]      ; 005166a3
    CMP dword ptr [EAX + 0x20],0x0      ; 005166a7
    JZ 0x0051673d                       ; 005166ab
        ;   XREF to: 0051673d (CONDITIONAL_JUMP)  ; LAB_0051673d
    CMP dword ptr [EAX + 0x14],0x0      ; 005166b1
    JZ 0x0051673d                       ; 005166b5
        ;   XREF to: 0051673d (CONDITIONAL_JUMP)  ; LAB_0051673d
    CMP EDX,dword ptr [ESP + 0x30]      ; 005166bb
    JG 0x0051673d                       ; 005166bf
        ;   XREF to: 0051673d (CONDITIONAL_JUMP)  ; LAB_0051673d
    CMP ECX,dword ptr [ESP + 0x34]      ; 005166c5
    JG 0x0051673d                       ; 005166c9
        ;   XREF to: 0051673d (CONDITIONAL_JUMP)  ; LAB_0051673d
    MOV EDI,dword ptr [EAX + 0x18]      ; 005166cf
    MOV EBX,dword ptr [EAX + 0x1c]      ; 005166d2
    ADD EDI,EDX                         ; 005166d5
    ADD EBX,ECX                         ; 005166d7
    DEC EDI                             ; 005166d9
    DEC EBX                             ; 005166da
    CMP EDI,ESI                         ; 005166db
    JL 0x0051673d                       ; 005166dd
        ;   XREF to: 0051673d (CONDITIONAL_JUMP)  ; LAB_0051673d
    CMP EBX,dword ptr [ESP + 0x2c]      ; 005166df
    JL 0x0051673d                       ; 005166e3
        ;   XREF to: 0051673d (CONDITIONAL_JUMP)  ; LAB_0051673d
    XOR EBP,EBP                         ; 005166e5
    MOV dword ptr [ESP],EBP             ; 005166e7
    CMP EDX,ESI                         ; 005166ea
    JL 0x00516745                       ; 005166ec
        ;   XREF to: 00516745 (CONDITIONAL_JUMP)  ; LAB_00516745
    XOR ESI,ESI                         ; 005166ee
        ;   Label: LAB_005166ee
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005166f0
    MOV dword ptr [ESP + 0x4],ESI       ; 005166f4
    CMP ECX,EBP                         ; 005166f8
    JGE 0x00516706                      ; 005166fa
        ;   XREF to: 00516706 (CONDITIONAL_JUMP)  ; LAB_00516706
    MOV ESI,EBP                         ; 005166fc
    SUB ESI,ECX                         ; 005166fe
    MOV ECX,EBP                         ; 00516700
    MOV dword ptr [ESP + 0x4],ESI       ; 00516702
    MOV ESI,dword ptr [EAX + 0x18]      ; 00516706
        ;   Label: LAB_00516706
    MOV EBP,dword ptr [ESP + 0x30]      ; 00516709
    DEC ESI                             ; 0051670d
    CMP EDI,EBP                         ; 0051670e
    JLE 0x00516716                      ; 00516710
        ;   XREF to: 00516716 (CONDITIONAL_JUMP)  ; LAB_00516716
    SUB EDI,EBP                         ; 00516712
    SUB ESI,EDI                         ; 00516714
    MOV EDI,dword ptr [EAX + 0x1c]      ; 00516716
        ;   Label: LAB_00516716
    MOV EBP,dword ptr [ESP + 0x34]      ; 00516719
    DEC EDI                             ; 0051671d
    CMP EBX,EBP                         ; 0051671e
    JLE 0x00516726                      ; 00516720
        ;   XREF to: 00516726 (CONDITIONAL_JUMP)  ; LAB_00516726
    SUB EBX,EBP                         ; 00516722
    SUB EDI,EBX                         ; 00516724
    PUSH EDI                            ; 00516726
        ;   Label: LAB_00516726
    PUSH ESI                            ; 00516727
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516728
    PUSH EBX                            ; 0051672c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051672d
    PUSH ESI                            ; 00516731
    PUSH ECX                            ; 00516732
    PUSH EDX                            ; 00516733
    PUSH EAX                            ; 00516734
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590 ; 00516735
        ;   XREF to: 00516590 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, ...)
    ADD ESP,0x1c                        ; 0051673a
    ADD ESP,0x8                         ; 0051673d
        ;   Label: LAB_0051673d
    POP EBP                             ; 00516740
    POP EDI                             ; 00516741
    POP ESI                             ; 00516742
    POP EBX                             ; 00516743
    RET                                 ; 00516744
    MOV EBP,ESI                         ; 00516745
        ;   Label: LAB_00516745
    SUB EBP,EDX                         ; 00516747
    MOV EDX,ESI                         ; 00516749
    MOV dword ptr [ESP],EBP             ; 0051674b
    JMP 0x005166ee                      ; 0051674e
        ;   XREF to: 005166ee (UNCONDITIONAL_JUMP)  ; LAB_005166ee

