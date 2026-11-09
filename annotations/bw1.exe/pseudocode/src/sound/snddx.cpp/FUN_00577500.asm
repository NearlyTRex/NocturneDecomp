; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl sound_snddx_cpp_FUN_00577500(uint error_code)
;
; Parameters:
; uint             Stack[0x4]:4   error_code
;
; XREF[18]:
;   sound_snddx.cpp_FUN_00577880 at 00577965
;   sound_snddx.cpp_FUN_00577b60 at 00577c2c
;   sound_snddx.cpp_FUN_00577cd0 at 00577d31
;   sound_snddx.cpp_FUN_00577f90 at 0057835a
;   sound_snddx.cpp_FUN_005784b0 at 00578539
;   sound_snddx.cpp_FUN_00578590 at 00578609
;   sound_snddx.cpp_FUN_00578710 at 00578998
;   sound_snddx.cpp_FUN_00578a80 at 00578b9a
;   sound_snddx.cpp_FUN_00578be0 at 00578c54
;   sound_snddx.cpp_FUN_00578cc0 at 00578ea4
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_DS_OK_The_request_comple_005f46c3
;   TerminatedCString s_DSERR_ALLOCATED_The_requ_005f46ee
;   TerminatedCString s_DSERR_ALREADYINITIALIZED_005f4766
;   TerminatedCString s_DSERR_BADFORMAT_The_spec_005f47a3
;   TerminatedCString s_DSERR_BUFFERLOST_The_buf_005f47e0
;   TerminatedCString s_DSERR_CONTROLUNAVAIL_The_005f4828
;   undefined4 DAT_005f4891
;   TerminatedCString s_DSERR_INVALIDCALL_This_f_005f48e2
;   TerminatedCString s_DSERR_INVALIDPARAM_An_in_005f4936
;   TerminatedCString s_DSERR_NOAGGREGATION_The_005f4985
;   TerminatedCString s_DSERR_NODRIVER_No_sound_005f49c3
;   TerminatedCString s_DSERR_NOINTERFACE_The_re_005f49f9
;   TerminatedCString s_DSERR_OTHERAPPHASPRIO_An_005f4a36
;   undefined4 DAT_005f4aa3
;   TerminatedCString s_DSERR_PRIOLEVELNEEDED_Th_005f4b17
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00577500
        ;   Label: sound_snddx.cpp_FUN_00577500
    MOV EDX,EAX                         ; 00577504
    CMP EAX,0x8878001e                  ; 00577506
    JNC 0x00577595                      ; 0057750b
        ;   XREF to: 00577595 (CONDITIONAL_JUMP)  ; LAB_00577595
    CMP EAX,0x80004005                  ; 00577511
    JNC 0x005775f3                      ; 00577516
        ;   XREF to: 005775f3 (CONDITIONAL_JUMP)  ; LAB_005775f3
    CMP EAX,0x80004001                  ; 0057751c
    JNC 0x00577635                      ; 00577521
        ;   XREF to: 00577635 (CONDITIONAL_JUMP)  ; LAB_00577635
    TEST EAX,EAX                        ; 00577527
    JNZ 0x005775ac                      ; 00577529
        ;   XREF to: 005775ac (CONDITIONAL_JUMP)  ; LAB_005775ac
    MOV EAX,0x5f46c3                    ; 0057752f | = "DS_OK: The request completed successf..."
    RET                                 ; 00577534
    MOV EAX,0x5f46ee                    ; 00577535 | = "DSERR_ALLOCATED: The request failed b..."
        ;   Label: LAB_00577535
    RET                                 ; 0057753a
    MOV EAX,0x5f4766                    ; 0057753b | = "DSERR_ALREADYINITIALIZED: The object ..."
        ;   Label: LAB_0057753b
    RET                                 ; 00577540
    MOV EAX,0x5f47a3                    ; 00577541 | = "DSERR_BADFORMAT: The specified wave f..."
        ;   Label: LAB_00577541
    RET                                 ; 00577546
    MOV EAX,0x5f47e0                    ; 00577547 | = "DSERR_BUFFERLOST: The buffer memory h..."
        ;   Label: LAB_00577547
    RET                                 ; 0057754c
    MOV EAX,0x5f4828                    ; 0057754d | = "DSERR_CONTROLUNAVAIL: The control -- ..."
        ;   Label: LAB_0057754d
    RET                                 ; 00577552
    MOV EAX,0x5f4891                    ; 00577553 | DAT_005f4891
        ;   Label: LAB_00577553
    RET                                 ; 00577558
    MOV EAX,0x5f48e2                    ; 00577559 | = "DSERR_INVALIDCALL: This function is n..."
        ;   Label: LAB_00577559
    RET                                 ; 0057755e
    MOV EAX,0x5f4936                    ; 0057755f | = "DSERR_INVALIDPARAM: An invalid parame..."
        ;   Label: LAB_0057755f
    RET                                 ; 00577564
    MOV EAX,0x5f4985                    ; 00577565 | = "DSERR_NOAGGREGATION: The object does ..."
        ;   Label: LAB_00577565
    RET                                 ; 0057756a
    MOV EAX,0x5f49c3                    ; 0057756b | = "DSERR_NODRIVER: No sound driver is av..."
        ;   Label: LAB_0057756b
    RET                                 ; 00577570
    MOV EAX,0x5f49f9                    ; 00577571 | = "DSERR_NOINTERFACE: The requested inte..."
        ;   Label: LAB_00577571
    RET                                 ; 00577576
    MOV EAX,0x5f4a36                    ; 00577577 | = "DSERR_OTHERAPPHASPRIO: Another applic..."
        ;   Label: LAB_00577577
    RET                                 ; 0057757c
    MOV EAX,0x5f4aa3                    ; 0057757d | DAT_005f4aa3
        ;   Label: LAB_0057757d
    RET                                 ; 00577582
    MOV EAX,0x5f4b17                    ; 00577583 | = "DSERR_PRIOLEVELNEEDED: The caller doe..."
        ;   Label: LAB_00577583
    RET                                 ; 00577588
    MOV EAX,0x5f4b80                    ; 00577589 | = "DSERR_UNINITIALIZED: DirectSound has ..."
        ;   Label: LAB_00577589
    RET                                 ; 0057758e
    MOV EAX,0x5f4bc5                    ; 0057758f | = "DSERR_UNSUPPORTED: The function calle..."
        ;   Label: LAB_0057758f
    RET                                 ; 00577594
    JBE 0x0057754d                      ; 00577595
        ;   XREF to: 0057754d (CONDITIONAL_JUMP)  ; LAB_0057754d
        ;   Label: LAB_00577595
    CMP EAX,0x88780078                  ; 00577597
    JNC 0x005775b2                      ; 0057759c
        ;   XREF to: 005775b2 (CONDITIONAL_JUMP)  ; LAB_005775b2
    CMP EAX,0x88780046                  ; 0057759e
    JNC 0x005775e0                      ; 005775a3
        ;   XREF to: 005775e0 (CONDITIONAL_JUMP)  ; LAB_005775e0
    CMP EAX,0x88780032                  ; 005775a5
    JZ 0x00577559                       ; 005775aa
        ;   XREF to: 00577559 (CONDITIONAL_JUMP)  ; LAB_00577559
    MOV EAX,0x5f4c0b                    ; 005775ac | = "DSERR_ELIFINO: Unknown error status c..."
        ;   Label: LAB_005775ac
    RET                                 ; 005775b1
    JBE 0x0057756b                      ; 005775b2
        ;   XREF to: 0057756b (CONDITIONAL_JUMP)  ; LAB_0057756b
        ;   Label: LAB_005775b2
    CMP EAX,0x88780096                  ; 005775b4
    JNC 0x005775c8                      ; 005775b9
        ;   XREF to: 005775c8 (CONDITIONAL_JUMP)  ; LAB_005775c8
    CMP EAX,0x88780082                  ; 005775bb
    JZ 0x0057753b                       ; 005775c0
        ;   XREF to: 0057753b (CONDITIONAL_JUMP)  ; LAB_0057753b
    JMP 0x005775ac                      ; 005775c6
        ;   XREF to: 005775ac (UNCONDITIONAL_JUMP)  ; LAB_005775ac
    JBE 0x00577547                      ; 005775c8
        ;   XREF to: 00577547 (CONDITIONAL_JUMP)  ; LAB_00577547
        ;   Label: LAB_005775c8
    CMP EAX,0x887800a0                  ; 005775ce
    JC 0x005775ac                       ; 005775d3
        ;   XREF to: 005775ac (CONDITIONAL_JUMP)  ; LAB_005775ac
    JBE 0x00577577                      ; 005775d5
        ;   XREF to: 00577577 (CONDITIONAL_JUMP)  ; LAB_00577577
    CMP EAX,0x887800aa                  ; 005775d7
    JZ 0x00577589                       ; 005775dc
        ;   XREF to: 00577589 (CONDITIONAL_JUMP)  ; LAB_00577589
    JMP 0x005775ac                      ; 005775de
        ;   XREF to: 005775ac (UNCONDITIONAL_JUMP)  ; LAB_005775ac
    JBE 0x00577583                      ; 005775e0
        ;   XREF to: 00577583 (CONDITIONAL_JUMP)  ; LAB_00577583
        ;   Label: LAB_005775e0
    CMP EAX,0x88780064                  ; 005775e2
    JZ 0x00577541                       ; 005775e7
        ;   XREF to: 00577541 (CONDITIONAL_JUMP)  ; LAB_00577541
    MOV EAX,0x5f4c0b                    ; 005775ed | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 005775f2
    JBE 0x00577553                      ; 005775f3
        ;   XREF to: 00577553 (CONDITIONAL_JUMP)  ; LAB_00577553
        ;   Label: LAB_005775f3
    CMP EAX,0x8007000e                  ; 005775f9
    JNC 0x00577611                      ; 005775fe
        ;   XREF to: 00577611 (CONDITIONAL_JUMP)  ; LAB_00577611
    CMP EAX,0x80040110                  ; 00577600
    JZ 0x00577565                       ; 00577605
        ;   XREF to: 00577565 (CONDITIONAL_JUMP)  ; LAB_00577565
    MOV EAX,0x5f4c0b                    ; 0057760b | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00577610
    JBE 0x0057757d                      ; 00577611
        ;   XREF to: 0057757d (CONDITIONAL_JUMP)  ; LAB_0057757d
        ;   Label: LAB_00577611
    CMP EAX,0x80070057                  ; 00577617
    JC 0x005775ac                       ; 0057761c
        ;   XREF to: 005775ac (CONDITIONAL_JUMP)  ; LAB_005775ac
    JBE 0x0057755f                      ; 0057761e
        ;   XREF to: 0057755f (CONDITIONAL_JUMP)  ; LAB_0057755f
    CMP EAX,0x8878000a                  ; 00577624
    JZ 0x00577535                       ; 00577629
        ;   XREF to: 00577535 (CONDITIONAL_JUMP)  ; LAB_00577535
    MOV EAX,0x5f4c0b                    ; 0057762f | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00577634
    JBE 0x0057758f                      ; 00577635
        ;   XREF to: 0057758f (CONDITIONAL_JUMP)  ; LAB_0057758f
        ;   Label: LAB_00577635
    CMP EAX,0x80004002                  ; 0057763b
    JZ 0x00577571                       ; 00577640
        ;   XREF to: 00577571 (CONDITIONAL_JUMP)  ; LAB_00577571
    MOV EAX,0x5f4c0b                    ; 00577646 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 0057764b

