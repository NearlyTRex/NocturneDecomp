; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90 (SCapsuleCollision *out_data,float start_x,float start_z,float dir_x,float dir_z, float radius,void *user_data1,void *user_data2)
;
; Parameters:
; SCapsuleCollision * Stack[0x4]:4   out_data
; float            Stack[0x8]:4   start_x
; float            Stack[0xc]:4   start_z
; float            Stack[0x10]:4   dir_x
; float            Stack[0x14]:4   dir_z
; float            Stack[0x18]:4   radius
; void *           Stack[0x1c]:4   user_data1
; void *           Stack[0x20]:4   user_data2
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 at 00573caf
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00496b90
        ;   Label: core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
    MOV EBP,ESP                         ; 00496b91
    SUB ESP,0x14                        ; 00496b93
    AND ESP,0xfffffff8                  ; 00496b96
    MOV EDX,dword ptr [EBP + 0x8]       ; 00496b99
    FLD float ptr [EBP + 0x14]          ; 00496b9c
    FMUL ST0                            ; 00496b9f
    FLD float ptr [EBP + 0x18]          ; 00496ba1
    MOV EAX,dword ptr [EBP + 0xc]       ; 00496ba4
    FMUL float ptr [EBP + 0x18]         ; 00496ba7
    MOV dword ptr [EDX + 0x10],EAX      ; 00496baa
    MOV EAX,dword ptr [EBP + 0x10]      ; 00496bad
    MOV dword ptr [EDX + 0x14],EAX      ; 00496bb0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00496bb3
    MOV dword ptr [EDX + 0x18],EAX      ; 00496bb6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00496bb9
    MOV dword ptr [EDX + 0x1c],EAX      ; 00496bbc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00496bbf
    MOV dword ptr [EDX + 0x20],EAX      ; 00496bc2
    MOV EAX,dword ptr [EBP + 0x24]      ; 00496bc5
    MOV dword ptr [EDX + 0x24],EAX      ; 00496bc8
    MOV EAX,dword ptr [EBP + 0x20]      ; 00496bcb
    FADDP                               ; 00496bce
    MOV dword ptr [EDX + 0x28],EAX      ; 00496bd0
    FSQRT                               ; 00496bd3
    FLD float ptr [EBP + 0x1c]          ; 00496bd5
    FDIV ST0,ST1                        ; 00496bd8
    FLD float ptr [EBP + 0xc]           ; 00496bda
    FMUL float ptr [EBP + 0x14]         ; 00496bdd
    FLD float ptr [EBP + 0x10]          ; 00496be0
    FMUL float ptr [EBP + 0x18]         ; 00496be3
    FLD1                                ; 00496be6
    FADDP ST3,ST0                       ; 00496be8
    FLD ST2                             ; 00496bea
    FMUL float ptr [EBP + 0x14]         ; 00496bec
    FXCH                                ; 00496bef
    FADDP ST2,ST0                       ; 00496bf1
    FMUL float ptr [EBP + 0x14]         ; 00496bf3
    FXCH                                ; 00496bf6
    FSTP float ptr [EDX + 0x2c]         ; 00496bf8
    FADD float ptr [EDX + 0x2c]         ; 00496bfb
    FXCH                                ; 00496bfe
    FMUL float ptr [EBP + 0x18]         ; 00496c00
    FMUL float ptr [EBP + 0x18]         ; 00496c03
    MOV dword ptr [EDX],0x3f8147ae      ; 00496c06
    FXCH ST2                            ; 00496c0c
    FST float ptr [ESP]                 ; 00496c0e
    FXCH ST2                            ; 00496c11
    FADDP                               ; 00496c13
    FLDZ                                ; 00496c15
    FXCH                                ; 00496c17
    FSTP float ptr [EDX + 0x30]         ; 00496c19
    FCOMPP                              ; 00496c1c
    FNSTSW AX                           ; 00496c1e
    SAHF                                ; 00496c20
    JNC 0x00496c40                      ; 00496c21
        ;   XREF to: 00496c40 (CONDITIONAL_JUMP)  ; LAB_00496c40
    FLD1                                ; 00496c23
    FLD float ptr [EBP + 0x14]          ; 00496c25
    FXCH                                ; 00496c28
    FDIV float ptr [ESP]                ; 00496c2a
    FXCH                                ; 00496c2d
    FMUL ST1                            ; 00496c2f
    FLD float ptr [EBP + 0x18]          ; 00496c31
    FMULP ST2                           ; 00496c34
    FSTP float ptr [EDX + 0x34]         ; 00496c36
    FSTP float ptr [EDX + 0x38]         ; 00496c39
    MOV ESP,EBP                         ; 00496c3c
    POP EBP                             ; 00496c3e
    RET                                 ; 00496c3f
    MOV dword ptr [EDX + 0x38],0x0      ; 00496c40
        ;   Label: LAB_00496c40
    MOV dword ptr [EDX + 0x34],0x0      ; 00496c47
    MOV ESP,EBP                         ; 00496c4e
    POP EBP                             ; 00496c50
    RET                                 ; 00496c51

