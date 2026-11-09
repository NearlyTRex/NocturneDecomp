; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_actor.cpp_FUN_00409f60 at 0040ab4d
;   core_elephant.cpp_FUN_00486d40 at 004874f3
;   core_exorcism.cpp_FUN_0048b020 at 0048b4e4
;   core_fire.cpp_FUN_0049df60 at 0049e15d
;   core_flamecan.cpp_FUN_004a7160 at 004a7191
;   core_gun.cpp_FUN_004d0fc0 at 004d150f
;   core_rifle.cpp_FUN_00527d70 at 00528407
;   core_set.cpp_FUN_005353e0 at 00535826
;   core_tommygun.cpp_FUN_0056b410 at 0056b9a6
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7110
        ;   Label: core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
    PUSH ESI                            ; 004a7111
    PUSH EDI                            ; 004a7112
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a7113
    LEA ESI,[EDI + 0x360]               ; 004a7117
    MOV dword ptr [EDI + 0x2d4],0x1     ; 004a711d
    XOR EBX,EBX                         ; 004a7127
    PUSH 0xffff                         ; 004a7129
        ;   Label: LAB_004a7129
    PUSH 0x0                            ; 004a712e
    PUSH 0x4000                         ; 004a7130
    PUSH 0x4000                         ; 004a7135
    PUSH 0x0                            ; 004a713a
    PUSH ESI                            ; 004a713c
    MOV EDX,dword ptr [0x005fc5a0]      ; 004a713d | DAT_005fc5a0
    PUSH EDX                            ; 004a7143
    INC EBX                             ; 004a7144
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004a7145
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004a714a
    CMP EBX,0x5                         ; 004a714d
    JL 0x004a7129                       ; 004a7150
        ;   XREF to: 004a7129 (CONDITIONAL_JUMP)  ; LAB_004a7129
    MOV dword ptr [EDI + 0x4f4],0x1     ; 004a7152
    POP EDI                             ; 004a715c
    POP ESI                             ; 004a715d
    POP EBX                             ; 004a715e
    RET                                 ; 004a715f

