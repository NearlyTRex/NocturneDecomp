; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 005348f6
;   core_set.cpp_FUN_00535da0 at 0053608a
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb42c
;   TerminatedCString s_CDemonLight_blitZBuffer_005bb43f
;   undefined4 DAT_01b4aea4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0045c720
;   core_dstrendr.cpp_memcpyMMX_FUN_00471271
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ca30
        ;   Label: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30
    PUSH ESI                            ; 0045ca31
    PUSH EDI                            ; 0045ca32
    PUSH EBP                            ; 0045ca33
    SUB ESP,0x24                        ; 0045ca34
    MOV EBP,dword ptr [ESP + 0x38]      ; 0045ca37
    CMP dword ptr [EBP + 0x168],0x0     ; 0045ca3b
    JZ 0x0045cc32                       ; 0045ca42
        ;   XREF to: 0045cc32 (CONDITIONAL_JUMP)  ; LAB_0045cc32
    CMP dword ptr [EBP + 0x1d0],0x100   ; 0045ca48
    JG 0x0045cc44                       ; 0045ca52
        ;   XREF to: 0045cc44 (CONDITIONAL_JUMP)  ; LAB_0045cc44
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 0045ca58
    JZ 0x0045cc81                       ; 0045ca5f
        ;   XREF to: 0045cc81 (CONDITIONAL_JUMP)  ; LAB_0045cc81
    MOV EAX,dword ptr [EBP + 0x1d0]     ; 0045ca65
        ;   Label: LAB_0045ca65
    XOR ECX,ECX                         ; 0045ca6b
    TEST EAX,EAX                        ; 0045ca6d
    JLE 0x0045cabd                      ; 0045ca6f
        ;   XREF to: 0045cabd (CONDITIONAL_JUMP)  ; LAB_0045cabd
    LEA EDX,[EBP + 0x1d4]               ; 0045ca71
    MOV EBX,dword ptr [EDX]             ; 0045ca77
        ;   Label: LAB_0045ca77
    MOV EAX,EDX                         ; 0045ca79
    TEST EBX,EBX                        ; 0045ca7b
    JL 0x0045cca9                       ; 0045ca7d
        ;   XREF to: 0045cca9 (CONDITIONAL_JUMP)  ; LAB_0045cca9
    MOV EBX,dword ptr [EBP + 0x1cc0]    ; 0045ca83
        ;   Label: LAB_0045ca83
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045ca89
    DEC EBX                             ; 0045ca8c
    CMP EBX,ESI                         ; 0045ca8d
    JGE 0x0045ca94                      ; 0045ca8f
        ;   XREF to: 0045ca94 (CONDITIONAL_JUMP)  ; LAB_0045ca94
    MOV dword ptr [EAX + 0x4],EBX       ; 0045ca91
    CMP dword ptr [EAX + 0x8],0x0       ; 0045ca94
        ;   Label: LAB_0045ca94
    JL 0x0045ccb4                       ; 0045ca98
        ;   XREF to: 0045ccb4 (CONDITIONAL_JUMP)  ; LAB_0045ccb4
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 0045ca9e
        ;   Label: LAB_0045ca9e
    MOV ESI,dword ptr [EAX + 0xc]       ; 0045caa4
    DEC EBX                             ; 0045caa7
    CMP EBX,ESI                         ; 0045caa8
    JGE 0x0045caaf                      ; 0045caaa
        ;   XREF to: 0045caaf (CONDITIONAL_JUMP)  ; LAB_0045caaf
    MOV dword ptr [EAX + 0xc],EBX       ; 0045caac
    INC ECX                             ; 0045caaf
        ;   Label: LAB_0045caaf
    MOV EBX,dword ptr [EBP + 0x1d0]     ; 0045cab0
    ADD EDX,0x10                        ; 0045cab6
    CMP ECX,EBX                         ; 0045cab9
    JL 0x0045ca77                       ; 0045cabb
        ;   XREF to: 0045ca77 (CONDITIONAL_JUMP)  ; LAB_0045ca77
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0045cabd
        ;   Label: LAB_0045cabd
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 0045cac3
    XOR ESI,ESI                         ; 0045cac9
    XOR EDX,EDX                         ; 0045cacb
    MOV dword ptr [ESP + 0x14],ESI      ; 0045cacd
    TEST EDI,EDI                        ; 0045cad1
    JLE 0x0045cb03                      ; 0045cad3
        ;   XREF to: 0045cb03 (CONDITIONAL_JUMP)  ; LAB_0045cb03
    LEA EAX,[EBP + 0x1d4]               ; 0045cad5
    MOV ESI,dword ptr [EAX + 0x8]       ; 0045cadb
        ;   Label: LAB_0045cadb
    MOV ECX,EAX                         ; 0045cade
    CMP EBX,ESI                         ; 0045cae0
    JLE 0x0045cae6                      ; 0045cae2
        ;   XREF to: 0045cae6 (CONDITIONAL_JUMP)  ; LAB_0045cae6
    MOV EBX,ESI                         ; 0045cae4
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045cae6
        ;   Label: LAB_0045cae6
    MOV ESI,dword ptr [ECX + 0xc]       ; 0045caea
    CMP ESI,EDI                         ; 0045caed
    JLE 0x0045caf5                      ; 0045caef
        ;   XREF to: 0045caf5 (CONDITIONAL_JUMP)  ; LAB_0045caf5
    MOV dword ptr [ESP + 0x14],ESI      ; 0045caf1
    INC EDX                             ; 0045caf5
        ;   Label: LAB_0045caf5
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0045caf6
    ADD EAX,0x10                        ; 0045cafc
    CMP EDX,EDI                         ; 0045caff
    JL 0x0045cadb                       ; 0045cb01
        ;   XREF to: 0045cadb (CONDITIONAL_JUMP)  ; LAB_0045cadb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045cb03
        ;   Label: LAB_0045cb03
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045cb07
    CMP EBX,EAX                         ; 0045cb0b
    JG 0x0045cc32                       ; 0045cb0d
        ;   XREF to: 0045cc32 (CONDITIONAL_JUMP)  ; LAB_0045cc32
    LEA EAX,[EBP + 0x1d4]               ; 0045cb13
    MOV dword ptr [ESP + 0x10],EAX      ; 0045cb19
    XOR ECX,ECX                         ; 0045cb1d
        ;   Label: LAB_0045cb1d
    MOV ESI,dword ptr [EBP + 0x1d0]     ; 0045cb1f
    MOV dword ptr [ESP + 0x18],ECX      ; 0045cb25
    MOV dword ptr [0x01b4aea4],ECX      ; 0045cb29 | DAT_01b4aea4
    TEST ESI,ESI                        ; 0045cb2f
    JLE 0x0045cbbf                      ; 0045cb31
        ;   XREF to: 0045cbbf (CONDITIONAL_JUMP)  ; LAB_0045cbbf
    MOV EDI,dword ptr [ESP + 0x10]      ; 0045cb37
    MOV dword ptr [ESP + 0x20],ECX      ; 0045cb3b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045cb3f
        ;   Label: LAB_0045cb3f
    MOV ESI,dword ptr [EDI + 0x8]       ; 0045cb43
    MOV EDX,EDI                         ; 0045cb46
    CMP EAX,ESI                         ; 0045cb48
    JL 0x0045cba9                       ; 0045cb4a
        ;   XREF to: 0045cba9 (CONDITIONAL_JUMP)  ; LAB_0045cba9
    CMP EAX,dword ptr [EDI + 0xc]       ; 0045cb4c
    JG 0x0045cba9                       ; 0045cb4f
        ;   XREF to: 0045cba9 (CONDITIONAL_JUMP)  ; LAB_0045cba9
    MOV EBX,dword ptr [0x01b4aea4]      ; 0045cb51 | DAT_01b4aea4
    XOR ECX,ECX                         ; 0045cb57
    TEST EBX,EBX                        ; 0045cb59
    JLE 0x0045cb7c                      ; 0045cb5b
        ;   XREF to: 0045cb7c (CONDITIONAL_JUMP)  ; LAB_0045cb7c
    LEA ESI,[EBX*0x4 + 0x0]             ; 0045cb5d
    XOR EAX,EAX                         ; 0045cb64
    MOV EBX,dword ptr [EDX + 0x4]       ; 0045cb66
        ;   Label: LAB_0045cb66
    CMP EBX,dword ptr [EAX + 0x1b4aea8] ; 0045cb69
    JGE 0x0045ccc0                      ; 0045cb6f
        ;   XREF to: 0045ccc0 (CONDITIONAL_JUMP)  ; LAB_0045ccc0
    ADD EAX,0x4                         ; 0045cb75
        ;   Label: LAB_0045cb75
    CMP EAX,ESI                         ; 0045cb78
    JL 0x0045cb66                       ; 0045cb7a
        ;   XREF to: 0045cb66 (CONDITIONAL_JUMP)  ; LAB_0045cb66
    TEST ECX,ECX                        ; 0045cb7c
        ;   Label: LAB_0045cb7c
    JNZ 0x0045cba9                      ; 0045cb7e
        ;   XREF to: 0045cba9 (CONDITIONAL_JUMP)  ; LAB_0045cba9
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cb80
    MOV EAX,dword ptr [EDX]             ; 0045cb84
    MOV dword ptr [ECX + 0x1b4aea8],EAX ; 0045cb86
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cb8c
    LEA EDX,[ECX + 0x4]                 ; 0045cb8f
    MOV dword ptr [ECX + 0x1b4b2a8],EAX ; 0045cb92
    MOV ECX,dword ptr [0x01b4aea4]      ; 0045cb98 | DAT_01b4aea4
    INC ECX                             ; 0045cb9e
    MOV dword ptr [ESP + 0x20],EDX      ; 0045cb9f
    MOV dword ptr [0x01b4aea4],ECX      ; 0045cba3 | DAT_01b4aea4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045cba9
        ;   Label: LAB_0045cba9
    ADD EDI,0x10                        ; 0045cbad
    INC EAX                             ; 0045cbb0
    MOV EDX,dword ptr [EBP + 0x1d0]     ; 0045cbb1
    MOV dword ptr [ESP + 0x18],EAX      ; 0045cbb7
    CMP EAX,EDX                         ; 0045cbbb
    JL 0x0045cb3f                       ; 0045cbbd
        ;   XREF to: 0045cb3f (CONDITIONAL_JUMP)  ; LAB_0045cb3f
    MOV ECX,dword ptr [0x01b4aea4]      ; 0045cbbf | DAT_01b4aea4
        ;   Label: LAB_0045cbbf
    XOR EDI,EDI                         ; 0045cbc5
    TEST ECX,ECX                        ; 0045cbc7
    JLE 0x0045cc1d                      ; 0045cbc9
        ;   XREF to: 0045cc1d (CONDITIONAL_JUMP)  ; LAB_0045cc1d
    XOR ESI,ESI                         ; 0045cbcb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045cbcd
        ;   Label: LAB_0045cbcd
    IMUL EAX,dword ptr [EBP + 0x1cc0]   ; 0045cbd1
    MOV ECX,dword ptr [ESI + 0x1b4aea8] ; 0045cbd8
    MOV EBX,dword ptr [ESI + 0x1b4aea8] ; 0045cbde
    ADD EAX,ECX                         ; 0045cbe4
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 0045cbe6
    ADD EAX,EAX                         ; 0045cbec
    MOV ECX,dword ptr [EBP + 0x2f9c]    ; 0045cbee
    ADD EDX,EAX                         ; 0045cbf4
    ADD ECX,EAX                         ; 0045cbf6
    MOV EAX,dword ptr [ESI + 0x1b4b2a8] ; 0045cbf8
    SUB EAX,EBX                         ; 0045cbfe
    ADD EAX,EAX                         ; 0045cc00
    ADD EAX,0x2                         ; 0045cc02
    PUSH EAX                            ; 0045cc05
    PUSH ECX                            ; 0045cc06
    PUSH EDX                            ; 0045cc07
    ADD ESI,0x4                         ; 0045cc08
    INC EDI                             ; 0045cc0b
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00471271 ; 0045cc0c
        ;   XREF to: 00471271 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00471271(void * dest, void * src, int byte_count)
    MOV EAX,[0x01b4aea4]                ; 0045cc11 | DAT_01b4aea4
    ADD ESP,0xc                         ; 0045cc16
    CMP EDI,EAX                         ; 0045cc19
    JL 0x0045cbcd                       ; 0045cc1b
        ;   XREF to: 0045cbcd (CONDITIONAL_JUMP)  ; LAB_0045cbcd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045cc1d
        ;   Label: LAB_0045cc1d
    INC EAX                             ; 0045cc21
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045cc22
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045cc26
    CMP EAX,EDX                         ; 0045cc2a
    JLE 0x0045cb1d                      ; 0045cc2c
        ;   XREF to: 0045cb1d (CONDITIONAL_JUMP)  ; LAB_0045cb1d
    MOV dword ptr [EBP + 0x1d0],0x0     ; 0045cc32
        ;   Label: LAB_0045cc32
    ADD ESP,0x24                        ; 0045cc3c
    POP EBP                             ; 0045cc3f
    POP EDI                             ; 0045cc40
    POP ESI                             ; 0045cc41
    POP EBX                             ; 0045cc42
    RET                                 ; 0045cc43
    XOR EDX,EDX                         ; 0045cc44
        ;   Label: LAB_0045cc44
    MOV dword ptr [ESP],EDX             ; 0045cc46
    MOV dword ptr [ESP + 0x8],EDX       ; 0045cc49
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0045cc4d
    DEC EAX                             ; 0045cc53
    MOV dword ptr [ESP + 0x4],EAX       ; 0045cc54
    MOV EAX,dword ptr [EBP + 0x1cc4]    ; 0045cc58
    DEC EAX                             ; 0045cc5e
    MOV dword ptr [ESP + 0xc],EAX       ; 0045cc5f
    MOV EAX,ESP                         ; 0045cc63
    PUSH EAX                            ; 0045cc65
    PUSH EBP                            ; 0045cc66
    CALL core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0045c720 ; 0045cc67
        ;   XREF to: 0045c720 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0045c720(CDemonLight * this_ptr, CRect * source_rect)
    ADD ESP,0x8                         ; 0045cc6c
    MOV dword ptr [EBP + 0x1d0],0x0     ; 0045cc6f
    ADD ESP,0x24                        ; 0045cc79
    POP EBP                             ; 0045cc7c
    POP EDI                             ; 0045cc7d
    POP ESI                             ; 0045cc7e
    POP EBX                             ; 0045cc7f
    RET                                 ; 0045cc80
    MOV ESI,0x5bb42c                    ; 0045cc81 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0045cc81
    MOV EDI,0x202                       ; 0045cc86
    PUSH 0x5bb43f                       ; 0045cc8b | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01d71de0],ESI      ; 0045cc90 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0045cc96 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045cc9c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045cca1
    JMP 0x0045ca65                      ; 0045cca4
        ;   XREF to: 0045ca65 (UNCONDITIONAL_JUMP)  ; LAB_0045ca65
    MOV dword ptr [EDX],0x0             ; 0045cca9
        ;   Label: LAB_0045cca9
    JMP 0x0045ca83                      ; 0045ccaf
        ;   XREF to: 0045ca83 (UNCONDITIONAL_JUMP)  ; LAB_0045ca83
    MOV dword ptr [EAX + 0x8],0x0       ; 0045ccb4
        ;   Label: LAB_0045ccb4
    JMP 0x0045ca9e                      ; 0045ccbb
        ;   XREF to: 0045ca9e (UNCONDITIONAL_JUMP)  ; LAB_0045ca9e
    MOV EBX,dword ptr [EDX]             ; 0045ccc0
        ;   Label: LAB_0045ccc0
    CMP EBX,dword ptr [EAX + 0x1b4b2a8] ; 0045ccc2
    JG 0x0045cb75                       ; 0045ccc8
        ;   XREF to: 0045cb75 (CONDITIONAL_JUMP)  ; LAB_0045cb75
    CMP EBX,dword ptr [EAX + 0x1b4aea8] ; 0045ccce
    JL 0x0045cce5                       ; 0045ccd4
        ;   XREF to: 0045cce5 (CONDITIONAL_JUMP)  ; LAB_0045cce5
    MOV EBX,dword ptr [EDX + 0x4]       ; 0045ccd6
    CMP EBX,dword ptr [EAX + 0x1b4b2a8] ; 0045ccd9
    JLE 0x0045cba9                      ; 0045ccdf
        ;   XREF to: 0045cba9 (CONDITIONAL_JUMP)  ; LAB_0045cba9
    MOV EBX,dword ptr [EDX]             ; 0045cce5
        ;   Label: LAB_0045cce5
    CMP EBX,dword ptr [EAX + 0x1b4aea8] ; 0045cce7
    JGE 0x0045ccfa                      ; 0045cced
        ;   XREF to: 0045ccfa (CONDITIONAL_JUMP)  ; LAB_0045ccfa
    MOV ECX,0x1                         ; 0045ccef
    MOV dword ptr [EAX + 0x1b4aea8],EBX ; 0045ccf4
    MOV EBX,dword ptr [EDX + 0x4]       ; 0045ccfa
        ;   Label: LAB_0045ccfa
    CMP EBX,dword ptr [EAX + 0x1b4b2a8] ; 0045ccfd
    JLE 0x0045cd10                      ; 0045cd03
        ;   XREF to: 0045cd10 (CONDITIONAL_JUMP)  ; LAB_0045cd10
    MOV dword ptr [EAX + 0x1b4b2a8],EBX ; 0045cd05
    JMP 0x0045cba9                      ; 0045cd0b
        ;   XREF to: 0045cba9 (UNCONDITIONAL_JUMP)  ; LAB_0045cba9
    TEST ECX,ECX                        ; 0045cd10
        ;   Label: LAB_0045cd10
    JNZ 0x0045cb7c                      ; 0045cd12
        ;   XREF to: 0045cb7c (CONDITIONAL_JUMP)  ; LAB_0045cb7c
    JMP 0x0045cb75                      ; 0045cd18
        ;   XREF to: 0045cb75 (UNCONDITIONAL_JUMP)  ; LAB_0045cb75

