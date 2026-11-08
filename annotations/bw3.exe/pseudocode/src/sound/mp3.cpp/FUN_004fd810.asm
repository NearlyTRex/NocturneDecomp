; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_004fd810(int param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004fd8f0 at 004fd8f7
;   FUN_004fd9f0 at 004fdbeb
;   FUN_004ff3c0 at 004ff49c
;   FUN_004ff790 at 004ffaff
;   FUN_004ffd20 at 005003dc
;   FUN_00502d60 at 00503390
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005c9fc5
;   TerminatedCString s_Buffer_overflow_File_s_005c9fd6
;   undefined4 DAT_00601580
;   undefined4 DAT_006015a0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd810
        ;   Label: FUN_004fd810
    PUSH ESI                            ; 004fd811
    PUSH EDI                            ; 004fd812
    PUSH EBP                            ; 004fd813
    SUB ESP,0x4                         ; 004fd814
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fd817
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fd81b
    MOV EDX,dword ptr [EBX + 0x1314]    ; 004fd81f
    MOV ESI,EAX                         ; 004fd825
    ADD EDX,EAX                         ; 004fd827
    XOR EDI,EDI                         ; 004fd829
    MOV dword ptr [EBX + 0x1314],EDX    ; 004fd82b
    TEST EAX,EAX                        ; 004fd831
    JLE 0x004fd891                      ; 004fd833
        ;   XREF to: 004fd891 (CONDITIONAL_JUMP)  ; LAB_004fd891
    CMP dword ptr [EBX + 0x531c],0x0    ; 004fd835
        ;   Label: LAB_004fd835
    JZ 0x004fd89b                       ; 004fd83c
        ;   XREF to: 004fd89b (CONDITIONAL_JUMP)  ; LAB_004fd89b
    MOV EDX,dword ptr [EBX + 0x531c]    ; 004fd83e
        ;   Label: LAB_004fd83e
    CMP ESI,EDX                         ; 004fd844
    JNC 0x004fd8e8                      ; 004fd846
        ;   XREF to: 004fd8e8 (CONDITIONAL_JUMP)  ; LAB_004fd8e8
    MOV EAX,ESI                         ; 004fd84c
    MOV EDX,dword ptr [EBX + 0x1318]    ; 004fd84e
        ;   Label: LAB_004fd84e
    MOV ECX,dword ptr [EBX + 0x531c]    ; 004fd854
    SUB ESI,EAX                         ; 004fd85a
    AND EDX,0xfff                       ; 004fd85c
    MOV EBP,dword ptr [ECX*0x4 + 0x601580] ; 004fd862 | DAT_00601580 | DAT_006015a0
    SUB ECX,EAX                         ; 004fd869
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x131c] ; 004fd86b
    MOV dword ptr [ESP],ECX             ; 004fd872
    AND EDX,EBP                         ; 004fd875
    MOV CL,byte ptr [ESP]               ; 004fd877
    MOV EAX,ESI                         ; 004fd87a
    SHR EDX,CL                          ; 004fd87c
    MOV CL,AL                           ; 004fd87e
    SHL EDX,CL                          ; 004fd880
    OR EDI,EDX                          ; 004fd882
    MOV EDX,dword ptr [ESP]             ; 004fd884
    MOV dword ptr [EBX + 0x531c],EDX    ; 004fd887
    TEST ESI,ESI                        ; 004fd88d
    JG 0x004fd835                       ; 004fd88f
        ;   XREF to: 004fd835 (CONDITIONAL_JUMP)  ; LAB_004fd835
    MOV EAX,EDI                         ; 004fd891
        ;   Label: LAB_004fd891
    ADD ESP,0x4                         ; 004fd893
    POP EBP                             ; 004fd896
    POP EDI                             ; 004fd897
    POP ESI                             ; 004fd898
    POP EBX                             ; 004fd899
    RET                                 ; 004fd89a
    MOV EDX,dword ptr [EBX + 0x1318]    ; 004fd89b
        ;   Label: LAB_004fd89b
    MOV dword ptr [EBX + 0x531c],0x8    ; 004fd8a1
    INC EDX                             ; 004fd8ab
    MOV ECX,dword ptr [EBX + 0x1310]    ; 004fd8ac
    MOV dword ptr [EBX + 0x1318],EDX    ; 004fd8b2
    CMP EDX,ECX                         ; 004fd8b8
    JBE 0x004fd83e                      ; 004fd8ba
        ;   XREF to: 004fd83e (CONDITIONAL_JUMP)  ; LAB_004fd83e
    PUSH 0x1d94b98                      ; 004fd8bc
    MOV EBP,0x5c9fc5                    ; 004fd8c1 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x30a                       ; 004fd8c6
    PUSH 0x5c9fd6                       ; 004fd8cb | = "Buffer overflow!!  File: %s"
    MOV dword ptr [0x01d71de0],EBP      ; 004fd8d0 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fd8d6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004fd8db
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004fd8e0
    JMP 0x004fd83e                      ; 004fd8e3
        ;   XREF to: 004fd83e (UNCONDITIONAL_JUMP)  ; LAB_004fd83e
    MOV EAX,EDX                         ; 004fd8e8
        ;   Label: LAB_004fd8e8
    JMP 0x004fd84e                      ; 004fd8ea
        ;   XREF to: 004fd84e (UNCONDITIONAL_JUMP)  ; LAB_004fd84e

