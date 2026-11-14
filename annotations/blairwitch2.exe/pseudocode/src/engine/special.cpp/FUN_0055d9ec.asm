; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_0055d9ec(SProjectedVertex *output,CVector3i *input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[19]:
;   core_bwspart.cpp_FUN_005a86a0 at 005a870d
;   core_chain.cpp_CChain_renderTransparent_FUN_005b56c0 at 005b5843
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0 at 00443b2f
;   core_fire.cpp_CCrater_render_FUN_00499a00 at 00499a70
;   core_fire.cpp_CFirefly_render_FUN_00495150 at 004951a9
;   core_fire.cpp_CLightningBolt_render_FUN_0049abd0 at 0049afcb
;   core_fire.cpp_CPopcorn_render_FUN_0049b9d0 at 0049ba16
;   core_fire.cpp_CRainDrop_render_FUN_0049bd40 at 0049bd86
;   core_fire.cpp_CShell_render_FUN_0049b6f0 at 0049b741
;   core_fire.cpp_CSmokeParticle_render_FUN_00493710 at 00493752
;   ... and 9 more
;
; Referenced Globals:
;   undefined4 DAT_0061c7d8
;   undefined4 DAT_0061c7dc
;   undefined4 DAT_0061c7e0
;   undefined4 DAT_0061c7e8
;   undefined4 DAT_0061c7ec
;   undefined4 DAT_0061c7f0
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;   undefined4 DAT_01c38b9c
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c38b40],0xffffffff ; 0055d9ec | DAT_01c38b40
        ;   Label: engine_special.cpp_FUN_0055d9ec
    JZ 0x0055db3a                       ; 0055d9f6
        ;   XREF to: 0055db3a (CONDITIONAL_JUMP)  ; LAB_0055db3a
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055d9fc
    MOV EAX,dword ptr [EBX]             ; 0055da00
    MOV ECX,dword ptr [EBX + 0x4]       ; 0055da02
    MOV EDX,dword ptr [EBX + 0x8]       ; 0055da05
    SUB EAX,dword ptr [0x01c38b78]      ; 0055da08 | DAT_01c38b78
    SUB ECX,dword ptr [0x01c38b7c]      ; 0055da0e | DAT_01c38b7c
    SUB EDX,dword ptr [0x01c38b80]      ; 0055da14 | DAT_01c38b80
    MOVD MM0,EAX                        ; 0055da1a
    MOVD MM1,ECX                        ; 0055da1d
    MOVD MM2,EDX                        ; 0055da20
    IMUL dword ptr [0x01c38b9c]         ; 0055da23 | DAT_01c38b9c
    MOV EBX,EAX                         ; 0055da29
    MOV ECX,EDX                         ; 0055da2b
    MOVD EAX,MM1                        ; 0055da2d
    IMUL dword ptr [0x01c38ba8]         ; 0055da30 | DAT_01c38ba8
    ADD EBX,EAX                         ; 0055da36
    ADC ECX,EDX                         ; 0055da38
    MOVD EAX,MM2                        ; 0055da3a
    IMUL dword ptr [0x01c38bb4]         ; 0055da3d | DAT_01c38bb4
    ADD EAX,EBX                         ; 0055da43
    ADC EDX,ECX                         ; 0055da45
    SHRD EAX,EDX,0x10                   ; 0055da47
    MOVD MM4,EAX                        ; 0055da4b
    MOVD EAX,MM0                        ; 0055da4e
    IMUL dword ptr [0x01c38ba0]         ; 0055da51 | DAT_01c38ba0
    MOV EBX,EAX                         ; 0055da57
    MOV ECX,EDX                         ; 0055da59
    MOVD EAX,MM1                        ; 0055da5b
    IMUL dword ptr [0x01c38bac]         ; 0055da5e | DAT_01c38bac
    ADD EBX,EAX                         ; 0055da64
    ADC ECX,EDX                         ; 0055da66
    MOVD EAX,MM2                        ; 0055da68
    IMUL dword ptr [0x01c38bb8]         ; 0055da6b | DAT_01c38bb8
    ADD EAX,EBX                         ; 0055da71
    ADC EDX,ECX                         ; 0055da73
    SHRD EAX,EDX,0x10                   ; 0055da75
    MOVD MM5,EAX                        ; 0055da79
    MOVD EAX,MM0                        ; 0055da7c
    IMUL dword ptr [0x01c38ba4]         ; 0055da7f | DAT_01c38ba4
    MOV EBX,EAX                         ; 0055da85
    MOV ECX,EDX                         ; 0055da87
    MOVD EAX,MM1                        ; 0055da89
    IMUL dword ptr [0x01c38bb0]         ; 0055da8c | DAT_01c38bb0
    ADD EBX,EAX                         ; 0055da92
    ADC ECX,EDX                         ; 0055da94
    MOVD EAX,MM2                        ; 0055da96
    IMUL dword ptr [0x01c38bbc]         ; 0055da99 | DAT_01c38bbc
    ADD EAX,EBX                         ; 0055da9f
    ADC EDX,ECX                         ; 0055daa1
    SHRD EAX,EDX,0x10                   ; 0055daa3
    MOVD MM6,EAX                        ; 0055daa7
    NEG EAX                             ; 0055daaa
    MOV EDX,EAX                         ; 0055daac
    XOR EAX,EAX                         ; 0055daae
    MOVD EBX,MM4                        ; 0055dab0
    MOVD ECX,MM6                        ; 0055dab3
    CMP EBX,ECX                         ; 0055dab6
    JLE 0x0055dabf                      ; 0055dab8
        ;   XREF to: 0055dabf (CONDITIONAL_JUMP)  ; LAB_0055dabf
    OR EAX,0x80000001                   ; 0055daba
    CMP EBX,EDX                         ; 0055dabf
        ;   Label: LAB_0055dabf
    JGE 0x0055dac8                      ; 0055dac1
        ;   XREF to: 0055dac8 (CONDITIONAL_JUMP)  ; LAB_0055dac8
    OR EAX,0x80000002                   ; 0055dac3
    MOVD EBX,MM5                        ; 0055dac8
        ;   Label: LAB_0055dac8
    CMP EBX,ECX                         ; 0055dacb
    JLE 0x0055dad4                      ; 0055dacd
        ;   XREF to: 0055dad4 (CONDITIONAL_JUMP)  ; LAB_0055dad4
    OR EAX,0x80000004                   ; 0055dacf
    CMP EBX,EDX                         ; 0055dad4
        ;   Label: LAB_0055dad4
    JGE 0x0055dadd                      ; 0055dad6
        ;   XREF to: 0055dadd (CONDITIONAL_JUMP)  ; LAB_0055dadd
    OR EAX,0x80000008                   ; 0055dad8
    CMP ECX,0x0                         ; 0055dadd
        ;   Label: LAB_0055dadd
    JG 0x0055dae7                       ; 0055dae0
        ;   XREF to: 0055dae7 (CONDITIONAL_JUMP)  ; LAB_0055dae7
    OR EAX,0x80000010                   ; 0055dae2
    MOV EBX,dword ptr [ESP + 0x4]       ; 0055dae7
        ;   Label: LAB_0055dae7
    MOVD dword ptr [EBX],MM4            ; 0055daeb
    MOVD dword ptr [EBX + 0x4],MM5      ; 0055daee
    MOVD dword ptr [EBX + 0x8],MM6      ; 0055daf2
    TEST EAX,0xffffffff                 ; 0055daf6
    JNZ 0x0055db34                      ; 0055dafb
        ;   XREF to: 0055db34 (CONDITIONAL_JUMP)  ; LAB_0055db34
    MOV EAX,0x7fffffff                  ; 0055dafd
    XOR EDX,EDX                         ; 0055db02
    IDIV ECX                            ; 0055db04
    MOV dword ptr [EBX + 0xc],EAX       ; 0055db06
    MOVD EAX,MM4                        ; 0055db09
    IMUL dword ptr [0x01c35e38]         ; 0055db0c | DAT_01c35e38
    IDIV ECX                            ; 0055db12
    ADD EAX,dword ptr [0x01c35e40]      ; 0055db14 | DAT_01c35e40
    MOV dword ptr [EBX + 0x10],EAX      ; 0055db1a
    MOVD EAX,MM5                        ; 0055db1d
    IMUL dword ptr [0x01c35e3c]         ; 0055db20 | DAT_01c35e3c
    IDIV ECX                            ; 0055db26
    ADD EAX,dword ptr [0x01c35e44]      ; 0055db28 | DAT_01c35e44
    MOV dword ptr [EBX + 0x14],EAX      ; 0055db2e
    EMMS                                ; 0055db31
    RET                                 ; 0055db33
    MOV dword ptr [EBX + 0x10],EAX      ; 0055db34
        ;   Label: LAB_0055db34
    EMMS                                ; 0055db37
    RET                                 ; 0055db39
    PUSH ESI                            ; 0055db3a
        ;   Label: LAB_0055db3a
    PUSH EDI                            ; 0055db3b
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055db3c
    MOV EDI,dword ptr [ESP + 0xc]       ; 0055db40
    MOV EAX,dword ptr [ESI]             ; 0055db44
    MOV EBX,dword ptr [ESI + 0x4]       ; 0055db46
    MOV ECX,dword ptr [ESI + 0x8]       ; 0055db49
    SUB EAX,dword ptr [0x01c38b78]      ; 0055db4c | DAT_01c38b78
    SUB EBX,dword ptr [0x01c38b7c]      ; 0055db52 | DAT_01c38b7c
    SUB ECX,dword ptr [0x01c38b80]      ; 0055db58 | DAT_01c38b80
    MOV [0x0061c7d8],EAX                ; 0055db5e | DAT_0061c7d8
    MOV dword ptr [0x0061c7dc],EBX      ; 0055db63 | DAT_0061c7dc
    MOV dword ptr [0x0061c7e0],ECX      ; 0055db69 | DAT_0061c7e0
    IMUL dword ptr [0x01c38b9c]         ; 0055db6f | DAT_01c38b9c
    MOV EBX,EAX                         ; 0055db75
    MOV ECX,EDX                         ; 0055db77
    MOV EAX,[0x0061c7dc]                ; 0055db79 | DAT_0061c7dc
    IMUL dword ptr [0x01c38ba8]         ; 0055db7e | DAT_01c38ba8
    ADD EBX,EAX                         ; 0055db84
    ADC ECX,EDX                         ; 0055db86
    MOV EAX,[0x0061c7e0]                ; 0055db88 | DAT_0061c7e0
    IMUL dword ptr [0x01c38bb4]         ; 0055db8d | DAT_01c38bb4
    ADD EAX,EBX                         ; 0055db93
    ADC EDX,ECX                         ; 0055db95
    SHRD EAX,EDX,0x10                   ; 0055db97
    MOV [0x0061c7e8],EAX                ; 0055db9b | DAT_0061c7e8
    MOV EAX,[0x0061c7d8]                ; 0055dba0 | DAT_0061c7d8
    IMUL dword ptr [0x01c38ba0]         ; 0055dba5 | DAT_01c38ba0
    MOV EBX,EAX                         ; 0055dbab
    MOV ECX,EDX                         ; 0055dbad
    MOV EAX,[0x0061c7dc]                ; 0055dbaf | DAT_0061c7dc
    IMUL dword ptr [0x01c38bac]         ; 0055dbb4 | DAT_01c38bac
    ADD EBX,EAX                         ; 0055dbba
    ADC ECX,EDX                         ; 0055dbbc
    MOV EAX,[0x0061c7e0]                ; 0055dbbe | DAT_0061c7e0
    IMUL dword ptr [0x01c38bb8]         ; 0055dbc3 | DAT_01c38bb8
    ADD EAX,EBX                         ; 0055dbc9
    ADC EDX,ECX                         ; 0055dbcb
    SHRD EAX,EDX,0x10                   ; 0055dbcd
    MOV [0x0061c7ec],EAX                ; 0055dbd1 | DAT_0061c7ec
    MOV EAX,[0x0061c7d8]                ; 0055dbd6 | DAT_0061c7d8
    IMUL dword ptr [0x01c38ba4]         ; 0055dbdb | DAT_01c38ba4
    MOV EBX,EAX                         ; 0055dbe1
    MOV ECX,EDX                         ; 0055dbe3
    MOV EAX,[0x0061c7dc]                ; 0055dbe5 | DAT_0061c7dc
    IMUL dword ptr [0x01c38bb0]         ; 0055dbea | DAT_01c38bb0
    ADD EBX,EAX                         ; 0055dbf0
    ADC ECX,EDX                         ; 0055dbf2
    MOV EAX,[0x0061c7e0]                ; 0055dbf4 | DAT_0061c7e0
    IMUL dword ptr [0x01c38bbc]         ; 0055dbf9 | DAT_01c38bbc
    ADD EAX,EBX                         ; 0055dbff
    ADC EDX,ECX                         ; 0055dc01
    SHRD EAX,EDX,0x10                   ; 0055dc03
    MOV [0x0061c7f0],EAX                ; 0055dc07 | DAT_0061c7f0
    NEG EAX                             ; 0055dc0c
    MOV EDX,EAX                         ; 0055dc0e
    XOR EAX,EAX                         ; 0055dc10
    MOV EBX,dword ptr [0x0061c7e8]      ; 0055dc12 | DAT_0061c7e8
    MOV ECX,dword ptr [0x0061c7f0]      ; 0055dc18 | DAT_0061c7f0
    CMP EBX,ECX                         ; 0055dc1e
    JLE 0x0055dc27                      ; 0055dc20
        ;   XREF to: 0055dc27 (CONDITIONAL_JUMP)  ; LAB_0055dc27
    OR EAX,0x80000001                   ; 0055dc22
    CMP EBX,EDX                         ; 0055dc27
        ;   Label: LAB_0055dc27
    JGE 0x0055dc30                      ; 0055dc29
        ;   XREF to: 0055dc30 (CONDITIONAL_JUMP)  ; LAB_0055dc30
    OR EAX,0x80000002                   ; 0055dc2b
    MOV EBX,dword ptr [0x0061c7ec]      ; 0055dc30 | DAT_0061c7ec
        ;   Label: LAB_0055dc30
    CMP EBX,ECX                         ; 0055dc36
    JLE 0x0055dc3f                      ; 0055dc38
        ;   XREF to: 0055dc3f (CONDITIONAL_JUMP)  ; LAB_0055dc3f
    OR EAX,0x80000004                   ; 0055dc3a
    CMP EBX,EDX                         ; 0055dc3f
        ;   Label: LAB_0055dc3f
    JGE 0x0055dc48                      ; 0055dc41
        ;   XREF to: 0055dc48 (CONDITIONAL_JUMP)  ; LAB_0055dc48
    OR EAX,0x80000008                   ; 0055dc43
    CMP ECX,0x0                         ; 0055dc48
        ;   Label: LAB_0055dc48
    JG 0x0055dc52                       ; 0055dc4b
        ;   XREF to: 0055dc52 (CONDITIONAL_JUMP)  ; LAB_0055dc52
    OR EAX,0x80000010                   ; 0055dc4d
    TEST EAX,0xffffffff                 ; 0055dc52
        ;   Label: LAB_0055dc52
    JNZ 0x0055dca1                      ; 0055dc57
        ;   XREF to: 0055dca1 (CONDITIONAL_JUMP)  ; LAB_0055dca1
    MOV EAX,[0x0061c7e8]                ; 0055dc59 | DAT_0061c7e8
    MOV dword ptr [EDI],EAX             ; 0055dc5e
    MOV dword ptr [EDI + 0x4],EBX       ; 0055dc60
    MOV dword ptr [EDI + 0x8],ECX       ; 0055dc63
    MOV EAX,0x7fffffff                  ; 0055dc66
    XOR EDX,EDX                         ; 0055dc6b
    IDIV ECX                            ; 0055dc6d
    MOV dword ptr [EDI + 0xc],EAX       ; 0055dc6f
    MOV EAX,[0x0061c7e8]                ; 0055dc72 | DAT_0061c7e8
    IMUL dword ptr [0x01c35e38]         ; 0055dc77 | DAT_01c35e38
    IDIV ECX                            ; 0055dc7d
    ADD EAX,dword ptr [0x01c35e40]      ; 0055dc7f | DAT_01c35e40
    MOV dword ptr [EDI + 0x10],EAX      ; 0055dc85
    MOV EAX,[0x0061c7ec]                ; 0055dc88 | DAT_0061c7ec
    IMUL dword ptr [0x01c35e3c]         ; 0055dc8d | DAT_01c35e3c
    IDIV ECX                            ; 0055dc93
    ADD EAX,dword ptr [0x01c35e44]      ; 0055dc95 | DAT_01c35e44
    MOV dword ptr [EDI + 0x14],EAX      ; 0055dc9b
    POP EDI                             ; 0055dc9e
    POP ESI                             ; 0055dc9f
    RET                                 ; 0055dca0
    MOV EDX,dword ptr [0x0061c7e8]      ; 0055dca1 | DAT_0061c7e8
        ;   Label: LAB_0055dca1
    MOV dword ptr [EDI],EDX             ; 0055dca7
    MOV dword ptr [EDI + 0x4],EBX       ; 0055dca9
    MOV dword ptr [EDI + 0x8],ECX       ; 0055dcac
    MOV dword ptr [EDI + 0x10],EAX      ; 0055dcaf
    POP EDI                             ; 0055dcb2
    POP ESI                             ; 0055dcb3
    RET                                 ; 0055dcb4

