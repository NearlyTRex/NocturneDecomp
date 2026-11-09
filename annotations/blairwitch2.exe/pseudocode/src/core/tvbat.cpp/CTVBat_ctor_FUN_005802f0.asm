; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005802f0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tvbat.cpp_factoryFuncTVBat_FUN_00580290 at 005802a3
;
; Referenced Globals:
;   undefined4 DAT_005ed844
;   undefined4 DAT_005ed848
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005802f0
        ;   Label: core_tvbat.cpp_CTVBat_ctor_FUN_005802f0
    SUB ESP,0x8                         ; 005802f1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005802f4
    PUSH EBX                            ; 005802f8
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 005802f9
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005802fe
    ADD EAX,0x10afc                     ; 00580301
    PUSH EAX                            ; 00580306
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00580307
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xfffef504]          ; 0058030c
    ADD ESP,0x4                         ; 00580312
    MOV dword ptr [EBX + 0x2b0],0x5fd694 ; 00580315
    PUSH 0x3f8ccccd                     ; 0058031f
    MOV dword ptr [EBX + 0x10af8],0x0   ; 00580324
    PUSH 0x3f666666                     ; 0058032e
    MOV dword ptr [EBX + 0x10c7c],0x0   ; 00580333
    CALL core_actor.cpp_FUN_0040cf60    ; 0058033d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 00580342
    FLD float ptr [ESP + 0xc]           ; 00580346
    ADD ESP,0x8                         ; 0058034a
    PUSH 0x5ed83b                       ; 0058034d
    LEA EAX,[EBX + 0x10afc]             ; 00580352
    PUSH EAX                            ; 00580358
    FSTP float ptr [EBX + 0x10c78]      ; 00580359
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0058035f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00580364
    PUSH 0x3f8ccccd                     ; 00580367
    MOV dword ptr [EBX + 0x10c90],0x40a00000 ; 0058036c
    PUSH 0x3f666666                     ; 00580376
    MOV dword ptr [EBX + 0x10c8c],0x41700000 ; 0058037b
    CALL core_actor.cpp_FUN_0040cf60    ; 00580385
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0058038a
    FLD float ptr [ESP + 0xc]           ; 0058038e
    ADD ESP,0x8                         ; 00580392
    FMUL float ptr [0x005ed844]         ; 00580395 | DAT_005ed844
    PUSH 0x3f8ccccd                     ; 0058039b
    PUSH 0x3f666666                     ; 005803a0
    FSTP float ptr [EBX + 0x10c98]      ; 005803a5
    CALL core_actor.cpp_FUN_0040cf60    ; 005803ab
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 005803b0
    FLD float ptr [ESP + 0xc]           ; 005803b4
    ADD ESP,0x8                         ; 005803b8
    FMUL float ptr [0x005ed848]         ; 005803bb | DAT_005ed848
    PUSH 0x3f800000                     ; 005803c1
    FSTP float ptr [ESP + 0x4]          ; 005803c6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005803ca
    PUSH 0x0                            ; 005803ce
    MOV dword ptr [EBX + 0x10c94],EAX   ; 005803d0
    CALL core_actor.cpp_FUN_0040cf60    ; 005803d6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBX + 0x10ca0],0x0   ; 005803db
    MOV dword ptr [EBX + 0x10ca4],0x0   ; 005803e5
    MOV dword ptr [EBX + 0x10cb4],0x0   ; 005803ef
    MOV dword ptr [EBX + 0x282c],0x0    ; 005803f9
    MOV dword ptr [EBX + 0x10d2c],0x0   ; 00580403
    MOV byte ptr [EBX + 0x10cb8],0x0    ; 0058040d
    MOV dword ptr [EBX + 0x10d1c],0x41700000 ; 00580414
    MOV dword ptr [EBX + 0x10d20],0x41f00000 ; 0058041e
    MOV dword ptr [ESP + 0xc],EAX       ; 00580428
    MOV dword ptr [EBX + 0x10d28],0x0   ; 0058042c
    FLD float ptr [ESP + 0xc]           ; 00580436
    MOV EAX,EBX                         ; 0058043a
    FSTP float ptr [EBX + 0x10c9c]      ; 0058043c
    ADD ESP,0x8                         ; 00580442
    ADD ESP,0x8                         ; 00580445
    POP EBX                             ; 00580448
    RET                                 ; 00580449

