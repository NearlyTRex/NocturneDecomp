; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_ungetc_FUN_00564740(uint param_1,int *param_2)
;
;
; XREF[4]:
;   FUN_005632b0 at 005632be
;   core_actor.cpp_archiveString_FUN_0040c6d0 at 0040c73a
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 at 004526af
;   core_mission.cpp_CDemonMission_loadActor_FUN_004d8aa0 at 004d8b4a
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   FUN_005671e4
;   FUN_00568ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564740
        ;   Label: crt_stdio.c_ungetc_FUN_00564740
    PUSH ESI                            ; 00564741
    PUSH EDI                            ; 00564742
    PUSH EBP                            ; 00564743
    MOV EBX,dword ptr [ESP + 0x18]      ; 00564744
    MOV EDX,dword ptr [ESP + 0x14]      ; 00564748
    CMP EDX,-0x1                        ; 0056474c
    JNZ 0x00564758                      ; 0056474f
        ;   XREF to: 00564758 (CONDITIONAL_JUMP)  ; LAB_00564758
    MOV EAX,EDX                         ; 00564751
    POP EBP                             ; 00564753
    POP EDI                             ; 00564754
    POP ESI                             ; 00564755
    POP EBX                             ; 00564756
    RET                                 ; 00564757
    MOV ECX,dword ptr [EBX + 0x10]      ; 00564758
        ;   Label: LAB_00564758
    PUSH ECX                            ; 0056475b
    CALL dword ptr [0x005c1ac0]         ; 0056475c | PTR_FUN_005c1ac0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00564762
    MOV ESI,dword ptr [EAX + 0xc]       ; 00564765
    ADD ESP,0x4                         ; 00564768
    CMP ESI,0x1                         ; 0056476b
    JZ 0x00564792                       ; 0056476e
        ;   XREF to: 00564792 (CONDITIONAL_JUMP)  ; LAB_00564792
    TEST ESI,ESI                        ; 00564770
    JZ 0x0056478b                       ; 00564772
        ;   XREF to: 0056478b (CONDITIONAL_JUMP)  ; LAB_0056478b
    MOV EBP,dword ptr [EBX + 0x10]      ; 00564774
    PUSH EBP                            ; 00564777
    CALL dword ptr [0x005c1ac4]         ; 00564778 | PTR_FUN_005c1ac4
    MOV EAX,0xffffffff                  ; 0056477e
    ADD ESP,0x4                         ; 00564783
    POP EBP                             ; 00564786
    POP EDI                             ; 00564787
    POP ESI                             ; 00564788
    POP EBX                             ; 00564789
    RET                                 ; 0056478a
    MOV dword ptr [EAX + 0xc],0x1       ; 0056478b
        ;   Label: LAB_0056478b
    TEST byte ptr [EBX + 0xd],0x10      ; 00564792
        ;   Label: LAB_00564792
    JZ 0x005647af                       ; 00564796
        ;   XREF to: 005647af (CONDITIONAL_JUMP)  ; LAB_005647af
    MOV EBP,dword ptr [EBX + 0x10]      ; 00564798
    PUSH EBP                            ; 0056479b
    CALL dword ptr [0x005c1ac4]         ; 0056479c | PTR_FUN_005c1ac4
    MOV EAX,0xffffffff                  ; 005647a2
    ADD ESP,0x4                         ; 005647a7
    POP EBP                             ; 005647aa
    POP EDI                             ; 005647ab
    POP ESI                             ; 005647ac
    POP EBX                             ; 005647ad
    RET                                 ; 005647ae
    TEST byte ptr [EBX + 0xc],0x1       ; 005647af
        ;   Label: LAB_005647af
    JNZ 0x005647cc                      ; 005647b3
        ;   XREF to: 005647cc (CONDITIONAL_JUMP)  ; LAB_005647cc
    MOV EDI,dword ptr [EBX + 0x10]      ; 005647b5
        ;   Label: LAB_005647b5
    PUSH EDI                            ; 005647b8
    CALL dword ptr [0x005c1ac4]         ; 005647b9 | PTR_FUN_005c1ac4
    MOV EAX,0xffffffff                  ; 005647bf
    ADD ESP,0x4                         ; 005647c4
    POP EBP                             ; 005647c7
    POP EDI                             ; 005647c8
    POP ESI                             ; 005647c9
    POP EBX                             ; 005647ca
    RET                                 ; 005647cb
    MOV EAX,dword ptr [EBX + 0x8]       ; 005647cc
        ;   Label: LAB_005647cc
    CMP dword ptr [EAX + 0x8],0x0       ; 005647cf
    JNZ 0x005647de                      ; 005647d3
        ;   XREF to: 005647de (CONDITIONAL_JUMP)  ; LAB_005647de
    PUSH EBX                            ; 005647d5
    CALL FUN_00568ed0                   ; 005647d6
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00568ed0()
    ADD ESP,0x4                         ; 005647db
    MOV ECX,dword ptr [EBX + 0x4]       ; 005647de
        ;   Label: LAB_005647de
    TEST ECX,ECX                        ; 005647e1
    JNZ 0x0056480b                      ; 005647e3
        ;   XREF to: 0056480b (CONDITIONAL_JUMP)  ; LAB_0056480b
    MOV dword ptr [EBX + 0x4],0x1       ; 005647e5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005647ec
    MOV ECX,dword ptr [EBX + 0x14]      ; 005647ef
    MOV EAX,dword ptr [EAX + 0x8]       ; 005647f2
    ADD EAX,ECX                         ; 005647f5
    DEC EAX                             ; 005647f7
    MOV CL,byte ptr [EBX + 0xc]         ; 005647f8
    MOV dword ptr [EBX],EAX             ; 005647fb
    OR CL,0x4                           ; 005647fd
    MOV EAX,dword ptr [EBX]             ; 00564800
    MOV DL,byte ptr [ESP + 0x14]        ; 00564802
    MOV byte ptr [EBX + 0xc],CL         ; 00564806
    JMP 0x00564839                      ; 00564809
        ;   XREF to: 00564839 (UNCONDITIONAL_JUMP)  ; LAB_00564839
    MOV EDX,dword ptr [EBX + 0x8]       ; 0056480b
        ;   Label: LAB_0056480b
    MOV EAX,dword ptr [EBX]             ; 0056480e
    CMP EAX,dword ptr [EDX + 0x8]       ; 00564810
    JZ 0x005647b5                       ; 00564813
        ;   XREF to: 005647b5 (CONDITIONAL_JUMP)  ; LAB_005647b5
    MOV EAX,dword ptr [EBX]             ; 00564815
    LEA EBP,[ECX + 0x1]                 ; 00564817
    DEC EAX                             ; 0056481a
    MOV dword ptr [EBX + 0x4],EBP       ; 0056481b
    MOV dword ptr [EBX],EAX             ; 0056481e
    MOV AL,byte ptr [EAX]               ; 00564820
    MOV EDX,dword ptr [ESP + 0x14]      ; 00564822
    AND EAX,0xff                        ; 00564826
    CMP EAX,EDX                         ; 0056482b
    JZ 0x00564833                       ; 0056482d
        ;   XREF to: 00564833 (CONDITIONAL_JUMP)  ; LAB_00564833
    OR byte ptr [EBX + 0xc],0x4         ; 0056482f
    MOV EAX,dword ptr [EBX]             ; 00564833
        ;   Label: LAB_00564833
    MOV DL,byte ptr [ESP + 0x14]        ; 00564835
    MOV byte ptr [EAX],DL               ; 00564839
        ;   Label: LAB_00564839
    MOV CH,byte ptr [EBX + 0xc]         ; 0056483b
    MOV ESI,dword ptr [EBX + 0x10]      ; 0056483e
    AND CH,0xef                         ; 00564841
    PUSH ESI                            ; 00564844
    MOV byte ptr [EBX + 0xc],CH         ; 00564845
    CALL dword ptr [0x005c1ac4]         ; 00564848 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056484e
    XOR EAX,EAX                         ; 00564851
    MOV AL,byte ptr [ESP + 0x14]        ; 00564853
    POP EBP                             ; 00564857
    POP EDI                             ; 00564858
    POP ESI                             ; 00564859
    POP EBX                             ; 0056485a
    RET                                 ; 0056485b

