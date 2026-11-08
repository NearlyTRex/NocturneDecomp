; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00478860(int param_1,float *param_2,undefined4 param_3)
;
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
;   FUN_00432240 at 0043233e
;
; Referenced Globals:
;   void* switchdataD_0047884c = 004788a9
;   TerminatedCString s_core_door_cpp_005da99b
;   TerminatedCString s_CDoor_getOpenStandPos_in_005da9ac
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408bb0
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478860
        ;   Label: FUN_00478860
    PUSH EDI                            ; 00478861
    PUSH EBP                            ; 00478862
    MOV EBP,ESP                         ; 00478863
    SUB ESP,0xac                        ; 00478865
    AND ESP,0xfffffff8                  ; 0047886b
    MOV dword ptr [ESP + 0xa8],ESI      ; 0047886e
    MOV ESI,dword ptr [EBP + 0x14]      ; 00478875
    LEA EDI,[ESP + 0x60]                ; 00478878
    MOVSD ES:EDI,ESI                    ; 0047887c
    MOVSD ES:EDI,ESI                    ; 0047887d
    MOVSD ES:EDI,ESI                    ; 0047887e
    FLD float ptr [ESP + 0x68]          ; 0047887f
    FLDZ                                ; 00478883
    FCOMPP                              ; 00478885
    FNSTSW AX                           ; 00478887
    SAHF                                ; 00478889
    JA 0x00478975                       ; 0047888a
        ;   XREF to: 00478975 (CONDITIONAL_JUMP)  ; LAB_00478975
    MOV EAX,dword ptr [EBP + 0x10]      ; 00478890
        ;   Label: LAB_00478890
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 00478893
    CMP EAX,0x3                         ; 00478899
    JA 0x00478abc                       ; 0047889c
        ;   XREF to: 00478abc (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x47884c]  ; 004788a2 | caseD_2 | caseD_3 | switchdataD_0047884c
        ;   Label: switchD
    MOV EBX,dword ptr [EBP + 0x18]      ; 004788a9
        ;   Label: caseD_0
    PUSH EBX                            ; 004788ac
    MOV ESI,dword ptr [EBP + 0x10]      ; 004788ad
    PUSH ESI                            ; 004788b0
    LEA ESI,[ESP + 0x50]                ; 004788b1
    LEA EDI,[ESP + 0x74]                ; 004788b5
    CALL FUN_00408bb0                   ; 004788b9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x50]                ; 004788be
    ADD ESP,0x8                         ; 004788c2
    FLDZ                                ; 004788c5
    MOV EBX,dword ptr [EBP + 0x10]      ; 004788c7
    MOVSD ES:EDI,ESI                    ; 004788ca
    MOVSD ES:EDI,ESI                    ; 004788cb
    MOVSD ES:EDI,ESI                    ; 004788cc
    ADD EBX,0x9bc                       ; 004788cd
    FCOMP float ptr [ESP + 0x74]        ; 004788d3
    FNSTSW AX                           ; 004788d7
    SAHF                                ; 004788d9
    JNC 0x00478a01                      ; 004788da
        ;   XREF to: 00478a01 (CONDITIONAL_JUMP)  ; LAB_00478a01
    LEA EAX,[ESP + 0x60]                ; 004788e0
    PUSH EAX                            ; 004788e4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004788e5
    PUSH EAX                            ; 004788e8
    LEA ESI,[ESP + 0x8]                 ; 004788e9
    LEA EDI,[ESP + 0x98]                ; 004788ed
    CALL FUN_00408ac0                   ; 004788f4
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x8]                 ; 004788f9
    ADD ESP,0x8                         ; 004788fd
    MOVSD ES:EDI,ESI                    ; 00478900
    MOVSD ES:EDI,ESI                    ; 00478901
    MOVSD ES:EDI,ESI                    ; 00478902
    LEA EAX,[ESP + 0x30]                ; 00478903
    FLD float ptr [EBX + 0x4]           ; 00478907
    FLD float ptr [EBX + 0x8]           ; 0047890a
    FLD float ptr [EBX]                 ; 0047890d
    LEA EDI,[ESP + 0xc]                 ; 0047890f
    LEA ESI,[ESP + 0x78]                ; 00478913
    LEA EBX,[ESP + 0xc]                 ; 00478917
    FADD float ptr [ESP + 0x90]         ; 0047891b
    FXCH ST2                            ; 00478922
    FADD float ptr [ESP + 0x94]         ; 00478924
    FXCH                                ; 0047892b
    FADD float ptr [ESP + 0x98]         ; 0047892d
    FXCH ST2                            ; 00478934
    FSTP float ptr [ESP + 0x78]         ; 00478936
    FSTP float ptr [ESP + 0x7c]         ; 0047893a
    FSTP float ptr [ESP + 0x80]         ; 0047893e
    MOVSD ES:EDI,ESI                    ; 00478945
    MOVSD ES:EDI,ESI                    ; 00478946
    MOVSD ES:EDI,ESI                    ; 00478947
    CMP EAX,EBX                         ; 00478948
    JNZ 0x004789e4                      ; 0047894a
        ;   XREF to: 004789e4 (CONDITIONAL_JUMP)  ; LAB_004789e4
    MOV EAX,dword ptr [EBP + 0x10]      ; 00478950
        ;   Label: LAB_00478950
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00478953
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047895a
    LEA ESI,[ESP + 0x30]                ; 0047895d
    MOV dword ptr [ESP + 0x34],EAX      ; 00478961
    MOVSD ES:EDI,ESI                    ; 00478965
    MOVSD ES:EDI,ESI                    ; 00478966
    MOVSD ES:EDI,ESI                    ; 00478967
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00478968
    MOV ESP,EBP                         ; 0047896f
    POP EBP                             ; 00478971
    POP EDI                             ; 00478972
    POP EBX                             ; 00478973
    RET                                 ; 00478974
    FLD float ptr [ESP + 0x60]          ; 00478975
        ;   Label: LAB_00478975
    FLD float ptr [ESP + 0x64]          ; 00478979
    FLD float ptr [ESP + 0x68]          ; 0047897d
    LEA EDI,[ESP + 0x84]                ; 00478981
    LEA ESI,[ESP + 0x18]                ; 00478988
    LEA EAX,[ESP + 0x84]                ; 0047898c
    LEA EBX,[ESP + 0x60]                ; 00478993
    FXCH ST2                            ; 00478997
    FCHS                                ; 00478999
    FXCH                                ; 0047899b
    FCHS                                ; 0047899d
    FXCH ST2                            ; 0047899f
    FCHS                                ; 004789a1
    FXCH ST2                            ; 004789a3
    FSTP float ptr [ESP + 0x1c]         ; 004789a5
    FXCH                                ; 004789a9
    FSTP float ptr [ESP + 0x20]         ; 004789ab
    FSTP float ptr [ESP + 0x18]         ; 004789af
    MOVSD ES:EDI,ESI                    ; 004789b3
    MOVSD ES:EDI,ESI                    ; 004789b4
    MOVSD ES:EDI,ESI                    ; 004789b5
    CMP EBX,EAX                         ; 004789b6
    JZ 0x00478890                       ; 004789b8
        ;   XREF to: 00478890 (CONDITIONAL_JUMP)  ; LAB_00478890
    MOV EAX,dword ptr [ESP + 0x84]      ; 004789be
    MOV dword ptr [ESP + 0x60],EAX      ; 004789c5
    MOV EAX,dword ptr [ESP + 0x88]      ; 004789c9
    MOV dword ptr [ESP + 0x64],EAX      ; 004789d0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004789d4
    MOV dword ptr [ESP + 0x68],EAX      ; 004789db
    JMP 0x00478890                      ; 004789df
        ;   XREF to: 00478890 (UNCONDITIONAL_JUMP)  ; LAB_00478890
    MOV EAX,dword ptr [ESP + 0xc]       ; 004789e4
        ;   Label: LAB_004789e4
    MOV dword ptr [ESP + 0x30],EAX      ; 004789e8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004789ec
    MOV dword ptr [ESP + 0x34],EAX      ; 004789f0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004789f4
    MOV dword ptr [ESP + 0x38],EAX      ; 004789f8
    JMP 0x00478950                      ; 004789fc
        ;   XREF to: 00478950 (UNCONDITIONAL_JUMP)  ; LAB_00478950
    LEA EAX,[ESP + 0x60]                ; 00478a01
        ;   Label: LAB_00478a01
    PUSH EAX                            ; 00478a05
    MOV EDI,dword ptr [EBP + 0x10]      ; 00478a06
    PUSH EDI                            ; 00478a09
    LEA ESI,[ESP + 0x44]                ; 00478a0a
    CALL FUN_00408ac0                   ; 00478a0e
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA EDI,[ESP + 0x5c]                ; 00478a13
    LEA ESI,[ESP + 0x44]                ; 00478a17
    ADD ESP,0x8                         ; 00478a1b
    MOVSD ES:EDI,ESI                    ; 00478a1e
    MOVSD ES:EDI,ESI                    ; 00478a1f
    MOVSD ES:EDI,ESI                    ; 00478a20
    LEA EAX,[ESP + 0x30]                ; 00478a21
    FLD float ptr [EBX + 0x4]           ; 00478a25
    FLD float ptr [EBX + 0x8]           ; 00478a28
    FLD float ptr [EBX]                 ; 00478a2b
    LEA EDI,[ESP + 0x9c]                ; 00478a2d
    LEA ESI,[ESP + 0x24]                ; 00478a34
    LEA EBX,[ESP + 0x9c]                ; 00478a38
    FSUB float ptr [ESP + 0x54]         ; 00478a3f
    FXCH ST2                            ; 00478a43
    FSUB float ptr [ESP + 0x58]         ; 00478a45
    FXCH                                ; 00478a49
    FSUB float ptr [ESP + 0x5c]         ; 00478a4b
    FXCH ST2                            ; 00478a4f
    FSTP float ptr [ESP + 0x24]         ; 00478a51
    FSTP float ptr [ESP + 0x28]         ; 00478a55
    FSTP float ptr [ESP + 0x2c]         ; 00478a59
    MOVSD ES:EDI,ESI                    ; 00478a5d
    MOVSD ES:EDI,ESI                    ; 00478a5e
    MOVSD ES:EDI,ESI                    ; 00478a5f
    CMP EAX,EBX                         ; 00478a60
    JZ 0x00478950                       ; 00478a62
        ;   XREF to: 00478950 (CONDITIONAL_JUMP)  ; LAB_00478950
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00478a68
    MOV dword ptr [ESP + 0x30],EAX      ; 00478a6f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00478a73
    MOV dword ptr [ESP + 0x34],EAX      ; 00478a7a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00478a7e
    MOV dword ptr [ESP + 0x38],EAX      ; 00478a85
    JMP 0x00478950                      ; 00478a89
        ;   XREF to: 00478950 (UNCONDITIONAL_JUMP)  ; LAB_00478950
    MOV EBX,dword ptr [EBP + 0x10]      ; 00478a8e
        ;   Label: caseD_3
    LEA EAX,[ESP + 0x30]                ; 00478a91
    ADD EBX,0x9bc                       ; 00478a95
    CMP EAX,EBX                         ; 00478a9b
    JZ 0x00478950                       ; 00478a9d
        ;   XREF to: 00478950 (CONDITIONAL_JUMP)  ; LAB_00478950
    MOV EAX,dword ptr [EBX]             ; 00478aa3
    MOV dword ptr [ESP + 0x30],EAX      ; 00478aa5
    MOV EAX,dword ptr [EBX + 0x4]       ; 00478aa9
    MOV dword ptr [ESP + 0x34],EAX      ; 00478aac
    MOV EAX,dword ptr [EBX + 0x8]       ; 00478ab0
    MOV dword ptr [ESP + 0x38],EAX      ; 00478ab3
    JMP 0x00478950                      ; 00478ab7
        ;   XREF to: 00478950 (UNCONDITIONAL_JUMP)  ; LAB_00478950
    MOV EDX,0x5da99b                    ; 00478abc | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x37e                       ; 00478ac1
    PUSH 0x5da9ac                       ; 00478ac6 | = "CDoor::getOpenStandPos - invalid door..."
    MOV dword ptr [0x01d1d400],EDX      ; 00478acb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00478ad1 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00478ad7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00478adc
    JMP 0x00478950                      ; 00478adf
        ;   XREF to: 00478950 (UNCONDITIONAL_JUMP)  ; LAB_00478950

