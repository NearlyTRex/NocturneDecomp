; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004db6f0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 s_..\\core\\mobster.cpp_0058a35f+2
;   string s_CMobster::aimTommyGun_-_I'm_not_c_0058a375
;   undefined4 DAT_0058a3a5
;   undefined4 DAT_0058a3a9
;   undefined4 DAT_0058a3b1
;   undefined4 DAT_01cae124
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01ccdbb0
;   undefined4 DAT_01ccdbd0
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02ddf9a8
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040d890
;   FUN_0040df00
;   FUN_00479ab0
;   FUN_004c8440
;   FUN_0051c3d0
;   FUN_0051d7a0
;   FUN_0054e4a0
;   FUN_0055a8b0
;   FUN_0055d4a0
;   FUN_0055d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db6f0
        ;   Label: FUN_004db6f0
    PUSH ESI                            ; 004db6f1
    PUSH EDI                            ; 004db6f2
    PUSH EBP                            ; 004db6f3
    MOV EBP,ESP                         ; 004db6f4
    SUB ESP,0x74                        ; 004db6f6
    AND ESP,0xfffffff8                  ; 004db6f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004db6fc
    MOV EDX,dword ptr [EBX + 0x24f0]    ; 004db6ff
    TEST EDX,EDX                        ; 004db705
    JZ 0x004db720                       ; 004db707
        ;   XREF to: 004db720 (CONDITIONAL_JUMP)  ; LAB_004db720
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 004db709
    TEST ECX,ECX                        ; 004db70f
    JNZ 0x004db728                      ; 004db711
        ;   XREF to: 004db728 (CONDITIONAL_JUMP)  ; LAB_004db728
    MOV dword ptr [EBX + 0xbdf4],ECX    ; 004db713
    MOV ESP,EBP                         ; 004db719
        ;   Label: LAB_004db719
    POP EBP                             ; 004db71b
    POP EDI                             ; 004db71c
    POP ESI                             ; 004db71d
    POP EBX                             ; 004db71e
    RET                                 ; 004db71f
    MOV dword ptr [EBX + 0xbdf4],EDX    ; 004db720
        ;   Label: LAB_004db720
    JMP 0x004db719                      ; 004db726
        ;   XREF to: 004db719 (UNCONDITIONAL_JUMP)  ; LAB_004db719
    PUSH ECX                            ; 004db728
        ;   Label: LAB_004db728
    PUSH EBX                            ; 004db729
    CALL FUN_00479ab0                   ; 004db72a
        ;   XREF to: 00479ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00479ab0()
    ADD ESP,0x8                         ; 004db72f
    TEST EAX,EAX                        ; 004db732
    JZ 0x004db9dc                       ; 004db734
        ;   XREF to: 004db9dc (CONDITIONAL_JUMP)  ; LAB_004db9dc
    MOV EAX,[0x02ddf9a8]                ; 004db73a | DAT_02ddf9a8
        ;   Label: LAB_004db73a
    PUSH EAX                            ; 004db73f
    MOV EDX,dword ptr [EBX + 0x24f0]    ; 004db740
    PUSH EDX                            ; 004db746
    CALL FUN_0040d890                   ; 004db747
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004db74c
    TEST EAX,EAX                        ; 004db74f
    JNZ 0x004db776                      ; 004db751
        ;   XREF to: 004db776 (CONDITIONAL_JUMP)  ; LAB_004db776
    MOV ECX,0x58a361                    ; 004db753 | s_..\core\mobster.cpp_0058a35f+2
    MOV ESI,0x323                       ; 004db758
    PUSH 0x58a375                       ; 004db75d | = "CMobster::aimTommyGun - I'm not carry..."
    MOV dword ptr [0x01cc4800],ECX      ; 004db762 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004db768 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004db76e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004db773
    MOV EDI,0x3f490fdb                  ; 004db776
        ;   Label: LAB_004db776
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004db77b
    MOV dword ptr [ESP],EDI             ; 004db781
    TEST EAX,EAX                        ; 004db784
    JZ 0x004db78f                       ; 004db786
        ;   XREF to: 004db78f (CONDITIONAL_JUMP)  ; LAB_004db78f
    MOV dword ptr [ESP],0x3fc90fdb      ; 004db788
    MOV EDX,dword ptr [0x01ccdbb0]      ; 004db78f | DAT_01ccdbb0
        ;   Label: LAB_004db78f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004db795
    SUB EAX,EDX                         ; 004db79c
    MOV EDX,EAX                         ; 004db79e
    SHL EDX,0x4                         ; 004db7a0
    LEA EAX,[EBX + 0xfd0]               ; 004db7a3
    ADD EAX,EDX                         ; 004db7a9
    PUSH EAX                            ; 004db7ab
    PUSH 0x2dd1184                      ; 004db7ac | DAT_02dd1184
    LEA EAX,[ESP + 0x40]                ; 004db7b1
    PUSH EAX                            ; 004db7b5
    CALL FUN_0055a8b0                   ; 004db7b6
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    ADD ESP,0xc                         ; 004db7bb
    PUSH EAX                            ; 004db7be
    LEA EAX,[ESP + 0x48]                ; 004db7bf
    PUSH EAX                            ; 004db7c3
    PUSH EBX                            ; 004db7c4
    CALL FUN_0040a240                   ; 004db7c5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004db7ca
    FLD float ptr [EDX + 0x20]          ; 004db7d0
    FSUB float ptr [EAX]                ; 004db7d3
    ADD ESP,0xc                         ; 004db7d5
    FSTP float ptr [ESP + 0x50]         ; 004db7d8
    FLD float ptr [EDX + 0x24]          ; 004db7dc
    FSUB float ptr [EAX + 0x4]          ; 004db7df
    MOV ECX,dword ptr [0x01cae124]      ; 004db7e2 | DAT_01cae124
    FSTP float ptr [ESP + 0x54]         ; 004db7e8
    FLD float ptr [EDX + 0x28]          ; 004db7ec
    FSUB float ptr [EAX + 0x8]          ; 004db7ef
    PUSH ECX                            ; 004db7f2
    FSTP float ptr [ESP + 0x5c]         ; 004db7f3
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004db7f7
    PUSH ESI                            ; 004db7fd
    CALL FUN_0040d890                   ; 004db7fe
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004db803
    TEST EAX,EAX                        ; 004db806
    JZ 0x004db9f6                       ; 004db808
        ;   XREF to: 004db9f6 (CONDITIONAL_JUMP)  ; LAB_004db9f6
    FLD float ptr [ESP + 0x54]          ; 004db80e
    FADD float ptr [0x0058a3a9]         ; 004db812 | DAT_0058a3a9
    FSTP float ptr [ESP + 0x54]         ; 004db818
        ;   Label: LAB_004db818
    LEA EAX,[ESP + 0x50]                ; 004db81c
    PUSH EAX                            ; 004db820
    LEA EAX,[ESP + 0x60]                ; 004db821
    PUSH EAX                            ; 004db825
    CALL FUN_0054e4a0                   ; 004db826
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    ADD ESP,0x8                         ; 004db82b
    FLD float ptr [ESP + 0x60]          ; 004db82e
    FSUB float ptr [EBX + 0x34]         ; 004db832
    SUB ESP,0x4                         ; 004db835
    FSTP float ptr [ESP]                ; 004db838
    CALL FUN_0040df00                   ; 004db83b
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x74],EAX      ; 004db840
    FLD float ptr [ESP + 0x74]          ; 004db844
    ADD ESP,0x4                         ; 004db848
    FST float ptr [ESP + 0x60]          ; 004db84b
    FABS                                ; 004db84f
    FLD float ptr [ESP + 0x54]          ; 004db851
    FMUL ST0                            ; 004db855
    FLD float ptr [ESP + 0x50]          ; 004db857
    FMUL ST0                            ; 004db85b
    FADDP                               ; 004db85d
    FLD float ptr [ESP + 0x58]          ; 004db85f
    FMUL ST0                            ; 004db863
    FADDP                               ; 004db865
    FSQRT                               ; 004db867
    FLD float ptr [ESP]                 ; 004db869
    FXCH                                ; 004db86c
    FSTP float ptr [ESP + 0x4]          ; 004db86e
    FCOMPP                              ; 004db872
    FNSTSW AX                           ; 004db874
    SAHF                                ; 004db876
    JBE 0x004dba05                      ; 004db877
        ;   XREF to: 004dba05 (CONDITIONAL_JUMP)  ; LAB_004dba05
    FLD float ptr [ESP + 0x4]           ; 004db87d
    FCOMP double ptr [0x0058a3b1]       ; 004db881 | DAT_0058a3b1
    FNSTSW AX                           ; 004db887
    SAHF                                ; 004db889
    JBE 0x004dba05                      ; 004db88a
        ;   XREF to: 004dba05 (CONDITIONAL_JUMP)  ; LAB_004dba05
    FLD float ptr [EBX + 0xbdf4]        ; 004db890
    FADD float ptr [EBP + 0x18]         ; 004db896
    FST float ptr [EBX + 0xbdf4]        ; 004db899
    FLD1                                ; 004db89f
    FCOMPP                              ; 004db8a1
    FNSTSW AX                           ; 004db8a3
    SAHF                                ; 004db8a5
    JNC 0x004db8b2                      ; 004db8a6
        ;   XREF to: 004db8b2 (CONDITIONAL_JUMP)  ; LAB_004db8b2
    MOV dword ptr [EBX + 0xbdf4],0x3f800000 ; 004db8a8
    FLD float ptr [ESP + 0x5c]          ; 004db8b2
        ;   Label: LAB_004db8b2
    FLD float ptr [ESP]                 ; 004db8b6
    FCHS                                ; 004db8b9
    FSTP float ptr [ESP + 0x6c]         ; 004db8bb
    FCOMP float ptr [ESP + 0x6c]        ; 004db8bf
    FNSTSW AX                           ; 004db8c3
    SAHF                                ; 004db8c5
    JNC 0x004db8d0                      ; 004db8c6
        ;   XREF to: 004db8d0 (CONDITIONAL_JUMP)  ; LAB_004db8d0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004db8c8
    MOV dword ptr [ESP + 0x5c],EAX      ; 004db8cc
    FLD float ptr [ESP + 0x5c]          ; 004db8d0
        ;   Label: LAB_004db8d0
    FCOMP float ptr [ESP]               ; 004db8d4
    FNSTSW AX                           ; 004db8d7
    SAHF                                ; 004db8d9
    JBE 0x004db8e3                      ; 004db8da
        ;   XREF to: 004db8e3 (CONDITIONAL_JUMP)  ; LAB_004db8e3
    MOV EAX,dword ptr [ESP]             ; 004db8dc
    MOV dword ptr [ESP + 0x5c],EAX      ; 004db8df
    FLD float ptr [ESP + 0x60]          ; 004db8e3
        ;   Label: LAB_004db8e3
    FLD float ptr [ESP]                 ; 004db8e7
    FCHS                                ; 004db8ea
    FSTP float ptr [ESP + 0x68]         ; 004db8ec
    FCOMP float ptr [ESP + 0x68]        ; 004db8f0
    FNSTSW AX                           ; 004db8f4
    SAHF                                ; 004db8f6
    JNC 0x004db901                      ; 004db8f7
        ;   XREF to: 004db901 (CONDITIONAL_JUMP)  ; LAB_004db901
    MOV EAX,dword ptr [ESP + 0x68]      ; 004db8f9
    MOV dword ptr [ESP + 0x60],EAX      ; 004db8fd
    FLD float ptr [ESP + 0x60]          ; 004db901
        ;   Label: LAB_004db901
    FCOMP float ptr [ESP]               ; 004db905
    FNSTSW AX                           ; 004db908
    SAHF                                ; 004db90a
    JBE 0x004db914                      ; 004db90b
        ;   XREF to: 004db914 (CONDITIONAL_JUMP)  ; LAB_004db914
    MOV EAX,dword ptr [ESP]             ; 004db90d
    MOV dword ptr [ESP + 0x60],EAX      ; 004db910
    MOV EDI,dword ptr [EBX + 0x24ac]    ; 004db914
        ;   Label: LAB_004db914
    LEA EAX,[EBX + 0x150]               ; 004db91a
    TEST EDI,EDI                        ; 004db920
    JZ 0x004dba30                       ; 004db922
        ;   XREF to: 004dba30 (CONDITIONAL_JUMP)  ; LAB_004dba30
    PUSH 0x51b650                       ; 004db928 | LAB_0051b650
    MOV ECX,dword ptr [0x01ccdbd0]      ; 004db92d | DAT_01ccdbd0
    PUSH ECX                            ; 004db933
    PUSH dword ptr [EBX + 0xbdf4]       ; 004db934
    PUSH 0x40c00000                     ; 004db93a
    PUSH 0x6                            ; 004db93f
    PUSH EAX                            ; 004db941
        ;   Label: LAB_004db941
    CALL FUN_0051c3d0                   ; 004db942
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c3d0()
    ADD ESP,0x18                        ; 004db947
    PUSH dword ptr [ESP + 0x5c]         ; 004db94a
    LEA ESI,[ESP + 0x2c]                ; 004db94e
    LEA EDI,[ESP + 0xc]                 ; 004db952
    CALL FUN_0055d4a0                   ; 004db956
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d4a0()
    LEA ESI,[ESP + 0x2c]                ; 004db95b
    ADD ESP,0x4                         ; 004db95f
    MOVSD ES:EDI,ESI                    ; 004db962
    MOVSD ES:EDI,ESI                    ; 004db963
    MOVSD ES:EDI,ESI                    ; 004db964
    MOVSD ES:EDI,ESI                    ; 004db965
    PUSH 0x51b650                       ; 004db966 | LAB_0051b650
    MOV ESI,dword ptr [0x01ccdbd0]      ; 004db96b | DAT_01ccdbd0
    PUSH ESI                            ; 004db971
    LEA EAX,[ESP + 0x10]                ; 004db972
    PUSH dword ptr [EBX + 0xbdf4]       ; 004db976
    PUSH EAX                            ; 004db97c
    LEA EAX,[EBX + 0x150]               ; 004db97d
    PUSH EAX                            ; 004db983
    MOV dword ptr [ESP + 0x84],EAX      ; 004db984
    CALL FUN_0051d7a0                   ; 004db98b
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d7a0()
    ADD ESP,0x14                        ; 004db990
    LEA ESI,[ESP + 0x18]                ; 004db993
    PUSH dword ptr [ESP + 0x60]         ; 004db997
    CALL FUN_0055d4e0                   ; 004db99b
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d4e0()
    ADD ESP,0x4                         ; 004db9a0
    LEA EDI,[ESP + 0x8]                 ; 004db9a3
    PUSH 0x51b650                       ; 004db9a7 | LAB_0051b650
    MOV EAX,[0x01ccdbd0]                ; 004db9ac | DAT_01ccdbd0
    LEA ESI,[ESP + 0x1c]                ; 004db9b1
    PUSH EAX                            ; 004db9b5
    MOVSD ES:EDI,ESI                    ; 004db9b6
    MOVSD ES:EDI,ESI                    ; 004db9b7
    MOVSD ES:EDI,ESI                    ; 004db9b8
    MOVSD ES:EDI,ESI                    ; 004db9b9
    LEA EAX,[ESP + 0x10]                ; 004db9ba
    PUSH dword ptr [EBX + 0xbdf4]       ; 004db9be
    PUSH EAX                            ; 004db9c4
    MOV EDX,dword ptr [ESP + 0x80]      ; 004db9c5
    PUSH EDX                            ; 004db9cc
    CALL FUN_0051d7a0                   ; 004db9cd
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d7a0()
    ADD ESP,0x14                        ; 004db9d2
    MOV ESP,EBP                         ; 004db9d5
    POP EBP                             ; 004db9d7
    POP EDI                             ; 004db9d8
    POP ESI                             ; 004db9d9
    POP EBX                             ; 004db9da
    RET                                 ; 004db9db
    CMP dword ptr [EBX + 0xbd50],0x0    ; 004db9dc
        ;   Label: LAB_004db9dc
    JNZ 0x004db73a                      ; 004db9e3
        ;   XREF to: 004db73a (CONDITIONAL_JUMP)  ; LAB_004db73a
    MOV dword ptr [EBX + 0xbdf4],EAX    ; 004db9e9
    MOV ESP,EBP                         ; 004db9ef
    POP EBP                             ; 004db9f1
    POP EDI                             ; 004db9f2
    POP ESI                             ; 004db9f3
    POP EBX                             ; 004db9f4
    RET                                 ; 004db9f5
    FLD float ptr [ESP + 0x54]          ; 004db9f6
        ;   Label: LAB_004db9f6
    FADD float ptr [0x0058a3a5]         ; 004db9fa | DAT_0058a3a5
    JMP 0x004db818                      ; 004dba00
        ;   XREF to: 004db818 (UNCONDITIONAL_JUMP)  ; LAB_004db818
    FLD float ptr [EBX + 0xbdf4]        ; 004dba05
        ;   Label: LAB_004dba05
    FSUB float ptr [EBP + 0x18]         ; 004dba0b
    FST float ptr [EBX + 0xbdf4]        ; 004dba0e
    FLDZ                                ; 004dba14
    FCOMPP                              ; 004dba16
    FNSTSW AX                           ; 004dba18
    SAHF                                ; 004dba1a
    JBE 0x004db8b2                      ; 004dba1b
        ;   XREF to: 004db8b2 (CONDITIONAL_JUMP)  ; LAB_004db8b2
    MOV dword ptr [EBX + 0xbdf4],0x0    ; 004dba21
    JMP 0x004db8b2                      ; 004dba2b
        ;   XREF to: 004db8b2 (UNCONDITIONAL_JUMP)  ; LAB_004db8b2
    PUSH 0x51b650                       ; 004dba30 | LAB_0051b650
        ;   Label: LAB_004dba30
    MOV EDX,dword ptr [0x01ccdbd0]      ; 004dba35 | DAT_01ccdbd0
    PUSH EDX                            ; 004dba3b
    PUSH dword ptr [EBX + 0xbdf4]       ; 004dba3c
    PUSH 0x40c00000                     ; 004dba42
    PUSH 0x2                            ; 004dba47
    JMP 0x004db941                      ; 004dba49
        ;   XREF to: 004db941 (UNCONDITIONAL_JUMP)  ; LAB_004db941

