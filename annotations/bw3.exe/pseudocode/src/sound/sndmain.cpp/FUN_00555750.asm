; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555750(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00556240 at 005563c0
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d34c2
;   TerminatedCString s_SfxSlot_seek_no_sample_005d34d7
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005537c0
;   FUN_00555930
;   FUN_00555aa0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555750
        ;   Label: FUN_00555750
    PUSH ESI                            ; 00555751
    PUSH EDI                            ; 00555752
    PUSH EBP                            ; 00555753
    SUB ESP,0xc                         ; 00555754
    MOV EBX,dword ptr [ESP + 0x20]      ; 00555757
    CMP dword ptr [EBX + 0x68],0x0      ; 0055575b
    JNZ 0x00555784                      ; 0055575f
        ;   XREF to: 00555784 (CONDITIONAL_JUMP)  ; LAB_00555784
    MOV ECX,0x5d34c2                    ; 00555761 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd77                       ; 00555766
    PUSH 0x5d34d7                       ; 0055576b | = "SfxSlot::seek - no sample?!"
    MOV dword ptr [0x01d71de0],ECX      ; 00555770 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00555776 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055577c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00555781
    PUSH 0x0                            ; 00555784
        ;   Label: LAB_00555784
    MOV EDI,dword ptr [EBX + 0x58]      ; 00555786
    PUSH EDI                            ; 00555789
    MOV EBP,dword ptr [EBX + 0x54]      ; 0055578a
    PUSH EBP                            ; 0055578d
    MOV EAX,dword ptr [EBX + 0x50]      ; 0055578e
    PUSH EAX                            ; 00555791
    MOV EDX,dword ptr [EBX + 0x68]      ; 00555792
    PUSH EDX                            ; 00555795
    CALL FUN_00555930                   ; 00555796
        ;   XREF to: 00555930 (UNCONDITIONAL_CALL)  ; undefined FUN_00555930()
    MOV dword ptr [ESP + 0x14],EAX      ; 0055579b
    MOV dword ptr [ESP + 0x18],EDX      ; 0055579f
    MOV dword ptr [EBX + 0x58],0x0      ; 005557a3
    FLD double ptr [ESP + 0x14]         ; 005557aa
    ADD ESP,0x14                        ; 005557ae
    MOV ECX,dword ptr [EBX + 0x58]      ; 005557b1
    PUSH ECX                            ; 005557b4
    FSTP double ptr [EBX + 0x50]        ; 005557b5
    MOV ESI,dword ptr [EBX + 0x54]      ; 005557b8
    PUSH ESI                            ; 005557bb
    MOV EDI,dword ptr [EBX + 0x50]      ; 005557bc
    PUSH EDI                            ; 005557bf
    MOV EBP,dword ptr [EBX + 0x68]      ; 005557c0
    PUSH EBP                            ; 005557c3
    CALL FUN_00555aa0                   ; 005557c4
        ;   XREF to: 00555aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555aa0()
    MOV dword ptr [ESP + 0x10],EAX      ; 005557c9
    MOV dword ptr [ESP + 0x14],EDX      ; 005557cd
    FLD double ptr [ESP + 0x10]         ; 005557d1
    MOV EAX,dword ptr [EBX + 0x68]      ; 005557d5
    FSTP double ptr [EBX + 0x50]        ; 005557d8
    MOV EDX,dword ptr [EAX + 0x160]     ; 005557db
    ADD ESP,0x10                        ; 005557e1
    TEST EDX,EDX                        ; 005557e4
    JGE 0x00555802                      ; 005557e6
        ;   XREF to: 00555802 (CONDITIONAL_JUMP)  ; LAB_00555802
    MOV EAX,dword ptr [EBX + 0x50]      ; 005557e8
    MOV dword ptr [EBX + 0x10c],EAX     ; 005557eb
    MOV EAX,dword ptr [EBX + 0x54]      ; 005557f1
    MOV dword ptr [EBX + 0x110],EAX     ; 005557f4
    ADD ESP,0xc                         ; 005557fa
    POP EBP                             ; 005557fd
    POP EDI                             ; 005557fe
    POP ESI                             ; 005557ff
    POP EBX                             ; 00555800
    RET                                 ; 00555801
    FLD double ptr [EBX + 0x50]         ; 00555802
        ;   Label: LAB_00555802
    PUSH 0x0                            ; 00555805
    CALL FUN_005a3120                   ; 00555807
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 0055580c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00555810
    PUSH ECX                            ; 00555814
    PUSH EAX                            ; 00555815
    CALL FUN_005537c0                   ; 00555816
        ;   XREF to: 005537c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005537c0()
    MOV EAX,dword ptr [EBX + 0x68]      ; 0055581b
    ADD ESP,0xc                         ; 0055581e
    FILD dword ptr [EAX + 0x170]        ; 00555821
    FSTP double ptr [EBX + 0x10c]       ; 00555827
    ADD ESP,0xc                         ; 0055582d
    POP EBP                             ; 00555830
    POP EDI                             ; 00555831
    POP ESI                             ; 00555832
    POP EBX                             ; 00555833
    RET                                 ; 00555834

