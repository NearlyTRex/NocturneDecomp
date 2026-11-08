; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b550(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00518cd0 at 00518f54
;
; Referenced Globals:
;   undefined4 s_actionPending_d_prye_cpp_005cd1e6+1
;   TerminatedCString s_actionPending_d_prye_cpp_005cd20b
;   TerminatedCString s_Object_to_pick_up_is_now_005cd22f
;   TerminatedCString s_actionPending_d_prye_cpp_005cd25e
;   TerminatedCString s_actionPending_d_prye_cpp_005cd282
;   TerminatedCString s_fall_1_wav_005cd2a6
;   TerminatedCString s_actionPending_d_prye_cpp_005cd2b1
;   TerminatedCString s_doorToOpen_NULL_prye_cpp_005cd2d5
;   undefined4 DAT_005cd2ff
;   undefined4 DAT_005cd307
;   undefined4 DAT_005cd30f
;   undefined4 DAT_005e3514
;   undefined4 DAT_005e3518
;   undefined4 DAT_005fb140
;   undefined4 DAT_005fed24
;   ... and 7 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_00408bf0
;   FUN_0040c840
;   FUN_0040ce40
;   FUN_0042abb0
;   FUN_00433fb0
;   FUN_0047cee0
;   FUN_004ce9c0
;   FUN_004d3250
;   FUN_004d3460
;   FUN_004d4160
;   FUN_004d41a0
;   FUN_004fbb70
;   FUN_004fc0d0
;   FUN_004fc350
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b550
        ;   Label: FUN_0051b550
    PUSH ESI                            ; 0051b551
    PUSH EDI                            ; 0051b552
    PUSH EBP                            ; 0051b553
    MOV EBP,ESP                         ; 0051b554
    SUB ESP,0x158                       ; 0051b556
    AND ESP,0xfffffff8                  ; 0051b55c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051b55f
    LEA EAX,[EBX + 0x158]               ; 0051b562
    MOV dword ptr [ESP + 0x144],EAX     ; 0051b568
    LEA EAX,[EBX + 0x20bbc]             ; 0051b56f
    MOV dword ptr [ESP + 0x138],EAX     ; 0051b575
    LEA EAX,[EBX + 0x20bb0]             ; 0051b57c
    MOV dword ptr [ESP + 0x134],EAX     ; 0051b582
    LEA EAX,[EBP + 0x18]                ; 0051b589
        ;   Label: LAB_0051b589
    PUSH EAX                            ; 0051b58c
    MOV EDX,dword ptr [ESP + 0x148]     ; 0051b58d
    PUSH EDX                            ; 0051b594
    CALL FUN_004fbb70                   ; 0051b595
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb70()
    ADD ESP,0x8                         ; 0051b59a
    MOV ESI,EAX                         ; 0051b59d
    CMP EAX,0x12                        ; 0051b59f
    JNC 0x0051bf93                      ; 0051b5a2
        ;   XREF to: 0051bf93 (CONDITIONAL_JUMP)  ; LAB_0051bf93
    CMP EAX,0x6                         ; 0051b5a8
    JNC 0x0051c03c                      ; 0051b5ab
        ;   XREF to: 0051c03c (CONDITIONAL_JUMP)  ; LAB_0051c03c
    CMP EAX,0x2                         ; 0051b5b1
    JNC 0x0051c07d                      ; 0051b5b4
        ;   XREF to: 0051c07d (CONDITIONAL_JUMP)  ; LAB_0051c07d
    CMP EAX,0x1                         ; 0051b5ba
    JNZ 0x0051c08c                      ; 0051b5bd
        ;   XREF to: 0051c08c (CONDITIONAL_JUMP)  ; LAB_0051c08c
    CMP ESI,0x7                         ; 0051b5c3
        ;   Label: LAB_0051b5c3
    JNZ 0x0051b87f                      ; 0051b5c6
        ;   XREF to: 0051b87f (CONDITIONAL_JUMP)  ; LAB_0051b87f
    MOV EAX,[0x01ed36fc]                ; 0051b5cc | DAT_01ed36fc
    PUSH EAX                            ; 0051b5d1
        ;   Label: LAB_0051b5d1
    MOV ESI,dword ptr [ESP + 0x148]     ; 0051b5d2
    PUSH ESI                            ; 0051b5d9
    LEA ESI,[ESP + 0xd0]                ; 0051b5da
    LEA EDI,[ESP + 0xc4]                ; 0051b5e1
    CALL FUN_0054dbd0                   ; 0051b5e8
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    LEA ESI,[ESP + 0xd0]                ; 0051b5ed
    ADD ESP,0x8                         ; 0051b5f4
    MOVSD ES:EDI,ESI                    ; 0051b5f7
    MOVSD ES:EDI,ESI                    ; 0051b5f8
    MOVSD ES:EDI,ESI                    ; 0051b5f9
    MOV EDI,dword ptr [EBX + 0x20ba4]   ; 0051b5fa
    TEST EDI,EDI                        ; 0051b600
    JZ 0x0051b889                       ; 0051b602
        ;   XREF to: 0051b889 (CONDITIONAL_JUMP)  ; LAB_0051b889
    PUSH 0x3f800000                     ; 0051b608
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051b60d
    MOV EDX,dword ptr [EDI + 0x154]     ; 0051b613
    PUSH EDI                            ; 0051b619
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b61a
    CALL dword ptr [EDX + 0x44]         ; 0051b621
    ADD ESP,0x4                         ; 0051b624
    PUSH EAX                            ; 0051b627
    LEA EAX,[ESP + 0xc4]                ; 0051b628
    PUSH EAX                            ; 0051b62f
    PUSH EBX                            ; 0051b630
    LEA ESI,[ESP + 0x138]               ; 0051b631
    CALL FUN_00408b80                   ; 0051b638
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 0051b63d
    LEA EAX,[ESP + 0xb8]                ; 0051b640
    LEA EDI,[ESP + 0xb8]                ; 0051b647
    PUSH EAX                            ; 0051b64e
    LEA ESI,[ESP + 0x134]               ; 0051b64f
    MOV EAX,dword ptr [ESP + 0x160]     ; 0051b656
        ;   Label: LAB_0051b656
    PUSH EBX                            ; 0051b65d
    MOVSD ES:EDI,ESI                    ; 0051b65e
    MOVSD ES:EDI,ESI                    ; 0051b65f
    MOVSD ES:EDI,ESI                    ; 0051b660
    CALL dword ptr [EAX + 0x28]         ; 0051b661
    ADD ESP,0x10                        ; 0051b664
        ;   Label: LAB_0051b664
    FLD float ptr [EBP + 0x18]          ; 0051b667
        ;   Label: LAB_0051b667
    FLDZ                                ; 0051b66a
    FCOMPP                              ; 0051b66c
    FNSTSW AX                           ; 0051b66e
    SAHF                                ; 0051b670
    JC 0x0051b589                       ; 0051b671
        ;   XREF to: 0051b589 (CONDITIONAL_JUMP)  ; LAB_0051b589
    MOV ESP,EBP                         ; 0051b677
    POP EBP                             ; 0051b679
    POP EDI                             ; 0051b67a
    POP ESI                             ; 0051b67b
    POP EBX                             ; 0051b67c
    RET                                 ; 0051b67d
    PUSH EBX                            ; 0051b67e
        ;   Label: LAB_0051b67e
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0051b67f
    CALL FUN_00520da0                   ; 0051b685
        ;   XREF to: 00520da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00520da0()
    MOV EDI,dword ptr [EBX + 0x20b64]   ; 0051b68a
    ADD ESP,0x4                         ; 0051b690
    CMP EDI,0x2                         ; 0051b693
    JNZ 0x0051b707                      ; 0051b696
        ;   XREF to: 0051b707 (CONDITIONAL_JUMP)  ; LAB_0051b707
    TEST ESI,ESI                        ; 0051b698
    JZ 0x0051b6b9                       ; 0051b69a
        ;   XREF to: 0051b6b9 (CONDITIONAL_JUMP)  ; LAB_0051b6b9
    MOV EDI,dword ptr [ESP + 0x138]     ; 0051b69c
    PUSH EDI                            ; 0051b6a3
    MOV EDX,dword ptr [ESP + 0x138]     ; 0051b6a4
    PUSH EDX                            ; 0051b6ab
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051b6ac
    PUSH ESI                            ; 0051b6b2
    CALL dword ptr [EAX + 0x68]         ; 0051b6b3
    ADD ESP,0xc                         ; 0051b6b6
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051b6b9
        ;   Label: LAB_0051b6b9
    MOV ECX,dword ptr [EBX + 0x2f00]    ; 0051b6c3
        ;   Label: LAB_0051b6c3
    MOV dword ptr [EBX + 0x20bac],0x0   ; 0051b6c9
    CMP ECX,0x11                        ; 0051b6d3
    JNZ 0x0051b6ec                      ; 0051b6d6
        ;   XREF to: 0051b6ec (CONDITIONAL_JUMP)  ; LAB_0051b6ec
    MOV dword ptr [EBX + 0x2f04],0x0    ; 0051b6d8
    MOV dword ptr [EBX + 0x2f00],0x0    ; 0051b6e2
    CMP ESI,dword ptr [EBX + 0x20c24]   ; 0051b6ec
        ;   Label: LAB_0051b6ec
    JNZ 0x0051b667                      ; 0051b6f2
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    MOV dword ptr [EBX + 0x20c24],0x0   ; 0051b6f8
    JMP 0x0051b667                      ; 0051b702
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    CMP EDI,0x6                         ; 0051b707
        ;   Label: LAB_0051b707
    JZ 0x0051b6b9                       ; 0051b70a
        ;   XREF to: 0051b6b9 (CONDITIONAL_JUMP)  ; LAB_0051b6b9
    PUSH 0xa38                          ; 0051b70c
    PUSH EDI                            ; 0051b711
    MOV EAX,0x5cd1e7                    ; 0051b712 | s_actionPending_d_prye_cpp_005cd1e6+1
    PUSH EAX                            ; 0051b717 | s_actionPending_d_prye_cpp_005cd1e6+1
    MOV ECX,dword ptr [0x005fb140]      ; 0051b718 | DAT_005fb140
    PUSH ECX                            ; 0051b71e
    CALL FUN_0047cee0                   ; 0051b71f
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    ADD ESP,0x10                        ; 0051b724
    JMP 0x0051b6c3                      ; 0051b727
        ;   XREF to: 0051b6c3 (UNCONDITIONAL_JUMP)  ; LAB_0051b6c3
    MOV EAX,dword ptr [EBX + 0x20b64]   ; 0051b729
        ;   Label: LAB_0051b729
    CMP EAX,0x4                         ; 0051b72f
    JNZ 0x0051b76a                      ; 0051b732
        ;   XREF to: 0051b76a (CONDITIONAL_JUMP)  ; LAB_0051b76a
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051b734
    MOV ESI,dword ptr [EBX + 0x20b98]   ; 0051b73e
        ;   Label: LAB_0051b73e
    TEST ESI,ESI                        ; 0051b744
    JZ 0x0051b787                       ; 0051b746
        ;   XREF to: 0051b787 (CONDITIONAL_JUMP)  ; LAB_0051b787
    PUSH EBX                            ; 0051b748
    MOV EDX,dword ptr [ESI + 0x154]     ; 0051b749
    PUSH ESI                            ; 0051b74f
    CALL dword ptr [EDX + 0x84]         ; 0051b750
    ADD ESP,0x8                         ; 0051b756
    MOV ESI,EAX                         ; 0051b759
    TEST EAX,EAX                        ; 0051b75b
    JNZ 0x0051b7a5                      ; 0051b75d
        ;   XREF to: 0051b7a5 (CONDITIONAL_JUMP)  ; LAB_0051b7a5
    MOV dword ptr [EBX + 0x20b98],EAX   ; 0051b75f
    JMP 0x0051b667                      ; 0051b765
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0xa56                          ; 0051b76a
        ;   Label: LAB_0051b76a
    PUSH EAX                            ; 0051b76f
    MOV EAX,0x5cd20b                    ; 0051b770 | = "actionPending = %d\nprye.cpp line %d"
    PUSH EAX                            ; 0051b775 | = "actionPending = %d\nprye.cpp line %d"
    MOV ECX,dword ptr [0x005fb140]      ; 0051b776 | DAT_005fb140
    PUSH ECX                            ; 0051b77c
    CALL FUN_0047cee0                   ; 0051b77d
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    ADD ESP,0x10                        ; 0051b782
    JMP 0x0051b73e                      ; 0051b785
        ;   XREF to: 0051b73e (UNCONDITIONAL_JUMP)  ; LAB_0051b73e
    PUSH 0xa5c                          ; 0051b787
        ;   Label: LAB_0051b787
    PUSH 0x5cd22f                       ; 0051b78c | = "Object to pick up is now NULL\nprye.c..."
    MOV ECX,dword ptr [0x005fb140]      ; 0051b791 | DAT_005fb140
    PUSH ECX                            ; 0051b797
    CALL FUN_0047cee0                   ; 0051b798
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    ADD ESP,0xc                         ; 0051b79d
    JMP 0x0051b667                      ; 0051b7a0
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    MOV EAX,dword ptr [EBX + 0x20b98]   ; 0051b7a5
        ;   Label: LAB_0051b7a5
    TEST EAX,EAX                        ; 0051b7ab
    JNZ 0x0051b7f2                      ; 0051b7ad
        ;   XREF to: 0051b7f2 (CONDITIONAL_JUMP)  ; LAB_0051b7f2
    CMP ESI,0x2                         ; 0051b7af
        ;   Label: LAB_0051b7af
    JNZ 0x0051b7e2                      ; 0051b7b2
        ;   XREF to: 0051b7e2 (CONDITIONAL_JUMP)  ; LAB_0051b7e2
    MOV EDI,dword ptr [EBX + 0x20b64]   ; 0051b7b4
    TEST EDI,EDI                        ; 0051b7ba
    JZ 0x0051b7d8                       ; 0051b7bc
        ;   XREF to: 0051b7d8 (CONDITIONAL_JUMP)  ; LAB_0051b7d8
    PUSH 0xa7a                          ; 0051b7be
    PUSH EDI                            ; 0051b7c3
    PUSH 0x5cd25e                       ; 0051b7c4 | = "actionPending = %d\nprye.cpp line %d"
    MOV EDX,dword ptr [0x005fb140]      ; 0051b7c9 | DAT_005fb140
    PUSH EDX                            ; 0051b7cf
    CALL FUN_0047cee0                   ; 0051b7d0
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    ADD ESP,0x10                        ; 0051b7d5
    MOV dword ptr [EBX + 0x20b64],0x1   ; 0051b7d8
        ;   Label: LAB_0051b7d8
    PUSH 0x1                            ; 0051b7e2
        ;   Label: LAB_0051b7e2
    PUSH EBX                            ; 0051b7e4
    CALL FUN_004d4160                   ; 0051b7e5
        ;   XREF to: 004d4160 (UNCONDITIONAL_CALL)  ; undefined FUN_004d4160()
    ADD ESP,0x8                         ; 0051b7ea
    JMP 0x0051b667                      ; 0051b7ed
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH EBX                            ; 0051b7f2
        ;   Label: LAB_0051b7f2
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051b7f3
    PUSH EAX                            ; 0051b7f9
    CALL dword ptr [EDX + 0x84]         ; 0051b7fa
    ADD ESP,0x8                         ; 0051b800
    CMP EAX,0x4                         ; 0051b803
    SETZ AL                             ; 0051b806
    AND EAX,0xff                        ; 0051b809
    JZ 0x0051b7af                       ; 0051b80e
        ;   XREF to: 0051b7af (CONDITIONAL_JUMP)  ; LAB_0051b7af
    MOV dword ptr [EBX + 0x2f04],0x0    ; 0051b810
    MOV dword ptr [EBX + 0x2f00],0x11   ; 0051b81a
    JMP 0x0051b7af                      ; 0051b824
        ;   XREF to: 0051b7af (UNCONDITIONAL_JUMP)  ; LAB_0051b7af
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0051b826
        ;   Label: LAB_0051b826
    CMP ESI,dword ptr [EBX + 0x20c24]   ; 0051b82c
    JNZ 0x0051b83e                      ; 0051b832
        ;   XREF to: 0051b83e (CONDITIONAL_JUMP)  ; LAB_0051b83e
    MOV dword ptr [EBX + 0x20c24],0x0   ; 0051b834
    PUSH 0x1                            ; 0051b83e
        ;   Label: LAB_0051b83e
    PUSH EBX                            ; 0051b840
    CALL FUN_004d41a0                   ; 0051b841
        ;   XREF to: 004d41a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d41a0()
    MOV EDI,dword ptr [EBX + 0x20b64]   ; 0051b846
    ADD ESP,0x8                         ; 0051b84c
    CMP EDI,0x1                         ; 0051b84f
    JNZ 0x0051b863                      ; 0051b852
        ;   XREF to: 0051b863 (CONDITIONAL_JUMP)  ; LAB_0051b863
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051b854
    JMP 0x0051b667                      ; 0051b85e
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0xa9a                          ; 0051b863
        ;   Label: LAB_0051b863
    PUSH EDI                            ; 0051b868
    PUSH 0x5cd282                       ; 0051b869 | = "actionPending = %d\nprye.cpp line %d"
    MOV EDX,dword ptr [0x005fb140]      ; 0051b86e | DAT_005fb140
    PUSH EDX                            ; 0051b874
    CALL FUN_0047cee0                   ; 0051b875
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    JMP 0x0051b664                      ; 0051b87a
        ;   XREF to: 0051b664 (UNCONDITIONAL_JUMP)  ; LAB_0051b664
    MOV EAX,[0x01ed36f8]                ; 0051b87f | DAT_01ed36f8
        ;   Label: LAB_0051b87f
    JMP 0x0051b5d1                      ; 0051b884
        ;   XREF to: 0051b5d1 (UNCONDITIONAL_JUMP)  ; LAB_0051b5d1
    CMP dword ptr [EBX + 0x20c20],0x0   ; 0051b889
        ;   Label: LAB_0051b889
    JNZ 0x0051bb20                      ; 0051b890
        ;   XREF to: 0051bb20 (CONDITIONAL_JUMP)  ; LAB_0051bb20
    CMP dword ptr [EBX + 0x2500],0x0    ; 0051b896
    JZ 0x0051b667                       ; 0051b89d
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0x4                            ; 0051b8a3
    MOV ECX,dword ptr [ESP + 0x148]     ; 0051b8a5
    PUSH ECX                            ; 0051b8ac
    CALL FUN_004fc350                   ; 0051b8ad
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b8b2
    FLD float ptr [ESP + 0x15c]         ; 0051b8b9
    ADD ESP,0x8                         ; 0051b8c0
    FCOMP double ptr [0x005cd307]       ; 0051b8c3 | DAT_005cd307
    FNSTSW AX                           ; 0051b8c9
    SAHF                                ; 0051b8cb
    JA 0x0051bb79                       ; 0051b8cc
        ;   XREF to: 0051bb79 (CONDITIONAL_JUMP)  ; LAB_0051bb79
    PUSH 0x1                            ; 0051b8d2
    MOV ESI,dword ptr [ESP + 0x148]     ; 0051b8d4
    PUSH ESI                            ; 0051b8db
    CALL FUN_004fc350                   ; 0051b8dc
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b8e1
    FLD float ptr [ESP + 0x15c]         ; 0051b8e8
    ADD ESP,0x8                         ; 0051b8ef
    FCOMP double ptr [0x005cd307]       ; 0051b8f2 | DAT_005cd307
    FNSTSW AX                           ; 0051b8f8
    SAHF                                ; 0051b8fa
    JA 0x0051bb98                       ; 0051b8fb
        ;   XREF to: 0051bb98 (CONDITIONAL_JUMP)  ; LAB_0051bb98
    PUSH 0x2                            ; 0051b901
    PUSH ESI                            ; 0051b903
    CALL FUN_004fc350                   ; 0051b904
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b909
    FLD float ptr [ESP + 0x15c]         ; 0051b910
    ADD ESP,0x8                         ; 0051b917
    FCOMP double ptr [0x005cd307]       ; 0051b91a | DAT_005cd307
    FNSTSW AX                           ; 0051b920
    SAHF                                ; 0051b922
    JA 0x0051bb98                       ; 0051b923
        ;   XREF to: 0051bb98 (CONDITIONAL_JUMP)  ; LAB_0051bb98
    PUSH 0x3                            ; 0051b929
    PUSH ESI                            ; 0051b92b
    CALL FUN_004fc350                   ; 0051b92c
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b931
    FLD float ptr [ESP + 0x15c]         ; 0051b938
    ADD ESP,0x8                         ; 0051b93f
    FCOMP double ptr [0x005cd307]       ; 0051b942 | DAT_005cd307
    FNSTSW AX                           ; 0051b948
    SAHF                                ; 0051b94a
    JA 0x0051bbb7                       ; 0051b94b
        ;   XREF to: 0051bbb7 (CONDITIONAL_JUMP)  ; LAB_0051bbb7
    PUSH 0x5                            ; 0051b951
    PUSH ESI                            ; 0051b953
    CALL FUN_004fc350                   ; 0051b954
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b959
    FLD float ptr [ESP + 0x15c]         ; 0051b960
    ADD ESP,0x8                         ; 0051b967
    FCOMP double ptr [0x005cd307]       ; 0051b96a | DAT_005cd307
    FNSTSW AX                           ; 0051b970
    SAHF                                ; 0051b972
    JA 0x0051bb01                       ; 0051b973
        ;   XREF to: 0051bb01 (CONDITIONAL_JUMP)  ; LAB_0051bb01
    PUSH 0x6                            ; 0051b979
    PUSH ESI                            ; 0051b97b
    CALL FUN_004fc350                   ; 0051b97c
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b981
    FLD float ptr [ESP + 0x15c]         ; 0051b988
    ADD ESP,0x8                         ; 0051b98f
    FCOMP double ptr [0x005cd307]       ; 0051b992 | DAT_005cd307
    FNSTSW AX                           ; 0051b998
    SAHF                                ; 0051b99a
    JA 0x0051bb01                       ; 0051b99b
        ;   XREF to: 0051bb01 (CONDITIONAL_JUMP)  ; LAB_0051bb01
    PUSH 0x7                            ; 0051b9a1
    PUSH ESI                            ; 0051b9a3
    CALL FUN_004fc350                   ; 0051b9a4
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b9a9
    FLD float ptr [ESP + 0x15c]         ; 0051b9b0
    ADD ESP,0x8                         ; 0051b9b7
    FCOMP double ptr [0x005cd307]       ; 0051b9ba | DAT_005cd307
    FNSTSW AX                           ; 0051b9c0
    SAHF                                ; 0051b9c2
    JA 0x0051bb01                       ; 0051b9c3
        ;   XREF to: 0051bb01 (CONDITIONAL_JUMP)  ; LAB_0051bb01
    PUSH 0x8                            ; 0051b9c9
    PUSH ESI                            ; 0051b9cb
    CALL FUN_004fc350                   ; 0051b9cc
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b9d1
    FLD float ptr [ESP + 0x15c]         ; 0051b9d8
    ADD ESP,0x8                         ; 0051b9df
    FCOMP double ptr [0x005cd307]       ; 0051b9e2 | DAT_005cd307
    FNSTSW AX                           ; 0051b9e8
    SAHF                                ; 0051b9ea
    JA 0x0051bbd6                       ; 0051b9eb
        ;   XREF to: 0051bbd6 (CONDITIONAL_JUMP)  ; LAB_0051bbd6
    PUSH 0x9                            ; 0051b9f1
    PUSH ESI                            ; 0051b9f3
    CALL FUN_004fc350                   ; 0051b9f4
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051b9f9
    FLD float ptr [ESP + 0x15c]         ; 0051ba00
    ADD ESP,0x8                         ; 0051ba07
    FCOMP double ptr [0x005cd307]       ; 0051ba0a | DAT_005cd307
    FNSTSW AX                           ; 0051ba10
    SAHF                                ; 0051ba12
    JA 0x0051bbd6                       ; 0051ba13
        ;   XREF to: 0051bbd6 (CONDITIONAL_JUMP)  ; LAB_0051bbd6
    PUSH 0xa                            ; 0051ba19
    PUSH ESI                            ; 0051ba1b
    CALL FUN_004fc350                   ; 0051ba1c
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051ba21
    FLD float ptr [ESP + 0x15c]         ; 0051ba28
    ADD ESP,0x8                         ; 0051ba2f
    FCOMP double ptr [0x005cd307]       ; 0051ba32 | DAT_005cd307
    FNSTSW AX                           ; 0051ba38
    SAHF                                ; 0051ba3a
    JA 0x0051bbd6                       ; 0051ba3b
        ;   XREF to: 0051bbd6 (CONDITIONAL_JUMP)  ; LAB_0051bbd6
    PUSH 0xb                            ; 0051ba41
    PUSH ESI                            ; 0051ba43
    CALL FUN_004fc350                   ; 0051ba44
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051ba49
    FLD float ptr [ESP + 0x15c]         ; 0051ba50
    ADD ESP,0x8                         ; 0051ba57
    FCOMP double ptr [0x005cd307]       ; 0051ba5a | DAT_005cd307
    FNSTSW AX                           ; 0051ba60
    SAHF                                ; 0051ba62
    JA 0x0051bb01                       ; 0051ba63
        ;   XREF to: 0051bb01 (CONDITIONAL_JUMP)  ; LAB_0051bb01
    PUSH 0xc                            ; 0051ba69
    PUSH ESI                            ; 0051ba6b
    CALL FUN_004fc350                   ; 0051ba6c
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051ba71
    FLD float ptr [ESP + 0x15c]         ; 0051ba78
    ADD ESP,0x8                         ; 0051ba7f
    FCOMP double ptr [0x005cd307]       ; 0051ba82 | DAT_005cd307
    FNSTSW AX                           ; 0051ba88
    SAHF                                ; 0051ba8a
    JA 0x0051bbd6                       ; 0051ba8b
        ;   XREF to: 0051bbd6 (CONDITIONAL_JUMP)  ; LAB_0051bbd6
    PUSH 0xd                            ; 0051ba91
    PUSH ESI                            ; 0051ba93
    CALL FUN_004fc350                   ; 0051ba94
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051ba99
    FLD float ptr [ESP + 0x15c]         ; 0051baa0
    ADD ESP,0x8                         ; 0051baa7
    FCOMP double ptr [0x005cd307]       ; 0051baaa | DAT_005cd307
    FNSTSW AX                           ; 0051bab0
    SAHF                                ; 0051bab2
    JA 0x0051bb01                       ; 0051bab3
        ;   XREF to: 0051bb01 (CONDITIONAL_JUMP)  ; LAB_0051bb01
    PUSH 0xe                            ; 0051bab5
    PUSH ESI                            ; 0051bab7
    CALL FUN_004fc350                   ; 0051bab8
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051babd
    FLD float ptr [ESP + 0x15c]         ; 0051bac4
    ADD ESP,0x8                         ; 0051bacb
    FCOMP double ptr [0x005cd307]       ; 0051bace | DAT_005cd307
    FNSTSW AX                           ; 0051bad4
    SAHF                                ; 0051bad6
    JA 0x0051bb01                       ; 0051bad7
        ;   XREF to: 0051bb01 (CONDITIONAL_JUMP)  ; LAB_0051bb01
    PUSH 0xf                            ; 0051bad9
    PUSH ESI                            ; 0051badb
    CALL FUN_004fc350                   ; 0051badc
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051bae1
    FLD float ptr [ESP + 0x15c]         ; 0051bae8
    ADD ESP,0x8                         ; 0051baef
    FCOMP double ptr [0x005cd307]       ; 0051baf2 | DAT_005cd307
    FNSTSW AX                           ; 0051baf8
    SAHF                                ; 0051bafa
    JBE 0x0051bbf5                      ; 0051bafb
        ;   XREF to: 0051bbf5 (CONDITIONAL_JUMP)  ; LAB_0051bbf5
    LEA EAX,[ESP + 0xbc]                ; 0051bb01
        ;   Label: LAB_0051bb01
    PUSH 0x3f800000                     ; 0051bb08
    PUSH EAX                            ; 0051bb0d
    MOV EDX,dword ptr [EBX + 0x154]     ; 0051bb0e
    PUSH EBX                            ; 0051bb14
    CALL dword ptr [EDX + 0x24]         ; 0051bb15
    ADD ESP,0xc                         ; 0051bb18
    JMP 0x0051b667                      ; 0051bb1b
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051bb20
        ;   Label: LAB_0051bb20
    MOV dword ptr [ESP + 0x154],EAX     ; 0051bb26
    MOV EAX,dword ptr [EBX + 0x20c20]   ; 0051bb2d
    PUSH 0x3f800000                     ; 0051bb33
    PUSH EAX                            ; 0051bb38
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051bb39
    CALL dword ptr [EDX + 0x44]         ; 0051bb3f
    ADD ESP,0x4                         ; 0051bb42
    PUSH EAX                            ; 0051bb45
    LEA EAX,[ESP + 0xc4]                ; 0051bb46
    PUSH EAX                            ; 0051bb4d
    PUSH EBX                            ; 0051bb4e
    LEA ESI,[ESP + 0xb4]                ; 0051bb4f
    CALL FUN_00408b80                   ; 0051bb56
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 0051bb5b
    LEA EAX,[ESP + 0xa0]                ; 0051bb5e
    LEA EDI,[ESP + 0xa0]                ; 0051bb65
    PUSH EAX                            ; 0051bb6c
    LEA ESI,[ESP + 0xb0]                ; 0051bb6d
    JMP 0x0051b656                      ; 0051bb74
        ;   XREF to: 0051b656 (UNCONDITIONAL_JUMP)  ; LAB_0051b656
    LEA EDX,[ESP + 0xbc]                ; 0051bb79
        ;   Label: LAB_0051bb79
    PUSH 0x3fd9999a                     ; 0051bb80
    PUSH EDX                            ; 0051bb85
    MOV ESI,dword ptr [EBX + 0x154]     ; 0051bb86
    PUSH EBX                            ; 0051bb8c
    CALL dword ptr [ESI + 0x24]         ; 0051bb8d
    ADD ESP,0xc                         ; 0051bb90
    JMP 0x0051b667                      ; 0051bb93
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    LEA EDX,[ESP + 0xbc]                ; 0051bb98
        ;   Label: LAB_0051bb98
    PUSH 0x3f800000                     ; 0051bb9f
    PUSH EDX                            ; 0051bba4
    MOV ESI,dword ptr [EBX + 0x154]     ; 0051bba5
    PUSH EBX                            ; 0051bbab
    CALL dword ptr [ESI + 0x24]         ; 0051bbac
    ADD ESP,0xc                         ; 0051bbaf
    JMP 0x0051b667                      ; 0051bbb2
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    LEA EDX,[ESP + 0xbc]                ; 0051bbb7
        ;   Label: LAB_0051bbb7
    PUSH 0x3fd9999a                     ; 0051bbbe
    PUSH EDX                            ; 0051bbc3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051bbc4
    PUSH EBX                            ; 0051bbca
    CALL dword ptr [EAX + 0x24]         ; 0051bbcb
    ADD ESP,0xc                         ; 0051bbce
    JMP 0x0051b667                      ; 0051bbd1
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    LEA EDX,[ESP + 0xbc]                ; 0051bbd6
        ;   Label: LAB_0051bbd6
    PUSH 0x3f800000                     ; 0051bbdd
    PUSH EDX                            ; 0051bbe2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051bbe3
    PUSH EBX                            ; 0051bbe9
    CALL dword ptr [EAX + 0x24]         ; 0051bbea
    ADD ESP,0xc                         ; 0051bbed
    JMP 0x0051b667                      ; 0051bbf0
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0x10                           ; 0051bbf5
        ;   Label: LAB_0051bbf5
    PUSH ESI                            ; 0051bbf7
    CALL FUN_004fc350                   ; 0051bbf8
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051bbfd
    FLD float ptr [ESP + 0x15c]         ; 0051bc04
    ADD ESP,0x8                         ; 0051bc0b
    FCOMP double ptr [0x005cd307]       ; 0051bc0e | DAT_005cd307
    FNSTSW AX                           ; 0051bc14
    SAHF                                ; 0051bc16
    JBE 0x0051b667                      ; 0051bc17
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    LEA EAX,[ESP + 0xbc]                ; 0051bc1d
    PUSH 0x3f800000                     ; 0051bc24
    PUSH EAX                            ; 0051bc29
    MOV EDX,dword ptr [EBX + 0x154]     ; 0051bc2a
    PUSH EBX                            ; 0051bc30
    CALL dword ptr [EDX + 0x24]         ; 0051bc31
    ADD ESP,0xc                         ; 0051bc34
    JMP 0x0051b667                      ; 0051bc37
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    MOV ESI,dword ptr [0x01c5bc48]      ; 0051bc3c | DAT_01c5bc48
        ;   Label: LAB_0051bc3c
    PUSH ESI                            ; 0051bc42
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 0051bc43
    PUSH EDI                            ; 0051bc49
    CALL FUN_0040c840                   ; 0051bc4a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV dword ptr [ESP + 0x148],EAX     ; 0051bc4f
    ADD ESP,0x8                         ; 0051bc56
    MOV dword ptr [ESP + 0x13c],EAX     ; 0051bc59
    TEST EAX,EAX                        ; 0051bc60
    JNZ 0x0051bd47                      ; 0051bc62
        ;   XREF to: 0051bd47 (CONDITIONAL_JUMP)  ; LAB_0051bd47
    XOR EDX,EDX                         ; 0051bc68
        ;   Label: LAB_0051bc68
    MOV dword ptr [ESP + 0x14c],EDX     ; 0051bc6a
    MOV dword ptr [ESP + 0x148],EDX     ; 0051bc71
        ;   Label: LAB_0051bc71
    MOV EAX,[0x00603b28]                ; 0051bc78 | DAT_00603b28
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0051bc7d
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 0051bc84 | DAT_020288b4
    JGE 0x0051beeb                      ; 0051bc8a
        ;   XREF to: 0051beeb (CONDITIONAL_JUMP)  ; LAB_0051beeb
    ADD EAX,dword ptr [ESP + 0x148]     ; 0051bc90
    MOV EAX,dword ptr [EAX + 0x150ff0]  ; 0051bc97
    MOV dword ptr [ESP + 0x150],EAX     ; 0051bc9d
    MOV EAX,[0x01d5ba14]                ; 0051bca4 | DAT_01d5ba14
    LEA EDI,[ESP + 0xf8]                ; 0051bca9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0051bcb0
    LEA ESI,[ESP + 0x11c]               ; 0051bcb7
    MOV EDX,dword ptr [ESP + 0x150]     ; 0051bcbe
    FLD float ptr [EAX + 0x20]          ; 0051bcc5
    FLD float ptr [EAX + 0x24]          ; 0051bcc8
    FLD float ptr [EAX + 0x28]          ; 0051bccb
    FXCH ST2                            ; 0051bcce
    FSUB float ptr [EDX + 0x20]         ; 0051bcd0
    FXCH                                ; 0051bcd3
    FSUB float ptr [EDX + 0x24]         ; 0051bcd5
    FXCH ST2                            ; 0051bcd8
    FSUB float ptr [EDX + 0x28]         ; 0051bcda
    FXCH                                ; 0051bcdd
    FSTP float ptr [ESP + 0x11c]        ; 0051bcdf
    FXCH                                ; 0051bce6
    FSTP float ptr [ESP + 0x120]        ; 0051bce8
    FSTP float ptr [ESP + 0x124]        ; 0051bcef
    MOVSD ES:EDI,ESI                    ; 0051bcf6
    MOVSD ES:EDI,ESI                    ; 0051bcf7
    MOVSD ES:EDI,ESI                    ; 0051bcf8
    FLD float ptr [ESP + 0xfc]          ; 0051bcf9
    FMUL ST0                            ; 0051bd00
    FLD float ptr [ESP + 0xf8]          ; 0051bd02
    FMUL ST0                            ; 0051bd09
    FADDP                               ; 0051bd0b
    FLD float ptr [ESP + 0x100]         ; 0051bd0d
    FMUL ST0                            ; 0051bd14
    FADDP                               ; 0051bd16
    FSQRT                               ; 0051bd18
    FCOMP double ptr [0x005cd30f]       ; 0051bd1a | DAT_005cd30f
    FNSTSW AX                           ; 0051bd20
    SAHF                                ; 0051bd22
    JBE 0x0051bead                      ; 0051bd23
        ;   XREF to: 0051bead (CONDITIONAL_JUMP)  ; LAB_0051bead
    MOV ECX,dword ptr [ESP + 0x14c]     ; 0051bd29
        ;   Label: LAB_0051bd29
    MOV EDX,dword ptr [ESP + 0x148]     ; 0051bd30
    INC ECX                             ; 0051bd37
    ADD EDX,0x4                         ; 0051bd38
    MOV dword ptr [ESP + 0x14c],ECX     ; 0051bd3b
    JMP 0x0051bc71                      ; 0051bd42
        ;   XREF to: 0051bc71 (UNCONDITIONAL_JUMP)  ; LAB_0051bc71
    MOV EDX,dword ptr [0x01ed370c]      ; 0051bd47 | DAT_01ed370c
        ;   Label: LAB_0051bd47
    PUSH EDX                            ; 0051bd4d
    MOV ECX,dword ptr [ESP + 0x148]     ; 0051bd4e
    PUSH ECX                            ; 0051bd55
    LEA ESI,[ESP + 0x118]               ; 0051bd56
    LEA EDI,[ESP + 0xf4]                ; 0051bd5d
    CALL FUN_0054dbd0                   ; 0051bd64
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 0051bd69
    LEA EAX,[ESP + 0xec]                ; 0051bd6c
    LEA ESI,[ESP + 0x110]               ; 0051bd73
    PUSH EAX                            ; 0051bd7a
    MOVSD ES:EDI,ESI                    ; 0051bd7b
    MOVSD ES:EDI,ESI                    ; 0051bd7c
    MOVSD ES:EDI,ESI                    ; 0051bd7d
    PUSH EBX                            ; 0051bd7e
    LEA ESI,[ESP + 0xdc]                ; 0051bd7f
    LEA EDI,[ESP + 0x88]                ; 0051bd86
    CALL FUN_00408b80                   ; 0051bd8d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 0051bd92
    LEA EAX,[ESP + 0x8]                 ; 0051bd95
    LEA ESI,[ESP + 0xd4]                ; 0051bd99
    PUSH EAX                            ; 0051bda0
    MOVSD ES:EDI,ESI                    ; 0051bda1
    MOVSD ES:EDI,ESI                    ; 0051bda2
    MOVSD ES:EDI,ESI                    ; 0051bda3
    CALL FUN_0042abb0                   ; 0051bda4
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0051bda9
    PUSH 0x40400000                     ; 0051bdac
    PUSH 0x3f800000                     ; 0051bdb1
    CALL FUN_0040ce40                   ; 0051bdb6
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051bdbb
    FLD float ptr [ESP + 0x15c]         ; 0051bdc2
    ADD ESP,0x8                         ; 0051bdc9
    LEA EAX,[ESP + 0x80]                ; 0051bdcc
    PUSH EAX                            ; 0051bdd3
    MOV ESI,dword ptr [ESP + 0x144]     ; 0051bdd4
    LEA EDI,[ESP + 0x90]                ; 0051bddb
    PUSH ESI                            ; 0051bde2
    LEA ESI,[ESP + 0x10c]               ; 0051bde3
    FSTP float ptr [ESP + 0x14]         ; 0051bdea
    CALL FUN_00408bf0                   ; 0051bdee
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x10c]               ; 0051bdf3
    LEA EAX,[ESP + 0x94]                ; 0051bdfa
    ADD ESP,0x8                         ; 0051be01
    LEA EDX,[ESP + 0x24]                ; 0051be04
    MOVSD ES:EDI,ESI                    ; 0051be08
    MOVSD ES:EDI,ESI                    ; 0051be09
    MOVSD ES:EDI,ESI                    ; 0051be0a
    CMP EDX,EAX                         ; 0051be0b
    JZ 0x0051be30                       ; 0051be0d
        ;   XREF to: 0051be30 (CONDITIONAL_JUMP)  ; LAB_0051be30
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0051be0f
    MOV dword ptr [ESP + 0x24],EAX      ; 0051be16
    MOV EAX,dword ptr [ESP + 0x90]      ; 0051be1a
    MOV dword ptr [ESP + 0x28],EAX      ; 0051be21
    MOV EAX,dword ptr [ESP + 0x94]      ; 0051be25
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051be2c
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0051be30
        ;   Label: LAB_0051be30
    LEA EAX,[ESP + 0x8]                 ; 0051be37
    MOV dword ptr [ESP + 0x3c],EBX      ; 0051be3b
    MOV dword ptr [ESP + 0x40],EBX      ; 0051be3f
    PUSH EAX                            ; 0051be43
    MOV EDI,dword ptr [ESP + 0x140]     ; 0051be44
    MOV EDX,dword ptr [EDX + 0x154]     ; 0051be4b
    PUSH EDI                            ; 0051be51
    CALL dword ptr [EDX + 0x108]        ; 0051be52
    ADD ESP,0x8                         ; 0051be58
    FLDZ                                ; 0051be5b
    FLD float ptr [ESP + 0xc]           ; 0051be5d
    FSTP double ptr [ESP]               ; 0051be61
    FCOMP double ptr [ESP]              ; 0051be64
    FNSTSW AX                           ; 0051be67
    SAHF                                ; 0051be69
    JNC 0x0051bc68                      ; 0051be6a
        ;   XREF to: 0051bc68 (CONDITIONAL_JUMP)  ; LAB_0051bc68
    FLD double ptr [ESP]                ; 0051be70
    FMUL double ptr [0x005cd2ff]        ; 0051be73 | DAT_005cd2ff
    CALL FUN_005a3120                   ; 0051be79
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x154]       ; 0051be7e
    MOV EAX,dword ptr [ESP + 0x154]     ; 0051be85
    PUSH 0x0                            ; 0051be8c
    INC EAX                             ; 0051be8e
    PUSH EAX                            ; 0051be8f
    PUSH 0x0                            ; 0051be90
    LEA EAX,[ESP + 0x8c]                ; 0051be92
    PUSH EAX                            ; 0051be99
    MOV EAX,[0x005fed24]                ; 0051be9a | DAT_005fed24
    PUSH EAX                            ; 0051be9f
    CALL FUN_004ce9c0                   ; 0051bea0
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce9c0()
    ADD ESP,0x14                        ; 0051bea5
    JMP 0x0051bc68                      ; 0051bea8
        ;   XREF to: 0051bc68 (UNCONDITIONAL_JUMP)  ; LAB_0051bc68
    LEA EAX,[ESP + 0x44]                ; 0051bead
        ;   Label: LAB_0051bead
    PUSH EAX                            ; 0051beb1
    MOV EDI,0x40a00000                  ; 0051beb2
    CALL FUN_0042abb0                   ; 0051beb7
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0051bebc
    LEA EAX,[ESP + 0x44]                ; 0051bebf
    MOV EDX,dword ptr [ESP + 0x150]     ; 0051bec3
    MOV dword ptr [ESP + 0x48],EDI      ; 0051beca
    PUSH EAX                            ; 0051bece
    MOV EAX,dword ptr [ESP + 0x154]     ; 0051becf
    MOV EDX,dword ptr [EDX + 0x154]     ; 0051bed6
    PUSH EAX                            ; 0051bedc
    CALL dword ptr [EDX + 0x108]        ; 0051bedd
    ADD ESP,0x8                         ; 0051bee3
    JMP 0x0051bd29                      ; 0051bee6
        ;   XREF to: 0051bd29 (UNCONDITIONAL_JUMP)  ; LAB_0051bd29
    MOV dword ptr [EBX + 0x26fc],0x0    ; 0051beeb
        ;   Label: LAB_0051beeb
    JMP 0x0051b667                      ; 0051bef5
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 0051befa
        ;   Label: LAB_0051befa
    TEST ECX,ECX                        ; 0051bf00
    JZ 0x0051b667                       ; 0051bf02
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    LEA EAX,[ECX + 0x20]                ; 0051bf08
    PUSH EAX                            ; 0051bf0b
    PUSH EBX                            ; 0051bf0c
    LEA ESI,[ESP + 0xe8]                ; 0051bf0d
    CALL FUN_00408bf0                   ; 0051bf14
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    ADD ESP,0x8                         ; 0051bf19
    JMP 0x0051b667                      ; 0051bf1c
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0x5cd2a6                       ; 0051bf21 | = "fall-1.wav"
        ;   Label: LAB_0051bf21
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051bf26
    PUSH EBX                            ; 0051bf2c
    CALL dword ptr [EAX + 0x2c]         ; 0051bf2d
    ADD ESP,0x8                         ; 0051bf30
    JMP 0x0051b667                      ; 0051bf33
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH EBX                            ; 0051bf38
        ;   Label: LAB_0051bf38
    CALL FUN_00520d20                   ; 0051bf39
        ;   XREF to: 00520d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00520d20()
    ADD ESP,0x4                         ; 0051bf3e
    JMP 0x0051b667                      ; 0051bf41
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0xb13                          ; 0051bf46
        ;   Label: LAB_0051bf46
    PUSH ECX                            ; 0051bf4b
    PUSH 0x5cd2b1                       ; 0051bf4c | = "actionPending = %d\nprye.cpp line %d"
    MOV EDI,dword ptr [0x005fb140]      ; 0051bf51 | DAT_005fb140
    PUSH EDI                            ; 0051bf57
    CALL FUN_0047cee0                   ; 0051bf58
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    ADD ESP,0x10                        ; 0051bf5d
    JMP 0x0051bff1                      ; 0051bf60
        ;   XREF to: 0051bff1 (UNCONDITIONAL_JUMP)  ; LAB_0051bff1
    PUSH EBX                            ; 0051bf65
        ;   Label: LAB_0051bf65
    CALL FUN_004d3460                   ; 0051bf66
        ;   XREF to: 004d3460 (UNCONDITIONAL_CALL)  ; undefined FUN_004d3460()
    ADD ESP,0x4                         ; 0051bf6b
    JMP 0x0051b667                      ; 0051bf6e
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    MOV EAX,[0x005e3514]                ; 0051bf73 | DAT_005e3514
        ;   Label: LAB_0051bf73
    MOV dword ptr [EBX + 0x251c],EAX    ; 0051bf78
    JMP 0x0051b667                      ; 0051bf7e
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    MOV EAX,[0x005e3518]                ; 0051bf83 | DAT_005e3518
        ;   Label: LAB_0051bf83
    MOV dword ptr [EBX + 0x251c],EAX    ; 0051bf88
    JMP 0x0051b667                      ; 0051bf8e
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    JBE 0x0051b667                      ; 0051bf93
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
        ;   Label: LAB_0051bf93
    CMP EAX,0x17                        ; 0051bf99
    JNC 0x0051bfad                      ; 0051bf9c
        ;   XREF to: 0051bfad (CONDITIONAL_JUMP)  ; LAB_0051bfad
    CMP EAX,0x15                        ; 0051bf9e
    JNC 0x0051bfd2                      ; 0051bfa1
        ;   XREF to: 0051bfd2 (CONDITIONAL_JUMP)  ; LAB_0051bfd2
    CMP EAX,0x13                        ; 0051bfa3
    JZ 0x0051bf38                       ; 0051bfa6
        ;   XREF to: 0051bf38 (CONDITIONAL_JUMP)  ; LAB_0051bf38
    JMP 0x0051c08c                      ; 0051bfa8
        ;   XREF to: 0051c08c (UNCONDITIONAL_JUMP)  ; LAB_0051c08c
    JBE 0x0051bf65                      ; 0051bfad
        ;   XREF to: 0051bf65 (CONDITIONAL_JUMP)  ; LAB_0051bf65
        ;   Label: LAB_0051bfad
    CMP EAX,0x29a                       ; 0051bfaf
    JNC 0x0051bfc4                      ; 0051bfb4
        ;   XREF to: 0051bfc4 (CONDITIONAL_JUMP)  ; LAB_0051bfc4
    CMP EAX,0x18                        ; 0051bfb6
    JZ 0x0051b667                       ; 0051bfb9
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    JMP 0x0051c08c                      ; 0051bfbf
        ;   XREF to: 0051c08c (UNCONDITIONAL_JUMP)  ; LAB_0051c08c
    JBE 0x0051bf73                      ; 0051bfc4
        ;   XREF to: 0051bf73 (CONDITIONAL_JUMP)  ; LAB_0051bf73
        ;   Label: LAB_0051bfc4
    CMP EAX,0x29b                       ; 0051bfc6
    JZ 0x0051bf83                       ; 0051bfcb
        ;   XREF to: 0051bf83 (CONDITIONAL_JUMP)  ; LAB_0051bf83
    JMP 0x0051c08c                      ; 0051bfcd
        ;   XREF to: 0051c08c (UNCONDITIONAL_JUMP)  ; LAB_0051c08c
    JBE 0x0051b826                      ; 0051bfd2
        ;   XREF to: 0051b826 (CONDITIONAL_JUMP)  ; LAB_0051b826
        ;   Label: LAB_0051bfd2
    MOV ECX,dword ptr [EBX + 0x20b64]   ; 0051bfd8
    CMP ECX,0x5                         ; 0051bfde
    JNZ 0x0051bf46                      ; 0051bfe1
        ;   XREF to: 0051bf46 (CONDITIONAL_JUMP)  ; LAB_0051bf46
    MOV dword ptr [EBX + 0x20b64],0x0   ; 0051bfe7
    CMP dword ptr [EBX + 0x20b94],0x0   ; 0051bff1
        ;   Label: LAB_0051bff1
    JNZ 0x0051c013                      ; 0051bff8
        ;   XREF to: 0051c013 (CONDITIONAL_JUMP)  ; LAB_0051c013
    PUSH 0xb19                          ; 0051bffa
    PUSH 0x5cd2d5                       ; 0051bfff | = "doorToOpen == NULL\nprye.cpp line %d"
    MOV EDX,dword ptr [0x005fb140]      ; 0051c004 | DAT_005fb140
    PUSH EDX                            ; 0051c00a
    CALL FUN_0047cee0                   ; 0051c00b
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cee0()
    ADD ESP,0xc                         ; 0051c010
    PUSH EBX                            ; 0051c013
        ;   Label: LAB_0051c013
    CALL FUN_004d3250                   ; 0051c014
        ;   XREF to: 004d3250 (UNCONDITIONAL_CALL)  ; undefined FUN_004d3250()
    ADD ESP,0x4                         ; 0051c019
    TEST EAX,EAX                        ; 0051c01c
    JNZ 0x0051b667                      ; 0051c01e
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    PUSH 0x1                            ; 0051c024
    PUSH EAX                            ; 0051c026
    MOV ECX,dword ptr [ESP + 0x14c]     ; 0051c027
    PUSH ECX                            ; 0051c02e
    CALL FUN_004fc0d0                   ; 0051c02f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0051c034
    JMP 0x0051b667                      ; 0051c037
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    JBE 0x0051bc3c                      ; 0051c03c
        ;   XREF to: 0051bc3c (CONDITIONAL_JUMP)  ; LAB_0051bc3c
        ;   Label: LAB_0051c03c
    CMP EAX,0xf                         ; 0051c042
    JNC 0x0051c05f                      ; 0051c045
        ;   XREF to: 0051c05f (CONDITIONAL_JUMP)  ; LAB_0051c05f
    CMP EAX,0x7                         ; 0051c047
    JZ 0x0051b5c3                       ; 0051c04a
        ;   XREF to: 0051b5c3 (CONDITIONAL_JUMP)  ; LAB_0051b5c3
    PUSH ESI                            ; 0051c050
    PUSH EBX                            ; 0051c051
    CALL FUN_00433fb0                   ; 0051c052
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 0051c057
    JMP 0x0051b667                      ; 0051c05a
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    JBE 0x0051befa                      ; 0051c05f
        ;   XREF to: 0051befa (CONDITIONAL_JUMP)  ; LAB_0051befa
        ;   Label: LAB_0051c05f
    CMP EAX,0x11                        ; 0051c065
    JZ 0x0051bf21                       ; 0051c068
        ;   XREF to: 0051bf21 (CONDITIONAL_JUMP)  ; LAB_0051bf21
    PUSH ESI                            ; 0051c06e
    PUSH EBX                            ; 0051c06f
    CALL FUN_00433fb0                   ; 0051c070
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 0051c075
    JMP 0x0051b667                      ; 0051c078
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667
    JBE 0x0051b729                      ; 0051c07d
        ;   XREF to: 0051b729 (CONDITIONAL_JUMP)  ; LAB_0051b729
        ;   Label: LAB_0051c07d
    CMP EAX,0x3                         ; 0051c083
    JZ 0x0051b67e                       ; 0051c086
        ;   XREF to: 0051b67e (CONDITIONAL_JUMP)  ; LAB_0051b67e
    PUSH ESI                            ; 0051c08c
        ;   Label: LAB_0051c08c
    PUSH EBX                            ; 0051c08d
    CALL FUN_00433fb0                   ; 0051c08e
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 0051c093
    JMP 0x0051b667                      ; 0051c096
        ;   XREF to: 0051b667 (UNCONDITIONAL_JUMP)  ; LAB_0051b667

