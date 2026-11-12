; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[14]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_00414fd0 at 00415321
;   core_boneguy.cpp_CBoneGuy_explode_FUN_00419550 at 004196ce
;   core_carved.cpp_FUN_00428810 at 00428a32
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 at 0043057d
;   core_construc.cpp_FUN_00444110 at 00444252
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00445730 at 004458bc
;   core_demnfolk.cpp_FUN_00458680 at 0045881f
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004c5f10 at 004c6096
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c9140 at 004c92df
;   core_imp.cpp_CImp_processDismemberment_FUN_004d7bd0 at 004d7d74
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005b6c7a
;   undefined4 DAT_005b6c82
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330
;   core_bodypart.cpp_FUN_00414910
;   core_bodypart.cpp_FUN_00416970
;   core_dirmat.cpp_FUN_0045b870
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_memset_FUN_005a28f0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004157c0
        ;   Label: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
    PUSH ESI                            ; 004157c1
    PUSH EDI                            ; 004157c2
    PUSH EBP                            ; 004157c3
    MOV EBP,ESP                         ; 004157c4
    SUB ESP,0xb8                        ; 004157c6
    AND ESP,0xfffffff8                  ; 004157cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004157cf
    CMP dword ptr [EBX + 0x174],0x3     ; 004157d2
    JL 0x004157e4                       ; 004157d9
        ;   XREF to: 004157e4 (CONDITIONAL_JUMP)  ; LAB_004157e4
    CMP dword ptr [EBX + 0x180],0x1     ; 004157db
    JGE 0x00415844                      ; 004157e2
        ;   XREF to: 00415844 (CONDITIONAL_JUMP)  ; LAB_00415844
    PUSH 0x0                            ; 004157e4
        ;   Label: LAB_004157e4
    PUSH 0x0                            ; 004157e6
    PUSH EBX                            ; 004157e8
    MOV dword ptr [EBX + 0x70],0x2      ; 004157e9
    CALL core_bodypart.cpp_FUN_00414910 ; 004157f0
        ;   XREF to: 00414910 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00414910()
    LEA EAX,[EBX + 0x168]               ; 004157f5
    ADD ESP,0xc                         ; 004157fb
    MOV EDX,EAX                         ; 004157fe
    CMP EAX,0x2cfd900                   ; 00415800
    JZ 0x00415821                       ; 00415805
        ;   XREF to: 00415821 (CONDITIONAL_JUMP)  ; LAB_00415821
    MOV ECX,dword ptr [0x02cfd900]      ; 00415807 | DAT_02cfd900
    MOV dword ptr [EAX],ECX             ; 0041580d
    MOV ECX,dword ptr [0x02cfd904]      ; 0041580f | DAT_02cfd904
    MOV dword ptr [EAX + 0x4],ECX       ; 00415815
    MOV ECX,dword ptr [0x02cfd908]      ; 00415818 | DAT_02cfd908
    MOV dword ptr [EAX + 0x8],ECX       ; 0041581e
    ADD EBX,0x15c                       ; 00415821
        ;   Label: LAB_00415821
    CMP EBX,EDX                         ; 00415827
    JNZ 0x00415832                      ; 00415829
        ;   XREF to: 00415832 (CONDITIONAL_JUMP)  ; LAB_00415832
    MOV ESP,EBP                         ; 0041582b
        ;   Label: LAB_0041582b
    POP EBP                             ; 0041582d
    POP EDI                             ; 0041582e
    POP ESI                             ; 0041582f
    POP EBX                             ; 00415830
    RET                                 ; 00415831
    MOV EAX,dword ptr [EDX]             ; 00415832
        ;   Label: LAB_00415832
    MOV dword ptr [EBX],EAX             ; 00415834
    MOV EAX,dword ptr [EDX + 0x4]       ; 00415836
    MOV dword ptr [EBX + 0x4],EAX       ; 00415839
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041583c
    MOV dword ptr [EBX + 0x8],EAX       ; 0041583f
    JMP 0x0041582b                      ; 00415842
        ;   XREF to: 0041582b (UNCONDITIONAL_JUMP)  ; LAB_0041582b
    LEA EAX,[ESP + 0x4c]                ; 00415844
        ;   Label: LAB_00415844
    PUSH EAX                            ; 00415848
    LEA EAX,[ESP + 0x74]                ; 00415849
    PUSH EAX                            ; 0041584d
    PUSH EBX                            ; 0041584e
    CALL core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330 ; 0041584f
        ;   XREF to: 00416330 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330(CBodyPart * this_ptr, CVector3i * out_bbox_min, CVector3i * out_bbox_max)
    ADD ESP,0xc                         ; 00415854
    MOV EDX,dword ptr [ESP + 0x70]      ; 00415857
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0041585b
    ADD EDX,ESI                         ; 0041585f
    MOV EAX,EDX                         ; 00415861
    SAR EDX,0x1f                        ; 00415863
    SUB EAX,EDX                         ; 00415866
    SAR EAX,0x1                         ; 00415868
    MOV EDX,dword ptr [ESP + 0x74]      ; 0041586a
    MOV EDI,EAX                         ; 0041586e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00415870
    ADD EDX,EAX                         ; 00415874
    MOV EAX,EDX                         ; 00415876
    SAR EDX,0x1f                        ; 00415878
    SUB EAX,EDX                         ; 0041587b
    SAR EAX,0x1                         ; 0041587d
    MOV EDX,EAX                         ; 0041587f
    MOV dword ptr [ESP + 0x24],EAX      ; 00415881
    NEG EDX                             ; 00415885
    MOV ECX,dword ptr [ESP + 0x54]      ; 00415887
    MOV dword ptr [ESP + 0x24],EDX      ; 0041588b
    MOV EDX,dword ptr [ESP + 0x78]      ; 0041588f
    ADD EDX,ECX                         ; 00415893
    MOV EAX,EDX                         ; 00415895
    SAR EDX,0x1f                        ; 00415897
    SUB EAX,EDX                         ; 0041589a
    SAR EAX,0x1                         ; 0041589c
    NEG EDI                             ; 0041589e
    MOV dword ptr [ESP + 0x20],EAX      ; 004158a0
    MOV ESI,EAX                         ; 004158a4
    XOR EDX,EDX                         ; 004158a6
    NEG ESI                             ; 004158a8
    MOV EAX,dword ptr [EBX + 0x174]     ; 004158aa
    MOV dword ptr [ESP + 0x20],ESI      ; 004158b0
    TEST EAX,EAX                        ; 004158b4
    JLE 0x004158f0                      ; 004158b6
        ;   XREF to: 004158f0 (CONDITIONAL_JUMP)  ; LAB_004158f0
    XOR ESI,ESI                         ; 004158b8
    MOV EAX,dword ptr [EBX + 0x178]     ; 004158ba
        ;   Label: LAB_004158ba
    ADD dword ptr [ESI + EAX*0x1],EDI   ; 004158c0
    MOV ECX,dword ptr [ESP + 0x24]      ; 004158c3
    ADD dword ptr [ESI + EAX*0x1 + 0x4],ECX ; 004158c7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004158cb
    ADD dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 004158cf
    INC EDX                             ; 004158d3
    MOV EAX,dword ptr [EBX + 0x174]     ; 004158d4
    ADD ESI,0xc                         ; 004158da
    CMP EDX,EAX                         ; 004158dd
    JL 0x004158ba                       ; 004158df
        ;   XREF to: 004158ba (CONDITIONAL_JUMP)  ; LAB_004158ba
    LEA EAX,[EAX]                       ; 004158e1
    LEA EDX,[EDX]                       ; 004158e7
    LEA EAX,[EAX]                       ; 004158ed
    MOV EDX,dword ptr [ESP + 0x70]      ; 004158f0
        ;   Label: LAB_004158f0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004158f4
    MOV ECX,dword ptr [ESP + 0x74]      ; 004158f8
    MOV ESI,dword ptr [ESP + 0x78]      ; 004158fc
    ADD EDX,EDI                         ; 00415900
    ADD ECX,EAX                         ; 00415902
    MOV EAX,dword ptr [ESP + 0x20]      ; 00415904
    MOV dword ptr [ESP + 0x70],EDX      ; 00415908
    ADD ESI,EAX                         ; 0041590c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041590e
    MOV dword ptr [ESP + 0x74],ECX      ; 00415912
    ADD EAX,EDI                         ; 00415916
    MOV EDX,dword ptr [ESP + 0x50]      ; 00415918
    MOV dword ptr [ESP + 0x4c],EAX      ; 0041591c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00415920
    MOV ECX,dword ptr [ESP + 0x54]      ; 00415924
    ADD EDX,EAX                         ; 00415928
    ADD ECX,dword ptr [ESP + 0x20]      ; 0041592a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041592e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00415932
    FLD double ptr [0x005b6c7a]         ; 00415939 | DAT_005b6c7a
    FILD dword ptr [ESP + 0xb0]         ; 0041593f
    FMUL ST1                            ; 00415946
    MOV dword ptr [ESP + 0x78],ESI      ; 00415948
    MOV dword ptr [ESP + 0x50],EDX      ; 0041594c
    MOV dword ptr [ESP + 0x54],ECX      ; 00415950
    FSTP float ptr [EBX + 0x15c]        ; 00415954
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041595a
    MOV dword ptr [ESP + 0xb0],EAX      ; 0041595e
    FILD dword ptr [ESP + 0xb0]         ; 00415965
    FMUL ST1                            ; 0041596c
    FSTP float ptr [EBX + 0x160]        ; 0041596e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00415974
    MOV dword ptr [ESP + 0xb0],EAX      ; 00415978
    FILD dword ptr [ESP + 0xb0]         ; 0041597f
    FMUL ST1                            ; 00415986
    FSTP float ptr [EBX + 0x164]        ; 00415988
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041598e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00415992
    FILD dword ptr [ESP + 0xb0]         ; 00415999
    FMUL ST1                            ; 004159a0
    FSTP float ptr [EBX + 0x168]        ; 004159a2
    MOV EAX,dword ptr [ESP + 0x50]      ; 004159a8
    MOV dword ptr [ESP + 0xb0],EAX      ; 004159ac
    MOV dword ptr [ESP + 0xb4],EDI      ; 004159b3
    FILD dword ptr [ESP + 0xb0]         ; 004159ba
    FMUL ST1                            ; 004159c1
    FILD dword ptr [ESP + 0xb4]         ; 004159c3
    FMUL ST2                            ; 004159ca
    FXCH                                ; 004159cc
    FSTP float ptr [EBX + 0x16c]        ; 004159ce
    MOV EAX,dword ptr [ESP + 0x54]      ; 004159d4
    MOV dword ptr [ESP + 0xb4],EAX      ; 004159d8
    FILD dword ptr [ESP + 0xb4]         ; 004159df
    MOV EAX,dword ptr [ESP + 0x20]      ; 004159e6
    FMUL ST2                            ; 004159ea
    MOV dword ptr [ESP + 0xb4],EAX      ; 004159ec
    MOV EAX,dword ptr [ESP + 0x24]      ; 004159f3
    FILD dword ptr [ESP + 0xb4]         ; 004159f7
    MOV dword ptr [ESP + 0xb4],EAX      ; 004159fe
    FMUL ST3                            ; 00415a05
    FILD dword ptr [ESP + 0xb4]         ; 00415a07
    FMULP ST4                           ; 00415a0e
    FXCH                                ; 00415a10
    FSTP float ptr [EBX + 0x170]        ; 00415a12
    FXCH ST2                            ; 00415a18
    FSTP float ptr [ESP + 0xb0]         ; 00415a1a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00415a21
    FXCH                                ; 00415a28
    FSTP float ptr [ESP + 0xb0]         ; 00415a2a
    MOV dword ptr [ESP + 0x80],EAX      ; 00415a31
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00415a38
    MOV dword ptr [ESP + 0x84],EAX      ; 00415a3f
    LEA EAX,[ESP + 0x7c]                ; 00415a46
    PUSH EAX                            ; 00415a4a
    LEA ESI,[ESP + 0x2c]                ; 00415a4b
    LEA EDI,[ESP + 0x38]                ; 00415a4f
    PUSH EBX                            ; 00415a53
    FSTP float ptr [ESP + 0x84]         ; 00415a54
    CALL core_actor.cpp_FUN_00408b00    ; 00415a5b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x30]                ; 00415a60
    ADD ESP,0x8                         ; 00415a64
    LEA EAX,[EBX + 0x20]                ; 00415a67
    MOVSD ES:EDI,ESI                    ; 00415a6a
    MOVSD ES:EDI,ESI                    ; 00415a6b
    MOVSD ES:EDI,ESI                    ; 00415a6c
    FLD float ptr [EAX]                 ; 00415a6d
    FLD float ptr [EAX + 0x4]           ; 00415a6f
    FLD float ptr [EAX + 0x8]           ; 00415a72
    FXCH ST2                            ; 00415a75
    FSUB float ptr [ESP + 0x34]         ; 00415a77
    FXCH                                ; 00415a7b
    FSUB float ptr [ESP + 0x38]         ; 00415a7d
    FXCH ST2                            ; 00415a81
    FSUB float ptr [ESP + 0x3c]         ; 00415a83
    FXCH                                ; 00415a87
    FSTP float ptr [EAX]                ; 00415a89
    FXCH                                ; 00415a8b
    FSTP float ptr [EAX + 0x4]          ; 00415a8d
    FSTP float ptr [EAX + 0x8]          ; 00415a90
    MOV ESI,dword ptr [EBX + 0x28c]     ; 00415a93
    XOR EDX,EDX                         ; 00415a99
    TEST ESI,ESI                        ; 00415a9b
    JLE 0x00415ae0                      ; 00415a9d
        ;   XREF to: 00415ae0 (CONDITIONAL_JUMP)  ; LAB_00415ae0
    LEA EAX,[EBX + 0x290]               ; 00415a9f
    FLD float ptr [EAX]                 ; 00415aa5
        ;   Label: LAB_00415aa5
    FADD float ptr [ESP + 0x7c]         ; 00415aa7
    FLD float ptr [EAX + 0x4]           ; 00415aab
    FXCH                                ; 00415aae
    FSTP float ptr [EAX]                ; 00415ab0
    FADD float ptr [ESP + 0x80]         ; 00415ab2
    FLD float ptr [EAX + 0x8]           ; 00415ab9
    FXCH                                ; 00415abc
    FSTP float ptr [EAX + 0x4]          ; 00415abe
    FADD float ptr [ESP + 0x84]         ; 00415ac1
    INC EDX                             ; 00415ac8
    FSTP float ptr [EAX + 0x8]          ; 00415ac9
    MOV EDI,dword ptr [EBX + 0x28c]     ; 00415acc
    ADD EAX,0x194                       ; 00415ad2
    CMP EDX,EDI                         ; 00415ad7
    JL 0x00415aa5                       ; 00415ad9
        ;   XREF to: 00415aa5 (CONDITIONAL_JUMP)  ; LAB_00415aa5
    LEA EAX,[EAX]                       ; 00415adb
    MOV ECX,ECX                         ; 00415ade
    XOR EAX,EAX                         ; 00415ae0
        ;   Label: LAB_00415ae0
    MOV EDX,dword ptr [EBX + 0x74c]     ; 00415ae2
    MOV dword ptr [ESP + 0xa8],EAX      ; 00415ae8
    TEST EDX,EDX                        ; 00415aef
    JLE 0x00415bc0                      ; 00415af1
        ;   XREF to: 00415bc0 (CONDITIONAL_JUMP)  ; LAB_00415bc0
    LEA EAX,[EBX + 0x750]               ; 00415af7
    MOV dword ptr [ESP + 0x9c],EAX      ; 00415afd
    LEA EAX,[EBX + 0x77c]               ; 00415b04
    MOV dword ptr [ESP + 0xac],EAX      ; 00415b0a
    IMUL EAX,dword ptr [ESP + 0xa8],0x2b0 ; 00415b11
        ;   Label: LAB_00415b11
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00415b1c
    LEA EDI,[ESP + 0x88]                ; 00415b23
    FLD float ptr [EAX]                 ; 00415b2a
    FLD float ptr [EAX + 0x4]           ; 00415b2c
    FLD float ptr [EAX + 0x8]           ; 00415b2f
    FXCH ST2                            ; 00415b32
    FADD float ptr [ESP + 0x7c]         ; 00415b34
    LEA ESI,[ESP + 0x64]                ; 00415b38
    FSTP float ptr [EAX]                ; 00415b3c
    FADD float ptr [ESP + 0x80]         ; 00415b3e
    PUSH EAX                            ; 00415b45
    FSTP float ptr [EAX + 0x4]          ; 00415b46
    FADD float ptr [ESP + 0x88]         ; 00415b49
    PUSH EBX                            ; 00415b50
    FSTP float ptr [EAX + 0x8]          ; 00415b51
    CALL core_actor.cpp_FUN_00408b80    ; 00415b54
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x6c]                ; 00415b59
    ADD ESP,0x8                         ; 00415b5d
    MOVSD ES:EDI,ESI                    ; 00415b60
    MOVSD ES:EDI,ESI                    ; 00415b61
    MOVSD ES:EDI,ESI                    ; 00415b62
    MOV EDX,dword ptr [ESP + 0xac]      ; 00415b63
    MOV EAX,dword ptr [ESP + 0x88]      ; 00415b6a
    MOV dword ptr [EDX],EAX             ; 00415b71
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00415b73
    MOV dword ptr [EDX + 0x4],EAX       ; 00415b7a
    MOV EAX,dword ptr [ESP + 0x90]      ; 00415b7d
    LEA EDI,[EDX + 0x2b0]               ; 00415b84
    MOV dword ptr [EDX + 0x8],EAX       ; 00415b8a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00415b8d
    MOV dword ptr [ESP + 0xac],EDI      ; 00415b94
    INC EAX                             ; 00415b9b
    MOV EDX,dword ptr [EBX + 0x74c]     ; 00415b9c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00415ba2
    CMP EAX,EDX                         ; 00415ba9
    JL 0x00415b11                       ; 00415bab
        ;   XREF to: 00415b11 (CONDITIONAL_JUMP)  ; LAB_00415b11
    LEA EAX,[EAX]                       ; 00415bb1
    LEA EDX,[EDX]                       ; 00415bb7
    LEA EAX,[EAX]                       ; 00415bbd
    MOV EDX,dword ptr [EBX + 0x174]     ; 00415bc0
        ;   Label: LAB_00415bc0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00415bc6
    SUB EAX,EDX                         ; 00415bcd
    SHL EAX,0x2                         ; 00415bcf
    PUSH EAX                            ; 00415bd2
    PUSH 0x0                            ; 00415bd3
    MOV ECX,dword ptr [EBX + 0x17c]     ; 00415bd5
    PUSH ECX                            ; 00415bdb
    XOR ESI,ESI                         ; 00415bdc
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00415bde
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00415be3
    MOV EDI,dword ptr [EBX + 0x180]     ; 00415be6
    MOV dword ptr [ESP + 0xa4],ESI      ; 00415bec
    TEST EDI,EDI                        ; 00415bf3
    JLE 0x00415c89                      ; 00415bf5
        ;   XREF to: 00415c89 (CONDITIONAL_JUMP)  ; LAB_00415c89
    MOV dword ptr [ESP + 0xa0],ESI      ; 00415bfb
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00415c02
        ;   Label: LAB_00415c02
    MOV ESI,dword ptr [EBX + 0x184]     ; 00415c09
    ADD ESI,EAX                         ; 00415c0f
    MOV dword ptr [ESI + 0x4],0x3       ; 00415c11
    PUSH ESI                            ; 00415c18
    MOV EDX,dword ptr [EBX + 0x178]     ; 00415c19
    PUSH EDX                            ; 00415c1f
    XOR EDI,EDI                         ; 00415c20
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0 ; 00415c22
        ;   XREF to: 004dece0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0()
    MOV ECX,dword ptr [ESI + 0x4]       ; 00415c27
    ADD ESP,0x8                         ; 00415c2a
    TEST ECX,ECX                        ; 00415c2d
    JLE 0x00415c5b                      ; 00415c2f
        ;   XREF to: 00415c5b (CONDITIONAL_JUMP)  ; LAB_00415c5b
    MOV EDX,ESI                         ; 00415c31
    IMUL ECX,dword ptr [EDX + 0x18],0xc ; 00415c33
        ;   Label: LAB_00415c33
    MOV EAX,dword ptr [EBX + 0x17c]     ; 00415c37
    ADD EAX,ECX                         ; 00415c3d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00415c3f
    ADD dword ptr [EAX],ECX             ; 00415c42
    MOV ECX,dword ptr [ESI + 0xc]       ; 00415c44
    ADD dword ptr [EAX + 0x4],ECX       ; 00415c47
    MOV ECX,dword ptr [ESI + 0x10]      ; 00415c4a
    ADD dword ptr [EAX + 0x8],ECX       ; 00415c4d
    INC EDI                             ; 00415c50
    MOV ECX,dword ptr [ESI + 0x4]       ; 00415c51
    ADD EDX,0xc                         ; 00415c54
    CMP EDI,ECX                         ; 00415c57
    JL 0x00415c33                       ; 00415c59
        ;   XREF to: 00415c33 (CONDITIONAL_JUMP)  ; LAB_00415c33
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00415c5b
        ;   Label: LAB_00415c5b
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00415c62
    MOV ECX,dword ptr [EBX + 0x180]     ; 00415c69
    ADD EAX,0x3c                        ; 00415c6f
    INC EDX                             ; 00415c72
    MOV dword ptr [ESP + 0xa0],EAX      ; 00415c73
    MOV dword ptr [ESP + 0xa4],EDX      ; 00415c7a
    CMP EDX,ECX                         ; 00415c81
    JL 0x00415c02                       ; 00415c83
        ;   XREF to: 00415c02 (CONDITIONAL_JUMP)  ; LAB_00415c02
    MOV ESI,dword ptr [EBX + 0x174]     ; 00415c89
        ;   Label: LAB_00415c89
    XOR EDI,EDI                         ; 00415c8f
    TEST ESI,ESI                        ; 00415c91
    JLE 0x00415d2e                      ; 00415c93
        ;   XREF to: 00415d2e (CONDITIONAL_JUMP)  ; LAB_00415d2e
    XOR ESI,ESI                         ; 00415c99
    MOV EDX,dword ptr [EBX + 0x17c]     ; 00415c9b
        ;   Label: LAB_00415c9b
    ADD EDX,ESI                         ; 00415ca1
    FILD dword ptr [EDX]                ; 00415ca3
    FST double ptr [ESP + 0x18]         ; 00415ca5
    FMUL double ptr [ESP + 0x18]        ; 00415ca9
    FILD dword ptr [EDX + 0x4]          ; 00415cad
    FST double ptr [ESP + 0x8]          ; 00415cb0
    FMUL double ptr [ESP + 0x8]         ; 00415cb4
    FILD dword ptr [EDX + 0x8]          ; 00415cb8
    FXCH                                ; 00415cbb
    FADDP ST2,ST0                       ; 00415cbd
    FST double ptr [ESP + 0x10]         ; 00415cbf
    FMUL double ptr [ESP + 0x10]        ; 00415cc3
    FADDP                               ; 00415cc7
    FSQRT                               ; 00415cc9
    FLDZ                                ; 00415ccb
    FXCH                                ; 00415ccd
    FSTP double ptr [ESP]               ; 00415ccf
    FCOMP double ptr [ESP]              ; 00415cd2
    FNSTSW AX                           ; 00415cd5
    SAHF                                ; 00415cd7
    JNC 0x00415e17                      ; 00415cd8
        ;   XREF to: 00415e17 (CONDITIONAL_JUMP)  ; LAB_00415e17
    FLD double ptr [ESP + 0x18]         ; 00415cde
    FLD double ptr [0x005b6c82]         ; 00415ce2 | DAT_005b6c82
    FDIV double ptr [ESP]               ; 00415ce8
    FXCH                                ; 00415ceb
    FMUL ST1                            ; 00415ced
    FLD double ptr [ESP + 0x8]          ; 00415cef
    FMUL ST2                            ; 00415cf3
    FLD double ptr [ESP + 0x10]         ; 00415cf5
    FMULP ST3                           ; 00415cf9
    FXCH                                ; 00415cfb
    CALL crt_math.c_round_FUN_005a3120  ; 00415cfd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00415d02
    CALL crt_math.c_round_FUN_005a3120  ; 00415d04
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00415d09
    CALL crt_math.c_round_FUN_005a3120  ; 00415d0b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00415d10
    FISTP dword ptr [EDX]               ; 00415d12
    FXCH                                ; 00415d14
    FISTP dword ptr [EDX + 0x4]         ; 00415d16
    FISTP dword ptr [EDX + 0x8]         ; 00415d19
    INC EDI                             ; 00415d1c
        ;   Label: LAB_00415d1c
    MOV EAX,dword ptr [EBX + 0x174]     ; 00415d1d
    ADD ESI,0xc                         ; 00415d23
    CMP EDI,EAX                         ; 00415d26
    JL 0x00415c9b                       ; 00415d28
        ;   XREF to: 00415c9b (CONDITIONAL_JUMP)  ; LAB_00415c9b
    PUSH EBX                            ; 00415d2e
        ;   Label: LAB_00415d2e
    CALL core_bodypart.cpp_FUN_00416970 ; 00415d2f
        ;   XREF to: 00416970 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416970()
    LEA EDX,[EBX + 0xd10]               ; 00415d34
    LEA EAX,[EBX + 0x280]               ; 00415d3a
    ADD ESP,0x4                         ; 00415d40
    CMP EDX,EAX                         ; 00415d43
    JZ 0x00415d57                       ; 00415d45
        ;   XREF to: 00415d57 (CONDITIONAL_JUMP)  ; LAB_00415d57
    MOV ECX,dword ptr [EAX]             ; 00415d47
    MOV dword ptr [EDX],ECX             ; 00415d49
    MOV ECX,dword ptr [EAX + 0x4]       ; 00415d4b
    MOV dword ptr [EDX + 0x4],ECX       ; 00415d4e
    MOV ECX,dword ptr [EAX + 0x8]       ; 00415d51
    MOV dword ptr [EDX + 0x8],ECX       ; 00415d54
    LEA EAX,[EBX + 0x280]               ; 00415d57
        ;   Label: LAB_00415d57
    PUSH EAX                            ; 00415d5d
    LEA EAX,[EBX + 0xce8]               ; 00415d5e
    PUSH EAX                            ; 00415d64
    LEA ESI,[ESP + 0x48]                ; 00415d65
    LEA EDI,[ESP + 0x60]                ; 00415d69
    CALL core_dirmat.cpp_FUN_0045b870   ; 00415d6d
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x48]                ; 00415d72
    LEA EAX,[ESP + 0x60]                ; 00415d76
    ADD ESP,0x8                         ; 00415d7a
    LEA EDX,[EBX + 0xd1c]               ; 00415d7d
    MOVSD ES:EDI,ESI                    ; 00415d83
    MOVSD ES:EDI,ESI                    ; 00415d84
    MOVSD ES:EDI,ESI                    ; 00415d85
    CMP EDX,EAX                         ; 00415d86
    JZ 0x00415d9e                       ; 00415d88
        ;   XREF to: 00415d9e (CONDITIONAL_JUMP)  ; LAB_00415d9e
    MOV EAX,dword ptr [ESP + 0x58]      ; 00415d8a
    MOV dword ptr [EDX],EAX             ; 00415d8e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00415d90
    MOV dword ptr [EDX + 0x4],EAX       ; 00415d94
    MOV EAX,dword ptr [ESP + 0x60]      ; 00415d97
    MOV dword ptr [EDX + 0x8],EAX       ; 00415d9b
    PUSH 0x40490fdb                     ; 00415d9e
        ;   Label: LAB_00415d9e
    PUSH 0xc0490fdb                     ; 00415da3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00415da8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xbc],EAX      ; 00415dad
    FLD float ptr [ESP + 0xbc]          ; 00415db4
    ADD ESP,0x8                         ; 00415dbb
    PUSH 0x40490fdb                     ; 00415dbe
    PUSH 0xc0490fdb                     ; 00415dc3
    FSTP float ptr [EBX + 0xd40]        ; 00415dc8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00415dce
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xbc],EAX      ; 00415dd3
    FLD float ptr [ESP + 0xbc]          ; 00415dda
    ADD ESP,0x8                         ; 00415de1
    PUSH 0x4116cbe4                     ; 00415de4
    PUSH 0xc116cbe4                     ; 00415de9
    FSTP float ptr [EBX + 0xd48]        ; 00415dee
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00415df4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xbc],EAX      ; 00415df9
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00415e00
    MOV dword ptr [EBX + 0xd44],EAX     ; 00415e07
    ADD ESP,0x8                         ; 00415e0d
    MOV ESP,EBP                         ; 00415e10
    POP EBP                             ; 00415e12
    POP EDI                             ; 00415e13
    POP ESI                             ; 00415e14
    POP EBX                             ; 00415e15
    RET                                 ; 00415e16
    MOV dword ptr [EDX + 0x8],0x0       ; 00415e17
        ;   Label: LAB_00415e17
    MOV EAX,dword ptr [EDX + 0x8]       ; 00415e1e
    MOV dword ptr [EDX + 0x4],EAX       ; 00415e21
    MOV dword ptr [EDX],EAX             ; 00415e24
    JMP 0x00415d1c                      ; 00415e26
        ;   XREF to: 00415d1c (UNCONDITIONAL_JUMP)  ; LAB_00415d1c

