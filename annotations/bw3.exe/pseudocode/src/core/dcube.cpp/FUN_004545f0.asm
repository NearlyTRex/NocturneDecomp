; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcube_cpp_FUN_004545f0(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   cylinder_position
; float            Stack[0xc]:4   cylinder_radius
; CVector3f *      Stack[0x10]:4   output_height
; CVector3f *      Stack[0x14]:4   output_normal
; uint *           Stack[0x18]:4   output_material
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90 at 00474cea
;
; Referenced Globals:
;   undefined4 DAT_01548b58
;   undefined4 DAT_01548b5c
;   undefined4 DAT_01548b60
;   undefined4 DAT_01548b64
;   undefined4 DAT_01548b68
;   undefined4 DAT_01548b6c
;   undefined4 DAT_01548b70
;   undefined4 DAT_01548b74
;   undefined4 DAT_01548b78
;
; Called Functions:
;   core_dcube.cpp_triangleCylinderCollision_FUN_00452e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004545f0
        ;   Label: core_dcube.cpp_FUN_004545f0
    PUSH ESI                            ; 004545f1
    PUSH EDI                            ; 004545f2
    PUSH EBP                            ; 004545f3
    SUB ESP,0x18                        ; 004545f4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004545f7
    MOV EBP,0xffffffff                  ; 004545fb
    MOV EDX,dword ptr [EBX + 0x28]      ; 00454600
    XOR ESI,ESI                         ; 00454603
    TEST EDX,EDX                        ; 00454605
    JLE 0x00454638                      ; 00454607
        ;   XREF to: 00454638 (CONDITIONAL_JUMP)  ; LAB_00454638
    XOR EDI,EDI                         ; 00454609
    MOV EAX,dword ptr [ESP + 0x38]      ; 0045460b
        ;   Label: LAB_0045460b
    PUSH EAX                            ; 0045460f
    MOV EDX,dword ptr [ESP + 0x34]      ; 00454610
    PUSH dword ptr [ESP + 0x38]         ; 00454614
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00454618
    PUSH EDX                            ; 0045461b
    ADD EAX,EDI                         ; 0045461c
    PUSH EAX                            ; 0045461e
    CALL core_dcube.cpp_triangleCylinderCollision_FUN_00452e20 ; 0045461f
        ;   XREF to: 00452e20 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_triangleCylinderCollision_FUN_00452e20(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height)
    ADD ESP,0x10                        ; 00454624
    TEST EAX,EAX                        ; 00454627
    JZ 0x0045462d                       ; 00454629
        ;   XREF to: 0045462d (CONDITIONAL_JUMP)  ; LAB_0045462d
    MOV EBP,ESI                         ; 0045462b
    INC ESI                             ; 0045462d
        ;   Label: LAB_0045462d
    MOV ECX,dword ptr [EBX + 0x28]      ; 0045462e
    ADD EDI,0x20                        ; 00454631
    CMP ESI,ECX                         ; 00454634
    JL 0x0045460b                       ; 00454636
        ;   XREF to: 0045460b (CONDITIONAL_JUMP)  ; LAB_0045460b
    TEST EBP,EBP                        ; 00454638
        ;   Label: LAB_00454638
    JL 0x00454738                       ; 0045463a
        ;   XREF to: 00454738 (CONDITIONAL_JUMP)  ; LAB_00454738
    MOV ESI,EBP                         ; 00454640
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00454642
    SHL ESI,0x5                         ; 00454645
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 00454648
    CMP EAX,0x1548b58                   ; 0045464b
    JZ 0x0045466c                       ; 00454650
        ;   XREF to: 0045466c (CONDITIONAL_JUMP)  ; LAB_0045466c
    FLD float ptr [EAX]                 ; 00454652
    FLD float ptr [EAX + 0x8]           ; 00454654
    MOV EDX,dword ptr [EAX + 0x4]       ; 00454657
    MOV dword ptr [0x01548b5c],EDX      ; 0045465a | DAT_01548b5c
    FSTP float ptr [0x01548b60]         ; 00454660 | DAT_01548b60
    FSTP float ptr [0x01548b58]         ; 00454666 | DAT_01548b58
    MOV EAX,EBP                         ; 0045466c
        ;   Label: LAB_0045466c
    MOV ESI,dword ptr [EBX + 0x2c]      ; 0045466e
    SHL EAX,0x5                         ; 00454671
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00454674
    CMP EAX,0x1548b64                   ; 00454678
    JZ 0x00454699                       ; 0045467d
        ;   XREF to: 00454699 (CONDITIONAL_JUMP)  ; LAB_00454699
    FLD float ptr [EAX]                 ; 0045467f
    FLD float ptr [EAX + 0x8]           ; 00454681
    MOV EDX,dword ptr [EAX + 0x4]       ; 00454684
    MOV dword ptr [0x01548b68],EDX      ; 00454687 | DAT_01548b68
    FSTP float ptr [0x01548b6c]         ; 0045468d | DAT_01548b6c
    FSTP float ptr [0x01548b64]         ; 00454693 | DAT_01548b64
    MOV ESI,EBP                         ; 00454699
        ;   Label: LAB_00454699
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0045469b
    SHL ESI,0x5                         ; 0045469e
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8] ; 004546a1
    CMP EAX,0x1548b70                   ; 004546a5
    JZ 0x004546c6                       ; 004546aa
        ;   XREF to: 004546c6 (CONDITIONAL_JUMP)  ; LAB_004546c6
    FLD float ptr [EAX]                 ; 004546ac
    FLD float ptr [EAX + 0x8]           ; 004546ae
    MOV EDX,dword ptr [EAX + 0x4]       ; 004546b1
    MOV dword ptr [0x01548b74],EDX      ; 004546b4 | DAT_01548b74
    FSTP float ptr [0x01548b78]         ; 004546ba | DAT_01548b78
    FSTP float ptr [0x01548b70]         ; 004546c0 | DAT_01548b70
    MOV EAX,dword ptr [EBX + 0x30]      ; 004546c6
        ;   Label: LAB_004546c6
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 004546c9
    MOV ESI,dword ptr [ESP + 0x40]      ; 004546cc
    AND EAX,0xff                        ; 004546d0
    MOV dword ptr [ESI],EAX             ; 004546d5
    MOV EDI,ESP                         ; 004546d7
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004546d9
    SHL EBP,0x5                         ; 004546dc
    LEA ESI,[ESP + 0xc]                 ; 004546df
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 004546e3
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 004546e7
    FLD float ptr [EAX + EBP*0x1 + 0x14] ; 004546eb
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004546ef
    FXCH ST2                            ; 004546f3
    FCHS                                ; 004546f5
    FXCH                                ; 004546f7
    FCHS                                ; 004546f9
    FXCH ST2                            ; 004546fb
    FCHS                                ; 004546fd
    MOV EAX,ESP                         ; 004546ff
    FXCH                                ; 00454701
    FSTP float ptr [ESP + 0xc]          ; 00454703
    FXCH                                ; 00454707
    FSTP float ptr [ESP + 0x10]         ; 00454709
    FSTP float ptr [ESP + 0x14]         ; 0045470d
    MOVSD ES:EDI,ESI                    ; 00454711
    MOVSD ES:EDI,ESI                    ; 00454712
    MOVSD ES:EDI,ESI                    ; 00454713
    CMP EAX,EBX                         ; 00454714
    JZ 0x0045472b                       ; 00454716
        ;   XREF to: 0045472b (CONDITIONAL_JUMP)  ; LAB_0045472b
    MOV EAX,dword ptr [ESP]             ; 00454718
    MOV dword ptr [EBX],EAX             ; 0045471b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045471d
    MOV dword ptr [EBX + 0x4],EAX       ; 00454721
    MOV EAX,dword ptr [ESP + 0x8]       ; 00454724
    MOV dword ptr [EBX + 0x8],EAX       ; 00454728
    MOV EAX,0x1                         ; 0045472b
        ;   Label: LAB_0045472b
    ADD ESP,0x18                        ; 00454730
    POP EBP                             ; 00454733
    POP EDI                             ; 00454734
    POP ESI                             ; 00454735
    POP EBX                             ; 00454736
    RET                                 ; 00454737
    XOR EAX,EAX                         ; 00454738
        ;   Label: LAB_00454738
    ADD ESP,0x18                        ; 0045473a
    POP EBP                             ; 0045473d
    POP EDI                             ; 0045473e
    POP ESI                             ; 0045473f
    POP EBX                             ; 00454740
    RET                                 ; 00454741

