; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421670(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_0044bf20 at 0044c114
;   FUN_00478220 at 004782bb
;   FUN_0053a3d0 at 0053a4bf
;   FUN_005a8670 at 005a873b
;
; Referenced Globals:
;   undefined4 DAT_005fce08
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c50930
;   undefined4 DAT_01c50934
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00420570
;   FUN_00482170
;   FUN_00483d70
;   FUN_00483d80
;   FUN_00483e60
;   FUN_00553140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421670
        ;   Label: FUN_00421670
    PUSH ESI                            ; 00421671
    PUSH EDI                            ; 00421672
    PUSH EBP                            ; 00421673
    SUB ESP,0xbc                        ; 00421674
    MOV EAX,ESP                         ; 0042167a
    XOR EBP,EBP                         ; 0042167c
    MOV dword ptr [ESP + 0xb8],EAX      ; 0042167e
    PUSH EBP                            ; 00421685
        ;   Label: LAB_00421685
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00421686
    PUSH EDX                            ; 0042168d
    LEA ESI,[ESP + 0x9c]                ; 0042168e
    LEA EDI,[ESP + 0xb4]                ; 00421695
    CALL FUN_00420570                   ; 0042169c
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined FUN_00420570()
    LEA ESI,[ESP + 0x9c]                ; 004216a1
    ADD ESP,0x8                         ; 004216a8
    LEA EAX,[ESP + 0xac]                ; 004216ab
    MOV EBX,dword ptr [ESP + 0xb8]      ; 004216b2
    MOVSD ES:EDI,ESI                    ; 004216b9
    MOVSD ES:EDI,ESI                    ; 004216ba
    MOVSD ES:EDI,ESI                    ; 004216bb
    FLD float ptr [EAX]                 ; 004216bc
    FMUL float ptr [0x005fce08]         ; 004216be | DAT_005fce08
    FISTP dword ptr [EBX]               ; 004216c4
    FLD float ptr [EAX + 0x4]           ; 004216c6
    FMUL float ptr [0x005fce08]         ; 004216c9 | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 004216cf
    FLD float ptr [EAX + 0x8]           ; 004216d2
    FMUL float ptr [0x005fce08]         ; 004216d5 | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 004216db
    LEA ECX,[EBX + 0xc]                 ; 004216de
    INC EBP                             ; 004216e1
    MOV dword ptr [ESP + 0xb8],ECX      ; 004216e2
    CMP EBP,0x8                         ; 004216e9
    JL 0x00421685                       ; 004216ec
        ;   XREF to: 00421685 (CONDITIONAL_JUMP)  ; LAB_00421685
    MOV EAX,ESP                         ; 004216ee
    PUSH EAX                            ; 004216f0
    PUSH 0x8                            ; 004216f1
    MOV EBX,dword ptr [0x00622c18]      ; 004216f3 | DAT_00622c18
    PUSH EBX                            ; 004216f9 | DAT_01e82168
    CALL FUN_00553140                   ; 004216fa
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; undefined FUN_00553140()
    ADD ESP,0xc                         ; 004216ff
    PUSH 0x1                            ; 00421702
    MOV EDI,dword ptr [0x00612560]      ; 00421704 | DAT_00612560
    MOV ESI,0x4                         ; 0042170a
    PUSH EDI                            ; 0042170f | DAT_01bc120c
    MOV dword ptr [ESP + 0x6c],ESI      ; 00421710
    CALL FUN_00483d70                   ; 00421714
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d70()
    ADD ESP,0x8                         ; 00421719
    PUSH 0x0                            ; 0042171c
    MOV EBP,dword ptr [0x00612560]      ; 0042171e | DAT_00612560
    PUSH EBP                            ; 00421724 | DAT_01bc120c
    CALL FUN_00483d80                   ; 00421725
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 0042172a
    LEA EBX,[ESP + 0x88]                ; 0042172d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00421734
    FLD float ptr [EAX]                 ; 0042173b
    FMUL float ptr [0x005fce08]         ; 0042173d | DAT_005fce08
    FISTP dword ptr [EBX]               ; 00421743
    FLD float ptr [EAX + 0x4]           ; 00421745
    FMUL float ptr [0x005fce08]         ; 00421748 | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 0042174e
    FLD float ptr [EAX + 0x8]           ; 00421751
    FMUL float ptr [0x005fce08]         ; 00421754 | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 0042175a
    LEA EBX,[ESP + 0xa0]                ; 0042175d
    ADD EAX,0xc                         ; 00421764
    FLD float ptr [EAX]                 ; 00421767
    FMUL float ptr [0x005fce08]         ; 00421769 | DAT_005fce08
    FISTP dword ptr [EBX]               ; 0042176f
    FLD float ptr [EAX + 0x4]           ; 00421771
    FMUL float ptr [0x005fce08]         ; 00421774 | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 0042177a
    FLD float ptr [EAX + 0x8]           ; 0042177d
    FMUL float ptr [0x005fce08]         ; 00421780 | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 00421786
    MOV EAX,[0x00612560]                ; 00421789 | DAT_00612560
    PUSH EAX                            ; 0042178e | DAT_01bc120c
    CALL FUN_00483e60                   ; 0042178f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00421794
    TEST EAX,EAX                        ; 00421797
    JNZ 0x0042188e                      ; 00421799
        ;   XREF to: 0042188e (CONDITIONAL_JUMP)  ; LAB_0042188e
    MOV [0x01c50934],EAX                ; 0042179f | DAT_01c50934
    MOV [0x01c50930],EAX                ; 004217a4 | DAT_01c50930
    MOV EAX,[0x00612560]                ; 004217a9 | DAT_00612560
    MOV EBX,dword ptr [EAX]             ; 004217ae | DAT_01bc120c
    MOV dword ptr [EBX + 0x20],0x7fff   ; 004217b0
    MOV EBX,dword ptr [EAX]             ; 004217b7 | DAT_01bc120c
    XOR EDX,EDX                         ; 004217b9
    MOV dword ptr [EBX + 0x24],EDX      ; 004217bb
    MOV EBX,dword ptr [EAX]             ; 004217be | DAT_01bc120c
    MOV dword ptr [EBX + 0x28],EDX      ; 004217c0
    MOV EBX,dword ptr [EAX]             ; 004217c3 | DAT_01bc120c
    MOV dword ptr [EBX + 0x50],EDX      ; 004217c5
    MOV EBX,dword ptr [EAX]             ; 004217c8 | DAT_01bc120c
    MOV dword ptr [EBX + 0x54],0x7fff   ; 004217ca
    MOV EBX,dword ptr [EAX]             ; 004217d1 | DAT_01bc120c
    MOV dword ptr [EBX + 0x58],EDX      ; 004217d3
    MOV EBX,dword ptr [EAX]             ; 004217d6 | DAT_01bc120c
    MOV dword ptr [EBX + 0x80],EDX      ; 004217d8
    MOV EBX,dword ptr [EAX]             ; 004217de | DAT_01bc120c
    MOV dword ptr [EBX + 0x84],EDX      ; 004217e0
    MOV EBX,dword ptr [EAX]             ; 004217e6 | DAT_01bc120c
    MOV dword ptr [EBX + 0x88],0x7fff   ; 004217e8
    MOV EBX,dword ptr [EAX]             ; 004217f2 | DAT_01bc120c
    MOV dword ptr [EBX + 0xb0],0x7fff   ; 004217f4
    MOV EBX,dword ptr [EAX]             ; 004217fe | DAT_01bc120c
    MOV dword ptr [EBX + 0xb4],0x7fff   ; 00421800
    MOV EBX,dword ptr [EAX]             ; 0042180a | DAT_01bc120c
    MOV dword ptr [EBX + 0xb8],EDX      ; 0042180c
    MOV EBX,dword ptr [EAX]             ; 00421812 | DAT_01bc120c
    MOV dword ptr [EBX + 0xe0],EDX      ; 00421814
    MOV EBX,dword ptr [EAX]             ; 0042181a | DAT_01bc120c
    MOV dword ptr [EBX + 0xe4],0x7fff   ; 0042181c
    MOV EBX,dword ptr [EAX]             ; 00421826 | DAT_01bc120c
    MOV dword ptr [EBX + 0xe8],0x7fff   ; 00421828
    MOV EBX,dword ptr [EAX]             ; 00421832 | DAT_01bc120c
    MOV dword ptr [EBX + 0x110],0x7fff  ; 00421834
    MOV EBX,dword ptr [EAX]             ; 0042183e | DAT_01bc120c
    MOV dword ptr [EBX + 0x114],EDX     ; 00421840
    MOV EBX,dword ptr [EAX]             ; 00421846 | DAT_01bc120c
    MOV dword ptr [EBX + 0x118],0x7fff  ; 00421848
    MOV EBX,dword ptr [EAX]             ; 00421852 | DAT_01bc120c
    MOV dword ptr [EBX + 0x140],0x7fff  ; 00421854
    MOV EBX,dword ptr [EAX]             ; 0042185e | DAT_01bc120c
    MOV dword ptr [EBX + 0x144],0x7fff  ; 00421860
    MOV EBX,dword ptr [EAX]             ; 0042186a | DAT_01bc120c
    MOV dword ptr [EBX + 0x148],0x7fff  ; 0042186c
    MOV EBX,dword ptr [EAX]             ; 00421876 | DAT_01bc120c
    MOV dword ptr [EBX + 0x170],EDX     ; 00421878
    MOV EBX,dword ptr [EAX]             ; 0042187e | DAT_01bc120c
    MOV dword ptr [EBX + 0x174],EDX     ; 00421880
    MOV EAX,dword ptr [EAX]             ; 00421886 | DAT_01bc120c
    MOV dword ptr [EAX + 0x178],EDX     ; 00421888
    MOV EBX,0xffffffff                  ; 0042188e
        ;   Label: LAB_0042188e
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421893
    MOV EDX,0x4                         ; 0042189a
    MOV ECX,0x6                         ; 0042189f
    PUSH 0x2c4                          ; 004218a4
    MOV EDI,0x1                         ; 004218a9
    XOR ESI,ESI                         ; 004218ae
    MOV dword ptr [ESP + 0x6c],EBX      ; 004218b0
    MOV dword ptr [ESP + 0x70],ESI      ; 004218b4
    MOV dword ptr [ESP + 0x74],ESI      ; 004218b8
    MOV dword ptr [ESP + 0x78],EAX      ; 004218bc
    MOV EBP,EAX                         ; 004218c0
    MOV dword ptr [ESP + 0x7c],ESI      ; 004218c2
    MOV dword ptr [ESP + 0x80],EDX      ; 004218c6
    MOV dword ptr [ESP + 0x84],ECX      ; 004218cd
    MOV EBX,0x2                         ; 004218d4
    LEA EAX,[ESP + 0x64]                ; 004218d9
    NEG EBP                             ; 004218dd
    PUSH EAX                            ; 004218df
    MOV ESI,dword ptr [0x00612560]      ; 004218e0 | DAT_00612560
    MOV dword ptr [ESP + 0x7c],EBP      ; 004218e6
    PUSH ESI                            ; 004218ea | DAT_01bc120c
    MOV dword ptr [ESP + 0x90],EBX      ; 004218eb
    MOV EBX,0x7                         ; 004218f2
    CALL FUN_00482170                   ; 004218f7
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    XOR EBP,EBP                         ; 004218fc
    MOV ECX,0x3                         ; 004218fe
    ADD ESP,0xc                         ; 00421903
    MOV ESI,0x5                         ; 00421906
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042190b
    PUSH 0x2c4                          ; 00421912
    MOV dword ptr [ESP + 0x6c],EDI      ; 00421917
    MOV dword ptr [ESP + 0x70],EBP      ; 0042191b
    MOV dword ptr [ESP + 0x74],EBP      ; 0042191f
    MOV dword ptr [ESP + 0x7c],EDI      ; 00421923
    MOV dword ptr [ESP + 0x78],EAX      ; 00421927
    LEA EAX,[ESP + 0x64]                ; 0042192b
    MOV dword ptr [ESP + 0x80],ECX      ; 0042192f
    PUSH EAX                            ; 00421936
    MOV EDI,dword ptr [0x00612560]      ; 00421937 | DAT_00612560
    MOV dword ptr [ESP + 0x88],EBX      ; 0042193d
    PUSH EDI                            ; 00421944 | DAT_01bc120c
    MOV dword ptr [ESP + 0x90],ESI      ; 00421945
    MOV ESI,0x1                         ; 0042194c
    CALL FUN_00482170                   ; 00421951
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 00421956
    MOV EAX,0xffffffff                  ; 00421959
    MOV EDI,0x5                         ; 0042195e
    PUSH 0x2c4                          ; 00421963
    MOV dword ptr [ESP + 0x6c],EBP      ; 00421968
    MOV dword ptr [ESP + 0x70],EAX      ; 0042196c
    MOV dword ptr [ESP + 0x74],EBP      ; 00421970
    MOV dword ptr [ESP + 0x7c],EBP      ; 00421974
    MOV dword ptr [ESP + 0x80],ESI      ; 00421978
    MOV dword ptr [ESP + 0x84],EDI      ; 0042197f
    MOV EAX,dword ptr [ESP + 0x90]      ; 00421986
    MOV EBP,0x4                         ; 0042198d
    MOV EDI,0x6                         ; 00421992
    MOV dword ptr [ESP + 0x78],EAX      ; 00421997
    MOV ECX,EAX                         ; 0042199b
    LEA EAX,[ESP + 0x64]                ; 0042199d
    MOV dword ptr [ESP + 0x88],EBP      ; 004219a1
    PUSH EAX                            ; 004219a8
    MOV EAX,[0x00612560]                ; 004219a9 | DAT_00612560
    NEG ECX                             ; 004219ae
    PUSH EAX                            ; 004219b0 | DAT_01bc120c
    MOV EBP,0x1                         ; 004219b1
    MOV dword ptr [ESP + 0x80],ECX      ; 004219b6
    CALL FUN_00482170                   ; 004219bd
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 004219c2
    XOR EDX,EDX                         ; 004219c5
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004219c7
    PUSH 0x2c4                          ; 004219ce
    MOV dword ptr [ESP + 0x6c],EDX      ; 004219d3
    MOV dword ptr [ESP + 0x70],ESI      ; 004219d7
    MOV dword ptr [ESP + 0x74],EDX      ; 004219db
    MOV dword ptr [ESP + 0x78],EAX      ; 004219df
    MOV EAX,0x3                         ; 004219e3
    MOV dword ptr [ESP + 0x80],EDI      ; 004219e8
    MOV dword ptr [ESP + 0x88],EAX      ; 004219ef
    LEA EAX,[ESP + 0x64]                ; 004219f6
    MOV dword ptr [ESP + 0x84],EBX      ; 004219fa
    PUSH EAX                            ; 00421a01
    MOV EDX,dword ptr [0x00612560]      ; 00421a02 | DAT_00612560
    MOV ESI,0x2                         ; 00421a08
    PUSH EDX                            ; 00421a0d | DAT_01bc120c
    MOV dword ptr [ESP + 0x84],ESI      ; 00421a0e
    MOV ESI,0xffffffff                  ; 00421a15
    CALL FUN_00482170                   ; 00421a1a
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    MOV EDX,0x3                         ; 00421a1f
    MOV EBX,dword ptr [0x00612560]      ; 00421a24 | DAT_00612560
    ADD ESP,0xc                         ; 00421a2a
    XOR ECX,ECX                         ; 00421a2d
    MOV EAX,dword ptr [ESP + 0x90]      ; 00421a2f
    PUSH 0x2c4                          ; 00421a36
    MOV dword ptr [ESP + 0x6c],ECX      ; 00421a3b
    MOV dword ptr [ESP + 0x70],ECX      ; 00421a3f
    MOV dword ptr [ESP + 0x74],ESI      ; 00421a43
    MOV dword ptr [ESP + 0x7c],ECX      ; 00421a47
    MOV dword ptr [ESP + 0x78],EAX      ; 00421a4b
    MOV EDI,EAX                         ; 00421a4f
    MOV EAX,0x2                         ; 00421a51
    MOV dword ptr [ESP + 0x84],EDX      ; 00421a56
    MOV dword ptr [ESP + 0x80],EAX      ; 00421a5d
    LEA EAX,[ESP + 0x64]                ; 00421a64
    MOV ECX,0x1                         ; 00421a68
    PUSH EAX                            ; 00421a6d
    XOR ESI,ESI                         ; 00421a6e
    NEG EDI                             ; 00421a70
    PUSH EBX                            ; 00421a72 | DAT_01bc120c
    MOV dword ptr [ESP + 0x90],ECX      ; 00421a73
    MOV dword ptr [ESP + 0x80],EDI      ; 00421a7a
    CALL FUN_00482170                   ; 00421a81
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 00421a86
    MOV EDX,0x5                         ; 00421a89
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00421a8e
    MOV dword ptr [ESP + 0x68],ESI      ; 00421a95
    MOV dword ptr [ESP + 0x6c],ESI      ; 00421a99
    MOV dword ptr [ESP + 0x70],EBP      ; 00421a9d
    MOV dword ptr [ESP + 0x74],EAX      ; 00421aa1
    MOV EAX,0x4                         ; 00421aa5
    MOV dword ptr [ESP + 0x7c],EDX      ; 00421aaa
    MOV dword ptr [ESP + 0x78],EAX      ; 00421aae
    PUSH 0x2c4                          ; 00421ab2
    LEA EAX,[ESP + 0x64]                ; 00421ab7
    MOV ECX,0x7                         ; 00421abb
    PUSH EAX                            ; 00421ac0
    MOV ESI,dword ptr [0x00612560]      ; 00421ac1 | DAT_00612560
    MOV EBX,0x6                         ; 00421ac7
    PUSH ESI                            ; 00421acc | DAT_01bc120c
    MOV dword ptr [ESP + 0x8c],ECX      ; 00421acd
    MOV dword ptr [ESP + 0x90],EBX      ; 00421ad4
    CALL FUN_00482170                   ; 00421adb
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 00421ae0
    ADD ESP,0xbc                        ; 00421ae3
    POP EBP                             ; 00421ae9
    POP EDI                             ; 00421aea
    POP ESI                             ; 00421aeb
    POP EBX                             ; 00421aec
    RET                                 ; 00421aed

