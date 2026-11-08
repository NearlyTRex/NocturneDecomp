; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502890(int param_1,int param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005027b0 at 0050280f
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005c9f4e
;   TerminatedCString s_Out_of_memory_File_s_005c9f5f
;   undefined4 DAT_005ca39f
;   undefined4 DAT_006011b8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_004fd150
;   FUN_004fd780
;   FUN_004fdc50
;   FUN_00502a10
;   FUN_00502bc0
;   FUN_005a3120
;   FUN_005a3650
;   FUN_005a3770
;   FUN_005a3a90
;   FUN_005a457c
;   FUN_005a5d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502890
        ;   Label: FUN_00502890
    PUSH ESI                            ; 00502891
    PUSH EDI                            ; 00502892
    PUSH EBP                            ; 00502893
    SUB ESP,0x58                        ; 00502894
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00502897
    PUSH EDI                            ; 0050289b
    CALL FUN_00502a10                   ; 0050289c
        ;   XREF to: 00502a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00502a10()
    MOV EDX,0x1000                      ; 005028a1
    ADD ESP,0x4                         ; 005028a6
    LEA ESI,[EDI + 0x5320]              ; 005028a9
    MOV EAX,dword ptr [ESP + 0x70]      ; 005028af
    MOV EBX,ESI                         ; 005028b3
    MOV dword ptr [ESP + 0x50],EDX      ; 005028b5
    MOV EBP,ESI                         ; 005028b9
    MOV dword ptr [ESP + 0x54],EAX      ; 005028bb
    MOV EAX,dword ptr [ESP + 0x74]      ; 005028bf
    MOV ECX,dword ptr [ESI]             ; 005028c3
    MOV dword ptr [ESP + 0x4c],EAX      ; 005028c5
    TEST ECX,ECX                        ; 005028c9
    JNZ 0x005029ce                      ; 005028cb
        ;   XREF to: 005029ce (CONDITIONAL_JUMP)  ; LAB_005029ce
    MOV EDX,dword ptr [EBP + 0x4]       ; 005028d1
        ;   Label: LAB_005028d1
    TEST EDX,EDX                        ; 005028d4
    JZ 0x005028e8                       ; 005028d6
        ;   XREF to: 005028e8 (CONDITIONAL_JUMP)  ; LAB_005028e8
    PUSH EDX                            ; 005028d8
    CALL FUN_005a3770                   ; 005028d9
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005028de
    MOV dword ptr [EBP + 0x4],0x0       ; 005028e1
    MOV EAX,dword ptr [ESP + 0x54]      ; 005028e8
        ;   Label: LAB_005028e8
    PUSH EAX                            ; 005028ec
    MOV dword ptr [EBX],EAX             ; 005028ed
    CALL FUN_005a5d00                   ; 005028ef
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5d00()
    ADD ESP,0x4                         ; 005028f4
    MOV dword ptr [EBX + 0x20],EAX      ; 005028f7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005028fa
    MOV dword ptr [EBX + 0x24],EAX      ; 005028fe
    MOV EAX,dword ptr [ESP + 0x50]      ; 00502901
    PUSH EAX                            ; 00502905
    MOV dword ptr [EBX + 0x8],EAX       ; 00502906
    CALL FUN_005a3650                   ; 00502909
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 0050290e
    MOV dword ptr [EBX + 0x4],EAX       ; 00502911
    TEST EAX,EAX                        ; 00502914
    JZ 0x005029e2                       ; 00502916
        ;   XREF to: 005029e2 (CONDITIONAL_JUMP)  ; LAB_005029e2
    PUSH 0x0                            ; 0050291c
        ;   Label: LAB_0050291c
    MOV ESI,dword ptr [EBX + 0x20]      ; 0050291e
    PUSH ESI                            ; 00502921
    MOV EBP,dword ptr [EBX]             ; 00502922
    PUSH EBP                            ; 00502924
    CALL FUN_005a457c                   ; 00502925
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined FUN_005a457c()
    MOV dword ptr [EBX + 0x10],0x0      ; 0050292a
    MOV dword ptr [EBX + 0x14],0x0      ; 00502931
    MOV dword ptr [EBX + 0xc],0x0       ; 00502938
    MOV dword ptr [EBX + 0x18],0x0      ; 0050293f
    ADD ESP,0xc                         ; 00502946
    MOV dword ptr [EBX + 0x1c],0x0      ; 00502949
    PUSH 0xc                            ; 00502950
    MOV EAX,dword ptr [EBX + 0x24]      ; 00502952
    PUSH 0xfff                          ; 00502955
    MOV dword ptr [EBX + 0x28],EAX      ; 0050295a
    LEA EBX,[EDI + 0x5320]              ; 0050295d
    PUSH EBX                            ; 00502963
    CALL FUN_004fd780                   ; 00502964
        ;   XREF to: 004fd780 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd780()
    LEA EAX,[ESP + 0xc]                 ; 00502969
    ADD ESP,0xc                         ; 0050296d
    MOV dword ptr [ESP + 0x30],EAX      ; 00502970
    LEA EAX,[ESP + 0x30]                ; 00502974
    PUSH EAX                            ; 00502978
    PUSH EBX                            ; 00502979
    CALL FUN_004fdc50                   ; 0050297a
        ;   XREF to: 004fdc50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fdc50()
    ADD ESP,0x8                         ; 0050297f
    LEA EAX,[ESP + 0x30]                ; 00502982
    PUSH EAX                            ; 00502986
    CALL FUN_004fd150                   ; 00502987
        ;   XREF to: 004fd150 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd150()
    ADD ESP,0x4                         ; 0050298c
    MOV EBX,dword ptr [ESP]             ; 0050298f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00502992
    SHL EBX,0x5                         ; 00502996
    FLD double ptr [EBX + EAX*0x8 + 0x6011b8] ; 00502999 | DAT_006011b8
    FMUL double ptr [0x005ca39f]        ; 005029a0 | DAT_005ca39f
    PUSH 0x0                            ; 005029a6
    CALL FUN_005a3120                   ; 005029a8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EDI + 0x100]       ; 005029ad
    MOV EAX,dword ptr [ESP + 0x44]      ; 005029b3
    PUSH EDI                            ; 005029b7
    MOV dword ptr [EDI + 0x104],EAX     ; 005029b8
    CALL FUN_00502bc0                   ; 005029be
        ;   XREF to: 00502bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502bc0()
    ADD ESP,0x8                         ; 005029c3
    ADD ESP,0x58                        ; 005029c6
    POP EBP                             ; 005029c9
    POP EDI                             ; 005029ca
    POP ESI                             ; 005029cb
    POP EBX                             ; 005029cc
    RET                                 ; 005029cd
    PUSH ECX                            ; 005029ce
        ;   Label: LAB_005029ce
    CALL FUN_005a3a90                   ; 005029cf
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 005029d4
    MOV dword ptr [ESI],0x0             ; 005029d7
    JMP 0x005028d1                      ; 005029dd
        ;   XREF to: 005028d1 (UNCONDITIONAL_JUMP)  ; LAB_005028d1
    PUSH 0x1d94b98                      ; 005029e2
        ;   Label: LAB_005029e2
    MOV EDX,0x5c9f4e                    ; 005029e7 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x23d                       ; 005029ec
    PUSH 0x5c9f5f                       ; 005029f1 | = "Out of memory.  File: %s"
    MOV dword ptr [0x01d71de0],EDX      ; 005029f6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005029fc | DAT_01d71de4
    CALL FUN_004e4330                   ; 00502a02
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00502a07
    JMP 0x0050291c                      ; 00502a0a
        ;   XREF to: 0050291c (UNCONDITIONAL_JUMP)  ; LAB_0050291c

