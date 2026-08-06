; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700 at 0051a732
;
; Referenced Globals:
;   float FLOAT_005797c9 = 0.5
;   double DOUBLE_005797cd = 0.00390625
;   undefined4 DAT_0059aa80
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b7648
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c4c
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d450
        ;   Label: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450
    PUSH ESI                            ; 0041d451
    PUSH EBP                            ; 0041d452
    MOV EBP,ESP                         ; 0041d453
    SUB ESP,0x30                        ; 0041d455
    AND ESP,0xfffffff8                  ; 0041d458
    MOV ESI,dword ptr [EBP + 0x10]      ; 0041d45b
    LEA EAX,[ESI + 0xc]                 ; 0041d45e
    FLD float ptr [ESI]                 ; 0041d461
    FADD float ptr [EAX]                ; 0041d463
    FST float ptr [ESP]                 ; 0041d465
    FLD float ptr [ESI + 0x4]           ; 0041d468
    FADD float ptr [EAX + 0x4]          ; 0041d46b
    FXCH                                ; 0041d46e
    FLD float ptr [0x005797c9]          ; 0041d470 | FLOAT_005797c9
    FXCH                                ; 0041d476
    FMUL ST1                            ; 0041d478
    FXCH ST2                            ; 0041d47a
    FST float ptr [ESP + 0x4]           ; 0041d47c
    FLD float ptr [ESI + 0x8]           ; 0041d480
    FADD float ptr [EAX + 0x8]          ; 0041d483
    FXCH                                ; 0041d486
    FMUL ST2                            ; 0041d488
    FXCH                                ; 0041d48a
    FST float ptr [ESP + 0x8]           ; 0041d48c
    FMULP ST2                           ; 0041d490
    LEA EBX,[ESP + 0xc]                 ; 0041d492
    MOV EDX,dword ptr [0x005ae704]      ; 0041d496 | g_CDemonRenderer_PTR_005ae704
    FXCH ST2                            ; 0041d49c
    FSTP float ptr [ESP + 0x18]         ; 0041d49e
    FXCH                                ; 0041d4a2
    FSTP float ptr [ESP + 0x1c]         ; 0041d4a4
    LEA EAX,[ESP + 0x18]                ; 0041d4a8
    FSTP float ptr [ESP + 0x20]         ; 0041d4ac
    FLD float ptr [EAX]                 ; 0041d4b0
    FMUL float ptr [0x0059aa80]         ; 0041d4b2 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041d4b8
    FLD float ptr [EAX + 0x4]           ; 0041d4ba
    FMUL float ptr [0x0059aa80]         ; 0041d4bd | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041d4c3
    FLD float ptr [EAX + 0x8]           ; 0041d4c6
    FMUL float ptr [0x0059aa80]         ; 0041d4c9 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041d4cf
    LEA EAX,[ESP + 0xc]                 ; 0041d4d2
    PUSH EAX                            ; 0041d4d6
    MOV EAX,dword ptr [EDX]             ; 0041d4d7 | DAT_01b4d738
    ADD EAX,0xea5d0                     ; 0041d4d9
    PUSH EAX                            ; 0041d4de
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0041d4df
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0041d4e4 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 0041d4e9 | DAT_01b4d738
    MOV EAX,dword ptr [EAX + 0xea5d8]   ; 0041d4eb
    ADD ESP,0x8                         ; 0041d4f1
    TEST EAX,EAX                        ; 0041d4f4
    JLE 0x0041d536                      ; 0041d4f6
        ;   XREF to: 0041d536 (CONDITIONAL_JUMP)  ; LAB_0041d536
    FLD float ptr [ESI + 0x10]          ; 0041d4f8
    FSUB float ptr [ESI + 0x4]          ; 0041d4fb
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041d4fe
    FILD dword ptr [ESP + 0x2c]         ; 0041d502
    FMUL double ptr [0x005797cd]        ; 0041d506 | DOUBLE_005797cd
    FDIVP                               ; 0041d50c
    FILD dword ptr [0x01c00c4c]         ; 0041d50e | DAT_01c00c4c
    FMULP                               ; 0041d514
    FILD dword ptr [0x005b7648]         ; 0041d516 | DAT_005b7648
    FDIVP                               ; 0041d51c
    FABS                                ; 0041d51e
    FSTP float ptr [ESP + 0x24]         ; 0041d520
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041d524
    MOV dword ptr [ESP + 0x28],EAX      ; 0041d528
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d52c
    MOV ESP,EBP                         ; 0041d530
    POP EBP                             ; 0041d532
    POP ESI                             ; 0041d533
    POP EBX                             ; 0041d534
    RET                                 ; 0041d535
    MOV dword ptr [ESP + 0x28],0x47c34f80 ; 0041d536
        ;   Label: LAB_0041d536
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d53e
    MOV ESP,EBP                         ; 0041d542
    POP EBP                             ; 0041d544
    POP ESI                             ; 0041d545
    POP EBX                             ; 0041d546
    RET                                 ; 0041d547

