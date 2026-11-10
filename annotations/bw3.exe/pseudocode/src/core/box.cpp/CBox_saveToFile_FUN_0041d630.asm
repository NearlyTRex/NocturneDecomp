; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041d630(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveBox_FUN_0040be30 at 0040beec
;
; Referenced Globals:
;   TerminatedCString s_sboxVersion_005b742f
;   TerminatedCString s_s_d_005b743d
;   TerminatedCString s_sboxStateInfo_005b7443
;   TerminatedCString s_s_f_f_f_005b7453
;   TerminatedCString s_s_f_f_f_005b745f
;   TerminatedCString s_s_f_f_f_005b746b
;   TerminatedCString s_s_f_005b7477
;   TerminatedCString s_s_f_f_f_005b747d
;   TerminatedCString s_s_f_f_f_005b7489
;   TerminatedCString s_s_d_005b7495
;   undefined4 DAT_005b74a1
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d630
        ;   Label: core_box.cpp_CBox_saveToFile_FUN_0041d630
    PUSH ESI                            ; 0041d631
    PUSH EDI                            ; 0041d632
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041d633
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041d637
    MOV EDI,dword ptr [ESP + 0x18]      ; 0041d63b
    PUSH EDI                            ; 0041d63f
    PUSH 0x5b742f                       ; 0041d640 | = "%sboxVersion\n"
    PUSH ESI                            ; 0041d645
    CALL crt_unknown.c_FUN_005a3140     ; 0041d646
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0041d64b
    PUSH 0x1                            ; 0041d64e
    PUSH EDI                            ; 0041d650
    PUSH 0x5b743d                       ; 0041d651 | = "%s%d\n"
    PUSH ESI                            ; 0041d656
    CALL crt_unknown.c_FUN_005a3140     ; 0041d657
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0041d65c
    PUSH EDI                            ; 0041d65f
    PUSH 0x5b7443                       ; 0041d660 | = "%sboxStateInfo\n"
    PUSH ESI                            ; 0041d665
    CALL crt_unknown.c_FUN_005a3140     ; 0041d666
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0041d66b
    SUB ESP,0x8                         ; 0041d66e
    FLD float ptr [EBX + 0x8]           ; 0041d671
    FSTP double ptr [ESP]               ; 0041d674
    SUB ESP,0x8                         ; 0041d677
    FLD float ptr [EBX + 0x4]           ; 0041d67a
    FSTP double ptr [ESP]               ; 0041d67d
    SUB ESP,0x8                         ; 0041d680
    FLD float ptr [EBX]                 ; 0041d683
    FSTP double ptr [ESP]               ; 0041d685
    PUSH EDI                            ; 0041d688
    PUSH 0x5b7453                       ; 0041d689 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041d68e
    CALL crt_unknown.c_FUN_005a3140     ; 0041d68f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 0041d694
    SUB ESP,0x8                         ; 0041d697
    FLD float ptr [EBX + 0x10]          ; 0041d69a
    FSTP double ptr [ESP]               ; 0041d69d
    SUB ESP,0x8                         ; 0041d6a0
    FLD float ptr [EBX + 0x14]          ; 0041d6a3
    FSTP double ptr [ESP]               ; 0041d6a6
    SUB ESP,0x8                         ; 0041d6a9
    FLD float ptr [EBX + 0xc]           ; 0041d6ac
    FSTP double ptr [ESP]               ; 0041d6af
    PUSH EDI                            ; 0041d6b2
    PUSH 0x5b745f                       ; 0041d6b3 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041d6b8
    CALL crt_unknown.c_FUN_005a3140     ; 0041d6b9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 0041d6be
    SUB ESP,0x8                         ; 0041d6c1
    FLD float ptr [EBX + 0xac]          ; 0041d6c4
    FSTP double ptr [ESP]               ; 0041d6ca
    SUB ESP,0x8                         ; 0041d6cd
    FLD float ptr [EBX + 0xa8]          ; 0041d6d0
    FSTP double ptr [ESP]               ; 0041d6d6
    SUB ESP,0x8                         ; 0041d6d9
    FLD float ptr [EBX + 0xa4]          ; 0041d6dc
    FSTP double ptr [ESP]               ; 0041d6e2
    PUSH EDI                            ; 0041d6e5
    PUSH 0x5b746b                       ; 0041d6e6 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041d6eb
    CALL crt_unknown.c_FUN_005a3140     ; 0041d6ec
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    FLD float ptr [EBX + 0x94]          ; 0041d6f1
    ADD ESP,0x24                        ; 0041d6f7
    FMUL double ptr [0x005b74a1]        ; 0041d6fa | DAT_005b74a1
    SUB ESP,0x8                         ; 0041d700
    FSTP double ptr [ESP]               ; 0041d703
    PUSH EDI                            ; 0041d706
    PUSH 0x5b7477                       ; 0041d707 | = "%s%f\n"
    PUSH ESI                            ; 0041d70c
    CALL crt_unknown.c_FUN_005a3140     ; 0041d70d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 0041d712
    SUB ESP,0x8                         ; 0041d715
    FLD float ptr [EBX + 0x54]          ; 0041d718
    FSTP double ptr [ESP]               ; 0041d71b
    SUB ESP,0x8                         ; 0041d71e
    FLD float ptr [EBX + 0x50]          ; 0041d721
    FSTP double ptr [ESP]               ; 0041d724
    SUB ESP,0x8                         ; 0041d727
    FLD float ptr [EBX + 0x4c]          ; 0041d72a
    FSTP double ptr [ESP]               ; 0041d72d
    PUSH EDI                            ; 0041d730
    PUSH 0x5b747d                       ; 0041d731 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041d736
    CALL crt_unknown.c_FUN_005a3140     ; 0041d737
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 0041d73c
    SUB ESP,0x8                         ; 0041d73f
    FLD float ptr [EBX + 0x78]          ; 0041d742
    FSTP double ptr [ESP]               ; 0041d745
    SUB ESP,0x8                         ; 0041d748
    FLD float ptr [EBX + 0x74]          ; 0041d74b
    FSTP double ptr [ESP]               ; 0041d74e
    SUB ESP,0x8                         ; 0041d751
    FLD float ptr [EBX + 0x70]          ; 0041d754
    FSTP double ptr [ESP]               ; 0041d757
    PUSH EDI                            ; 0041d75a
    PUSH 0x5b7489                       ; 0041d75b | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0041d760
    CALL crt_unknown.c_FUN_005a3140     ; 0041d761
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x24                        ; 0041d766
    MOV EDX,dword ptr [EBX + 0x254]     ; 0041d769
    PUSH EDX                            ; 0041d76f
    PUSH EDI                            ; 0041d770
    PUSH 0x5b7495                       ; 0041d771 | = "%s%d\n"
    PUSH ESI                            ; 0041d776
    CALL crt_unknown.c_FUN_005a3140     ; 0041d777
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 0041d77c
    POP EDI                             ; 0041d77f
    POP ESI                             ; 0041d780
    POP EBX                             ; 0041d781
    RET                                 ; 0041d782

