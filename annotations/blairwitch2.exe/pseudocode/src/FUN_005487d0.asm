; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005487d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_00429390 at 004293bb
;   FUN_00581910 at 00581eff
;
; Called Functions:
;   FUN_0041a590
;   FUN_0041a600
;   FUN_0041b600
;   FUN_005415d0
;   FUN_00547810
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005487d0
        ;   Label: FUN_005487d0
    PUSH EDI                            ; 005487d1
    PUSH EBP                            ; 005487d2
    SUB ESP,0x64                        ; 005487d3
    MOV dword ptr [ESP + 0x48],ESI      ; 005487d6
    MOV ESI,dword ptr [ESP + 0x74]      ; 005487da
    PUSH ESI                            ; 005487de
    CALL FUN_00547810                   ; 005487df
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 005487e4
    PUSH EAX                            ; 005487e7
    MOV EBX,EAX                         ; 005487e8
    CALL FUN_005415d0                   ; 005487ea
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005415d0()
    ADD ESP,0x4                         ; 005487ef
    MOV EAX,dword ptr [EAX + 0x1d1f8]   ; 005487f2
    MOV dword ptr [ESP + 0x4c],EAX      ; 005487f8
    MOV EAX,ESP                         ; 005487fc
    PUSH EAX                            ; 005487fe
    CALL FUN_0041b600                   ; 005487ff
        ;   XREF to: 0041b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b600()
    ADD ESP,0x4                         ; 00548804
    XOR EDX,EDX                         ; 00548807
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00548809
    MOV dword ptr [ESP + 0x5c],EDX      ; 0054880d
    TEST ECX,ECX                        ; 00548811
    JLE 0x0054886c                      ; 00548813
        ;   XREF to: 0054886c (CONDITIONAL_JUMP)  ; LAB_0054886c
    LEA EAX,[EBX + 0x1c0c]              ; 00548815
    ADD ESI,0xe80                       ; 0054881b
    MOV dword ptr [ESP + 0x50],EBX      ; 00548821
    MOV dword ptr [ESP + 0x58],EAX      ; 00548825
    MOV dword ptr [ESP + 0x54],ESI      ; 00548829
    MOV EAX,dword ptr [ESP + 0x50]      ; 0054882d
        ;   Label: LAB_0054882d
    CMP dword ptr [EAX + 0x256c],0x2    ; 00548831
    JZ 0x00548884                       ; 00548838
        ;   XREF to: 00548884 (CONDITIONAL_JUMP)  ; LAB_00548884
    MOV EBX,dword ptr [ESP + 0x50]      ; 0054883a
        ;   Label: LAB_0054883a
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054883e
    MOV EDI,dword ptr [ESP + 0x54]      ; 00548842
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00548846
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0054884a
    ADD EBX,0x4                         ; 0054884e
    ADD ESI,0x18                        ; 00548851
    ADD EDI,0x30                        ; 00548854
    INC EBP                             ; 00548857
    MOV dword ptr [ESP + 0x50],EBX      ; 00548858
    MOV dword ptr [ESP + 0x58],ESI      ; 0054885c
    MOV dword ptr [ESP + 0x54],EDI      ; 00548860
    MOV dword ptr [ESP + 0x5c],EBP      ; 00548864
    CMP EBP,EDX                         ; 00548868
    JL 0x0054882d                       ; 0054886a
        ;   XREF to: 0054882d (CONDITIONAL_JUMP)  ; LAB_0054882d
    MOV ECX,0x6                         ; 0054886c
        ;   Label: LAB_0054886c
    MOV EDI,dword ptr [ESP + 0x48]      ; 00548871
    MOV ESI,ESP                         ; 00548875
    MOVSD.REP ES:EDI,ESI                ; 00548877
    MOV EAX,dword ptr [ESP + 0x48]      ; 00548879
    ADD ESP,0x64                        ; 0054887d
    POP EBP                             ; 00548880
    POP EDI                             ; 00548881
    POP EBX                             ; 00548882
    RET                                 ; 00548883
    MOV EBP,dword ptr [ESP + 0x54]      ; 00548884
        ;   Label: LAB_00548884
    MOV EAX,dword ptr [ESP + 0x58]      ; 00548888
    XOR EBX,EBX                         ; 0054888c
    MOV dword ptr [ESP + 0x60],EAX      ; 0054888e
    PUSH EBP                            ; 00548892
        ;   Label: LAB_00548892
    PUSH EBX                            ; 00548893
    MOV ESI,dword ptr [ESP + 0x68]      ; 00548894
    PUSH ESI                            ; 00548898
    LEA ESI,[ESP + 0x30]                ; 00548899
    LEA EDI,[ESP + 0x3c]                ; 0054889d
    CALL FUN_0041a600                   ; 005488a1
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x30]                ; 005488a6
    ADD ESP,0x8                         ; 005488aa
    MOVSD ES:EDI,ESI                    ; 005488ad
    MOVSD ES:EDI,ESI                    ; 005488ae
    MOVSD ES:EDI,ESI                    ; 005488af
    LEA ESI,[ESP + 0x34]                ; 005488b0
    PUSH ESI                            ; 005488b4
    LEA ESI,[ESP + 0x44]                ; 005488b5
    LEA EDI,[ESP + 0x20]                ; 005488b9
    CALL FUN_00591530                   ; 005488bd
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0x44]                ; 005488c2
    ADD ESP,0x8                         ; 005488c6
    MOVSD ES:EDI,ESI                    ; 005488c9
    MOVSD ES:EDI,ESI                    ; 005488ca
    MOVSD ES:EDI,ESI                    ; 005488cb
    LEA ESI,[ESP + 0x18]                ; 005488cc
    PUSH ESI                            ; 005488d0
    LEA ESI,[ESP + 0x4]                 ; 005488d1
    PUSH ESI                            ; 005488d5
    INC EBX                             ; 005488d6
    CALL FUN_0041a590                   ; 005488d7
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a590()
    ADD ESP,0x8                         ; 005488dc
    CMP EBX,0x8                         ; 005488df
    JGE 0x0054883a                      ; 005488e2
        ;   XREF to: 0054883a (CONDITIONAL_JUMP)  ; LAB_0054883a
    JMP 0x00548892                      ; 005488e8
        ;   XREF to: 00548892 (UNCONDITIONAL_JUMP)  ; LAB_00548892

