; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_process_FUN_0043ebf0(CCurtain *this_ptr,float delta_time)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
;
; Referenced Globals:
;   TerminatedCString s_none_0057b50e
;   double DOUBLE_0057b516 = 0.850000000000000
;   double DOUBLE_0057b51e = 4
;   double DOUBLE_0057b526 = 0.03125
;   double DOUBLE_0057b52e = 5.08118523482294E-315
;   double DOUBLE_0057b536 = 0.100000000000000
;   undefined4 DAT_005b7650
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_0077bdb8
;   CVector3f[100] g_CVector3f_ARRAY_0077bdbc
;   undefined4 g_CVector3f_ARRAY_0077bdbc[0].y
;   undefined4 g_CVector3f_ARRAY_0077bdbc[0].z
;   SCollisionInfo[100] g_SCollisionInfo_ARRAY_0077c26c
;   undefined4 g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_top_y
;   undefined4 g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_radius
;   ... and 3 more
;
; Called Functions:
;   core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290
;   core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ebf0
        ;   Label: core_curtain.cpp_CCurtain_process_FUN_0043ebf0
    PUSH ESI                            ; 0043ebf1
    PUSH EDI                            ; 0043ebf2
    PUSH EBP                            ; 0043ebf3
    MOV EBP,ESP                         ; 0043ebf4
    SUB ESP,0xd0                        ; 0043ebf6
    AND ESP,0xfffffff8                  ; 0043ebfc
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043ebff
    CMP dword ptr [EDI + 0x65b28],0x0   ; 0043ec02
    JNZ 0x0043ec18                      ; 0043ec09
        ;   XREF to: 0043ec18 (CONDITIONAL_JUMP)  ; LAB_0043ec18
    CMP dword ptr [EDI + 0x188],0x0     ; 0043ec0b
    JZ 0x0043f061                       ; 0043ec12
        ;   XREF to: 0043f061 (CONDITIONAL_JUMP)  ; LAB_0043f061
    MOV EBX,dword ptr [EDI + 0x1f0]     ; 0043ec18
        ;   Label: LAB_0043ec18
    MOV dword ptr [EDI + 0x65b28],0x0   ; 0043ec1e
    TEST EBX,EBX                        ; 0043ec28
    JZ 0x0043f061                       ; 0043ec2a
        ;   XREF to: 0043f061 (CONDITIONAL_JUMP)  ; LAB_0043f061
    LEA EAX,[EDI + 0x18c]               ; 0043ec30
    PUSH EAX                            ; 0043ec36
    MOV ESI,dword ptr [0x005b7650]      ; 0043ec37 | DAT_005b7650
    PUSH ESI                            ; 0043ec3d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0043ec3e
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0043ec43
    TEST EAX,EAX                        ; 0043ec46
    JZ 0x0043ec54                       ; 0043ec48
        ;   XREF to: 0043ec54 (CONDITIONAL_JUMP)  ; LAB_0043ec54
    MOV dword ptr [EDI + 0x188],0x1     ; 0043ec4a
    PUSH 0x57b50e                       ; 0043ec54 | = "none"
        ;   Label: LAB_0043ec54
    LEA EAX,[EDI + 0x18c]               ; 0043ec59
    PUSH EAX                            ; 0043ec5f
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0043ec60
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0043ec65
    TEST EAX,EAX                        ; 0043ec68
    JZ 0x0043ec79                       ; 0043ec6a
        ;   XREF to: 0043ec79 (CONDITIONAL_JUMP)  ; LAB_0043ec79
    CMP dword ptr [EDI + 0x188],0x0     ; 0043ec6c
    JZ 0x0043f061                       ; 0043ec73
        ;   XREF to: 0043f061 (CONDITIONAL_JUMP)  ; LAB_0043f061
    CMP dword ptr [EDI + 0x65b24],0x0   ; 0043ec79
        ;   Label: LAB_0043ec79
    JZ 0x0043ecaa                       ; 0043ec80
        ;   XREF to: 0043ecaa (CONDITIONAL_JUMP)  ; LAB_0043ecaa
    PUSH 0x0                            ; 0043ec82
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0043ec84
    PUSH 0x3dcccccd                     ; 0043ec8a
    PUSH EDI                            ; 0043ec8f
    CALL dword ptr [EAX + 0x38]         ; 0043ec90
    MOV dword ptr [ESP + 0xd8],EAX      ; 0043ec93
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0043ec9a
    MOV dword ptr [EDI + 0x65b20],EAX   ; 0043eca1
    ADD ESP,0xc                         ; 0043eca7
    FLD float ptr [EBP + 0x18]          ; 0043ecaa
        ;   Label: LAB_0043ecaa
    FLD1                                ; 0043ecad
    FDIVRP                              ; 0043ecaf
    MOV ECX,0x47c34f80                  ; 0043ecb1
    MOV EAX,0xc7c34f80                  ; 0043ecb6
    FSTP float ptr [EDI + 0x1c720]      ; 0043ecbb
    MOV dword ptr [ESP + 0x34],ECX      ; 0043ecc1
    MOV dword ptr [ESP + 0x38],ECX      ; 0043ecc5
    MOV dword ptr [ESP + 0x3c],ECX      ; 0043ecc9
    MOV dword ptr [ESP + 0x64],EAX      ; 0043eccd
    MOV dword ptr [ESP + 0x68],EAX      ; 0043ecd1
    MOV dword ptr [ESP + 0x6c],EAX      ; 0043ecd5
    MOV EDX,EAX                         ; 0043ecd9
    MOV EBX,dword ptr [EDI + 0x1fc]     ; 0043ecdb
    XOR EDX,EAX                         ; 0043ece1
    TEST EBX,EBX                        ; 0043ece3
    JLE 0x0043ed77                      ; 0043ece5
        ;   XREF to: 0043ed77 (CONDITIONAL_JUMP)  ; LAB_0043ed77
    LEA ESI,[EDI + 0x200]               ; 0043eceb
    FLD float ptr [ESI + 0x20]          ; 0043ecf1
        ;   Label: LAB_0043ecf1
    MOV EBX,ESI                         ; 0043ecf4
    FCOMP float ptr [ESP + 0x34]        ; 0043ecf6
    FNSTSW AX                           ; 0043ecfa
    SAHF                                ; 0043ecfc
    JNC 0x0043ed06                      ; 0043ecfd
        ;   XREF to: 0043ed06 (CONDITIONAL_JUMP)  ; LAB_0043ed06
    MOV EAX,dword ptr [ESI + 0x20]      ; 0043ecff
    MOV dword ptr [ESP + 0x34],EAX      ; 0043ed02
    FLD float ptr [EBX + 0x24]          ; 0043ed06
        ;   Label: LAB_0043ed06
    FCOMP float ptr [ESP + 0x38]        ; 0043ed09
    FNSTSW AX                           ; 0043ed0d
    SAHF                                ; 0043ed0f
    JNC 0x0043ed19                      ; 0043ed10
        ;   XREF to: 0043ed19 (CONDITIONAL_JUMP)  ; LAB_0043ed19
    MOV EAX,dword ptr [EBX + 0x24]      ; 0043ed12
    MOV dword ptr [ESP + 0x38],EAX      ; 0043ed15
    FLD float ptr [EBX + 0x28]          ; 0043ed19
        ;   Label: LAB_0043ed19
    FCOMP float ptr [ESP + 0x3c]        ; 0043ed1c
    FNSTSW AX                           ; 0043ed20
    SAHF                                ; 0043ed22
    JNC 0x0043ed2c                      ; 0043ed23
        ;   XREF to: 0043ed2c (CONDITIONAL_JUMP)  ; LAB_0043ed2c
    MOV EAX,dword ptr [EBX + 0x28]      ; 0043ed25
    MOV dword ptr [ESP + 0x3c],EAX      ; 0043ed28
    FLD float ptr [EBX + 0x20]          ; 0043ed2c
        ;   Label: LAB_0043ed2c
    FCOMP float ptr [ESP + 0x64]        ; 0043ed2f
    FNSTSW AX                           ; 0043ed33
    SAHF                                ; 0043ed35
    JBE 0x0043ed3f                      ; 0043ed36
        ;   XREF to: 0043ed3f (CONDITIONAL_JUMP)  ; LAB_0043ed3f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0043ed38
    MOV dword ptr [ESP + 0x64],EAX      ; 0043ed3b
    FLD float ptr [EBX + 0x24]          ; 0043ed3f
        ;   Label: LAB_0043ed3f
    FCOMP float ptr [ESP + 0x68]        ; 0043ed42
    FNSTSW AX                           ; 0043ed46
    SAHF                                ; 0043ed48
    JBE 0x0043ed52                      ; 0043ed49
        ;   XREF to: 0043ed52 (CONDITIONAL_JUMP)  ; LAB_0043ed52
    MOV EAX,dword ptr [EBX + 0x24]      ; 0043ed4b
    MOV dword ptr [ESP + 0x68],EAX      ; 0043ed4e
    FLD float ptr [EBX + 0x28]          ; 0043ed52
        ;   Label: LAB_0043ed52
    FCOMP float ptr [ESP + 0x6c]        ; 0043ed55
    FNSTSW AX                           ; 0043ed59
    SAHF                                ; 0043ed5b
    JBE 0x0043ed65                      ; 0043ed5c
        ;   XREF to: 0043ed65 (CONDITIONAL_JUMP)  ; LAB_0043ed65
    MOV EAX,dword ptr [EBX + 0x28]      ; 0043ed5e
    MOV dword ptr [ESP + 0x6c],EAX      ; 0043ed61
    INC EDX                             ; 0043ed65
        ;   Label: LAB_0043ed65
    MOV EAX,dword ptr [EDI + 0x1fc]     ; 0043ed66
    ADD ESI,0x74                        ; 0043ed6c
    CMP EDX,EAX                         ; 0043ed6f
    JL 0x0043ecf1                       ; 0043ed71
        ;   XREF to: 0043ecf1 (CONDITIONAL_JUMP)  ; LAB_0043ecf1
    XOR EDX,EDX                         ; 0043ed77
        ;   Label: LAB_0043ed77
    MOV dword ptr [ESP + 0xc0],EDX      ; 0043ed79
    MOV dword ptr [ESP + 0xb8],EDX      ; 0043ed80
    MOV dword ptr [0x0077bdb8],EDX      ; 0043ed87 | DAT_0077bdb8
    MOV EDX,dword ptr [0x005be368]      ; 0043ed8d | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0043ed8d
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0043ed93
    CMP EAX,dword ptr [EDX + 0x14ecb0]  ; 0043ed9a | g_CDemonSet_01e57284.character_count
    JGE 0x0043ee81                      ; 0043eda0
        ;   XREF to: 0043ee81 (CONDITIONAL_JUMP)  ; LAB_0043ee81
    MOV EAX,[0x0077bdb8]                ; 0043eda6 | DAT_0077bdb8
    IMUL ESI,EAX,0x28                   ; 0043edab
    ADD EDX,dword ptr [ESP + 0xb8]      ; 0043edae
    MOV EBX,dword ptr [EDX + 0x14ecb4]  ; 0043edb5 | g_CDemonSet_01e57284.characters[0] | g_CDemonSet_01e57284.characters[1]
    IMUL EDX,EAX,0xc                    ; 0043edbb
    ADD EDX,0x77bdbc                    ; 0043edbe | g_CVector3f_ARRAY_0077bdbc
    LEA EAX,[EBX + 0x20]                ; 0043edc4
    ADD ESI,0x77c26c                    ; 0043edc7 | g_SCollisionInfo_ARRAY_0077c26c
    CMP EDX,EAX                         ; 0043edcd
    JZ 0x0043ede1                       ; 0043edcf
        ;   XREF to: 0043ede1 (CONDITIONAL_JUMP)  ; LAB_0043ede1
    MOV ECX,dword ptr [EAX]             ; 0043edd1
    MOV dword ptr [EDX],ECX             ; 0043edd3 | g_CVector3f_ARRAY_0077bdbc
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043edd5
    MOV dword ptr [EDX + 0x4],ECX       ; 0043edd8 | g_CVector3f_ARRAY_0077bdbc[0].y
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043eddb
    MOV dword ptr [EDX + 0x8],ECX       ; 0043edde | g_CVector3f_ARRAY_0077bdbc[0].z
    PUSH ESI                            ; 0043ede1 | g_SCollisionInfo_ARRAY_0077c26c
        ;   Label: LAB_0043ede1
    MOV dword ptr [ESI],0x0             ; 0043ede2 | g_SCollisionInfo_ARRAY_0077c26c
    PUSH EBX                            ; 0043ede8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043ede9
    CALL dword ptr [EAX + 0x34]         ; 0043edef
    ADD ESP,0x8                         ; 0043edf2
    CMP EAX,0x2                         ; 0043edf5
    JZ 0x0043ee1f                       ; 0043edf8
        ;   XREF to: 0043ee1f (CONDITIONAL_JUMP)  ; LAB_0043ee1f
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0043edfa
        ;   Label: LAB_0043edfa
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0043ee01
    INC EAX                             ; 0043ee08
    ADD ESI,0x4                         ; 0043ee09
    MOV dword ptr [ESP + 0xc0],EAX      ; 0043ee0c
    MOV dword ptr [ESP + 0xb8],ESI      ; 0043ee13
    JMP 0x0043ed8d                      ; 0043ee1a
        ;   XREF to: 0043ed8d (UNCONDITIONAL_JUMP)  ; LAB_0043ed8d
    FLD float ptr [EBX + 0x24]          ; 0043ee1f
        ;   Label: LAB_0043ee1f
    FCOMP float ptr [ESP + 0x68]        ; 0043ee22
    FNSTSW AX                           ; 0043ee26
    SAHF                                ; 0043ee28
    JA 0x0043edfa                       ; 0043ee29
        ;   XREF to: 0043edfa (CONDITIONAL_JUMP)  ; LAB_0043edfa
    FLD float ptr [EBX + 0x24]          ; 0043ee2b
    FADD float ptr [ESI + 0x18]         ; 0043ee2e | g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_top_y
    FCOMP float ptr [ESP + 0x38]        ; 0043ee31
    FNSTSW AX                           ; 0043ee35
    SAHF                                ; 0043ee37
    JC 0x0043edfa                       ; 0043ee38
        ;   XREF to: 0043edfa (CONDITIONAL_JUMP)  ; LAB_0043edfa
    FLD float ptr [EBX + 0x20]          ; 0043ee3a
    FADD float ptr [ESI + 0x1c]         ; 0043ee3d | g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_radius
    FCOMP float ptr [ESP + 0x34]        ; 0043ee40
    FNSTSW AX                           ; 0043ee44
    SAHF                                ; 0043ee46
    JC 0x0043edfa                       ; 0043ee47
        ;   XREF to: 0043edfa (CONDITIONAL_JUMP)  ; LAB_0043edfa
    FLD float ptr [EBX + 0x20]          ; 0043ee49
    FSUB float ptr [ESI + 0x1c]         ; 0043ee4c | g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_radius
    FCOMP float ptr [ESP + 0x64]        ; 0043ee4f
    FNSTSW AX                           ; 0043ee53
    SAHF                                ; 0043ee55
    JA 0x0043edfa                       ; 0043ee56
        ;   XREF to: 0043edfa (CONDITIONAL_JUMP)  ; LAB_0043edfa
    FLD float ptr [EBX + 0x28]          ; 0043ee58
    FADD float ptr [ESI + 0x1c]         ; 0043ee5b | g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_radius
    FCOMP float ptr [ESP + 0x3c]        ; 0043ee5e
    FNSTSW AX                           ; 0043ee62
    SAHF                                ; 0043ee64
    JC 0x0043edfa                       ; 0043ee65
        ;   XREF to: 0043edfa (CONDITIONAL_JUMP)  ; LAB_0043edfa
    FLD float ptr [EBX + 0x28]          ; 0043ee67
    FSUB float ptr [ESI + 0x1c]         ; 0043ee6a | g_SCollisionInfo_ARRAY_0077c26c[0].cylinder_radius
    FCOMP float ptr [ESP + 0x6c]        ; 0043ee6d
    FNSTSW AX                           ; 0043ee71
    SAHF                                ; 0043ee73
    JA 0x0043edfa                       ; 0043ee74
        ;   XREF to: 0043edfa (CONDITIONAL_JUMP)  ; LAB_0043edfa
    INC dword ptr [0x0077bdb8]          ; 0043ee76 | DAT_0077bdb8
    JMP 0x0043edfa                      ; 0043ee7c
        ;   XREF to: 0043edfa (UNCONDITIONAL_JUMP)  ; LAB_0043edfa
    MOV EAX,[0x0077bdb8]                ; 0043ee81 | DAT_0077bdb8
        ;   Label: LAB_0043ee81
    MOV dword ptr [EDI + 0x65b2c],0x1   ; 0043ee86
    TEST EAX,EAX                        ; 0043ee90
    JNZ 0x0043eed9                      ; 0043ee92
        ;   XREF to: 0043eed9 (CONDITIONAL_JUMP)  ; LAB_0043eed9
    MOV EDX,dword ptr [EDI + 0x188]     ; 0043ee94
    TEST EDX,EDX                        ; 0043ee9a
    JNZ 0x0043eed9                      ; 0043ee9c
        ;   XREF to: 0043eed9 (CONDITIONAL_JUMP)  ; LAB_0043eed9
    MOV ECX,dword ptr [EDI + 0x1fc]     ; 0043ee9e
    MOV dword ptr [EDI + 0x65b2c],EAX   ; 0043eea4
    TEST ECX,ECX                        ; 0043eeaa
    JLE 0x0043eecc                      ; 0043eeac
        ;   XREF to: 0043eecc (CONDITIONAL_JUMP)  ; LAB_0043eecc
    LEA EBX,[EDI + 0x200]               ; 0043eeae
    CMP dword ptr [EBX + 0x68],0x0      ; 0043eeb4
        ;   Label: LAB_0043eeb4
    JZ 0x0043f068                       ; 0043eeb8
        ;   XREF to: 0043f068 (CONDITIONAL_JUMP)  ; LAB_0043f068
    INC EDX                             ; 0043eebe
        ;   Label: LAB_0043eebe
    MOV ECX,dword ptr [EDI + 0x1fc]     ; 0043eebf
    ADD EBX,0x74                        ; 0043eec5
    CMP EDX,ECX                         ; 0043eec8
    JL 0x0043eeb4                       ; 0043eeca
        ;   XREF to: 0043eeb4 (CONDITIONAL_JUMP)  ; LAB_0043eeb4
    CMP dword ptr [EDI + 0x65b2c],0x0   ; 0043eecc
        ;   Label: LAB_0043eecc
    JZ 0x0043f061                       ; 0043eed3
        ;   XREF to: 0043f061 (CONDITIONAL_JUMP)  ; LAB_0043f061
    MOV EAX,dword ptr [EDI + 0x1fc]     ; 0043eed9
        ;   Label: LAB_0043eed9
    XOR EDX,EDX                         ; 0043eedf
    TEST EAX,EAX                        ; 0043eee1
    JLE 0x0043ef00                      ; 0043eee3
        ;   XREF to: 0043ef00 (CONDITIONAL_JUMP)  ; LAB_0043ef00
    MOV EAX,EDI                         ; 0043eee5
    MOV dword ptr [EAX + 0x26c],0x0     ; 0043eee7
        ;   Label: LAB_0043eee7
    INC EDX                             ; 0043eef1
    MOV ECX,dword ptr [EDI + 0x1fc]     ; 0043eef2
    ADD EAX,0x74                        ; 0043eef8
    CMP EDX,ECX                         ; 0043eefb
    JL 0x0043eee7                       ; 0043eefd
        ;   XREF to: 0043eee7 (CONDITIONAL_JUMP)  ; LAB_0043eee7
    NOP                                 ; 0043eeff
    XOR EBX,EBX                         ; 0043ef00
        ;   Label: LAB_0043ef00
    MOV ESI,dword ptr [EDI + 0x1fc]     ; 0043ef02
    MOV dword ptr [ESP + 0xc4],EBX      ; 0043ef08
    TEST ESI,ESI                        ; 0043ef0f
    JLE 0x0043ef42                      ; 0043ef11
        ;   XREF to: 0043ef42 (CONDITIONAL_JUMP)  ; LAB_0043ef42
    LEA EBX,[EDI + 0x200]               ; 0043ef13
    MOV EAX,dword ptr [EBX + 0x68]      ; 0043ef19
        ;   Label: LAB_0043ef19
    MOV ESI,EBX                         ; 0043ef1c
    TEST EAX,EAX                        ; 0043ef1e
    JZ 0x0043f0ec                       ; 0043ef20
        ;   XREF to: 0043f0ec (CONDITIONAL_JUMP)  ; LAB_0043f0ec
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0043ef26
        ;   Label: LAB_0043ef26
    ADD EBX,0x74                        ; 0043ef2d
    INC EAX                             ; 0043ef30
    MOV EDX,dword ptr [EDI + 0x1fc]     ; 0043ef31
    MOV dword ptr [ESP + 0xc4],EAX      ; 0043ef37
    CMP EAX,EDX                         ; 0043ef3e
    JL 0x0043ef19                       ; 0043ef40
        ;   XREF to: 0043ef19 (CONDITIONAL_JUMP)  ; LAB_0043ef19
    LEA EAX,[EDI + 0x200]               ; 0043ef42
        ;   Label: LAB_0043ef42
    XOR ECX,ECX                         ; 0043ef48
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043ef4a
    MOV dword ptr [ESP + 0xbc],ECX      ; 0043ef51
    MOV ECX,dword ptr [EDI + 0x1fc]     ; 0043ef58
        ;   Label: LAB_0043ef58
    XOR ESI,ESI                         ; 0043ef5e
    TEST ECX,ECX                        ; 0043ef60
    JLE 0x0043ef83                      ; 0043ef62
        ;   XREF to: 0043ef83 (CONDITIONAL_JUMP)  ; LAB_0043ef83
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0043ef64
    CMP dword ptr [EBX + 0x68],0x0      ; 0043ef6b
        ;   Label: LAB_0043ef6b
    JZ 0x0043f320                       ; 0043ef6f
        ;   XREF to: 0043f320 (CONDITIONAL_JUMP)  ; LAB_0043f320
    INC ESI                             ; 0043ef75
        ;   Label: LAB_0043ef75
    MOV EAX,dword ptr [EDI + 0x1fc]     ; 0043ef76
    ADD EBX,0x74                        ; 0043ef7c
    CMP ESI,EAX                         ; 0043ef7f
    JL 0x0043ef6b                       ; 0043ef81
        ;   XREF to: 0043ef6b (CONDITIONAL_JUMP)  ; LAB_0043ef6b
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0043ef83
        ;   Label: LAB_0043ef83
    INC EDX                             ; 0043ef8a
    MOV dword ptr [ESP + 0xbc],EDX      ; 0043ef8b
    CMP EDX,0x3                         ; 0043ef92
    JL 0x0043ef58                       ; 0043ef95
        ;   XREF to: 0043ef58 (CONDITIONAL_JUMP)  ; LAB_0043ef58
    MOV EBX,dword ptr [EDI + 0x1fc]     ; 0043ef97
    XOR ECX,ECX                         ; 0043ef9d
    TEST EBX,EBX                        ; 0043ef9f
    JLE 0x0043f00c                      ; 0043efa1
        ;   XREF to: 0043f00c (CONDITIONAL_JUMP)  ; LAB_0043f00c
    LEA ESI,[EDI + 0x65b18]             ; 0043efa3
    LEA EBX,[EDI + 0x200]               ; 0043efa9
    MOV EAX,dword ptr [EBX + 0x6c]      ; 0043efaf
        ;   Label: LAB_0043efaf
    MOV dword ptr [ESP + 0xb4],EBX      ; 0043efb2
    TEST EAX,EAX                        ; 0043efb9
    JZ 0x0043efd6                       ; 0043efbb
        ;   XREF to: 0043efd6 (CONDITIONAL_JUMP)  ; LAB_0043efd6
    LEA EAX,[EBX + 0x2c]                ; 0043efbd
    FLD float ptr [ESI]                 ; 0043efc0
    FMUL float ptr [EAX]                ; 0043efc2
    FSTP float ptr [EAX]                ; 0043efc4
    FLD float ptr [ESI]                 ; 0043efc6
    FMUL float ptr [EAX + 0x4]          ; 0043efc8
    FSTP float ptr [EAX + 0x4]          ; 0043efcb
    FLD float ptr [ESI]                 ; 0043efce
    FMUL float ptr [EAX + 0x8]          ; 0043efd0
    FSTP float ptr [EAX + 0x8]          ; 0043efd3
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0043efd6
        ;   Label: LAB_0043efd6
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0043efdd
    ADD EDX,0x20                        ; 0043efe4
    ADD EAX,0x38                        ; 0043efe7
    CMP EAX,EDX                         ; 0043efea
    JZ 0x0043effe                       ; 0043efec
        ;   XREF to: 0043effe (CONDITIONAL_JUMP)  ; LAB_0043effe
    FLD float ptr [EDX]                 ; 0043efee
    FSTP float ptr [EAX]                ; 0043eff0
    FLD float ptr [EDX + 0x4]           ; 0043eff2
    FSTP float ptr [EAX + 0x4]          ; 0043eff5
    FLD float ptr [EDX + 0x8]           ; 0043eff8
    FSTP float ptr [EAX + 0x8]          ; 0043effb
    INC ECX                             ; 0043effe
        ;   Label: LAB_0043effe
    MOV EDX,dword ptr [EDI + 0x1fc]     ; 0043efff
    ADD EBX,0x74                        ; 0043f005
    CMP ECX,EDX                         ; 0043f008
    JL 0x0043efaf                       ; 0043f00a
        ;   XREF to: 0043efaf (CONDITIONAL_JUMP)  ; LAB_0043efaf
    CMP dword ptr [EDI + 0x65b24],0x0   ; 0043f00c
        ;   Label: LAB_0043f00c
    JZ 0x0043f058                       ; 0043f013
        ;   XREF to: 0043f058 (CONDITIONAL_JUMP)  ; LAB_0043f058
    MOV ESI,dword ptr [EDI + 0x1fc]     ; 0043f015
    XOR EBX,EBX                         ; 0043f01b
    XOR ECX,ECX                         ; 0043f01d
    TEST ESI,ESI                        ; 0043f01f
    JLE 0x0043f046                      ; 0043f021
        ;   XREF to: 0043f046 (CONDITIONAL_JUMP)  ; LAB_0043f046
    LEA EDX,[EDI + 0x200]               ; 0043f023
    FLD float ptr [EDX + 0x24]          ; 0043f029
        ;   Label: LAB_0043f029
    FCOMP float ptr [EDI + 0x65b20]     ; 0043f02c
    FNSTSW AX                           ; 0043f032
    SAHF                                ; 0043f034
    JA 0x0043f038                       ; 0043f035
        ;   XREF to: 0043f038 (CONDITIONAL_JUMP)  ; LAB_0043f038
    INC ECX                             ; 0043f037
    INC EBX                             ; 0043f038
        ;   Label: LAB_0043f038
    MOV ESI,dword ptr [EDI + 0x1fc]     ; 0043f039
    ADD EDX,0x74                        ; 0043f03f
    CMP EBX,ESI                         ; 0043f042
    JL 0x0043f029                       ; 0043f044
        ;   XREF to: 0043f029 (CONDITIONAL_JUMP)  ; LAB_0043f029
    CMP ECX,dword ptr [EDI + 0x1fc]     ; 0043f046
        ;   Label: LAB_0043f046
    JNZ 0x0043f058                      ; 0043f04c
        ;   XREF to: 0043f058 (CONDITIONAL_JUMP)  ; LAB_0043f058
    MOV dword ptr [EDI + 0x1f0],0x0     ; 0043f04e
    PUSH EDI                            ; 0043f058
        ;   Label: LAB_0043f058
    CALL core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0 ; 0043f059
        ;   XREF to: 0043e1e0 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0043f05e
    MOV ESP,EBP                         ; 0043f061
        ;   Label: LAB_0043f061
    POP EBP                             ; 0043f063
    POP EDI                             ; 0043f064
    POP ESI                             ; 0043f065
    POP EBX                             ; 0043f066
    RET                                 ; 0043f067
    LEA EAX,[EBX + 0x2c]                ; 0043f068
        ;   Label: LAB_0043f068
    FLD float ptr [EAX + 0x4]           ; 0043f06b
    FMUL ST0                            ; 0043f06e
    FLD float ptr [EAX]                 ; 0043f070
    FMUL ST0                            ; 0043f072
    FADDP                               ; 0043f074
    FLD float ptr [EAX + 0x8]           ; 0043f076
    FMUL ST0                            ; 0043f079
    FADDP                               ; 0043f07b
    FSQRT                               ; 0043f07d
    FCOMP double ptr [0x0057b536]       ; 0043f07f | DOUBLE_0057b536
    FNSTSW AX                           ; 0043f085
    SAHF                                ; 0043f087
    JBE 0x0043f099                      ; 0043f088
        ;   XREF to: 0043f099 (CONDITIONAL_JUMP)  ; LAB_0043f099
    MOV dword ptr [EDI + 0x65b2c],0x1   ; 0043f08a
    JMP 0x0043eed9                      ; 0043f094
        ;   XREF to: 0043eed9 (UNCONDITIONAL_JUMP)  ; LAB_0043eed9
    LEA EAX,[EBX + 0xc]                 ; 0043f099
        ;   Label: LAB_0043f099
    FLD float ptr [EAX]                 ; 0043f09c
    FSUB float ptr [EBX]                ; 0043f09e
    FSTP float ptr [ESP + 0x28]         ; 0043f0a0
    FLD float ptr [EAX + 0x4]           ; 0043f0a4
    FSUB float ptr [EBX + 0x4]          ; 0043f0a7
    FST float ptr [ESP + 0x2c]          ; 0043f0aa
    FMUL float ptr [ESP + 0x2c]         ; 0043f0ae
    FLD float ptr [ESP + 0x28]          ; 0043f0b2
    FMUL ST0                            ; 0043f0b6
    FLD float ptr [EAX + 0x8]           ; 0043f0b8
    FSUB float ptr [EBX + 0x8]          ; 0043f0bb
    FXCH                                ; 0043f0be
    FADDP ST2,ST0                       ; 0043f0c0
    FST float ptr [ESP + 0x30]          ; 0043f0c2
    FMUL float ptr [ESP + 0x30]         ; 0043f0c6
    FADDP                               ; 0043f0ca
    FSQRT                               ; 0043f0cc
    FCOMP double ptr [0x0057b536]       ; 0043f0ce | DOUBLE_0057b536
    FNSTSW AX                           ; 0043f0d4
    SAHF                                ; 0043f0d6
    JBE 0x0043eebe                      ; 0043f0d7
        ;   XREF to: 0043eebe (CONDITIONAL_JUMP)  ; LAB_0043eebe
    MOV dword ptr [EDI + 0x65b2c],0x1   ; 0043f0dd
    JMP 0x0043eed9                      ; 0043f0e7
        ;   XREF to: 0043eed9 (UNCONDITIONAL_JUMP)  ; LAB_0043eed9
    FLD float ptr [EBX + 0x2c]          ; 0043f0ec
        ;   Label: LAB_0043f0ec
    FLD ST0                             ; 0043f0ef
    FLD double ptr [0x0057b516]         ; 0043f0f1 | DOUBLE_0057b516
    FXCH                                ; 0043f0f7
    FMUL ST1                            ; 0043f0f9
    FLD float ptr [EBX + 0x34]          ; 0043f0fb
    FMUL ST2                            ; 0043f0fe
    FXCH                                ; 0043f100
    FSTP ST3                            ; 0043f102
    FXCH ST2                            ; 0043f104
    FSTP float ptr [EBX + 0x2c]         ; 0043f106
    FLD float ptr [EDI + 0x65b10]       ; 0043f109
    FMUL float ptr [EBX + 0x30]         ; 0043f10f
    FXCH                                ; 0043f112
    FSTP ST2                            ; 0043f114
    FXCH                                ; 0043f116
    FSTP float ptr [EBX + 0x34]         ; 0043f118
    FSTP float ptr [EBX + 0x30]         ; 0043f11b
    MOV dword ptr [ESP + 0x78],EAX      ; 0043f11e
    MOV dword ptr [ESP + 0x74],EAX      ; 0043f122
    MOV dword ptr [ESP + 0x70],EAX      ; 0043f126
    MOV EAX,dword ptr [EDI + 0x65b0c]   ; 0043f12a
    MOV EDX,dword ptr [EBX + 0x70]      ; 0043f130
    MOV dword ptr [ESP],EAX             ; 0043f133
    TEST EDX,EDX                        ; 0043f136
    JZ 0x0043f146                       ; 0043f138
        ;   XREF to: 0043f146 (CONDITIONAL_JUMP)  ; LAB_0043f146
    FLD float ptr [ESP]                 ; 0043f13a
    FMUL double ptr [0x0057b51e]        ; 0043f13d | DOUBLE_0057b51e
    FSTP float ptr [ESP]                ; 0043f143
    FLD1                                ; 0043f146
        ;   Label: LAB_0043f146
    FDIV float ptr [EBP + 0x18]         ; 0043f148
    FLD float ptr [ESP]                 ; 0043f14b
    FLD ST0                             ; 0043f14e
    FMUL double ptr [0x0057b526]        ; 0043f150 | DOUBLE_0057b526
    FLD float ptr [ESP + 0x74]          ; 0043f156
    FLD1                                ; 0043f15a
    LEA EAX,[ESI + 0x2c]                ; 0043f15c
    FXCH                                ; 0043f15f
    FSUBRP ST3,ST0                      ; 0043f161
    FXCH                                ; 0043f163
    FSTP float ptr [ESP + 0xc8]         ; 0043f165
    FXCH                                ; 0043f16c
    FSTP float ptr [ESP + 0x74]         ; 0043f16e
    FLD float ptr [EAX]                 ; 0043f172
    FCHS                                ; 0043f174
    FST float ptr [ESP + 0x7c]          ; 0043f176
    FLD float ptr [EAX + 0x4]           ; 0043f17a
    FCHS                                ; 0043f17d
    FXCH                                ; 0043f17f
    FMUL ST3                            ; 0043f181
    FXCH ST2                            ; 0043f183
    FDIV float ptr [ESP + 0xc8]         ; 0043f185
    FXCH                                ; 0043f18c
    FST float ptr [ESP + 0x80]          ; 0043f18e
    FMUL ST3                            ; 0043f195
    FLD float ptr [EAX + 0x8]           ; 0043f197
    FCHS                                ; 0043f19a
    FST float ptr [ESP + 0x84]          ; 0043f19c
    FMULP ST4                           ; 0043f1a3
    FXCH ST2                            ; 0043f1a5
    FST float ptr [ESP + 0x94]          ; 0043f1a7
    FMUL float ptr [ESP + 0xc8]         ; 0043f1ae
    FXCH ST2                            ; 0043f1b5
    FST float ptr [ESP + 0x98]          ; 0043f1b7
    FMUL float ptr [ESP + 0xc8]         ; 0043f1be
    FXCH ST3                            ; 0043f1c5
    FST float ptr [ESP + 0x9c]          ; 0043f1c7
    FMUL float ptr [ESP + 0xc8]         ; 0043f1ce
    FXCH ST2                            ; 0043f1d5
    FST float ptr [ESP + 0x4c]          ; 0043f1d7
    FLD float ptr [0x0057b52e]          ; 0043f1db | DOUBLE_0057b52e
    FXCH                                ; 0043f1e1
    FMUL ST1                            ; 0043f1e3
    FXCH ST4                            ; 0043f1e5
    FST float ptr [ESP + 0x50]          ; 0043f1e7
    FMUL ST1                            ; 0043f1eb
    FLD float ptr [ESP + 0x70]          ; 0043f1ed
    FXCH ST4                            ; 0043f1f1
    FST float ptr [ESP + 0x54]          ; 0043f1f3
    FXCH ST5                            ; 0043f1f7
    FSTP float ptr [ESP + 0x10]         ; 0043f1f9
    FXCH ST3                            ; 0043f1fd
    FADD float ptr [ESP + 0x10]         ; 0043f1ff
    FXCH ST4                            ; 0043f203
    FMULP                               ; 0043f205
    FXCH ST3                            ; 0043f207
    FST float ptr [ESP + 0x70]          ; 0043f209
    FMUL ST1                            ; 0043f20d
    FLD float ptr [ESP + 0x78]          ; 0043f20f
    FLD float ptr [ESP + 0x74]          ; 0043f213
    FXCH ST4                            ; 0043f217
    FSTP float ptr [ESP + 0x14]         ; 0043f219
    FXCH ST4                            ; 0043f21d
    FSTP float ptr [ESP + 0x18]         ; 0043f21f
    FXCH ST2                            ; 0043f223
    FADD float ptr [ESP + 0x14]         ; 0043f225
    FXCH ST3                            ; 0043f229
    FADD float ptr [ESP + 0x18]         ; 0043f22b
    FXCH ST3                            ; 0043f22f
    FST float ptr [ESP + 0x74]          ; 0043f231
    FMUL ST1                            ; 0043f235
    FXCH ST3                            ; 0043f237
    FST float ptr [ESP + 0x78]          ; 0043f239
    FMULP                               ; 0043f23d
    LEA EDX,[ESP + 0x1c]                ; 0043f23f
    LEA EAX,[ESP + 0x88]                ; 0043f243
    FXCH                                ; 0043f24a
    FSTP float ptr [ESP + 0x88]         ; 0043f24c
    FXCH                                ; 0043f253
    FSTP float ptr [ESP + 0x8c]         ; 0043f255
    FSTP float ptr [ESP + 0x90]         ; 0043f25c
    CMP EDX,EAX                         ; 0043f263
    JZ 0x0043f288                       ; 0043f265
        ;   XREF to: 0043f288 (CONDITIONAL_JUMP)  ; LAB_0043f288
    MOV EAX,dword ptr [ESP + 0x88]      ; 0043f267
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043f26e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043f272
    MOV dword ptr [ESP + 0x20],EAX      ; 0043f279
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043f27d
    MOV dword ptr [ESP + 0x24],EAX      ; 0043f284
    FLD float ptr [EBP + 0x18]          ; 0043f288
        ;   Label: LAB_0043f288
    FLD float ptr [ESP + 0x1c]          ; 0043f28b
    FMUL ST1                            ; 0043f28f
    FLD float ptr [ESP + 0x20]          ; 0043f291
    FMUL ST2                            ; 0043f295
    FLD float ptr [ESP + 0x24]          ; 0043f297
    FMUL ST3                            ; 0043f29b
    LEA EAX,[ESI + 0x2c]                ; 0043f29d
    FXCH ST2                            ; 0043f2a0
    FSTP float ptr [ESP + 0x4]          ; 0043f2a2
    FSTP float ptr [ESP + 0x8]          ; 0043f2a6
    FSTP float ptr [ESP + 0xc]          ; 0043f2aa
    FLD float ptr [EAX + 0x4]           ; 0043f2ae
    FLD float ptr [EAX]                 ; 0043f2b1
    FADD float ptr [ESP + 0x4]          ; 0043f2b3
    FLD float ptr [EAX + 0x8]           ; 0043f2b7
    FXCH                                ; 0043f2ba
    FSTP float ptr [EAX]                ; 0043f2bc
    FXCH                                ; 0043f2be
    FADD float ptr [ESP + 0x8]          ; 0043f2c0
    FLD float ptr [EAX]                 ; 0043f2c4
    FXCH                                ; 0043f2c6
    FSTP float ptr [EAX + 0x4]          ; 0043f2c8
    FXCH                                ; 0043f2cb
    FADD float ptr [ESP + 0xc]          ; 0043f2cd
    FXCH                                ; 0043f2d1
    FMUL ST2                            ; 0043f2d3
    FXCH                                ; 0043f2d5
    FSTP float ptr [EAX + 0x8]          ; 0043f2d7
    FSTP float ptr [ESP + 0x40]         ; 0043f2da
    FLD float ptr [EAX + 0x4]           ; 0043f2de
    FMUL ST1                            ; 0043f2e1
    FSTP float ptr [ESP + 0x44]         ; 0043f2e3
    FMUL float ptr [EAX + 0x8]          ; 0043f2e7
    LEA EAX,[ESI + 0x20]                ; 0043f2ea
    FSTP float ptr [ESP + 0x48]         ; 0043f2ed
    PUSH ESI                            ; 0043f2f1
    FLD float ptr [EAX]                 ; 0043f2f2
    FADD float ptr [ESP + 0x44]         ; 0043f2f4
    FLD float ptr [EAX + 0x4]           ; 0043f2f8
    FXCH                                ; 0043f2fb
    FSTP float ptr [EAX]                ; 0043f2fd
    FADD float ptr [ESP + 0x48]         ; 0043f2ff
    FLD float ptr [EAX + 0x8]           ; 0043f303
    FXCH                                ; 0043f306
    FSTP float ptr [EAX + 0x4]          ; 0043f308
    FADD float ptr [ESP + 0x4c]         ; 0043f30b
    PUSH EDI                            ; 0043f30f
    FSTP float ptr [EAX + 0x8]          ; 0043f310
    CALL core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290 ; 0043f313
        ;   XREF to: 0043e290 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 0043f318
    JMP 0x0043ef26                      ; 0043f31b
        ;   XREF to: 0043ef26 (UNCONDITIONAL_JUMP)  ; LAB_0043ef26
    PUSH EBX                            ; 0043f320
        ;   Label: LAB_0043f320
    PUSH EDI                            ; 0043f321
    CALL core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290 ; 0043f322
        ;   XREF to: 0043e290 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 0043f327
    JMP 0x0043ef75                      ; 0043f32a
        ;   XREF to: 0043ef75 (UNCONDITIONAL_JUMP)  ; LAB_0043ef75

