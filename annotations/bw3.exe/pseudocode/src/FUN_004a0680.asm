; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0680(int param_1)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004a1ad0 at 004a1df2
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_0060b094
;   ... and 8 more
;
; Called Functions:
;   FUN_0046c730
;   FUN_0046ce90
;   FUN_0046cf30
;   FUN_0046d250
;   FUN_0046d4b0
;   FUN_0046d4d0
;   FUN_0046e5e0
;   FUN_005632a3
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0680
        ;   Label: FUN_004a0680
    PUSH EBP                            ; 004a0681
    SUB ESP,0x7c                        ; 004a0682
    MOV EBX,dword ptr [ESP + 0x88]      ; 004a0685
    FLD float ptr [EBX + 0x10]          ; 004a068c
    FLDZ                                ; 004a068f
    FCOMPP                              ; 004a0691
    FNSTSW AX                           ; 004a0693
    SAHF                                ; 004a0695
    JC 0x004a069e                       ; 004a0696
        ;   XREF to: 004a069e (CONDITIONAL_JUMP)  ; LAB_004a069e
    ADD ESP,0x7c                        ; 004a0698
    POP EBP                             ; 004a069b
    POP EBX                             ; 004a069c
    RET                                 ; 004a069d
    PUSH EDI                            ; 004a069e
        ;   Label: LAB_004a069e
    PUSH ESI                            ; 004a069f
    MOV EDX,dword ptr [EBX + 0x20]      ; 004a06a0
    PUSH EDX                            ; 004a06a3
    MOV ECX,dword ptr [0x005f2afc]      ; 004a06a4 | DAT_005f2afc
    PUSH ECX                            ; 004a06aa | DAT_01bdd7e4
    MOV ESI,0x4                         ; 004a06ab
    MOV EBP,0x3                         ; 004a06b0
    CALL FUN_0046e5e0                   ; 004a06b5
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 004a06ba
    XOR EDI,EDI                         ; 004a06bd
    MOV dword ptr [ESP + 0xc],ESI       ; 004a06bf
    MOV dword ptr [ESP + 0x1c],EDI      ; 004a06c3
    MOV dword ptr [ESP + 0x18],EDI      ; 004a06c7
    MOV dword ptr [ESP + 0x14],EDI      ; 004a06cb
    MOV dword ptr [ESP + 0x10],EDI      ; 004a06cf
    MOV dword ptr [ESP + 0x20],EDI      ; 004a06d3
    MOV dword ptr [ESP + 0x2c],EBP      ; 004a06d7
    MOV ESI,0x1                         ; 004a06db
    MOV EDI,0x2                         ; 004a06e0
    MOV dword ptr [ESP + 0x24],ESI      ; 004a06e5
    MOV dword ptr [ESP + 0x28],EDI      ; 004a06e9
    MOV EAX,[0x005f2afc]                ; 004a06ed | DAT_005f2afc
    PUSH dword ptr [EBX + 0x14]         ; 004a06f2
    PUSH EAX                            ; 004a06f5 | DAT_01bdd7e4
    CALL FUN_0046d4d0                   ; 004a06f6
        ;   XREF to: 0046d4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4d0()
    ADD ESP,0x8                         ; 004a06fb
    PUSH ESI                            ; 004a06fe
    MOV EDX,dword ptr [0x005f2afc]      ; 004a06ff | DAT_005f2afc
    PUSH EDX                            ; 004a0705 | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 004a0706
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 004a070b
    PUSH EBX                            ; 004a070e
    MOV ECX,dword ptr [0x005f2afc]      ; 004a070f | DAT_005f2afc
    PUSH ECX                            ; 004a0715 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 004a0716
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 004a071b
    MOV ESI,dword ptr [0x005f2afc]      ; 004a071e | DAT_005f2afc
    PUSH ESI                            ; 004a0724 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x4c]                ; 004a0725
    LEA EDI,[ESP + 0x58]                ; 004a0729
    CALL FUN_0046d250                   ; 004a072d
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d250()
    ADD ESP,0x4                         ; 004a0732
    LEA ESI,[ESP + 0x48]                ; 004a0735
    LEA EAX,[ESP + 0x54]                ; 004a0739
    PUSH 0x0                            ; 004a073d
    MOVSD ES:EDI,ESI                    ; 004a073f
    MOVSD ES:EDI,ESI                    ; 004a0740
    MOVSD ES:EDI,ESI                    ; 004a0741
    PUSH EAX                            ; 004a0742
    MOV EDI,dword ptr [0x005f2afc]      ; 004a0743 | DAT_005f2afc
    PUSH EDI                            ; 004a0749 | DAT_01bdd7e4
    XOR EBP,EBP                         ; 004a074a
    CALL FUN_0046cf30                   ; 004a074c
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 004a0751
    MOV dword ptr [ESP + 0x3c],EBP      ; 004a0754
    MOV dword ptr [ESP + 0x40],EBP      ; 004a0758
    MOV dword ptr [ESP + 0x44],EBP      ; 004a075c
    FLD float ptr [EBX + 0xc]           ; 004a0760
    FMUL float ptr [EBX + 0x14]         ; 004a0763
    FSTP float ptr [ESP + 0x3c]         ; 004a0766
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a076a
    LEA EBX,[ESP + 0x60]                ; 004a076e
    MOV dword ptr [ESP + 0x40],EAX      ; 004a0772
    LEA EAX,[ESP + 0x3c]                ; 004a0776
    MOV ESI,dword ptr [0x005f2afc]      ; 004a077a | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a0780
    FMUL float ptr [0x005df8e4]         ; 004a0782 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0788
    FLD float ptr [EAX + 0x4]           ; 004a078a
    FMUL float ptr [0x005df8e4]         ; 004a078d | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0793
    FLD float ptr [EAX + 0x8]           ; 004a0796
    FMUL float ptr [0x005df8e4]         ; 004a0799 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a079f
    LEA EAX,[ESP + 0x60]                ; 004a07a2
    PUSH EAX                            ; 004a07a6
    MOV EAX,dword ptr [ESI]             ; 004a07a7 | DAT_01bdd7e4
    PUSH EAX                            ; 004a07a9
    CALL FUN_005632a3                   ; 004a07aa
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 004a07af
    MOV AH,byte ptr [ESP + 0x3f]        ; 004a07b2
    XOR AH,0x80                         ; 004a07b6
    MOV ESI,dword ptr [0x005f2afc]      ; 004a07b9 | DAT_005f2afc
    MOV byte ptr [ESP + 0x3f],AH        ; 004a07bf
    LEA EBX,[ESP + 0x6c]                ; 004a07c3
    LEA EAX,[ESP + 0x3c]                ; 004a07c7
    FLD float ptr [EAX]                 ; 004a07cb
    FMUL float ptr [0x005df8e4]         ; 004a07cd | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a07d3
    FLD float ptr [EAX + 0x4]           ; 004a07d5
    FMUL float ptr [0x005df8e4]         ; 004a07d8 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a07de
    FLD float ptr [EAX + 0x8]           ; 004a07e1
    FMUL float ptr [0x005df8e4]         ; 004a07e4 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a07ea
    LEA EAX,[ESP + 0x6c]                ; 004a07ed
    PUSH EAX                            ; 004a07f1
    MOV EAX,dword ptr [ESI]             ; 004a07f2 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004a07f4
    PUSH EAX                            ; 004a07f7
    CALL FUN_005632a3                   ; 004a07f8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 004a07fd
    LEA EBX,[ESP + 0x78]                ; 004a0800
    MOV DL,byte ptr [ESP + 0x43]        ; 004a0804
    LEA EAX,[ESP + 0x3c]                ; 004a0808
    XOR DL,0x80                         ; 004a080c
    MOV ESI,dword ptr [0x005f2afc]      ; 004a080f | DAT_005f2afc
    MOV byte ptr [ESP + 0x43],DL        ; 004a0815
    FLD float ptr [EAX]                 ; 004a0819
    FMUL float ptr [0x005df8e4]         ; 004a081b | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0821
    FLD float ptr [EAX + 0x4]           ; 004a0823
    FMUL float ptr [0x005df8e4]         ; 004a0826 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a082c
    FLD float ptr [EAX + 0x8]           ; 004a082f
    FMUL float ptr [0x005df8e4]         ; 004a0832 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0838
    LEA EAX,[ESP + 0x78]                ; 004a083b
    PUSH EAX                            ; 004a083f
    MOV EAX,dword ptr [ESI]             ; 004a0840 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004a0842
    PUSH EAX                            ; 004a0845
    CALL FUN_005632a3                   ; 004a0846
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 004a084b
    LEA EBX,[ESP + 0x30]                ; 004a084e
    MOV DH,byte ptr [ESP + 0x3f]        ; 004a0852
    LEA EAX,[ESP + 0x3c]                ; 004a0856
    XOR DH,0x80                         ; 004a085a
    MOV ESI,dword ptr [0x005f2afc]      ; 004a085d | DAT_005f2afc
    MOV byte ptr [ESP + 0x3f],DH        ; 004a0863
    FLD float ptr [EAX]                 ; 004a0867
    FMUL float ptr [0x005df8e4]         ; 004a0869 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a086f
    FLD float ptr [EAX + 0x4]           ; 004a0871
    FMUL float ptr [0x005df8e4]         ; 004a0874 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a087a
    FLD float ptr [EAX + 0x8]           ; 004a087d
    FMUL float ptr [0x005df8e4]         ; 004a0880 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0886
    LEA EAX,[ESP + 0x30]                ; 004a0889
    PUSH EAX                            ; 004a088d
    MOV EAX,dword ptr [ESI]             ; 004a088e | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004a0890
    PUSH EAX                            ; 004a0895
    CALL FUN_005632a3                   ; 004a0896
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV ECX,0x80000                     ; 004a089b
    MOV EBX,0xf80000                    ; 004a08a0
    LEA EAX,[ESP + 0x10]                ; 004a08a5
    MOV EDX,dword ptr [0x005f2afc]      ; 004a08a9 | DAT_005f2afc
    ADD ESP,0x8                         ; 004a08af
    MOV dword ptr [0x0060b02c],ECX      ; 004a08b2 | DAT_0060b02c
    MOV dword ptr [0x0060b030],EBX      ; 004a08b8 | DAT_0060b030
    MOV dword ptr [0x0060b05c],EBX      ; 004a08be | DAT_0060b05c
    MOV dword ptr [0x0060b060],EBX      ; 004a08c4 | DAT_0060b060
    MOV dword ptr [0x0060b08c],EBX      ; 004a08ca | DAT_0060b08c
    MOV dword ptr [0x0060b090],ECX      ; 004a08d0 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],ECX      ; 004a08d6 | DAT_0060b0bc
    PUSH EAX                            ; 004a08dc
    MOV dword ptr [0x0060b0c0],ECX      ; 004a08dd | DAT_0060b0c0
    MOV EBX,0xffff                      ; 004a08e3
    PUSH EDX                            ; 004a08e8 | DAT_01bdd7e4
    MOV dword ptr [0x0060b034],EBX      ; 004a08e9 | DAT_0060b034
    MOV dword ptr [0x0060b038],EBX      ; 004a08ef | DAT_0060b038
    MOV dword ptr [0x0060b03c],EBX      ; 004a08f5 | DAT_0060b03c
    MOV dword ptr [0x0060b064],EBX      ; 004a08fb | DAT_0060b064
    MOV dword ptr [0x0060b068],EBX      ; 004a0901 | DAT_0060b068
    MOV dword ptr [0x0060b06c],EBX      ; 004a0907 | DAT_0060b06c
    MOV dword ptr [0x0060b094],EBX      ; 004a090d | DAT_0060b094
    MOV dword ptr [0x0060b098],EBX      ; 004a0913 | DAT_0060b098
    MOV dword ptr [0x0060b09c],EBX      ; 004a0919 | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],EBX      ; 004a091f | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],EBX      ; 004a0925 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],EBX      ; 004a092b | DAT_0060b0cc
    CALL FUN_0046c730                   ; 004a0931
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 004a0936
    MOV ECX,dword ptr [0x005f2afc]      ; 004a0939 | DAT_005f2afc
    PUSH ECX                            ; 004a093f | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 004a0940
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 004a0945
    PUSH EBP                            ; 004a0948
    MOV EBX,dword ptr [0x005f2afc]      ; 004a0949 | DAT_005f2afc
    PUSH EBX                            ; 004a094f | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 004a0950
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 004a0955
    POP ESI                             ; 004a0958
    POP EDI                             ; 004a0959
    ADD ESP,0x7c                        ; 004a095a
    POP EBP                             ; 004a095d
    POP EBX                             ; 004a095e
    RET                                 ; 004a095f

