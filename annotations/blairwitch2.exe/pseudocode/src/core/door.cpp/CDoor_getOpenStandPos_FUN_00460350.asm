; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00460350(CDoor *this_ptr,float *param_2,undefined4 param_3)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; Local Variables:
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 at 0042889c
;
; Referenced Globals:
;   void* switchdataD_0046033c = 00460399
;   TerminatedCString s_core_door_cpp_005d0b9f
;   TerminatedCString s_CDoor_getOpenStandPos_in_005d0bb0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408de0
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460350
        ;   Label: core_door.cpp_CDoor_getOpenStandPos_FUN_00460350
    PUSH EDI                            ; 00460351
    PUSH EBP                            ; 00460352
    MOV EBP,ESP                         ; 00460353
    SUB ESP,0xac                        ; 00460355
    AND ESP,0xfffffff8                  ; 0046035b
    MOV dword ptr [ESP + 0xa8],ESI      ; 0046035e
    MOV ESI,dword ptr [EBP + 0x14]      ; 00460365
    LEA EDI,[ESP + 0x60]                ; 00460368
    MOVSD ES:EDI,ESI                    ; 0046036c
    MOVSD ES:EDI,ESI                    ; 0046036d
    MOVSD ES:EDI,ESI                    ; 0046036e
    FLD float ptr [ESP + 0x68]          ; 0046036f
    FLDZ                                ; 00460373
    FCOMPP                              ; 00460375
    FNSTSW AX                           ; 00460377
    SAHF                                ; 00460379
    JA 0x00460465                       ; 0046037a
        ;   XREF to: 00460465 (CONDITIONAL_JUMP)  ; LAB_00460465
    MOV EAX,dword ptr [EBP + 0x10]      ; 00460380
        ;   Label: LAB_00460380
    MOV EAX,dword ptr [EAX + 0x434]     ; 00460383
    CMP EAX,0x3                         ; 00460389
    JA 0x004605ac                       ; 0046038c
        ;   XREF to: 004605ac (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x46033c]  ; 00460392 | caseD_2 | caseD_3 | switchdataD_0046033c
        ;   Label: switchD
    MOV EBX,dword ptr [EBP + 0x18]      ; 00460399
        ;   Label: caseD_0
    PUSH EBX                            ; 0046039c
    MOV ESI,dword ptr [EBP + 0x10]      ; 0046039d
    PUSH ESI                            ; 004603a0
    LEA ESI,[ESP + 0x50]                ; 004603a1
    LEA EDI,[ESP + 0x74]                ; 004603a5
    CALL core_actor.cpp_FUN_00408de0    ; 004603a9
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x50]                ; 004603ae
    ADD ESP,0x8                         ; 004603b2
    FLDZ                                ; 004603b5
    MOV EBX,dword ptr [EBP + 0x10]      ; 004603b7
    MOVSD ES:EDI,ESI                    ; 004603ba
    MOVSD ES:EDI,ESI                    ; 004603bb
    MOVSD ES:EDI,ESI                    ; 004603bc
    ADD EBX,0xb18                       ; 004603bd
    FCOMP float ptr [ESP + 0x74]        ; 004603c3
    FNSTSW AX                           ; 004603c7
    SAHF                                ; 004603c9
    JNC 0x004604f1                      ; 004603ca
        ;   XREF to: 004604f1 (CONDITIONAL_JUMP)  ; LAB_004604f1
    LEA EAX,[ESP + 0x60]                ; 004603d0
    PUSH EAX                            ; 004603d4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004603d5
    PUSH EAX                            ; 004603d8
    LEA ESI,[ESP + 0x8]                 ; 004603d9
    LEA EDI,[ESP + 0x98]                ; 004603dd
    CALL core_actor.cpp_FUN_00408cf0    ; 004603e4
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x8]                 ; 004603e9
    ADD ESP,0x8                         ; 004603ed
    MOVSD ES:EDI,ESI                    ; 004603f0
    MOVSD ES:EDI,ESI                    ; 004603f1
    MOVSD ES:EDI,ESI                    ; 004603f2
    LEA EAX,[ESP + 0x30]                ; 004603f3
    FLD float ptr [EBX + 0x4]           ; 004603f7
    FLD float ptr [EBX + 0x8]           ; 004603fa
    FLD float ptr [EBX]                 ; 004603fd
    LEA EDI,[ESP + 0xc]                 ; 004603ff
    LEA ESI,[ESP + 0x78]                ; 00460403
    LEA EBX,[ESP + 0xc]                 ; 00460407
    FADD float ptr [ESP + 0x90]         ; 0046040b
    FXCH ST2                            ; 00460412
    FADD float ptr [ESP + 0x94]         ; 00460414
    FXCH                                ; 0046041b
    FADD float ptr [ESP + 0x98]         ; 0046041d
    FXCH ST2                            ; 00460424
    FSTP float ptr [ESP + 0x78]         ; 00460426
    FSTP float ptr [ESP + 0x7c]         ; 0046042a
    FSTP float ptr [ESP + 0x80]         ; 0046042e
    MOVSD ES:EDI,ESI                    ; 00460435
    MOVSD ES:EDI,ESI                    ; 00460436
    MOVSD ES:EDI,ESI                    ; 00460437
    CMP EAX,EBX                         ; 00460438
    JNZ 0x004604d4                      ; 0046043a
        ;   XREF to: 004604d4 (CONDITIONAL_JUMP)  ; LAB_004604d4
    MOV EAX,dword ptr [EBP + 0x10]      ; 00460440
        ;   Label: LAB_00460440
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00460443
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046044a
    LEA ESI,[ESP + 0x30]                ; 0046044d
    MOV dword ptr [ESP + 0x34],EAX      ; 00460451
    MOVSD ES:EDI,ESI                    ; 00460455
    MOVSD ES:EDI,ESI                    ; 00460456
    MOVSD ES:EDI,ESI                    ; 00460457
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00460458
    MOV ESP,EBP                         ; 0046045f
    POP EBP                             ; 00460461
    POP EDI                             ; 00460462
    POP EBX                             ; 00460463
    RET                                 ; 00460464
    FLD float ptr [ESP + 0x60]          ; 00460465
        ;   Label: LAB_00460465
    FLD float ptr [ESP + 0x64]          ; 00460469
    FLD float ptr [ESP + 0x68]          ; 0046046d
    LEA EDI,[ESP + 0x84]                ; 00460471
    LEA ESI,[ESP + 0x18]                ; 00460478
    LEA EAX,[ESP + 0x84]                ; 0046047c
    LEA EBX,[ESP + 0x60]                ; 00460483
    FXCH ST2                            ; 00460487
    FCHS                                ; 00460489
    FXCH                                ; 0046048b
    FCHS                                ; 0046048d
    FXCH ST2                            ; 0046048f
    FCHS                                ; 00460491
    FXCH ST2                            ; 00460493
    FSTP float ptr [ESP + 0x1c]         ; 00460495
    FXCH                                ; 00460499
    FSTP float ptr [ESP + 0x20]         ; 0046049b
    FSTP float ptr [ESP + 0x18]         ; 0046049f
    MOVSD ES:EDI,ESI                    ; 004604a3
    MOVSD ES:EDI,ESI                    ; 004604a4
    MOVSD ES:EDI,ESI                    ; 004604a5
    CMP EBX,EAX                         ; 004604a6
    JZ 0x00460380                       ; 004604a8
        ;   XREF to: 00460380 (CONDITIONAL_JUMP)  ; LAB_00460380
    MOV EAX,dword ptr [ESP + 0x84]      ; 004604ae
    MOV dword ptr [ESP + 0x60],EAX      ; 004604b5
    MOV EAX,dword ptr [ESP + 0x88]      ; 004604b9
    MOV dword ptr [ESP + 0x64],EAX      ; 004604c0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004604c4
    MOV dword ptr [ESP + 0x68],EAX      ; 004604cb
    JMP 0x00460380                      ; 004604cf
        ;   XREF to: 00460380 (UNCONDITIONAL_JUMP)  ; LAB_00460380
    MOV EAX,dword ptr [ESP + 0xc]       ; 004604d4
        ;   Label: LAB_004604d4
    MOV dword ptr [ESP + 0x30],EAX      ; 004604d8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004604dc
    MOV dword ptr [ESP + 0x34],EAX      ; 004604e0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004604e4
    MOV dword ptr [ESP + 0x38],EAX      ; 004604e8
    JMP 0x00460440                      ; 004604ec
        ;   XREF to: 00460440 (UNCONDITIONAL_JUMP)  ; LAB_00460440
    LEA EAX,[ESP + 0x60]                ; 004604f1
        ;   Label: LAB_004604f1
    PUSH EAX                            ; 004604f5
    MOV EDI,dword ptr [EBP + 0x10]      ; 004604f6
    PUSH EDI                            ; 004604f9
    LEA ESI,[ESP + 0x44]                ; 004604fa
    CALL core_actor.cpp_FUN_00408cf0    ; 004604fe
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA EDI,[ESP + 0x5c]                ; 00460503
    LEA ESI,[ESP + 0x44]                ; 00460507
    ADD ESP,0x8                         ; 0046050b
    MOVSD ES:EDI,ESI                    ; 0046050e
    MOVSD ES:EDI,ESI                    ; 0046050f
    MOVSD ES:EDI,ESI                    ; 00460510
    LEA EAX,[ESP + 0x30]                ; 00460511
    FLD float ptr [EBX + 0x4]           ; 00460515
    FLD float ptr [EBX + 0x8]           ; 00460518
    FLD float ptr [EBX]                 ; 0046051b
    LEA EDI,[ESP + 0x9c]                ; 0046051d
    LEA ESI,[ESP + 0x24]                ; 00460524
    LEA EBX,[ESP + 0x9c]                ; 00460528
    FSUB float ptr [ESP + 0x54]         ; 0046052f
    FXCH ST2                            ; 00460533
    FSUB float ptr [ESP + 0x58]         ; 00460535
    FXCH                                ; 00460539
    FSUB float ptr [ESP + 0x5c]         ; 0046053b
    FXCH ST2                            ; 0046053f
    FSTP float ptr [ESP + 0x24]         ; 00460541
    FSTP float ptr [ESP + 0x28]         ; 00460545
    FSTP float ptr [ESP + 0x2c]         ; 00460549
    MOVSD ES:EDI,ESI                    ; 0046054d
    MOVSD ES:EDI,ESI                    ; 0046054e
    MOVSD ES:EDI,ESI                    ; 0046054f
    CMP EAX,EBX                         ; 00460550
    JZ 0x00460440                       ; 00460552
        ;   XREF to: 00460440 (CONDITIONAL_JUMP)  ; LAB_00460440
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00460558
    MOV dword ptr [ESP + 0x30],EAX      ; 0046055f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00460563
    MOV dword ptr [ESP + 0x34],EAX      ; 0046056a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0046056e
    MOV dword ptr [ESP + 0x38],EAX      ; 00460575
    JMP 0x00460440                      ; 00460579
        ;   XREF to: 00460440 (UNCONDITIONAL_JUMP)  ; LAB_00460440
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046057e
        ;   Label: caseD_3
    LEA EAX,[ESP + 0x30]                ; 00460581
    ADD EBX,0xb18                       ; 00460585
    CMP EAX,EBX                         ; 0046058b
    JZ 0x00460440                       ; 0046058d
        ;   XREF to: 00460440 (CONDITIONAL_JUMP)  ; LAB_00460440
    MOV EAX,dword ptr [EBX]             ; 00460593
    MOV dword ptr [ESP + 0x30],EAX      ; 00460595
    MOV EAX,dword ptr [EBX + 0x4]       ; 00460599
    MOV dword ptr [ESP + 0x34],EAX      ; 0046059c
    MOV EAX,dword ptr [EBX + 0x8]       ; 004605a0
    MOV dword ptr [ESP + 0x38],EAX      ; 004605a3
    JMP 0x00460440                      ; 004605a7
        ;   XREF to: 00460440 (UNCONDITIONAL_JUMP)  ; LAB_00460440
    MOV EDX,0x5d0b9f                    ; 004605ac | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x37e                       ; 004605b1
    PUSH 0x5d0bb0                       ; 004605b6 | = "CDoor::getOpenStandPos - invalid door..."
    MOV dword ptr [0x01d046a0],EDX      ; 004605bb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004605c1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004605c7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004605cc
    JMP 0x00460440                      ; 004605cf
        ;   XREF to: 00460440 (UNCONDITIONAL_JUMP)  ; LAB_00460440

