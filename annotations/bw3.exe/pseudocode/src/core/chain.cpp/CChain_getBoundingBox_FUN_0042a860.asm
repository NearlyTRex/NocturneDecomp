; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_0042a860(CChain *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a860
        ;   Label: core_chain.cpp_CChain_getBoundingBox_FUN_0042a860
    PUSH EDI                            ; 0042a861
    PUSH EBP                            ; 0042a862
    SUB ESP,0x60                        ; 0042a863
    MOV EBX,dword ptr [ESP + 0x70]      ; 0042a866
    MOV EBP,ESI                         ; 0042a86a
    MOV EDX,0x461c3c00                  ; 0042a86c
    MOV EDI,0xc61c3c00                  ; 0042a871
    MOV dword ptr [ESP + 0x40],EDX      ; 0042a876
    MOV dword ptr [ESP + 0x44],EDX      ; 0042a87a
    MOV dword ptr [ESP + 0x30],EDI      ; 0042a87e
    MOV dword ptr [ESP + 0x34],EDI      ; 0042a882
    MOV dword ptr [ESP + 0x38],EDI      ; 0042a886
    MOV dword ptr [ESP + 0x3c],EDX      ; 0042a88a
    MOV ECX,dword ptr [EBX + 0x158]     ; 0042a88e
    XOR EDI,EDI                         ; 0042a894
    TEST ECX,ECX                        ; 0042a896
    JLE 0x0042a922                      ; 0042a898
        ;   XREF to: 0042a922 (CONDITIONAL_JUMP)  ; LAB_0042a922
    LEA ESI,[EBX + 0x28c]               ; 0042a89e
    FLD float ptr [ESI]                 ; 0042a8a4
        ;   Label: LAB_0042a8a4
    MOV EDX,ESI                         ; 0042a8a6
    FCOMP float ptr [ESP + 0x3c]        ; 0042a8a8
    FNSTSW AX                           ; 0042a8ac
    SAHF                                ; 0042a8ae
    JNC 0x0042a8b7                      ; 0042a8af
        ;   XREF to: 0042a8b7 (CONDITIONAL_JUMP)  ; LAB_0042a8b7
    MOV EAX,dword ptr [ESI]             ; 0042a8b1
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042a8b3
    FLD float ptr [EDX + 0x4]           ; 0042a8b7
        ;   Label: LAB_0042a8b7
    FCOMP float ptr [ESP + 0x40]        ; 0042a8ba
    FNSTSW AX                           ; 0042a8be
    SAHF                                ; 0042a8c0
    JNC 0x0042a8ca                      ; 0042a8c1
        ;   XREF to: 0042a8ca (CONDITIONAL_JUMP)  ; LAB_0042a8ca
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042a8c3
    MOV dword ptr [ESP + 0x40],EAX      ; 0042a8c6
    FLD float ptr [EDX + 0x8]           ; 0042a8ca
        ;   Label: LAB_0042a8ca
    FCOMP float ptr [ESP + 0x44]        ; 0042a8cd
    FNSTSW AX                           ; 0042a8d1
    SAHF                                ; 0042a8d3
    JNC 0x0042a8dd                      ; 0042a8d4
        ;   XREF to: 0042a8dd (CONDITIONAL_JUMP)  ; LAB_0042a8dd
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042a8d6
    MOV dword ptr [ESP + 0x44],EAX      ; 0042a8d9
    FLD float ptr [EDX]                 ; 0042a8dd
        ;   Label: LAB_0042a8dd
    FCOMP float ptr [ESP + 0x30]        ; 0042a8df
    FNSTSW AX                           ; 0042a8e3
    SAHF                                ; 0042a8e5
    JBE 0x0042a8ee                      ; 0042a8e6
        ;   XREF to: 0042a8ee (CONDITIONAL_JUMP)  ; LAB_0042a8ee
    MOV EAX,dword ptr [EDX]             ; 0042a8e8
    MOV dword ptr [ESP + 0x30],EAX      ; 0042a8ea
    FLD float ptr [EDX + 0x4]           ; 0042a8ee
        ;   Label: LAB_0042a8ee
    FCOMP float ptr [ESP + 0x34]        ; 0042a8f1
    FNSTSW AX                           ; 0042a8f5
    SAHF                                ; 0042a8f7
    JBE 0x0042a901                      ; 0042a8f8
        ;   XREF to: 0042a901 (CONDITIONAL_JUMP)  ; LAB_0042a901
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042a8fa
    MOV dword ptr [ESP + 0x34],EAX      ; 0042a8fd
    FLD float ptr [EDX + 0x8]           ; 0042a901
        ;   Label: LAB_0042a901
    FCOMP float ptr [ESP + 0x38]        ; 0042a904
    FNSTSW AX                           ; 0042a908
    SAHF                                ; 0042a90a
    JBE 0x0042a914                      ; 0042a90b
        ;   XREF to: 0042a914 (CONDITIONAL_JUMP)  ; LAB_0042a914
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042a90d
    MOV dword ptr [ESP + 0x38],EAX      ; 0042a910
    INC EDI                             ; 0042a914
        ;   Label: LAB_0042a914
    MOV EAX,dword ptr [EBX + 0x158]     ; 0042a915
    ADD ESI,0x24                        ; 0042a91b
    CMP EDI,EAX                         ; 0042a91e
    JL 0x0042a8a4                       ; 0042a920
        ;   XREF to: 0042a8a4 (CONDITIONAL_JUMP)  ; LAB_0042a8a4
    LEA EAX,[ESP + 0x3c]                ; 0042a922
        ;   Label: LAB_0042a922
    PUSH EAX                            ; 0042a926
    PUSH EBX                            ; 0042a927
    LEA ESI,[ESP + 0x50]                ; 0042a928
    LEA EDI,[ESP + 0x5c]                ; 0042a92c
    CALL core_actor.cpp_FUN_00408bf0    ; 0042a930
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x50]                ; 0042a935
    LEA EDX,[ESP + 0x5c]                ; 0042a939
    ADD ESP,0x8                         ; 0042a93d
    MOV EAX,ESP                         ; 0042a940
    MOVSD ES:EDI,ESI                    ; 0042a942
    MOVSD ES:EDI,ESI                    ; 0042a943
    MOVSD ES:EDI,ESI                    ; 0042a944
    CMP EAX,EDX                         ; 0042a945
    JZ 0x0042a960                       ; 0042a947
        ;   XREF to: 0042a960 (CONDITIONAL_JUMP)  ; LAB_0042a960
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042a949
    MOV dword ptr [ESP],EAX             ; 0042a94d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042a950
    MOV dword ptr [ESP + 0x4],EAX       ; 0042a954
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042a958
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a95c
    LEA EAX,[ESP + 0x30]                ; 0042a960
        ;   Label: LAB_0042a960
    PUSH EAX                            ; 0042a964
    PUSH EBX                            ; 0042a965
    LEA ESI,[ESP + 0x2c]                ; 0042a966
    LEA EDI,[ESP + 0x20]                ; 0042a96a
    CALL core_actor.cpp_FUN_00408bf0    ; 0042a96e
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x2c]                ; 0042a973
    LEA EAX,[ESP + 0x20]                ; 0042a977
    ADD ESP,0x8                         ; 0042a97b
    LEA EDX,[ESP + 0xc]                 ; 0042a97e
    MOVSD ES:EDI,ESI                    ; 0042a982
    MOVSD ES:EDI,ESI                    ; 0042a983
    MOVSD ES:EDI,ESI                    ; 0042a984
    CMP EDX,EAX                         ; 0042a985
    JNZ 0x0042a99d                      ; 0042a987
        ;   XREF to: 0042a99d (CONDITIONAL_JUMP)  ; LAB_0042a99d
    MOV ECX,0x6                         ; 0042a989
    MOV ESI,ESP                         ; 0042a98e
    MOV EDI,EBP                         ; 0042a990
    MOVSD.REP ES:EDI,ESI                ; 0042a992
    MOV EAX,EBP                         ; 0042a994
    ADD ESP,0x60                        ; 0042a996
    POP EBP                             ; 0042a999
    POP EDI                             ; 0042a99a
    POP EBX                             ; 0042a99b
    RET                                 ; 0042a99c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042a99d
        ;   Label: LAB_0042a99d
    MOV dword ptr [ESP + 0xc],EAX       ; 0042a9a1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042a9a5
    MOV dword ptr [ESP + 0x10],EAX      ; 0042a9a9
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042a9ad
    MOV dword ptr [ESP + 0x14],EAX      ; 0042a9b1
    MOV ECX,0x6                         ; 0042a9b5
    MOV ESI,ESP                         ; 0042a9ba
    MOV EDI,EBP                         ; 0042a9bc
    MOVSD.REP ES:EDI,ESI                ; 0042a9be
    MOV EAX,EBP                         ; 0042a9c0
    ADD ESP,0x60                        ; 0042a9c2
    POP EBP                             ; 0042a9c5
    POP EDI                             ; 0042a9c6
    POP EBX                             ; 0042a9c7
    RET                                 ; 0042a9c8

