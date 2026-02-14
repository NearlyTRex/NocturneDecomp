; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3d * __cdecl shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   point
; CVector3d *      Stack[0x8]:4   plane_point
; CVector3d *      Stack[0xc]:4   plane_normal
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
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   shape_superopt.cpp_CObj_findCoplanarPolygon_FUN_005d5800 at 005d59f9
;
; Called Functions:
;   shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d63d0
        ;   Label: shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0
    PUSH EDI                            ; 005d63d1
    PUSH EBP                            ; 005d63d2
    MOV EBP,ESP                         ; 005d63d3
    SUB ESP,0x64                        ; 005d63d5
    MOV EBX,dword ptr [EBP + 0x18]      ; 005d63d8
    MOV dword ptr [EBP + -0x4],ESI      ; 005d63db
    MOV ESI,dword ptr [EBP + 0x10]      ; 005d63de
    FLD double ptr [EBX]                ; 005d63e1
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d63e3
    LEA EAX,[EBP + -0x64]               ; 005d63e6
    PUSH EBX                            ; 005d63e9
    FCHS                                ; 005d63ea
    FSTP double ptr [EBP + -0x64]       ; 005d63ec
    PUSH EDX                            ; 005d63ef
    FLD double ptr [EBX + 0x8]          ; 005d63f0
    FCHS                                ; 005d63f3
    FSTP double ptr [EBP + -0x5c]       ; 005d63f5
    PUSH EAX                            ; 005d63f8
    FLD double ptr [EBX + 0x10]         ; 005d63f9
    FCHS                                ; 005d63fc
    PUSH ESI                            ; 005d63fe
    FSTP double ptr [EBP + -0x54]       ; 005d63ff
    CALL shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500 ; 005d6402
        ;   XREF to: 005d6500 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500(CVector3d * ray_origin, CVector3d * ray_dir, CVector3d * plane_point, CVector3d * plane_normal)
    FLD double ptr [EBX]                ; 005d6407
    FCHS                                ; 005d6409
    FSTP double ptr [EBP + -0x34]       ; 005d640b
    FLD double ptr [EBX + 0x8]          ; 005d640e
    FCHS                                ; 005d6411
    FST double ptr [EBP + -0x2c]        ; 005d6413
    FMUL double ptr [EBP + -0x2c]       ; 005d6416
    FLD double ptr [EBP + -0x34]        ; 005d6419
    FMUL ST0                            ; 005d641c
    FLD double ptr [EBX + 0x10]         ; 005d641e
    FCHS                                ; 005d6421
    FXCH                                ; 005d6423
    FADDP ST2,ST0                       ; 005d6425
    FST double ptr [EBP + -0x24]        ; 005d6427
    FMUL double ptr [EBP + -0x24]       ; 005d642a
    FADDP                               ; 005d642d
    MOV dword ptr [EBP + -0xc],EAX      ; 005d642f
    FSQRT                               ; 005d6432
    MOV dword ptr [EBP + -0x8],EDX      ; 005d6434
    FLD double ptr [EBP + -0xc]         ; 005d6437
    FLD double ptr [EBP + -0x34]        ; 005d643a
    FXCH ST2                            ; 005d643d
    FDIVP                               ; 005d643f
    FXCH                                ; 005d6441
    FMUL ST1                            ; 005d6443
    FLD double ptr [EBP + -0x2c]        ; 005d6445
    FMUL ST2                            ; 005d6448
    FLD double ptr [EBP + -0x24]        ; 005d644a
    FMULP ST3                           ; 005d644d
    MOV EDI,dword ptr [EBP + -0x4]      ; 005d644f
    MOV ECX,0x6                         ; 005d6452
    ADD ESP,0x10                        ; 005d6457
    FXCH                                ; 005d645a
    FSTP double ptr [EBP + -0x34]       ; 005d645c
    FSTP double ptr [EBP + -0x2c]       ; 005d645f
    FSTP double ptr [EBP + -0x24]       ; 005d6462
    FLD double ptr [ESI + 0x8]          ; 005d6465
    FLD double ptr [ESI + 0x10]         ; 005d6468
    FLD double ptr [ESI]                ; 005d646b
    LEA ESI,[EBP + -0x4c]               ; 005d646d
    FADD double ptr [EBP + -0x34]       ; 005d6470
    FXCH ST2                            ; 005d6473
    FADD double ptr [EBP + -0x2c]       ; 005d6475
    FXCH                                ; 005d6478
    FADD double ptr [EBP + -0x24]       ; 005d647a
    FXCH ST2                            ; 005d647d
    FSTP double ptr [EBP + -0x4c]       ; 005d647f
    FSTP double ptr [EBP + -0x44]       ; 005d6482
    FSTP double ptr [EBP + -0x3c]       ; 005d6485
    MOVSD.REP ES:EDI,ESI                ; 005d6488
    MOV EAX,dword ptr [EBP + -0x4]      ; 005d648a
    MOV ESP,EBP                         ; 005d648d
    POP EBP                             ; 005d648f
    POP EDI                             ; 005d6490
    POP EBX                             ; 005d6491
    RET                                 ; 005d6492

