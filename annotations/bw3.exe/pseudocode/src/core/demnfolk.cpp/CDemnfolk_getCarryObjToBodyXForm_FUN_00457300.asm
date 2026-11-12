; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_demnfolk_cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_00457300(CDemnfolk *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 DAT_005ba732
;   undefined4 DAT_005ba736
;   undefined4 DAT_005ba73a
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457300
        ;   Label: core_demnfolk.cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_00457300
    PUSH EDI                            ; 00457301
    PUSH EBP                            ; 00457302
    MOV EBP,ESP                         ; 00457303
    SUB ESP,0x1fc                       ; 00457305
    SUB EBP,0x7e                        ; 0045730b
    MOV EBX,ESI                         ; 0045730e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00457310
    SHL EAX,0x3                         ; 00457316
    MOV ESI,EAX                         ; 00457319
    SHL EAX,0x4                         ; 0045731b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0045731e
    SUB EAX,ESI                         ; 00457324
    ADD EAX,EDX                         ; 00457326
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 00457328
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 0045732e
    MOV dword ptr [EBP + 0x7a],EAX      ; 00457334
    MOV EAX,dword ptr [EDX + 0xd068]    ; 00457337
    CMP EAX,0x1                         ; 0045733d
    JC 0x0045760f                       ; 00457340
        ;   XREF to: 0045760f (CONDITIONAL_JUMP)  ; LAB_0045760f
    JA 0x00457606                       ; 00457346
        ;   XREF to: 00457606 (CONDITIONAL_JUMP)  ; LAB_00457606
    PUSH 0x3                            ; 0045734c
        ;   Label: LAB_0045734c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0045734e
    PUSH 0x5ba732                       ; 00457354 | DAT_005ba732
    ADD EAX,0x24a8                      ; 00457359
    PUSH EAX                            ; 0045735e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0045735f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00457364
    TEST EAX,EAX                        ; 00457367
    JNZ 0x004575ec                      ; 00457369
        ;   XREF to: 004575ec (CONDITIONAL_JUMP)  ; LAB_004575ec
    MOV ECX,0xbf7c6a90                  ; 0045736f
    MOV EDI,0x3f7343c8                  ; 00457374
    MOV EDX,0xbf93b0b4                  ; 00457379
    MOV dword ptr [EBP + -0x1a],ECX     ; 0045737e
    MOV dword ptr [EBP + -0x1e],EDI     ; 00457381
    MOV dword ptr [EBP + -0x22],EDX     ; 00457384
    LEA EAX,[EBP + -0x22]               ; 00457387
        ;   Label: LAB_00457387
    PUSH EAX                            ; 0045738a
    PUSH 0x2cfd900                      ; 0045738b | DAT_02cfd900
    LEA EAX,[EBP + 0xfffffee2]          ; 00457390
    PUSH EAX                            ; 00457396
    CALL core_xform.cpp_FUN_00583940    ; 00457397
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0045739c
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045739f
    PUSH ESI                            ; 004573a5
    LEA ESI,[EBP + 0xffffff42]          ; 004573a6
    LEA EDI,[EBP + 0xffffff2a]          ; 004573ac
    CALL dword ptr [EAX + 0x1c]         ; 004573b2
    MOV ECX,0x6                         ; 004573b5
    ADD ESP,0x4                         ; 004573ba
    LEA EAX,[EBP + 0x3e]                ; 004573bd
    LEA ESI,[EBP + 0xffffff42]          ; 004573c0
    PUSH EAX                            ; 004573c6
    MOVSD.REP ES:EDI,ESI                ; 004573c7
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 004573c9
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff2a]    ; 004573ce
    FLD float ptr [EBP + 0xffffff2e]    ; 004573d4
    FLD float ptr [EBP + 0xffffff32]    ; 004573da
    LEA EDI,[EBP + 0xffffff72]          ; 004573e0
    LEA ESI,[EBP + 0x3e]                ; 004573e6
    LEA EAX,[EBP + -0xa]                ; 004573e9
    ADD ESP,0x4                         ; 004573ec
    FXCH ST2                            ; 004573ef
    FADD float ptr [EBP + 0xffffff36]   ; 004573f1
    FXCH                                ; 004573f7
    FADD float ptr [EBP + 0xffffff3a]   ; 004573f9
    FXCH ST2                            ; 004573ff
    FADD float ptr [EBP + 0xffffff3e]   ; 00457401
    PUSH EAX                            ; 00457407
    FXCH                                ; 00457408
    FSTP float ptr [EBP + 0x3e]         ; 0045740a
    FXCH                                ; 0045740d
    FSTP float ptr [EBP + 0x42]         ; 0045740f
    FSTP float ptr [EBP + 0x46]         ; 00457412
    MOVSD ES:EDI,ESI                    ; 00457415
    MOVSD ES:EDI,ESI                    ; 00457416
    MOVSD ES:EDI,ESI                    ; 00457417
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00457418
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [0x005ba736]          ; 0045741d | DAT_005ba736
    FLD float ptr [EBP + 0xffffff72]    ; 00457423
    FMUL ST1                            ; 00457429
    FLD float ptr [EBP + 0xffffff76]    ; 0045742b
    FMUL ST2                            ; 00457431
    FLD float ptr [EBP + 0xffffff7a]    ; 00457433
    FMULP ST3                           ; 00457439
    FLD float ptr [EBP + 0xffffff32]    ; 0045743b
    LEA EDI,[EBP + -0x6a]               ; 00457441
    LEA ESI,[EBP + -0xa]                ; 00457444
    LEA EDX,[EBP + 0x56]                ; 00457447
    LEA EAX,[EBP + -0x52]               ; 0045744a
    ADD ESP,0x4                         ; 0045744d
    FXCH ST2                            ; 00457450
    FSTP float ptr [EBP + -0xa]         ; 00457452
    FSTP float ptr [EBP + -0x6]         ; 00457455
    FXCH                                ; 00457458
    FSTP float ptr [EBP + -0x2]         ; 0045745a
    MOVSD ES:EDI,ESI                    ; 0045745d
    MOVSD ES:EDI,ESI                    ; 0045745e
    MOVSD ES:EDI,ESI                    ; 0045745f
    FADD double ptr [0x005ba73a]        ; 00457460 | DAT_005ba73a
    LEA EDI,[EBP + 0x56]                ; 00457466
    LEA ESI,[EBP + -0x6a]               ; 00457469
    FSTP float ptr [EBP + -0x62]        ; 0045746c
    MOVSD ES:EDI,ESI                    ; 0045746f
    MOVSD ES:EDI,ESI                    ; 00457470
    MOVSD ES:EDI,ESI                    ; 00457471
    CMP EAX,EDX                         ; 00457472
    JZ 0x00457488                       ; 00457474
        ;   XREF to: 00457488 (CONDITIONAL_JUMP)  ; LAB_00457488
    MOV EAX,dword ptr [EBP + 0x56]      ; 00457476
    MOV dword ptr [EBP + -0x52],EAX     ; 00457479
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0045747c
    MOV dword ptr [EBP + -0x4e],EAX     ; 0045747f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00457482
    MOV dword ptr [EBP + -0x4a],EAX     ; 00457485
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00457488
        ;   Label: LAB_00457488
    LEA EAX,[ESI*0x4 + 0x0]             ; 0045748b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00457492
    SUB EAX,ESI                         ; 00457498
    ADD EDX,0xfd8                       ; 0045749a
    SHL EAX,0x4                         ; 004574a0
    ADD EAX,EDX                         ; 004574a3
    MOV EDX,ESI                         ; 004574a5
    MOV ESI,dword ptr [EBP + 0x8e]      ; 004574a7
    CMP EDX,dword ptr [ESI + 0xd0ec]    ; 004574ad
    JNZ 0x004576e7                      ; 004574b3
        ;   XREF to: 004576e7 (CONDITIONAL_JUMP)  ; LAB_004576e7
    MOV EDX,0xbecccccd                  ; 004574b9
    LEA ESI,[EBP + 0x62]                ; 004574be
    LEA EDI,[EBP + 0x1a]                ; 004574c1
    PUSH EAX                            ; 004574c4
    XOR ECX,ECX                         ; 004574c5
    LEA EAX,[EBP + -0x5e]               ; 004574c7
    MOV dword ptr [EBP + -0x5e],EDX     ; 004574ca
    PUSH EAX                            ; 004574cd
    MOV dword ptr [EBP + -0x5a],ECX     ; 004574ce
    MOV dword ptr [EBP + -0x56],ECX     ; 004574d1
    CALL core_xform.cpp_FUN_00583260    ; 004574d4
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + 0x62]                ; 004574d9
    MOVSD ES:EDI,ESI                    ; 004574dc
    MOVSD ES:EDI,ESI                    ; 004574dd
    MOVSD ES:EDI,ESI                    ; 004574de
    LEA EAX,[EBP + 0x1a]                ; 004574df
    LEA ESI,[EBP + 0xffffff7e]          ; 004574e2
    ADD ESP,0x8                         ; 004574e8
    CMP ESI,EAX                         ; 004574eb
    JZ 0x00457504                       ; 004574ed
        ;   XREF to: 00457504 (CONDITIONAL_JUMP)  ; LAB_00457504
    MOV EAX,dword ptr [EBP + 0x1a]      ; 004574ef
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 004574f2
    MOV EAX,dword ptr [EBP + 0x1e]      ; 004574f8
    MOV dword ptr [EBP + -0x7e],EAX     ; 004574fb
    MOV EAX,dword ptr [EBP + 0x22]      ; 004574fe
    MOV dword ptr [EBP + -0x7a],EAX     ; 00457501
        ;   Label: LAB_00457501
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00457504
        ;   Label: LAB_00457504
    LEA EAX,[ESI*0x4 + 0x0]             ; 00457507
    SUB EAX,ESI                         ; 0045750e
    MOV ESI,EAX                         ; 00457510
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00457512
    SHL ESI,0x4                         ; 00457518
    ADD EAX,0xfd8                       ; 0045751b
    ADD EAX,ESI                         ; 00457520
    PUSH EAX                            ; 00457522
    LEA EAX,[EBP + 0xfffffee2]          ; 00457523
    PUSH EAX                            ; 00457529
    LEA ESI,[EBP + 0xfffffe82]          ; 0045752a
    LEA EDI,[EBP + 0xfffffeb2]          ; 00457530
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00457536
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0045753b
    ADD ESP,0x8                         ; 00457540
    LEA EAX,[EBP + 0xfffffeb2]          ; 00457543
    LEA ESI,[EBP + 0xfffffe82]          ; 00457549
    PUSH EAX                            ; 0045754f
    LEA EAX,[EBP + -0x52]               ; 00457550
    MOVSD.REP ES:EDI,ESI                ; 00457553
    PUSH EAX                            ; 00457555
    LEA ESI,[EBP + 0x6e]                ; 00457556
    LEA EDI,[EBP + 0x32]                ; 00457559
    CALL core_xform.cpp_FUN_00583260    ; 0045755c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    FLD float ptr [EBP + 0xffffff7e]    ; 00457561
    FLD float ptr [EBP + -0x7e]         ; 00457567
    FLD float ptr [EBP + -0x7a]         ; 0045756a
    FLD float ptr [EBP + 0xfffffebe]    ; 0045756d
    FLD float ptr [EBP + 0xfffffece]    ; 00457573
    LEA ESI,[EBP + 0x6e]                ; 00457579
    FLD float ptr [EBP + 0xfffffede]    ; 0045757c
    MOVSD ES:EDI,ESI                    ; 00457582
    MOVSD ES:EDI,ESI                    ; 00457583
    MOVSD ES:EDI,ESI                    ; 00457584
    MOV ECX,0xc                         ; 00457585
    LEA EDI,[EBP + 0x26]                ; 0045758a
    LEA ESI,[EBP + -0x76]               ; 0045758d
    FXCH ST5                            ; 00457590
    FSUB float ptr [EBP + 0x32]         ; 00457592
    FXCH ST4                            ; 00457595
    FSUB float ptr [EBP + 0x36]         ; 00457597
    FXCH ST3                            ; 0045759a
    FSUB float ptr [EBP + 0x3a]         ; 0045759c
    FXCH ST4                            ; 0045759f
    FSTP float ptr [EBP + -0x76]        ; 004575a1
    FXCH ST2                            ; 004575a4
    FSTP float ptr [EBP + -0x72]        ; 004575a6
    FXCH ST2                            ; 004575a9
    FSTP float ptr [EBP + -0x6e]        ; 004575ab
    MOVSD ES:EDI,ESI                    ; 004575ae
    MOVSD ES:EDI,ESI                    ; 004575af
    MOVSD ES:EDI,ESI                    ; 004575b0
    ADD ESP,0x8                         ; 004575b1
    LEA ESI,[EBP + 0xfffffeb2]          ; 004575b4
    MOV EDI,EBX                         ; 004575ba
    FXCH                                ; 004575bc
    FADD float ptr [EBP + 0x26]         ; 004575be
    FXCH                                ; 004575c1
    FADD float ptr [EBP + 0x2a]         ; 004575c3
    FXCH ST2                            ; 004575c6
    FADD float ptr [EBP + 0x2e]         ; 004575c8
    FXCH                                ; 004575cb
    FSTP float ptr [EBP + 0xfffffebe]   ; 004575cd
    FXCH                                ; 004575d3
    FSTP float ptr [EBP + 0xfffffece]   ; 004575d5
    FSTP float ptr [EBP + 0xfffffede]   ; 004575db
    MOVSD.REP ES:EDI,ESI                ; 004575e1
    MOV EAX,EBX                         ; 004575e3
    LEA ESP,[EBP + 0x7e]                ; 004575e5
    POP EBP                             ; 004575e8
    POP EDI                             ; 004575e9
    POP EBX                             ; 004575ea
    RET                                 ; 004575eb
    MOV EAX,0x3f676c8b                  ; 004575ec
        ;   Label: LAB_004575ec
    XOR EDI,EDI                         ; 004575f1
    MOV ECX,0x3e1eb852                  ; 004575f3
    MOV dword ptr [EBP + -0x1a],EDI     ; 004575f8
    MOV dword ptr [EBP + -0x1e],EAX     ; 004575fb
    MOV dword ptr [EBP + -0x22],ECX     ; 004575fe
    JMP 0x00457387                      ; 00457601
        ;   XREF to: 00457387 (UNCONDITIONAL_JUMP)  ; LAB_00457387
    CMP EAX,0x3                         ; 00457606
        ;   Label: LAB_00457606
    JZ 0x0045734c                       ; 00457609
        ;   XREF to: 0045734c (CONDITIONAL_JUMP)  ; LAB_0045734c
    PUSH ESI                            ; 0045760f
        ;   Label: LAB_0045760f
    MOV EAX,dword ptr [ESI + 0x154]     ; 00457610
    LEA ESI,[EBP + 0xffffff5a]          ; 00457616
    LEA EDI,[EBP + 0xffffff12]          ; 0045761c
    CALL dword ptr [EAX + 0x1c]         ; 00457622
    MOV ECX,0x6                         ; 00457625
    LEA ESI,[EBP + 0xffffff5a]          ; 0045762a
    MOVSD.REP ES:EDI,ESI                ; 00457630
    LEA EAX,[EBP + 0xffffff12]          ; 00457632
    FLD float ptr [EBP + 0xffffff12]    ; 00457638
    FLD float ptr [EBP + 0xffffff16]    ; 0045763e
    FLD float ptr [EBP + 0xffffff1a]    ; 00457644
    LEA EDI,[EBP + 0xe]                 ; 0045764a
    LEA ESI,[EBP + -0x2e]               ; 0045764d
    FXCH ST2                            ; 00457650
    FADD float ptr [EAX + 0xc]          ; 00457652
    FXCH                                ; 00457655
    FADD float ptr [EAX + 0x10]         ; 00457657
    FXCH ST2                            ; 0045765a
    FADD float ptr [EAX + 0x14]         ; 0045765c
    FXCH                                ; 0045765f
    FSTP float ptr [EBP + -0x2e]        ; 00457661
    FXCH                                ; 00457664
    FSTP float ptr [EBP + -0x2a]        ; 00457666
    FSTP float ptr [EBP + -0x26]        ; 00457669
    MOVSD ES:EDI,ESI                    ; 0045766c
    MOVSD ES:EDI,ESI                    ; 0045766d
    MOVSD ES:EDI,ESI                    ; 0045766e
    FLD float ptr [0x005ba736]          ; 0045766f | DAT_005ba736
    FLD float ptr [EBP + 0xe]           ; 00457675
    FMUL ST1                            ; 00457678
    FLD float ptr [EBP + 0x12]          ; 0045767a
    FMUL ST2                            ; 0045767d
    FLD float ptr [EBP + 0x16]          ; 0045767f
    FMULP ST3                           ; 00457682
    LEA EDI,[EBP + 0x4a]                ; 00457684
    LEA ESI,[EBP + 0x2]                 ; 00457687
    FXCH                                ; 0045768a
    FSTP float ptr [EBP + 0x2]          ; 0045768c
    FSTP float ptr [EBP + 0x6]          ; 0045768f
    FSTP float ptr [EBP + 0xa]          ; 00457692
    MOVSD ES:EDI,ESI                    ; 00457695
    MOVSD ES:EDI,ESI                    ; 00457696
    MOVSD ES:EDI,ESI                    ; 00457697
    LEA EAX,[EBP + -0x52]               ; 00457698
    LEA ESI,[EBP + 0x4a]                ; 0045769b
    ADD ESP,0x4                         ; 0045769e
    CMP EAX,ESI                         ; 004576a1
    JZ 0x004576b7                       ; 004576a3
        ;   XREF to: 004576b7 (CONDITIONAL_JUMP)  ; LAB_004576b7
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004576a5
    MOV dword ptr [EBP + -0x52],EAX     ; 004576a8
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004576ab
    MOV dword ptr [EBP + -0x4e],EAX     ; 004576ae
    MOV EAX,dword ptr [EBP + 0x52]      ; 004576b1
    MOV dword ptr [EBP + -0x4a],EAX     ; 004576b4
    MOV EAX,dword ptr [EBP + 0x92]      ; 004576b7
        ;   Label: LAB_004576b7
    SHL EAX,0x3                         ; 004576bd
    MOV ESI,EAX                         ; 004576c0
    SHL EAX,0x4                         ; 004576c2
    MOV EDX,dword ptr [EBP + 0x8e]      ; 004576c5
    SUB EAX,ESI                         ; 004576cb
    ADD EAX,EDX                         ; 004576cd
    MOV ECX,0xc                         ; 004576cf
    LEA EDI,[EBP + 0xfffffee2]          ; 004576d4
    LEA ESI,[EAX + 0x25b4]              ; 004576da
    MOVSD.REP ES:EDI,ESI                ; 004576e0
    JMP 0x00457488                      ; 004576e2
        ;   XREF to: 00457488 (UNCONDITIONAL_JUMP)  ; LAB_00457488
    MOV ESI,0x3ecccccd                  ; 004576e7
        ;   Label: LAB_004576e7
    PUSH EAX                            ; 004576ec
    XOR EDI,EDI                         ; 004576ed
    LEA EAX,[EBP + -0x3a]               ; 004576ef
    MOV dword ptr [EBP + -0x3a],ESI     ; 004576f2
    MOV dword ptr [EBP + -0x36],EDI     ; 004576f5
    MOV dword ptr [EBP + -0x32],EDI     ; 004576f8
    PUSH EAX                            ; 004576fb
    LEA ESI,[EBP + -0x46]               ; 004576fc
    LEA EDI,[EBP + -0x16]               ; 004576ff
    CALL core_xform.cpp_FUN_00583260    ; 00457702
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + -0x46]               ; 00457707
    MOVSD ES:EDI,ESI                    ; 0045770a
    MOVSD ES:EDI,ESI                    ; 0045770b
    MOVSD ES:EDI,ESI                    ; 0045770c
    LEA EAX,[EBP + -0x16]               ; 0045770d
    LEA ESI,[EBP + 0xffffff7e]          ; 00457710
    ADD ESP,0x8                         ; 00457716
    CMP ESI,EAX                         ; 00457719
    JZ 0x00457504                       ; 0045771b
        ;   XREF to: 00457504 (CONDITIONAL_JUMP)  ; LAB_00457504
    MOV EAX,dword ptr [EBP + -0x16]     ; 00457721
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 00457724
    MOV EAX,dword ptr [EBP + -0x12]     ; 0045772a
    MOV dword ptr [EBP + -0x7e],EAX     ; 0045772d
    MOV EAX,dword ptr [EBP + -0xe]      ; 00457730
    JMP 0x00457501                      ; 00457733
        ;   XREF to: 00457501 (UNCONDITIONAL_JUMP)  ; LAB_00457501

