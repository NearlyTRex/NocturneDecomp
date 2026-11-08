; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448750(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0044f740 at 0044f745
;
; Called Functions:
;   FUN_00448720
;   FUN_005a28f0
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448750
        ;   Label: FUN_00448750
    PUSH ESI                            ; 00448751
    PUSH EDI                            ; 00448752
    PUSH EBP                            ; 00448753
    SUB ESP,0x3c                        ; 00448754
    PUSH 0x1000                         ; 00448757
    PUSH 0x0                            ; 0044875c
    MOV EDX,dword ptr [ESP + 0x58]      ; 0044875e
    PUSH EDX                            ; 00448762
    XOR EBP,EBP                         ; 00448763
    CALL FUN_005a28f0                   ; 00448765
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0044876a
    MOV ECX,0x1000                      ; 0044876d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00448772
    MOV dword ptr [ESP + 0x10],ECX      ; 00448776
    MOV dword ptr [ESP + 0x14],EAX      ; 0044877a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044877e
        ;   Label: LAB_0044877e
    XOR EDI,EDI                         ; 00448782
    MOV dword ptr [ESP + 0x18],EAX      ; 00448784
    MOV EAX,EDI                         ; 00448788
        ;   Label: LAB_00448788
    SHL EAX,0x4                         ; 0044878a
    MOV ESI,dword ptr [ESP + 0x50]      ; 0044878d
    LEA EBX,[EAX + EBP*0x1]             ; 00448791
    MOV EDX,dword ptr [ESP + 0x18]      ; 00448794
    ADD EBX,ESI                         ; 00448798
    ADD EAX,EDX                         ; 0044879a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044879c
    ADD ESI,EAX                         ; 004487a0
    ADD EBX,0x100                       ; 004487a2
        ;   Label: LAB_004487a2
    CALL FUN_005a35cc                   ; 004487a8
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV byte ptr [EBX + 0xffffff00],AL  ; 004487ad
    CMP EBX,ESI                         ; 004487b3
    JNZ 0x004487a2                      ; 004487b5
        ;   XREF to: 004487a2 (CONDITIONAL_JUMP)  ; LAB_004487a2
    INC EDI                             ; 004487b7
    CMP EDI,0x10                        ; 004487b8
    JL 0x00448788                       ; 004487bb
        ;   XREF to: 00448788 (CONDITIONAL_JUMP)  ; LAB_00448788
    MOV ECX,dword ptr [ESP + 0x10]      ; 004487bd
    INC ECX                             ; 004487c1
    INC EBP                             ; 004487c2
    MOV dword ptr [ESP + 0x10],ECX      ; 004487c3
    CMP EBP,0x10                        ; 004487c7
    JL 0x0044877e                       ; 004487ca
        ;   XREF to: 0044877e (CONDITIONAL_JUMP)  ; LAB_0044877e
    XOR EBX,ESI                         ; 004487cc
    MOV ESI,0xffffffff                  ; 004487ce
    MOV dword ptr [ESP + 0x38],EBX      ; 004487d3
    MOV dword ptr [ESP + 0x1c],ESI      ; 004487d7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004487db
        ;   Label: LAB_004487db
    MOV EBP,0xffffffff                  ; 004487df
    AND EAX,0xf                         ; 004487e4
    XOR EDI,EDI                         ; 004487e7
    MOV dword ptr [ESP + 0x20],EAX      ; 004487e9
    MOV EAX,dword ptr [ESP + 0x38]      ; 004487ed
    MOV dword ptr [ESP + 0x28],EBP      ; 004487f1
    INC EAX                             ; 004487f5
    MOV dword ptr [ESP + 0x30],EDI      ; 004487f6
    AND EAX,0xf                         ; 004487fa
    MOV dword ptr [ESP + 0x2c],EDI      ; 004487fd
    MOV dword ptr [ESP + 0x24],EAX      ; 00448801
    MOV EAX,dword ptr [ESP + 0x30]      ; 00448805
        ;   Label: LAB_00448805
    MOV ECX,dword ptr [ESP + 0x28]      ; 00448809
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0044880d
    MOV EDX,dword ptr [ESP + 0x30]      ; 00448811
    MOV EDI,dword ptr [ESP + 0x50]      ; 00448815
    MOV EBP,dword ptr [ESP + 0x20]      ; 00448819
    XOR ESI,ESI                         ; 0044881d
    MOV dword ptr [ESP + 0x34],EAX      ; 0044881f
    AND ECX,0xf                         ; 00448823
    INC EBX                             ; 00448826
    MOV EAX,dword ptr [ESP + 0x24]      ; 00448827
    ADD EBP,EDX                         ; 0044882b
    ADD EAX,EDX                         ; 0044882d
    AND EBX,0xf                         ; 0044882f
    ADD EAX,EDI                         ; 00448832
    SHL EBX,0x4                         ; 00448834
    MOV dword ptr [ESP + 0xc],EAX       ; 00448837
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044883b
    SHL ECX,0x4                         ; 0044883f
    ADD EAX,EBX                         ; 00448842
    ADD EBP,EDI                         ; 00448844
    ADD EAX,EDI                         ; 00448846
    MOV EBX,dword ptr [ESP + 0x38]      ; 00448848
    MOV dword ptr [ESP],EAX             ; 0044884c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044884f
    ADD EBX,EDX                         ; 00448853
    ADD EAX,ECX                         ; 00448855
    ADD EBX,EDI                         ; 00448857
    ADD EAX,EDI                         ; 00448859
    MOV EDI,0xffffffff                  ; 0044885b
    MOV dword ptr [ESP + 0x4],EAX       ; 00448860
    MOV ECX,EDI                         ; 00448864
        ;   Label: LAB_00448864
    AND ECX,0xf                         ; 00448866
    MOV EAX,dword ptr [ESP + 0x50]      ; 00448869
    SHL ECX,0x8                         ; 0044886d
    MOV EDX,dword ptr [ESP + 0x34]      ; 00448870
    ADD ECX,EAX                         ; 00448874
    MOV EAX,dword ptr [ESP + 0x38]      ; 00448876
    ADD ECX,EDX                         ; 0044887a
    ADD ECX,EAX                         ; 0044887c
    XOR EAX,EAX                         ; 0044887e
    MOV AL,byte ptr [ECX]               ; 00448880
    XOR ECX,ECX                         ; 00448882
    MOV CL,byte ptr [EBX]               ; 00448884
    ADD ECX,EAX                         ; 00448886
    INC ESI                             ; 00448888
    MOV dword ptr [ESP + 0x8],ECX       ; 00448889
    MOV ECX,ESI                         ; 0044888d
    AND ECX,0xf                         ; 0044888f
    MOV EDX,dword ptr [ESP + 0x50]      ; 00448892
    SHL ECX,0x8                         ; 00448896
    MOV EAX,dword ptr [ESP + 0x34]      ; 00448899
    ADD ECX,EDX                         ; 0044889d
    ADD ECX,EAX                         ; 0044889f
    MOV EAX,dword ptr [ESP + 0x38]      ; 004488a1
    MOV AL,byte ptr [ECX + EAX*0x1]     ; 004488a5
    MOV ECX,dword ptr [ESP + 0x8]       ; 004488a8
    AND EAX,0xff                        ; 004488ac
    MOV EDX,dword ptr [ESP + 0x4]       ; 004488b1
    ADD ECX,EAX                         ; 004488b5
    XOR EAX,EAX                         ; 004488b7
    MOV AL,byte ptr [EDX]               ; 004488b9
    MOV EDX,dword ptr [ESP]             ; 004488bb
    ADD ECX,EAX                         ; 004488be
    XOR EAX,EAX                         ; 004488c0
    MOV AL,byte ptr [EDX]               ; 004488c2
    ADD EAX,ECX                         ; 004488c4
    XOR ECX,ECX                         ; 004488c6
    MOV CL,byte ptr [EBP]               ; 004488c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004488cb
    ADD ECX,EAX                         ; 004488cf
    XOR EAX,EAX                         ; 004488d1
    MOV AL,byte ptr [EDX]               ; 004488d3
    XOR EDX,EDX                         ; 004488d5
    ADD EAX,ECX                         ; 004488d7
    MOV ECX,0x7                         ; 004488d9
    DIV ECX                             ; 004488de
    ADD EBP,0x100                       ; 004488e0
    ADD EBX,0x100                       ; 004488e6
    INC EDI                             ; 004488ec
    MOV ECX,dword ptr [ESP + 0xc]       ; 004488ed
    MOV EDX,dword ptr [ESP + 0x4]       ; 004488f1
    MOV byte ptr [EBX + 0xffffff00],AL  ; 004488f5
    MOV EAX,dword ptr [ESP]             ; 004488fb
    ADD ECX,0x100                       ; 004488fe
    ADD EDX,0x100                       ; 00448904
    MOV dword ptr [ESP + 0xc],ECX       ; 0044890a
    ADD EAX,0x100                       ; 0044890e
    MOV dword ptr [ESP + 0x4],EDX       ; 00448913
    MOV dword ptr [ESP],EAX             ; 00448917
    CMP ESI,0x10                        ; 0044891a
    JL 0x00448864                       ; 0044891d
        ;   XREF to: 00448864 (CONDITIONAL_JUMP)  ; LAB_00448864
    MOV EBX,dword ptr [ESP + 0x30]      ; 00448923
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00448927
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044892b
    ADD EBX,0x10                        ; 0044892f
    INC ESI                             ; 00448932
    INC ECX                             ; 00448933
    MOV dword ptr [ESP + 0x30],EBX      ; 00448934
    MOV dword ptr [ESP + 0x2c],ESI      ; 00448938
    MOV dword ptr [ESP + 0x28],ECX      ; 0044893c
    CMP ESI,0x10                        ; 00448940
    JL 0x00448805                       ; 00448943
        ;   XREF to: 00448805 (CONDITIONAL_JUMP)  ; LAB_00448805
    MOV EAX,dword ptr [ESP + 0x38]      ; 00448949
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0044894d
    INC EAX                             ; 00448951
    INC EBP                             ; 00448952
    MOV dword ptr [ESP + 0x38],EAX      ; 00448953
    MOV dword ptr [ESP + 0x1c],EBP      ; 00448957
    CMP EAX,0x10                        ; 0044895b
    JL 0x004487db                       ; 0044895e
        ;   XREF to: 004487db (CONDITIONAL_JUMP)  ; LAB_004487db
    MOV ECX,dword ptr [ESP + 0x50]      ; 00448964
    PUSH ECX                            ; 00448968
    CALL FUN_00448720                   ; 00448969
        ;   XREF to: 00448720 (UNCONDITIONAL_CALL)  ; undefined FUN_00448720()
    ADD ESP,0x4                         ; 0044896e
    ADD ESP,0x3c                        ; 00448971
    POP EBP                             ; 00448974
    POP EDI                             ; 00448975
    POP ESI                             ; 00448976
    POP EBX                             ; 00448977
    RET                                 ; 00448978

