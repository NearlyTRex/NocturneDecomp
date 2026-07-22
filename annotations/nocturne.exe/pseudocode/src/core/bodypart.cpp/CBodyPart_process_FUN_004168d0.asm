; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_CBodyPart_process_FUN_004168d0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   string s_disableBodyPartDamage_00579070
;   double DOUBLE_0057908a = 3
;   undefined4 DAT_005b7650
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0
;   core_box.cpp_CBox_process_FUN_0041acb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004168d0
        ;   Label: core_bodypart.cpp_CBodyPart_process_FUN_004168d0
    PUSH ESI                            ; 004168d1
    SUB ESP,0x4c                        ; 004168d2
    MOV EBX,dword ptr [ESP + 0x58]      ; 004168d5
    CMP dword ptr [EBX + 0x16c],0x3     ; 004168d9
    JL 0x00416963                       ; 004168e0
        ;   XREF to: 00416963 (CONDITIONAL_JUMP)  ; LAB_00416963
    CMP dword ptr [EBX + 0x178],0x1     ; 004168e6
    JL 0x00416963                       ; 004168ed
        ;   XREF to: 00416963 (CONDITIONAL_JUMP)  ; LAB_00416963
    CMP dword ptr [EBX + 0x150],0x0     ; 004168ef
    JZ 0x00416905                       ; 004168f6
        ;   XREF to: 00416905 (CONDITIONAL_JUMP)  ; LAB_00416905
    CMP dword ptr [EBX + 0xf08],0x0     ; 004168f8
    JZ 0x004169c0                       ; 004168ff
        ;   XREF to: 004169c0 (CONDITIONAL_JUMP)  ; LAB_004169c0
    CMP dword ptr [EBX + 0xf10],0x0     ; 00416905
        ;   Label: LAB_00416905
    JZ 0x004169d3                       ; 0041690c
        ;   XREF to: 004169d3 (CONDITIONAL_JUMP)  ; LAB_004169d3
    PUSH EBX                            ; 00416912
        ;   Label: LAB_00416912
    CALL core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0 ; 00416913
        ;   XREF to: 00417eb0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0()
    ADD ESP,0x4                         ; 00416918
    PUSH EDI                            ; 0041691b
        ;   Label: LAB_0041691b
    MOV EDX,dword ptr [EBX + 0xf10]     ; 0041691c
    TEST EDX,EDX                        ; 00416922
    JNZ 0x0041694f                      ; 00416924
        ;   XREF to: 0041694f (CONDITIONAL_JUMP)  ; LAB_0041694f
    FLD float ptr [EBX + 0xca4]         ; 00416926
    FSUB float ptr [ESP + 0x60]         ; 0041692c
    FST float ptr [EBX + 0xca4]         ; 00416930
    FLDZ                                ; 00416936
    FCOMPP                              ; 00416938
    FNSTSW AX                           ; 0041693a
    SAHF                                ; 0041693c
    JBE 0x004169e5                      ; 0041693d
        ;   XREF to: 004169e5 (CONDITIONAL_JUMP)  ; LAB_004169e5
    MOV dword ptr [EBX + 0xf08],EDX     ; 00416943
    MOV dword ptr [EBX + 0xca4],EDX     ; 00416949
    PUSH dword ptr [ESP + 0x60]         ; 0041694f
        ;   Label: LAB_0041694f
    PUSH EBX                            ; 00416953
    CALL core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00 ; 00416954
        ;   XREF to: 00416b00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00()
    ADD ESP,0x8                         ; 00416959
    POP EDI                             ; 0041695c
    ADD ESP,0x4c                        ; 0041695d
        ;   Label: LAB_0041695d
    POP ESI                             ; 00416960
    POP EBX                             ; 00416961
    RET                                 ; 00416962
    PUSH 0x0                            ; 00416963
        ;   Label: LAB_00416963
    PUSH 0x0                            ; 00416965
    PUSH EBX                            ; 00416967
    MOV dword ptr [EBX + 0x70],0x2      ; 00416968
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 ; 0041696f
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0()
    LEA EAX,[EBX + 0x160]               ; 00416974
    ADD ESP,0xc                         ; 0041697a
    MOV ESI,EAX                         ; 0041697d
    CMP EAX,0x2dd1184                   ; 0041697f
    JZ 0x004169a0                       ; 00416984
        ;   XREF to: 004169a0 (CONDITIONAL_JUMP)  ; LAB_004169a0
    MOV EDX,dword ptr [0x02dd1184]      ; 00416986 | DAT_02dd1184
    MOV dword ptr [EAX],EDX             ; 0041698c
    MOV EDX,dword ptr [0x02dd1188]      ; 0041698e | DAT_02dd1188
    MOV dword ptr [EAX + 0x4],EDX       ; 00416994
    MOV EDX,dword ptr [0x02dd118c]      ; 00416997 | DAT_02dd118c
    MOV dword ptr [EAX + 0x8],EDX       ; 0041699d
    ADD EBX,0x154                       ; 004169a0
        ;   Label: LAB_004169a0
    CMP EBX,ESI                         ; 004169a6
    JZ 0x0041695d                       ; 004169a8
        ;   XREF to: 0041695d (CONDITIONAL_JUMP)  ; LAB_0041695d
    MOV EAX,dword ptr [ESI]             ; 004169aa
    MOV dword ptr [EBX],EAX             ; 004169ac
    MOV EAX,dword ptr [ESI + 0x4]       ; 004169ae
    MOV dword ptr [EBX + 0x4],EAX       ; 004169b1
    MOV EAX,dword ptr [ESI + 0x8]       ; 004169b4
    MOV dword ptr [EBX + 0x8],EAX       ; 004169b7
    ADD ESP,0x4c                        ; 004169ba
    POP ESI                             ; 004169bd
    POP EBX                             ; 004169be
    RET                                 ; 004169bf
    PUSH dword ptr [ESP + 0x5c]         ; 004169c0
        ;   Label: LAB_004169c0
    PUSH EBX                            ; 004169c4
    CALL core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00 ; 004169c5
        ;   XREF to: 00416b00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00()
    ADD ESP,0x8                         ; 004169ca
    ADD ESP,0x4c                        ; 004169cd
    POP ESI                             ; 004169d0
    POP EBX                             ; 004169d1
    RET                                 ; 004169d2
    CMP dword ptr [EBX + 0xf08],0x0     ; 004169d3
        ;   Label: LAB_004169d3
    JNZ 0x00416912                      ; 004169da
        ;   XREF to: 00416912 (CONDITIONAL_JUMP)  ; LAB_00416912
    JMP 0x0041691b                      ; 004169e0
        ;   XREF to: 0041691b (UNCONDITIONAL_JUMP)  ; LAB_0041691b
    LEA ESI,[EBX + 0x20]                ; 004169e5
        ;   Label: LAB_004169e5
    MOV EAX,dword ptr [ESI]             ; 004169e8
    MOV dword ptr [ESP + 0x40],EAX      ; 004169ea
    LEA EAX,[ESI + 0x4]                 ; 004169ee
    MOV EAX,dword ptr [EAX]             ; 004169f1
    MOV dword ptr [ESP + 0x44],EAX      ; 004169f3
    LEA EAX,[ESI + 0x8]                 ; 004169f7
    PUSH dword ptr [ESP + 0x60]         ; 004169fa
    LEA EDI,[EBX + 0xcb4]               ; 004169fe
    MOV EAX,dword ptr [EAX]             ; 00416a04
    PUSH EDI                            ; 00416a06
    MOV dword ptr [ESP + 0x50],EAX      ; 00416a07
    CALL core_box.cpp_CBox_process_FUN_0041acb0 ; 00416a0b
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_process_FUN_0041acb0()
    MOV EAX,dword ptr [EDI]             ; 00416a10
    MOV dword ptr [ESI],EAX             ; 00416a12
    MOV EAX,dword ptr [EDI + 0x4]       ; 00416a14
    MOV dword ptr [ESI + 0x4],EAX       ; 00416a17
    MOV EAX,dword ptr [EDI + 0x8]       ; 00416a1a
    MOV dword ptr [ESI + 0x8],EAX       ; 00416a1d
    LEA ESI,[EBX + 0x30]                ; 00416a20
    LEA EAX,[EBX + 0xcc0]               ; 00416a23
    ADD ESP,0x8                         ; 00416a29
    CMP ESI,EAX                         ; 00416a2c
    JZ 0x00416a40                       ; 00416a2e
        ;   XREF to: 00416a40 (CONDITIONAL_JUMP)  ; LAB_00416a40
    MOV EDX,dword ptr [EAX]             ; 00416a30
    MOV dword ptr [ESI],EDX             ; 00416a32
    MOV EDX,dword ptr [EAX + 0x4]       ; 00416a34
    MOV dword ptr [ESI + 0x4],EDX       ; 00416a37
    MOV EDX,dword ptr [EAX + 0x8]       ; 00416a3a
    MOV dword ptr [ESI + 0x8],EDX       ; 00416a3d
    PUSH EBX                            ; 00416a40
        ;   Label: LAB_00416a40
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00416a41
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    LEA EAX,[EBX + 0xcf4]               ; 00416a46
    FLD float ptr [EAX + 0x4]           ; 00416a4c
    FMUL ST0                            ; 00416a4f
    FLD float ptr [EAX]                 ; 00416a51
    FMUL ST0                            ; 00416a53
    FADDP                               ; 00416a55
    FLD float ptr [EAX + 0x8]           ; 00416a57
    FMUL ST0                            ; 00416a5a
    FADDP                               ; 00416a5c
    FSQRT                               ; 00416a5e
    ADD ESP,0x4                         ; 00416a60
    FCOMP double ptr [0x0057908a]       ; 00416a63 | DOUBLE_0057908a
    FNSTSW AX                           ; 00416a69
    SAHF                                ; 00416a6b
    JBE 0x0041694f                      ; 00416a6c
        ;   XREF to: 0041694f (CONDITIONAL_JUMP)  ; LAB_0041694f
    PUSH 0x579070                       ; 00416a72 | = "disableBodyPartDamage"
    MOV ECX,dword ptr [0x005b7650]      ; 00416a77 | DAT_005b7650
    PUSH ECX                            ; 00416a7d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00416a7e
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 00416a83
    TEST EAX,EAX                        ; 00416a86
    JNZ 0x0041694f                      ; 00416a88
        ;   XREF to: 0041694f (CONDITIONAL_JUMP)  ; LAB_0041694f
    LEA EAX,[ESP + 0x4]                 ; 00416a8e
    PUSH EAX                            ; 00416a92
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00416a93
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00416a98
    PUSH 0x41700000                     ; 00416a9b
    PUSH 0x41200000                     ; 00416aa0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00416aa5
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x54],EAX      ; 00416aaa
    FLD float ptr [ESP + 0x54]          ; 00416aae
    ADD ESP,0x8                         ; 00416ab2
    LEA EAX,[ESP + 0x4]                 ; 00416ab5
    MOV dword ptr [ESP + 0x38],EBX      ; 00416ab9
    PUSH EAX                            ; 00416abd
    MOV dword ptr [ESP + 0x40],EBX      ; 00416abe
    LEA EAX,[EBX + 0x20]                ; 00416ac2
    PUSH EAX                            ; 00416ac5
    LEA EAX,[ESP + 0x48]                ; 00416ac6
    PUSH EAX                            ; 00416aca
    MOV ESI,dword ptr [0x005be368]      ; 00416acb | DAT_005be368
    PUSH ESI                            ; 00416ad1 | DAT_01e57284
    FSTP float ptr [ESP + 0x18]         ; 00416ad2
    CALL core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880 ; 00416ad6
        ;   XREF to: 00511880 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880()
    ADD ESP,0x10                        ; 00416adb
    PUSH dword ptr [ESP + 0x60]         ; 00416ade
    PUSH EBX                            ; 00416ae2
    CALL core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00 ; 00416ae3
        ;   XREF to: 00416b00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00()
    ADD ESP,0x8                         ; 00416ae8
    POP EDI                             ; 00416aeb
    ADD ESP,0x4c                        ; 00416aec
    POP ESI                             ; 00416aef
    POP EBX                             ; 00416af0
    RET                                 ; 00416af1

