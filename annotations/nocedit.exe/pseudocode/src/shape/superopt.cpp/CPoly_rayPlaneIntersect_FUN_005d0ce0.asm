; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_superopt_cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0(CPoly *this_ptr,CVec *ray_origin,CVec *ray_dir)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVec *           Stack[0x8]:4   ray_origin
; CVec *           Stack[0xc]:4   ray_dir
;
; Called Functions:
;   shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005d0ce0
        ;   Label: shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
    MOV ECX,dword ptr [ESP + 0x14]      ; 005d0ce3
    LEA EAX,[ECX + 0x40]                ; 005d0ce7
    PUSH EAX                            ; 005d0cea
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d0ceb
    SHL EAX,0x3                         ; 005d0cee
    MOV EDX,EAX                         ; 005d0cf1
    SHL EAX,0x3                         ; 005d0cf3
    SUB EAX,EDX                         ; 005d0cf6
    MOV EDX,EAX                         ; 005d0cf8
    MOV EAX,dword ptr [ECX]             ; 005d0cfa
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d0cfc
    ADD EAX,EDX                         ; 005d0cff
    PUSH EAX                            ; 005d0d01
    MOV EDX,dword ptr [ESP + 0x24]      ; 005d0d02
    PUSH EDX                            ; 005d0d06
    MOV ECX,dword ptr [ESP + 0x24]      ; 005d0d07
    PUSH ECX                            ; 005d0d0b
    CALL shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500 ; 005d0d0c
        ;   XREF to: 005d6500 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500(CVector3d * ray_origin, CVector3d * ray_dir, CVector3d * plane_point, CVector3d * plane_normal)
    MOV dword ptr [ESP + 0x18],EAX      ; 005d0d11
    MOV dword ptr [ESP + 0x1c],EDX      ; 005d0d15
    FLD double ptr [ESP + 0x18]         ; 005d0d19
    ADD ESP,0x10                        ; 005d0d1d
    FSTP double ptr [ESP]               ; 005d0d20
    MOV EAX,dword ptr [ESP]             ; 005d0d23
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d0d26
    ADD ESP,0x10                        ; 005d0d2a
    RET                                 ; 005d0d2d

