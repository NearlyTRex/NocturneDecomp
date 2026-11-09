; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl sound_snddx_cpp_FUN_0055a670(uint error_code)
;
; Parameters:
; uint             Stack[0x4]:4   error_code
;
; XREF[18]:
;   sound_snddx.cpp_FUN_0055a9f0 at 0055aad5
;   sound_snddx.cpp_FUN_0055acd0 at 0055ad9c
;   sound_snddx.cpp_FUN_0055ae40 at 0055aea1
;   sound_snddx.cpp_FUN_0055b100 at 0055b4ca
;   sound_snddx.cpp_FUN_0055b620 at 0055b6a9
;   sound_snddx.cpp_FUN_0055b700 at 0055b779
;   sound_snddx.cpp_FUN_0055b880 at 0055bafe
;   sound_snddx.cpp_FUN_0055bbf0 at 0055bd0a
;   sound_snddx.cpp_FUN_0055bd50 at 0055bdc4
;   sound_snddx.cpp_FUN_0055be30 at 0055c014
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_DS_OK_The_request_comple_005d3fbd
;   TerminatedCString s_DSERR_ALLOCATED_The_requ_005d3fe8
;   TerminatedCString s_DSERR_ALREADYINITIALIZED_005d4060
;   TerminatedCString s_DSERR_BADFORMAT_The_spec_005d409d
;   TerminatedCString s_DSERR_BUFFERLOST_The_buf_005d40da
;   TerminatedCString s_DSERR_CONTROLUNAVAIL_The_005d4122
;   undefined4 DAT_005d418b
;   TerminatedCString s_DSERR_INVALIDCALL_This_f_005d41dc
;   TerminatedCString s_DSERR_INVALIDPARAM_An_in_005d4230
;   TerminatedCString s_DSERR_NOAGGREGATION_The_005d427f
;   TerminatedCString s_DSERR_NODRIVER_No_sound_005d42bd
;   TerminatedCString s_DSERR_NOINTERFACE_The_re_005d42f3
;   TerminatedCString s_DSERR_OTHERAPPHASPRIO_An_005d4330
;   undefined4 DAT_005d439d
;   TerminatedCString s_DSERR_PRIOLEVELNEEDED_Th_005d4411
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055a670
        ;   Label: sound_snddx.cpp_FUN_0055a670
    MOV EDX,EAX                         ; 0055a674
    CMP EAX,0x8878001e                  ; 0055a676
    JNC 0x0055a705                      ; 0055a67b
        ;   XREF to: 0055a705 (CONDITIONAL_JUMP)  ; LAB_0055a705
    CMP EAX,0x80004005                  ; 0055a681
    JNC 0x0055a763                      ; 0055a686
        ;   XREF to: 0055a763 (CONDITIONAL_JUMP)  ; LAB_0055a763
    CMP EAX,0x80004001                  ; 0055a68c
    JNC 0x0055a7a5                      ; 0055a691
        ;   XREF to: 0055a7a5 (CONDITIONAL_JUMP)  ; LAB_0055a7a5
    TEST EAX,EAX                        ; 0055a697
    JNZ 0x0055a71c                      ; 0055a699
        ;   XREF to: 0055a71c (CONDITIONAL_JUMP)  ; LAB_0055a71c
    MOV EAX,0x5d3fbd                    ; 0055a69f | = "DS_OK: The request completed successf..."
    RET                                 ; 0055a6a4
    MOV EAX,0x5d3fe8                    ; 0055a6a5 | = "DSERR_ALLOCATED: The request failed b..."
        ;   Label: LAB_0055a6a5
    RET                                 ; 0055a6aa
    MOV EAX,0x5d4060                    ; 0055a6ab | = "DSERR_ALREADYINITIALIZED: The object ..."
        ;   Label: LAB_0055a6ab
    RET                                 ; 0055a6b0
    MOV EAX,0x5d409d                    ; 0055a6b1 | = "DSERR_BADFORMAT: The specified wave f..."
        ;   Label: LAB_0055a6b1
    RET                                 ; 0055a6b6
    MOV EAX,0x5d40da                    ; 0055a6b7 | = "DSERR_BUFFERLOST: The buffer memory h..."
        ;   Label: LAB_0055a6b7
    RET                                 ; 0055a6bc
    MOV EAX,0x5d4122                    ; 0055a6bd | = "DSERR_CONTROLUNAVAIL: The control -- ..."
        ;   Label: LAB_0055a6bd
    RET                                 ; 0055a6c2
    MOV EAX,0x5d418b                    ; 0055a6c3 | DAT_005d418b
        ;   Label: LAB_0055a6c3
    RET                                 ; 0055a6c8
    MOV EAX,0x5d41dc                    ; 0055a6c9 | = "DSERR_INVALIDCALL: This function is n..."
        ;   Label: LAB_0055a6c9
    RET                                 ; 0055a6ce
    MOV EAX,0x5d4230                    ; 0055a6cf | = "DSERR_INVALIDPARAM: An invalid parame..."
        ;   Label: LAB_0055a6cf
    RET                                 ; 0055a6d4
    MOV EAX,0x5d427f                    ; 0055a6d5 | = "DSERR_NOAGGREGATION: The object does ..."
        ;   Label: LAB_0055a6d5
    RET                                 ; 0055a6da
    MOV EAX,0x5d42bd                    ; 0055a6db | = "DSERR_NODRIVER: No sound driver is av..."
        ;   Label: LAB_0055a6db
    RET                                 ; 0055a6e0
    MOV EAX,0x5d42f3                    ; 0055a6e1 | = "DSERR_NOINTERFACE: The requested inte..."
        ;   Label: LAB_0055a6e1
    RET                                 ; 0055a6e6
    MOV EAX,0x5d4330                    ; 0055a6e7 | = "DSERR_OTHERAPPHASPRIO: Another applic..."
        ;   Label: LAB_0055a6e7
    RET                                 ; 0055a6ec
    MOV EAX,0x5d439d                    ; 0055a6ed | DAT_005d439d
        ;   Label: LAB_0055a6ed
    RET                                 ; 0055a6f2
    MOV EAX,0x5d4411                    ; 0055a6f3 | = "DSERR_PRIOLEVELNEEDED: The caller doe..."
        ;   Label: LAB_0055a6f3
    RET                                 ; 0055a6f8
    MOV EAX,0x5d447a                    ; 0055a6f9 | = "DSERR_UNINITIALIZED: DirectSound has ..."
        ;   Label: LAB_0055a6f9
    RET                                 ; 0055a6fe
    MOV EAX,0x5d44bf                    ; 0055a6ff | = "DSERR_UNSUPPORTED: The function calle..."
        ;   Label: LAB_0055a6ff
    RET                                 ; 0055a704
    JBE 0x0055a6bd                      ; 0055a705
        ;   XREF to: 0055a6bd (CONDITIONAL_JUMP)  ; LAB_0055a6bd
        ;   Label: LAB_0055a705
    CMP EAX,0x88780078                  ; 0055a707
    JNC 0x0055a722                      ; 0055a70c
        ;   XREF to: 0055a722 (CONDITIONAL_JUMP)  ; LAB_0055a722
    CMP EAX,0x88780046                  ; 0055a70e
    JNC 0x0055a750                      ; 0055a713
        ;   XREF to: 0055a750 (CONDITIONAL_JUMP)  ; LAB_0055a750
    CMP EAX,0x88780032                  ; 0055a715
    JZ 0x0055a6c9                       ; 0055a71a
        ;   XREF to: 0055a6c9 (CONDITIONAL_JUMP)  ; LAB_0055a6c9
    MOV EAX,0x5d4505                    ; 0055a71c | = "DSERR_ELIFINO: Unknown error status c..."
        ;   Label: LAB_0055a71c
    RET                                 ; 0055a721
    JBE 0x0055a6db                      ; 0055a722
        ;   XREF to: 0055a6db (CONDITIONAL_JUMP)  ; LAB_0055a6db
        ;   Label: LAB_0055a722
    CMP EAX,0x88780096                  ; 0055a724
    JNC 0x0055a738                      ; 0055a729
        ;   XREF to: 0055a738 (CONDITIONAL_JUMP)  ; LAB_0055a738
    CMP EAX,0x88780082                  ; 0055a72b
    JZ 0x0055a6ab                       ; 0055a730
        ;   XREF to: 0055a6ab (CONDITIONAL_JUMP)  ; LAB_0055a6ab
    JMP 0x0055a71c                      ; 0055a736
        ;   XREF to: 0055a71c (UNCONDITIONAL_JUMP)  ; LAB_0055a71c
    JBE 0x0055a6b7                      ; 0055a738
        ;   XREF to: 0055a6b7 (CONDITIONAL_JUMP)  ; LAB_0055a6b7
        ;   Label: LAB_0055a738
    CMP EAX,0x887800a0                  ; 0055a73e
    JC 0x0055a71c                       ; 0055a743
        ;   XREF to: 0055a71c (CONDITIONAL_JUMP)  ; LAB_0055a71c
    JBE 0x0055a6e7                      ; 0055a745
        ;   XREF to: 0055a6e7 (CONDITIONAL_JUMP)  ; LAB_0055a6e7
    CMP EAX,0x887800aa                  ; 0055a747
    JZ 0x0055a6f9                       ; 0055a74c
        ;   XREF to: 0055a6f9 (CONDITIONAL_JUMP)  ; LAB_0055a6f9
    JMP 0x0055a71c                      ; 0055a74e
        ;   XREF to: 0055a71c (UNCONDITIONAL_JUMP)  ; LAB_0055a71c
    JBE 0x0055a6f3                      ; 0055a750
        ;   XREF to: 0055a6f3 (CONDITIONAL_JUMP)  ; LAB_0055a6f3
        ;   Label: LAB_0055a750
    CMP EAX,0x88780064                  ; 0055a752
    JZ 0x0055a6b1                       ; 0055a757
        ;   XREF to: 0055a6b1 (CONDITIONAL_JUMP)  ; LAB_0055a6b1
    MOV EAX,0x5d4505                    ; 0055a75d | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 0055a762
    JBE 0x0055a6c3                      ; 0055a763
        ;   XREF to: 0055a6c3 (CONDITIONAL_JUMP)  ; LAB_0055a6c3
        ;   Label: LAB_0055a763
    CMP EAX,0x8007000e                  ; 0055a769
    JNC 0x0055a781                      ; 0055a76e
        ;   XREF to: 0055a781 (CONDITIONAL_JUMP)  ; LAB_0055a781
    CMP EAX,0x80040110                  ; 0055a770
    JZ 0x0055a6d5                       ; 0055a775
        ;   XREF to: 0055a6d5 (CONDITIONAL_JUMP)  ; LAB_0055a6d5
    MOV EAX,0x5d4505                    ; 0055a77b | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 0055a780
    JBE 0x0055a6ed                      ; 0055a781
        ;   XREF to: 0055a6ed (CONDITIONAL_JUMP)  ; LAB_0055a6ed
        ;   Label: LAB_0055a781
    CMP EAX,0x80070057                  ; 0055a787
    JC 0x0055a71c                       ; 0055a78c
        ;   XREF to: 0055a71c (CONDITIONAL_JUMP)  ; LAB_0055a71c
    JBE 0x0055a6cf                      ; 0055a78e
        ;   XREF to: 0055a6cf (CONDITIONAL_JUMP)  ; LAB_0055a6cf
    CMP EAX,0x8878000a                  ; 0055a794
    JZ 0x0055a6a5                       ; 0055a799
        ;   XREF to: 0055a6a5 (CONDITIONAL_JUMP)  ; LAB_0055a6a5
    MOV EAX,0x5d4505                    ; 0055a79f | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 0055a7a4
    JBE 0x0055a6ff                      ; 0055a7a5
        ;   XREF to: 0055a6ff (CONDITIONAL_JUMP)  ; LAB_0055a6ff
        ;   Label: LAB_0055a7a5
    CMP EAX,0x80004002                  ; 0055a7ab
    JZ 0x0055a6e1                       ; 0055a7b0
        ;   XREF to: 0055a6e1 (CONDITIONAL_JUMP)  ; LAB_0055a6e1
    MOV EAX,0x5d4505                    ; 0055a7b6 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 0055a7bb

