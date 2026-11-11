; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
; int              Stack[0xc]:4   force_render
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 00535f4c
;
; Referenced Globals:
;   undefined4 DAT_005f1848
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00875494
;   undefined4 DAT_012a6558
;   undefined4 DAT_013405b0
;   undefined4 DAT_015484c8
;   undefined4 DAT_015484cc
;   undefined4 DAT_015484d0
;   undefined4 DAT_015484d4
;   undefined4 DAT_015484d8
;   undefined4 DAT_01c60dac
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.halo_mode
;
; Called Functions:
;   core_dcamera.cpp_blendCoronaTextureSpan_FUN_0044e590
;   core_dcamera.cpp_FUN_0044a3e0
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e690
        ;   Label: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
    PUSH ESI                            ; 0044e691
    PUSH EDI                            ; 0044e692
    PUSH EBP                            ; 0044e693
    SUB ESP,0x84                        ; 0044e694
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0044e69a
    MOV EAX,[0x005fe9dc]                ; 0044e6a1 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xc],0x0       ; 0044e6a6 | g_CGameInstance.halo_mode
    JNZ 0x0044e6c5                      ; 0044e6aa
        ;   XREF to: 0044e6c5 (CONDITIONAL_JUMP)  ; LAB_0044e6c5
    TEST EBX,EBX                        ; 0044e6ac
    JNZ 0x0044e834                      ; 0044e6ae
        ;   XREF to: 0044e834 (CONDITIONAL_JUMP)  ; LAB_0044e834
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044e6b4
    CMP dword ptr [EAX + 0x20],0x0      ; 0044e6bb
    JZ 0x0044e834                       ; 0044e6bf
        ;   XREF to: 0044e834 (CONDITIONAL_JUMP)  ; LAB_0044e834
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044e6c5
        ;   Label: LAB_0044e6c5
    PUSH EAX                            ; 0044e6cc
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0044e6cd
    PUSH EDI                            ; 0044e6d4
    LEA ESI,[ESP + 0x8]                 ; 0044e6d5
    MOV [0x015484c8],EAX                ; 0044e6d9 | DAT_015484c8
    CALL core_dcamera.cpp_FUN_0044a3e0  ; 0044e6de
        ;   XREF to: 0044a3e0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044a3e0()
    LEA ESI,[ESP + 0x8]                 ; 0044e6e3
    ADD ESP,0x8                         ; 0044e6e7
    MOV EDI,0x15484d0                   ; 0044e6ea
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044e6ef
    MOVSD ES:EDI,ESI                    ; 0044e6f6 | DAT_015484d0
    MOVSD ES:EDI,ESI                    ; 0044e6f7 | DAT_015484d4
    MOVSD ES:EDI,ESI                    ; 0044e6f8 | DAT_015484d8
    MOV EBP,dword ptr [EAX + 0x20]      ; 0044e6f9
    TEST EBP,EBP                        ; 0044e6fc
    JZ 0x0044e84c                       ; 0044e6fe
        ;   XREF to: 0044e84c (CONDITIONAL_JUMP)  ; LAB_0044e84c
    MOV EDX,dword ptr [0x015484d0]      ; 0044e704 | DAT_015484d0
    TEST EDX,EDX                        ; 0044e70a
    JZ 0x0044e841                       ; 0044e70c
        ;   XREF to: 0044e841 (CONDITIONAL_JUMP)  ; LAB_0044e841
    MOV ESI,0x1                         ; 0044e712
    MOV EAX,[0x013405b0]                ; 0044e717 | DAT_013405b0
    MOV EBP,dword ptr [0x015484d4]      ; 0044e71c | DAT_015484d4
    ADD EAX,0x10                        ; 0044e722
    MOV EDI,EDX                         ; 0044e725
    MOV CL,AL                           ; 0044e727
    MOV dword ptr [0x015484cc],ESI      ; 0044e729 | DAT_015484cc
    SAR EDI,CL                          ; 0044e72f
    SAR EBP,CL                          ; 0044e731
    MOV dword ptr [0x015484d0],EDI      ; 0044e733 | DAT_015484d0
    MOV dword ptr [0x015484d4],EBP      ; 0044e739 | DAT_015484d4
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044e73f
        ;   Label: LAB_0044e73f
    MOV ECX,dword ptr [EAX + 0x154]     ; 0044e746
    XOR EDX,EDX                         ; 0044e74c
    TEST ECX,ECX                        ; 0044e74e
    JLE 0x0044e790                      ; 0044e750
        ;   XREF to: 0044e790 (CONDITIONAL_JUMP)  ; LAB_0044e790
    XOR EAX,EAX                         ; 0044e752
    MOV ECX,dword ptr [ESP + 0x98]      ; 0044e754
        ;   Label: LAB_0044e754
    MOV ECX,dword ptr [ECX + 0x144]     ; 0044e75b
    XOR ESI,ESI                         ; 0044e761
    MOV dword ptr [EAX + 0x14fb300],ECX ; 0044e763
    MOV ECX,dword ptr [ESP + 0x98]      ; 0044e769
    MOV dword ptr [EAX + 0x14fb6c0],ESI ; 0044e770
    INC EDX                             ; 0044e776
    MOV EDI,dword ptr [ECX + 0x154]     ; 0044e777
    ADD EAX,0x4                         ; 0044e77d
    CMP EDX,EDI                         ; 0044e780
    JL 0x0044e754                       ; 0044e782
        ;   XREF to: 0044e754 (CONDITIONAL_JUMP)  ; LAB_0044e754
    LEA EAX,[EAX]                       ; 0044e784
    LEA EDX,[EDX]                       ; 0044e78a
    TEST EBX,EBX                        ; 0044e790
        ;   Label: LAB_0044e790
    JNZ 0x0044e876                      ; 0044e792
        ;   XREF to: 0044e876 (CONDITIONAL_JUMP)  ; LAB_0044e876
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044e798
    CMP dword ptr [EAX + 0x20],0x0      ; 0044e79f
    JZ 0x0044e876                       ; 0044e7a3
        ;   XREF to: 0044e876 (CONDITIONAL_JUMP)  ; LAB_0044e876
    MOV dword ptr [0x005f1848],0xffffffff ; 0044e7a9 | DAT_005f1848
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044e7b3
    CMP dword ptr [EAX + 0x20],0x2      ; 0044e7ba
    JNZ 0x0044e876                      ; 0044e7be
        ;   XREF to: 0044e876 (CONDITIONAL_JUMP)  ; LAB_0044e876
    MOV ECX,dword ptr [0x012a6558]      ; 0044e7c4 | DAT_012a6558
    TEST ECX,ECX                        ; 0044e7ca
    JBE 0x0044e860                      ; 0044e7cc
        ;   XREF to: 0044e860 (CONDITIONAL_JUMP)  ; LAB_0044e860
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0044e7d2
    XOR EAX,EAX                         ; 0044e7d9
    IMUL EDX,ECX,0x13384                ; 0044e7db
    CMP ESI,dword ptr [EAX + 0x12a655c] ; 0044e7e1
        ;   Label: LAB_0044e7e1
    JNZ 0x0044e857                      ; 0044e7e7
        ;   XREF to: 0044e857 (CONDITIONAL_JUMP)  ; LAB_0044e857
    MOV EDI,0x12a655c                   ; 0044e7ed
    ADD EDI,EAX                         ; 0044e7f2
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044e7f4
    MOV EBP,dword ptr [EAX + 0x154]     ; 0044e7fb
    XOR ESI,ESI                         ; 0044e801
    TEST EBP,EBP                        ; 0044e803
    JLE 0x0044e834                      ; 0044e805
        ;   XREF to: 0044e834 (CONDITIONAL_JUMP)  ; LAB_0044e834
    MOV EBX,EDI                         ; 0044e807
    MOV EDX,dword ptr [ESP + 0x98]      ; 0044e809
        ;   Label: LAB_0044e809
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044e810
    CMP EAX,dword ptr [EDX + 0x144]     ; 0044e813
    JNZ 0x0044e92e                      ; 0044e819
        ;   XREF to: 0044e92e (CONDITIONAL_JUMP)  ; LAB_0044e92e
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044e81f
        ;   Label: LAB_0044e81f
    INC ESI                             ; 0044e826
    MOV EDX,dword ptr [EAX + 0x154]     ; 0044e827
    ADD EBX,0x4                         ; 0044e82d
    CMP ESI,EDX                         ; 0044e830
    JL 0x0044e809                       ; 0044e832
        ;   XREF to: 0044e809 (CONDITIONAL_JUMP)  ; LAB_0044e809
    ADD ESP,0x84                        ; 0044e834
        ;   Label: LAB_0044e834
    POP EBP                             ; 0044e83a
    POP EDI                             ; 0044e83b
    POP ESI                             ; 0044e83c
    POP EBX                             ; 0044e83d
    MOV EAX,EAX                         ; 0044e83e
    RET                                 ; 0044e840
    MOV dword ptr [0x015484cc],EDX      ; 0044e841 | DAT_015484cc
        ;   Label: LAB_0044e841
    JMP 0x0044e73f                      ; 0044e847
        ;   XREF to: 0044e73f (UNCONDITIONAL_JUMP)  ; LAB_0044e73f
    MOV dword ptr [0x015484cc],EBP      ; 0044e84c | DAT_015484cc
        ;   Label: LAB_0044e84c
    JMP 0x0044e73f                      ; 0044e852
        ;   XREF to: 0044e73f (UNCONDITIONAL_JUMP)  ; LAB_0044e73f
    ADD EAX,0x13384                     ; 0044e857
        ;   Label: LAB_0044e857
    CMP EAX,EDX                         ; 0044e85c
    JL 0x0044e7e1                       ; 0044e85e
        ;   XREF to: 0044e7e1 (CONDITIONAL_JUMP)  ; LAB_0044e7e1
    MOV EAX,[0x012a6558]                ; 0044e860 | DAT_012a6558
        ;   Label: LAB_0044e860
    CMP EAX,0x8                         ; 0044e865
    JC 0x0044e945                       ; 0044e868
        ;   XREF to: 0044e945 (CONDITIONAL_JUMP)  ; LAB_0044e945
    XOR EDX,EDX                         ; 0044e86e
    MOV dword ptr [0x015484cc],EDX      ; 0044e870 | DAT_015484cc
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0044e876
        ;   Label: LAB_0044e876
    PUSH ECX                            ; 0044e87d
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0 ; 0044e87e
        ;   XREF to: 0045abd0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 0044e883
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044e886
    XOR EBX,EBX                         ; 0044e88d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0044e88f
    MOV dword ptr [ESP + 0x30],EBX      ; 0044e895
    TEST ESI,ESI                        ; 0044e899
    JLE 0x0044e834                      ; 0044e89b
        ;   XREF to: 0044e834 (CONDITIONAL_JUMP)  ; LAB_0044e834
    MOV EBP,0x14fba80                   ; 0044e89d
    MOV EAX,0xb2cfc8                    ; 0044e8a2
    MOV EDX,0x874588                    ; 0044e8a7
    MOV dword ptr [ESP + 0x3c],EBX      ; 0044e8ac
    MOV dword ptr [ESP + 0x1c],EBP      ; 0044e8b0
    MOV dword ptr [ESP + 0x18],EAX      ; 0044e8b4
    MOV dword ptr [ESP + 0x20],EDX      ; 0044e8b8
    MOV EDX,dword ptr [ESP + 0x98]      ; 0044e8bc
        ;   Label: LAB_0044e8bc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044e8c3
    MOV ECX,dword ptr [EDX + 0x144]     ; 0044e8c7
    CMP ECX,dword ptr [EAX + 0x14fb300] ; 0044e8cd
    JNZ 0x0044ed76                      ; 0044e8d3
        ;   XREF to: 0044ed76 (CONDITIONAL_JUMP)  ; LAB_0044ed76
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044e8d9
        ;   Label: LAB_0044e8d9
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044e8dd
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044e8e1
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044e8e5
    MOV EBP,dword ptr [ESP + 0x30]      ; 0044e8e9
    MOV EDX,dword ptr [ESP + 0x98]      ; 0044e8ed
    ADD ECX,0x4                         ; 0044e8f4
    ADD EBX,0x500                       ; 0044e8f7
    ADD ESI,0x140                       ; 0044e8fd
    ADD EDI,0xf00                       ; 0044e903
    INC EBP                             ; 0044e909
    MOV dword ptr [ESP + 0x3c],ECX      ; 0044e90a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044e90e
    MOV dword ptr [ESP + 0x18],ESI      ; 0044e912
    MOV dword ptr [ESP + 0x20],EDI      ; 0044e916
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044e91a
    MOV dword ptr [ESP + 0x30],EBP      ; 0044e920
    CMP EBP,ECX                         ; 0044e924
    JGE 0x0044e834                      ; 0044e926
        ;   XREF to: 0044e834 (CONDITIONAL_JUMP)  ; LAB_0044e834
    JMP 0x0044e8bc                      ; 0044e92c
        ;   XREF to: 0044e8bc (UNCONDITIONAL_JUMP)  ; LAB_0044e8bc
    PUSH EDI                            ; 0044e92e
        ;   Label: LAB_0044e92e
    MOV EBP,dword ptr [EBX + 0x3c4]     ; 0044e92f
    PUSH EBP                            ; 0044e935
    PUSH EAX                            ; 0044e936
    PUSH ESI                            ; 0044e937
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_0044e590 ; 0044e938
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_0044e590()
    ADD ESP,0x10                        ; 0044e93d
    JMP 0x0044e81f                      ; 0044e940
        ;   XREF to: 0044e81f (UNCONDITIONAL_JUMP)  ; LAB_0044e81f
    IMUL EAX,EAX,0x13384                ; 0044e945
        ;   Label: LAB_0044e945
    MOV EDX,0x12a655c                   ; 0044e94b
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0044e950
    MOV EBX,dword ptr [0x012a6558]      ; 0044e957 | DAT_012a6558
    PUSH ECX                            ; 0044e95d
    INC EBX                             ; 0044e95e
    ADD EDX,EAX                         ; 0044e95f
    MOV dword ptr [0x012a6558],EBX      ; 0044e961 | DAT_012a6558
    MOV dword ptr [ESP + 0x18],EDX      ; 0044e967
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0 ; 0044e96b
        ;   XREF to: 0045abd0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 0044e970
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044e973
    XOR ESI,ESI                         ; 0044e97a
    MOV EDI,dword ptr [EAX + 0x154]     ; 0044e97c
    MOV dword ptr [ESP + 0x40],ESI      ; 0044e982
    TEST EDI,EDI                        ; 0044e986
    JLE 0x0044ec85                      ; 0044e988
        ;   XREF to: 0044ec85 (CONDITIONAL_JUMP)  ; LAB_0044ec85
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044e98e
    ADD EAX,0x784                       ; 0044e992
    MOV dword ptr [ESP + 0x28],EAX      ; 0044e997
    MOV EAX,0x874588                    ; 0044e99b
    MOV EBP,0x14fba80                   ; 0044e9a0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044e9a5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044e9a9
    MOV dword ptr [ESP + 0x24],EBP      ; 0044e9ad
    MOV dword ptr [ESP + 0x34],EAX      ; 0044e9b1
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044e9b5
        ;   Label: LAB_0044e9b5
    MOV ECX,dword ptr [ESP + 0x98]      ; 0044e9b9
    SHL EAX,0x2                         ; 0044e9c0
    MOV EBX,dword ptr [ECX + 0x144]     ; 0044e9c3
    CMP EBX,dword ptr [EAX + 0x14fb300] ; 0044e9c9
    JZ 0x0044ec15                       ; 0044e9cf
        ;   XREF to: 0044ec15 (CONDITIONAL_JUMP)  ; LAB_0044ec15
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044e9d5
    MOV dword ptr [ESP + 0x4c],EDX      ; 0044e9d9
    MOV EDX,dword ptr [EAX + 0x14fb300] ; 0044e9dd
    MOV EAX,dword ptr [EAX + 0x14fb6c0] ; 0044e9e3
    MOV dword ptr [ESP + 0xc],EDX       ; 0044e9e9
    MOV dword ptr [ESP + 0x44],EAX      ; 0044e9ed
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044e9f1
    MOV ESI,EDX                         ; 0044e9f5
    MOV dword ptr [ESP + 0x38],EAX      ; 0044e9f7
    IMUL EAX,EDX,0xc                    ; 0044e9fb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044e9fe
    ADD EDX,EAX                         ; 0044ea02
    MOV dword ptr [ESP + 0x74],EDX      ; 0044ea04
    MOV EAX,ESI                         ; 0044ea08
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044ea0a
    SHL EAX,0x2                         ; 0044ea0e
    MOV CL,byte ptr [0x013405b0]        ; 0044ea11 | DAT_013405b0
    ADD EDX,EAX                         ; 0044ea17
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044ea19
    MOV dword ptr [ESP + 0x68],EDX      ; 0044ea1d
    MOV EDX,ESI                         ; 0044ea21
    SHL EAX,CL                          ; 0044ea23
    SHL EDX,CL                          ; 0044ea25
    MOV EAX,dword ptr [EAX*0x4 + 0x1c60dac] ; 0044ea27 | DAT_01c60dac
    SHL EDX,0x2                         ; 0044ea2e
    ADD EAX,EDX                         ; 0044ea31
    MOV EDI,ESI                         ; 0044ea33
    MOV dword ptr [ESP + 0x70],EAX      ; 0044ea35
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044ea39
    ADD EAX,EDI                         ; 0044ea3d
    MOV EBP,dword ptr [ESP + 0x44]      ; 0044ea3f
    MOV dword ptr [ESP + 0x64],EAX      ; 0044ea43
    CMP ESI,EBP                         ; 0044ea47
    JGE 0x0044eb84                      ; 0044ea49
        ;   XREF to: 0044eb84 (CONDITIONAL_JUMP)  ; LAB_0044eb84
    XOR DL,DL                           ; 0044ea4f
        ;   Label: LAB_0044ea4f
    MOV EAX,dword ptr [ESP + 0x70]      ; 0044ea51
    MOV byte ptr [ESP + 0x80],DL        ; 0044ea55
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044ea5c
    MOV EAX,dword ptr [EAX]             ; 0044ea60
    CMP EAX,dword ptr [EDX]             ; 0044ea62
    JNC 0x0044eb2b                      ; 0044ea64
        ;   XREF to: 0044eb2b (CONDITIONAL_JUMP)  ; LAB_0044eb2b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044ea6a
    MOV EDX,dword ptr [0x015484c8]      ; 0044ea6e | DAT_015484c8
    MOV EAX,dword ptr [EAX]             ; 0044ea74
    SUB EAX,dword ptr [EDX]             ; 0044ea76
    CDQ                                 ; 0044ea78
    XOR EAX,EDX                         ; 0044ea79
    SUB EAX,EDX                         ; 0044ea7b
    MOV EDX,dword ptr [0x015484c8]      ; 0044ea7d | DAT_015484c8
    MOV ESI,dword ptr [EDX + 0xc]       ; 0044ea83
    MOV EBX,EAX                         ; 0044ea86
    CMP EAX,ESI                         ; 0044ea88
    JGE 0x0044eb2b                      ; 0044ea8a
        ;   XREF to: 0044eb2b (CONDITIONAL_JUMP)  ; LAB_0044eb2b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044ea90
    MOV EDI,dword ptr [EDX + 0x4]       ; 0044ea94
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044ea97
    SUB EAX,EDI                         ; 0044ea9a
    CDQ                                 ; 0044ea9c
    XOR EAX,EDX                         ; 0044ea9d
    SUB EAX,EDX                         ; 0044ea9f
    MOV EDX,dword ptr [0x015484c8]      ; 0044eaa1 | DAT_015484c8
    MOV EBP,dword ptr [EDX + 0xc]       ; 0044eaa7
    MOV ECX,EAX                         ; 0044eaaa
    CMP EAX,EBP                         ; 0044eaac
    JGE 0x0044eb2b                      ; 0044eaae
        ;   XREF to: 0044eb2b (CONDITIONAL_JUMP)  ; LAB_0044eb2b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044eab4
    MOV ESI,dword ptr [EDX + 0x8]       ; 0044eab8
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044eabb
    SUB EAX,ESI                         ; 0044eabe
    CDQ                                 ; 0044eac0
    XOR EAX,EDX                         ; 0044eac1
    SUB EAX,EDX                         ; 0044eac3
    MOV EDX,dword ptr [0x015484c8]      ; 0044eac5 | DAT_015484c8
    CMP EAX,dword ptr [EDX + 0xc]       ; 0044eacb
    JGE 0x0044eb2b                      ; 0044eace
        ;   XREF to: 0044eb2b (CONDITIONAL_JUMP)  ; LAB_0044eb2b
    IMUL ECX,ECX                        ; 0044ead0
    IMUL EBX,EBX                        ; 0044ead3
    IMUL EAX,EAX                        ; 0044ead6
    ADD ECX,EBX                         ; 0044ead9
    ADD ECX,EAX                         ; 0044eadb
    MOV EBP,dword ptr [EDX + 0x10]      ; 0044eadd
    MOV dword ptr [ESP + 0x58],ECX      ; 0044eae0
    CMP ECX,EBP                         ; 0044eae4
    JGE 0x0044eb2b                      ; 0044eae6
        ;   XREF to: 0044eb2b (CONDITIONAL_JUMP)  ; LAB_0044eb2b
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044eae8
    MOV ESI,dword ptr [ESP + 0x70]      ; 0044eaec
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044eaf0
    MOV EAX,[0x015484cc]                ; 0044eaf4 | DAT_015484cc
    MOV ESI,dword ptr [ESI]             ; 0044eaf9
    TEST EAX,EAX                        ; 0044eafb
    JNZ 0x0044ec9d                      ; 0044eafd
        ;   XREF to: 0044ec9d (CONDITIONAL_JUMP)  ; LAB_0044ec9d
    MOV EAX,[0x015484c8]                ; 0044eb03 | DAT_015484c8
        ;   Label: LAB_0044eb03
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044eb08
    MOV EDX,dword ptr [EAX + 0x10]      ; 0044eb0c
    SUB EDX,ECX                         ; 0044eb0f
    SAR EDX,0x10                        ; 0044eb11
    IMUL EDX,EDX,0x3f                   ; 0044eb14
    MOV ECX,dword ptr [EAX + 0x10]      ; 0044eb17
    SAR ECX,0x10                        ; 0044eb1a
    MOV EAX,EDX                         ; 0044eb1d
    SAR EDX,0x1f                        ; 0044eb1f
    IDIV ECX                            ; 0044eb22
    MOV byte ptr [ESP + 0x80],AL        ; 0044eb24
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044eb2b
        ;   Label: LAB_0044eb2b
    MOV EDI,dword ptr [ESP + 0x68]      ; 0044eb2f
    MOV EBP,dword ptr [ESP + 0x74]      ; 0044eb33
    MOV AL,byte ptr [ESP + 0x80]        ; 0044eb37
    MOV ESI,dword ptr [ESP + 0x70]      ; 0044eb3e
    MOV CL,byte ptr [0x013405b0]        ; 0044eb42 | DAT_013405b0
    LEA EBX,[EDX + 0x1]                 ; 0044eb48
    ADD EDI,0x4                         ; 0044eb4b
    ADD EBP,0xc                         ; 0044eb4e
    MOV byte ptr [EDX],AL               ; 0044eb51
    MOV EAX,0x1                         ; 0044eb53
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044eb58
    SHL EAX,CL                          ; 0044eb5c
    MOV dword ptr [ESP + 0x64],EBX      ; 0044eb5e
    SHL EAX,0x2                         ; 0044eb62
    MOV dword ptr [ESP + 0x68],EDI      ; 0044eb65
    ADD ESI,EAX                         ; 0044eb69
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044eb6b
    MOV dword ptr [ESP + 0x74],EBP      ; 0044eb6f
    INC EAX                             ; 0044eb73
    MOV dword ptr [ESP + 0x70],ESI      ; 0044eb74
    MOV dword ptr [ESP + 0xc],EAX       ; 0044eb78
    CMP EAX,EDX                         ; 0044eb7c
    JL 0x0044ea4f                       ; 0044eb7e
        ;   XREF to: 0044ea4f (CONDITIONAL_JUMP)  ; LAB_0044ea4f
    IMUL EBX,dword ptr [ESP + 0x4c],0x140 ; 0044eb84
        ;   Label: LAB_0044eb84
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0044eb8c
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044eb90
    SHL EDX,0x2                         ; 0044eb94
    ADD EDX,ECX                         ; 0044eb97
    ADD ECX,0x784                       ; 0044eb99
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044eb9f
    ADD ECX,EBX                         ; 0044eba2
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 0044eba4
    ADD ECX,EAX                         ; 0044ebaa
    CMP EAX,EDX                         ; 0044ebac
    JGE 0x0044ebb9                      ; 0044ebae
        ;   XREF to: 0044ebb9 (CONDITIONAL_JUMP)  ; LAB_0044ebb9
    CMP byte ptr [ECX],0x0              ; 0044ebb0
        ;   Label: LAB_0044ebb0
    JZ 0x0044ed58                       ; 0044ebb3
        ;   XREF to: 0044ed58 (CONDITIONAL_JUMP)  ; LAB_0044ed58
    IMUL ECX,dword ptr [ESP + 0x4c],0x140 ; 0044ebb9
        ;   Label: LAB_0044ebb9
    MOV EBX,dword ptr [ESP + 0x38]      ; 0044ebc1
    ADD EBX,0x784                       ; 0044ebc5
    ADD ECX,EBX                         ; 0044ebcb
    ADD ECX,EDX                         ; 0044ebcd
    DEC ECX                             ; 0044ebcf
    CMP EDX,EAX                         ; 0044ebd0
    JLE 0x0044ebdd                      ; 0044ebd2
        ;   XREF to: 0044ebdd (CONDITIONAL_JUMP)  ; LAB_0044ebdd
    CMP byte ptr [ECX],0x0              ; 0044ebd4
        ;   Label: LAB_0044ebd4
    JZ 0x0044ed67                       ; 0044ebd7
        ;   XREF to: 0044ed67 (CONDITIONAL_JUMP)  ; LAB_0044ed67
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044ebdd
        ;   Label: LAB_0044ebdd
    MOV EBP,dword ptr [ESP + 0x38]      ; 0044ebe1
    SHL ECX,0x2                         ; 0044ebe5
    ADD ECX,EBP                         ; 0044ebe8
    MOV dword ptr [ECX + 0x4],EAX       ; 0044ebea
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044ebed
    PUSH EAX                            ; 0044ebf1
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044ebf2
    MOV dword ptr [ECX + 0x3c4],EDX     ; 0044ebf6
    MOV EDX,dword ptr [EAX*0x4 + 0x14fb6c0] ; 0044ebfc
    PUSH EDX                            ; 0044ec03
    MOV ECX,dword ptr [EAX*0x4 + 0x14fb300] ; 0044ec04
    PUSH ECX                            ; 0044ec0b
    PUSH EAX                            ; 0044ec0c
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_0044e590 ; 0044ec0d
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_0044e590()
    ADD ESP,0x10                        ; 0044ec12
    MOV ESI,dword ptr [ESP + 0x28]      ; 0044ec15
        ;   Label: LAB_0044ec15
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044ec19
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044ec1d
    MOV ECX,dword ptr [ESP + 0x34]      ; 0044ec21
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044ec25
    ADD ESI,0x140                       ; 0044ec29
    ADD EDI,0x500                       ; 0044ec2f
    MOV EDX,dword ptr [EAX*0x4 + 0x14fb300] ; 0044ec35
    ADD EBP,0xf00                       ; 0044ec3c
    MOV dword ptr [ECX + 0x4],EDX       ; 0044ec42
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044ec45
    MOV EAX,dword ptr [EAX*0x4 + 0x14fb6c0] ; 0044ec49
    INC EDX                             ; 0044ec50
    MOV dword ptr [ECX + 0x3c4],EAX     ; 0044ec51
    LEA EAX,[ECX + 0x4]                 ; 0044ec57
    MOV dword ptr [ESP + 0x40],EDX      ; 0044ec5a
    MOV dword ptr [ESP + 0x34],EAX      ; 0044ec5e
    MOV EAX,EDX                         ; 0044ec62
    MOV EDX,dword ptr [ESP + 0x98]      ; 0044ec64
    MOV dword ptr [ESP + 0x28],ESI      ; 0044ec6b
    MOV dword ptr [ESP + 0x24],EDI      ; 0044ec6f
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044ec73
    MOV dword ptr [ESP + 0x2c],EBP      ; 0044ec79
    CMP EAX,ECX                         ; 0044ec7d
    JL 0x0044e9b5                       ; 0044ec7f
        ;   XREF to: 0044e9b5 (CONDITIONAL_JUMP)  ; LAB_0044e9b5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044ec85
        ;   Label: LAB_0044ec85
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0044ec89
    MOV dword ptr [EAX],EDX             ; 0044ec90
    ADD ESP,0x84                        ; 0044ec92
    POP EBP                             ; 0044ec98
    POP EDI                             ; 0044ec99
    POP ESI                             ; 0044ec9a
    POP EBX                             ; 0044ec9b
    RET                                 ; 0044ec9c
    MOV EBP,dword ptr [0x015484d0]      ; 0044ec9d | DAT_015484d0
        ;   Label: LAB_0044ec9d
    MOV EDI,dword ptr [0x015484d4]      ; 0044eca3 | DAT_015484d4
    MOV EAX,[0x015484d8]                ; 0044eca9 | DAT_015484d8
    XOR EDX,EDX                         ; 0044ecae
    MOV dword ptr [ESP + 0x50],EAX      ; 0044ecb0
    MOV dword ptr [ESP + 0x54],EDX      ; 0044ecb4
    TEST ESI,ESI                        ; 0044ecb8
    JZ 0x0044ed25                       ; 0044ecba
        ;   XREF to: 0044ed25 (CONDITIONAL_JUMP)  ; LAB_0044ed25
    MOV EAX,0x7fffffff                  ; 0044ecbc
    MOV EDX,EAX                         ; 0044ecc1
    SAR EDX,0x1f                        ; 0044ecc3
    IDIV ESI                            ; 0044ecc6
    MOV ESI,EAX                         ; 0044ecc8
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044ecca
        ;   Label: LAB_0044ecca
    SUB EDX,ESI                         ; 0044ecce
    MOV EAX,EDX                         ; 0044ecd0
    SAR EDX,0x1f                        ; 0044ecd2
    SHL EDX,0x4                         ; 0044ecd5
    SBB EAX,EDX                         ; 0044ecd8
    SAR EAX,0x4                         ; 0044ecda
    SUB EBP,EBX                         ; 0044ecdd
    SUB EDI,ECX                         ; 0044ecdf
    SHL EBP,0x4                         ; 0044ece1
    SHL EDI,0x4                         ; 0044ece4
    SHL EBX,0x8                         ; 0044ece7
    SHL ECX,0x8                         ; 0044ecea
    MOV dword ptr [ESP + 0x78],EBP      ; 0044eced
    MOV dword ptr [ESP + 0x7c],EDI      ; 0044ecf1
    MOV EBP,EAX                         ; 0044ecf5
    MOV EDX,ESI                         ; 0044ecf7
    MOV EAX,0x10                        ; 0044ecf9
    MOV ESI,ECX                         ; 0044ecfe
        ;   Label: LAB_0044ecfe
    SAR ESI,0x8                         ; 0044ed00
    IMUL ESI,ESI,0x500                  ; 0044ed03
    MOV EDI,EBX                         ; 0044ed09
    SAR EDI,0x8                         ; 0044ed0b
    MOV EDI,dword ptr [ESI + EDI*0x4 + 0xb52a48] ; 0044ed0e
    LEA ESI,[EDX + -0x80]               ; 0044ed15
    CMP EDI,ESI                         ; 0044ed18
    JGE 0x0044ed2c                      ; 0044ed1a
        ;   XREF to: 0044ed2c (CONDITIONAL_JUMP)  ; LAB_0044ed2c
    TEST EAX,EAX                        ; 0044ed1c
    JNZ 0x0044ed48                      ; 0044ed1e
        ;   XREF to: 0044ed48 (CONDITIONAL_JUMP)  ; LAB_0044ed48
    JMP 0x0044eb03                      ; 0044ed20
        ;   XREF to: 0044eb03 (UNCONDITIONAL_JUMP)  ; LAB_0044eb03
    MOV ESI,0x7fffffff                  ; 0044ed25
        ;   Label: LAB_0044ed25
    JMP 0x0044ecca                      ; 0044ed2a
        ;   XREF to: 0044ecca (UNCONDITIONAL_JUMP)  ; LAB_0044ecca
    MOV ESI,dword ptr [ESP + 0x78]      ; 0044ed2c
        ;   Label: LAB_0044ed2c
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0044ed30
    DEC EAX                             ; 0044ed34
    ADD EDX,EBP                         ; 0044ed35
    ADD EBX,ESI                         ; 0044ed37
    ADD ECX,EDI                         ; 0044ed39
    TEST EAX,EAX                        ; 0044ed3b
    JG 0x0044ecfe                       ; 0044ed3d
        ;   XREF to: 0044ecfe (CONDITIONAL_JUMP)  ; LAB_0044ecfe
    TEST EAX,EAX                        ; 0044ed3f
    JNZ 0x0044ed48                      ; 0044ed41
        ;   XREF to: 0044ed48 (CONDITIONAL_JUMP)  ; LAB_0044ed48
    JMP 0x0044eb03                      ; 0044ed43
        ;   XREF to: 0044eb03 (UNCONDITIONAL_JUMP)  ; LAB_0044eb03
    CMP dword ptr [ESP + 0x54],0x0      ; 0044ed48
        ;   Label: LAB_0044ed48
    JNZ 0x0044eb03                      ; 0044ed4d
        ;   XREF to: 0044eb03 (CONDITIONAL_JUMP)  ; LAB_0044eb03
    JMP 0x0044eb2b                      ; 0044ed53
        ;   XREF to: 0044eb2b (UNCONDITIONAL_JUMP)  ; LAB_0044eb2b
    INC EAX                             ; 0044ed58
        ;   Label: LAB_0044ed58
    INC ECX                             ; 0044ed59
    CMP EAX,EDX                         ; 0044ed5a
    JL 0x0044ebb0                       ; 0044ed5c
        ;   XREF to: 0044ebb0 (CONDITIONAL_JUMP)  ; LAB_0044ebb0
    JMP 0x0044ebb9                      ; 0044ed62
        ;   XREF to: 0044ebb9 (UNCONDITIONAL_JUMP)  ; LAB_0044ebb9
    DEC EDX                             ; 0044ed67
        ;   Label: LAB_0044ed67
    DEC ECX                             ; 0044ed68
    CMP EDX,EAX                         ; 0044ed69
    JG 0x0044ebd4                       ; 0044ed6b
        ;   XREF to: 0044ebd4 (CONDITIONAL_JUMP)  ; LAB_0044ebd4
    JMP 0x0044ebdd                      ; 0044ed71
        ;   XREF to: 0044ebdd (UNCONDITIONAL_JUMP)  ; LAB_0044ebdd
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044ed76
        ;   Label: LAB_0044ed76
    MOV EAX,dword ptr [EAX + 0x14fb300] ; 0044ed7a
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044ed80
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0044ed84
    IMUL EBX,ESI,0xc                    ; 0044ed88
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044ed8b
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044ed8f
    MOV EBP,dword ptr [ESP + 0x18]      ; 0044ed93
    MOV EAX,dword ptr [EAX + 0x14fb6c0] ; 0044ed97
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044ed9d
    MOV dword ptr [ESP + 0x48],EAX      ; 0044eda1
    ADD EBP,ESI                         ; 0044eda5
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044eda7
    MOV CL,byte ptr [0x013405b0]        ; 0044edae | DAT_013405b0
    ADD EDX,EAX                         ; 0044edb4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044edb6
    MOV dword ptr [ESP + 0x60],EDX      ; 0044edba
    MOV EDX,ESI                         ; 0044edbe
    SHL EAX,CL                          ; 0044edc0
    SHL EDX,CL                          ; 0044edc2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c60dac] ; 0044edc4 | DAT_01c60dac
    SHL EDX,0x2                         ; 0044edcb
    ADD EBX,EDI                         ; 0044edce
    ADD EAX,EDX                         ; 0044edd0
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044edd2
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044edd6
    CMP ESI,EDX                         ; 0044edda
    JGE 0x0044e8d9                      ; 0044eddc
        ;   XREF to: 0044e8d9 (CONDITIONAL_JUMP)  ; LAB_0044e8d9
        ;   Label: LAB_0044eddc
    MOV EDX,dword ptr [ESP + 0x60]      ; 0044ede2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044ede6
    MOV ECX,dword ptr [EDX]             ; 0044edea
    CMP ECX,dword ptr [EAX]             ; 0044edec
    JBE 0x0044ee73                      ; 0044edee
        ;   XREF to: 0044ee73 (CONDITIONAL_JUMP)  ; LAB_0044ee73
    MOV ESI,dword ptr [0x015484c8]      ; 0044edf4 | DAT_015484c8
    MOV ECX,dword ptr [EBX]             ; 0044edfa | DAT_00875494
    MOV EDI,dword ptr [ESI]             ; 0044edfc
    SUB ECX,EDI                         ; 0044edfe
    MOV EAX,ECX                         ; 0044ee00
    CDQ                                 ; 0044ee02
    XOR EAX,EDX                         ; 0044ee03
    SUB EAX,EDX                         ; 0044ee05
    CMP EAX,dword ptr [ESI + 0xc]       ; 0044ee07
    JGE 0x0044ee73                      ; 0044ee0a
        ;   XREF to: 0044ee73 (CONDITIONAL_JUMP)  ; LAB_0044ee73
    MOV EDI,dword ptr [0x015484c8]      ; 0044ee0c | DAT_015484c8
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044ee12
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044ee15
    SUB ESI,EAX                         ; 0044ee18
    MOV EAX,ESI                         ; 0044ee1a
    CDQ                                 ; 0044ee1c
    XOR EAX,EDX                         ; 0044ee1d
    SUB EAX,EDX                         ; 0044ee1f
    CMP EAX,dword ptr [EDI + 0xc]       ; 0044ee21
    JGE 0x0044ee73                      ; 0044ee24
        ;   XREF to: 0044ee73 (CONDITIONAL_JUMP)  ; LAB_0044ee73
    MOV EAX,[0x015484c8]                ; 0044ee26 | DAT_015484c8
    MOV EDI,dword ptr [EBX + 0x8]       ; 0044ee2b
    SUB EDI,dword ptr [EAX + 0x8]       ; 0044ee2e
    MOV dword ptr [ESP + 0x10],EAX      ; 0044ee31
    MOV EAX,EDI                         ; 0044ee35
    CDQ                                 ; 0044ee37
    XOR EAX,EDX                         ; 0044ee38
    SUB EAX,EDX                         ; 0044ee3a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044ee3c
    CMP EAX,dword ptr [EDX + 0xc]       ; 0044ee40
    JGE 0x0044ee73                      ; 0044ee43
        ;   XREF to: 0044ee73 (CONDITIONAL_JUMP)  ; LAB_0044ee73
    IMUL ESI,ESI                        ; 0044ee45
    IMUL ECX,ECX                        ; 0044ee48
    MOV EDX,EDI                         ; 0044ee4b
    IMUL EDX,EDI                        ; 0044ee4d
    ADD ECX,ESI                         ; 0044ee50
    MOV EAX,[0x015484c8]                ; 0044ee52 | DAT_015484c8
    ADD EDX,ECX                         ; 0044ee57
    MOV ECX,dword ptr [EAX + 0x10]      ; 0044ee59
    CMP EDX,ECX                         ; 0044ee5c
    JGE 0x0044ee73                      ; 0044ee5e
        ;   XREF to: 0044ee73 (CONDITIONAL_JUMP)  ; LAB_0044ee73
    SUB ECX,EDX                         ; 0044ee60
    SAR ECX,0x10                        ; 0044ee62
    MOV EDX,dword ptr [EAX + 0x14]      ; 0044ee65
    MOV EAX,ECX                         ; 0044ee68
    IMUL EDX                            ; 0044ee6a
    SHRD EAX,EDX,0x10                   ; 0044ee6c
    ADD byte ptr [EBP],AL               ; 0044ee70
    MOV EAX,0x1                         ; 0044ee73
        ;   Label: LAB_0044ee73
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044ee78
    MOV EDI,dword ptr [ESP + 0x60]      ; 0044ee7c
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044ee80
    MOV CL,byte ptr [0x013405b0]        ; 0044ee84 | DAT_013405b0
    ADD EBX,0xc                         ; 0044ee8a
    SHL EAX,CL                          ; 0044ee8d
    INC EBP                             ; 0044ee8f
    SHL EAX,0x2                         ; 0044ee90
    ADD EDI,0x4                         ; 0044ee93
    ADD ESI,EAX                         ; 0044ee96
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044ee98
    MOV dword ptr [ESP + 0x60],EDI      ; 0044ee9c
    INC EAX                             ; 0044eea0
    MOV dword ptr [ESP + 0x5c],ESI      ; 0044eea1
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044eea5
    CMP EAX,EDX                         ; 0044eea9
    JMP 0x0044eddc                      ; 0044eeab
        ;   XREF to: 0044eddc (UNCONDITIONAL_JUMP)  ; LAB_0044eddc

