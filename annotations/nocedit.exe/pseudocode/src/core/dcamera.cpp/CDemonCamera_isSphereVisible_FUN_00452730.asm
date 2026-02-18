; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730(CDemonCamera *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
; Local Variables:
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
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 at 004c7790
;
; Referenced Globals:
;   float g_CameraFixedPointScale_0065c63c = 256
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452730
        ;   Label: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
    PUSH ESI                            ; 00452731
    PUSH EDI                            ; 00452732
    PUSH EBP                            ; 00452733
    MOV EBP,ESP                         ; 00452734
    SUB ESP,0x20                        ; 00452736
    MOV EAX,dword ptr [EBP + 0x18]      ; 00452739
    LEA EBX,[EBP + -0x20]               ; 0045273c
    FLD float ptr [EAX]                 ; 0045273f
    FMUL float ptr [0x0065c63c]         ; 00452741 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 00452747
    FLD float ptr [EAX + 0x4]           ; 00452749
    FMUL float ptr [0x0065c63c]         ; 0045274c | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 00452752
    FLD float ptr [EAX + 0x8]           ; 00452755
    FMUL float ptr [0x0065c63c]         ; 00452758 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 0045275e
    FLD float ptr [EBP + 0x1c]          ; 00452761
    FLD float ptr [0x0065c63c]          ; 00452767 | g_CameraFixedPointScale_0065c63c
    FMULP                               ; 0045276d
    FIST dword ptr [EBP + 0xfffffff8]   ; 0045276f
    FISTP dword ptr [EBP + 0xfffffffc]  ; 00452775
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045277b
    MOV EDX,dword ptr [EBP + -0x20]     ; 0045277e
    SUB EDX,dword ptr [EAX + 0x16c]     ; 00452781
    MOV EAX,dword ptr [EBP + 0x14]      ; 00452787
    MOV dword ptr [EBP + -0x20],EDX     ; 0045278a
    MOV ECX,dword ptr [EBP + -0x1c]     ; 0045278d
    SUB ECX,dword ptr [EAX + 0x170]     ; 00452790
    MOV EAX,dword ptr [EBP + 0x14]      ; 00452796
    MOV dword ptr [EBP + -0x1c],ECX     ; 00452799
    MOV EBX,dword ptr [EBP + -0x18]     ; 0045279c
    SUB EBX,dword ptr [EAX + 0x174]     ; 0045279f
    MOV EAX,EDX                         ; 004527a5
    MOV dword ptr [EBP + -0x18],EBX     ; 004527a7
    CDQ                                 ; 004527aa
    XOR EAX,EDX                         ; 004527ab
    SUB EAX,EDX                         ; 004527ad
    CMP EAX,dword ptr [EBP + -0x8]      ; 004527af
    JGE 0x004527c5                      ; 004527b2
        ;   XREF to: 004527c5 (CONDITIONAL_JUMP)  ; LAB_004527c5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004527b4
    CDQ                                 ; 004527b7
    XOR EAX,EDX                         ; 004527b8
    SUB EAX,EDX                         ; 004527ba
    CMP EAX,dword ptr [EBP + -0x8]      ; 004527bc
    JL 0x004528be                       ; 004527bf
        ;   XREF to: 004528be (CONDITIONAL_JUMP)  ; LAB_004528be
    MOV EDX,dword ptr [EBP + 0x14]      ; 004527c5
        ;   Label: LAB_004527c5
    MOV EAX,dword ptr [EBP + -0x20]     ; 004527c8
    MOV EDX,dword ptr [EDX + 0x178]     ; 004527cb
    IMUL EDX                            ; 004527d1
    SHRD EAX,EDX,0x10                   ; 004527d3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004527d7
    MOV ECX,EAX                         ; 004527da
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004527dc
    MOV EDX,dword ptr [EDX + 0x184]     ; 004527df
    IMUL EDX                            ; 004527e5
    SHRD EAX,EDX,0x10                   ; 004527e7
    MOV EDX,dword ptr [EBP + 0x14]      ; 004527eb
    ADD ECX,EAX                         ; 004527ee
    MOV EAX,dword ptr [EBP + -0x18]     ; 004527f0
    MOV EDX,dword ptr [EDX + 0x190]     ; 004527f3
    IMUL EDX                            ; 004527f9
    SHRD EAX,EDX,0x10                   ; 004527fb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004527ff
    ADD ECX,EAX                         ; 00452802
    MOV EAX,dword ptr [EBP + -0x20]     ; 00452804
    MOV EDX,dword ptr [EDX + 0x17c]     ; 00452807
    MOV dword ptr [EBP + -0x14],ECX     ; 0045280d
    IMUL EDX                            ; 00452810
    SHRD EAX,EDX,0x10                   ; 00452812
    MOV EDX,dword ptr [EBP + 0x14]      ; 00452816
    MOV ECX,EAX                         ; 00452819
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045281b
    MOV EDX,dword ptr [EDX + 0x188]     ; 0045281e
    IMUL EDX                            ; 00452824
    SHRD EAX,EDX,0x10                   ; 00452826
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045282a
    ADD ECX,EAX                         ; 0045282d
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045282f
    MOV EDX,dword ptr [EDX + 0x194]     ; 00452832
    IMUL EDX                            ; 00452838
    SHRD EAX,EDX,0x10                   ; 0045283a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045283e
    ADD ECX,EAX                         ; 00452841
    MOV EAX,dword ptr [EBP + -0x20]     ; 00452843
    MOV EDX,dword ptr [EDX + 0x180]     ; 00452846
    MOV dword ptr [EBP + -0x10],ECX     ; 0045284c
    IMUL EDX                            ; 0045284f
    SHRD EAX,EDX,0x10                   ; 00452851
    MOV EDX,dword ptr [EBP + 0x14]      ; 00452855
    MOV ECX,EAX                         ; 00452858
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045285a
    MOV EDX,dword ptr [EDX + 0x18c]     ; 0045285d
    IMUL EDX                            ; 00452863
    SHRD EAX,EDX,0x10                   ; 00452865
    MOV EDX,dword ptr [EBP + 0x14]      ; 00452869
    ADD ECX,EAX                         ; 0045286c
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045286e
    MOV EDX,dword ptr [EDX + 0x198]     ; 00452871
    IMUL EDX                            ; 00452877
    SHRD EAX,EDX,0x10                   ; 00452879
    ADD ECX,EAX                         ; 0045287d
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045287f
    MOV dword ptr [EBP + -0xc],ECX      ; 00452882
    MOV ECX,dword ptr [EBP + -0x8]      ; 00452885
    MOV EBX,dword ptr [EBP + -0xc]      ; 00452888
    SUB EAX,ECX                         ; 0045288b
    CMP EAX,EBX                         ; 0045288d
    JG 0x004528b5                       ; 0045288f
        ;   XREF to: 004528b5 (CONDITIONAL_JUMP)  ; LAB_004528b5
    MOV EDX,dword ptr [EBP + -0x14]     ; 00452891
    MOV ESI,dword ptr [EBP + -0x8]      ; 00452894
    MOV EAX,EBX                         ; 00452897
    ADD EDX,ESI                         ; 00452899
    NEG EAX                             ; 0045289b
    CMP EDX,EAX                         ; 0045289d
    JL 0x004528b5                       ; 0045289f
        ;   XREF to: 004528b5 (CONDITIONAL_JUMP)  ; LAB_004528b5
    MOV EDX,dword ptr [EBP + -0x10]     ; 004528a1
    SUB EDX,dword ptr [EBP + -0x4]      ; 004528a4
    CMP EDX,EBX                         ; 004528a7
    JG 0x004528b5                       ; 004528a9
        ;   XREF to: 004528b5 (CONDITIONAL_JUMP)  ; LAB_004528b5
    MOV EDX,dword ptr [EBP + -0x10]     ; 004528ab
    ADD EDX,dword ptr [EBP + -0x4]      ; 004528ae
    CMP EDX,EAX                         ; 004528b1
    JGE 0x004528cf                      ; 004528b3
        ;   XREF to: 004528cf (CONDITIONAL_JUMP)  ; LAB_004528cf
    XOR EAX,EAX                         ; 004528b5
        ;   Label: LAB_004528b5
    MOV ESP,EBP                         ; 004528b7
    POP EBP                             ; 004528b9
    POP EDI                             ; 004528ba
    POP ESI                             ; 004528bb
    POP EBX                             ; 004528bc
    RET                                 ; 004528bd
    MOV EAX,dword ptr [EBP + -0x18]     ; 004528be
        ;   Label: LAB_004528be
    CDQ                                 ; 004528c1
    XOR EAX,EDX                         ; 004528c2
    SUB EAX,EDX                         ; 004528c4
    CMP EAX,dword ptr [EBP + -0x8]      ; 004528c6
    JGE 0x004527c5                      ; 004528c9
        ;   XREF to: 004527c5 (CONDITIONAL_JUMP)  ; LAB_004527c5
    MOV EAX,0x1                         ; 004528cf
        ;   Label: LAB_004528cf
    MOV ESP,EBP                         ; 004528d4
    POP EBP                             ; 004528d6
    POP EDI                             ; 004528d7
    POP ESI                             ; 004528d8
    POP EBX                             ; 004528d9
    RET                                 ; 004528da

