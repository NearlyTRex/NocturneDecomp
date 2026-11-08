; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005146c0(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
; undefined1       Stack[-0x6d]:1  local_6d
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00514a30 at 00514bda
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_005e18ef
;   TerminatedCString s_saveScreenRaw16_No_ext_f_005e18ff
;   undefined1 DAT_005e191e
;   undefined1 DAT_005e191f
;   undefined1 DAT_005e1920
;   undefined1 DAT_005e1921
;   undefined4 DAT_005e1923
;   TerminatedCString s_engine_pcx_c_005e1926
;   TerminatedCString s_saveScreenRaw16_Unable_t_005e1936
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   ... and 6 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b89c0
;   FUN_005b910c
;   FUN_005bab40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005146c0
        ;   Label: FUN_005146c0
    PUSH ESI                            ; 005146c1
    PUSH EDI                            ; 005146c2
    PUSH EBP                            ; 005146c3
    SUB ESP,0x60                        ; 005146c4
    MOV ESI,dword ptr [ESP + 0x74]      ; 005146c7
    MOV EDI,ESP                         ; 005146cb
    MOV DL,0x2e                         ; 005146cd
    PUSH EDI                            ; 005146cf
    MOV AL,byte ptr [ESI]               ; 005146d0
        ;   Label: LAB_005146d0
    MOV byte ptr [EDI],AL               ; 005146d2
    CMP AL,0x0                          ; 005146d4
    JZ 0x005146e8                       ; 005146d6
        ;   XREF to: 005146e8 (CONDITIONAL_JUMP)  ; LAB_005146e8
    MOV AL,byte ptr [ESI + 0x1]         ; 005146d8
    ADD ESI,0x2                         ; 005146db
    MOV byte ptr [EDI + 0x1],AL         ; 005146de
    ADD EDI,0x2                         ; 005146e1
    CMP AL,0x0                          ; 005146e4
    JNZ 0x005146d0                      ; 005146e6
        ;   XREF to: 005146d0 (CONDITIONAL_JUMP)  ; LAB_005146d0
    POP EDI                             ; 005146e8
        ;   Label: LAB_005146e8
    MOV ESI,ESP                         ; 005146e9
    MOV AL,byte ptr [ESI]               ; 005146eb
        ;   Label: LAB_005146eb
    CMP AL,DL                           ; 005146ed
    JZ 0x00514703                       ; 005146ef
        ;   XREF to: 00514703 (CONDITIONAL_JUMP)  ; LAB_00514703
    CMP AL,0x0                          ; 005146f1
    JZ 0x00514701                       ; 005146f3
        ;   XREF to: 00514701 (CONDITIONAL_JUMP)  ; LAB_00514701
    INC ESI                             ; 005146f5
    MOV AL,byte ptr [ESI]               ; 005146f6
    CMP AL,DL                           ; 005146f8
    JZ 0x00514703                       ; 005146fa
        ;   XREF to: 00514703 (CONDITIONAL_JUMP)  ; LAB_00514703
    INC ESI                             ; 005146fc
    CMP AL,0x0                          ; 005146fd
    JNZ 0x005146eb                      ; 005146ff
        ;   XREF to: 005146eb (CONDITIONAL_JUMP)  ; LAB_005146eb
    SUB ESI,ESI                         ; 00514701
        ;   Label: LAB_00514701
    MOV EDI,ESI                         ; 00514703
        ;   Label: LAB_00514703
    TEST ESI,ESI                        ; 00514705
    JZ 0x00514857                       ; 00514707
        ;   XREF to: 00514857 (CONDITIONAL_JUMP)  ; LAB_00514857
    MOV ESI,0x5e191e                    ; 0051470d | DAT_005e191e
        ;   Label: LAB_0051470d
    PUSH EDI                            ; 00514712
    MOV AL,byte ptr [ESI]               ; 00514713 | DAT_005e191e | DAT_005e1920
        ;   Label: LAB_00514713
    MOV byte ptr [EDI],AL               ; 00514715
    CMP AL,0x0                          ; 00514717
    JZ 0x0051472b                       ; 00514719
        ;   XREF to: 0051472b (CONDITIONAL_JUMP)  ; LAB_0051472b
    MOV AL,byte ptr [ESI + 0x1]         ; 0051471b | DAT_005e191f | DAT_005e1921
    ADD ESI,0x2                         ; 0051471e
    MOV byte ptr [EDI + 0x1],AL         ; 00514721
    ADD EDI,0x2                         ; 00514724
    CMP AL,0x0                          ; 00514727
    JNZ 0x00514713                      ; 00514729
        ;   XREF to: 00514713 (CONDITIONAL_JUMP)  ; LAB_00514713
    POP EDI                             ; 0051472b
        ;   Label: LAB_0051472b
    PUSH 0x5e1923                       ; 0051472c | DAT_005e1923
    LEA EAX,[ESP + 0x4]                 ; 00514731
    PUSH EAX                            ; 00514735
    CALL FUN_005b910c                   ; 00514736
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined FUN_005b910c()
    ADD ESP,0x8                         ; 0051473b
    MOV EDI,EAX                         ; 0051473e
    TEST EAX,EAX                        ; 00514740
    JNZ 0x00514767                      ; 00514742
        ;   XREF to: 00514767 (CONDITIONAL_JUMP)  ; LAB_00514767
    MOV EBX,0x5e1926                    ; 00514744 | = "..\\engine\\pcx.c"
    MOV ESI,0x6d                        ; 00514749
    PUSH 0x5e1936                       ; 0051474e | = "saveScreenRaw16 - Unable to open output"
    MOV dword ptr [0x01d046a0],EBX      ; 00514753 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00514759 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0051475f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00514764
    XOR EBP,EBP                         ; 00514767
        ;   Label: LAB_00514767
    MOV EAX,[0x006141bc]                ; 00514769 | DAT_006141bc
    MOV dword ptr [ESP + 0x5c],EBP      ; 0051476e
    TEST EAX,EAX                        ; 00514772
    JLE 0x00514846                      ; 00514774
        ;   XREF to: 00514846 (CONDITIONAL_JUMP)  ; LAB_00514846
    MOV dword ptr [ESP + 0x58],EBP      ; 0051477a
    MOV ESI,dword ptr [ESP + 0x58]      ; 0051477e
        ;   Label: LAB_0051477e
    MOV EBP,dword ptr [0x006141b8]      ; 00514782 | DAT_006141b8
    XOR EBX,EBX                         ; 00514788
    MOV ESI,dword ptr [ESI + 0x1c2a38c] ; 0051478a | DAT_01c2a38c | DAT_01c2a390
    TEST EBP,EBP                        ; 00514790
    JLE 0x00514824                      ; 00514792
        ;   XREF to: 00514824 (CONDITIONAL_JUMP)  ; LAB_00514824
    XOR EAX,EAX                         ; 00514798
        ;   Label: LAB_00514798
    MOV AX,word ptr [ESI]               ; 0051479a
    MOV CL,byte ptr [0x01c35814]        ; 0051479d | DAT_01c35814
    MOV EDX,EAX                         ; 005147a3
    SHR EDX,CL                          ; 005147a5
    IMUL EDX,dword ptr [0x01c35818]     ; 005147a7 | DAT_01c35818
    AND EDX,0xff                        ; 005147ae
    MOV CL,byte ptr [0x01c35820]        ; 005147b4 | DAT_01c35820
    MOV dword ptr [ESP + 0x50],EDX      ; 005147ba
    MOV EDX,EAX                         ; 005147be
    MOV EBP,dword ptr [0x01c35824]      ; 005147c0 | DAT_01c35824
    SHR EDX,CL                          ; 005147c6
    IMUL EDX,EBP                        ; 005147c8
    MOV CL,byte ptr [0x01c3582c]        ; 005147cb | DAT_01c3582c
    AND EDX,0xff                        ; 005147d1
    MOV EBP,EAX                         ; 005147d7
    MOV dword ptr [ESP + 0x54],EDX      ; 005147d9
    SHR EBP,CL                          ; 005147dd
    IMUL EBP,dword ptr [0x01c35830]     ; 005147df | DAT_01c35830
    PUSH EDI                            ; 005147e6
    MOV ECX,dword ptr [ESP + 0x54]      ; 005147e7
    PUSH ECX                            ; 005147eb
    CALL FUN_005bab40                   ; 005147ec
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bab40()
    ADD ESP,0x8                         ; 005147f1
    PUSH EDI                            ; 005147f4
    MOV EAX,dword ptr [ESP + 0x58]      ; 005147f5
    PUSH EAX                            ; 005147f9
    CALL FUN_005bab40                   ; 005147fa
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bab40()
    ADD ESP,0x8                         ; 005147ff
    PUSH EDI                            ; 00514802
    AND EBP,0xff                        ; 00514803
    PUSH EBP                            ; 00514809
    ADD ESI,0x2                         ; 0051480a
    INC EBX                             ; 0051480d
    CALL FUN_005bab40                   ; 0051480e
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bab40()
    MOV EDX,dword ptr [0x006141b8]      ; 00514813 | DAT_006141b8
    ADD ESP,0x8                         ; 00514819
    CMP EBX,EDX                         ; 0051481c
    JL 0x00514798                       ; 0051481e
        ;   XREF to: 00514798 (CONDITIONAL_JUMP)  ; LAB_00514798
    MOV EDX,dword ptr [ESP + 0x58]      ; 00514824
        ;   Label: LAB_00514824
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00514828
    MOV EBX,dword ptr [0x006141bc]      ; 0051482c | DAT_006141bc
    ADD EDX,0x4                         ; 00514832
    INC ECX                             ; 00514835
    MOV dword ptr [ESP + 0x58],EDX      ; 00514836
    MOV dword ptr [ESP + 0x5c],ECX      ; 0051483a
    CMP ECX,EBX                         ; 0051483e
    JL 0x0051477e                       ; 00514840
        ;   XREF to: 0051477e (CONDITIONAL_JUMP)  ; LAB_0051477e
    PUSH EDI                            ; 00514846
        ;   Label: LAB_00514846
    CALL FUN_005b89c0                   ; 00514847
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0051484c
    ADD ESP,0x60                        ; 0051484f
    POP EBP                             ; 00514852
    POP EDI                             ; 00514853
    POP ESI                             ; 00514854
    POP EBX                             ; 00514855
    RET                                 ; 00514856
    MOV EDX,0x5e18ef                    ; 00514857 | = "..\\engine\\pcx.c"
        ;   Label: LAB_00514857
    MOV ECX,0x67                        ; 0051485c
    PUSH 0x5e18ff                       ; 00514861 | = "saveScreenRaw16 - No ext found"
    MOV dword ptr [0x01d046a0],EDX      ; 00514866 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0051486c | DAT_01d046a4
    CALL FUN_004e4500                   ; 00514872
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00514877
    JMP 0x0051470d                      ; 0051487a
        ;   XREF to: 0051470d (UNCONDITIONAL_JUMP)  ; LAB_0051470d

