; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049cc79
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c6e5
;   TerminatedCString s_CNetGame_processClientFr_0058c6f9
;   double DOUBLE_0058c732 = 0.0000152587890625
;   double DOUBLE_0058c73a = 30
;   double DOUBLE_0058c742 = 0.100000000000000
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea408
;   undefined4 DAT_01d09c00
;   undefined4 DAT_01d09c68
;
; Called Functions:
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0
;   core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
;   crt_string.c_memmove_FUN_00566170
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed720
        ;   Label: core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720
    PUSH ESI                            ; 004ed721
    PUSH EDI                            ; 004ed722
    PUSH EBP                            ; 004ed723
    MOV EBP,ESP                         ; 004ed724
    SUB ESP,0x10                        ; 004ed726
    AND ESP,0xfffffff8                  ; 004ed729
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ed72c
    CMP dword ptr [ESI],0x2             ; 004ed72f
    JNZ 0x004ed8a0                      ; 004ed732
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    CMP dword ptr [ESI + 0x4],0x3       ; 004ed738
    JNZ 0x004ed8a0                      ; 004ed73c
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    CMP dword ptr [ESI + 0x110],0x0     ; 004ed742
    JL 0x004ed8a0                       ; 004ed749
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    CMP dword ptr [ESI + 0x114],0x0     ; 004ed74f
    JL 0x004ed8a7                       ; 004ed756
        ;   XREF to: 004ed8a7 (CONDITIONAL_JUMP)  ; LAB_004ed8a7
    MOV ECX,dword ptr [ESI + 0x110]     ; 004ed75c
        ;   Label: LAB_004ed75c
    PUSH 0x41200000                     ; 004ed762
    PUSH ECX                            ; 004ed767
    PUSH ESI                            ; 004ed768
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10 ; 004ed769
        ;   XREF to: 004ebe10 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10()
    ADD ESP,0xc                         ; 004ed76e
    PUSH ESI                            ; 004ed771
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004ed772
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740()
    MOV EBX,dword ptr [ESI]             ; 004ed777
    ADD ESP,0x4                         ; 004ed779
    CMP EBX,0x2                         ; 004ed77c
    JNZ 0x004ed8a0                      ; 004ed77f
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    IMUL EAX,dword ptr [ESI + 0x114],0x78 ; 004ed785
        ;   Label: LAB_004ed785
    MOV ECX,dword ptr [0x01d09c00]      ; 004ed78c | DAT_01d09c00
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x68] ; 004ed792
    XOR EDX,EDX                         ; 004ed796
    TEST ECX,ECX                        ; 004ed798
    JLE 0x004ed8da                      ; 004ed79a
        ;   XREF to: 004ed8da (CONDITIONAL_JUMP)  ; LAB_004ed8da
    XOR EAX,EAX                         ; 004ed7a0
    IMUL ECX,ECX,0x64                   ; 004ed7a2
    CMP EBX,dword ptr [EAX + 0x1d09c04] ; 004ed7a5 | DAT_01d09c68
        ;   Label: LAB_004ed7a5
    JNZ 0x004ed8ce                      ; 004ed7ab
        ;   XREF to: 004ed8ce (CONDITIONAL_JUMP)  ; LAB_004ed8ce
    TEST EDX,EDX                        ; 004ed7b1
    JL 0x004ed8da                       ; 004ed7b3
        ;   XREF to: 004ed8da (CONDITIONAL_JUMP)  ; LAB_004ed8da
    ADD EAX,0x1d09c04                   ; 004ed7b9
    PUSH EAX                            ; 004ed7be | DAT_01d09c68
    PUSH ESI                            ; 004ed7bf
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980 ; 004ed7c0
        ;   XREF to: 004ed980 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980()
    ADD ESP,0x8                         ; 004ed7c5
    PUSH ESI                            ; 004ed7c8
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0 ; 004ed7c9
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0()
    MOV EAX,dword ptr [ESI + 0x114]     ; 004ed7ce
    SHL EAX,0x3                         ; 004ed7d4
    MOV EDX,EAX                         ; 004ed7d7
    SHL EAX,0x4                         ; 004ed7d9
    SUB EAX,EDX                         ; 004ed7dc
    XOR EDI,EDI                         ; 004ed7de
    ADD ESP,0x4                         ; 004ed7e0
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x68] ; 004ed7e3
    MOV ECX,dword ptr [0x01d09c00]      ; 004ed7e7 | DAT_01d09c00
    MOV dword ptr [ESP + 0x4],EAX       ; 004ed7ed
    TEST ECX,ECX                        ; 004ed7f1
    JLE 0x004ed845                      ; 004ed7f3
        ;   XREF to: 004ed845 (CONDITIONAL_JUMP)  ; LAB_004ed845
    MOV EAX,0x1d09c04                   ; 004ed7f5
    ADD EAX,0x64                        ; 004ed7fa
    XOR EBX,EBX                         ; 004ed7fd
    MOV dword ptr [ESP + 0x8],EAX       ; 004ed7ff | DAT_01d09c68
    MOV ECX,dword ptr [ESP + 0x4]       ; 004ed803
        ;   Label: LAB_004ed803
    CMP ECX,dword ptr [EBX + 0x1d09c04] ; 004ed807
    JLE 0x004ed94b                      ; 004ed80d
        ;   XREF to: 004ed94b (CONDITIONAL_JUMP)  ; LAB_004ed94b
    MOV EDX,dword ptr [0x01d09c00]      ; 004ed813 | DAT_01d09c00
    DEC EDX                             ; 004ed819
    MOV EAX,EDX                         ; 004ed81a
    SUB EAX,EDI                         ; 004ed81c
    IMUL EAX,EAX,0x64                   ; 004ed81e
    PUSH EAX                            ; 004ed821
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ed822
    MOV EAX,0x1d09c04                   ; 004ed826
    PUSH ECX                            ; 004ed82b | DAT_01d09c68
    ADD EAX,EBX                         ; 004ed82c
    PUSH EAX                            ; 004ed82e
    MOV dword ptr [0x01d09c00],EDX      ; 004ed82f | DAT_01d09c00
    CALL crt_string.c_memmove_FUN_00566170 ; 004ed835
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 004ed83a
    CMP EDI,dword ptr [0x01d09c00]      ; 004ed83d | DAT_01d09c00
        ;   Label: LAB_004ed83d
    JL 0x004ed803                       ; 004ed843
        ;   XREF to: 004ed803 (CONDITIONAL_JUMP)  ; LAB_004ed803
    MOV EAX,dword ptr [ESI + 0x114]     ; 004ed845
        ;   Label: LAB_004ed845
    SHL EAX,0x3                         ; 004ed84b
    MOV EDX,EAX                         ; 004ed84e
    SHL EAX,0x4                         ; 004ed850
    MOV dword ptr [ESI + 0x168],0x0     ; 004ed853
    SUB EAX,EDX                         ; 004ed85d
    XOR EBX,EBX                         ; 004ed85f
    MOV EDX,dword ptr [0x01d09c00]      ; 004ed861 | DAT_01d09c00
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x68] ; 004ed867
    TEST EDX,EDX                        ; 004ed86b
    JLE 0x004ed8a0                      ; 004ed86d
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    MOV dword ptr [ESP + 0xc],EDX       ; 004ed86f
    MOV EDI,dword ptr [ESP + 0xc]       ; 004ed873
    SHL EDX,0x2                         ; 004ed877
    SUB EDX,EDI                         ; 004ed87a
    SHL EDX,0x3                         ; 004ed87c
    ADD EDX,EDI                         ; 004ed87f
    XOR EAX,EAX                         ; 004ed881
    SHL EDX,0x2                         ; 004ed883
    CMP ECX,dword ptr [EAX + 0x1d09c04] ; 004ed886 | DAT_01d09c68
        ;   Label: LAB_004ed886
    JNZ 0x004ed95f                      ; 004ed88c
        ;   XREF to: 004ed95f (CONDITIONAL_JUMP)  ; LAB_004ed95f
    TEST EBX,EBX                        ; 004ed892
    JL 0x004ed8a0                       ; 004ed894
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    MOV dword ptr [ESI + 0x168],0x1     ; 004ed896
    MOV ESP,EBP                         ; 004ed8a0
        ;   Label: LAB_004ed8a0
    POP EBP                             ; 004ed8a2
    POP EDI                             ; 004ed8a3
    POP ESI                             ; 004ed8a4
    POP EBX                             ; 004ed8a5
    RET                                 ; 004ed8a6
    MOV EAX,0x58c6e5                    ; 004ed8a7 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ed8a7
    MOV EDX,0x97c                       ; 004ed8ac
    PUSH 0x58c6f9                       ; 004ed8b1 | = "CNetGame::processClientFrame - I'm no..."
    MOV [0x01cc4800],EAX                ; 004ed8b6 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ed8bb | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ed8c1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ed8c6
    JMP 0x004ed75c                      ; 004ed8c9
        ;   XREF to: 004ed75c (UNCONDITIONAL_JUMP)  ; LAB_004ed75c
    ADD EAX,0x64                        ; 004ed8ce
        ;   Label: LAB_004ed8ce
    INC EDX                             ; 004ed8d1
    CMP EAX,ECX                         ; 004ed8d2
    JL 0x004ed7a5                       ; 004ed8d4
        ;   XREF to: 004ed7a5 (CONDITIONAL_JUMP)  ; LAB_004ed7a5
    PUSH ESI                            ; 004ed8da
        ;   Label: LAB_004ed8da
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004ed8db
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740()
    MOV EBX,dword ptr [ESI]             ; 004ed8e0
    ADD ESP,0x4                         ; 004ed8e2
    CMP EBX,0x2                         ; 004ed8e5
    JNZ 0x004ed8a0                      ; 004ed8e8
        ;   XREF to: 004ed8a0 (CONDITIONAL_JUMP)  ; LAB_004ed8a0
    MOV EAX,[0x01cea408]                ; 004ed8ea | DAT_01cea408
    MOV EDX,dword ptr [0x01cea3f8]      ; 004ed8ef | DAT_01cea3f8
    SUB EDX,EAX                         ; 004ed8f5
    MOV dword ptr [ESP + 0xc],EDX       ; 004ed8f7
    FILD dword ptr [ESP + 0xc]          ; 004ed8fb
    FMUL double ptr [0x0058c732]        ; 004ed8ff | DOUBLE_0058c732
    FST float ptr [ESP]                 ; 004ed905
    FLDZ                                ; 004ed908
    FCOMPP                              ; 004ed90a
    FNSTSW AX                           ; 004ed90c
    SAHF                                ; 004ed90e
    JBE 0x004ed916                      ; 004ed90f
        ;   XREF to: 004ed916 (CONDITIONAL_JUMP)  ; LAB_004ed916
    XOR EAX,EAX                         ; 004ed911
    MOV dword ptr [ESP],EAX             ; 004ed913
    FLD float ptr [ESP]                 ; 004ed916
        ;   Label: LAB_004ed916
    FCOMP double ptr [0x0058c73a]       ; 004ed919 | DOUBLE_0058c73a
    FNSTSW AX                           ; 004ed91f
    SAHF                                ; 004ed921
    JBE 0x004ed92b                      ; 004ed922
        ;   XREF to: 004ed92b (CONDITIONAL_JUMP)  ; LAB_004ed92b
    MOV dword ptr [ESP],0x41f00000      ; 004ed924
    FLD float ptr [ESP]                 ; 004ed92b
        ;   Label: LAB_004ed92b
    FCOMP double ptr [0x0058c742]       ; 004ed92e | DOUBLE_0058c742
    FNSTSW AX                           ; 004ed934
    SAHF                                ; 004ed936
    JBE 0x004ed785                      ; 004ed937
        ;   XREF to: 004ed785 (CONDITIONAL_JUMP)  ; LAB_004ed785
    PUSH ESI                            ; 004ed93d
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0 ; 004ed93e
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0()
    ADD ESP,0x4                         ; 004ed943
    JMP 0x004ed785                      ; 004ed946
        ;   XREF to: 004ed785 (UNCONDITIONAL_JUMP)  ; LAB_004ed785
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ed94b
        ;   Label: LAB_004ed94b
    INC EDI                             ; 004ed94f
    ADD EAX,0x64                        ; 004ed950
    ADD EBX,0x64                        ; 004ed953
    MOV dword ptr [ESP + 0x8],EAX       ; 004ed956
    JMP 0x004ed83d                      ; 004ed95a
        ;   XREF to: 004ed83d (UNCONDITIONAL_JUMP)  ; LAB_004ed83d
    ADD EAX,0x64                        ; 004ed95f
        ;   Label: LAB_004ed95f
    INC EBX                             ; 004ed962
    CMP EAX,EDX                         ; 004ed963
    JL 0x004ed886                       ; 004ed965
        ;   XREF to: 004ed886 (CONDITIONAL_JUMP)  ; LAB_004ed886
    MOV ESP,EBP                         ; 004ed96b
    POP EBP                             ; 004ed96d
    POP EDI                             ; 004ed96e
    POP ESI                             ; 004ed96f
    POP EBX                             ; 004ed970
    RET                                 ; 004ed971

