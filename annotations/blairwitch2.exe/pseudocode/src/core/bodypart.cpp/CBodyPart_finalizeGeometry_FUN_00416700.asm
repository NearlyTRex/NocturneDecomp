; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart *this_ptr)
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
; XREF[17]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412500 at 00412727
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 at 004140e4
;   core_bodypart.cpp_CBodyPart_archive_FUN_00415f50 at 00416281
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0 at 0041a1fe
;   core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0 at 0041e9d2
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 at 004277cd
;   core_construc.cpp_FUN_00438060 at 004381ae
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0 at 00439a3c
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00464a00 at 00464a5c
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004c0c00 at 004c0d86
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_005cbf5a
;   undefined4 DAT_005cbf62
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417270
;   core_bodypart.cpp_FUN_00415890
;   core_bodypart.cpp_FUN_004178c0
;   core_dirmat.cpp_FUN_004495a0
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_memset_FUN_005b77c0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416700
        ;   Label: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
    PUSH ESI                            ; 00416701
    PUSH EDI                            ; 00416702
    PUSH EBP                            ; 00416703
    MOV EBP,ESP                         ; 00416704
    SUB ESP,0xb8                        ; 00416706
    AND ESP,0xfffffff8                  ; 0041670c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041670f
    CMP dword ptr [EBX + 0x2d0],0x3     ; 00416712
    JL 0x00416724                       ; 00416719
        ;   XREF to: 00416724 (CONDITIONAL_JUMP)  ; LAB_00416724
    CMP dword ptr [EBX + 0x2dc],0x1     ; 0041671b
    JGE 0x00416784                      ; 00416722
        ;   XREF to: 00416784 (CONDITIONAL_JUMP)  ; LAB_00416784
    PUSH 0x0                            ; 00416724
        ;   Label: LAB_00416724
    PUSH 0x0                            ; 00416726
    PUSH EBX                            ; 00416728
    MOV dword ptr [EBX + 0x70],0x2      ; 00416729
    CALL core_bodypart.cpp_FUN_00415890 ; 00416730
        ;   XREF to: 00415890 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00415890()
    LEA EAX,[EBX + 0x2c4]               ; 00416735
    ADD ESP,0xc                         ; 0041673b
    MOV EDX,EAX                         ; 0041673e
    CMP EAX,0x265370c                   ; 00416740
    JZ 0x00416761                       ; 00416745
        ;   XREF to: 00416761 (CONDITIONAL_JUMP)  ; LAB_00416761
    MOV ECX,dword ptr [0x0265370c]      ; 00416747 | DAT_0265370c
    MOV dword ptr [EAX],ECX             ; 0041674d
    MOV ECX,dword ptr [0x02653710]      ; 0041674f | DAT_02653710
    MOV dword ptr [EAX + 0x4],ECX       ; 00416755
    MOV ECX,dword ptr [0x02653714]      ; 00416758 | DAT_02653714
    MOV dword ptr [EAX + 0x8],ECX       ; 0041675e
    ADD EBX,0x2b8                       ; 00416761
        ;   Label: LAB_00416761
    CMP EBX,EDX                         ; 00416767
    JNZ 0x00416772                      ; 00416769
        ;   XREF to: 00416772 (CONDITIONAL_JUMP)  ; LAB_00416772
    MOV ESP,EBP                         ; 0041676b
        ;   Label: LAB_0041676b
    POP EBP                             ; 0041676d
    POP EDI                             ; 0041676e
    POP ESI                             ; 0041676f
    POP EBX                             ; 00416770
    RET                                 ; 00416771
    MOV EAX,dword ptr [EDX]             ; 00416772
        ;   Label: LAB_00416772
    MOV dword ptr [EBX],EAX             ; 00416774
    MOV EAX,dword ptr [EDX + 0x4]       ; 00416776
    MOV dword ptr [EBX + 0x4],EAX       ; 00416779
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041677c
    MOV dword ptr [EBX + 0x8],EAX       ; 0041677f
    JMP 0x0041676b                      ; 00416782
        ;   XREF to: 0041676b (UNCONDITIONAL_JUMP)  ; LAB_0041676b
    LEA EAX,[ESP + 0x4c]                ; 00416784
        ;   Label: LAB_00416784
    PUSH EAX                            ; 00416788
    LEA EAX,[ESP + 0x74]                ; 00416789
    PUSH EAX                            ; 0041678d
    PUSH EBX                            ; 0041678e
    CALL core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417270 ; 0041678f
        ;   XREF to: 00417270 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417270(CBodyPart * this_ptr, CVector3i * out_bbox_min, CVector3i * out_bbox_max)
    ADD ESP,0xc                         ; 00416794
    MOV EDX,dword ptr [ESP + 0x70]      ; 00416797
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0041679b
    ADD EDX,ESI                         ; 0041679f
    MOV EAX,EDX                         ; 004167a1
    SAR EDX,0x1f                        ; 004167a3
    SUB EAX,EDX                         ; 004167a6
    SAR EAX,0x1                         ; 004167a8
    MOV EDX,dword ptr [ESP + 0x74]      ; 004167aa
    MOV EDI,EAX                         ; 004167ae
    MOV EAX,dword ptr [ESP + 0x50]      ; 004167b0
    ADD EDX,EAX                         ; 004167b4
    MOV EAX,EDX                         ; 004167b6
    SAR EDX,0x1f                        ; 004167b8
    SUB EAX,EDX                         ; 004167bb
    SAR EAX,0x1                         ; 004167bd
    MOV EDX,EAX                         ; 004167bf
    MOV dword ptr [ESP + 0x24],EAX      ; 004167c1
    NEG EDX                             ; 004167c5
    MOV ECX,dword ptr [ESP + 0x54]      ; 004167c7
    MOV dword ptr [ESP + 0x24],EDX      ; 004167cb
    MOV EDX,dword ptr [ESP + 0x78]      ; 004167cf
    ADD EDX,ECX                         ; 004167d3
    MOV EAX,EDX                         ; 004167d5
    SAR EDX,0x1f                        ; 004167d7
    SUB EAX,EDX                         ; 004167da
    SAR EAX,0x1                         ; 004167dc
    NEG EDI                             ; 004167de
    MOV dword ptr [ESP + 0x20],EAX      ; 004167e0
    MOV ESI,EAX                         ; 004167e4
    XOR EDX,EDX                         ; 004167e6
    NEG ESI                             ; 004167e8
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 004167ea
    MOV dword ptr [ESP + 0x20],ESI      ; 004167f0
    TEST EAX,EAX                        ; 004167f4
    JLE 0x00416830                      ; 004167f6
        ;   XREF to: 00416830 (CONDITIONAL_JUMP)  ; LAB_00416830
    XOR ESI,ESI                         ; 004167f8
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 004167fa
        ;   Label: LAB_004167fa
    ADD dword ptr [ESI + EAX*0x1],EDI   ; 00416800
    MOV ECX,dword ptr [ESP + 0x24]      ; 00416803
    ADD dword ptr [ESI + EAX*0x1 + 0x4],ECX ; 00416807
    MOV ECX,dword ptr [ESP + 0x20]      ; 0041680b
    ADD dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 0041680f
    INC EDX                             ; 00416813
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 00416814
    ADD ESI,0xc                         ; 0041681a
    CMP EDX,EAX                         ; 0041681d
    JL 0x004167fa                       ; 0041681f
        ;   XREF to: 004167fa (CONDITIONAL_JUMP)  ; LAB_004167fa
    LEA EAX,[EAX]                       ; 00416821
    LEA EDX,[EDX]                       ; 00416827
    LEA EAX,[EAX]                       ; 0041682d
    MOV EDX,dword ptr [ESP + 0x70]      ; 00416830
        ;   Label: LAB_00416830
    MOV EAX,dword ptr [ESP + 0x24]      ; 00416834
    MOV ECX,dword ptr [ESP + 0x74]      ; 00416838
    MOV ESI,dword ptr [ESP + 0x78]      ; 0041683c
    ADD EDX,EDI                         ; 00416840
    ADD ECX,EAX                         ; 00416842
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416844
    MOV dword ptr [ESP + 0x70],EDX      ; 00416848
    ADD ESI,EAX                         ; 0041684c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041684e
    MOV dword ptr [ESP + 0x74],ECX      ; 00416852
    ADD EAX,EDI                         ; 00416856
    MOV EDX,dword ptr [ESP + 0x50]      ; 00416858
    MOV dword ptr [ESP + 0x4c],EAX      ; 0041685c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00416860
    MOV ECX,dword ptr [ESP + 0x54]      ; 00416864
    ADD EDX,EAX                         ; 00416868
    ADD ECX,dword ptr [ESP + 0x20]      ; 0041686a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041686e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00416872
    FLD double ptr [0x005cbf5a]         ; 00416879 | DAT_005cbf5a
    FILD dword ptr [ESP + 0xb0]         ; 0041687f
    FMUL ST1                            ; 00416886
    MOV dword ptr [ESP + 0x78],ESI      ; 00416888
    MOV dword ptr [ESP + 0x50],EDX      ; 0041688c
    MOV dword ptr [ESP + 0x54],ECX      ; 00416890
    FSTP float ptr [EBX + 0x2b8]        ; 00416894
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041689a
    MOV dword ptr [ESP + 0xb0],EAX      ; 0041689e
    FILD dword ptr [ESP + 0xb0]         ; 004168a5
    FMUL ST1                            ; 004168ac
    FSTP float ptr [EBX + 0x2bc]        ; 004168ae
    MOV EAX,dword ptr [ESP + 0x78]      ; 004168b4
    MOV dword ptr [ESP + 0xb0],EAX      ; 004168b8
    FILD dword ptr [ESP + 0xb0]         ; 004168bf
    FMUL ST1                            ; 004168c6
    FSTP float ptr [EBX + 0x2c0]        ; 004168c8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004168ce
    MOV dword ptr [ESP + 0xb0],EAX      ; 004168d2
    FILD dword ptr [ESP + 0xb0]         ; 004168d9
    FMUL ST1                            ; 004168e0
    FSTP float ptr [EBX + 0x2c4]        ; 004168e2
    MOV EAX,dword ptr [ESP + 0x50]      ; 004168e8
    MOV dword ptr [ESP + 0xb0],EAX      ; 004168ec
    MOV dword ptr [ESP + 0xb4],EDI      ; 004168f3
    FILD dword ptr [ESP + 0xb0]         ; 004168fa
    FMUL ST1                            ; 00416901
    FILD dword ptr [ESP + 0xb4]         ; 00416903
    FMUL ST2                            ; 0041690a
    FXCH                                ; 0041690c
    FSTP float ptr [EBX + 0x2c8]        ; 0041690e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00416914
    MOV dword ptr [ESP + 0xb4],EAX      ; 00416918
    FILD dword ptr [ESP + 0xb4]         ; 0041691f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416926
    FMUL ST2                            ; 0041692a
    MOV dword ptr [ESP + 0xb4],EAX      ; 0041692c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00416933
    FILD dword ptr [ESP + 0xb4]         ; 00416937
    MOV dword ptr [ESP + 0xb4],EAX      ; 0041693e
    FMUL ST3                            ; 00416945
    FILD dword ptr [ESP + 0xb4]         ; 00416947
    FMULP ST4                           ; 0041694e
    FXCH                                ; 00416950
    FSTP float ptr [EBX + 0x2cc]        ; 00416952
    FXCH ST2                            ; 00416958
    FSTP float ptr [ESP + 0xb0]         ; 0041695a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00416961
    FXCH                                ; 00416968
    FSTP float ptr [ESP + 0xb0]         ; 0041696a
    MOV dword ptr [ESP + 0x80],EAX      ; 00416971
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00416978
    MOV dword ptr [ESP + 0x84],EAX      ; 0041697f
    LEA EAX,[ESP + 0x7c]                ; 00416986
    PUSH EAX                            ; 0041698a
    LEA ESI,[ESP + 0x2c]                ; 0041698b
    LEA EDI,[ESP + 0x38]                ; 0041698f
    PUSH EBX                            ; 00416993
    FSTP float ptr [ESP + 0x84]         ; 00416994
    CALL core_actor.cpp_FUN_00408cf0    ; 0041699b
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x30]                ; 004169a0
    ADD ESP,0x8                         ; 004169a4
    LEA EAX,[EBX + 0x20]                ; 004169a7
    MOVSD ES:EDI,ESI                    ; 004169aa
    MOVSD ES:EDI,ESI                    ; 004169ab
    MOVSD ES:EDI,ESI                    ; 004169ac
    FLD float ptr [EAX]                 ; 004169ad
    FLD float ptr [EAX + 0x4]           ; 004169af
    FLD float ptr [EAX + 0x8]           ; 004169b2
    FXCH ST2                            ; 004169b5
    FSUB float ptr [ESP + 0x34]         ; 004169b7
    FXCH                                ; 004169bb
    FSUB float ptr [ESP + 0x38]         ; 004169bd
    FXCH ST2                            ; 004169c1
    FSUB float ptr [ESP + 0x3c]         ; 004169c3
    FXCH                                ; 004169c7
    FSTP float ptr [EAX]                ; 004169c9
    FXCH                                ; 004169cb
    FSTP float ptr [EAX + 0x4]          ; 004169cd
    FSTP float ptr [EAX + 0x8]          ; 004169d0
    MOV ESI,dword ptr [EBX + 0x3e8]     ; 004169d3
    XOR EDX,EDX                         ; 004169d9
    TEST ESI,ESI                        ; 004169db
    JLE 0x00416a20                      ; 004169dd
        ;   XREF to: 00416a20 (CONDITIONAL_JUMP)  ; LAB_00416a20
    LEA EAX,[EBX + 0x3ec]               ; 004169df
    FLD float ptr [EAX]                 ; 004169e5
        ;   Label: LAB_004169e5
    FADD float ptr [ESP + 0x7c]         ; 004169e7
    FLD float ptr [EAX + 0x4]           ; 004169eb
    FXCH                                ; 004169ee
    FSTP float ptr [EAX]                ; 004169f0
    FADD float ptr [ESP + 0x80]         ; 004169f2
    FLD float ptr [EAX + 0x8]           ; 004169f9
    FXCH                                ; 004169fc
    FSTP float ptr [EAX + 0x4]          ; 004169fe
    FADD float ptr [ESP + 0x84]         ; 00416a01
    INC EDX                             ; 00416a08
    FSTP float ptr [EAX + 0x8]          ; 00416a09
    MOV EDI,dword ptr [EBX + 0x3e8]     ; 00416a0c
    ADD EAX,0x194                       ; 00416a12
    CMP EDX,EDI                         ; 00416a17
    JL 0x004169e5                       ; 00416a19
        ;   XREF to: 004169e5 (CONDITIONAL_JUMP)  ; LAB_004169e5
    LEA EAX,[EAX]                       ; 00416a1b
    MOV ECX,ECX                         ; 00416a1e
    XOR EAX,EAX                         ; 00416a20
        ;   Label: LAB_00416a20
    MOV EDX,dword ptr [EBX + 0x8a8]     ; 00416a22
    MOV dword ptr [ESP + 0xa8],EAX      ; 00416a28
    TEST EDX,EDX                        ; 00416a2f
    JLE 0x00416b00                      ; 00416a31
        ;   XREF to: 00416b00 (CONDITIONAL_JUMP)  ; LAB_00416b00
    LEA EAX,[EBX + 0x8ac]               ; 00416a37
    MOV dword ptr [ESP + 0x9c],EAX      ; 00416a3d
    LEA EAX,[EBX + 0x8d8]               ; 00416a44
    MOV dword ptr [ESP + 0xac],EAX      ; 00416a4a
    IMUL EAX,dword ptr [ESP + 0xa8],0x40c ; 00416a51
        ;   Label: LAB_00416a51
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00416a5c
    LEA EDI,[ESP + 0x88]                ; 00416a63
    FLD float ptr [EAX]                 ; 00416a6a
    FLD float ptr [EAX + 0x4]           ; 00416a6c
    FLD float ptr [EAX + 0x8]           ; 00416a6f
    FXCH ST2                            ; 00416a72
    FADD float ptr [ESP + 0x7c]         ; 00416a74
    LEA ESI,[ESP + 0x64]                ; 00416a78
    FSTP float ptr [EAX]                ; 00416a7c
    FADD float ptr [ESP + 0x80]         ; 00416a7e
    PUSH EAX                            ; 00416a85
    FSTP float ptr [EAX + 0x4]          ; 00416a86
    FADD float ptr [ESP + 0x88]         ; 00416a89
    PUSH EBX                            ; 00416a90
    FSTP float ptr [EAX + 0x8]          ; 00416a91
    CALL core_actor.cpp_FUN_00408d70    ; 00416a94
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x6c]                ; 00416a99
    ADD ESP,0x8                         ; 00416a9d
    MOVSD ES:EDI,ESI                    ; 00416aa0
    MOVSD ES:EDI,ESI                    ; 00416aa1
    MOVSD ES:EDI,ESI                    ; 00416aa2
    MOV EDX,dword ptr [ESP + 0xac]      ; 00416aa3
    MOV EAX,dword ptr [ESP + 0x88]      ; 00416aaa
    MOV dword ptr [EDX],EAX             ; 00416ab1
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00416ab3
    MOV dword ptr [EDX + 0x4],EAX       ; 00416aba
    MOV EAX,dword ptr [ESP + 0x90]      ; 00416abd
    LEA EDI,[EDX + 0x40c]               ; 00416ac4
    MOV dword ptr [EDX + 0x8],EAX       ; 00416aca
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00416acd
    MOV dword ptr [ESP + 0xac],EDI      ; 00416ad4
    INC EAX                             ; 00416adb
    MOV EDX,dword ptr [EBX + 0x8a8]     ; 00416adc
    MOV dword ptr [ESP + 0xa8],EAX      ; 00416ae2
    CMP EAX,EDX                         ; 00416ae9
    JL 0x00416a51                       ; 00416aeb
        ;   XREF to: 00416a51 (CONDITIONAL_JUMP)  ; LAB_00416a51
    LEA EAX,[EAX]                       ; 00416af1
    LEA EDX,[EDX]                       ; 00416af7
    LEA EAX,[EAX]                       ; 00416afd
    MOV EDX,dword ptr [EBX + 0x2d0]     ; 00416b00
        ;   Label: LAB_00416b00
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416b06
    SUB EAX,EDX                         ; 00416b0d
    SHL EAX,0x2                         ; 00416b0f
    PUSH EAX                            ; 00416b12
    PUSH 0x0                            ; 00416b13
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 00416b15
    PUSH ECX                            ; 00416b1b
    XOR ESI,ESI                         ; 00416b1c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00416b1e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00416b23
    MOV EDI,dword ptr [EBX + 0x2dc]     ; 00416b26
    MOV dword ptr [ESP + 0xa4],ESI      ; 00416b2c
    TEST EDI,EDI                        ; 00416b33
    JLE 0x00416bc9                      ; 00416b35
        ;   XREF to: 00416bc9 (CONDITIONAL_JUMP)  ; LAB_00416bc9
    MOV dword ptr [ESP + 0xa0],ESI      ; 00416b3b
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00416b42
        ;   Label: LAB_00416b42
    MOV ESI,dword ptr [EBX + 0x2e0]     ; 00416b49
    ADD ESI,EAX                         ; 00416b4f
    MOV dword ptr [ESI + 0x4],0x3       ; 00416b51
    PUSH ESI                            ; 00416b58
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00416b59
    PUSH EDX                            ; 00416b5f
    XOR EDI,EDI                         ; 00416b60
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0 ; 00416b62
        ;   XREF to: 004df5f0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0()
    MOV ECX,dword ptr [ESI + 0x4]       ; 00416b67
    ADD ESP,0x8                         ; 00416b6a
    TEST ECX,ECX                        ; 00416b6d
    JLE 0x00416b9b                      ; 00416b6f
        ;   XREF to: 00416b9b (CONDITIONAL_JUMP)  ; LAB_00416b9b
    MOV EDX,ESI                         ; 00416b71
    IMUL ECX,dword ptr [EDX + 0x18],0xc ; 00416b73
        ;   Label: LAB_00416b73
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 00416b77
    ADD EAX,ECX                         ; 00416b7d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00416b7f
    ADD dword ptr [EAX],ECX             ; 00416b82
    MOV ECX,dword ptr [ESI + 0xc]       ; 00416b84
    ADD dword ptr [EAX + 0x4],ECX       ; 00416b87
    MOV ECX,dword ptr [ESI + 0x10]      ; 00416b8a
    ADD dword ptr [EAX + 0x8],ECX       ; 00416b8d
    INC EDI                             ; 00416b90
    MOV ECX,dword ptr [ESI + 0x4]       ; 00416b91
    ADD EDX,0xc                         ; 00416b94
    CMP EDI,ECX                         ; 00416b97
    JL 0x00416b73                       ; 00416b99
        ;   XREF to: 00416b73 (CONDITIONAL_JUMP)  ; LAB_00416b73
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00416b9b
        ;   Label: LAB_00416b9b
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00416ba2
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 00416ba9
    ADD EAX,0x3c                        ; 00416baf
    INC EDX                             ; 00416bb2
    MOV dword ptr [ESP + 0xa0],EAX      ; 00416bb3
    MOV dword ptr [ESP + 0xa4],EDX      ; 00416bba
    CMP EDX,ECX                         ; 00416bc1
    JL 0x00416b42                       ; 00416bc3
        ;   XREF to: 00416b42 (CONDITIONAL_JUMP)  ; LAB_00416b42
    MOV ESI,dword ptr [EBX + 0x2d0]     ; 00416bc9
        ;   Label: LAB_00416bc9
    XOR EDI,EDI                         ; 00416bcf
    TEST ESI,ESI                        ; 00416bd1
    JLE 0x00416c6e                      ; 00416bd3
        ;   XREF to: 00416c6e (CONDITIONAL_JUMP)  ; LAB_00416c6e
    XOR ESI,ESI                         ; 00416bd9
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 00416bdb
        ;   Label: LAB_00416bdb
    ADD EDX,ESI                         ; 00416be1
    FILD dword ptr [EDX]                ; 00416be3
    FST double ptr [ESP + 0x18]         ; 00416be5
    FMUL double ptr [ESP + 0x18]        ; 00416be9
    FILD dword ptr [EDX + 0x4]          ; 00416bed
    FST double ptr [ESP + 0x8]          ; 00416bf0
    FMUL double ptr [ESP + 0x8]         ; 00416bf4
    FILD dword ptr [EDX + 0x8]          ; 00416bf8
    FXCH                                ; 00416bfb
    FADDP ST2,ST0                       ; 00416bfd
    FST double ptr [ESP + 0x10]         ; 00416bff
    FMUL double ptr [ESP + 0x10]        ; 00416c03
    FADDP                               ; 00416c07
    FSQRT                               ; 00416c09
    FLDZ                                ; 00416c0b
    FXCH                                ; 00416c0d
    FSTP double ptr [ESP]               ; 00416c0f
    FCOMP double ptr [ESP]              ; 00416c12
    FNSTSW AX                           ; 00416c15
    SAHF                                ; 00416c17
    JNC 0x00416d57                      ; 00416c18
        ;   XREF to: 00416d57 (CONDITIONAL_JUMP)  ; LAB_00416d57
    FLD double ptr [ESP + 0x18]         ; 00416c1e
    FLD double ptr [0x005cbf62]         ; 00416c22 | DAT_005cbf62
    FDIV double ptr [ESP]               ; 00416c28
    FXCH                                ; 00416c2b
    FMUL ST1                            ; 00416c2d
    FLD double ptr [ESP + 0x8]          ; 00416c2f
    FMUL ST2                            ; 00416c33
    FLD double ptr [ESP + 0x10]         ; 00416c35
    FMULP ST3                           ; 00416c39
    FXCH                                ; 00416c3b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416c3d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00416c42
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416c44
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00416c49
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416c4b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00416c50
    FISTP dword ptr [EDX]               ; 00416c52
    FXCH                                ; 00416c54
    FISTP dword ptr [EDX + 0x4]         ; 00416c56
    FISTP dword ptr [EDX + 0x8]         ; 00416c59
    INC EDI                             ; 00416c5c
        ;   Label: LAB_00416c5c
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 00416c5d
    ADD ESI,0xc                         ; 00416c63
    CMP EDI,EAX                         ; 00416c66
    JL 0x00416bdb                       ; 00416c68
        ;   XREF to: 00416bdb (CONDITIONAL_JUMP)  ; LAB_00416bdb
    PUSH EBX                            ; 00416c6e
        ;   Label: LAB_00416c6e
    CALL core_bodypart.cpp_FUN_004178c0 ; 00416c6f
        ;   XREF to: 004178c0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_004178c0()
    LEA EDX,[EBX + 0x1120]              ; 00416c74
    LEA EAX,[EBX + 0x3dc]               ; 00416c7a
    ADD ESP,0x4                         ; 00416c80
    CMP EDX,EAX                         ; 00416c83
    JZ 0x00416c97                       ; 00416c85
        ;   XREF to: 00416c97 (CONDITIONAL_JUMP)  ; LAB_00416c97
    MOV ECX,dword ptr [EAX]             ; 00416c87
    MOV dword ptr [EDX],ECX             ; 00416c89
    MOV ECX,dword ptr [EAX + 0x4]       ; 00416c8b
    MOV dword ptr [EDX + 0x4],ECX       ; 00416c8e
    MOV ECX,dword ptr [EAX + 0x8]       ; 00416c91
    MOV dword ptr [EDX + 0x8],ECX       ; 00416c94
    LEA EAX,[EBX + 0x3dc]               ; 00416c97
        ;   Label: LAB_00416c97
    PUSH EAX                            ; 00416c9d
    LEA EAX,[EBX + 0x10f8]              ; 00416c9e
    PUSH EAX                            ; 00416ca4
    LEA ESI,[ESP + 0x48]                ; 00416ca5
    LEA EDI,[ESP + 0x60]                ; 00416ca9
    CALL core_dirmat.cpp_FUN_004495a0   ; 00416cad
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x48]                ; 00416cb2
    LEA EAX,[ESP + 0x60]                ; 00416cb6
    ADD ESP,0x8                         ; 00416cba
    LEA EDX,[EBX + 0x112c]              ; 00416cbd
    MOVSD ES:EDI,ESI                    ; 00416cc3
    MOVSD ES:EDI,ESI                    ; 00416cc4
    MOVSD ES:EDI,ESI                    ; 00416cc5
    CMP EDX,EAX                         ; 00416cc6
    JZ 0x00416cde                       ; 00416cc8
        ;   XREF to: 00416cde (CONDITIONAL_JUMP)  ; LAB_00416cde
    MOV EAX,dword ptr [ESP + 0x58]      ; 00416cca
    MOV dword ptr [EDX],EAX             ; 00416cce
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00416cd0
    MOV dword ptr [EDX + 0x4],EAX       ; 00416cd4
    MOV EAX,dword ptr [ESP + 0x60]      ; 00416cd7
    MOV dword ptr [EDX + 0x8],EAX       ; 00416cdb
    PUSH 0x40490fdb                     ; 00416cde
        ;   Label: LAB_00416cde
    PUSH 0xc0490fdb                     ; 00416ce3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00416ce8
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xbc],EAX      ; 00416ced
    FLD float ptr [ESP + 0xbc]          ; 00416cf4
    ADD ESP,0x8                         ; 00416cfb
    PUSH 0x40490fdb                     ; 00416cfe
    PUSH 0xc0490fdb                     ; 00416d03
    FSTP float ptr [EBX + 0x1150]       ; 00416d08
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00416d0e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xbc],EAX      ; 00416d13
    FLD float ptr [ESP + 0xbc]          ; 00416d1a
    ADD ESP,0x8                         ; 00416d21
    PUSH 0x4116cbe4                     ; 00416d24
    PUSH 0xc116cbe4                     ; 00416d29
    FSTP float ptr [EBX + 0x1158]       ; 00416d2e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00416d34
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xbc],EAX      ; 00416d39
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00416d40
    MOV dword ptr [EBX + 0x1154],EAX    ; 00416d47
    ADD ESP,0x8                         ; 00416d4d
    MOV ESP,EBP                         ; 00416d50
    POP EBP                             ; 00416d52
    POP EDI                             ; 00416d53
    POP ESI                             ; 00416d54
    POP EBX                             ; 00416d55
    RET                                 ; 00416d56
    MOV dword ptr [EDX + 0x8],0x0       ; 00416d57
        ;   Label: LAB_00416d57
    MOV EAX,dword ptr [EDX + 0x8]       ; 00416d5e
    MOV dword ptr [EDX + 0x4],EAX       ; 00416d61
    MOV dword ptr [EDX],EAX             ; 00416d64
    JMP 0x00416c5c                      ; 00416d66
        ;   XREF to: 00416c5c (UNCONDITIONAL_JUMP)  ; LAB_00416c5c

