; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_pos
; CDemonLight *    Stack[0xc]:4   light_source
; int              Stack[0x10]:4   intensity
; Local Variables:
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0 at 0044ee12
;
; Referenced Globals:
;   double g_LightScaleFactor = 0.00390625
;   CVector3i g_CameraOutOfBoundsCoord
;   undefined4 DAT_0151bf9a
;   undefined4 g_CameraOutOfBoundsY
;   undefined4 DAT_0151bf9e
;   undefined4 g_CameraOutOfBoundsZ
;   CVector3i g_TempProjectedCoord
;   undefined4 g_TempProjectedCoord.y
;   undefined4 g_TempProjectedCoord.z
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e790
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
    PUSH ESI                            ; 0044e791
    PUSH EDI                            ; 0044e792
    PUSH EBP                            ; 0044e793
    MOV EBP,ESP                         ; 0044e794
    SUB ESP,0x28                        ; 0044e796
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044e799
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044e79c
    CMP dword ptr [ESI + 0x1cd0],0x0    ; 0044e79f
    JNZ 0x0044e98b                      ; 0044e7a6
        ;   XREF to: 0044e98b (CONDITIONAL_JUMP)  ; LAB_0044e98b
    MOV EBX,dword ptr [EAX]             ; 0044e7ac
    MOV EDI,dword ptr [ESI + 0x16c]     ; 0044e7ae
    MOV EDX,dword ptr [ESI + 0x170]     ; 0044e7b4
    SUB EBX,EDI                         ; 0044e7ba
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044e7bc
    MOV dword ptr [EBP + -0x28],EBX     ; 0044e7c2
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044e7c5
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044e7c8
    SUB EBX,EDX                         ; 0044e7cb
    SUB EAX,ECX                         ; 0044e7cd
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044e7cf
    MOV dword ptr [EBP + -0x20],EAX     ; 0044e7d2
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044e7d5
    MOV dword ptr [EBP + -0x24],EBX     ; 0044e7db
    IMUL EDX                            ; 0044e7de
    SHRD EAX,EDX,0x10                   ; 0044e7e0
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044e7e4
    MOV EBX,EAX                         ; 0044e7e7
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044e7e9
    IMUL EDX                            ; 0044e7ef
    SHRD EAX,EDX,0x10                   ; 0044e7f1
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044e7f5
    ADD EBX,EAX                         ; 0044e7f8
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044e7fa
    IMUL EDX                            ; 0044e800
    SHRD EAX,EDX,0x10                   ; 0044e802
    ADD EBX,EAX                         ; 0044e806
    MOV dword ptr [0x03f9c178],EBX      ; 0044e808 | g_TempProjectedCoord.z
    TEST EBX,EBX                        ; 0044e80e
    JLE 0x0044e855                      ; 0044e810
        ;   XREF to: 0044e855 (CONDITIONAL_JUMP)  ; LAB_0044e855
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044e812
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044e815
    IMUL EDX                            ; 0044e81b
    SHRD EAX,EDX,0x10                   ; 0044e81d
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044e821
    MOV EBX,EAX                         ; 0044e824
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044e826
    IMUL EDX                            ; 0044e82c
    SHRD EAX,EDX,0x10                   ; 0044e82e
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044e832
    ADD EBX,EAX                         ; 0044e835
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044e837
    IMUL EDX                            ; 0044e83d
    SHRD EAX,EDX,0x10                   ; 0044e83f
    ADD EBX,EAX                         ; 0044e843
    MOV EDI,dword ptr [0x03f9c178]      ; 0044e845 | g_TempProjectedCoord.z
    MOV dword ptr [0x03f9c170],EBX      ; 0044e84b | g_TempProjectedCoord
    CMP EBX,EDI                         ; 0044e851
    JL 0x0044e8af                       ; 0044e853
        ;   XREF to: 0044e8af (CONDITIONAL_JUMP)  ; LAB_0044e8af
    MOV EAX,0x151bf98                   ; 0044e855 | g_CameraOutOfBoundsCoord
        ;   Label: LAB_0044e855
    CMP dword ptr [EAX + 0x8],0x0       ; 0044e85a | g_CameraOutOfBoundsZ | g_TempProjectedCoord.z
        ;   Label: LAB_0044e85a
    JLE 0x0044e8a6                      ; 0044e85e
        ;   XREF to: 0044e8a6 (CONDITIONAL_JUMP)  ; LAB_0044e8a6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044e860 | g_CameraOutOfBoundsY | g_TempProjectedCoord.y
    MOV EBX,dword ptr [ESI + 0x1cc0]    ; 0044e863
    SAR EDX,0x10                        ; 0044e869
    IMUL EBX,EDX                        ; 0044e86c
    MOV EDX,dword ptr [EAX]             ; 0044e86f | g_CameraOutOfBoundsCoord | g_TempProjectedCoord
    SAR EDX,0x10                        ; 0044e871
    ADD EDX,EBX                         ; 0044e874
    MOV EBX,dword ptr [ESI + 0x2f94]    ; 0044e876
    MOV DX,word ptr [EBX + EDX*0x2]     ; 0044e87c
    AND EDX,0xffff                      ; 0044e880
    JZ 0x0044e8a6                       ; 0044e886
        ;   XREF to: 0044e8a6 (CONDITIONAL_JUMP)  ; LAB_0044e8a6
    FILD dword ptr [EAX + 0x8]          ; 0044e888 | g_CameraOutOfBoundsZ | g_TempProjectedCoord.z
    FMUL double ptr [0x0061a122]        ; 0044e88b | g_LightScaleFactor
    FSTP float ptr [EBP + -0x10]        ; 0044e891
    FLD float ptr [EBP + -0x10]         ; 0044e894
    FCOMP float ptr [ESI + 0x140]       ; 0044e897
    FNSTSW AX                           ; 0044e89d
    SAHF                                ; 0044e89f
    JC 0x0044e954                       ; 0044e8a0
        ;   XREF to: 0044e954 (CONDITIONAL_JUMP)  ; LAB_0044e954
    XOR EAX,EAX                         ; 0044e8a6
        ;   Label: LAB_0044e8a6
    MOV ESP,EBP                         ; 0044e8a8
    POP EBP                             ; 0044e8aa
    POP EDI                             ; 0044e8ab
    POP ESI                             ; 0044e8ac
    POP EBX                             ; 0044e8ad
    RET                                 ; 0044e8ae
    MOV EAX,EDI                         ; 0044e8af
        ;   Label: LAB_0044e8af
    NEG EAX                             ; 0044e8b1
    CMP EAX,EBX                         ; 0044e8b3
    JGE 0x0044e855                      ; 0044e8b5
        ;   XREF to: 0044e855 (CONDITIONAL_JUMP)  ; LAB_0044e855
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044e8b7
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044e8ba
    IMUL EDX                            ; 0044e8c0
    SHRD EAX,EDX,0x10                   ; 0044e8c2
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044e8c6
    MOV EBX,EAX                         ; 0044e8c9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044e8cb
    IMUL EDX                            ; 0044e8d1
    SHRD EAX,EDX,0x10                   ; 0044e8d3
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044e8d7
    ADD EBX,EAX                         ; 0044e8da
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044e8dc
    IMUL EDX                            ; 0044e8e2
    SHRD EAX,EDX,0x10                   ; 0044e8e4
    ADD EBX,EAX                         ; 0044e8e8
    MOV ECX,dword ptr [0x03f9c178]      ; 0044e8ea | g_TempProjectedCoord.z
    MOV dword ptr [0x03f9c174],EBX      ; 0044e8f0 | g_TempProjectedCoord.y
    CMP EBX,ECX                         ; 0044e8f6
    JGE 0x0044e855                      ; 0044e8f8
        ;   XREF to: 0044e855 (CONDITIONAL_JUMP)  ; LAB_0044e855
    MOV EAX,ECX                         ; 0044e8fe
    NEG EAX                             ; 0044e900
    CMP EAX,EBX                         ; 0044e902
    JGE 0x0044e855                      ; 0044e904
        ;   XREF to: 0044e855 (CONDITIONAL_JUMP)  ; LAB_0044e855
    MOV EAX,[0x03f9c170]                ; 0044e90a | g_TempProjectedCoord
    MOV EBX,ECX                         ; 0044e90f
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044e911
    IMUL EDX                            ; 0044e917
    IDIV EBX                            ; 0044e919
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044e91b
    ADD EAX,EDX                         ; 0044e921
    MOV EBX,dword ptr [0x03f9c178]      ; 0044e923 | g_TempProjectedCoord.z
    MOV [0x03f9c170],EAX                ; 0044e929 | g_TempProjectedCoord
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044e92e
    MOV EAX,[0x03f9c174]                ; 0044e934 | g_TempProjectedCoord.y
    IMUL EDX                            ; 0044e939
    IDIV EBX                            ; 0044e93b
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044e93d
    ADD EAX,EDX                         ; 0044e943
    MOV [0x03f9c174],EAX                ; 0044e945 | g_TempProjectedCoord.y
    MOV EAX,0x3f9c170                   ; 0044e94a | g_TempProjectedCoord
    JMP 0x0044e85a                      ; 0044e94f
        ;   XREF to: 0044e85a (UNCONDITIONAL_JUMP)  ; LAB_0044e85a
    FLD float ptr [ESI + 0x140]         ; 0044e954
        ;   Label: LAB_0044e954
    FSUB float ptr [EBP + -0x10]        ; 0044e95a
    FDIV float ptr [ESI + 0x140]        ; 0044e95d
    FSTP float ptr [EBP + -0x10]        ; 0044e963
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044e966
    MOV dword ptr [EBP + -0x4],EAX      ; 0044e969
    FILD dword ptr [EBP + -0x4]         ; 0044e96c
    FMUL float ptr [EBP + -0x10]        ; 0044e96f
    FSTP float ptr [EBP + -0x10]        ; 0044e972
    FLD float ptr [EBP + 0xfffffff0]    ; 0044e975
    FISTP dword ptr [EBP + 0x20]        ; 0044e97b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044e981
    MOV ESP,EBP                         ; 0044e984
    POP EBP                             ; 0044e986
    POP EDI                             ; 0044e987
    POP ESI                             ; 0044e988
    POP EBX                             ; 0044e989
    RET                                 ; 0044e98a
    MOV EBX,dword ptr [EAX]             ; 0044e98b
        ;   Label: LAB_0044e98b
    MOV ECX,dword ptr [ESI + 0x16c]     ; 0044e98d
    MOV EDI,dword ptr [ESI + 0x170]     ; 0044e993
    SUB EBX,ECX                         ; 0044e999
    MOV EDX,dword ptr [ESI + 0x174]     ; 0044e99b
    MOV dword ptr [EBP + -0x1c],EBX     ; 0044e9a1
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044e9a4
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044e9a7
    SUB EBX,EDI                         ; 0044e9aa
    SUB EAX,EDX                         ; 0044e9ac
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044e9ae
    MOV dword ptr [EBP + -0x14],EAX     ; 0044e9b1
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044e9b4
    MOV dword ptr [EBP + -0x18],EBX     ; 0044e9ba
    IMUL EDX                            ; 0044e9bd
    SHRD EAX,EDX,0x10                   ; 0044e9bf
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044e9c3
    MOV EBX,EAX                         ; 0044e9c6
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044e9c8
    IMUL EDX                            ; 0044e9ce
    SHRD EAX,EDX,0x10                   ; 0044e9d0
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044e9d4
    ADD EBX,EAX                         ; 0044e9d7
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044e9d9
    IMUL EDX                            ; 0044e9df
    SHRD EAX,EDX,0x10                   ; 0044e9e1
    ADD EBX,EAX                         ; 0044e9e5
    MOV dword ptr [0x03f9c178],EBX      ; 0044e9e7 | g_TempProjectedCoord.z
    TEST EBX,EBX                        ; 0044e9ed
    JLE 0x0044ea3a                      ; 0044e9ef
        ;   XREF to: 0044ea3a (CONDITIONAL_JUMP)  ; LAB_0044ea3a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044e9f1
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044e9f4
    IMUL EDX                            ; 0044e9fa
    SHRD EAX,EDX,0x10                   ; 0044e9fc
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044ea00
    MOV EBX,EAX                         ; 0044ea03
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044ea05
    IMUL EDX                            ; 0044ea0b
    SHRD EAX,EDX,0x10                   ; 0044ea0d
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044ea11
    ADD EBX,EAX                         ; 0044ea14
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044ea16
    IMUL EDX                            ; 0044ea1c
    SHRD EAX,EDX,0x10                   ; 0044ea1e
    ADD EBX,EAX                         ; 0044ea22
    MOV dword ptr [0x03f9c170],EBX      ; 0044ea24 | g_TempProjectedCoord
    MOV EAX,EBX                         ; 0044ea2a
    MOV EBX,dword ptr [0x03f9c178]      ; 0044ea2c | g_TempProjectedCoord.z
    CMP EAX,EBX                         ; 0044ea32
    JL 0x0044ecec                       ; 0044ea34
        ;   XREF to: 0044ecec (CONDITIONAL_JUMP)  ; LAB_0044ecec
    MOV EAX,0x151bf98                   ; 0044ea3a | g_CameraOutOfBoundsCoord
        ;   Label: LAB_0044ea3a
    MOV EDI,dword ptr [EAX + 0x8]       ; 0044ea3f | g_CameraOutOfBoundsZ | g_TempProjectedCoord.z
        ;   Label: LAB_0044ea3f
    MOV EBX,EAX                         ; 0044ea42
    TEST EDI,EDI                        ; 0044ea44
    JLE 0x0044e8a6                      ; 0044ea46
        ;   XREF to: 0044e8a6 (CONDITIONAL_JUMP)  ; LAB_0044e8a6
    MOV dword ptr [EBP + -0x8],0x1      ; 0044ea4c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044ea53 | g_CameraOutOfBoundsY | g_TempProjectedCoord.y
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044ea56
    SAR EDX,0x10                        ; 0044ea5c
    IMUL ECX,EDX                        ; 0044ea5f
    MOV EDX,dword ptr [EAX]             ; 0044ea62 | g_CameraOutOfBoundsCoord | g_TempProjectedCoord
    SAR EDX,0x10                        ; 0044ea64
    ADD EDX,ECX                         ; 0044ea67
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0044ea69
    ADD EDX,EDX                         ; 0044ea6f
    ADD EDX,ECX                         ; 0044ea71
    XOR EDI,EDI                         ; 0044ea73
    MOV DX,word ptr [EDX]               ; 0044ea75
    AND EDX,0xffff                      ; 0044ea78
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044ea7e | g_CameraOutOfBoundsZ
    ADD EDX,0x90                        ; 0044ea81
    CMP EDX,ECX                         ; 0044ea87
    JG 0x0044ed9b                       ; 0044ea89
        ;   XREF to: 0044ed9b (CONDITIONAL_JUMP)  ; LAB_0044ed9b
    INC word ptr [EBX + 0x2]            ; 0044ea8f | DAT_0151bf9a
        ;   Label: LAB_0044ea8f
    MOV EAX,dword ptr [EBX]             ; 0044ea93 | g_CameraOutOfBoundsCoord
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044ea95
    SAR EAX,0x10                        ; 0044ea9b
    CMP EAX,EDX                         ; 0044ea9e
    JGE 0x0044eb1a                      ; 0044eaa0
        ;   XREF to: 0044eb1a (CONDITIONAL_JUMP)  ; LAB_0044eb1a
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044eaa2 | g_CameraOutOfBoundsY
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044eaa5
    SAR EDX,0x10                        ; 0044eaab
    IMUL EDX,ECX                        ; 0044eaae
    ADD EAX,EDX                         ; 0044eab1
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044eab3
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044eab9
    AND EAX,0xffff                      ; 0044eabd
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044eac2 | g_CameraOutOfBoundsZ
    ADD EAX,0x90                        ; 0044eac5
    CMP EAX,EDX                         ; 0044eaca
    JLE 0x0044eb17                      ; 0044eacc
        ;   XREF to: 0044eb17 (CONDITIONAL_JUMP)  ; LAB_0044eb17
    MOV EAX,dword ptr [EBX]             ; 0044eace | g_CameraOutOfBoundsCoord
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044ead0
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044ead6
    SAR EAX,CL                          ; 0044eadc
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044eade
    AND EDX,EAX                         ; 0044eae4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044eae6 | g_CameraOutOfBoundsY
    SAR EAX,CL                          ; 0044eae9
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044eaeb
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044eaf1
    SHL EAX,CL                          ; 0044eaf7
    ADD EDX,EAX                         ; 0044eaf9
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044eafb
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044eb01
    AND EAX,0xff                        ; 0044eb04
    SHL EAX,0xa                         ; 0044eb09
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044eb0c
    IMUL EDX                            ; 0044eb0f
    SHRD EAX,EDX,0x10                   ; 0044eb11
    ADD EDI,EAX                         ; 0044eb15
    INC dword ptr [EBP + -0x8]          ; 0044eb17
        ;   Label: LAB_0044eb17
    MOV EDX,dword ptr [EBX]             ; 0044eb1a | g_CameraOutOfBoundsCoord
        ;   Label: LAB_0044eb1a
    SUB EDX,0x20000                     ; 0044eb1c
    MOV EAX,EDX                         ; 0044eb22
    SAR EAX,0x10                        ; 0044eb24
    MOV dword ptr [EBX],EDX             ; 0044eb27 | g_CameraOutOfBoundsCoord
    TEST EAX,EAX                        ; 0044eb29
    JLE 0x0044ebac                      ; 0044eb2b
        ;   XREF to: 0044ebac (CONDITIONAL_JUMP)  ; LAB_0044ebac
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044eb31 | g_CameraOutOfBoundsY
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044eb34
    SAR EDX,0x10                        ; 0044eb3a
    IMUL EDX,ECX                        ; 0044eb3d
    ADD EAX,EDX                         ; 0044eb40
    LEA EDX,[EAX + EAX*0x1]             ; 0044eb42
    MOV EAX,dword ptr [ESI + 0x2f94]    ; 0044eb45
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0044eb4b
    AND EAX,0xffff                      ; 0044eb4f
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044eb54 | g_CameraOutOfBoundsZ
    ADD EAX,0x90                        ; 0044eb57
    CMP EAX,EDX                         ; 0044eb5c
    JLE 0x0044eba9                      ; 0044eb5e
        ;   XREF to: 0044eba9 (CONDITIONAL_JUMP)  ; LAB_0044eba9
    MOV EAX,dword ptr [EBX]             ; 0044eb60 | g_CameraOutOfBoundsCoord
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044eb62
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044eb68
    SAR EAX,CL                          ; 0044eb6e
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044eb70
    AND EDX,EAX                         ; 0044eb76
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044eb78 | g_CameraOutOfBoundsY
    SAR EAX,CL                          ; 0044eb7b
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044eb7d
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044eb83
    SHL EAX,CL                          ; 0044eb89
    ADD EAX,EDX                         ; 0044eb8b
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044eb8d
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044eb93
    AND EAX,0xff                        ; 0044eb96
    SHL EAX,0xa                         ; 0044eb9b
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044eb9e
    IMUL EDX                            ; 0044eba1
    SHRD EAX,EDX,0x10                   ; 0044eba3
    ADD EDI,EAX                         ; 0044eba7
    INC dword ptr [EBP + -0x8]          ; 0044eba9
        ;   Label: LAB_0044eba9
    MOV AX,word ptr [EBX + 0x6]         ; 0044ebac | DAT_0151bf9e
        ;   Label: LAB_0044ebac
    MOV CX,word ptr [EBX + 0x2]         ; 0044ebb0 | DAT_0151bf9a
    INC EAX                             ; 0044ebb4
    INC ECX                             ; 0044ebb5
    MOV word ptr [EBX + 0x6],AX         ; 0044ebb6 | DAT_0151bf9e
    MOV word ptr [EBX + 0x2],CX         ; 0044ebba | DAT_0151bf9a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044ebbe | g_CameraOutOfBoundsY
    MOV EDX,dword ptr [ESI + 0x1cc4]    ; 0044ebc1
    SAR EAX,0x10                        ; 0044ebc7
    CMP EAX,EDX                         ; 0044ebca
    JGE 0x0044ec51                      ; 0044ebcc
        ;   XREF to: 0044ec51 (CONDITIONAL_JUMP)  ; LAB_0044ec51
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044ebd2
    IMUL EDX,EAX                        ; 0044ebd8
    MOV EAX,dword ptr [EBX]             ; 0044ebdb | g_CameraOutOfBoundsCoord
    SAR EAX,0x10                        ; 0044ebdd
    ADD EAX,EDX                         ; 0044ebe0
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044ebe2
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044ebe8
    AND EAX,0xffff                      ; 0044ebec
    MOV ECX,dword ptr [EBX + 0x8]       ; 0044ebf1 | g_CameraOutOfBoundsZ
    ADD EAX,0x90                        ; 0044ebf4
    CMP EAX,ECX                         ; 0044ebf9
    JLE 0x0044ec4e                      ; 0044ebfb
        ;   XREF to: 0044ec4e (CONDITIONAL_JUMP)  ; LAB_0044ec4e
    MOV EAX,dword ptr [EBX]             ; 0044ebfd | g_CameraOutOfBoundsCoord
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044ebff
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044ec05
    SAR EAX,CL                          ; 0044ec0b
    AND EDX,EAX                         ; 0044ec0d
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044ec0f
    MOV dword ptr [EBP + -0xc],EDX      ; 0044ec15
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044ec18 | g_CameraOutOfBoundsY
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044ec1b
    SAR EAX,CL                          ; 0044ec21
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044ec23
    AND EAX,EDX                         ; 0044ec29
    SHL EAX,CL                          ; 0044ec2b
    MOV ECX,dword ptr [EBP + -0xc]      ; 0044ec2d
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044ec30
    ADD EAX,ECX                         ; 0044ec36
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044ec38
    AND EAX,0xff                        ; 0044ec3b
    SHL EAX,0xa                         ; 0044ec40
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044ec43
    IMUL EDX                            ; 0044ec46
    SHRD EAX,EDX,0x10                   ; 0044ec48
    ADD EDI,EAX                         ; 0044ec4c
    INC dword ptr [EBP + -0x8]          ; 0044ec4e
        ;   Label: LAB_0044ec4e
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044ec51 | g_CameraOutOfBoundsY
        ;   Label: LAB_0044ec51
    SUB EDX,0x20000                     ; 0044ec54
    MOV dword ptr [EBX + 0x4],EDX       ; 0044ec5a | g_CameraOutOfBoundsY
    TEST EDX,EDX                        ; 0044ec5d
    JLE 0x0044ecd9                      ; 0044ec5f
        ;   XREF to: 0044ecd9 (CONDITIONAL_JUMP)  ; LAB_0044ecd9
    SAR EDX,0x10                        ; 0044ec61
    IMUL EDX,dword ptr [ESI + 0x1cc0]   ; 0044ec64
    MOV EAX,dword ptr [EBX]             ; 0044ec6b | g_CameraOutOfBoundsCoord
    SAR EAX,0x10                        ; 0044ec6d
    ADD EAX,EDX                         ; 0044ec70
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044ec72
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044ec78
    AND EAX,0xffff                      ; 0044ec7c
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044ec81 | g_CameraOutOfBoundsZ
    ADD EAX,0x90                        ; 0044ec84
    CMP EAX,EDX                         ; 0044ec89
    JLE 0x0044ecd6                      ; 0044ec8b
        ;   XREF to: 0044ecd6 (CONDITIONAL_JUMP)  ; LAB_0044ecd6
    MOV EAX,dword ptr [EBX]             ; 0044ec8d | g_CameraOutOfBoundsCoord
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044ec8f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044ec95
    SAR EAX,CL                          ; 0044ec9b
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044ec9d
    AND EDX,EAX                         ; 0044eca3
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044eca5 | g_CameraOutOfBoundsY
    SAR EAX,CL                          ; 0044eca8
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044ecaa
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044ecb0
    SHL EAX,CL                          ; 0044ecb6
    ADD EDX,EAX                         ; 0044ecb8
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044ecba
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044ecc0
    AND EAX,0xff                        ; 0044ecc3
    SHL EAX,0xa                         ; 0044ecc8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044eccb
    IMUL EDX                            ; 0044ecce
    SHRD EAX,EDX,0x10                   ; 0044ecd0
    ADD EDI,EAX                         ; 0044ecd4
    INC dword ptr [EBP + -0x8]          ; 0044ecd6
        ;   Label: LAB_0044ecd6
    MOV ESI,dword ptr [EBP + -0x8]      ; 0044ecd9
        ;   Label: LAB_0044ecd9
    MOV EDX,EDI                         ; 0044ecdc
    MOV EAX,EDI                         ; 0044ecde
    SAR EDX,0x1f                        ; 0044ece0
    IDIV ESI                            ; 0044ece3
    MOV ESP,EBP                         ; 0044ece5
    POP EBP                             ; 0044ece7
    POP EDI                             ; 0044ece8
    POP ESI                             ; 0044ece9
    POP EBX                             ; 0044ecea
    RET                                 ; 0044eceb
    MOV EAX,EBX                         ; 0044ecec
        ;   Label: LAB_0044ecec
    MOV EDI,dword ptr [0x03f9c170]      ; 0044ecee | g_TempProjectedCoord
    NEG EAX                             ; 0044ecf4
    CMP EAX,EDI                         ; 0044ecf6
    JGE 0x0044ea3a                      ; 0044ecf8
        ;   XREF to: 0044ea3a (CONDITIONAL_JUMP)  ; LAB_0044ea3a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044ecfe
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044ed01
    IMUL EDX                            ; 0044ed07
    SHRD EAX,EDX,0x10                   ; 0044ed09
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044ed0d
    MOV EBX,EAX                         ; 0044ed10
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044ed12
    IMUL EDX                            ; 0044ed18
    SHRD EAX,EDX,0x10                   ; 0044ed1a
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044ed1e
    ADD EBX,EAX                         ; 0044ed21
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044ed23
    IMUL EDX                            ; 0044ed29
    SHRD EAX,EDX,0x10                   ; 0044ed2b
    ADD EBX,EAX                         ; 0044ed2f
    MOV EDX,dword ptr [0x03f9c178]      ; 0044ed31 | g_TempProjectedCoord.z
    MOV dword ptr [0x03f9c174],EBX      ; 0044ed37 | g_TempProjectedCoord.y
    CMP EBX,EDX                         ; 0044ed3d
    JGE 0x0044ea3a                      ; 0044ed3f
        ;   XREF to: 0044ea3a (CONDITIONAL_JUMP)  ; LAB_0044ea3a
    MOV EAX,EDX                         ; 0044ed45
    NEG EAX                             ; 0044ed47
    CMP EAX,EBX                         ; 0044ed49
    JGE 0x0044ea3a                      ; 0044ed4b
        ;   XREF to: 0044ea3a (CONDITIONAL_JUMP)  ; LAB_0044ea3a
    MOV EAX,[0x03f9c170]                ; 0044ed51 | g_TempProjectedCoord
    MOV EBX,EDX                         ; 0044ed56
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044ed58
    IMUL EDX                            ; 0044ed5e
    IDIV EBX                            ; 0044ed60
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044ed62
    ADD EAX,EDX                         ; 0044ed68
    MOV EBX,dword ptr [0x03f9c178]      ; 0044ed6a | g_TempProjectedCoord.z
    MOV [0x03f9c170],EAX                ; 0044ed70 | g_TempProjectedCoord
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044ed75
    MOV EAX,[0x03f9c174]                ; 0044ed7b | g_TempProjectedCoord.y
    IMUL EDX                            ; 0044ed80
    IDIV EBX                            ; 0044ed82
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044ed84
    ADD EAX,EDX                         ; 0044ed8a
    MOV [0x03f9c174],EAX                ; 0044ed8c | g_TempProjectedCoord.y
    MOV EAX,0x3f9c170                   ; 0044ed91 | g_TempProjectedCoord
    JMP 0x0044ea3f                      ; 0044ed96
        ;   XREF to: 0044ea3f (UNCONDITIONAL_JUMP)  ; LAB_0044ea3f
    MOV EDI,dword ptr [EAX]             ; 0044ed9b | g_CameraOutOfBoundsCoord
        ;   Label: LAB_0044ed9b
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044ed9d
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044eda3
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044eda9 | g_CameraOutOfBoundsY
    SAR EDI,CL                          ; 0044edac
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044edae
    AND EDX,EDI                         ; 0044edb4
    MOV EDI,dword ptr [ESI + 0x1c68]    ; 0044edb6
    SAR EAX,CL                          ; 0044edbc
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044edbe
    AND EAX,EDI                         ; 0044edc4
    SHL EAX,CL                          ; 0044edc6
    ADD EAX,EDX                         ; 0044edc8
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044edca
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044edd0
    AND EAX,0xff                        ; 0044edd3
    SHL EAX,0xa                         ; 0044edd8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044eddb
    IMUL EDX                            ; 0044edde
    SHRD EAX,EDX,0x10                   ; 0044ede0
    MOV EDI,EAX                         ; 0044ede4
    JMP 0x0044ea8f                      ; 0044ede6
        ;   XREF to: 0044ea8f (UNCONDITIONAL_JUMP)  ; LAB_0044ea8f

