; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   pos
; int *            Stack[0xc]:4   hit_flag
; CVector3f *      Stack[0x10]:4   normal_out
; Local Variables:
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
;
; XREF[2]:
;   core_bugs.cpp_FUN_00421b80 at 00421ec7
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050ecc7
;
; Referenced Globals:
;   float FLOAT_0057e1e2 = 2
;   float FLOAT_0057e1e6 = -10
;   undefined4 DAT_014b89e8
;   undefined4 DAT_014b89ec
;   undefined4 DAT_014b89f0
;   undefined4 DAT_014b89f4
;   undefined4 DAT_014b89f8
;   undefined4 DAT_014b89fc
;   undefined4 DAT_014b8a00
;   undefined4 DAT_014b8a04
;   undefined4 DAT_014b8a08
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468580
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
    PUSH ESI                            ; 00468581
    PUSH EDI                            ; 00468582
    PUSH EBP                            ; 00468583
    MOV EBP,ESP                         ; 00468584
    SUB ESP,0x4c                        ; 00468586
    AND ESP,0xfffffff8                  ; 00468589
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046858c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0046858f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00468592
    MOV EDI,dword ptr [EBP + 0x20]      ; 00468595
    MOV EAX,dword ptr [ECX]             ; 00468598
    MOV dword ptr [ESP + 0x4],EAX       ; 0046859a
    LEA EAX,[ECX + 0x4]                 ; 0046859e
    MOV dword ptr [ESP + 0x48],EAX      ; 004685a1
    MOV EAX,dword ptr [EAX]             ; 004685a5
    LEA EDX,[ECX + 0x8]                 ; 004685a7
    MOV dword ptr [ESP + 0x8],EAX       ; 004685aa
    MOV EAX,dword ptr [EDX]             ; 004685ae
    MOV dword ptr [ESP + 0xc],EAX       ; 004685b0
    MOV EAX,dword ptr [ECX]             ; 004685b4
    MOV dword ptr [ESP + 0x10],EAX      ; 004685b6
    MOV EAX,dword ptr [ESP + 0x48]      ; 004685ba
    FLD float ptr [ESP + 0x4]           ; 004685be
    MOV EAX,dword ptr [EAX]             ; 004685c2
    FLD float ptr [ESP + 0x8]           ; 004685c4
    MOV dword ptr [ESP + 0x14],EAX      ; 004685c8
    FADD float ptr [0x0057e1e2]         ; 004685cc | FLOAT_0057e1e2
    FLD float ptr [ESP + 0x14]          ; 004685d2
    MOV EAX,dword ptr [EDX]             ; 004685d6
    FXCH                                ; 004685d8
    FSTP float ptr [ESP + 0x8]          ; 004685da
    FADD float ptr [0x0057e1e6]         ; 004685de | FLOAT_0057e1e6
    MOV dword ptr [ESP + 0x18],EAX      ; 004685e4
    FSTP float ptr [ESP + 0x14]         ; 004685e8
    FSUB float ptr [EBX + 0x10]         ; 004685ec
    FDIV float ptr [EBX + 0x28]         ; 004685ef
    FLD float ptr [ESP + 0x8]           ; 004685f2
    FSUB float ptr [EBX + 0x14]         ; 004685f6
    FLD1                                ; 004685f9
    FDIV float ptr [EBX + 0x2c]         ; 004685fb
    FLD float ptr [ESP + 0xc]           ; 004685fe
    FSUB float ptr [EBX + 0x18]         ; 00468602
    FDIV float ptr [EBX + 0x30]         ; 00468605
    FLD float ptr [ESP + 0x14]          ; 00468608
    FSUB float ptr [EBX + 0x14]         ; 0046860c
    FXCH ST3                            ; 0046860f
    FMUL ST2                            ; 00468611
    FXCH ST3                            ; 00468613
    FMULP ST2                           ; 00468615
    FLD float ptr [ESP + 0x10]          ; 00468617
    FSUB float ptr [ESP + 0x4]          ; 0046861b
    FLD float ptr [ESP + 0x18]          ; 0046861f
    FXCH ST5                            ; 00468623
    CALL crt_math.c_round_FUN_00563a30  ; 00468625
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x40]        ; 0046862a
    FLD float ptr [ESP + 0x14]          ; 0046862e
    FXCH ST5                            ; 00468632
    FSUB float ptr [ESP + 0xc]          ; 00468634
    FXCH ST5                            ; 00468638
    FSUB float ptr [ESP + 0x8]          ; 0046863a
    FXCH ST2                            ; 0046863e
    CALL crt_math.c_round_FUN_00563a30  ; 00468640
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 00468645
    FSTP float ptr [ESP + 0x28]         ; 00468649
    FSTP float ptr [ESP + 0x2c]         ; 0046864d
    FXCH                                ; 00468651
    CALL crt_math.c_round_FUN_00563a30  ; 00468653
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00468658
    CALL crt_math.c_round_FUN_00563a30  ; 0046865a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0046865f
    FISTP dword ptr [ESP + 0x34]        ; 00468661
    FISTP dword ptr [ESP + 0x44]        ; 00468665
    MOV EAX,dword ptr [ESP + 0x34]      ; 00468669
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046866d
    FSTP float ptr [ESP + 0x30]         ; 00468671
    CMP EAX,EDX                         ; 00468675
    JL 0x00468715                       ; 00468677
        ;   XREF to: 00468715 (CONDITIONAL_JUMP)  ; LAB_00468715
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0046867d
        ;   Label: LAB_0046867d
    PUSH ECX                            ; 00468681
    MOV EAX,dword ptr [ESP + 0x38]      ; 00468682
    PUSH EAX                            ; 00468686
    MOV EDX,dword ptr [ESP + 0x48]      ; 00468687
    PUSH EDX                            ; 0046868b
    PUSH EBX                            ; 0046868c
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046868d
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00468692
    TEST EAX,EAX                        ; 00468695
    JZ 0x00468700                       ; 00468697
        ;   XREF to: 00468700 (CONDITIONAL_JUMP)  ; LAB_00468700
    PUSH ESI                            ; 00468699
    LEA EDX,[ESP + 0x20]                ; 0046869a
    PUSH EDX                            ; 0046869e
    LEA EDX,[ESP + 0x30]                ; 0046869f
    PUSH EDX                            ; 004686a3
    LEA EDX,[ESP + 0x10]                ; 004686a4
    PUSH EDX                            ; 004686a8
    PUSH EAX                            ; 004686a9
    CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290 ; 004686aa
        ;   XREF to: 0044b290 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, ...)
    MOV dword ptr [ESP + 0x5c],EAX      ; 004686af
    FLD float ptr [ESP + 0x5c]          ; 004686b3
    ADD ESP,0x14                        ; 004686b7
    FST float ptr [ESP]                 ; 004686ba
    FLD1                                ; 004686bd
    FCOMPP                              ; 004686bf
    FNSTSW AX                           ; 004686c1
    SAHF                                ; 004686c3
    JC 0x00468700                       ; 004686c4
        ;   XREF to: 00468700 (CONDITIONAL_JUMP)  ; LAB_00468700
    TEST EDI,EDI                        ; 004686c6
    JZ 0x004686e6                       ; 004686c8
        ;   XREF to: 004686e6 (CONDITIONAL_JUMP)  ; LAB_004686e6
    LEA EAX,[ESP + 0x1c]                ; 004686ca
    CMP EDI,EAX                         ; 004686ce
    JZ 0x004686e6                       ; 004686d0
        ;   XREF to: 004686e6 (CONDITIONAL_JUMP)  ; LAB_004686e6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004686d2
    MOV dword ptr [EDI],EAX             ; 004686d6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004686d8
    MOV dword ptr [EDI + 0x4],EAX       ; 004686dc
    MOV EAX,dword ptr [ESP + 0x24]      ; 004686df
    MOV dword ptr [EDI + 0x8],EAX       ; 004686e3
    FLD float ptr [ESP]                 ; 004686e6
        ;   Label: LAB_004686e6
    FMUL float ptr [ESP + 0x2c]         ; 004686e9
    FADD float ptr [ESP + 0x8]          ; 004686ed
    FSTP float ptr [ESP + 0x38]         ; 004686f1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004686f5
    MOV ESP,EBP                         ; 004686f9
    POP EBP                             ; 004686fb
    POP EDI                             ; 004686fc
    POP ESI                             ; 004686fd
    POP EBX                             ; 004686fe
    RET                                 ; 004686ff
    MOV ECX,dword ptr [ESP + 0x34]      ; 00468700
        ;   Label: LAB_00468700
    DEC ECX                             ; 00468704
    MOV EDX,dword ptr [ESP + 0x44]      ; 00468705
    MOV dword ptr [ESP + 0x34],ECX      ; 00468709
    CMP ECX,EDX                         ; 0046870d
    JGE 0x0046867d                      ; 0046870f
        ;   XREF to: 0046867d (CONDITIONAL_JUMP)  ; LAB_0046867d
    TEST ESI,ESI                        ; 00468715
        ;   Label: LAB_00468715
    JZ 0x0046871f                       ; 00468717
        ;   XREF to: 0046871f (CONDITIONAL_JUMP)  ; LAB_0046871f
    MOV dword ptr [ESI],0x1             ; 00468719
    TEST EDI,EDI                        ; 0046871f
        ;   Label: LAB_0046871f
    JZ 0x00468737                       ; 00468721
        ;   XREF to: 00468737 (CONDITIONAL_JUMP)  ; LAB_00468737
    MOV dword ptr [EDI + 0x4],0x3f800000 ; 00468723
    MOV dword ptr [EDI + 0x8],0x0       ; 0046872a
    MOV dword ptr [EDI],0x0             ; 00468731
    MOV EAX,0x14b8a00                   ; 00468737
        ;   Label: LAB_00468737
    CMP EAX,0x2dd1184                   ; 0046873c
    JZ 0x00468765                       ; 00468741
        ;   XREF to: 00468765 (CONDITIONAL_JUMP)  ; LAB_00468765
    FLD float ptr [0x02dd1184]          ; 00468743 | DAT_02dd1184
    FLD float ptr [0x02dd118c]          ; 00468749 | DAT_02dd118c
    MOV EAX,[0x02dd1188]                ; 0046874f | DAT_02dd1188
    MOV [0x014b8a04],EAX                ; 00468754 | DAT_014b8a04
    FSTP float ptr [0x014b8a08]         ; 00468759 | DAT_014b8a08
    FSTP float ptr [0x014b8a00]         ; 0046875f | DAT_014b8a00
    MOV EAX,0x14b89f4                   ; 00468765
        ;   Label: LAB_00468765
    CMP EAX,0x14b8a00                   ; 0046876a
    JZ 0x00468793                       ; 0046876f
        ;   XREF to: 00468793 (CONDITIONAL_JUMP)  ; LAB_00468793
    FLD float ptr [0x014b8a00]          ; 00468771 | DAT_014b8a00
    FLD float ptr [0x014b8a08]          ; 00468777 | DAT_014b8a08
    MOV EAX,[0x014b8a04]                ; 0046877d | DAT_014b8a04
    MOV [0x014b89f8],EAX                ; 00468782 | DAT_014b89f8
    FSTP float ptr [0x014b89fc]         ; 00468787 | DAT_014b89fc
    FSTP float ptr [0x014b89f4]         ; 0046878d | DAT_014b89f4
    MOV EAX,0x14b89e8                   ; 00468793
        ;   Label: LAB_00468793
    CMP EAX,0x14b89f4                   ; 00468798
    JZ 0x004687c1                       ; 0046879d
        ;   XREF to: 004687c1 (CONDITIONAL_JUMP)  ; LAB_004687c1
    FLD float ptr [0x014b89f4]          ; 0046879f | DAT_014b89f4
    FLD float ptr [0x014b89fc]          ; 004687a5 | DAT_014b89fc
    MOV EAX,[0x014b89f8]                ; 004687ab | DAT_014b89f8
    MOV [0x014b89ec],EAX                ; 004687b0 | DAT_014b89ec
    FSTP float ptr [0x014b89f0]         ; 004687b5 | DAT_014b89f0
    FSTP float ptr [0x014b89e8]         ; 004687bb | DAT_014b89e8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004687c1
        ;   Label: LAB_004687c1
    MOV dword ptr [ESP + 0x38],EAX      ; 004687c5
    MOV EAX,dword ptr [ESP + 0x38]      ; 004687c9
    MOV ESP,EBP                         ; 004687cd
    POP EBP                             ; 004687cf
    POP EDI                             ; 004687d0
    POP ESI                             ; 004687d1
    POP EBX                             ; 004687d2
    RET                                 ; 004687d3

