; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496840(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
;
; XREF[7]:
;   FUN_00493720 at 004937f5
;   FUN_00493d40 at 00493e45
;   FUN_00494690 at 004948de
;   FUN_004958d0 at 00495960
;   FUN_004961b0 at 00496234
;   FUN_0049b060 at 0049b566
;   FUN_0050a5e0 at 0050a618
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00496920
;   FUN_004c3ea0
;   FUN_004c4510
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496840
        ;   Label: FUN_00496840
    PUSH ESI                            ; 00496841
    PUSH EDI                            ; 00496842
    PUSH EBP                            ; 00496843
    MOV EDI,dword ptr [ESP + 0x18]      ; 00496844
    MOV ESI,dword ptr [ESP + 0x20]      ; 00496848
    CMP dword ptr [0x01c3eb50],0x0      ; 0049684c | DAT_01c3eb50
    JNZ 0x00496878                      ; 00496853
        ;   XREF to: 00496878 (CONDITIONAL_JUMP)  ; LAB_00496878
    MOV ECX,0x5dbc68                    ; 00496855 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa4                        ; 0049685a
    PUSH 0x5dbc7e                       ; 0049685f | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 00496864 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0049686a | DAT_01d1d404
    CALL FUN_005030e0                   ; 00496870
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00496875
    MOV EAX,[0x01c3eb50]                ; 00496878 | DAT_01c3eb50
        ;   Label: LAB_00496878
    PUSH 0x6a                           ; 0049687d
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0049687f
    PUSH EAX                            ; 00496885
    MOV dword ptr [0x01c3f538],EDX      ; 00496886 | DAT_01c3f538
    CALL FUN_004c4510                   ; 0049688c
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 00496891
    MOV [0x01c3f53c],EAX                ; 00496894 | DAT_01c3f53c
    TEST ESI,ESI                        ; 00496899
    JNZ 0x004968f1                      ; 0049689b
        ;   XREF to: 004968f1 (CONDITIONAL_JUMP)  ; LAB_004968f1
    MOV EDX,dword ptr [0x0061b498]      ; 0049689d | DAT_0061b498
        ;   Label: LAB_0049689d
    SUB EDX,EDI                         ; 004968a3
    MOV EAX,EDX                         ; 004968a5
    SAR EDX,0x1f                        ; 004968a7
    SUB EAX,EDX                         ; 004968aa
    SAR EAX,0x1                         ; 004968ac
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004968ae
    MOV EDX,dword ptr [0x0061b49c]      ; 004968b2 | DAT_0061b49c
    SUB EDX,EDI                         ; 004968b8
    MOV ECX,EAX                         ; 004968ba
    MOV EAX,EDX                         ; 004968bc
    SAR EDX,0x1f                        ; 004968be
    SUB EAX,EDX                         ; 004968c1
    SAR EAX,0x1                         ; 004968c3
    MOV EBP,dword ptr [ESP + 0x24]      ; 004968c5
    PUSH EBP                            ; 004968c9
    MOV EBX,dword ptr [0x0061b49c]      ; 004968ca | DAT_0061b49c
    PUSH ESI                            ; 004968d0
    SUB EBX,EAX                         ; 004968d1
    MOV EDX,dword ptr [0x0061b498]      ; 004968d3 | DAT_0061b498
    PUSH EBX                            ; 004968d9
    SUB EDX,ECX                         ; 004968da
    PUSH EDX                            ; 004968dc
    PUSH EAX                            ; 004968dd
    PUSH ECX                            ; 004968de
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004968df
    PUSH EAX                            ; 004968e3
    CALL FUN_00496920                   ; 004968e4
        ;   XREF to: 00496920 (UNCONDITIONAL_CALL)  ; undefined FUN_00496920()
    ADD ESP,0x1c                        ; 004968e9
    POP EBP                             ; 004968ec
    POP EDI                             ; 004968ed
    POP ESI                             ; 004968ee
    POP EBX                             ; 004968ef
    RET                                 ; 004968f0
    MOV EAX,[0x01c3eb50]                ; 004968f1 | DAT_01c3eb50
        ;   Label: LAB_004968f1
    PUSH ESI                            ; 004968f6
    MOV EDX,dword ptr [EAX + 0x3668]    ; 004968f7
    PUSH EAX                            ; 004968fd
    LEA EBX,[EDX + EDX*0x1]             ; 004968fe
    CALL FUN_004c3ea0                   ; 00496901
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD EAX,EBX                         ; 00496906
    ADD ESP,0x8                         ; 00496908
    CMP EDI,EAX                         ; 0049690b
    JGE 0x0049689d                      ; 0049690d
        ;   XREF to: 0049689d (CONDITIONAL_JUMP)  ; LAB_0049689d
    MOV EDI,EAX                         ; 0049690f
    JMP 0x0049689d                      ; 00496911
        ;   XREF to: 0049689d (UNCONDITIONAL_JUMP)  ; LAB_0049689d

