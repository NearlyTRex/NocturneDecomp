; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525870(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   FUN_00524d10 at 00525090
;   FUN_005257e0 at 00525855
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_00593142
;   string s_SfxSlot::updatePlaybackPos_-_no_s_00593157
;   string s_..\\sound\\sndmain.cpp_00593181
;   string s_SfxSlot::updatePlaybackPos_-_inv_00593196
;   string s_..\\sound\\sndmain.cpp_005931cb
;   string s_SfxSlot::updatePlaybackPos_-_ste_005931e0
;   undefined4 DAT_0059322e
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525870
        ;   Label: FUN_00525870
    PUSH ESI                            ; 00525871
    PUSH EDI                            ; 00525872
    PUSH EBP                            ; 00525873
    MOV EBP,ESP                         ; 00525874
    SUB ESP,0x18                        ; 00525876
    AND ESP,0xfffffff8                  ; 00525879
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052587c
    CMP dword ptr [EBX + 0x74],0x0      ; 0052587f
    JZ 0x005259c5                       ; 00525883
        ;   XREF to: 005259c5 (CONDITIONAL_JUMP)  ; LAB_005259c5
    FLDZ                                ; 00525889
        ;   Label: LAB_00525889
    FCOMP double ptr [EBP + 0x18]       ; 0052588b
    FNSTSW AX                           ; 0052588e
    SAHF                                ; 00525890
    JBE 0x005259ed                      ; 00525891
        ;   XREF to: 005259ed (CONDITIONAL_JUMP)  ; LAB_005259ed
    MOV EDI,0x593181                    ; 00525897 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00525897
    MOV EAX,0xbb5                       ; 0052589c
    PUSH 0x593196                       ; 005258a1 | = "SfxSlot::updatePlaybackPos - invalid ..."
    MOV dword ptr [0x01cc4800],EDI      ; 005258a6 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005258ac | DAT_01cc4804
    CALL FUN_004c8440                   ; 005258b1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005258b6
    FLD double ptr [EBP + 0x18]         ; 005258b9
        ;   Label: LAB_005258b9
    FSUB double ptr [EBX + 0x118]       ; 005258bc
    FLDZ                                ; 005258c2
    FXCH                                ; 005258c4
    FSTP double ptr [ESP]               ; 005258c6
    FCOMP double ptr [ESP]              ; 005258c9
    FNSTSW AX                           ; 005258cc
    SAHF                                ; 005258ce
    JBE 0x005258e0                      ; 005258cf
        ;   XREF to: 005258e0 (CONDITIONAL_JUMP)  ; LAB_005258e0
    MOV EDX,dword ptr [EBX + 0x74]      ; 005258d1
    FILD dword ptr [EDX + 0x138]        ; 005258d4
    FADD double ptr [ESP]               ; 005258da
    FSTP double ptr [ESP]               ; 005258dd
    FLDZ                                ; 005258e0
        ;   Label: LAB_005258e0
    FCOMP double ptr [ESP]              ; 005258e2
    FNSTSW AX                           ; 005258e5
    SAHF                                ; 005258e7
    JBE 0x00525a07                      ; 005258e8
        ;   XREF to: 00525a07 (CONDITIONAL_JUMP)  ; LAB_00525a07
    MOV ESI,dword ptr [EBX + 0x74]      ; 005258ee
        ;   Label: LAB_005258ee
    PUSH ESI                            ; 005258f1
    MOV EDI,dword ptr [ESI + 0x138]     ; 005258f2
    MOV EDX,0x5931cb                    ; 005258f8 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 005258fd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005258fe
    MOV dword ptr [0x01cc4800],EDX      ; 00525902 | DAT_01cc4800
    PUSH EAX                            ; 00525908
    MOV EDX,dword ptr [ESP + 0xc]       ; 00525909
    MOV ECX,0xbc3                       ; 0052590d
    PUSH EDX                            ; 00525912
    MOV dword ptr [0x01cc4804],ECX      ; 00525913 | DAT_01cc4804
    MOV ECX,dword ptr [EBX + 0x11c]     ; 00525919
    PUSH ECX                            ; 0052591f
    MOV ESI,dword ptr [EBX + 0x118]     ; 00525920
    PUSH ESI                            ; 00525926
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00525927
    PUSH EDI                            ; 0052592a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052592b
    PUSH EAX                            ; 0052592e
    PUSH 0x5931e0                       ; 0052592f | = "SfxSlot::updatePlaybackPos - stepped ..."
    CALL FUN_004c8440                   ; 00525934
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x24                        ; 00525939
    FLD double ptr [EBX + 0x60]         ; 0052593c
        ;   Label: LAB_0052593c
    FCOMP double ptr [EBX + 0x118]      ; 0052593f
    FNSTSW AX                           ; 00525945
    SAHF                                ; 00525947
    JZ 0x00525a27                       ; 00525948
        ;   XREF to: 00525a27 (CONDITIONAL_JUMP)  ; LAB_00525a27
    FLD double ptr [EBX + 0x60]         ; 0052594e
        ;   Label: LAB_0052594e
    FADD double ptr [ESP]               ; 00525951
    FSTP double ptr [EBX + 0x60]        ; 00525954
    FLDZ                                ; 00525957
        ;   Label: LAB_00525957
    FCOMP double ptr [EBX + 0x60]       ; 00525959
    FNSTSW AX                           ; 0052595c
    SAHF                                ; 0052595e
    JBE 0x0052596f                      ; 0052595f
        ;   XREF to: 0052596f (CONDITIONAL_JUMP)  ; LAB_0052596f
    MOV dword ptr [EBX + 0x60],0x0      ; 00525961
    MOV dword ptr [EBX + 0x64],0x0      ; 00525968
    MOV EDX,dword ptr [EBX + 0x74]      ; 0052596f
        ;   Label: LAB_0052596f
    CMP dword ptr [EDX + 0x110],0x0     ; 00525972
    JL 0x005259ac                       ; 00525979
        ;   XREF to: 005259ac (CONDITIONAL_JUMP)  ; LAB_005259ac
    FLD double ptr [EBX + 0x60]         ; 0052597b
    FILD dword ptr [EDX + 0x110]        ; 0052597e
    FSTP double ptr [ESP + 0x8]         ; 00525984
    FCOMP double ptr [ESP + 0x8]        ; 00525988
    FNSTSW AX                           ; 0052598c
    SAHF                                ; 0052598e
    JC 0x005259ac                       ; 0052598f
        ;   XREF to: 005259ac (CONDITIONAL_JUMP)  ; LAB_005259ac
    CMP dword ptr [EDX + 0x124],0x0     ; 00525991
    JNZ 0x00525a47                      ; 00525998
        ;   XREF to: 00525a47 (CONDITIONAL_JUMP)  ; LAB_00525a47
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052599e
    MOV dword ptr [EBX + 0x60],EDX      ; 005259a2
    MOV EDX,dword ptr [ESP + 0xc]       ; 005259a5
    MOV dword ptr [EBX + 0x64],EDX      ; 005259a9
    MOV EDX,dword ptr [EBP + 0x18]      ; 005259ac
        ;   Label: LAB_005259ac
    MOV dword ptr [EBX + 0x118],EDX     ; 005259af
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005259b5
    MOV dword ptr [EBX + 0x11c],EDX     ; 005259b8
    MOV ESP,EBP                         ; 005259be
    POP EBP                             ; 005259c0
    POP EDI                             ; 005259c1
    POP ESI                             ; 005259c2
    POP EBX                             ; 005259c3
    RET                                 ; 005259c4
    MOV ECX,0x593142                    ; 005259c5 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005259c5
    MOV ESI,0xbaf                       ; 005259ca
    PUSH 0x593157                       ; 005259cf | = "SfxSlot::updatePlaybackPos - no sampl..."
    MOV dword ptr [0x01cc4800],ECX      ; 005259d4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005259da | DAT_01cc4804
    CALL FUN_004c8440                   ; 005259e0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005259e5
    JMP 0x00525889                      ; 005259e8
        ;   XREF to: 00525889 (UNCONDITIONAL_JUMP)  ; LAB_00525889
    MOV EDX,dword ptr [EBX + 0x74]      ; 005259ed
        ;   Label: LAB_005259ed
    FILD dword ptr [EDX + 0x138]        ; 005259f0
    FCOMP double ptr [EBP + 0x18]       ; 005259f6
    FNSTSW AX                           ; 005259f9
    SAHF                                ; 005259fb
    JC 0x00525897                       ; 005259fc
        ;   XREF to: 00525897 (CONDITIONAL_JUMP)  ; LAB_00525897
    JMP 0x005258b9                      ; 00525a02
        ;   XREF to: 005258b9 (UNCONDITIONAL_JUMP)  ; LAB_005258b9
    MOV EDX,dword ptr [EBX + 0x74]      ; 00525a07
        ;   Label: LAB_00525a07
    FILD dword ptr [EDX + 0x138]        ; 00525a0a
    FADD double ptr [0x0059322e]        ; 00525a10 | DAT_0059322e
    FCOMP double ptr [ESP]              ; 00525a16
    FNSTSW AX                           ; 00525a19
    SAHF                                ; 00525a1b
    JC 0x005258ee                       ; 00525a1c
        ;   XREF to: 005258ee (CONDITIONAL_JUMP)  ; LAB_005258ee
    JMP 0x0052593c                      ; 00525a22
        ;   XREF to: 0052593c (UNCONDITIONAL_JUMP)  ; LAB_0052593c
    FLD double ptr [EBP + 0x18]         ; 00525a27
        ;   Label: LAB_00525a27
    FCOMP double ptr [EBX + 0x60]       ; 00525a2a
    FNSTSW AX                           ; 00525a2d
    SAHF                                ; 00525a2f
    JC 0x0052594e                       ; 00525a30
        ;   XREF to: 0052594e (CONDITIONAL_JUMP)  ; LAB_0052594e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00525a36
    MOV dword ptr [EBX + 0x60],EDX      ; 00525a39
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00525a3c
    MOV dword ptr [EBX + 0x64],EDX      ; 00525a3f
    JMP 0x00525957                      ; 00525a42
        ;   XREF to: 00525957 (UNCONDITIONAL_JUMP)  ; LAB_00525957
    FLD double ptr [EBX + 0x60]         ; 00525a47
        ;   Label: LAB_00525a47
    FDIV double ptr [ESP + 0x8]         ; 00525a4a
    SUB ESP,0x8                         ; 00525a4e
    FSTP double ptr [ESP]               ; 00525a51
    CALL FUN_005648c0                   ; 00525a54
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x18],EAX      ; 00525a59
    MOV dword ptr [ESP + 0x1c],EDX      ; 00525a5d
    FLD double ptr [ESP + 0x18]         ; 00525a61
    ADD ESP,0x8                         ; 00525a65
    FMUL double ptr [ESP + 0x8]         ; 00525a68
    FSUBR double ptr [EBX + 0x60]       ; 00525a6c
    FSTP double ptr [EBX + 0x60]        ; 00525a6f
    JMP 0x005259ac                      ; 00525a72
        ;   XREF to: 005259ac (UNCONDITIONAL_JUMP)  ; LAB_005259ac

