; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_FUN_004658e0(CDraculaBride *this_ptr,float delta_time)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00462ff0 at 00463087
;
; Referenced Globals:
;   undefined4 s_s_5_2f_5_2f_5_2f_005d11db+1
;   undefined4 DAT_005d11f0
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01ba5798
;   undefined4 DAT_01ba57e8
;   undefined4 DAT_01ba57ec
;   undefined4 DAT_01ba57f0
;   undefined4 DAT_01ba57f4
;   undefined4 DAT_01ba57f8
;   undefined4 DAT_01ba57fc
;   undefined4 DAT_01ba5800
;   undefined4 DAT_01ba5804
;   undefined4 DAT_01ba5808
;   undefined4 DAT_01ba580c
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_spline.cpp_FUN_00561310
;   core_spline.cpp_FUN_00561540
;   core_spline.cpp_FUN_00561780
;   engine_console.cpp_CConsole_printf_FUN_00436710
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004658e0
        ;   Label: core_dracbrid.cpp_FUN_004658e0
    PUSH ESI                            ; 004658e1
    PUSH EDI                            ; 004658e2
    PUSH EBP                            ; 004658e3
    MOV EBP,ESP                         ; 004658e4
    SUB ESP,0x90                        ; 004658e6
    AND ESP,0xfffffff8                  ; 004658ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004658ef
    FLD float ptr [EAX + 0x10b8c]       ; 004658f2
    FSUB float ptr [EBP + 0x18]         ; 004658f8
    FST float ptr [EAX + 0x10b8c]       ; 004658fb
    FLDZ                                ; 00465901
    FCOMPP                              ; 00465903
    FNSTSW AX                           ; 00465905
    SAHF                                ; 00465907
    JA 0x00465947                       ; 00465908
        ;   XREF to: 00465947 (CONDITIONAL_JUMP)  ; LAB_00465947
    MOV EDX,0x1ba5798                   ; 0046590a
        ;   Label: LAB_0046590a
    MOV dword ptr [ESP + 0x78],EDX      ; 0046590f | DAT_01ba5798
    LEA EAX,[EDX + 0x1f8]               ; 00465913
    MOV dword ptr [ESP + 0x74],EAX      ; 00465919
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046591d | DAT_01ba57ec
        ;   Label: LAB_0046591d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00465921
    MOV dword ptr [ESP + 0x7c],EAX      ; 00465924 | DAT_01ba5798 | DAT_01ba57ec
    CMP ECX,dword ptr [EAX + 0x50]      ; 00465928 | DAT_01ba57e8 | DAT_01ba583c
    JZ 0x00465956                       ; 0046592b
        ;   XREF to: 00465956 (CONDITIONAL_JUMP)  ; LAB_00465956
    MOV EDI,dword ptr [ESP + 0x78]      ; 0046592d
        ;   Label: LAB_0046592d
    ADD EDI,0x54                        ; 00465931
    MOV EDX,dword ptr [ESP + 0x74]      ; 00465934
    MOV dword ptr [ESP + 0x78],EDI      ; 00465938 | DAT_01ba57ec
    CMP EDI,EDX                         ; 0046593c
    JNZ 0x0046591d                      ; 0046593e
        ;   XREF to: 0046591d (CONDITIONAL_JUMP)  ; LAB_0046591d
    MOV ESP,EBP                         ; 00465940
    POP EBP                             ; 00465942
    POP EDI                             ; 00465943
    POP ESI                             ; 00465944
    POP EBX                             ; 00465945
    RET                                 ; 00465946
    MOV EAX,dword ptr [EBP + 0x14]      ; 00465947
        ;   Label: LAB_00465947
    MOV dword ptr [EAX + 0x10b8c],0x0   ; 0046594a
    JMP 0x0046590a                      ; 00465954
        ;   XREF to: 0046590a (UNCONDITIONAL_JUMP)  ; LAB_0046590a
    MOV EAX,dword ptr [ESP + 0x78]      ; 00465956
        ;   Label: LAB_00465956
    MOV EBX,dword ptr [EAX]             ; 0046595a | DAT_01ba57ec
    PUSH EBX                            ; 0046595c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 0046595d
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00465962
    TEST EAX,EAX                        ; 00465965
    JZ 0x00465b06                       ; 00465967
        ;   XREF to: 00465b06 (CONDITIONAL_JUMP)  ; LAB_00465b06
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046596d
    FLD float ptr [EAX + 0x1c]          ; 00465971 | DAT_01ba5808
    ADD EAX,0x44                        ; 00465974
    FADD float ptr [EBP + 0x18]         ; 00465977
    MOV dword ptr [ESP + 0x88],EAX      ; 0046597a
    FSTP float ptr [EAX + -0x28]        ; 00465981 | DAT_01ba5808
    MOV EAX,dword ptr [ESP + 0x78]      ; 00465984
    ADD EAX,0x38                        ; 00465988
    MOV dword ptr [ESP + 0x84],EAX      ; 0046598b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00465992
    MOV EBX,dword ptr [ESP + 0x78]      ; 00465996
    ADD EAX,0x20                        ; 0046599a
    ADD EBX,0x2c                        ; 0046599d
    MOV dword ptr [ESP + 0x80],EAX      ; 004659a0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004659a7
        ;   Label: LAB_004659a7
    FLD float ptr [EAX + 0x1c]          ; 004659ab | DAT_01ba5808
    FLD1                                ; 004659ae
    FCOMPP                              ; 004659b0
    FNSTSW AX                           ; 004659b2
    SAHF                                ; 004659b4
    JNC 0x00465b16                      ; 004659b5
        ;   XREF to: 00465b16 (CONDITIONAL_JUMP)  ; LAB_00465b16
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004659bb
    FLD float ptr [EAX + 0x1c]          ; 004659bf | DAT_01ba5808
    FADD float ptr [0x005d11f0]         ; 004659c2 | DAT_005d11f0
    FSTP float ptr [EAX + 0x1c]         ; 004659c8 | DAT_01ba5808
    MOV EAX,dword ptr [ESP + 0x80]      ; 004659cb
    CMP EBX,EAX                         ; 004659d2
    JZ 0x004659e6                       ; 004659d4
        ;   XREF to: 004659e6 (CONDITIONAL_JUMP)  ; LAB_004659e6
    MOV EDX,dword ptr [EBX]             ; 004659d6 | DAT_01ba5818
    MOV dword ptr [EAX],EDX             ; 004659d8 | DAT_01ba580c
    MOV EDX,dword ptr [EBX + 0x4]       ; 004659da | DAT_01ba581c
    MOV dword ptr [EAX + 0x4],EDX       ; 004659dd | DAT_01ba5810
    MOV EDX,dword ptr [EBX + 0x8]       ; 004659e0 | DAT_01ba5820
    MOV dword ptr [EAX + 0x8],EDX       ; 004659e3 | DAT_01ba5814
    MOV EDX,dword ptr [ESP + 0x84]      ; 004659e6
        ;   Label: LAB_004659e6
    CMP EBX,EDX                         ; 004659ed
    JZ 0x00465a03                       ; 004659ef
        ;   XREF to: 00465a03 (CONDITIONAL_JUMP)  ; LAB_00465a03
    MOV EAX,EDX                         ; 004659f1
    MOV EDX,dword ptr [EAX]             ; 004659f3 | DAT_01ba5824
    MOV dword ptr [EBX],EDX             ; 004659f5 | DAT_01ba5818
    MOV EDX,dword ptr [EAX + 0x4]       ; 004659f7 | DAT_01ba5828
    MOV dword ptr [EBX + 0x4],EDX       ; 004659fa | DAT_01ba581c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004659fd | DAT_01ba582c
    MOV dword ptr [EBX + 0x8],EDX       ; 00465a00 | DAT_01ba5820
    MOV EAX,dword ptr [ESP + 0x84]      ; 00465a03
        ;   Label: LAB_00465a03
    MOV ECX,dword ptr [ESP + 0x88]      ; 00465a0a
    CMP EAX,ECX                         ; 00465a11
    JZ 0x00465a40                       ; 00465a13
        ;   XREF to: 00465a40 (CONDITIONAL_JUMP)  ; LAB_00465a40
    MOV EAX,ECX                         ; 00465a15
    FLD float ptr [EAX]                 ; 00465a17 | DAT_01ba5830
    MOV EAX,dword ptr [ESP + 0x84]      ; 00465a19
    FSTP float ptr [EAX]                ; 00465a20 | DAT_01ba5824
    MOV EAX,ECX                         ; 00465a22
    FLD float ptr [EAX + 0x4]           ; 00465a24 | DAT_01ba5834
    MOV EAX,dword ptr [ESP + 0x84]      ; 00465a27
    FSTP float ptr [EAX + 0x4]          ; 00465a2e | DAT_01ba5828
    MOV EAX,ECX                         ; 00465a31
    FLD float ptr [EAX + 0x8]           ; 00465a33 | DAT_01ba5838
    MOV EAX,dword ptr [ESP + 0x84]      ; 00465a36
    FSTP float ptr [EAX + 0x8]          ; 00465a3d | DAT_01ba582c
    PUSH 0x40a00000                     ; 00465a40
        ;   Label: LAB_00465a40
    LEA EDI,[ESP + 0x24]                ; 00465a45
    MOV ESI,0x1fc783c                   ; 00465a49
    PUSH 0xc0a00000                     ; 00465a4e
    MOVSD ES:EDI,ESI                    ; 00465a53 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 00465a54 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 00465a55 | g_CDemonCameraInstance.base.position+8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465a56
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    LEA EDI,[ESP + 0x40]                ; 00465a5b
    MOV dword ptr [ESP + 0x94],EAX      ; 00465a5f
    LEA ESI,[ESP + 0x28]                ; 00465a66
    FLD float ptr [ESP + 0x94]          ; 00465a6a
    MOVSD ES:EDI,ESI                    ; 00465a71
    MOVSD ES:EDI,ESI                    ; 00465a72
    MOVSD ES:EDI,ESI                    ; 00465a73
    ADD ESP,0x8                         ; 00465a74
    PUSH 0x40000000                     ; 00465a77
    FADD float ptr [ESP + 0x3c]         ; 00465a7c
    PUSH 0xc0000000                     ; 00465a80
    FSTP float ptr [ESP + 0x40]         ; 00465a85
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465a89
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x94],EAX      ; 00465a8e
    FLD float ptr [ESP + 0x94]          ; 00465a95
    ADD ESP,0x8                         ; 00465a9c
    PUSH 0x40a00000                     ; 00465a9f
    FADD float ptr [ESP + 0x40]         ; 00465aa4
    PUSH 0xc0a00000                     ; 00465aa8
    FSTP float ptr [ESP + 0x44]         ; 00465aad
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465ab1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x94],EAX      ; 00465ab6
    FLD float ptr [ESP + 0x94]          ; 00465abd
    ADD ESP,0x8                         ; 00465ac4
    LEA EDI,[ESP + 0x50]                ; 00465ac7
    FADD float ptr [ESP + 0x40]         ; 00465acb
    LEA ESI,[ESP + 0x38]                ; 00465acf
    FSTP float ptr [ESP + 0x40]         ; 00465ad3
    MOVSD ES:EDI,ESI                    ; 00465ad7
    MOVSD ES:EDI,ESI                    ; 00465ad8
    MOVSD ES:EDI,ESI                    ; 00465ad9
    LEA EAX,[ESP + 0x50]                ; 00465ada
    MOV ESI,dword ptr [ESP + 0x88]      ; 00465ade
    CMP EAX,ESI                         ; 00465ae5
    JZ 0x004659a7                       ; 00465ae7
        ;   XREF to: 004659a7 (CONDITIONAL_JUMP)  ; LAB_004659a7
    MOV EAX,dword ptr [ESP + 0x50]      ; 00465aed
    MOV dword ptr [ESI],EAX             ; 00465af1 | DAT_01ba5830
    MOV EAX,dword ptr [ESP + 0x54]      ; 00465af3
    MOV dword ptr [ESI + 0x4],EAX       ; 00465af7 | DAT_01ba5834
    MOV EAX,dword ptr [ESP + 0x58]      ; 00465afa
    MOV dword ptr [ESI + 0x8],EAX       ; 00465afe | DAT_01ba5838
    JMP 0x004659a7                      ; 00465b01
        ;   XREF to: 004659a7 (UNCONDITIONAL_JUMP)  ; LAB_004659a7
    MOV EAX,dword ptr [ESP + 0x78]      ; 00465b06
        ;   Label: LAB_00465b06
    MOV dword ptr [EAX + 0x50],0x0      ; 00465b0a | DAT_01ba583c
    JMP 0x0046592d                      ; 00465b11
        ;   XREF to: 0046592d (UNCONDITIONAL_JUMP)  ; LAB_0046592d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00465b16
        ;   Label: LAB_00465b16
    PUSH 0x0                            ; 00465b1a
    PUSH dword ptr [EAX + 0x1c]         ; 00465b1c | DAT_01ba5808
    LEA EAX,[ESP + 0x8]                 ; 00465b1f
    PUSH EAX                            ; 00465b23
    CALL core_spline.cpp_FUN_00561310   ; 00465b24
        ;   XREF to: 00561310 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_00561310(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 00465b29
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00465b2c
    ADD ESI,0x44                        ; 00465b30
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00465b33
    PUSH ESI                            ; 00465b37 | DAT_01ba5830
    ADD EAX,0x38                        ; 00465b38
    PUSH EAX                            ; 00465b3b | DAT_01ba5824
    PUSH EBX                            ; 00465b3c | DAT_01ba5818
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00465b3d
    PUSH ESI                            ; 00465b44 | DAT_01ba580c
    LEA EAX,[ESP + 0x10]                ; 00465b45
    PUSH EAX                            ; 00465b49
    LEA ESI,[ESP + 0x58]                ; 00465b4a
    LEA EDI,[ESP + 0x70]                ; 00465b4e
    CALL core_spline.cpp_FUN_00561540   ; 00465b52
        ;   XREF to: 00561540 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00561540()
    ADD ESP,0x14                        ; 00465b57
    LEA ESI,[ESP + 0x44]                ; 00465b5a
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00465b5e
    LEA EAX,[ESP + 0x5c]                ; 00465b62
    ADD EBX,0x4                         ; 00465b66
    MOVSD ES:EDI,ESI                    ; 00465b69
    MOVSD ES:EDI,ESI                    ; 00465b6a
    MOVSD ES:EDI,ESI                    ; 00465b6b
    CMP EBX,EAX                         ; 00465b6c
    JZ 0x00465b84                       ; 00465b6e
        ;   XREF to: 00465b84 (CONDITIONAL_JUMP)  ; LAB_00465b84
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00465b70
    MOV dword ptr [EBX],EAX             ; 00465b74 | DAT_01ba57f0
    MOV EAX,dword ptr [ESP + 0x60]      ; 00465b76
    MOV dword ptr [EBX + 0x4],EAX       ; 00465b7a | DAT_01ba57f4
    MOV EAX,dword ptr [ESP + 0x64]      ; 00465b7d
    MOV dword ptr [EBX + 0x8],EAX       ; 00465b81 | DAT_01ba57f8
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00465b84
        ;   Label: LAB_00465b84
    SUB ESP,0x8                         ; 00465b88
    FLD float ptr [EAX + 0xc]           ; 00465b8b | DAT_01ba57f8
    FSTP double ptr [ESP]               ; 00465b8e
    SUB ESP,0x8                         ; 00465b91
    FLD float ptr [EAX + 0x8]           ; 00465b94 | DAT_01ba57f4
    FSTP double ptr [ESP]               ; 00465b97
    SUB ESP,0x8                         ; 00465b9a
    FLD float ptr [EAX + 0x4]           ; 00465b9d | DAT_01ba57f0
    FSTP double ptr [ESP]               ; 00465ba0
    PUSH 0x5d11dc                       ; 00465ba3 | s_s_5_2f_5_2f_5_2f_005d11db+1
    MOV EDI,dword ptr [0x00609ed0]      ; 00465ba8 | g_CConsolePtr
    PUSH EDI                            ; 00465bae | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00465baf
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 00465bb4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00465bb7
    ADD EAX,0x44                        ; 00465bbb
    PUSH EAX                            ; 00465bbe | DAT_01ba5830
    MOV EAX,dword ptr [ESP + 0x80]      ; 00465bbf
    ADD EAX,0x38                        ; 00465bc6
    PUSH EAX                            ; 00465bc9 | DAT_01ba5824
    MOV EAX,dword ptr [ESP + 0x84]      ; 00465bca
    ADD EAX,0x2c                        ; 00465bd1
    PUSH EAX                            ; 00465bd4 | DAT_01ba5818
    MOV EAX,dword ptr [ESP + 0x88]      ; 00465bd5
    ADD EAX,0x20                        ; 00465bdc
    PUSH EAX                            ; 00465bdf | DAT_01ba580c
    LEA EAX,[ESP + 0x10]                ; 00465be0
    PUSH EAX                            ; 00465be4
    LEA ESI,[ESP + 0x40]                ; 00465be5
    LEA EDI,[ESP + 0x7c]                ; 00465be9
    CALL core_spline.cpp_FUN_00561780   ; 00465bed
        ;   XREF to: 00561780 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00561780()
    ADD ESP,0x14                        ; 00465bf2
    LEA ESI,[ESP + 0x2c]                ; 00465bf5
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00465bf9
    LEA EAX,[ESP + 0x68]                ; 00465bfd
    ADD EBX,0x10                        ; 00465c01
    MOVSD ES:EDI,ESI                    ; 00465c04
    MOVSD ES:EDI,ESI                    ; 00465c05
    MOVSD ES:EDI,ESI                    ; 00465c06
    CMP EBX,EAX                         ; 00465c07
    JZ 0x0046592d                       ; 00465c09
        ;   XREF to: 0046592d (CONDITIONAL_JUMP)  ; LAB_0046592d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00465c0f
    MOV dword ptr [EBX],EAX             ; 00465c13 | DAT_01ba57fc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00465c15
    MOV dword ptr [EBX + 0x4],EAX       ; 00465c19 | DAT_01ba5800
    MOV EAX,dword ptr [ESP + 0x70]      ; 00465c1c
    MOV dword ptr [EBX + 0x8],EAX       ; 00465c20 | DAT_01ba5804
    JMP 0x0046592d                      ; 00465c23
        ;   XREF to: 0046592d (UNCONDITIONAL_JUMP)  ; LAB_0046592d

