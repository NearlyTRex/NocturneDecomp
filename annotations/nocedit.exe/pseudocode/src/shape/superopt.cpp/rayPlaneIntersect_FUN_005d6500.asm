; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500(CVector3d *ray_origin,CVector3d *ray_dir,CVector3d *plane_point,CVector3d *plane_normal)
;
; Parameters:
; CVector3d *      Stack[0x8]:4   ray_origin
; CVector3d *      Stack[0xc]:4   ray_dir
; CVector3d *      Stack[0x10]:4   plane_point
; CVector3d *      Stack[0x14]:4   plane_normal
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[2]:
;   shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0 at 005d0d0c
;   shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0 at 005d6402
;
; Referenced Globals:
;   double DOUBLE_0065454a = 1.00000000000000E-8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d6500
        ;   Label: shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
    PUSH ESI                            ; 005d6501
    PUSH EBP                            ; 005d6502
    MOV EBP,ESP                         ; 005d6503
    SUB ESP,0x60                        ; 005d6505
    AND ESP,0xfffffff8                  ; 005d6508
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d650b
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d650e
    MOV EBX,dword ptr [EBP + 0x18]      ; 005d6511
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005d6514
    MOV EAX,dword ptr [EBX]             ; 005d6517
    MOV dword ptr [ESP + 0x40],EAX      ; 005d6519
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d651d
    MOV dword ptr [ESP + 0x44],EAX      ; 005d6520
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d6524
    MOV dword ptr [ESP + 0x48],EAX      ; 005d6527
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d652b
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d652e
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d6532
    MOV dword ptr [ESP + 0x50],EAX      ; 005d6535
    MOV EAX,dword ptr [EBX + 0x14]      ; 005d6539
    MOV dword ptr [ESP + 0x54],EAX      ; 005d653c
    FLD double ptr [EDX + 0x8]          ; 005d6540
    FMUL double ptr [ESP + 0x48]        ; 005d6543
    FLD double ptr [EDX]                ; 005d6547
    FMUL double ptr [ESP + 0x40]        ; 005d6549
    FADDP                               ; 005d654d
    MOV EAX,dword ptr [ECX]             ; 005d654f
    FLD double ptr [EDX + 0x10]         ; 005d6551
    MOV dword ptr [ESP + 0x28],EAX      ; 005d6554
    FMUL double ptr [ESP + 0x50]        ; 005d6558
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d655c
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d655f
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d6563
    MOV dword ptr [ESP + 0x30],EAX      ; 005d6566
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d656a
    MOV dword ptr [ESP + 0x34],EAX      ; 005d656d
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d6571
    MOV dword ptr [ESP + 0x38],EAX      ; 005d6574
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d6578
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d657b
    FLD double ptr [EDX + 0x8]          ; 005d657f
    FMUL double ptr [ESP + 0x30]        ; 005d6582
    FLD double ptr [EDX + 0x8]          ; 005d6586
    FMUL double ptr [ESI + 0x8]         ; 005d6589
    FLD double ptr [EDX]                ; 005d658c
    FMUL double ptr [ESP + 0x28]        ; 005d658e
    FLD double ptr [EDX]                ; 005d6592
    FMUL double ptr [ESI]               ; 005d6594
    FXCH                                ; 005d6596
    FADDP ST3,ST0                       ; 005d6598
    FADDP                               ; 005d659a
    FLD double ptr [EDX + 0x10]         ; 005d659c
    FMUL double ptr [ESP + 0x38]        ; 005d659f
    FLD double ptr [EDX + 0x10]         ; 005d65a3
    FMUL double ptr [ESI + 0x10]        ; 005d65a6
    FXCH ST4                            ; 005d65a9
    FADDP ST5,ST0                       ; 005d65ab
    FLDZ                                ; 005d65ad
    FXCH ST5                            ; 005d65af
    FCHS                                ; 005d65b1
    FXCH ST4                            ; 005d65b3
    FADDP ST2,ST0                       ; 005d65b5
    FADDP ST2,ST0                       ; 005d65b7
    FSTP double ptr [ESP + 0x8]         ; 005d65b9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d65bd
    FADDP                               ; 005d65c1
    MOV dword ptr [ESP + 0x18],EAX      ; 005d65c3
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d65c7
    FSTP double ptr [ESP + 0x10]        ; 005d65cb
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d65cf
    FCOMP double ptr [ESP + 0x8]        ; 005d65d3
    FNSTSW AX                           ; 005d65d7
    SAHF                                ; 005d65d9
    JBE 0x005d6610                      ; 005d65da
        ;   XREF to: 005d6610 (CONDITIONAL_JUMP)  ; LAB_005d6610
    FLD double ptr [ESP + 0x8]          ; 005d65dc
    FCHS                                ; 005d65e0
    FSTP double ptr [ESP]               ; 005d65e2
    FLD double ptr [ESP]                ; 005d65e5
        ;   Label: LAB_005d65e5
    FCOMP double ptr [0x0065454a]       ; 005d65e8 | DOUBLE_0065454a
    FNSTSW AX                           ; 005d65ee
    SAHF                                ; 005d65f0
    JNC 0x005d6621                      ; 005d65f1
        ;   XREF to: 005d6621 (CONDITIONAL_JUMP)  ; LAB_005d6621
    XOR EDX,EDX                         ; 005d65f3
    MOV ECX,0xbff00000                  ; 005d65f5
    MOV dword ptr [ESP + 0x20],EDX      ; 005d65fa
    MOV dword ptr [ESP + 0x24],ECX      ; 005d65fe
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d6602
    MOV EDX,dword ptr [ESP + 0x24]      ; 005d6606
    MOV ESP,EBP                         ; 005d660a
    POP EBP                             ; 005d660c
    POP ESI                             ; 005d660d
    POP EBX                             ; 005d660e
    RET                                 ; 005d660f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d6610
        ;   Label: LAB_005d6610
    MOV dword ptr [ESP],EAX             ; 005d6614
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d6617
    MOV dword ptr [ESP + 0x4],EAX       ; 005d661b
    JMP 0x005d65e5                      ; 005d661f
        ;   XREF to: 005d65e5 (UNCONDITIONAL_JUMP)  ; LAB_005d65e5
    FLD double ptr [ESP + 0x10]         ; 005d6621
        ;   Label: LAB_005d6621
    FDIV double ptr [ESP + 0x18]        ; 005d6625
    FCHS                                ; 005d6629
    FSTP double ptr [ESP + 0x20]        ; 005d662b
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d662f
    MOV EDX,dword ptr [ESP + 0x24]      ; 005d6633
    MOV ESP,EBP                         ; 005d6637
    POP EBP                             ; 005d6639
    POP ESI                             ; 005d663a
    POP EBX                             ; 005d663b
    RET                                 ; 005d663c

