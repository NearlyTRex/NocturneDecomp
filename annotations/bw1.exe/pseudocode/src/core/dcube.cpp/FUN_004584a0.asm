; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcube_cpp_FUN_004584a0(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)
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
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010 at 0048c16a
;
; Referenced Globals:
;   undefined4 DAT_0152c2a8
;   undefined4 DAT_0152c2ac
;   undefined4 DAT_0152c2b0
;   undefined4 DAT_0152c2b4
;   undefined4 DAT_0152c2b8
;   undefined4 DAT_0152c2bc
;   undefined4 DAT_0152c2c0
;   undefined4 DAT_0152c2c4
;   undefined4 DAT_0152c2c8
;
; Called Functions:
;   core_dcube.cpp_FUN_00456cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004584a0
        ;   Label: core_dcube.cpp_FUN_004584a0
    PUSH ESI                            ; 004584a1
    PUSH EDI                            ; 004584a2
    PUSH EBP                            ; 004584a3
    SUB ESP,0x18                        ; 004584a4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004584a7
    MOV EBP,0xffffffff                  ; 004584ab
    MOV EDX,dword ptr [EBX + 0x28]      ; 004584b0
    XOR ESI,ESI                         ; 004584b3
    TEST EDX,EDX                        ; 004584b5
    JLE 0x004584e8                      ; 004584b7
        ;   XREF to: 004584e8 (CONDITIONAL_JUMP)  ; LAB_004584e8
    XOR EDI,EDI                         ; 004584b9
    MOV EAX,dword ptr [ESP + 0x38]      ; 004584bb
        ;   Label: LAB_004584bb
    PUSH EAX                            ; 004584bf
    MOV EDX,dword ptr [ESP + 0x34]      ; 004584c0
    PUSH dword ptr [ESP + 0x38]         ; 004584c4
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004584c8
    PUSH EDX                            ; 004584cb
    ADD EAX,EDI                         ; 004584cc
    PUSH EAX                            ; 004584ce
    CALL core_dcube.cpp_FUN_00456cd0    ; 004584cf
        ;   XREF to: 00456cd0 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_FUN_00456cd0(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height)
    ADD ESP,0x10                        ; 004584d4
    TEST EAX,EAX                        ; 004584d7
    JZ 0x004584dd                       ; 004584d9
        ;   XREF to: 004584dd (CONDITIONAL_JUMP)  ; LAB_004584dd
    MOV EBP,ESI                         ; 004584db
    INC ESI                             ; 004584dd
        ;   Label: LAB_004584dd
    MOV ECX,dword ptr [EBX + 0x28]      ; 004584de
    ADD EDI,0x20                        ; 004584e1
    CMP ESI,ECX                         ; 004584e4
    JL 0x004584bb                       ; 004584e6
        ;   XREF to: 004584bb (CONDITIONAL_JUMP)  ; LAB_004584bb
    TEST EBP,EBP                        ; 004584e8
        ;   Label: LAB_004584e8
    JL 0x004585e8                       ; 004584ea
        ;   XREF to: 004585e8 (CONDITIONAL_JUMP)  ; LAB_004585e8
    MOV ESI,EBP                         ; 004584f0
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004584f2
    SHL ESI,0x5                         ; 004584f5
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 004584f8
    CMP EAX,0x152c2a8                   ; 004584fb
    JZ 0x0045851c                       ; 00458500
        ;   XREF to: 0045851c (CONDITIONAL_JUMP)  ; LAB_0045851c
    FLD float ptr [EAX]                 ; 00458502
    FLD float ptr [EAX + 0x8]           ; 00458504
    MOV EDX,dword ptr [EAX + 0x4]       ; 00458507
    MOV dword ptr [0x0152c2ac],EDX      ; 0045850a | DAT_0152c2ac
    FSTP float ptr [0x0152c2b0]         ; 00458510 | DAT_0152c2b0
    FSTP float ptr [0x0152c2a8]         ; 00458516 | DAT_0152c2a8
    MOV EAX,EBP                         ; 0045851c
        ;   Label: LAB_0045851c
    MOV ESI,dword ptr [EBX + 0x2c]      ; 0045851e
    SHL EAX,0x5                         ; 00458521
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00458524
    CMP EAX,0x152c2b4                   ; 00458528
    JZ 0x00458549                       ; 0045852d
        ;   XREF to: 00458549 (CONDITIONAL_JUMP)  ; LAB_00458549
    FLD float ptr [EAX]                 ; 0045852f
    FLD float ptr [EAX + 0x8]           ; 00458531
    MOV EDX,dword ptr [EAX + 0x4]       ; 00458534
    MOV dword ptr [0x0152c2b8],EDX      ; 00458537 | DAT_0152c2b8
    FSTP float ptr [0x0152c2bc]         ; 0045853d | DAT_0152c2bc
    FSTP float ptr [0x0152c2b4]         ; 00458543 | DAT_0152c2b4
    MOV ESI,EBP                         ; 00458549
        ;   Label: LAB_00458549
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0045854b
    SHL ESI,0x5                         ; 0045854e
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8] ; 00458551
    CMP EAX,0x152c2c0                   ; 00458555
    JZ 0x00458576                       ; 0045855a
        ;   XREF to: 00458576 (CONDITIONAL_JUMP)  ; LAB_00458576
    FLD float ptr [EAX]                 ; 0045855c
    FLD float ptr [EAX + 0x8]           ; 0045855e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00458561
    MOV dword ptr [0x0152c2c4],EDX      ; 00458564 | DAT_0152c2c4
    FSTP float ptr [0x0152c2c8]         ; 0045856a | DAT_0152c2c8
    FSTP float ptr [0x0152c2c0]         ; 00458570 | DAT_0152c2c0
    MOV EAX,dword ptr [EBX + 0x30]      ; 00458576
        ;   Label: LAB_00458576
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 00458579
    MOV ESI,dword ptr [ESP + 0x40]      ; 0045857c
    AND EAX,0xff                        ; 00458580
    MOV dword ptr [ESI],EAX             ; 00458585
    MOV EDI,ESP                         ; 00458587
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00458589
    SHL EBP,0x5                         ; 0045858c
    LEA ESI,[ESP + 0xc]                 ; 0045858f
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 00458593
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 00458597
    FLD float ptr [EAX + EBP*0x1 + 0x14] ; 0045859b
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0045859f
    FXCH ST2                            ; 004585a3
    FCHS                                ; 004585a5
    FXCH                                ; 004585a7
    FCHS                                ; 004585a9
    FXCH ST2                            ; 004585ab
    FCHS                                ; 004585ad
    MOV EAX,ESP                         ; 004585af
    FXCH                                ; 004585b1
    FSTP float ptr [ESP + 0xc]          ; 004585b3
    FXCH                                ; 004585b7
    FSTP float ptr [ESP + 0x10]         ; 004585b9
    FSTP float ptr [ESP + 0x14]         ; 004585bd
    MOVSD ES:EDI,ESI                    ; 004585c1
    MOVSD ES:EDI,ESI                    ; 004585c2
    MOVSD ES:EDI,ESI                    ; 004585c3
    CMP EAX,EBX                         ; 004585c4
    JZ 0x004585db                       ; 004585c6
        ;   XREF to: 004585db (CONDITIONAL_JUMP)  ; LAB_004585db
    MOV EAX,dword ptr [ESP]             ; 004585c8
    MOV dword ptr [EBX],EAX             ; 004585cb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004585cd
    MOV dword ptr [EBX + 0x4],EAX       ; 004585d1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004585d4
    MOV dword ptr [EBX + 0x8],EAX       ; 004585d8
    MOV EAX,0x1                         ; 004585db
        ;   Label: LAB_004585db
    ADD ESP,0x18                        ; 004585e0
    POP EBP                             ; 004585e3
    POP EDI                             ; 004585e4
    POP ESI                             ; 004585e5
    POP EBX                             ; 004585e6
    RET                                 ; 004585e7
    XOR EAX,EAX                         ; 004585e8
        ;   Label: LAB_004585e8
    ADD ESP,0x18                        ; 004585ea
    POP EBP                             ; 004585ed
    POP EDI                             ; 004585ee
    POP ESI                             ; 004585ef
    POP EBX                             ; 004585f0
    RET                                 ; 004585f1

